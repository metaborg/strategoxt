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
ATerm term_a_29;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_f_28;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_i_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_h_26;
ATerm term_a_26;
ATerm term_i_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_a_24;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_m_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_z_20;
ATerm term_g_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_x_17;
ATerm term_p_17;
ATerm term_s_10;
ATerm term_m_9;
ATerm term_k_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_s_4;
void init_constant_terms (void)
{
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_9);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_22);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__3, term_s_26, term_t_26, term_s_4);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm DefDead_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_100 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm DeclareNotDead_0_0 (ATerm);
ATerm n_0 (ATerm);
ATerm DeclareDefDead_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm k_100 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm j_100 (ATerm), ATerm);
ATerm scope_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm u_0 (ATerm);
ATerm local_dead_def_elim_0_0 (ATerm);
ATerm map_1_0 (ATerm c_94 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm);
ATerm Let_2_0 (ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm);
ATerm w_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm union_1_0 (ATerm p_96 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm c_1 (ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm b_1 (ATerm);
ATerm g_1 (ATerm);
ATerm free_vars_3_0 (ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm i_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm Definition_0_0 (ATerm);
ATerm diff_1_0 (ATerm l_96 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNext_3_0 (ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm);
ATerm for_3_0 (ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm);
ATerm assert_1_0 (ATerm n_100 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm RegisterDefinition_0_0 (ATerm);
ATerm k_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm p_2 (ATerm);
ATerm dead_def_elim_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm o_73 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm t_73 (ATerm), ATerm);
ATerm _2_0 (ATerm v_68 (ATerm), ATerm w_68 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm u_109 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm p_3 (ATerm);
ATerm d_3 (ATerm);
ATerm i_3 (ATerm);
ATerm o_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm w_112 (ATerm), ATerm);
ATerm o_18 (ATerm i_18, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm n_94 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm t_94 (ATerm), ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm y_110 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm c_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_110 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm u_113 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm c_86 (ATerm), ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm d_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm x_115 (ATerm), ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm parse_options_1_0 (ATerm w_115 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm z_113 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm f_7 (ATerm);
ATerm iowrap_3_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm w_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_0 = NULL,k_0 = NULL;
  i_0 = t;
  t = term_s_4;
  t = whoami_0_0(t);
  k_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), k_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = i_0;
  return(t);
}
ATerm DefDead_0_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  d_1 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      e_1 = ATgetArgument(t, 0);
      {
        ATerm a_8 = ATgetArgument(t, 1);
      }
      {
        ATerm b_8 = ATgetArgument(t, 2);
      }
      {
        ATerm d_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue)), (ATerm) ATmakeAppl(sym_SDefT_4, e_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_0 = ATgetFirst((ATermList) t);
            {
              ATerm l_8 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = q_0;
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        {
          ATerm k_1 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue)), (ATerm) ATmakeAppl(sym_SDefT_4, e_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_1 = ATgetFirst((ATermList) t);
              {
                ATerm m_8 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = k_1;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm n_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_8) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_s_4;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_100 (ATerm), ATerm t)
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
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_0 (ATerm t)
            {
              t = filter_1_0(r_100, t);
              return(t);
            }
            t = Cons_2_0(r_100, m_0, t);
            ;
            LocalPopChoice(r_8);
          }
        else
          {
            t = q_8;
            {
              ATerm r_1 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_8 = ATgetFirst((ATermList) t);
                  r_1 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = r_1;
              t = filter_1_0(r_100, t);
            }
          }
      }
    }
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm a_2 = NULL,g_2 = NULL,h_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__3))
    {
      a_2 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
      h_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(a_2, g_2);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_8 = ATgetFirst((ATermList) t);
      m_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(a_2, g_2, (ATerm) ATinsert(CheckATermList(m_2), h_2));
  t = (ATerm) ATmakeAppl(sym__3, a_2, g_2, h_2);
  return(t);
}
ATerm DeclareNotDead_0_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm v_8 = ATgetArgument(t, 0);
      if(match_cons(v_8, sym_SVar_1))
        {
          w_2 = ATgetArgument(v_8, 0);
        }
      else
        _fail(t);
      {
        ATerm w_8 = ATgetArgument(t, 1);
      }
      {
        ATerm x_8 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_9, (ATerm)ATmakeAppl(sym_SDefT_4, w_2, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_c_9);
  t = table_replace_0_0(t);
  t = x_2;
  return(t);
}
ATerm n_0 (ATerm t)
{
  t = term_b_9;
  return(t);
}
ATerm DeclareDefDead_0_0 (ATerm t)
{
  ATerm y_2 = NULL,a_3 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      y_2 = ATgetArgument(t, 0);
      {
        ATerm f_9 = ATgetArgument(t, 1);
      }
      {
        ATerm g_9 = ATgetArgument(t, 2);
      }
      {
        ATerm j_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, y_2, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_m_9);
  t = assert_1_0(n_0, t);
  t = a_3;
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm e_3 = NULL,g_3 = NULL,h_3 = NULL;
  if(match_cons(t, sym__2))
    {
      e_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_9 = ATgetArgument(t, 0);
            ATerm v_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_3, g_3);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_9 = ATgetFirst((ATermList) t);
            w_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_1;
        ;
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        t = (ATerm) ATempty;
      }
    h_3 = t;
    t = SSL_table_put(e_3, g_3, h_3);
    t = (ATerm) ATmakeAppl(sym__2, e_3, g_3);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm k_100 (ATerm), ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,x_3 = NULL,y_3 = NULL;
  s_3 = t;
  t = k_100(t);
  t_3 = t;
  {
    ATerm b_10 = t;
    int p_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(t_3, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(p_10);
      }
    else
      {
        t = b_10;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_3 = ATgetFirst((ATermList) t);
        x_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(t_3, (ATerm)ATmakeAppl(sym_Scopes_0), x_3);
    t = y_3;
    {
      ATerm o_0 (ATerm t)
      {
        ATerm z_3 = NULL;
        z_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_3, z_3);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(o_0, t);
      t = s_3;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_91(t);
      t = j_91(t);
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      t = j_91(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,h_4 = NULL;
  d_4 = t;
  t = j_100(t);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_4, term_s_10);
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_10 = ATgetArgument(t, 0);
            ATerm x_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        t = (ATerm) ATempty;
      }
    h_4 = t;
    t = SSL_table_put(e_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(h_4), (ATerm) ATempty));
    t = d_4;
  }
  return(t);
}
ATerm scope_2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t)
{
  t = begin_scope_1_0(l_100, t);
  {
    ATerm p_0 (ATerm t)
    {
      t = end_scope_1_0(l_100, t);
      return(t);
    }
    t = restore_always_2_0(m_100, p_0, t);
  }
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_b_9;
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = map_1_0(DeclareDefDead_0_0, t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm d_11 = t;
  if((PushChoice() == 0))
    {
      t = DefDead_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_11;
    }
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = filter_1_0(v_0, t);
  return(t);
}
ATerm local_dead_def_elim_0_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Let_2_0(t_0, _id, t);
        ;
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        {
          ATerm k_11 = t;
          int l_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = DeclareNotDead_0_0(t);
              ;
              LocalPopChoice(l_11);
            }
          else
            {
              t = k_11;
            }
        }
      }
    t = SRTS_all(local_dead_def_elim_0_0, t);
    {
      ATerm m_11 = t;
      int o_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Let_2_0(u_0, _id, t);
          ;
          LocalPopChoice(o_11);
        }
      else
        {
          t = m_11;
        }
    }
    return(t);
  }
  t = scope_2_0(r_0, s_0, t);
  return(t);
}
ATerm map_1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm p_11 = t;
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
        t = p_11;
        t = Cons_2_0(c_94, w_4, t);
      }
    return(t);
  }
  t = w_4(t);
  return(t);
}
ATerm Rec_2_0 (ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm t)
{
  ATerm x_4 = NULL,a_5 = NULL,b_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
  g_5 = t;
  if(match_cons(t, sym_Rec_2))
    {
      a_5 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_5);
  x_4 = t;
  t = a_5;
  t = t_78(t);
  e_5 = t;
  t = b_5;
  t = u_78(t);
  f_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, e_5, f_5), x_4);
  return(t);
}
ATerm SDefT_4_0 (ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm t)
{
  ATerm l_5 = NULL,o_5 = NULL,p_5 = NULL,u_5 = NULL,v_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
  d_6 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      o_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
      u_5 = ATgetArgument(t, 2);
      v_5 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_6);
  l_5 = t;
  t = o_5;
  t = o_80(t);
  z_5 = t;
  t = p_5;
  t = p_80(t);
  a_6 = t;
  t = u_5;
  t = q_80(t);
  b_6 = t;
  t = v_5;
  t = r_80(t);
  c_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, z_5, a_6, b_6, c_6), l_5);
  return(t);
}
ATerm SDef_3_0 (ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,u_6 = NULL,v_6 = NULL,a_7 = NULL;
  a_7 = t;
  if(match_cons(t, sym_SDef_3))
    {
      o_6 = ATgetArgument(t, 0);
      p_6 = ATgetArgument(t, 1);
      q_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_7);
  n_6 = t;
  t = o_6;
  t = l_80(t);
  r_6 = t;
  t = p_6;
  t = m_80(t);
  u_6 = t;
  t = q_6;
  t = n_80(t);
  v_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, r_6, u_6, v_6), n_6);
  return(t);
}
ATerm Let_2_0 (ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm t)
{
  ATerm d_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,m_7 = NULL,n_7 = NULL;
  n_7 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_7 = ATgetArgument(t, 0);
      h_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_7);
  d_7 = t;
  t = g_7;
  t = w_77(t);
  i_7 = t;
  t = h_7;
  t = x_77(t);
  m_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, i_7, m_7), d_7);
  return(t);
}
ATerm sboundin_3_0 (ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t)
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(g_87, g_87, t);
      ;
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      {
        ATerm z_11 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(i_87, i_87, g_87, t);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = z_11;
            {
              ATerm i_12 = t;
              int k_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(i_87, i_87, i_87, g_87, t);
                  ;
                  LocalPopChoice(k_12);
                }
              else
                {
                  t = i_12;
                  t = Rec_2_0(i_87, g_87, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm s_8 = NULL;
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          s_8 = ATgetArgument(t, 0);
          {
            ATerm o_12 = ATgetArgument(t, 1);
          }
          {
            ATerm p_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_12);
      t = s_8;
    }
  else
    {
      t = l_12;
      if(match_cons(t, sym_SDefT_4))
        {
          s_8 = ATgetArgument(t, 0);
          {
            ATerm q_12 = ATgetArgument(t, 1);
          }
          {
            ATerm r_12 = ATgetArgument(t, 2);
          }
          {
            ATerm s_12 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = s_8;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm c_8 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      c_8 = ATgetArgument(t, 0);
      {
        ATerm t_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_8;
  t = map_1_0(w_0, t);
  return(t);
}
ATerm union_1_0 (ATerm p_96 (ATerm), ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL;
  if(match_cons(t, sym__2))
    {
      z_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_8;
  {
    ATerm a_9 (ATerm t)
    {
      ATerm v_12 = t;
      int w_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = y_8;
          ;
          LocalPopChoice(w_12);
        }
      else
        {
          t = v_12;
          {
            ATerm d_13 = t;
            int l_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_1 = NULL,z_1 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_1 = ATgetFirst((ATermList) t);
                    z_1 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = y_8;
                {
                  ATerm x_0 (ATerm t)
                  {
                    ATerm b_2 = NULL;
                    b_2 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_1, b_2);
                    t = p_96(t);
                    return(t);
                  }
                  t = fetch_1_0(x_0, t);
                  t = z_1;
                  t = a_9(t);
                }
                ;
                LocalPopChoice(l_13);
              }
            else
              {
                t = d_13;
                t = Cons_2_0(_id, a_9, t);
              }
          }
        }
      return(t);
    }
    t = a_9(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm t)
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_99(t);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm d_9 = NULL,e_9 = NULL,h_9 = NULL,i_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_9 = ATgetFirst((ATermList) t);
            e_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_9;
        t = g_99(t);
        h_9 = t;
        t = e_9;
        t = foldr_3_0(e_99, f_99, g_99, t);
        i_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_9, i_9);
        t = f_99(t);
      }
    }
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm s_2 = NULL;
  if(match_cons(t, sym__2))
    {
      s_2 = ATgetArgument(t, 0);
      if((s_2 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm f_3 = NULL;
  if(match_cons(t, sym__2))
    {
      f_3 = ATgetArgument(t, 0);
      if((f_3 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = union_1_0(c_1, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = union_1_0(h_1, t);
  return(t);
}
ATerm free_vars_3_0 (ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm i_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm q_9 (ATerm t)
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_103(t);
        ;
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        {
          ATerm q_13 = t;
          int z_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_9 = NULL,n_9 = NULL,l_2 = NULL,n_2 = NULL;
              l_9 = t;
              t = h_103(t);
              n_9 = t;
              t = l_9;
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm f_2 = NULL;
                  t = q_9(t);
                  f_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_2, n_9);
                  t = diff_0_0(t);
                  return(t);
                }
                t = i_103(y_0, q_9, z_0, t);
                l_2 = t;
                t = SSL_explode_term(l_2);
                if(match_cons(t, sym__2))
                  {
                    ATerm a_14 = ATgetArgument(t, 0);
                    n_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_2;
                t = foldr_3_0(a_1, b_1, _id, t);
              }
              ;
              LocalPopChoice(z_13);
            }
          else
            {
              t = q_13;
              {
                ATerm v_2 = NULL,z_2 = NULL;
                v_2 = t;
                t = SSL_explode_term(v_2);
                if(match_cons(t, sym__2))
                  {
                    ATerm b_14 = ATgetArgument(t, 0);
                    z_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_2;
                t = foldr_3_0(f_1, g_1, q_9, t);
              }
            }
        }
      }
    return(t);
  }
  t = q_9(t);
  return(t);
}
ATerm Definition_0_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      r_9 = ATgetArgument(t, 0);
      {
        ATerm c_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, r_9, (ATerm) ATempty));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_9 = ATgetFirst((ATermList) t);
      {
        ATerm f_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_9;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm g_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_14) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9;
  return(t);
}
ATerm diff_1_0 (ATerm l_96 (ATerm), ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL;
  if(match_cons(t, sym__2))
    {
      y_9 = ATgetArgument(t, 0);
      x_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9;
  {
    ATerm z_9 (ATerm t)
    {
      ATerm h_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(i_14);
        }
      else
        {
          t = h_14;
          {
            ATerm l_14 = t;
            int m_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_3 = NULL,m_3 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    l_3 = ATgetFirst((ATermList) t);
                    m_3 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = x_9;
                {
                  ATerm i_1 (ATerm t)
                  {
                    ATerm n_3 = NULL;
                    n_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, l_3, n_3);
                    t = l_96(t);
                    return(t);
                  }
                  t = fetch_1_0(i_1, t);
                  t = m_3;
                  t = z_9(t);
                }
                ;
                LocalPopChoice(m_14);
              }
            else
              {
                t = l_14;
                t = Cons_2_0(_id, z_9, t);
              }
          }
        }
      return(t);
    }
    t = z_9(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm t)
{
  ATerm a_10 (ATerm t)
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_92(t);
        ;
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        t = o_92(t);
        t = _2_0(q_92, a_10, t);
        t = p_92(t);
      }
    return(t);
  }
  t = a_10(t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_14 = ATgetArgument(t, 0);
      if(((ATgetType(p_14) != AT_LIST) || !(ATisEmpty(p_14))))
        _fail(t);
      {
        ATerm q_14 = ATgetArgument(t, 1);
        if(((ATgetType(q_14) != AT_LIST) || !(ATisEmpty(q_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_14 = ATgetArgument(t, 0);
      if(((ATgetType(r_14) == AT_LIST) && !(ATisEmpty(r_14))))
        {
          j_10 = ATgetFirst((ATermList) r_14);
          l_10 = (ATerm) ATgetNext((ATermList) r_14);
        }
      else
        _fail(t);
      {
        ATerm t_14 = ATgetArgument(t, 1);
        if(((ATgetType(t_14) == AT_LIST) && !(ATisEmpty(t_14))))
          {
            k_10 = ATgetFirst((ATermList) t_14);
            m_10 = (ATerm) ATgetNext((ATermList) t_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_10, k_10), (ATerm) ATmakeAppl(sym__2, l_10, m_10));
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL;
  if(match_cons(t, sym__2))
    {
      n_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_10), n_10);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_14 = ATgetFirst((ATermList) t);
      if(match_cons(u_14, sym__2))
        {
          c_10 = ATgetArgument(u_14, 0);
          d_10 = ATgetArgument(u_14, 1);
        }
      else
        _fail(t);
      e_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_10);
  if(match_cons(t, sym__2))
    {
      f_10 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(c_10);
  if(match_cons(t, sym__2))
    {
      if((f_10 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_10, g_10);
  t = genzip_4_0(j_1, l_1, m_1, _id, t);
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_10, e_10);
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_14 = ATgetArgument(t, 0);
            ATerm z_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_10;
        {
          ATerm n_1 (ATerm t)
          {
            t = e_10;
            return(t);
          }
          t = at_end_1_0(n_1, t);
        }
        ;
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
        {
          ATerm a_4 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, i_10, e_10));
          if(match_cons(t, sym__2))
            {
              ATerm a_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_15) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              a_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_4;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm w_10 = NULL;
  w_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, w_10);
  return(t);
}
ATerm s_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,c_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_10 = ATgetFirst((ATermList) t);
          c_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_10;
      if(match_cons(t, sym__2))
        {
          z_10 = ATgetArgument(t, 0);
          a_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_11;
      if((z_10 != t))
        {
          _fail(t);
        }
      t = c_11;
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm n_11 = NULL;
  if(match_cons(t, sym__2))
    {
      n_11 = ATgetArgument(t, 0);
      if((n_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        t = _2_0(_id, s_1, t);
        return(t);
      }
      ATerm q_1 (ATerm t)
      {
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(_id, t_1, t);
            ;
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            {
              ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
              if(match_cons(t, sym__2))
                {
                  g_11 = ATgetArgument(t, 0);
                  h_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_11;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_11 = ATgetFirst((ATermList) t);
                  j_11 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_11), i_11), j_11);
            }
          }
        return(t);
      }
      t = for_3_0(o_1, p_1, q_1, t);
      ;
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      t = diff_1_0(u_1, t);
    }
  return(t);
}
ATerm GnNext_3_0 (ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,x_11 = NULL,y_11 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm i_15 = ATgetArgument(t, 0);
      if(((ATgetType(i_15) == AT_LIST) && !(ATisEmpty(i_15))))
        {
          q_11 = ATgetFirst((ATermList) i_15);
          r_11 = (ATerm) ATgetNext((ATermList) i_15);
        }
      else
        _fail(t);
      s_11 = ATgetArgument(t, 1);
      x_11 = ATgetArgument(t, 2);
      y_11 = ATgetArgument(t, 3);
      b_12 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_11, x_11);
  t = a_117(t);
  c_12 = t;
  t = b_117(t);
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_12, s_11);
  t = diff_0_0(t);
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_12, r_11);
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_15 = ATgetArgument(t, 0);
            ATerm n_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_12;
        {
          ATerm v_1 (ATerm t)
          {
            t = r_11;
            return(t);
          }
          t = at_end_1_0(v_1, t);
        }
        ;
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        {
          ATerm g_4 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, e_12, r_11));
          if(match_cons(t, sym__2))
            {
              ATerm p_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_15) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              g_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_4;
          t = concat_0_0(t);
        }
      }
    f_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_12, s_11);
    {
      ATerm v_15 = t;
      int w_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm x_15 = ATgetArgument(t, 0);
              ATerm z_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_12;
          {
            ATerm y_1 (ATerm t)
            {
              t = s_11;
              return(t);
            }
            t = at_end_1_0(y_1, t);
          }
          ;
          LocalPopChoice(w_15);
        }
      else
        {
          t = v_15;
          {
            ATerm n_4 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, e_12, s_11));
            if(match_cons(t, sym__2))
              {
                ATerm d_16 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) d_16) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                n_4 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_4;
            t = concat_0_0(t);
          }
        }
      g_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, q_11, c_12, y_11);
      t = c_117(t);
      j_12 = t;
      t = (ATerm) ATmakeAppl(sym__5, f_12, g_12, x_11, j_12, b_12);
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t)
{
  ATerm u_12 (ATerm t)
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_105(t);
        ;
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
        t = n_105(t);
        t = u_12(t);
      }
    return(t);
  }
  t = u_12(t);
  return(t);
}
ATerm for_3_0 (ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm t)
{
  t = p_105(t);
  t = while_not_2_0(q_105, r_105, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym__3))
    {
      y_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
      a_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, y_12, y_12, z_12, a_13, (ATerm) ATempty);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm l_16 = ATgetArgument(t, 0);
      if(((ATgetType(l_16) != AT_LIST) || !(ATisEmpty(l_16))))
        _fail(t);
      {
        ATerm p_16 = ATgetArgument(t, 1);
      }
      {
        ATerm q_16 = ATgetArgument(t, 2);
      }
      b_13 = ATgetArgument(t, 3);
      c_13 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_13, c_13);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm t)
{
  ATerm x_12 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm r_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(x_116, y_116, z_116, t);
        ;
        LocalPopChoice(x_16);
      }
    else
      {
        t = r_16;
        {
          ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
          if(match_cons(t, sym__5))
            {
              e_13 = ATgetArgument(t, 0);
              h_13 = ATgetArgument(t, 1);
              i_13 = ATgetArgument(t, 2);
              j_13 = ATgetArgument(t, 3);
              k_13 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = e_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_13 = ATgetFirst((ATermList) t);
              g_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, g_13, h_13, i_13, j_13, (ATerm) ATinsert(CheckATermList(k_13), f_13));
        }
      }
    return(t);
  }
  t = for_3_0(c_2, d_2, e_2, t);
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      {
        ATerm z_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = x_12;
  return(t);
}
ATerm assert_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
  if(match_cons(t, sym__2))
    {
      r_13 = ATgetArgument(t, 0);
      s_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_100(t);
  t_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_13, r_13, s_13);
  t = table_push_0_0(t);
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(t_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_13 = ATgetFirst((ATermList) t);
        v_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(t_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(v_13), (ATerm) ATinsert(CheckATermList(u_13), r_13)));
    t = (ATerm) ATmakeAppl(sym__2, r_13, s_13);
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
  w_13 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      x_13 = ATgetArgument(t, 0);
      {
        ATerm r_17 = ATgetArgument(t, 1);
      }
      {
        ATerm u_17 = ATgetArgument(t, 2);
      }
      {
        ATerm v_17 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  y_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_13, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_x_17, w_13));
  t = assert_1_0(i_2, t);
  t = y_13;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm o_15 = NULL,q_15 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm z_17 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
      q_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_15), o_15);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm e_14 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      e_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_14);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm s_14 = NULL;
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_14 = ATgetArgument(t, 0);
          {
            ATerm c_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_18);
      t = s_14;
    }
  else
    {
      t = a_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_14;
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm f_15 = NULL;
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_15 = ATgetArgument(t, 0);
          {
            ATerm f_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_18);
      t = f_15;
    }
  else
    {
      t = d_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_15;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm l_15 = NULL;
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_15 = ATgetArgument(t, 0);
          {
            ATerm j_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_18);
      t = l_15;
    }
  else
    {
      t = g_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_15;
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm k_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(n_18);
    }
  else
    {
      t = k_18;
      {
        ATerm j_14 = NULL,k_14 = NULL;
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm u_18 = ATgetArgument(t, 0);
                k_14 = ATgetArgument(t, 1);
                {
                  ATerm v_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_18);
            t = k_14;
            t = map_1_0(q_2, t);
          }
        else
          {
            t = s_18;
            {
              ATerm w_18 = t;
              int x_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      j_14 = ATgetArgument(t, 0);
                      {
                        ATerm k_19 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(x_18);
                  t = (ATerm) ATinsert(ATempty, j_14);
                }
              else
                {
                  t = w_18;
                  {
                    ATerm l_19 = t;
                    int m_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm n_19 = ATgetArgument(t, 0);
                            k_14 = ATgetArgument(t, 1);
                            {
                              ATerm p_19 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm q_19 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(m_19);
                        t = k_14;
                        t = map_1_0(r_2, t);
                      }
                    else
                      {
                        t = l_19;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm t_19 = ATgetArgument(t, 0);
                            k_14 = ATgetArgument(t, 1);
                            {
                              ATerm u_19 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm v_19 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = k_14;
                        t = map_1_0(t_2, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm d_14 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_w_19), d_14, (ATerm) ATempty);
  {
    ATerm j_2 (ATerm t)
    {
      t = free_vars_3_0(o_2, p_2, sboundin_3_0, t);
      return(t);
    }
    t = graph_nodes_roots_3_0(Definition_0_0, j_2, k_2, t);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm o_73 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
  u_15 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      s_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_15);
  r_15 = t;
  t = s_15;
  t = o_73(t);
  t_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, t_15), r_15);
  return(t);
}
ATerm Cons_2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
  g_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_16 = ATgetFirst((ATermList) t);
      c_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_16);
  a_16 = t;
  t = b_16;
  t = k_73(t);
  e_16 = t;
  t = c_16;
  t = l_73(t);
  f_16 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(f_16), e_16), a_16);
  return(t);
}
ATerm Specification_1_0 (ATerm t_73 (ATerm), ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,m_16 = NULL,n_16 = NULL;
  n_16 = t;
  if(match_cons(t, sym_Specification_1))
    {
      k_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_16);
  j_16 = t;
  t = k_16;
  t = t_73(t);
  m_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, m_16), j_16);
  return(t);
}
ATerm _2_0 (ATerm v_68 (ATerm), ATerm w_68 (ATerm), ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,y_16 = NULL;
  y_16 = t;
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_16);
  s_16 = t;
  t = t_16;
  t = v_68(t);
  v_16 = t;
  t = u_16;
  t = w_68(t);
  w_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, v_16, w_16), s_16);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm u_109 (ATerm), ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym__2))
    {
      d_17 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_17, term_x_19);
  t = open_stream_0_0(t);
  f_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_17, e_17);
  t = u_109(t);
  t = fclose_0_0(t);
  t = e_17;
  return(t);
}
ATerm j_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_19 = ATgetArgument(t, 0);
      if(match_cons(z_19, sym_Stream_1))
        {
          i_17 = ATgetArgument(z_19, 0);
        }
      else
        _fail(t);
      j_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(i_17, j_17);
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_17);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_20 = ATgetArgument(t, 0);
      if(match_cons(a_20, sym_Stream_1))
        {
          l_17 = ATgetArgument(a_20, 0);
        }
      else
        _fail(t);
      m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(l_17, m_17);
  n_17 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), n_17);
  o_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_17);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = fetch_1_0(j_3, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = WriteToFile_1_0(k_3, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = WriteToFile_1_0(p_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  g_17 = t;
  {
    ATerm u_2 (ATerm t)
    {
      ATerm b_20 = t;
      int c_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((h_17 != NULL) && (h_17 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(b_3, t);
          ;
          LocalPopChoice(c_20);
        }
      else
        {
          t = b_20;
          t = term_g_20;
          if(((h_17 != NULL) && (h_17 != t)))
            _fail(t);
          else
            h_17 = t;
        }
      return(t);
    }
    t = _2_0(u_2, _id, t);
    t = g_17;
    {
      ATerm c_3 (ATerm t)
      {
        ATerm o_4 = NULL;
        o_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), o_4);
        return(t);
      }
      t = _2_0(_id, c_3, t);
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(d_3, i_3, t);
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            t = _2_0(_id, o_3, t);
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
ATerm apply_strategy_1_0 (ATerm w_112 (ATerm), ATerm t)
{
  ATerm q_17 = NULL,s_17 = NULL,t_17 = NULL,w_17 = NULL,y_17 = NULL;
  q_17 = t;
  t = dtime_0_0(t);
  t = q_17;
  t = w_112(t);
  s_17 = t;
  t = dtime_0_0(t);
  t_17 = t;
  t = s_17;
  if(match_cons(t, sym__2))
    {
      w_17 = ATgetArgument(t, 0);
      y_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_17), (ATerm) ATmakeAppl(sym_Runtime_1, t_17)), y_17);
  return(t);
}
ATerm o_18 (ATerm i_18, ATerm t)
{
  t = SSL_fclose(i_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL;
  m_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_18 = ATgetArgument(t, 0);
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_18);
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            t = o_18(m_18, t);
          }
      }
    }
  else
    {
      t = o_18(m_18, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_18 = NULL;
  t = SSL_stdin_stream();
  p_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_18 = NULL;
  t = SSL_stdout_stream();
  q_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_18 = NULL;
  t = SSL_stderr_stream();
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_18);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm b_19 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      b_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_19;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm f_19 = NULL;
  f_19 = t;
  t = SSL_is_string(f_19);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      ATerm o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_5 = NULL,r_5 = NULL;
        q_5 = t;
        t = SSL_explode_term(q_5);
        if(match_cons(t, sym__2))
          {
            ATerm r_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_20 = ATgetArgument(t, 1);
              if(((ATgetType(s_20) == AT_LIST) && !(ATisEmpty(s_20))))
                {
                  r_5 = ATgetFirst((ATermList) s_20);
                  {
                    ATerm t_20 = (ATerm) ATgetNext((ATermList) s_20);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_5;
        if(match_cons(t, sym_stderr_0))
          {
            t = r_5;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = r_5;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = r_5;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        {
          ATerm u_20 = t;
          int v_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
              t = _2_0(q_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_18 = ATgetArgument(t, 0);
                  z_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(y_18, z_18);
              a_19 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, a_19);
              ;
              LocalPopChoice(v_20);
            }
          else
            {
              t = u_20;
              {
                ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
                t = _2_0(r_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_19 = ATgetArgument(t, 0);
                    d_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(c_19, d_19);
                e_19 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_19);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_19 = NULL;
      j_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_19, term_z_20);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      {
        ATerm s_5 = NULL;
        s_5 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = s_5;
        _fail(t);
      }
    }
  g_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_19);
  h_19 = t;
  t = g_19;
  t = fclose_0_0(t);
  t = h_19;
  return(t);
}
ATerm fetch_1_0 (ATerm n_94 (ATerm), ATerm t)
{
  ATerm o_19 (ATerm t)
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_94, _id, t);
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = Cons_2_0(_id, o_19, t);
      }
    return(t);
  }
  t = o_19(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = f_21;
      {
        ATerm r_19 = NULL,s_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_19 = ATgetFirst((ATermList) t);
            s_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_19;
        {
          ATerm u_3 (ATerm t)
          {
            t = s_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(u_3, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm t_94 (ATerm), ATerm t)
{
  ATerm y_19 (ATerm t)
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_19, t);
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_94(t);
      }
    return(t);
  }
  t = y_19(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm e_20 = NULL;
  e_20 = t;
  t = SSL_explode_string(e_20);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm f_20 = NULL;
  f_20 = t;
  t = SSL_explode_string(f_20);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm d_20 = NULL;
  t = _2_0(v_3, w_3, t);
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_20 = NULL,i_20 = NULL;
        if(match_cons(t, sym__2))
          {
            h_20 = ATgetArgument(t, 0);
            i_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_20;
        {
          ATerm b_4 (ATerm t)
          {
            t = i_20;
            return(t);
          }
          t = at_end_1_0(b_4, t);
        }
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        {
          ATerm e_6 = NULL,f_6 = NULL;
          e_6 = t;
          t = SSL_explode_term(e_6);
          if(match_cons(t, sym__2))
            {
              ATerm n_21 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_21) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              f_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_6;
          t = concat_0_0(t);
        }
      }
    d_20 = t;
    t = SSL_implode_string(d_20);
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_20 = NULL;
      w_20 = t;
      t = SSL_is_string(w_20);
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_4, t);
            ;
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
            {
              ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
              a_21 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_21 = ATgetArgument(t, 0);
                  t = b_21;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_21 = ATgetArgument(t, 0);
                      t = b_21;
                      {
                        ATerm w_21 = t;
                        int x_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_21);
                            {
                              ATerm b_22 = t;
                              int f_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_7 = NULL;
                                  t = eval_config_0_0(t);
                                  s_7 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_21, s_7);
                                  t = s_7;
                                  ;
                                  LocalPopChoice(f_22);
                                }
                              else
                                {
                                  t = b_22;
                                }
                            }
                            ;
                            LocalPopChoice(x_21);
                          }
                        else
                          {
                            t = w_21;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_21), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = b_21;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_21 = NULL,k_21 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_21 = ATgetArgument(t, 0);
                          c_21 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_21;
                      t = eval_config_0_0(t);
                      g_21 = t;
                      t = c_21;
                      t = eval_config_0_0(t);
                      k_21 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_21, k_21);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  ATerm g_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_21 = NULL,v_21 = NULL;
      q_21 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm l_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_7 = NULL;
            t = eval_config_0_0(t);
            z_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_7);
            t = z_7;
            ;
            LocalPopChoice(n_22);
          }
        else
          {
            t = l_22;
          }
        v_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_21, term_q_22);
        t = geq_0_0(t);
        t = q_21;
        t = y_110(t);
      }
      ;
      LocalPopChoice(k_22);
    }
  else
    {
      t = g_22;
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm y_21 = NULL;
  y_21 = t;
  if(match_string(t, "-k"))
    {
      t = y_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_21;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL;
  z_21 = t;
  t = SSL_string_to_int(z_21);
  a_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), a_22);
  t = z_21;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_4, i_4, j_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm c_22 = NULL;
  c_22 = t;
  if(match_string(t, "-S"))
    {
      t = c_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_22;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_x_22;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_y_22;
  return(t);
}
ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  d_22 = t;
  t = SSL_string_to_int(d_22);
  e_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_22);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_22);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_z_22;
  return(t);
}
ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_a_23;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_b_23;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, l_4, m_4, t);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = c_23;
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_4, q_4, r_4, t);
            ;
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            t = Option_3_0(t_4, u_4, v_4, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_22 = NULL;
      t = term_s_4;
      t = d_0(t);
      j_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_23, term_q_23, j_22);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm m_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_22 = ATgetFirst((ATermList) t);
          i_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_22;
      t = a_0(t);
      t = term_s_4;
      t = b_0(t);
      m_22 = t;
      t = (ATerm) ATinsert(CheckATermList(i_22), m_22);
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm o_22 = NULL;
  o_22 = t;
  if(match_string(t, "-o"))
    {
      t = o_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_22;
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm p_22 = NULL;
  p_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), p_22);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_22);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_r_23;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_4, z_4, c_5, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
  if(match_cons(t, sym__3))
    {
      s_22 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
      u_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_22, t_22);
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_23 = ATgetArgument(t, 0);
            ATerm y_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_22, t_22);
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = (ATerm) ATempty;
      }
    v_22 = t;
    t = SSL_table_put(s_22, t_22, (ATerm) ATinsert(CheckATermList(v_22), u_22));
    t = (ATerm) ATmakeAppl(sym__3, s_22, t_22, u_22);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_23 = NULL;
      t = term_s_4;
      t = l_0(t);
      h_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_23, term_q_23, h_23);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm l_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_23 = ATgetFirst((ATermList) t);
          e_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_23 = ATgetFirst((ATermList) t);
          g_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_23;
      t = h_0(t);
      t = f_23;
      t = j_0(t);
      l_23 = t;
      t = (ATerm) ATinsert(CheckATermList(g_23), l_23);
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  if(match_string(t, "-i"))
    {
      t = n_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_23;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm o_23 = NULL;
  o_23 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), o_23);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_23);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_5, h_5, i_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_4;
  t = whoami_0_0(t);
  p_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), p_23));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_8 = NULL;
        t = eval_config_0_0(t);
        e_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_8);
        t = e_8;
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_99(t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
        ATerm s_23 = NULL,t_23 = NULL,w_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_23 = ATgetFirst((ATermList) t);
            t_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_23;
        t = foldr_2_0(c_99, d_99, t);
        w_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_23, w_23);
        t = d_99(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_w_22;
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL;
  if(match_cons(t, sym__2))
    {
      j_8 = ATgetArgument(t, 0);
      k_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_8, k_8);
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = SSL_addr(j_8, k_8);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_23 = NULL,f_8 = NULL,g_8 = NULL;
  t = times_0_0(t);
  f_8 = t;
  t = SSL_explode_term(f_8);
  if(match_cons(t, sym__2))
    {
      ATerm h_24 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8;
  t = foldr_2_0(j_5, k_5, t);
  z_23 = t;
  t = SSL_TicksToSeconds(z_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  k_24 = t;
  if(match_cons(t, sym__2))
    {
      l_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_24;
        if((l_24 != t))
          {
            _fail(t);
          }
        t = k_24;
        ;
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        t = k_24;
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_24, m_24);
              ;
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
              t = SSL_gtr(l_24, m_24);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_24, m_24);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  ATerm q_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_24 = NULL,r_24 = NULL;
      p_24 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm v_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_11 = NULL;
            t = eval_config_0_0(t);
            b_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_11);
            t = b_11;
            ;
            LocalPopChoice(x_24);
          }
        else
          {
            t = v_24;
          }
        r_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_24, term_z_24);
        t = geq_0_0(t);
        t = p_24;
        t = x_110(t);
      }
      ;
      LocalPopChoice(s_24);
    }
  else
    {
      t = q_24;
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
  t = run_time_0_0(t);
  t_24 = t;
  t = term_s_4;
  t = whoami_0_0(t);
  u_24 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), t_24), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), u_24));
  t = (ATerm) ATmakeAppl(sym__2, term_a_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_25), t_24), term_b_25), u_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm u_113 (ATerm), ATerm t)
{
  ATerm j_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_11 = NULL;
            t = eval_config_0_0(t);
            u_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), u_11);
            t = u_11;
            ;
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
          }
      }
      ;
      LocalPopChoice(p_25);
    }
  else
    {
      t = j_25;
      {
        ATerm n_5 (ATerm t)
        {
          ATerm u_25 = t;
          int v_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(v_25);
            }
          else
            {
              t = u_25;
              {
                ATerm w_25 = t;
                int x_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(x_25);
                  }
                else
                  {
                    t = w_25;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(n_5, t);
      }
    }
  t = u_113(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_24 = NULL,y_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_24 = ATgetFirst((ATermList) t);
      y_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_25 = NULL,d_25 = NULL;
        t = y_24;
        t = g_0(t);
        c_25 = t;
        t = w_24;
        t = f_0(t);
        d_25 = t;
        t = y_24;
        {
          ATerm t_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(c_25), d_25);
            return(t);
          }
          t = reverse_acc_2_0(f_0, t_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_4;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  h_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_25);
  e_25 = t;
  t = f_25;
  t = c_86(t);
  g_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, g_25), e_25);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_25), term_a_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm f_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_12 = NULL;
            t = eval_config_0_0(t);
            a_12 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_12);
            t = a_12;
            ;
            LocalPopChoice(g_26);
          }
        else
          {
            t = f_26;
          }
      }
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
        ATerm w_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(w_5, t);
      }
    }
  t = term_h_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, x_5, t);
  t = map_1_0(y_5, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm d_86 (ATerm), ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
  o_25 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      m_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_25);
  l_25 = t;
  t = m_25;
  t = d_86(t);
  n_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, n_25), l_25);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  s_25 = t;
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_25;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_26 = ATgetFirst((ATermList) t);
                ATerm m_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_25;
          }
        ;
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        t = (ATerm) ATinsert(ATempty, s_25);
      }
    t_25 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), t_25);
    t = s_25;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_12 = NULL;
        t = eval_config_0_0(t);
        n_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_12);
        t = n_12;
        ;
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm g_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_u_26;
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_w_26;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_x_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_6, h_6, i_6, t);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      t = Option_3_0(j_6, k_6, l_6, t);
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm z_25 = NULL;
  z_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_25);
  t = (ATerm) ATmakeAppl(sym_Program_1, z_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_115 (ATerm), ATerm t)
{
  ATerm y_25 = NULL;
  y_25 = t;
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_27;
        t = x_115(t);
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
      }
    t = y_25;
    {
      ATerm s_6 (ATerm t)
      {
        ATerm j_27 = t;
        int k_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_27 = t;
            int m_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(m_27);
              }
            else
              {
                t = l_27;
                t = x_115(t);
                t = Cons_2_0(_id, s_6, t);
              }
            ;
            LocalPopChoice(k_27);
          }
        else
          {
            t = j_27;
            {
              ATerm b_26 = NULL,c_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_26 = ATgetFirst((ATermList) t);
                  c_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_26), (ATerm) ATmakeAppl(sym_Undefined_1, b_26));
            }
          }
        return(t);
      }
      t = Cons_2_0(m_6, s_6, t);
    }
  }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm p_26 = NULL;
  p_26 = t;
  if(match_string(t, "--help"))
    {
      t = p_26;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_26;
        }
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_n_27;
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm z_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_115 (ATerm), ATerm t)
{
  ATerm l_26 = NULL,n_26 = NULL,o_26 = NULL;
  l_26 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = l_26;
  {
    ATerm t_6 (ATerm t)
    {
      ATerm p_27 = t;
      int q_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_115(t);
          ;
          LocalPopChoice(q_27);
        }
      else
        {
          t = p_27;
          {
            ATerm r_27 = t;
            int s_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_6, x_6, y_6, t);
                ;
                LocalPopChoice(s_27);
              }
            else
              {
                t = r_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_6, t);
    {
      ATerm t_27 = t;
      int u_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_26 = NULL;
          y_26 = t;
          {
            ATerm v_27 = t;
            int w_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = y_26;
                {
                  ATerm x_27 = t;
                  int y_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm z_27 = t;
                        int a_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm x_14 = NULL;
                            t = eval_config_0_0(t);
                            x_14 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), x_14);
                            t = x_14;
                            ;
                            LocalPopChoice(a_28);
                          }
                        else
                          {
                            t = z_27;
                          }
                      }
                      ;
                      LocalPopChoice(y_27);
                    }
                  else
                    {
                      t = x_27;
                      t = fetch_1_0(z_6, t);
                    }
                  t = y_26;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(w_27);
              }
            else
              {
                t = v_27;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm b_28 = t;
                  int c_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_15 = NULL;
                      t = eval_config_0_0(t);
                      y_15 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), y_15);
                      t = y_15;
                      ;
                      LocalPopChoice(c_28);
                    }
                  else
                    {
                      t = b_28;
                    }
                  t = y_26;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(u_27);
        }
      else
        {
          t = t_27;
          {
            ATerm d_28 = t;
            int e_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_7 (ATerm t)
                {
                  ATerm c_7 (ATerm t)
                  {
                    if(((n_26 != NULL) && (n_26 != t)))
                      _fail(t);
                    else
                      n_26 = t;
                    return(t);
                  }
                  t = Undefined_1_0(c_7, t);
                  return(t);
                }
                t = fetch_1_0(b_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(n_26)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_a_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_26)), term_f_28));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(e_28);
              }
            else
              {
                t = d_28;
              }
          }
        }
      o_26 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = o_26;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm z_113 (ATerm), ATerm t)
{
  ATerm b_27 = NULL;
  t = parse_options_1_0(w_113, t);
  b_27 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), b_27);
  t = b_27;
  t = y_113(t);
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_113, t);
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        {
          ATerm i_28 = t;
          int j_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_113(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_28);
            }
          else
            {
              t = i_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm k_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_k_28;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  c_27 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_16 = NULL;
        t = eval_config_0_0(t);
        o_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_16);
        t = o_16;
        ;
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
      }
    d_27 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, d_27));
    t = c_27;
  }
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = if_verbose2_1_0(p_7, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm t)
{
  ATerm e_7 (ATerm t)
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_113(t);
        ;
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        {
          ATerm q_28 = t;
          int r_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(r_28);
            }
          else
            {
              t = q_28;
              {
                ATerm s_28 = t;
                int t_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(t_28);
                  }
                else
                  {
                    t = s_28;
                    {
                      ATerm u_28 = t;
                      int v_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(k_7, l_7, o_7, t);
                          ;
                          LocalPopChoice(v_28);
                        }
                      else
                        {
                          t = u_28;
                          {
                            ATerm w_28 = t;
                            int x_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(x_28);
                              }
                            else
                              {
                                t = w_28;
                                t = keep_option_0_0(t);
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
  ATerm j_7 (ATerm t)
  {
    ATerm e_27 = NULL,f_27 = NULL,a_17 = NULL;
    e_27 = t;
    {
      ATerm y_28 = t;
      int z_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((f_27 != NULL) && (f_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_7, t);
          ;
          LocalPopChoice(z_28);
        }
      else
        {
          t = y_28;
          t = term_a_29;
          f_27 = t;
        }
      t = not_null(f_27);
      t = ReadFromFile_0_0(t);
      a_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_27, a_17);
      t = apply_strategy_1_0(f_113, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(e_7, h_113, f_7, j_7, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = dead_def_elim_0_0(t);
  t = map_1_0(local_dead_def_elim_0_0, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = Strategies_1_0(y_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm r_7 (ATerm t)
  {
    ATerm t_7 (ATerm t)
    {
      ATerm u_7 (ATerm t)
      {
        ATerm v_7 (ATerm t)
        {
          t = Cons_2_0(w_7, x_7, t);
          return(t);
        }
        t = Cons_2_0(_id, v_7, t);
        return(t);
      }
      t = Specification_1_0(u_7, t);
      return(t);
    }
    t = _2_0(_id, t_7, t);
    return(t);
  }
  t = iowrap_3_0(r_7, _fail, default_usage_0_0, t);
  return(t);
}
