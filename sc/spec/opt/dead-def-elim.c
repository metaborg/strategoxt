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
ATerm term_b_29;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_g_28;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_j_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_m_26;
ATerm term_d_26;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_g_25;
ATerm term_b_24;
ATerm term_v_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_d_21;
ATerm term_g_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_17;
ATerm term_z_16;
ATerm term_z_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_c_4;
void init_constant_terms (void)
{
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym__3, term_z_26, term_a_27, term_c_4);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm DefDead_0_0 (ATerm);
ATerm filter_1_0 (ATerm q_100 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm DeclareNotDead_0_0 (ATerm);
ATerm n_0 (ATerm);
ATerm DeclareDefDead_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm j_100 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm i_100 (ATerm), ATerm);
ATerm scope_2_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm);
ATerm q_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm local_dead_def_elim_0_0 (ATerm);
ATerm map_1_0 (ATerm b_94 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm);
ATerm Let_2_0 (ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm);
ATerm v_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm union_1_0 (ATerm p_96 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm free_vars_3_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm diff_1_0 (ATerm k_96 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm p_92 (ATerm), ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm p_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNext_3_0 (ATerm z_116 (ATerm), ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm);
ATerm for_3_0 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm);
ATerm a_2 (ATerm);
ATerm f_2 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm);
ATerm assert_1_0 (ATerm m_100 (ATerm), ATerm);
ATerm j_2 (ATerm);
ATerm RegisterDefinition_0_0 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm dead_def_elim_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm n_73 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm j_73 (ATerm), ATerm k_73 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm s_73 (ATerm), ATerm);
ATerm _2_0 (ATerm u_68 (ATerm), ATerm v_68 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm t_109 (ATerm), ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm v_112 (ATerm), ATerm);
ATerm f_18 (ATerm z_17, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_94 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_94 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_111 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm b_5 (ATerm);
ATerm e_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm k_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm p_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_111 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm x_5 (ATerm);
ATerm need_help_1_0 (ATerm t_113 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm b_86 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm c_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm f_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm p_6 (ATerm);
ATerm s_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm x_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm w_115 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm g_7 (ATerm);
ATerm parse_options_1_0 (ATerm v_115 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm iowrap_3_0 (ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
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
  t = term_c_4;
  t = whoami_0_0(t);
  k_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), k_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = i_0;
  return(t);
}
ATerm DefDead_0_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL;
  c_1 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      d_1 = ATgetArgument(t, 0);
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
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_2 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue)), (ATerm) ATmakeAppl(sym_SDefT_4, d_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_2 = ATgetFirst((ATermList) t);
            {
              ATerm j_8 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = e_2;
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
          ATerm q_2 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue)), (ATerm) ATmakeAppl(sym_SDefT_4, d_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_2 = ATgetFirst((ATermList) t);
              {
                ATerm k_8 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = q_2;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm l_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_8) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_c_4;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm q_100 (ATerm), ATerm t)
{
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
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
            ATerm m_0 (ATerm t)
            {
              t = filter_1_0(q_100, t);
              return(t);
            }
            t = Cons_2_0(q_100, m_0, t);
            ;
            LocalPopChoice(p_8);
          }
        else
          {
            t = o_8;
            {
              ATerm o_1 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_8 = ATgetFirst((ATermList) t);
                  o_1 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = o_1;
              t = filter_1_0(q_100, t);
            }
          }
      }
    }
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  if(match_cons(t, sym__3))
    {
      q_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
      s_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(q_1, r_1);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_8 = ATgetFirst((ATermList) t);
      t_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_table_put(q_1, r_1, (ATerm) ATinsert(CheckATermList(t_1), s_1));
  t = (ATerm) ATmakeAppl(sym__3, q_1, r_1, s_1);
  return(t);
}
ATerm DeclareNotDead_0_0 (ATerm t)
{
  ATerm z_1 = NULL,b_2 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm s_8 = ATgetArgument(t, 0);
      if(match_cons(s_8, sym_SVar_1))
        {
          z_1 = ATgetArgument(s_8, 0);
        }
      else
        _fail(t);
      {
        ATerm t_8 = ATgetArgument(t, 1);
      }
      {
        ATerm x_8 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_8, (ATerm)ATmakeAppl(sym_SDefT_4, z_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_b_9);
  t = table_replace_0_0(t);
  t = b_2;
  return(t);
}
ATerm n_0 (ATerm t)
{
  t = term_y_8;
  return(t);
}
ATerm DeclareDefDead_0_0 (ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      c_2 = ATgetArgument(t, 0);
      {
        ATerm c_9 = ATgetArgument(t, 1);
      }
      {
        ATerm f_9 = ATgetArgument(t, 2);
      }
      {
        ATerm g_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, c_2, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_k_9);
  t = assert_1_0(n_0, t);
  t = d_2;
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      h_2 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_2, i_2);
  {
    ATerm l_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_3 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_9 = ATgetArgument(t, 0);
            ATerm p_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_2, i_2);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_9 = ATgetFirst((ATermList) t);
            a_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_3;
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = l_9;
        t = (ATerm) ATempty;
      }
    m_2 = t;
    t = SSL_table_put(h_2, i_2, m_2);
    t = (ATerm) ATmakeAppl(sym__2, h_2, i_2);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,n_3 = NULL,o_3 = NULL;
  k_3 = t;
  t = j_100(t);
  l_3 = t;
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(l_3, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_3 = ATgetFirst((ATermList) t);
        n_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(l_3, (ATerm)ATmakeAppl(sym_Scopes_0), n_3);
    t = o_3;
    {
      ATerm o_0 (ATerm t)
      {
        ATerm p_3 = NULL;
        p_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_3, p_3);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(o_0, t);
      t = k_3;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm t)
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_91(t);
      t = i_91(t);
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      t = i_91(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_100 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,x_3 = NULL;
  u_3 = t;
  t = i_100(t);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_3, term_z_9);
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_10 = ATgetArgument(t, 0);
            ATerm q_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_3, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        t = (ATerm) ATempty;
      }
    x_3 = t;
    t = SSL_table_put(v_3, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(x_3), (ATerm) ATempty));
    t = u_3;
  }
  return(t);
}
ATerm scope_2_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm t)
{
  t = begin_scope_1_0(k_100, t);
  {
    ATerm p_0 (ATerm t)
    {
      t = end_scope_1_0(k_100, t);
      return(t);
    }
    t = restore_always_2_0(l_100, p_0, t);
  }
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = term_y_8;
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = map_1_0(DeclareDefDead_0_0, t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = filter_1_0(u_0, t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm r_10 = t;
  if((PushChoice() == 0))
    {
      t = DefDead_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_10;
    }
  return(t);
}
ATerm local_dead_def_elim_0_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Let_2_0(s_0, _id, t);
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        {
          ATerm w_10 = t;
          int b_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = DeclareNotDead_0_0(t);
              ;
              LocalPopChoice(b_11);
            }
          else
            {
              t = w_10;
            }
        }
      }
    t = SRTS_all(local_dead_def_elim_0_0, t);
    {
      ATerm c_11 = t;
      int d_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Let_2_0(t_0, _id, t);
          ;
          LocalPopChoice(d_11);
        }
      else
        {
          t = c_11;
        }
    }
    return(t);
  }
  t = scope_2_0(q_0, r_0, t);
  return(t);
}
ATerm map_1_0 (ATerm b_94 (ATerm), ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        t = Cons_2_0(b_94, d_4, t);
      }
    return(t);
  }
  t = d_4(t);
  return(t);
}
ATerm Rec_2_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
  o_4 = t;
  if(match_cons(t, sym_Rec_2))
    {
      k_4 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_4);
  i_4 = t;
  t = k_4;
  t = s_78(t);
  m_4 = t;
  t = l_4;
  t = t_78(t);
  n_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, m_4, n_4), i_4);
  return(t);
}
ATerm SDefT_4_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,c_5 = NULL,d_5 = NULL,n_5 = NULL,o_5 = NULL;
  o_5 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      v_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
      x_4 = ATgetArgument(t, 2);
      y_4 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_5);
  u_4 = t;
  t = v_4;
  t = n_80(t);
  z_4 = t;
  t = w_4;
  t = o_80(t);
  c_5 = t;
  t = x_4;
  t = p_80(t);
  d_5 = t;
  t = y_4;
  t = q_80(t);
  n_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, z_4, c_5, d_5, n_5), u_4);
  return(t);
}
ATerm SDef_3_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,z_5 = NULL,a_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
  j_6 = t;
  if(match_cons(t, sym_SDef_3))
    {
      v_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
      z_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_6);
  u_5 = t;
  t = v_5;
  t = k_80(t);
  a_6 = t;
  t = w_5;
  t = l_80(t);
  h_6 = t;
  t = z_5;
  t = m_80(t);
  i_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, a_6, h_6, i_6), u_5);
  return(t);
}
ATerm Let_2_0 (ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL;
  w_6 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_6);
  n_6 = t;
  t = o_6;
  t = v_77(t);
  u_6 = t;
  t = t_6;
  t = w_77(t);
  v_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, u_6, v_6), n_6);
  return(t);
}
ATerm sboundin_3_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm t)
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(f_87, f_87, t);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(h_87, h_87, f_87, t);
            ;
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            {
              ATerm o_11 = t;
              int r_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(h_87, h_87, h_87, f_87, t);
                  ;
                  LocalPopChoice(r_11);
                }
              else
                {
                  t = o_11;
                  t = Rec_2_0(h_87, f_87, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm h_7 = NULL;
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          h_7 = ATgetArgument(t, 0);
          {
            ATerm i_12 = ATgetArgument(t, 1);
          }
          {
            ATerm j_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_11);
      t = h_7;
    }
  else
    {
      t = s_11;
      if(match_cons(t, sym_SDefT_4))
        {
          h_7 = ATgetArgument(t, 0);
          {
            ATerm m_12 = ATgetArgument(t, 1);
          }
          {
            ATerm n_12 = ATgetArgument(t, 2);
          }
          {
            ATerm o_12 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = h_7;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm f_7 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      f_7 = ATgetArgument(t, 0);
      {
        ATerm p_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = f_7;
  t = map_1_0(v_0, t);
  return(t);
}
ATerm union_1_0 (ATerm p_96 (ATerm), ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      u_8 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8;
  {
    ATerm w_8 (ATerm t)
    {
      ATerm q_12 = t;
      int r_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_8;
          ;
          LocalPopChoice(r_12);
        }
      else
        {
          t = q_12;
          {
            ATerm u_12 = t;
            int b_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_3 = NULL,c_3 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    b_3 = ATgetFirst((ATermList) t);
                    c_3 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = v_8;
                {
                  ATerm w_0 (ATerm t)
                  {
                    ATerm e_3 = NULL;
                    e_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_3, e_3);
                    t = p_96(t);
                    return(t);
                  }
                  t = fetch_1_0(w_0, t);
                  t = c_3;
                  t = w_8(t);
                }
                ;
                LocalPopChoice(b_13);
              }
            else
              {
                t = u_12;
                t = Cons_2_0(_id, w_8, t);
              }
          }
        }
      return(t);
    }
    t = w_8(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_99(t);
      ;
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      {
        ATerm z_8 = NULL,a_9 = NULL,d_9 = NULL,e_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_8 = ATgetFirst((ATermList) t);
            a_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_8;
        t = f_99(t);
        d_9 = t;
        t = a_9;
        t = foldr_3_0(d_99, e_99, f_99, t);
        e_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_9, e_9);
        t = e_99(t);
      }
    }
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = union_1_0(b_1, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm g_4 = NULL;
  if(match_cons(t, sym__2))
    {
      g_4 = ATgetArgument(t, 0);
      if((g_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = union_1_0(g_1, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm a_5 = NULL;
  if(match_cons(t, sym__2))
    {
      a_5 = ATgetArgument(t, 0);
      if((a_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_9 (ATerm t)
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_103(t);
        ;
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_9 = NULL,j_9 = NULL,s_3 = NULL,t_3 = NULL;
              h_9 = t;
              t = g_103(t);
              j_9 = t;
              t = h_9;
              {
                ATerm x_0 (ATerm t)
                {
                  ATerm j_3 = NULL;
                  t = m_9(t);
                  j_3 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_3, j_9);
                  t = diff_0_0(t);
                  return(t);
                }
                t = h_103(x_0, m_9, y_0, t);
                s_3 = t;
                t = SSL_explode_term(s_3);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_13 = ATgetArgument(t, 0);
                    t_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_3;
                t = foldr_3_0(z_0, a_1, _id, t);
              }
              ;
              LocalPopChoice(o_13);
            }
          else
            {
              t = n_13;
              {
                ATerm h_4 = NULL,j_4 = NULL;
                h_4 = t;
                t = SSL_explode_term(h_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_13 = ATgetArgument(t, 0);
                    j_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_4;
                t = foldr_3_0(e_1, f_1, m_9, t);
              }
            }
        }
      }
    return(t);
  }
  t = m_9(t);
  return(t);
}
ATerm diff_1_0 (ATerm k_96 (ATerm), ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_9;
  {
    ATerm x_9 (ATerm t)
    {
      ATerm z_13 = t;
      int a_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(a_14);
        }
      else
        {
          t = z_13;
          {
            ATerm d_14 = t;
            int g_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_5 = NULL,i_5 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    h_5 = ATgetFirst((ATermList) t);
                    i_5 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = w_9;
                {
                  ATerm h_1 (ATerm t)
                  {
                    ATerm j_5 = NULL;
                    j_5 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_5, j_5);
                    t = k_96(t);
                    return(t);
                  }
                  t = fetch_1_0(h_1, t);
                  t = i_5;
                  t = x_9(t);
                }
                ;
                LocalPopChoice(g_14);
              }
            else
              {
                t = d_14;
                t = Cons_2_0(_id, x_9, t);
              }
          }
        }
      return(t);
    }
    t = x_9(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm p_92 (ATerm), ATerm t)
{
  ATerm y_9 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_92(t);
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = n_92(t);
        t = _2_0(p_92, y_9, t);
        t = o_92(t);
      }
    return(t);
  }
  t = y_9(t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_14 = ATgetArgument(t, 0);
      if(((ATgetType(j_14) != AT_LIST) || !(ATisEmpty(j_14))))
        _fail(t);
      {
        ATerm k_14 = ATgetArgument(t, 1);
        if(((ATgetType(k_14) != AT_LIST) || !(ATisEmpty(k_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_14 = ATgetArgument(t, 0);
      if(((ATgetType(l_14) == AT_LIST) && !(ATisEmpty(l_14))))
        {
          h_10 = ATgetFirst((ATermList) l_14);
          j_10 = (ATerm) ATgetNext((ATermList) l_14);
        }
      else
        _fail(t);
      {
        ATerm m_14 = ATgetArgument(t, 1);
        if(((ATgetType(m_14) == AT_LIST) && !(ATisEmpty(m_14))))
          {
            i_10 = ATgetFirst((ATermList) m_14);
            k_10 = (ATerm) ATgetNext((ATermList) m_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_10, i_10), (ATerm) ATmakeAppl(sym__2, j_10, k_10));
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  if(match_cons(t, sym__2))
    {
      l_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_10), l_10);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_14 = ATgetFirst((ATermList) t);
      if(match_cons(n_14, sym__2))
        {
          a_10 = ATgetArgument(n_14, 0);
          b_10 = ATgetArgument(n_14, 1);
        }
      else
        _fail(t);
      c_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(b_10);
  if(match_cons(t, sym__2))
    {
      d_10 = ATgetArgument(t, 0);
      e_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(a_10);
  if(match_cons(t, sym__2))
    {
      if((d_10 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_10, e_10);
  t = genzip_4_0(i_1, j_1, k_1, _id, t);
  g_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_10, c_10);
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_14 = ATgetArgument(t, 0);
            ATerm s_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_10;
        {
          ATerm l_1 (ATerm t)
          {
            t = c_10;
            return(t);
          }
          t = at_end_1_0(l_1, t);
        }
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        {
          ATerm r_5 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, g_10, c_10));
          if(match_cons(t, sym__2))
            {
              ATerm t_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_5;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm v_10 = NULL;
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_10);
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = _2_0(_id, u_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, v_1, t);
      ;
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      {
        ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
        if(match_cons(t, sym__2))
          {
            e_11 = ATgetArgument(t, 0);
            f_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_11;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_11 = ATgetFirst((ATermList) t);
            h_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_11), g_11), h_11);
      }
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm w_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_10 = ATgetFirst((ATermList) t);
          a_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_10;
      if(match_cons(t, sym__2))
        {
          y_10 = ATgetArgument(t, 0);
          z_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_10;
      if((y_10 != t))
        {
          _fail(t);
        }
      t = a_11;
      ;
      LocalPopChoice(y_14);
    }
  else
    {
      t = w_14;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm p_11 = NULL;
  if(match_cons(t, sym__2))
    {
      p_11 = ATgetArgument(t, 0);
      if((p_11 != ATgetArgument(t, 1)))
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
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(m_1, n_1, p_1, t);
      ;
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      t = diff_1_0(w_1, t);
    }
  return(t);
}
ATerm GnNext_3_0 (ATerm z_116 (ATerm), ATerm a_117 (ATerm), ATerm b_117 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,k_12 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm c_15 = ATgetArgument(t, 0);
      if(((ATgetType(c_15) == AT_LIST) && !(ATisEmpty(c_15))))
        {
          u_11 = ATgetFirst((ATermList) c_15);
          v_11 = (ATerm) ATgetNext((ATermList) c_15);
        }
      else
        _fail(t);
      w_11 = ATgetArgument(t, 1);
      x_11 = ATgetArgument(t, 2);
      y_11 = ATgetArgument(t, 3);
      z_11 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_11, x_11);
  t = z_116(t);
  a_12 = t;
  t = a_117(t);
  b_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_12, w_11);
  t = diff_0_0(t);
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_12, v_11);
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_15 = ATgetArgument(t, 0);
            ATerm g_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_12;
        {
          ATerm x_1 (ATerm t)
          {
            t = v_11;
            return(t);
          }
          t = at_end_1_0(x_1, t);
        }
        ;
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        {
          ATerm c_6 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, e_12, v_11));
          if(match_cons(t, sym__2))
            {
              ATerm h_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_15) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              c_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_6;
          t = concat_0_0(t);
        }
      }
    f_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_12, w_11);
    {
      ATerm i_15 = t;
      int k_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm l_15 = ATgetArgument(t, 0);
              ATerm t_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_12;
          {
            ATerm y_1 (ATerm t)
            {
              t = w_11;
              return(t);
            }
            t = at_end_1_0(y_1, t);
          }
          ;
          LocalPopChoice(k_15);
        }
      else
        {
          t = i_15;
          {
            ATerm g_6 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, e_12, w_11));
            if(match_cons(t, sym__2))
              {
                ATerm u_15 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) u_15) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                g_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_6;
            t = concat_0_0(t);
          }
        }
      g_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, u_11, a_12, y_11);
      t = b_117(t);
      k_12 = t;
      t = (ATerm) ATmakeAppl(sym__5, f_12, g_12, x_11, k_12, z_11);
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t)
{
  ATerm s_12 (ATerm t)
  {
    ATerm z_15 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_105(t);
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = z_15;
        t = m_105(t);
        t = s_12(t);
      }
    return(t);
  }
  t = s_12(t);
  return(t);
}
ATerm for_3_0 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm t)
{
  t = o_105(t);
  t = while_not_2_0(p_105, q_105, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__3))
    {
      w_12 = ATgetArgument(t, 0);
      x_12 = ATgetArgument(t, 1);
      y_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, w_12, w_12, x_12, y_12, (ATerm) ATempty);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm d_16 = ATgetArgument(t, 0);
      if(((ATgetType(d_16) != AT_LIST) || !(ATisEmpty(d_16))))
        _fail(t);
      {
        ATerm f_16 = ATgetArgument(t, 1);
      }
      {
        ATerm g_16 = ATgetArgument(t, 2);
      }
      z_12 = ATgetArgument(t, 3);
      a_13 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_12, a_13);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm t)
{
  ATerm v_12 = NULL;
  ATerm g_2 (ATerm t)
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(w_116, x_116, y_116, t);
        ;
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        {
          ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
          if(match_cons(t, sym__5))
            {
              c_13 = ATgetArgument(t, 0);
              f_13 = ATgetArgument(t, 1);
              g_13 = ATgetArgument(t, 2);
              h_13 = ATgetArgument(t, 3);
              i_13 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = c_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_13 = ATgetFirst((ATermList) t);
              e_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, e_13, f_13, g_13, h_13, (ATerm) ATinsert(CheckATermList(i_13), d_13));
        }
      }
    return(t);
  }
  t = for_3_0(a_2, f_2, g_2, t);
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      {
        ATerm s_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_12;
  return(t);
}
ATerm assert_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      q_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_100(t);
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_13, p_13, q_13);
  t = table_push_0_0(t);
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(r_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_13 = ATgetFirst((ATermList) t);
        t_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(r_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(t_13), (ATerm) ATinsert(CheckATermList(s_13), p_13)));
    t = (ATerm) ATmakeAppl(sym__2, p_13, q_13);
  }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_z_16;
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  u_13 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      v_13 = ATgetArgument(t, 0);
      {
        ATerm a_17 = ATgetArgument(t, 1);
      }
      {
        ATerm p_17 = ATgetArgument(t, 2);
      }
      {
        ATerm q_17 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  w_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_13, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_s_17, u_13));
  t = assert_1_0(j_2, t);
  t = w_13;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,y_6 = NULL;
  if(match_cons(t, sym__2))
    {
      q_6 = ATgetArgument(t, 0);
      {
        ATerm t_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue)), (ATerm) ATmakeAppl(sym__2, q_6, (ATerm) ATempty));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_6 = ATgetFirst((ATermList) t);
      {
        ATerm u_17 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_6;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm v_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_17) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = free_vars_3_0(o_2, p_2, sboundin_3_0, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm w_17 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
      n_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_15), m_15);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm c_14 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      c_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_14);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      {
        ATerm e_14 = NULL,f_14 = NULL;
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm e_18 = ATgetArgument(t, 0);
                f_14 = ATgetArgument(t, 1);
                {
                  ATerm i_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(b_18);
            t = f_14;
            t = map_1_0(r_2, t);
          }
        else
          {
            t = a_18;
            {
              ATerm k_18 = t;
              int l_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      e_14 = ATgetArgument(t, 0);
                      {
                        ATerm m_18 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_18);
                  t = (ATerm) ATinsert(ATempty, e_14);
                }
              else
                {
                  t = k_18;
                  {
                    ATerm n_18 = t;
                    int o_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm p_18 = ATgetArgument(t, 0);
                            f_14 = ATgetArgument(t, 1);
                            {
                              ATerm q_18 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm u_18 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(o_18);
                        t = f_14;
                        t = map_1_0(s_2, t);
                      }
                    else
                      {
                        t = n_18;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm w_18 = ATgetArgument(t, 0);
                            f_14 = ATgetArgument(t, 1);
                            {
                              ATerm d_19 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm g_19 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = f_14;
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
ATerm r_2 (ATerm t)
{
  ATerm o_14 = NULL;
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_14 = ATgetArgument(t, 0);
          {
            ATerm j_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_19);
      t = o_14;
    }
  else
    {
      t = h_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_14;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm x_14 = NULL;
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_14 = ATgetArgument(t, 0);
          {
            ATerm q_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_19);
      t = x_14;
    }
  else
    {
      t = l_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_14;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm j_15 = NULL;
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_15 = ATgetArgument(t, 0);
          {
            ATerm t_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_19);
      t = j_15;
    }
  else
    {
      t = r_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_15;
    }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm b_14 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_u_19), b_14, (ATerm) ATempty);
  t = graph_nodes_roots_3_0(k_2, l_2, n_2, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm n_73 (ATerm), ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
  r_15 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      p_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_15);
  o_15 = t;
  t = p_15;
  t = n_73(t);
  q_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, q_15), o_15);
  return(t);
}
ATerm Cons_2_0 (ATerm j_73 (ATerm), ATerm k_73 (ATerm), ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,a_16 = NULL,b_16 = NULL;
  b_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_15 = ATgetFirst((ATermList) t);
      x_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_16);
  v_15 = t;
  t = w_15;
  t = j_73(t);
  y_15 = t;
  t = x_15;
  t = k_73(t);
  a_16 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(a_16), y_15), v_15);
  return(t);
}
ATerm Specification_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
  j_16 = t;
  if(match_cons(t, sym_Specification_1))
    {
      h_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_16);
  e_16 = t;
  t = h_16;
  t = s_73(t);
  i_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, i_16), e_16);
  return(t);
}
ATerm _2_0 (ATerm u_68 (ATerm), ATerm v_68 (ATerm), ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,t_16 = NULL;
  t_16 = t;
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_16);
  n_16 = t;
  t = o_16;
  t = u_68(t);
  q_16 = t;
  t = p_16;
  t = v_68(t);
  r_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, q_16, r_16), n_16);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm t_109 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  if(match_cons(t, sym__2))
    {
      w_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_16, term_v_19);
  t = open_stream_0_0(t);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_16, x_16);
  t = t_109(t);
  t = fclose_0_0(t);
  t = x_16;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = fetch_1_0(z_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = WriteToFile_1_0(d_3, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_19 = ATgetArgument(t, 0);
      if(match_cons(x_19, sym_Stream_1))
        {
          d_17 = ATgetArgument(x_19, 0);
        }
      else
        _fail(t);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(d_17, e_17);
  f_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_17);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = WriteToFile_1_0(g_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,j_17 = NULL,k_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_20 = ATgetArgument(t, 0);
      if(match_cons(b_20, sym_Stream_1))
        {
          g_17 = ATgetArgument(b_20, 0);
        }
      else
        _fail(t);
      h_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(g_17, h_17);
  j_17 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), j_17);
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_17);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL;
  b_17 = t;
  {
    ATerm u_2 (ATerm t)
    {
      ATerm e_20 = t;
      int f_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_17 != NULL) && (c_17 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_2, t);
          ;
          LocalPopChoice(f_20);
        }
      else
        {
          t = e_20;
          t = term_g_20;
          if(((c_17 != NULL) && (c_17 != t)))
            _fail(t);
          else
            c_17 = t;
        }
      return(t);
    }
    t = _2_0(u_2, _id, t);
    t = b_17;
    {
      ATerm w_2 (ATerm t)
      {
        ATerm c_7 = NULL;
        c_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), c_7);
        return(t);
      }
      t = _2_0(_id, w_2, t);
      {
        ATerm h_20 = t;
        int i_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(x_2, y_2, t);
            ;
            LocalPopChoice(i_20);
          }
        else
          {
            t = h_20;
            t = _2_0(_id, f_3, t);
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
ATerm apply_strategy_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,r_17 = NULL;
  l_17 = t;
  t = dtime_0_0(t);
  t = l_17;
  t = v_112(t);
  m_17 = t;
  t = dtime_0_0(t);
  n_17 = t;
  t = m_17;
  if(match_cons(t, sym__2))
    {
      o_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_17), (ATerm) ATmakeAppl(sym_Runtime_1, n_17)), r_17);
  return(t);
}
ATerm f_18 (ATerm z_17, ATerm t)
{
  t = SSL_fclose(z_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL;
  d_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_18 = ATgetArgument(t, 0);
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_18);
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            t = f_18(d_18, t);
          }
      }
    }
  else
    {
      t = f_18(d_18, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_18 = NULL;
  t = SSL_stdin_stream();
  g_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_18 = NULL;
  t = SSL_stdout_stream();
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_18 = NULL;
  t = SSL_stderr_stream();
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_18);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm v_18 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      v_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_18;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm a_19 = NULL;
  a_19 = t;
  t = SSL_is_string(a_19);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_20 = ATgetArgument(t, 0);
      ATerm m_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_7 = NULL,w_7 = NULL;
        u_7 = t;
        t = SSL_explode_term(u_7);
        if(match_cons(t, sym__2))
          {
            ATerm q_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_20 = ATgetArgument(t, 1);
              if(((ATgetType(u_20) == AT_LIST) && !(ATisEmpty(u_20))))
                {
                  w_7 = ATgetFirst((ATermList) u_20);
                  {
                    ATerm v_20 = (ATerm) ATgetNext((ATermList) u_20);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_7;
        if(match_cons(t, sym_stderr_0))
          {
            t = w_7;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = w_7;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = w_7;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        {
          ATerm w_20 = t;
          int y_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
              t = _2_0(h_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  r_18 = ATgetArgument(t, 0);
                  s_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(r_18, s_18);
              t_18 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, t_18);
              ;
              LocalPopChoice(y_20);
            }
          else
            {
              t = w_20;
              {
                ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
                t = _2_0(i_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    x_18 = ATgetArgument(t, 0);
                    y_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(x_18, y_18);
                z_18 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, z_18);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,e_19 = NULL;
  ATerm z_20 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_19 = NULL;
      f_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_19, term_d_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = z_20;
      {
        ATerm x_7 = NULL;
        x_7 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_7), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = x_7;
        _fail(t);
      }
    }
  b_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(e_19);
  c_19 = t;
  t = b_19;
  t = fclose_0_0(t);
  t = c_19;
  return(t);
}
ATerm fetch_1_0 (ATerm m_94 (ATerm), ATerm t)
{
  ATerm k_19 (ATerm t)
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_94, _id, t);
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = Cons_2_0(_id, k_19, t);
      }
    return(t);
  }
  t = k_19(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_21);
    }
  else
    {
      t = h_21;
      {
        ATerm n_19 = NULL,o_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_19 = ATgetFirst((ATermList) t);
            o_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_19;
        {
          ATerm m_3 (ATerm t)
          {
            t = o_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_3, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_94 (ATerm), ATerm t)
{
  ATerm w_19 (ATerm t)
  {
    ATerm j_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_19, t);
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = j_21;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_94(t);
      }
    return(t);
  }
  t = w_19(t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm z_19 = NULL;
  z_19 = t;
  t = SSL_explode_string(z_19);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  t = SSL_explode_string(a_20);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm y_19 = NULL;
  t = _2_0(q_3, r_3, t);
  {
    ATerm q_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_20 = NULL,d_20 = NULL;
        if(match_cons(t, sym__2))
          {
            c_20 = ATgetArgument(t, 0);
            d_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_20;
        {
          ATerm w_3 (ATerm t)
          {
            t = d_20;
            return(t);
          }
          t = at_end_1_0(w_3, t);
        }
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = q_21;
        {
          ATerm c_8 = NULL,d_8 = NULL;
          c_8 = t;
          t = SSL_explode_term(c_8);
          if(match_cons(t, sym__2))
            {
              ATerm w_21 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_21) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              d_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_8;
          t = concat_0_0(t);
        }
      }
    y_19 = t;
    t = SSL_implode_string(y_19);
  }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_20 = NULL;
      n_20 = t;
      t = SSL_is_string(n_20);
      ;
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_3, t);
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            {
              ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
              r_20 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_20 = ATgetArgument(t, 0);
                  t = s_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_20 = ATgetArgument(t, 0);
                      t = s_20;
                      {
                        ATerm j_22 = t;
                        int k_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_20);
                            {
                              ATerm l_22 = t;
                              int o_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_10 = NULL;
                                  t = eval_config_0_0(t);
                                  s_10 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_20, s_10);
                                  t = s_10;
                                  ;
                                  LocalPopChoice(o_22);
                                }
                              else
                                {
                                  t = l_22;
                                }
                            }
                            ;
                            LocalPopChoice(k_22);
                          }
                        else
                          {
                            t = j_22;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_20), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = s_20;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_21 = NULL,b_21 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_20 = ATgetArgument(t, 0);
                          t_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_20;
                      t = eval_config_0_0(t);
                      a_21 = t;
                      t = t_20;
                      t = eval_config_0_0(t);
                      b_21 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_21, b_21);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_111 (ATerm), ATerm t)
{
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_21 = NULL,l_21 = NULL;
      g_21 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_11 = NULL;
            t = eval_config_0_0(t);
            q_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_11);
            t = q_11;
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
          }
        l_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_21, term_v_22);
        t = geq_0_0(t);
        t = g_21;
        t = e_111(t);
      }
      ;
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm n_21 = NULL;
  n_21 = t;
  if(match_string(t, "-k"))
    {
      t = n_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_21;
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL;
  o_21 = t;
  t = SSL_string_to_int(o_21);
  p_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), p_21);
  t = o_21;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_w_22;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, a_4, b_4, t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm r_21 = NULL;
  r_21 = t;
  if(match_string(t, "-S"))
    {
      t = r_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_21;
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_y_22;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_z_22;
  return(t);
}
ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL;
  t_21 = t;
  t = SSL_string_to_int(t_21);
  u_21 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_21);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_21);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_g_23;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_4, f_4, p_4, t);
      ;
      LocalPopChoice(k_23);
    }
  else
    {
      t = i_23;
      {
        ATerm o_23 = t;
        int p_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_4, r_4, s_4, t);
            ;
            LocalPopChoice(p_23);
          }
        else
          {
            t = o_23;
            t = Option_3_0(t_4, b_5, e_5, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_21 = NULL;
      t = term_c_4;
      t = d_0(t);
      z_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_23, term_t_23, z_21);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_21 = ATgetFirst((ATermList) t);
          y_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_21;
      t = a_0(t);
      t = term_c_4;
      t = b_0(t);
      c_22 = t;
      t = (ATerm) ATinsert(CheckATermList(y_21), c_22);
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm h_22 = NULL;
  h_22 = t;
  if(match_string(t, "-o"))
    {
      t = h_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_22;
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm i_22 = NULL;
  i_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), i_22);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_22);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, g_5, k_5, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,r_22 = NULL,s_22 = NULL;
  if(match_cons(t, sym__3))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
      r_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_22, n_22);
  {
    ATerm w_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_23 = ATgetArgument(t, 0);
            ATerm a_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_22, n_22);
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = w_23;
        t = (ATerm) ATempty;
      }
    s_22 = t;
    t = SSL_table_put(m_22, n_22, (ATerm) ATinsert(CheckATermList(s_22), r_22));
    t = (ATerm) ATmakeAppl(sym__3, m_22, n_22, r_22);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_23 = NULL;
      t = term_c_4;
      t = l_0(t);
      f_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_23, term_t_23, f_23);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm j_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_23 = ATgetFirst((ATermList) t);
          c_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_23 = ATgetFirst((ATermList) t);
          e_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_23;
      t = h_0(t);
      t = d_23;
      t = j_0(t);
      j_23 = t;
      t = (ATerm) ATinsert(CheckATermList(e_23), j_23);
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm l_23 = NULL;
  l_23 = t;
  if(match_string(t, "-i"))
    {
      t = l_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_23;
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm m_23 = NULL;
  m_23 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), m_23);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_23);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_5, m_5, p_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_4;
  t = whoami_0_0(t);
  n_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), n_23));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_12 = NULL;
        t = eval_config_0_0(t);
        c_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_12);
        t = c_12;
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_99(t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      {
        ATerm q_23 = NULL,r_23 = NULL,u_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_23 = ATgetFirst((ATermList) t);
            r_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_23;
        t = foldr_2_0(b_99, c_99, t);
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_23, u_23);
        t = c_99(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_x_22;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm l_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      l_12 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(l_12, t_12);
        ;
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = SSL_addr(l_12, t_12);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_23 = NULL,d_12 = NULL,h_12 = NULL;
  t = times_0_0(t);
  d_12 = t;
  t = SSL_explode_term(d_12);
  if(match_cons(t, sym__2))
    {
      ATerm l_24 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12;
  t = foldr_2_0(q_5, s_5, t);
  x_23 = t;
  t = SSL_TicksToSeconds(x_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
  i_24 = t;
  if(match_cons(t, sym__2))
    {
      j_24 = ATgetArgument(t, 0);
      k_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_24;
        if((j_24 != t))
          {
            _fail(t);
          }
        t = i_24;
        ;
        LocalPopChoice(o_24);
      }
    else
      {
        t = m_24;
        t = i_24;
        {
          ATerm q_24 = t;
          int t_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_24, k_24);
              ;
              LocalPopChoice(t_24);
            }
          else
            {
              t = q_24;
              t = SSL_gtr(j_24, k_24);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_24, k_24);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_111 (ATerm), ATerm t)
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_24 = NULL,p_24 = NULL;
      n_24 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_24 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_15 = NULL;
            t = eval_config_0_0(t);
            b_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_15);
            t = b_15;
            ;
            LocalPopChoice(f_25);
          }
        else
          {
            t = y_24;
          }
        p_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_24, term_g_25);
        t = geq_0_0(t);
        t = n_24;
        t = d_111(t);
      }
      ;
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL;
  t = run_time_0_0(t);
  r_24 = t;
  t = term_c_4;
  t = whoami_0_0(t);
  s_24 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), r_24), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), s_24));
  t = (ATerm) ATmakeAppl(sym__2, term_m_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_25), r_24), term_n_25), s_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_113 (ATerm), ATerm t)
{
  ATerm v_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm b_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_15 = NULL;
            t = eval_config_0_0(t);
            s_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_15);
            t = s_15;
            ;
            LocalPopChoice(c_26);
          }
        else
          {
            t = b_26;
          }
      }
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = v_25;
      t = fetch_1_0(x_5, t);
    }
  t = t_113(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_24 = ATgetFirst((ATermList) t);
      v_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_24 = NULL,a_25 = NULL;
        t = v_24;
        t = g_0(t);
        z_24 = t;
        t = u_24;
        t = f_0(t);
        a_25 = t;
        t = v_24;
        {
          ATerm y_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(z_24), a_25);
            return(t);
          }
          t = reverse_acc_2_0(f_0, y_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_4;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm b_86 (ATerm), ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
  e_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_25);
  b_25 = t;
  t = c_25;
  t = b_86(t);
  d_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, d_25), b_25);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm h_25 = NULL;
  h_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_25), term_d_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm g_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_16 = NULL;
            t = eval_config_0_0(t);
            k_16 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_16);
            t = k_16;
            ;
            LocalPopChoice(l_26);
          }
        else
          {
            t = g_26;
          }
      }
      ;
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      t = fetch_1_0(b_6, t);
    }
  t = term_m_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, d_6, t);
  t = map_1_0(e_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
  l_25 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      j_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_25);
  i_25 = t;
  t = j_25;
  t = c_86(t);
  k_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, k_25), i_25);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL;
  p_25 = t;
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_25;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_26 = ATgetFirst((ATermList) t);
                ATerm r_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_25;
          }
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = (ATerm) ATinsert(ATempty, p_25);
      }
    q_25 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), q_25);
    t = p_25;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_17 = NULL;
        t = eval_config_0_0(t);
        i_17 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_17);
        t = i_17;
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_b_27;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_c_27;
  return(t);
}
ATerm m_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_d_27;
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_e_27;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_6, k_6, l_6, t);
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      t = Option_3_0(m_6, p_6, s_6, t);
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm x_25 = NULL;
  x_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_25);
  t = (ATerm) ATmakeAppl(sym_Program_1, x_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_115 (ATerm), ATerm t)
{
  ATerm w_25 = NULL;
  w_25 = t;
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_27;
        t = w_115(t);
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
      }
    t = w_25;
    {
      ATerm z_6 (ATerm t)
      {
        ATerm k_27 = t;
        int l_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_27 = t;
            int n_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(n_27);
              }
            else
              {
                t = m_27;
                t = w_115(t);
                t = Cons_2_0(_id, z_6, t);
              }
            ;
            LocalPopChoice(l_27);
          }
        else
          {
            t = k_27;
            {
              ATerm z_25 = NULL,a_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_25 = ATgetFirst((ATermList) t);
                  a_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_26), (ATerm) ATmakeAppl(sym_Undefined_1, z_25));
            }
          }
        return(t);
      }
      t = Cons_2_0(x_6, z_6, t);
    }
  }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm k_26 = NULL;
  k_26 = t;
  if(match_string(t, "--help"))
    {
      t = k_26;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_26;
        }
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_o_27;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm g_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_115 (ATerm), ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
  h_26 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = h_26;
  {
    ATerm a_7 (ATerm t)
    {
      ATerm q_27 = t;
      int r_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_115(t);
          ;
          LocalPopChoice(r_27);
        }
      else
        {
          t = q_27;
          {
            ATerm s_27 = t;
            int t_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_7, d_7, e_7, t);
                ;
                LocalPopChoice(t_27);
              }
            else
              {
                t = s_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_7, t);
    {
      ATerm u_27 = t;
      int v_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_26 = NULL;
          p_26 = t;
          {
            ATerm w_27 = t;
            int x_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = p_26;
                {
                  ATerm y_27 = t;
                  int z_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm a_28 = t;
                        int b_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_19 = NULL;
                            t = eval_config_0_0(t);
                            p_19 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), p_19);
                            t = p_19;
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
                      t = y_27;
                      t = fetch_1_0(g_7, t);
                    }
                  t = p_26;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(x_27);
              }
            else
              {
                t = w_27;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm c_28 = t;
                  int d_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_20 = NULL;
                      t = eval_config_0_0(t);
                      x_20 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), x_20);
                      t = x_20;
                      ;
                      LocalPopChoice(d_28);
                    }
                  else
                    {
                      t = c_28;
                    }
                  t = p_26;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(v_27);
        }
      else
        {
          t = u_27;
          {
            ATerm e_28 = t;
            int f_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_7 (ATerm t)
                {
                  ATerm j_7 (ATerm t)
                  {
                    if(((i_26 != NULL) && (i_26 != t)))
                      _fail(t);
                    else
                      i_26 = t;
                    return(t);
                  }
                  t = Undefined_1_0(j_7, t);
                  return(t);
                }
                t = fetch_1_0(i_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_26)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_m_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_26)), term_g_28));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(f_28);
              }
            else
              {
                t = e_28;
              }
          }
        }
      j_26 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = j_26;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm t)
{
  ATerm s_26 = NULL;
  t = parse_options_1_0(v_113, t);
  s_26 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), s_26);
  t = s_26;
  t = x_113(t);
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_113, t);
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        {
          ATerm j_28 = t;
          int k_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_113(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_28);
            }
          else
            {
              t = j_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = if_verbose2_1_0(q_7, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_l_28;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_m_28;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL;
  t_26 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_21 = NULL;
        t = eval_config_0_0(t);
        k_21 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_21);
        t = k_21;
        ;
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
      }
    u_26 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, u_26));
    t = t_26;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_113(t);
        ;
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        {
          ATerm r_28 = t;
          int s_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(s_28);
            }
          else
            {
              t = r_28;
              {
                ATerm t_28 = t;
                int u_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(u_28);
                  }
                else
                  {
                    t = t_28;
                    {
                      ATerm v_28 = t;
                      int w_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_7, o_7, p_7, t);
                          ;
                          LocalPopChoice(w_28);
                        }
                      else
                        {
                          t = v_28;
                          {
                            ATerm x_28 = t;
                            int y_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(y_28);
                              }
                            else
                              {
                                t = x_28;
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
  ATerm m_7 (ATerm t)
  {
    ATerm v_26 = NULL,w_26 = NULL,s_21 = NULL;
    v_26 = t;
    {
      ATerm z_28 = t;
      int a_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((w_26 != NULL) && (w_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_7, t);
          ;
          LocalPopChoice(a_29);
        }
      else
        {
          t = z_28;
          t = term_b_29;
          w_26 = t;
        }
      t = not_null(w_26);
      t = ReadFromFile_0_0(t);
      s_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_26, s_21);
      t = apply_strategy_1_0(e_113, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(k_7, g_113, l_7, m_7, t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = _2_0(_id, t_7, t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = Specification_1_0(v_7, t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = Cons_2_0(_id, y_7, t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = Cons_2_0(z_7, a_8, t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = Strategies_1_0(b_8, t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = dead_def_elim_0_0(t);
  t = map_1_0(local_dead_def_elim_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(s_7, _fail, default_usage_0_0, t);
  return(t);
}
