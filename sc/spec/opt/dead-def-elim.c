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
ATerm term_u_29;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_y_27;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_f_26;
ATerm term_l_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_q_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_w_19;
ATerm term_p_19;
ATerm term_k_19;
ATerm term_g_19;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_c_11;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_n_10;
ATerm term_w_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_k_4;
void init_constant_terms (void)
{
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym__3, term_w_19, term_v_24, term_k_4);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm DefDead_0_0 (ATerm);
ATerm filter_1_0 (ATerm c_101 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm DeclareNotDead_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm DeclareDefDead_0_0 (ATerm);
ATerm table_pop_rm_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm v_100 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm u_100 (ATerm), ATerm);
ATerm scope_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm);
ATerm q_1 (ATerm);
ATerm t_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm local_dead_def_elim_0_0 (ATerm);
ATerm map_1_0 (ATerm m_94 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm);
ATerm Let_2_0 (ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm q_87 (ATerm), ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm union_1_0 (ATerm z_96 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm free_vars_3_0 (ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm at_end_1_0 (ATerm c_95 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm n_12 (ATerm f_12, ATerm);
ATerm conc_0_0 (ATerm);
ATerm diff_1_0 (ATerm u_96 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm m_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm GnNext_3_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm);
ATerm for_3_0 (ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm);
ATerm assert_1_0 (ATerm y_100 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm RegisterDefinition_0_0 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm r_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm dead_def_elim_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm t_73 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm y_73 (ATerm), ATerm);
ATerm _2_0 (ATerm a_69 (ATerm), ATerm b_69 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm f_110 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm h_113 (ATerm), ATerm);
ATerm x_22 (ATerm r_22, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm e_6 (ATerm);
ATerm o_6 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm q_6 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm w_94 (ATerm), ATerm);
ATerm debug_1_0 (ATerm d_110 (ATerm), ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm q_111 (ATerm), ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm p_111 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_7 (ATerm);
ATerm need_help_1_0 (ATerm f_114 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm b_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm l_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm i_116 (ATerm), ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm parse_options_1_0 (ATerm h_116 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm);
ATerm w_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm d_9 (ATerm);
ATerm iowrap_3_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_0 = NULL,k_0 = NULL,m_0 = NULL,n_0 = NULL,r_0 = NULL;
  i_0 = t;
  t = term_k_4;
  t = whoami_0_0(t);
  k_0 = t;
  t = term_m_9;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_9), k_0), term_n_9);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  t = term_p_9;
  r_0 = t;
  t = SSL_exit(r_0);
  t = i_0;
  return(t);
}
ATerm DefDead_0_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL;
  i_1 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_1 = ATgetArgument(t, 0);
      {
        ATerm q_9 = ATgetArgument(t, 1);
      }
      {
        ATerm r_9 = ATgetArgument(t, 2);
      }
      {
        ATerm t_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_1 = NULL,a_2 = NULL,c_2 = NULL;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, j_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        p_1 = t;
        t = term_w_9;
        a_2 = t;
        t = SSL_table_get(a_2, p_1);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_2 = ATgetFirst((ATermList) t);
            {
              ATerm x_9 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = c_2;
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
        {
          ATerm p_2 = NULL,q_2 = NULL,s_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, j_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
          p_2 = t;
          t = term_w_9;
          q_2 = t;
          t = SSL_table_get(q_2, p_2);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_2 = ATgetFirst((ATermList) t);
              {
                ATerm y_9 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = s_2;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm z_9 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_9) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_k_4;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm a_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = a_10;
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              t = filter_1_0(c_101, t);
              return(t);
            }
            t = Cons_2_0(c_101, l_1, t);
            ;
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            {
              ATerm s_1 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm g_10 = ATgetFirst((ATermList) t);
                  s_1 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = s_1;
              t = filter_1_0(c_101, t);
            }
          }
      }
    }
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL;
  if(match_cons(t, sym__3))
    {
      u_1 = ATgetArgument(t, 0);
      v_1 = ATgetArgument(t, 1);
      w_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(u_1, v_1);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_10 = ATgetFirst((ATermList) t);
      x_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_1), w_1);
  y_1 = t;
  t = SSL_table_put(u_1, v_1, y_1);
  t = (ATerm) ATmakeAppl(sym__3, u_1, v_1, w_1);
  return(t);
}
ATerm DeclareNotDead_0_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm i_10 = ATgetArgument(t, 0);
      if(match_cons(i_10, sym_SVar_1))
        {
          f_2 = ATgetArgument(i_10, 0);
        }
      else
        _fail(t);
      {
        ATerm j_10 = ATgetArgument(t, 1);
      }
      {
        ATerm m_10 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_9, (ATerm)ATmakeAppl(sym_SDefT_4, f_2, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_n_10);
  t = table_replace_0_0(t);
  t = g_2;
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm DeclareDefDead_0_0 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      h_2 = ATgetArgument(t, 0);
      {
        ATerm o_10 = ATgetArgument(t, 1);
      }
      {
        ATerm p_10 = ATgetArgument(t, 2);
      }
      {
        ATerm q_10 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, h_2, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_u_10);
  t = assert_1_0(m_1, t);
  t = i_2;
  return(t);
}
ATerm table_pop_rm_0_0 (ATerm t)
{
  ATerm m_2 = NULL,r_2 = NULL,x_2 = NULL;
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(m_2, r_2);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_10 = ATgetFirst((ATermList) t);
            x_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_10);
        t = SSL_table_put(m_2, r_2, x_2);
        t = (ATerm) ATmakeAppl(sym__3, m_2, r_2, x_2);
      }
    else
      {
        t = v_10;
        t = SSL_table_remove(m_2, r_2);
        t = (ATerm) ATmakeAppl(sym__2, m_2, r_2);
      }
    t = (ATerm) ATmakeAppl(sym__2, m_2, r_2);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm v_100 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,d_3 = NULL,h_3 = NULL,k_3 = NULL,l_3 = NULL;
  y_2 = t;
  t = v_100(t);
  d_3 = t;
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_3 = NULL;
        t = term_c_11;
        n_3 = t;
        t = SSL_table_get(d_3, n_3);
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_3 = ATgetFirst((ATermList) t);
        h_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_11;
    l_3 = t;
    t = SSL_table_put(d_3, l_3, h_3);
    t = k_3;
    {
      ATerm n_1 (ATerm t)
      {
        ATerm o_3 = NULL;
        o_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_3, o_3);
        t = table_pop_rm_0_0(t);
        return(t);
      }
      t = map_1_0(n_1, t);
      t = y_2;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm t)
{
  ATerm d_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_91(t);
      t = t_91(t);
      ;
      LocalPopChoice(f_11);
    }
  else
    {
      t = d_11;
      t = t_91(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm u_100 (ATerm), ATerm t)
{
  ATerm s_3 = NULL,u_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL;
  s_3 = t;
  t = u_100(t);
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_3, term_c_11);
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_3 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_11 = ATgetArgument(t, 0);
            ATerm j_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_11;
        b_3 = t;
        t = SSL_table_get(u_3, b_3);
        ;
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        t = (ATerm) ATempty;
      }
    v_3 = t;
    t = term_c_11;
    x_3 = t;
    t = (ATerm) ATinsert(CheckATermList(v_3), (ATerm) ATempty);
    y_3 = t;
    t = SSL_table_put(u_3, x_3, y_3);
    t = s_3;
  }
  return(t);
}
ATerm scope_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t)
{
  t = begin_scope_1_0(w_100, t);
  {
    ATerm o_1 (ATerm t)
    {
      t = end_scope_1_0(w_100, t);
      return(t);
    }
    t = restore_always_2_0(x_100, o_1, t);
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = map_1_0(DeclareDefDead_0_0, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = filter_1_0(b_2, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm k_11 = t;
  if((PushChoice() == 0))
    {
      t = DefDead_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_11;
    }
  return(t);
}
ATerm local_dead_def_elim_0_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Let_2_0(t_1, _id, t);
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        {
          ATerm n_11 = t;
          int o_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = DeclareNotDead_0_0(t);
              ;
              LocalPopChoice(o_11);
            }
          else
            {
              t = n_11;
            }
        }
      }
    t = SRTS_all(local_dead_def_elim_0_0, t);
    {
      ATerm p_11 = t;
      int q_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Let_2_0(z_1, _id, t);
          ;
          LocalPopChoice(q_11);
        }
      else
        {
          t = p_11;
        }
    }
    return(t);
  }
  t = scope_2_0(q_1, r_1, t);
  return(t);
}
ATerm map_1_0 (ATerm m_94 (ATerm), ATerm t)
{
  ATerm l_4 (ATerm t)
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
        t = Cons_2_0(m_94, l_4, t);
      }
    return(t);
  }
  t = l_4(t);
  return(t);
}
ATerm Rec_2_0 (ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,o_0 = NULL,p_0 = NULL;
  u_4 = t;
  if(match_cons(t, sym_Rec_2))
    {
      n_4 = ATgetArgument(t, 0);
      o_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_4);
  m_4 = t;
  t = n_4;
  t = d_79(t);
  s_4 = t;
  t = o_4;
  t = e_79(t);
  t_4 = t;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, s_4, t_4);
  o_0 = t;
  t = SSLsetAnnotations(o_0, m_4);
  return(t);
}
ATerm SDefT_4_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL,c_5 = NULL,d_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_0 = NULL,s_0 = NULL;
  p_5 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      y_4 = ATgetArgument(t, 0);
      z_4 = ATgetArgument(t, 1);
      c_5 = ATgetArgument(t, 2);
      d_5 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_5);
  x_4 = t;
  t = y_4;
  t = y_80(t);
  l_5 = t;
  t = z_4;
  t = z_80(t);
  m_5 = t;
  t = c_5;
  t = a_81(t);
  n_5 = t;
  t = d_5;
  t = b_81(t);
  o_5 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, l_5, m_5, n_5, o_5);
  q_0 = t;
  t = SSLsetAnnotations(q_0, x_4);
  return(t);
}
ATerm SDef_3_0 (ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,t_0 = NULL,u_0 = NULL;
  a_6 = t;
  if(match_cons(t, sym_SDef_3))
    {
      u_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
      w_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_6);
  t_5 = t;
  t = u_5;
  t = v_80(t);
  x_5 = t;
  t = v_5;
  t = w_80(t);
  y_5 = t;
  t = w_5;
  t = x_80(t);
  z_5 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, x_5, y_5, z_5);
  t_0 = t;
  t = SSLsetAnnotations(t_0, t_5);
  return(t);
}
ATerm Let_2_0 (ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,i_6 = NULL,j_6 = NULL,r_6 = NULL,c_7 = NULL,v_0 = NULL,w_0 = NULL;
  c_7 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_6 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_7);
  f_6 = t;
  t = g_6;
  t = g_78(t);
  j_6 = t;
  t = i_6;
  t = h_78(t);
  r_6 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, j_6, r_6);
  v_0 = t;
  t = SSLsetAnnotations(v_0, f_6);
  return(t);
}
ATerm sboundin_3_0 (ATerm q_87 (ATerm), ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm t)
{
  ATerm u_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(q_87, q_87, t);
      ;
      LocalPopChoice(w_11);
    }
  else
    {
      t = u_11;
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(s_87, s_87, q_87, t);
            ;
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            {
              ATerm z_11 = t;
              int b_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(s_87, s_87, s_87, q_87, t);
                  ;
                  LocalPopChoice(b_12);
                }
              else
                {
                  t = z_11;
                  t = Rec_2_0(s_87, q_87, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm c_8 = NULL;
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          c_8 = ATgetArgument(t, 0);
          {
            ATerm e_12 = ATgetArgument(t, 1);
          }
          {
            ATerm g_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_12);
      t = c_8;
    }
  else
    {
      t = c_12;
      if(match_cons(t, sym_SDefT_4))
        {
          c_8 = ATgetArgument(t, 0);
          {
            ATerm l_12 = ATgetArgument(t, 1);
          }
          {
            ATerm m_12 = ATgetArgument(t, 2);
          }
          {
            ATerm o_12 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = c_8;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm a_8 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      a_8 = ATgetArgument(t, 0);
      {
        ATerm p_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_8;
  t = map_1_0(d_2, t);
  return(t);
}
ATerm union_1_0 (ATerm z_96 (ATerm), ATerm t)
{
  ATerm s_9 = NULL,b_10 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9;
  {
    ATerm d_10 (ATerm t)
    {
      ATerm q_12 = t;
      int t_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_10;
          ;
          LocalPopChoice(t_12);
        }
      else
        {
          t = q_12;
          {
            ATerm u_12 = t;
            int v_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_3 = NULL,f_3 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_3 = ATgetFirst((ATermList) t);
                    f_3 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_10;
                {
                  ATerm e_2 (ATerm t)
                  {
                    ATerm g_3 = NULL;
                    g_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_3, g_3);
                    t = z_96(t);
                    return(t);
                  }
                  t = fetch_1_0(e_2, t);
                  t = f_3;
                  t = d_10(t);
                }
                ;
                LocalPopChoice(v_12);
              }
            else
              {
                t = u_12;
                t = Cons_2_0(_id, d_10, t);
              }
          }
        }
      return(t);
    }
    t = d_10(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_99(t);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      {
        ATerm k_10 = NULL,l_10 = NULL,r_10 = NULL,t_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_10 = ATgetFirst((ATermList) t);
            l_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_10;
        t = r_99(t);
        r_10 = t;
        t = l_10;
        t = foldr_3_0(p_99, q_99, r_99, t);
        t_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_10, t_10);
        t = q_99(t);
      }
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = union_1_0(o_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm j_4 = NULL;
  if(match_cons(t, sym__2))
    {
      j_4 = ATgetArgument(t, 0);
      if((j_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = union_1_0(v_2, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm e_5 = NULL;
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      if((e_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm e_11 (ATerm t)
  {
    ATerm b_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_103(t);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = b_13;
        {
          ATerm f_13 = t;
          int h_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_10 = NULL,b_11 = NULL,w_3 = NULL,e_4 = NULL;
              w_10 = t;
              t = s_103(t);
              b_11 = t;
              t = w_10;
              {
                ATerm j_2 (ATerm t)
                {
                  ATerm p_3 = NULL;
                  t = e_11(t);
                  p_3 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_3, b_11);
                  t = diff_0_0(t);
                  return(t);
                }
                t = t_103(j_2, e_11, k_2, t);
                w_3 = t;
                t = SSL_explode_term(w_3);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_13 = ATgetArgument(t, 0);
                    e_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_4;
                t = foldr_3_0(l_2, n_2, _id, t);
              }
              ;
              LocalPopChoice(h_13);
            }
          else
            {
              t = f_13;
              {
                ATerm p_4 = NULL,q_4 = NULL;
                p_4 = t;
                t = SSL_explode_term(p_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_13 = ATgetArgument(t, 0);
                    q_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_4;
                t = foldr_3_0(t_2, u_2, e_11, t);
              }
            }
        }
      }
    return(t);
  }
  t = e_11(t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_95 (ATerm), ATerm t)
{
  ATerm a_12 (ATerm t)
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, a_12, t);
        ;
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_95(t);
      }
    return(t);
  }
  t = a_12(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm t_11 = NULL,v_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_11 = ATgetFirst((ATermList) t);
            v_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_11;
        {
          ATerm w_2 (ATerm t)
          {
            t = v_11;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(w_2, t);
        }
      }
    }
  return(t);
}
ATerm n_12 (ATerm f_12, ATerm t)
{
  ATerm h_12 = NULL;
  t = SSL_explode_term(f_12);
  if(match_cons(t, sym__2))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
      {
        ATerm r_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 (ATerm t)
            {
              t = j_12;
              return(t);
            }
            t = i_12;
            t = at_end_1_0(z_2, t);
            ;
            LocalPopChoice(t_13);
          }
        else
          {
            t = r_13;
            t = n_12(k_12, t);
          }
      }
    }
  else
    {
      t = n_12(k_12, t);
    }
  return(t);
}
ATerm diff_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL;
  if(match_cons(t, sym__2))
    {
      r_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_12;
  {
    ATerm w_12 (ATerm t)
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
            ATerm c_14 = t;
            int d_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_5 = NULL,k_5 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    j_5 = ATgetFirst((ATermList) t);
                    k_5 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = s_12;
                {
                  ATerm a_3 (ATerm t)
                  {
                    ATerm q_5 = NULL;
                    q_5 = t;
                    t = (ATerm) ATmakeAppl(sym__2, j_5, q_5);
                    t = u_96(t);
                    return(t);
                  }
                  t = fetch_1_0(a_3, t);
                  t = k_5;
                  t = w_12(t);
                }
                ;
                LocalPopChoice(d_14);
              }
            else
              {
                t = c_14;
                t = Cons_2_0(_id, w_12, t);
              }
          }
        }
      return(t);
    }
    t = w_12(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm t)
{
  ATerm x_12 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_92(t);
        ;
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = y_92(t);
        t = _2_0(a_93, x_12, t);
        t = z_92(t);
      }
    return(t);
  }
  t = x_12(t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_14 = ATgetArgument(t, 0);
      if(((ATgetType(g_14) != AT_LIST) || !(ATisEmpty(g_14))))
        _fail(t);
      {
        ATerm h_14 = ATgetArgument(t, 1);
        if(((ATgetType(h_14) != AT_LIST) || !(ATisEmpty(h_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_14 = ATgetArgument(t, 0);
      if(((ATgetType(i_14) == AT_LIST) && !(ATisEmpty(i_14))))
        {
          u_13 = ATgetFirst((ATermList) i_14);
          w_13 = (ATerm) ATgetNext((ATermList) i_14);
        }
      else
        _fail(t);
      {
        ATerm k_14 = ATgetArgument(t, 1);
        if(((ATgetType(k_14) == AT_LIST) && !(ATisEmpty(k_14))))
          {
            v_13 = ATgetFirst((ATermList) k_14);
            x_13 = (ATerm) ATgetNext((ATermList) k_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_13, v_13), (ATerm) ATmakeAppl(sym__2, w_13, x_13));
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm y_13 = NULL,b_14 = NULL;
  if(match_cons(t, sym__2))
    {
      y_13 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_14), y_13);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm y_12 = NULL,c_13 = NULL,e_13 = NULL,g_13 = NULL,j_13 = NULL,n_13 = NULL,s_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_14 = ATgetFirst((ATermList) t);
      if(match_cons(m_14, sym__2))
        {
          y_12 = ATgetArgument(m_14, 0);
          c_13 = ATgetArgument(m_14, 1);
        }
      else
        _fail(t);
      e_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(c_13);
  if(match_cons(t, sym__2))
    {
      g_13 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_12);
  if(match_cons(t, sym__2))
    {
      if((g_13 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_13, j_13);
  t = genzip_4_0(c_3, i_3, j_3, _id, t);
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_13, e_13);
  t = conc_0_0(t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm j_14 = NULL;
  j_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, j_14);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = _2_0(_id, t_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm n_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, z_3, t);
      ;
      LocalPopChoice(r_14);
    }
  else
    {
      t = n_14;
      {
        ATerm x_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
        if(match_cons(t, sym__2))
          {
            x_14 = ATgetArgument(t, 0);
            a_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_15;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_15 = ATgetFirst((ATermList) t);
            c_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_14), b_15), c_15);
      }
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_14 = ATgetFirst((ATermList) t);
          q_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_14;
      if(match_cons(t, sym__2))
        {
          o_14 = ATgetArgument(t, 0);
          p_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_14;
      if((o_14 != t))
        {
          _fail(t);
        }
      t = q_14;
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm g_15 = NULL;
  if(match_cons(t, sym__2))
    {
      g_15 = ATgetArgument(t, 0);
      if((g_15 != ATgetArgument(t, 1)))
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
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(m_3, q_3, r_3, t);
      ;
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      t = diff_1_0(a_4, t);
    }
  return(t);
}
ATerm GnNext_3_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm t)
{
  ATerm h_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm w_14 = ATgetArgument(t, 0);
      if(((ATgetType(w_14) == AT_LIST) && !(ATisEmpty(w_14))))
        {
          h_15 = ATgetFirst((ATermList) w_14);
          j_15 = (ATerm) ATgetNext((ATermList) w_14);
        }
      else
        _fail(t);
      k_15 = ATgetArgument(t, 1);
      l_15 = ATgetArgument(t, 2);
      m_15 = ATgetArgument(t, 3);
      p_15 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_15, l_15);
  t = l_117(t);
  q_15 = t;
  t = m_117(t);
  r_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_15, k_15);
  t = diff_0_0(t);
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_15, j_15);
  t = conc_0_0(t);
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_15, k_15);
  t = conc_0_0(t);
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_15, q_15, m_15);
  t = n_117(t);
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym__5, t_15, u_15, l_15, v_15, p_15);
  return(t);
}
ATerm while_not_2_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm t)
{
  ATerm w_15 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_105(t);
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = y_105(t);
        t = w_15(t);
      }
    return(t);
  }
  t = w_15(t);
  return(t);
}
ATerm for_3_0 (ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm t)
{
  t = a_106(t);
  t = while_not_2_0(b_106, c_106, t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm j_16 = NULL,n_16 = NULL,p_16 = NULL;
  if(match_cons(t, sym__3))
    {
      j_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
      p_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, j_16, j_16, n_16, p_16, (ATerm) ATempty);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm d_15 = ATgetArgument(t, 0);
      if(((ATgetType(d_15) != AT_LIST) || !(ATisEmpty(d_15))))
        _fail(t);
      {
        ATerm e_15 = ATgetArgument(t, 1);
      }
      {
        ATerm f_15 = ATgetArgument(t, 2);
      }
      q_16 = ATgetArgument(t, 3);
      r_16 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_16, r_16);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm t)
{
  ATerm h_16 = NULL;
  ATerm d_4 (ATerm t)
  {
    ATerm i_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(i_117, j_117, k_117, t);
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = i_15;
        {
          ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,a_17 = NULL,b_17 = NULL;
          if(match_cons(t, sym__5))
            {
              t_16 = ATgetArgument(t, 0);
              w_16 = ATgetArgument(t, 1);
              x_16 = ATgetArgument(t, 2);
              a_17 = ATgetArgument(t, 3);
              b_17 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = t_16;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_16 = ATgetFirst((ATermList) t);
              v_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, v_16, w_16, x_16, a_17, (ATerm) ATinsert(CheckATermList(b_17), u_16));
        }
      }
    return(t);
  }
  t = for_3_0(b_4, c_4, d_4, t);
  if(match_cons(t, sym__2))
    {
      h_16 = ATgetArgument(t, 0);
      {
        ATerm o_15 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_16;
  return(t);
}
ATerm assert_1_0 (ATerm y_100 (ATerm), ATerm t)
{
  ATerm j_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  if(match_cons(t, sym__2))
    {
      j_17 = ATgetArgument(t, 0);
      n_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_100(t);
  o_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_17, j_17, n_17);
  t = table_push_0_0(t);
  {
    ATerm x_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_17 = NULL;
        t = term_c_11;
        z_17 = t;
        t = SSL_table_get(o_17, z_17);
        ;
        LocalPopChoice(y_15);
      }
    else
      {
        t = x_15;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_17 = ATgetFirst((ATermList) t);
        t_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_11;
    u_17 = t;
    t = (ATerm) ATinsert(CheckATermList(t_17), (ATerm) ATinsert(CheckATermList(p_17), j_17));
    v_17 = t;
    t = SSL_table_put(o_17, u_17, v_17);
    t = (ATerm) ATmakeAppl(sym__2, j_17, n_17);
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_z_15;
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
  a_18 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      b_18 = ATgetArgument(t, 0);
      {
        ATerm a_16 = ATgetArgument(t, 1);
      }
      {
        ATerm b_16 = ATgetArgument(t, 2);
      }
      {
        ATerm c_16 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_18, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_d_16, a_18));
  t = assert_1_0(f_4, t);
  t = c_18;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm h_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
  if(match_cons(t, sym__2))
    {
      h_6 = ATgetArgument(t, 0);
      {
        ATerm e_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_6, (ATerm) ATempty);
  l_6 = t;
  t = term_z_15;
  m_6 = t;
  t = SSL_table_get(m_6, l_6);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_6 = ATgetFirst((ATermList) t);
      {
        ATerm f_16 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_6;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm g_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_16) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      k_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = free_vars_3_0(r_4, v_4, sboundin_3_0, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm i_16 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
      g_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_20), f_20);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm k_18 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      k_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_18);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
      {
        ATerm m_18 = NULL,n_18 = NULL;
        ATerm m_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm s_16 = ATgetArgument(t, 0);
                n_18 = ATgetArgument(t, 1);
                {
                  ATerm y_16 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_16);
            t = n_18;
            t = map_1_0(w_4, t);
          }
        else
          {
            t = m_16;
            {
              ATerm z_16 = t;
              int c_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      m_18 = ATgetArgument(t, 0);
                      {
                        ATerm d_17 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_17);
                  t = (ATerm) ATinsert(ATempty, m_18);
                }
              else
                {
                  t = z_16;
                  {
                    ATerm e_17 = t;
                    int f_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm g_17 = ATgetArgument(t, 0);
                            n_18 = ATgetArgument(t, 1);
                            {
                              ATerm h_17 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm i_17 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(f_17);
                        t = n_18;
                        t = map_1_0(a_5, t);
                      }
                    else
                      {
                        t = e_17;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm k_17 = ATgetArgument(t, 0);
                            n_18 = ATgetArgument(t, 1);
                            {
                              ATerm l_17 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm m_17 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = n_18;
                        t = map_1_0(b_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm t_18 = NULL;
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_18 = ATgetArgument(t, 0);
          {
            ATerm s_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_17);
      t = t_18;
    }
  else
    {
      t = q_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_18;
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm h_19 = NULL;
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_19 = ATgetArgument(t, 0);
          {
            ATerm y_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_17);
      t = h_19;
    }
  else
    {
      t = w_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_19;
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm a_20 = NULL;
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_20 = ATgetArgument(t, 0);
          {
            ATerm f_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_18);
      t = a_20;
    }
  else
    {
      t = d_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_20;
    }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm j_18 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_g_18), j_18, (ATerm) ATempty);
  t = graph_nodes_roots_3_0(g_4, h_4, i_4, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm t_73 (ATerm), ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,x_0 = NULL,y_0 = NULL;
  k_20 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      i_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_20);
  h_20 = t;
  t = i_20;
  t = t_73(t);
  j_20 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, j_20);
  x_0 = t;
  t = SSLsetAnnotations(x_0, h_20);
  return(t);
}
ATerm Cons_2_0 (ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,t_20 = NULL,z_0 = NULL,a_1 = NULL;
  t_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_20 = ATgetFirst((ATermList) t);
      p_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_20);
  n_20 = t;
  t = o_20;
  t = p_73(t);
  q_20 = t;
  t = p_20;
  t = q_73(t);
  r_20 = t;
  a_1 = t;
  t = (ATerm) ATinsert(CheckATermList(r_20), q_20);
  z_0 = t;
  t = SSLsetAnnotations(z_0, n_20);
  return(t);
}
ATerm Specification_1_0 (ATerm y_73 (ATerm), ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,e_21 = NULL,h_21 = NULL,b_1 = NULL,c_1 = NULL;
  h_21 = t;
  if(match_cons(t, sym_Specification_1))
    {
      y_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_21);
  x_20 = t;
  t = y_20;
  t = y_73(t);
  e_21 = t;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_21);
  b_1 = t;
  t = SSLsetAnnotations(b_1, x_20);
  return(t);
}
ATerm _2_0 (ATerm a_69 (ATerm), ATerm b_69 (ATerm), ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,d_1 = NULL,e_1 = NULL;
  p_21 = t;
  if(match_cons(t, sym__2))
    {
      l_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_21);
  k_21 = t;
  t = l_21;
  t = a_69(t);
  n_21 = t;
  t = m_21;
  t = b_69(t);
  o_21 = t;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_21, o_21);
  d_1 = t;
  t = SSLsetAnnotations(d_1, k_21);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm f_110 (ATerm), ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  if(match_cons(t, sym__2))
    {
      s_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_21, term_h_18);
  t = open_stream_0_0(t);
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_21, t_21);
  t = f_110(t);
  t = fclose_0_0(t);
  t = t_21;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = fetch_1_0(s_5, t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = WriteToFile_1_0(b_6, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_18 = ATgetArgument(t, 0);
      if(match_cons(i_18, sym_Stream_1))
        {
          x_21 = ATgetArgument(i_18, 0);
        }
      else
        _fail(t);
      y_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(x_21, y_21);
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_21);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = WriteToFile_1_0(d_6, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_18 = ATgetArgument(t, 0);
      if(match_cons(l_18, sym_Stream_1))
        {
          a_22 = ATgetArgument(l_18, 0);
        }
      else
        _fail(t);
      b_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(a_22, b_22);
  c_22 = t;
  t = term_o_18;
  d_22 = t;
  t = SSL_fputc(d_22, c_22);
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_22);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  v_21 = t;
  {
    ATerm f_5 (ATerm t)
    {
      ATerm p_18 = t;
      int q_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_5 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((w_21 != NULL) && (w_21 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_5, t);
          ;
          LocalPopChoice(q_18);
        }
      else
        {
          t = p_18;
          t = term_r_18;
          if(((w_21 != NULL) && (w_21 != t)))
            _fail(t);
          else
            w_21 = t;
        }
      return(t);
    }
    t = _2_0(f_5, _id, t);
    t = v_21;
    {
      ATerm h_5 (ATerm t)
      {
        ATerm p_6 = NULL;
        p_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_21), p_6);
        return(t);
      }
      t = _2_0(_id, h_5, t);
      {
        ATerm s_18 = t;
        int u_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(i_5, r_5, t);
            ;
            LocalPopChoice(u_18);
          }
        else
          {
            t = s_18;
            t = _2_0(_id, c_6, t);
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
ATerm apply_strategy_1_0 (ATerm h_113 (ATerm), ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
  f_22 = t;
  t = dtime_0_0(t);
  t = f_22;
  t = h_113(t);
  g_22 = t;
  t = dtime_0_0(t);
  h_22 = t;
  t = g_22;
  if(match_cons(t, sym__2))
    {
      i_22 = ATgetArgument(t, 0);
      j_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_22), (ATerm) ATmakeAppl(sym_Runtime_1, h_22)), j_22);
  return(t);
}
ATerm x_22 (ATerm r_22, ATerm t)
{
  t = SSL_fclose(r_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL;
  v_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_22 = ATgetArgument(t, 0);
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_22);
            ;
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            t = x_22(v_22, t);
          }
      }
    }
  else
    {
      t = x_22(v_22, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_22 = NULL;
  t = SSL_stdin_stream();
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_22 = NULL;
  t = SSL_stdout_stream();
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_23 = NULL;
  t = SSL_stderr_stream();
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_23);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm i_23 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      i_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_23;
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm m_23 = NULL;
  m_23 = t;
  t = SSL_is_string(m_23);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_18 = ATgetArgument(t, 0);
      ATerm y_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_7 = NULL,d_7 = NULL;
        b_7 = t;
        t = SSL_explode_term(b_7);
        if(match_cons(t, sym__2))
          {
            ATerm b_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_19) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm c_19 = ATgetArgument(t, 1);
              if(((ATgetType(c_19) == AT_LIST) && !(ATisEmpty(c_19))))
                {
                  d_7 = ATgetFirst((ATermList) c_19);
                  {
                    ATerm d_19 = (ATerm) ATgetNext((ATermList) c_19);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = d_7;
        if(match_cons(t, sym_stderr_0))
          {
            t = d_7;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = d_7;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = d_7;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        {
          ATerm e_19 = t;
          int f_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
              t = _2_0(e_6, _id, t);
              if(match_cons(t, sym__2))
                {
                  f_23 = ATgetArgument(t, 0);
                  g_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(f_23, g_23);
              h_23 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, h_23);
              ;
              LocalPopChoice(f_19);
            }
          else
            {
              t = e_19;
              {
                ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
                t = _2_0(o_6, _id, t);
                if(match_cons(t, sym__2))
                  {
                    j_23 = ATgetArgument(t, 0);
                    k_23 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(j_23, k_23);
                l_23 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, l_23);
              }
            }
        }
      }
  }
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_23 = NULL;
      q_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_23, term_k_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      t = debug_1_0(q_6, t);
      _fail(t);
    }
  n_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(p_23);
  o_23 = t;
  t = n_23;
  t = fclose_0_0(t);
  t = o_23;
  return(t);
}
ATerm fetch_1_0 (ATerm w_94 (ATerm), ATerm t)
{
  ATerm v_23 (ATerm t)
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(w_94, _id, t);
        ;
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = Cons_2_0(_id, v_23, t);
      }
    return(t);
  }
  t = v_23(t);
  return(t);
}
ATerm debug_1_0 (ATerm d_110 (ATerm), ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
  w_23 = t;
  t = d_110(t);
  x_23 = t;
  t = term_m_9;
  y_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_23), x_23);
  z_23 = t;
  t = SSL_printnl(y_23, z_23);
  t = w_23;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_24 = NULL;
      g_24 = t;
      t = SSL_is_string(g_24);
      ;
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_6, t);
            ;
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            {
              ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
              r_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_24 = ATgetArgument(t, 0);
                  t = s_24;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_24 = ATgetArgument(t, 0);
                      t = s_24;
                      {
                        ATerm u_19 = t;
                        int v_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(v_19);
                          }
                        else
                          {
                            t = u_19;
                            t = debug_1_0(t_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_7 = NULL,u_7 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_24 = ATgetArgument(t, 0);
                          t_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_24;
                      t = eval_config_0_0(t);
                      t_7 = t;
                      t = t_24;
                      t = eval_config_0_0(t);
                      u_7 = t;
                      t = SSL_strcat(t_7, u_7);
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
  ATerm y_24 = NULL,z_24 = NULL;
  y_24 = t;
  t = term_w_19;
  z_24 = t;
  t = SSL_table_get(z_24, y_24);
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_25 = NULL,b_25 = NULL;
        t = eval_config_0_0(t);
        a_25 = t;
        t = term_w_19;
        b_25 = t;
        t = SSL_table_put(b_25, y_24, a_25);
        t = a_25;
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm q_111 (ATerm), ATerm t)
{
  ATerm z_19 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_25 = NULL,e_25 = NULL;
      c_25 = t;
      t = term_c_20;
      t = get_config_0_0(t);
      e_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_25, term_d_20);
      t = geq_0_0(t);
      t = c_25;
      t = q_111(t);
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = z_19;
    }
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  if(match_string(t, "-k"))
    {
      t = g_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_25;
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
  h_25 = t;
  t = SSL_string_to_int(h_25);
  i_25 = t;
  t = term_w_19;
  j_25 = t;
  t = term_e_20;
  k_25 = t;
  t = SSL_table_put(j_25, k_25, i_25);
  t = h_25;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_6, v_6, w_6, t);
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm m_25 = NULL;
  m_25 = t;
  if(match_string(t, "-S"))
    {
      t = m_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_25;
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
  t = term_w_19;
  n_25 = t;
  t = term_c_20;
  o_25 = t;
  t = term_m_20;
  p_25 = t;
  t = SSL_table_put(n_25, o_25, p_25);
  t = term_s_20;
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  q_25 = t;
  t = SSL_string_to_int(q_25);
  r_25 = t;
  t = term_w_19;
  s_25 = t;
  t = term_c_20;
  t_25 = t;
  t = SSL_table_put(s_25, t_25, r_25);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_25);
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_v_20;
  return(t);
}
ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  t = term_w_19;
  u_25 = t;
  t = term_w_20;
  v_25 = t;
  t = term_k_4;
  w_25 = t;
  t = SSL_table_put(u_25, v_25, w_25);
  t = term_z_20;
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_a_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_6, y_6, z_6, t);
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm d_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_7, e_7, f_7, t);
            ;
            LocalPopChoice(f_21);
          }
        else
          {
            t = d_21;
            t = Option_3_0(g_7, h_7, i_7, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_26 = NULL;
      t = term_k_4;
      t = d_0(t);
      b_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_21, term_i_21, b_26);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm e_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_25 = ATgetFirst((ATermList) t);
          a_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_25;
      t = a_0(t);
      t = term_k_4;
      t = b_0(t);
      e_26 = t;
      t = (ATerm) ATinsert(CheckATermList(a_26), e_26);
    }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  if(match_string(t, "-o"))
    {
      t = g_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_26;
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
  h_26 = t;
  t = term_w_19;
  i_26 = t;
  t = term_j_21;
  j_26 = t;
  t = SSL_table_put(i_26, j_26, h_26);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_26);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_7, k_7, l_7, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
  if(match_cons(t, sym__3))
    {
      m_26 = ATgetArgument(t, 0);
      n_26 = ATgetArgument(t, 1);
      o_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_26, n_26);
  {
    ATerm r_21 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_22 = ATgetArgument(t, 0);
            ATerm m_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_26, n_26);
        ;
        LocalPopChoice(k_22);
      }
    else
      {
        t = r_21;
        t = (ATerm) ATempty;
      }
    p_26 = t;
    t = (ATerm) ATinsert(CheckATermList(p_26), o_26);
    q_26 = t;
    t = SSL_table_put(m_26, n_26, q_26);
    t = (ATerm) ATmakeAppl(sym__3, m_26, n_26, o_26);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_27 = NULL;
      t = term_k_4;
      t = l_0(t);
      c_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_21, term_i_21, c_27);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_26 = ATgetFirst((ATermList) t);
          z_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_27 = ATgetFirst((ATermList) t);
          b_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_26;
      t = h_0(t);
      t = a_27;
      t = j_0(t);
      g_27 = t;
      t = (ATerm) ATinsert(CheckATermList(b_27), g_27);
    }
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  if(match_string(t, "-i"))
    {
      t = i_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_27;
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
  j_27 = t;
  t = term_w_19;
  k_27 = t;
  t = term_n_22;
  l_27 = t;
  t = SSL_table_put(k_27, l_27, j_27);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_27);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_o_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_7, n_7, o_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_4;
  t = whoami_0_0(t);
  m_27 = t;
  t = term_m_9;
  n_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_22), m_27);
  o_27 = t;
  t = SSL_printnl(n_27, o_27);
  t = term_p_9;
  p_27 = t;
  t = SSL_exit(p_27);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_22;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm t)
{
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_99(t);
      ;
      LocalPopChoice(t_22);
    }
  else
    {
      t = s_22;
      {
        ATerm s_27 = NULL,t_27 = NULL,w_27 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_27 = ATgetFirst((ATermList) t);
            t_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_27;
        t = foldr_2_0(n_99, o_99, t);
        w_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_27, w_27);
        t = o_99(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL;
  if(match_cons(t, sym__2))
    {
      g_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_22 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(g_8, h_8);
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = w_22;
        t = SSL_addr(g_8, h_8);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_27 = NULL,y_7 = NULL,z_7 = NULL;
  t = times_0_0(t);
  y_7 = t;
  t = SSL_explode_term(y_7);
  if(match_cons(t, sym__2))
    {
      ATerm c_23 = ATgetArgument(t, 0);
      z_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7;
  t = foldr_2_0(p_7, q_7, t);
  z_27 = t;
  t = SSL_TicksToSeconds(z_27);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  k_28 = t;
  if(match_cons(t, sym__2))
    {
      l_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_28;
        if((l_28 != t))
          {
            _fail(t);
          }
        t = k_28;
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        t = k_28;
        {
          ATerm r_23 = t;
          int s_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_28, m_28);
              ;
              LocalPopChoice(s_23);
            }
          else
            {
              t = r_23;
              t = SSL_gtr(l_28, m_28);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_28, m_28);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_111 (ATerm), ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_28 = NULL,r_28 = NULL;
      p_28 = t;
      t = term_c_20;
      t = get_config_0_0(t);
      r_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_28, term_p_9);
      t = geq_0_0(t);
      t = p_28;
      t = p_111(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
  t = run_time_0_0(t);
  t_28 = t;
  t = term_k_4;
  t = whoami_0_0(t);
  u_28 = t;
  t = term_m_9;
  v_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_24), t_28), term_a_24), u_28);
  w_28 = t;
  t = SSL_printnl(v_28, w_28);
  t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_24), t_28), term_a_24), u_28));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_20;
  x_28 = t;
  t = SSL_exit(x_28);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      {
        ATerm e_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(f_24);
          }
        else
          {
            t = e_24;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_114 (ATerm), ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      t = fetch_1_0(s_7, t);
    }
  t = f_114(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_28 = ATgetFirst((ATermList) t);
      a_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_29 = NULL,f_29 = NULL;
        t = a_29;
        t = g_0(t);
        e_29 = t;
        t = z_28;
        t = f_0(t);
        f_29 = t;
        t = a_29;
        {
          ATerm v_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(e_29), f_29);
            return(t);
          }
          t = reverse_acc_2_0(f_0, v_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_4;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,f_1 = NULL,g_1 = NULL;
  j_29 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_29);
  g_29 = t;
  t = h_29;
  t = m_86(t);
  i_29 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_29);
  f_1 = t;
  t = SSLsetAnnotations(f_1, g_29);
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm o_29 = NULL;
  o_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_29), term_k_24);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL;
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      t = fetch_1_0(w_7, t);
    }
  t = term_n_24;
  t = echo_0_0(t);
  t = term_g_21;
  m_29 = t;
  t = term_i_21;
  n_29 = t;
  t = SSL_table_get(m_29, n_29);
  t = reverse_acc_2_0(_id, x_7, t);
  t = map_1_0(b_8, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,h_1 = NULL,k_1 = NULL;
  s_29 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      q_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_29);
  p_29 = t;
  t = q_29;
  t = n_86(t);
  r_29 = t;
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_29);
  h_1 = t;
  t = SSLsetAnnotations(h_1, p_29);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
  w_29 = t;
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_29;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_24 = ATgetFirst((ATermList) t);
                ATerm u_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_29;
          }
        ;
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        t = (ATerm) ATinsert(ATempty, w_29);
      }
    x_29 = t;
    t = term_r_18;
    y_29 = t;
    t = SSL_printnl(y_29, x_29);
    t = w_29;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_22;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  t = term_w_19;
  c_30 = t;
  t = term_v_24;
  d_30 = t;
  t = term_k_4;
  e_30 = t;
  t = SSL_table_put(c_30, d_30, e_30);
  t = term_w_24;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_x_24;
  return(t);
}
ATerm i_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
  t = term_w_19;
  f_30 = t;
  t = term_v_24;
  g_30 = t;
  t = term_k_4;
  h_30 = t;
  t = SSL_table_put(f_30, g_30, h_30);
  t = term_w_19;
  i_30 = t;
  t = term_d_25;
  j_30 = t;
  t = term_k_4;
  k_30 = t;
  t = SSL_table_put(i_30, j_30, k_30);
  t = term_f_25;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_l_25;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_8, e_8, f_8, t);
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      t = Option_3_0(i_8, j_8, k_8, t);
    }
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
  n_30 = t;
  t = term_w_19;
  o_30 = t;
  t = term_q_22;
  p_30 = t;
  t = SSL_table_put(o_30, p_30, n_30);
  t = (ATerm) ATmakeAppl(sym_Program_1, n_30);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_116 (ATerm), ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_26;
        t = i_116(t);
        ;
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
      }
    t = m_30;
    {
      ATerm m_8 (ATerm t)
      {
        ATerm k_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_26 = t;
            int s_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(s_26);
              }
            else
              {
                t = r_26;
                t = i_116(t);
                t = Cons_2_0(_id, m_8, t);
              }
            ;
            LocalPopChoice(l_26);
          }
        else
          {
            t = k_26;
            {
              ATerm r_30 = NULL,s_30 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_30 = ATgetFirst((ATermList) t);
                  s_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(s_30), (ATerm) ATmakeAppl(sym_Undefined_1, r_30));
            }
          }
        return(t);
      }
      t = Cons_2_0(l_8, m_8, t);
    }
  }
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm q_31 = NULL;
  q_31 = t;
  if(match_string(t, "--help"))
    {
      t = q_31;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_31;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_31;
        }
    }
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  t = term_w_19;
  r_31 = t;
  t = term_j_24;
  s_31 = t;
  t = term_k_4;
  t_31 = t;
  t = SSL_table_put(r_31, s_31, t_31);
  t = term_t_26;
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_u_26;
  return(t);
}
ATerm r_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_116 (ATerm), ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,f_31 = NULL,j_31 = NULL,m_31 = NULL,o_31 = NULL,p_31 = NULL;
  b_31 = t;
  t = term_g_21;
  c_31 = t;
  t = term_i_21;
  f_31 = t;
  t = (ATerm) ATempty;
  j_31 = t;
  t = SSL_table_put(c_31, f_31, j_31);
  t = b_31;
  {
    ATerm n_8 (ATerm t)
    {
      ATerm v_26 = t;
      int w_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_116(t);
          ;
          LocalPopChoice(w_26);
        }
      else
        {
          t = v_26;
          {
            ATerm x_26 = t;
            int d_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_8, p_8, q_8, t);
                ;
                LocalPopChoice(d_27);
              }
            else
              {
                t = x_26;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_8, t);
    {
      ATerm e_27 = t;
      int f_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_32 = NULL;
          a_32 = t;
          {
            ATerm h_27 = t;
            int q_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_8 = NULL;
                t = a_32;
                {
                  ATerm r_27 = t;
                  int u_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_j_24;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(u_27);
                    }
                  else
                    {
                      t = r_27;
                      t = fetch_1_0(r_8, t);
                    }
                  t = a_32;
                  t = default_system_usage_0_0(t);
                  t = term_m_20;
                  t_8 = t;
                  t = SSL_exit(t_8);
                }
                ;
                LocalPopChoice(q_27);
              }
            else
              {
                t = h_27;
                {
                  ATerm x_8 = NULL;
                  t = term_v_24;
                  t = get_config_0_0(t);
                  t = a_32;
                  t = default_system_about_0_0(t);
                  t = term_m_20;
                  x_8 = t;
                  t = SSL_exit(x_8);
                }
              }
          }
          ;
          LocalPopChoice(f_27);
        }
      else
        {
          t = e_27;
          {
            ATerm v_27 = t;
            int x_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
                ATerm s_8 (ATerm t)
                {
                  ATerm u_8 (ATerm t)
                  {
                    if(((m_31 != NULL) && (m_31 != t)))
                      _fail(t);
                    else
                      m_31 = t;
                    return(t);
                  }
                  t = Undefined_1_0(u_8, t);
                  return(t);
                }
                t = fetch_1_0(s_8, t);
                t = term_m_9;
                b_32 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_31)), term_y_27);
                c_32 = t;
                t = SSL_printnl(b_32, c_32);
                t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_31)), term_y_27));
                t = default_system_usage_0_0(t);
                t = term_p_9;
                d_32 = t;
                t = SSL_exit(d_32);
                ;
                LocalPopChoice(x_27);
              }
            else
              {
                t = v_27;
              }
          }
        }
      o_31 = t;
      t = term_g_21;
      p_31 = t;
      t = SSL_table_destroy(p_31);
      t = o_31;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL;
  t = parse_options_1_0(h_114, t);
  g_32 = t;
  t = term_a_28;
  h_32 = t;
  t = SSL_table_create(h_32);
  t = term_a_28;
  i_32 = t;
  t = term_b_28;
  j_32 = t;
  t = SSL_table_put(i_32, j_32, g_32);
  t = g_32;
  t = j_114(t);
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_114, t);
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        {
          ATerm e_28 = t;
          int f_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_114(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_28);
            }
          else
            {
              t = e_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = if_verbose2_1_0(d_9, t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
  t = term_w_19;
  l_32 = t;
  t = term_g_28;
  m_32 = t;
  t = term_k_4;
  n_32 = t;
  t = SSL_table_put(l_32, m_32, n_32);
  t = term_h_28;
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = term_i_28;
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  o_32 = t;
  t = term_q_22;
  t = get_config_0_0(t);
  p_32 = t;
  t = term_m_9;
  q_32 = t;
  t = (ATerm) ATinsert(ATempty, p_32);
  r_32 = t;
  t = SSL_printnl(q_32, r_32);
  t = o_32;
  return(t);
}
ATerm iowrap_3_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t)
{
  ATerm v_8 (ATerm t)
  {
    ATerm j_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_113(t);
        ;
        LocalPopChoice(n_28);
      }
    else
      {
        t = j_28;
        {
          ATerm o_28 = t;
          int q_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(q_28);
            }
          else
            {
              t = o_28;
              {
                ATerm s_28 = t;
                int y_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(y_28);
                  }
                else
                  {
                    t = s_28;
                    {
                      ATerm b_29 = t;
                      int c_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(z_8, a_9, b_9, t);
                          ;
                          LocalPopChoice(c_29);
                        }
                      else
                        {
                          t = b_29;
                          {
                            ATerm d_29 = t;
                            int k_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(k_29);
                              }
                            else
                              {
                                t = d_29;
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
  ATerm y_8 (ATerm t)
  {
    ATerm s_32 = NULL,t_32 = NULL,c_9 = NULL;
    s_32 = t;
    {
      ATerm l_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((t_32 != NULL) && (t_32 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_32 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_9, t);
          ;
          LocalPopChoice(t_29);
        }
      else
        {
          t = l_29;
          t = term_u_29;
          t_32 = t;
        }
      t = not_null(t_32);
      t = ReadFromFile_0_0(t);
      c_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_32, c_9);
      t = apply_strategy_1_0(q_113, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(v_8, s_113, w_8, y_8, t);
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = _2_0(_id, g_9, t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = Specification_1_0(h_9, t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = Cons_2_0(_id, i_9, t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = Cons_2_0(j_9, k_9, t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = Strategies_1_0(l_9, t);
  return(t);
}
ATerm k_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = dead_def_elim_0_0(t);
  t = map_1_0(local_dead_def_elim_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(f_9, _fail, default_usage_0_0, t);
  return(t);
}
