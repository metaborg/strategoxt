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
ATerm term_b_23;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_f_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_s_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_p_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_y_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_s_15;
ATerm term_j_15;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_a_13;
ATerm term_v_12;
ATerm term_o_10;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_f_9;
ATerm term_k_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_x_7;
ATerm term_w_7;
void init_constant_terms (void)
{
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_9);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_a_16, term_e_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__2, term_r_16, term_w_7);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_f_17, term_g_17);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_w_7);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym__2, term_d_19, term_w_7);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_w_7);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_f_21, term_w_7);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm DefDead_0_0 (ATerm);
ATerm filter_1_0 (ATerm c_101 (ATerm), ATerm);
ATerm l_5 (ATerm p_46, ATerm q_46, ATerm r_46, ATerm);
ATerm p_5 (ATerm h_46, ATerm i_46, ATerm);
ATerm end_scope_1_0 (ATerm v_100 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm u_100 (ATerm), ATerm);
ATerm scope_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm z_0 (ATerm);
ATerm local_dead_def_elim_0_0 (ATerm);
ATerm map_1_0 (ATerm m_94 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm q_87 (ATerm), ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm u_5 (ATerm k_32, ATerm j_32, ATerm);
ATerm w_5 (ATerm z_96 (ATerm), ATerm t_40, ATerm s_40, ATerm);
ATerm foldr_3_0 (ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm);
ATerm j_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm free_vars_3_0 (ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm y_5 (ATerm n_46, ATerm o_46, ATerm);
ATerm at_end_1_0 (ATerm c_95 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm f_20 (ATerm v_19, ATerm);
ATerm conc_0_0 (ATerm);
ATerm a_6 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm x_40, ATerm w_40, ATerm);
ATerm b_6 (ATerm u_96 (ATerm), ATerm r_40, ATerm q_40, ATerm);
ATerm genzip_4_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm c_2 (ATerm);
ATerm f_6 (ATerm n_610, ATerm s_610, ATerm l_67, ATerm);
ATerm f_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm x_23 (ATerm o_22, ATerm p_22, ATerm q_22, ATerm);
ATerm n_2 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm h_6 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm z_67, ATerm w_67, ATerm d_68, ATerm a_68, ATerm x_67, ATerm y_67, ATerm);
ATerm GnNext_3_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm);
ATerm for_3_0 (ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm);
ATerm k_6 (ATerm y_100 (ATerm), ATerm u_45, ATerm s_45, ATerm);
ATerm u_2 (ATerm);
ATerm RegisterDefinition_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm f_3 (ATerm);
ATerm dead_def_elim_0_0 (ATerm);
ATerm Cons_2_0 (ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm);
ATerm n_6 (ATerm t_56, ATerm u_56, ATerm);
ATerm o_6 (ATerm h_60, ATerm i_60, ATerm);
ATerm q_6 (ATerm f_110 (ATerm), ATerm p_483, ATerm l_60, ATerm);
ATerm p_6 (ATerm d_60, ATerm e_60, ATerm);
ATerm k_3 (ATerm);
ATerm x_3 (ATerm);
ATerm d_4 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm h_113 (ATerm), ATerm);
ATerm g_33 (ATerm z_32, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm r_6 (ATerm j_60, ATerm);
ATerm s_6 (ATerm v_56, ATerm w_56, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_35 (ATerm a_34, ATerm);
ATerm o_35 (ATerm e_34, ATerm f_34, ATerm g_34, ATerm);
ATerm q_35 (ATerm u_34, ATerm v_34, ATerm w_34, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm w_94 (ATerm), ATerm);
ATerm m_6 (ATerm j_54, ATerm k_54, ATerm);
ATerm debug_1_0 (ATerm d_110 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm q_111 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm w_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm y_6 (ATerm k_61, ATerm l_61, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm a_5 (ATerm);
ATerm d_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm w_6 (ATerm c_46, ATerm d_46, ATerm b_46, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm e_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm t_6 (ATerm g_44, ATerm h_44, ATerm);
ATerm foldr_2_0 (ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm p_111 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm need_help_1_0 (ATerm f_114 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm v_6 (ATerm t_47, ATerm u_47, ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm x_5 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm j_6 (ATerm);
ATerm l_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm i_116 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm parse_options_1_0 (ATerm h_116 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm iowrap_3_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_0 = NULL,k_0 = NULL,s_0 = NULL,u_0 = NULL,y_0 = NULL;
  i_0 = t;
  t = term_w_7;
  t = whoami_0_0(t);
  k_0 = t;
  t = term_x_7;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_8), k_0), term_b_8);
  y_0 = t;
  t = SSL_printnl(u_0, y_0);
  t = term_d_8;
  s_0 = t;
  t = SSL_exit(s_0);
  t = i_0;
  return(t);
}
ATerm DefDead_0_0 (ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL;
  k_1 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      l_1 = ATgetArgument(t, 0);
      {
        ATerm f_8 = ATgetArgument(t, 1);
      }
      {
        ATerm g_8 = ATgetArgument(t, 2);
      }
      {
        ATerm h_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 = NULL,f_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, l_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        b_1 = t;
        t = term_k_8;
        f_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATmakeAppl(sym_SDefT_4, l_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
        t = y_5(f_1, b_1, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        {
          ATerm a_2 = NULL,d_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, l_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
          a_2 = t;
          t = term_k_8;
          d_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATmakeAppl(sym_SDefT_4, l_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
          t = y_5(d_2, a_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm o_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_8) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_w_7;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL;
  h_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_2 = ATgetFirst((ATermList) t);
          j_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 = NULL,s_2 = NULL,t_2 = NULL,m_0 = NULL;
            t = SSLgetAnnotations(h_2);
            o_2 = t;
            t = i_2;
            t = c_101(t);
            s_2 = t;
            t = j_2;
            t = filter_1_0(c_101, t);
            t_2 = t;
            t = (ATerm) ATinsert(CheckATermList(t_2), s_2);
            m_0 = t;
            t = SSLsetAnnotations(m_0, o_2);
            ;
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            t = j_2;
            t = filter_1_0(c_101, t);
          }
      }
    }
  return(t);
}
ATerm l_5 (ATerm p_46, ATerm q_46, ATerm r_46, ATerm t)
{
  ATerm x_2 = NULL,d_3 = NULL,h_3 = NULL;
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_46, q_46);
  t = v_6(p_46, q_46, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_8 = ATgetFirst((ATermList) t);
      x_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_2), r_46);
  h_3 = t;
  t = SSL_table_put(p_46, q_46, h_3);
  t = d_3;
  return(t);
}
ATerm p_5 (ATerm h_46, ATerm i_46, ATerm t)
{
  ATerm j_3 = NULL,l_3 = NULL;
  l_3 = t;
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
        t = v_6(h_46, i_46, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_9 = ATgetFirst((ATermList) t);
            j_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_8);
        t = SSL_table_put(h_46, i_46, j_3);
        t = (ATerm) ATmakeAppl(sym__3, h_46, i_46, j_3);
      }
    else
      {
        t = s_8;
        t = SSL_table_remove(h_46, i_46);
        t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
      }
    t = l_3;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm v_100 (ATerm), ATerm t)
{
  ATerm m_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,s_3 = NULL;
  if(((q_3 != NULL) && (q_3 != t)))
    _fail(t);
  else
    q_3 = t;
  t = v_100(t);
  if(((p_3 != NULL) && (p_3 != t)))
    _fail(t);
  else
    p_3 = t;
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 = NULL;
        t = term_f_9;
        u_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_3), term_f_9);
        t = v_6(not_null(p_3), u_3, t);
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((o_3 != NULL) && (o_3 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          o_3 = ATgetFirst((ATermList) t);
        if(((m_3 != NULL) && (m_3 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          m_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_f_9;
    if(((s_3 != NULL) && (s_3 != t)))
      _fail(t);
    else
      s_3 = t;
    t = SSL_table_put(not_null(p_3), not_null(s_3), not_null(m_3));
    t = not_null(o_3);
    {
      ATerm n_0 (ATerm t)
      {
        ATerm v_3 = NULL;
        v_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_3), v_3);
        t = p_5(not_null(p_3), v_3, t);
        return(t);
      }
      t = map_1_0(n_0, t);
      t = not_null(q_3);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_91(t);
      t = t_91(t);
      ;
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      t = t_91(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm u_100 (ATerm), ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL;
  z_3 = t;
  t = u_100(t);
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_3, term_f_9);
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_4 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_9 = ATgetArgument(t, 0);
            ATerm l_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_9;
        k_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_3, term_f_9);
        t = v_6(y_3, k_4, t);
        ;
        LocalPopChoice(j_9);
      }
    else
      {
        t = i_9;
        t = (ATerm) ATempty;
      }
    a_4 = t;
    t = term_f_9;
    b_4 = t;
    t = (ATerm) ATinsert(CheckATermList(a_4), (ATerm) ATempty);
    c_4 = t;
    t = SSL_table_put(y_3, b_4, c_4);
    t = z_3;
  }
  return(t);
}
ATerm scope_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    t = end_scope_1_0(w_100, t);
    return(t);
  }
  t = begin_scope_1_0(w_100, t);
  t = restore_always_2_0(x_100, q_0, t);
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_k_8;
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm n_3 = NULL,r_3 = NULL,t_3 = NULL,w_3 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      n_3 = ATgetArgument(t, 0);
      {
        ATerm m_9 = ATgetArgument(t, 1);
      }
      {
        ATerm n_9 = ATgetArgument(t, 2);
      }
      {
        ATerm p_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, n_3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  t_3 = t;
  t = term_t_9;
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, n_3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_t_9);
  t = k_6(x_0, t_3, w_3, t);
  t = r_3;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_k_8;
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm v_9 = t;
  if((PushChoice() == 0))
    {
      t = DefDead_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_9;
    }
  return(t);
}
ATerm local_dead_def_elim_0_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm w_8 = NULL,x_8 = NULL,b_9 = NULL,z_6 = NULL,d_7 = NULL,e_7 = NULL,g_7 = NULL;
    g_7 = t;
    if(match_cons(t, sym_Let_2))
      {
        z_6 = ATgetArgument(t, 0);
        e_7 = ATgetArgument(t, 1);
        {
          ATerm b_10 = t;
          int d_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_3 = NULL,i_3 = NULL,o_0 = NULL;
              t = SSLgetAnnotations(g_7);
              e_3 = t;
              t = z_6;
              t = map_1_0(w_0, t);
              i_3 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, i_3, e_7);
              o_0 = t;
              t = SSLsetAnnotations(o_0, e_3);
              ;
              LocalPopChoice(d_10);
            }
          else
            {
              t = b_10;
              t = g_7;
            }
        }
      }
    else
      {
        ATerm g_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_CallT_3))
              {
                z_6 = ATgetArgument(t, 0);
                {
                  ATerm k_10 = ATgetArgument(t, 1);
                }
                {
                  ATerm l_10 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_10);
            t = z_6;
            if(match_cons(t, sym_SVar_1))
              {
                d_7 = ATgetArgument(t, 0);
                {
                  ATerm m_10 = t;
                  int n_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
                      t = term_k_8;
                      y_7 = t;
                      t = (ATerm) ATmakeAppl(sym_SDefT_4, d_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
                      z_7 = t;
                      t = term_o_10;
                      a_8 = t;
                      t = (ATerm) ATmakeAppl(sym__3, term_k_8, (ATerm)ATmakeAppl(sym_SDefT_4, d_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_o_10);
                      t = l_5(y_7, z_7, a_8, t);
                      t = g_7;
                      ;
                      LocalPopChoice(n_10);
                    }
                  else
                    {
                      t = m_10;
                      t = g_7;
                    }
                }
              }
            else
              {
                t = g_7;
              }
          }
        else
          {
            t = g_10;
            t = g_7;
          }
      }
    t = SRTS_all(local_dead_def_elim_0_0, t);
    b_9 = t;
    if(match_cons(t, sym_Let_2))
      {
        w_8 = ATgetArgument(t, 0);
        x_8 = ATgetArgument(t, 1);
        {
          ATerm p_10 = t;
          int q_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_4 = NULL,p_4 = NULL,p_0 = NULL;
              t = SSLgetAnnotations(b_9);
              m_4 = t;
              t = w_8;
              t = filter_1_0(z_0, t);
              p_4 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, p_4, x_8);
              p_0 = t;
              t = SSLsetAnnotations(p_0, m_4);
              ;
              LocalPopChoice(q_10);
            }
          else
            {
              t = p_10;
              t = b_9;
            }
        }
      }
    else
      {
        t = b_9;
      }
    return(t);
  }
  t = scope_2_0(r_0, v_0, t);
  return(t);
}
ATerm map_1_0 (ATerm m_94 (ATerm), ATerm t)
{
  ATerm f_10 (ATerm t)
  {
    ATerm a_10 = NULL,c_10 = NULL,e_10 = NULL;
    a_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_10;
      }
    else
      {
        ATerm f_5 = NULL,i_5 = NULL,j_5 = NULL,t_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_10 = ATgetFirst((ATermList) t);
            e_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_10);
        f_5 = t;
        t = c_10;
        t = m_94(t);
        i_5 = t;
        t = e_10;
        t = f_10(t);
        j_5 = t;
        t = (ATerm) ATinsert(CheckATermList(j_5), i_5);
        t_0 = t;
        t = SSLsetAnnotations(t_0, f_5);
      }
    return(t);
  }
  t = f_10(t);
  return(t);
}
ATerm sboundin_3_0 (ATerm q_87 (ATerm), ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm t)
{
  ATerm e_14 = NULL,k_14 = NULL,l_14 = NULL,n_14 = NULL,r_14 = NULL;
  l_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_14 = ATgetArgument(t, 0);
      r_14 = ATgetArgument(t, 1);
      {
        ATerm z_5 = NULL,g_6 = NULL,i_6 = NULL,d_1 = NULL;
        t = SSLgetAnnotations(l_14);
        z_5 = t;
        t = n_14;
        t = q_87(t);
        g_6 = t;
        t = r_14;
        t = q_87(t);
        i_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, g_6, i_6);
        d_1 = t;
        t = SSLsetAnnotations(d_1, z_5);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          n_14 = ATgetArgument(t, 0);
          r_14 = ATgetArgument(t, 1);
          e_14 = ATgetArgument(t, 2);
          {
            ATerm j_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(l_14);
            j_7 = t;
            t = n_14;
            t = s_87(t);
            n_7 = t;
            t = r_14;
            t = s_87(t);
            o_7 = t;
            t = e_14;
            t = q_87(t);
            p_7 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, n_7, o_7, p_7);
            e_1 = t;
            t = SSLsetAnnotations(e_1, j_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              n_14 = ATgetArgument(t, 0);
              r_14 = ATgetArgument(t, 1);
              e_14 = ATgetArgument(t, 2);
              k_14 = ATgetArgument(t, 3);
              {
                ATerm l_8 = NULL,u_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,g_1 = NULL;
                t = SSLgetAnnotations(l_14);
                l_8 = t;
                t = n_14;
                t = s_87(t);
                u_8 = t;
                t = r_14;
                t = s_87(t);
                y_8 = t;
                t = e_14;
                t = s_87(t);
                z_8 = t;
                t = k_14;
                t = q_87(t);
                a_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, u_8, y_8, z_8, a_9);
                g_1 = t;
                t = SSLsetAnnotations(g_1, l_8);
              }
            }
          else
            {
              ATerm q_9 = NULL,h_10 = NULL,i_10 = NULL,h_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  n_14 = ATgetArgument(t, 0);
                  r_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_14);
              q_9 = t;
              t = n_14;
              t = s_87(t);
              h_10 = t;
              t = r_14;
              t = q_87(t);
              i_10 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, h_10, i_10);
              h_1 = t;
              t = SSLsetAnnotations(h_1, q_9);
            }
        }
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm k_15 = NULL;
  ATerm s_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          k_15 = ATgetArgument(t, 0);
          {
            ATerm u_10 = ATgetArgument(t, 1);
          }
          {
            ATerm v_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_10);
      t = k_15;
    }
  else
    {
      t = s_10;
      if(match_cons(t, sym_SDefT_4))
        {
          k_15 = ATgetArgument(t, 0);
          {
            ATerm x_10 = ATgetArgument(t, 1);
          }
          {
            ATerm y_10 = ATgetArgument(t, 2);
          }
          {
            ATerm z_10 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = k_15;
    }
  return(t);
}
ATerm u_5 (ATerm k_32, ATerm j_32, ATerm t)
{
  t = k_32;
  t = map_1_0(a_1, t);
  return(t);
}
ATerm w_5 (ATerm z_96 (ATerm), ATerm t_40, ATerm s_40, ATerm t)
{
  ATerm s_16 (ATerm t)
  {
    ATerm h_16 = NULL,j_16 = NULL,k_16 = NULL;
    h_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(s_40);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_16 = ATgetFirst((ATermList) t);
            k_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_11 = t;
          int b_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_16;
              {
                ATerm c_1 (ATerm t)
                {
                  t = not_null(s_40);
                  return(t);
                }
                t = a_6(z_96, c_1, not_null(j_16), not_null(k_16), t);
                t = s_16(t);
              }
              ;
              LocalPopChoice(b_11);
            }
          else
            {
              t = a_11;
              {
                ATerm r_10 = NULL,w_10 = NULL,u_1 = NULL;
                t = SSLgetAnnotations(h_16);
                r_10 = t;
                t = k_16;
                t = s_16(t);
                w_10 = t;
                t = (ATerm) ATinsert(CheckATermList(w_10), j_16);
                u_1 = t;
                t = SSLsetAnnotations(u_1, r_10);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(t_40);
  t = s_16(t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  v_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_16;
      t = p_99(t);
    }
  else
    {
      ATerm d_17 = NULL,e_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_16 = ATgetFirst((ATermList) t);
          x_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_16;
      t = r_99(t);
      d_17 = t;
      t = x_16;
      t = foldr_3_0(p_99, q_99, r_99, t);
      e_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_17, e_17);
      t = q_99(t);
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL;
  if(match_cons(t, sym__2))
    {
      t_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(o_1, t_11, u_11, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm w_11 = NULL;
  if(match_cons(t, sym__2))
    {
      w_11 = ATgetArgument(t, 0);
      if((w_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm i_12 = NULL,m_12 = NULL;
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(r_1, i_12, m_12, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm n_12 = NULL;
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      if((n_12 != ATgetArgument(t, 1)))
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
  ATerm n_18 (ATerm t)
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_103(t);
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        {
          ATerm e_11 = t;
          int f_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_17 = NULL,k_17 = NULL,m_11 = NULL,n_11 = NULL;
              if(((j_17 != NULL) && (j_17 != t)))
                _fail(t);
              else
                j_17 = t;
              t = s_103(t);
              if(((k_17 != NULL) && (k_17 != t)))
                _fail(t);
              else
                k_17 = t;
              t = not_null(j_17);
              {
                ATerm i_1 (ATerm t)
                {
                  ATerm q_17 = NULL;
                  t = n_18(t);
                  q_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, q_17, not_null(k_17));
                  t = diff_0_0(t);
                  return(t);
                }
                t = t_103(i_1, n_18, j_1, t);
                if(((n_11 != NULL) && (n_11 != t)))
                  _fail(t);
                else
                  n_11 = t;
                t = SSL_explode_term(not_null(n_11));
                if(match_cons(t, sym__2))
                  {
                    ATerm g_11 = ATgetArgument(t, 0);
                    if(((m_11 != NULL) && (m_11 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      m_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = not_null(m_11);
                t = foldr_3_0(m_1, n_1, _id, t);
              }
              ;
              LocalPopChoice(f_11);
            }
          else
            {
              t = e_11;
              {
                ATerm d_12 = NULL,e_12 = NULL;
                e_12 = t;
                t = SSL_explode_term(e_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_11 = ATgetArgument(t, 0);
                    d_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_12;
                t = foldr_3_0(p_1, q_1, n_18, t);
              }
            }
        }
      }
    return(t);
  }
  t = n_18(t);
  return(t);
}
ATerm y_5 (ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm o_18 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_46, o_46);
  t = v_6(n_46, o_46, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_18 = ATgetFirst((ATermList) t);
      {
        ATerm i_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_18;
  return(t);
}
ATerm at_end_1_0 (ATerm c_95 (ATerm), ATerm t)
{
  ATerm n_19 (ATerm t)
  {
    ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
    m_19 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_19 = ATgetFirst((ATermList) t);
        l_19 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_12 = NULL,c_13 = NULL,x_1 = NULL;
          t = SSLgetAnnotations(m_19);
          z_12 = t;
          t = l_19;
          t = n_19(t);
          c_13 = t;
          t = (ATerm) ATinsert(CheckATermList(c_13), k_19);
          x_1 = t;
          t = SSLsetAnnotations(x_1, z_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_19;
        t = c_95(t);
      }
    return(t);
  }
  t = n_19(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL;
  u_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_18;
    }
  else
    {
      ATerm s_1 (ATerm t)
      {
        t = not_null(w_18);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((v_18 != NULL) && (v_18 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            v_18 = ATgetFirst((ATermList) t);
          if(((w_18 != NULL) && (w_18 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(v_18);
      t = at_end_1_0(s_1, t);
    }
  return(t);
}
ATerm f_20 (ATerm v_19, ATerm t)
{
  ATerm w_19 = NULL;
  t = SSL_explode_term(v_19);
  if(match_cons(t, sym__2))
    {
      ATerm j_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_19;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  if(((a_20 != NULL) && (a_20 != t)))
    _fail(t);
  else
    a_20 = t;
  if(match_cons(t, sym__2))
    {
      y_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 (ATerm t)
            {
              t = not_null(z_19);
              return(t);
            }
            t = not_null(y_19);
            t = at_end_1_0(t_1, t);
            ;
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            t = f_20(not_null(a_20), t);
          }
      }
    }
  else
    {
      t = f_20(not_null(a_20), t);
    }
  return(t);
}
ATerm a_6 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm x_40, ATerm w_40, ATerm t)
{
  t = d_97(t);
  {
    ATerm v_1 (ATerm t)
    {
      ATerm g_20 = NULL;
      g_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_40), g_20);
      t = c_97(t);
      return(t);
    }
    t = fetch_1_0(v_1, t);
    t = not_null(w_40);
  }
  return(t);
}
ATerm b_6 (ATerm u_96 (ATerm), ATerm r_40, ATerm q_40, ATerm t)
{
  ATerm e_21 (ATerm t)
  {
    ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
    t_20 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_20;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_20 = ATgetFirst((ATermList) t);
            v_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_11 = t;
          int p_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_20;
              {
                ATerm w_1 (ATerm t)
                {
                  t = not_null(q_40);
                  return(t);
                }
                t = a_6(u_96, w_1, not_null(u_20), not_null(v_20), t);
                t = e_21(t);
              }
              ;
              LocalPopChoice(p_11);
            }
          else
            {
              t = o_11;
              {
                ATerm x_13 = NULL,a_14 = NULL,b_2 = NULL;
                t = SSLgetAnnotations(t_20);
                x_13 = t;
                t = v_20;
                t = e_21(t);
                a_14 = t;
                t = (ATerm) ATinsert(CheckATermList(a_14), u_20);
                b_2 = t;
                t = SSLsetAnnotations(b_2, x_13);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(r_40);
  t = e_21(t);
  return(t);
}
ATerm genzip_4_0 (ATerm x_92 (ATerm), ATerm y_92 (ATerm), ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm t)
{
  ATerm p_21 (ATerm t)
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_92(t);
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        {
          ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,l_21 = NULL,n_21 = NULL,o_21 = NULL,e_2 = NULL;
          t = y_92(t);
          o_21 = t;
          if(match_cons(t, sym__2))
            {
              h_21 = ATgetArgument(t, 0);
              i_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_21);
          g_21 = t;
          t = h_21;
          t = a_93(t);
          l_21 = t;
          t = i_21;
          t = p_21(t);
          n_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_21, n_21);
          e_2 = t;
          t = SSLsetAnnotations(e_2, g_21);
          t = z_92(t);
        }
      }
    return(t);
  }
  t = p_21(t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_11 = ATgetArgument(t, 0);
      if(((ATgetType(s_11) != AT_LIST) || !(ATisEmpty(s_11))))
        _fail(t);
      {
        ATerm v_11 = ATgetArgument(t, 1);
        if(((ATgetType(v_11) != AT_LIST) || !(ATisEmpty(v_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_11 = ATgetArgument(t, 0);
      if(((ATgetType(x_11) == AT_LIST) && !(ATisEmpty(x_11))))
        {
          w_21 = ATgetFirst((ATermList) x_11);
          x_21 = (ATerm) ATgetNext((ATermList) x_11);
        }
      else
        _fail(t);
      {
        ATerm y_11 = ATgetArgument(t, 1);
        if(((ATgetType(y_11) == AT_LIST) && !(ATisEmpty(y_11))))
          {
            y_21 = ATgetFirst((ATermList) y_11);
            z_21 = (ATerm) ATgetNext((ATermList) y_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_21, y_21), (ATerm) ATmakeAppl(sym__2, x_21, z_21));
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL;
  if(match_cons(t, sym__2))
    {
      a_22 = ATgetArgument(t, 0);
      b_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_22), a_22);
  return(t);
}
ATerm f_6 (ATerm n_610, ATerm s_610, ATerm l_67, ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL;
  t = SSL_explode_term(s_610);
  if(match_cons(t, sym__2))
    {
      r_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_610);
  if(match_cons(t, sym__2))
    {
      if((r_21 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      s_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_21, t_21);
  t = genzip_4_0(y_1, z_1, c_2, _id, t);
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_21, l_67);
  t = conc_0_0(t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm j_22 = NULL;
  j_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, j_22);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,g_2 = NULL;
  n_22 = t;
  if(match_cons(t, sym__2))
    {
      l_22 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_22);
  k_22 = t;
  t = m_22;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_22, m_22);
  g_2 = t;
  t = SSLsetAnnotations(g_2, k_22);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
  g_23 = t;
  if(match_cons(t, sym__2))
    {
      h_23 = ATgetArgument(t, 0);
      i_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_23;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_23 = ATgetFirst((ATermList) t);
      k_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_23(h_23, i_23, g_23, t);
            ;
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_23), j_23), k_23);
          }
      }
    }
  else
    {
      t = x_23(h_23, i_23, g_23, t);
    }
  return(t);
}
ATerm x_23 (ATerm o_22, ATerm p_22, ATerm q_22, ATerm t)
{
  ATerm r_22 = NULL,u_22 = NULL,k_2 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  t = SSLgetAnnotations(q_22);
  r_22 = t;
  t = p_22;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_22 = ATgetFirst((ATermList) t);
      a_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_22;
  if(match_cons(t, sym__2))
    {
      y_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_22;
        if((y_22 != t))
          {
            _fail(t);
          }
        t = a_23;
        ;
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        t = p_22;
        t = f_6(y_22, z_22, a_23, t);
      }
    u_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_22, u_22);
    k_2 = t;
    t = SSLsetAnnotations(k_2, r_22);
  }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm w_23 = NULL;
  if(match_cons(t, sym__2))
    {
      w_23 = ATgetArgument(t, 0);
      if((w_23 != ATgetArgument(t, 1)))
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
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_2, l_2, m_2, t);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
        o_23 = t;
        if(match_cons(t, sym__2))
          {
            p_23 = ATgetArgument(t, 0);
            q_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_23;
        t = b_6(n_2, p_23, q_23, t);
      }
    }
  return(t);
}
ATerm h_6 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm z_67, ATerm w_67, ATerm d_68, ATerm a_68, ATerm x_67, ATerm y_67, ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_67, a_68);
  t = l_117(t);
  y_23 = t;
  t = m_117(t);
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_23, d_68);
  t = diff_0_0(t);
  e_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_24, w_67);
  t = conc_0_0(t);
  f_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_24, d_68);
  t = conc_0_0(t);
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_67, y_23, x_67);
  t = n_117(t);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__5, f_24, g_24, a_68, h_24, y_67);
  return(t);
}
ATerm GnNext_3_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm h_12 = ATgetArgument(t, 0);
      if(((ATgetType(h_12) == AT_LIST) && !(ATisEmpty(h_12))))
        {
          j_24 = ATgetFirst((ATermList) h_12);
          k_24 = (ATerm) ATgetNext((ATermList) h_12);
        }
      else
        _fail(t);
      l_24 = ATgetArgument(t, 1);
      s_24 = ATgetArgument(t, 2);
      t_24 = ATgetArgument(t, 3);
      u_24 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = h_6(l_117, m_117, n_117, j_24, k_24, l_24, s_24, t_24, u_24, t);
  return(t);
}
ATerm while_not_2_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm t)
{
  ATerm v_24 (ATerm t)
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_105(t);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = y_105(t);
        t = v_24(t);
      }
    return(t);
  }
  t = v_24(t);
  return(t);
}
ATerm for_3_0 (ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm t)
{
  t = a_106(t);
  t = while_not_2_0(b_106, c_106, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
  if(match_cons(t, sym__3))
    {
      z_24 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
      b_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, z_24, z_24, a_25, b_25, (ATerm) ATempty);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm l_12 = ATgetArgument(t, 0);
      if(((ATgetType(l_12) != AT_LIST) || !(ATisEmpty(l_12))))
        _fail(t);
      {
        ATerm o_12 = ATgetArgument(t, 1);
      }
      {
        ATerm p_12 = ATgetArgument(t, 2);
      }
      e_25 = ATgetArgument(t, 3);
      f_25 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_25, f_25);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm t)
{
  ATerm y_24 = NULL;
  ATerm r_2 (ATerm t)
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(i_117, j_117, k_117, t);
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        {
          ATerm h_25 = NULL,j_25 = NULL,m_25 = NULL,p_25 = NULL,r_25 = NULL,s_25 = NULL,y_25 = NULL;
          if(match_cons(t, sym__5))
            {
              h_25 = ATgetArgument(t, 0);
              p_25 = ATgetArgument(t, 1);
              r_25 = ATgetArgument(t, 2);
              s_25 = ATgetArgument(t, 3);
              y_25 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = h_25;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_25 = ATgetFirst((ATermList) t);
              m_25 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, m_25, p_25, r_25, s_25, (ATerm) ATinsert(CheckATermList(y_25), j_25));
        }
      }
    return(t);
  }
  t = for_3_0(p_2, q_2, r_2, t);
  if(match_cons(t, sym__2))
    {
      if(((y_24 != NULL) && (y_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_24 = ATgetArgument(t, 0);
      {
        ATerm s_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = not_null(y_24);
  return(t);
}
ATerm k_6 (ATerm y_100 (ATerm), ATerm u_45, ATerm s_45, ATerm t)
{
  ATerm f_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,s_26 = NULL;
  m_26 = t;
  t = y_100(t);
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_26, u_45, s_45);
  t = w_6(f_26, u_45, s_45, t);
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_26 = NULL;
        t = term_f_9;
        t_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_26, term_f_9);
        t = v_6(f_26, t_26, t);
        ;
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_26 = ATgetFirst((ATermList) t);
        l_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_f_9;
    n_26 = t;
    t = (ATerm) ATinsert(CheckATermList(l_26), (ATerm) ATinsert(CheckATermList(k_26), u_45));
    s_26 = t;
    t = SSL_table_put(f_26, n_26, s_26);
    t = m_26;
  }
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_v_12;
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  v_26 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      u_26 = ATgetArgument(t, 0);
      {
        ATerm w_12 = ATgetArgument(t, 1);
      }
      {
        ATerm x_12 = ATgetArgument(t, 2);
      }
      {
        ATerm y_12 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_26, (ATerm) ATempty);
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_13, v_26);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_26, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_a_13, v_26));
  t = k_6(u_2, x_26, y_26, t);
  t = w_26;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,m_14 = NULL,o_14 = NULL;
  if(match_cons(t, sym__2))
    {
      i_14 = ATgetArgument(t, 0);
      {
        ATerm b_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_14, (ATerm) ATempty);
  m_14 = t;
  t = term_v_12;
  o_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, (ATerm) ATmakeAppl(sym__2, i_14, (ATerm) ATempty));
  t = y_5(o_14, m_14, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm d_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_13) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_14;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = free_vars_3_0(z_2, a_3, sboundin_3_0, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      f_29 = ATgetArgument(t, 1);
      g_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_29), f_29);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm k_27 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      k_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_27);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL;
  l_27 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_27 = ATgetArgument(t, 0);
      n_27 = ATgetArgument(t, 1);
      t = l_27;
      t = u_5(m_27, n_27, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          m_27 = ATgetArgument(t, 0);
          n_27 = ATgetArgument(t, 1);
          o_27 = ATgetArgument(t, 2);
          t = n_27;
          t = map_1_0(b_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              m_27 = ATgetArgument(t, 0);
              n_27 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, m_27);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  m_27 = ATgetArgument(t, 0);
                  n_27 = ATgetArgument(t, 1);
                  o_27 = ATgetArgument(t, 2);
                  p_27 = ATgetArgument(t, 3);
                  t = n_27;
                  t = map_1_0(c_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_27 = ATgetArgument(t, 0);
                      n_27 = ATgetArgument(t, 1);
                      o_27 = ATgetArgument(t, 2);
                      p_27 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_27;
                  t = map_1_0(f_3, t);
                }
            }
        }
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm c_28 = NULL;
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_28 = ATgetArgument(t, 0);
          {
            ATerm h_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_13);
      t = c_28;
    }
  else
    {
      t = f_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_28;
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm p_28 = NULL;
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_28 = ATgetArgument(t, 0);
          {
            ATerm k_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_13);
      t = p_28;
    }
  else
    {
      t = i_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_28;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm c_29 = NULL;
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_29 = ATgetArgument(t, 0);
          {
            ATerm n_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_13);
      t = c_29;
    }
  else
    {
      t = l_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_29;
    }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm j_27 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_o_13), j_27, (ATerm) ATempty);
  t = graph_nodes_roots_3_0(v_2, w_2, y_2, t);
  return(t);
}
ATerm Cons_2_0 (ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,v_4 = NULL;
  m_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_29 = ATgetFirst((ATermList) t);
      j_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_29);
  h_29 = t;
  t = i_29;
  t = p_73(t);
  k_29 = t;
  t = j_29;
  t = q_73(t);
  l_29 = t;
  t = (ATerm) ATinsert(CheckATermList(l_29), k_29);
  v_4 = t;
  t = SSLsetAnnotations(v_4, h_29);
  return(t);
}
ATerm n_6 (ATerm t_56, ATerm u_56, ATerm t)
{
  ATerm n_29 = NULL;
  t = SSL_fputc(t_56, u_56);
  n_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_29);
  return(t);
}
ATerm o_6 (ATerm h_60, ATerm i_60, ATerm t)
{
  ATerm o_29 = NULL;
  t = SSL_write_term_to_stream_text(h_60, i_60);
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_29);
  return(t);
}
ATerm q_6 (ATerm f_110 (ATerm), ATerm p_483, ATerm l_60, ATerm t)
{
  ATerm p_29 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_483, term_p_13);
  t = open_stream_0_0(t);
  p_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_29, l_60);
  t = f_110(t);
  t = fclose_0_0(t);
  t = l_60;
  return(t);
}
ATerm p_6 (ATerm d_60, ATerm e_60, ATerm t)
{
  ATerm q_29 = NULL;
  t = SSL_write_term_to_stream_baf(d_60, e_60);
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_29);
  return(t);
}
ATerm k_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      if(match_cons(q_13, sym_Stream_1))
        {
          e_15 = ATgetArgument(q_13, 0);
        }
      else
        _fail(t);
      f_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(e_15, f_15, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,i_16 = NULL,m_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_13 = ATgetArgument(t, 0);
      if(match_cons(r_13, sym_Stream_1))
        {
          m_16 = ATgetArgument(r_13, 0);
        }
      else
        _fail(t);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(m_16, n_16, t);
  f_16 = t;
  t = term_s_13;
  g_16 = t;
  t = f_16;
  if(match_cons(t, sym_Stream_1))
    {
      i_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, f_16);
  t = n_6(g_16, i_16, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,f_30 = NULL,i_30 = NULL,e_32 = NULL,i_32 = NULL,z_4 = NULL,y_4 = NULL;
  if(((v_29 != NULL) && (v_29 != t)))
    _fail(t);
  else
    v_29 = t;
  if(match_cons(t, sym__2))
    {
      if(((c_30 != NULL) && (c_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_30 = ATgetArgument(t, 0);
      if(((f_30 != NULL) && (f_30 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(v_29));
  if(((b_30 != NULL) && (b_30 != t)))
    _fail(t);
  else
    b_30 = t;
  t = not_null(c_30);
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((u_29 != NULL) && (u_29 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(g_3, t);
        ;
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        t = term_v_13;
        if(((u_29 != NULL) && (u_29 != t)))
          _fail(t);
        else
          u_29 = t;
      }
    if(((i_30 != NULL) && (i_30 != t)))
      _fail(t);
    else
      i_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_30), not_null(f_30));
    if(((y_4 != NULL) && (y_4 != t)))
      _fail(t);
    else
      y_4 = t;
    t = SSLsetAnnotations(not_null(y_4), not_null(b_30));
    t = not_null(v_29);
    if(match_cons(t, sym__2))
      {
        if(((x_29 != NULL) && (x_29 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          x_29 = ATgetArgument(t, 0);
        if(((y_29 != NULL) && (y_29 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          y_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(v_29));
    if(((w_29 != NULL) && (w_29 != t)))
      _fail(t);
    else
      w_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_29), (ATerm) ATmakeAppl(sym__2, not_null(u_29), not_null(y_29)));
    if(((z_4 != NULL) && (z_4 != t)))
      _fail(t);
    else
      z_4 = t;
    t = SSLsetAnnotations(not_null(z_4), not_null(w_29));
    if(((a_30 != NULL) && (a_30 != t)))
      _fail(t);
    else
      a_30 = t;
    if(match_cons(t, sym__2))
      {
        if(((e_32 != NULL) && (e_32 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          e_32 = ATgetArgument(t, 0);
        if(((i_32 != NULL) && (i_32 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          i_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm w_13 = t;
      int y_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,b_5 = NULL;
          t = SSLgetAnnotations(not_null(a_30));
          t_14 = t;
          t = not_null(e_32);
          t = fetch_1_0(k_3, t);
          a_15 = t;
          t = not_null(i_32);
          if(match_cons(t, sym__2))
            {
              c_15 = ATgetArgument(t, 0);
              d_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_6(x_3, c_15, d_15, t);
          b_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_15, b_15);
          b_5 = t;
          t = SSLsetAnnotations(b_5, t_14);
          ;
          LocalPopChoice(y_13);
        }
      else
        {
          t = w_13;
          {
            ATerm m_15 = NULL,v_15 = NULL,w_15 = NULL,y_15 = NULL,c_5 = NULL;
            t = SSLgetAnnotations(not_null(a_30));
            m_15 = t;
            t = not_null(i_32);
            if(match_cons(t, sym__2))
              {
                w_15 = ATgetArgument(t, 0);
                y_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_6(d_4, w_15, y_15, t);
            v_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_32), v_15);
            c_5 = t;
            t = SSLsetAnnotations(c_5, m_15);
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
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  r_32 = t;
  t = dtime_0_0(t);
  t = r_32;
  t = h_113(t);
  q_32 = t;
  t = dtime_0_0(t);
  n_32 = t;
  t = q_32;
  if(match_cons(t, sym__2))
    {
      o_32 = ATgetArgument(t, 0);
      p_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_32), (ATerm) ATmakeAppl(sym_Runtime_1, n_32)), p_32);
  return(t);
}
ATerm g_33 (ATerm z_32, ATerm t)
{
  t = SSL_fclose(z_32);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL;
  d_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_33 = ATgetArgument(t, 0);
      {
        ATerm z_13 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_33);
            ;
            LocalPopChoice(b_14);
          }
        else
          {
            t = z_13;
            t = g_33(d_33, t);
          }
      }
    }
  else
    {
      t = g_33(d_33, t);
    }
  return(t);
}
ATerm r_6 (ATerm j_60, ATerm t)
{
  t = SSL_read_term_from_stream(j_60);
  return(t);
}
ATerm s_6 (ATerm v_56, ATerm w_56, ATerm t)
{
  ATerm i_33 = NULL;
  t = SSL_fopen(v_56, w_56);
  i_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_33);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_33 = NULL;
  t = SSL_stdin_stream();
  k_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_33);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_33 = NULL;
  t = SSL_stdout_stream();
  m_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_33);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_33 = NULL;
  t = SSL_stderr_stream();
  q_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_33);
  return(t);
}
ATerm n_35 (ATerm a_34, ATerm t)
{
  ATerm b_34 = NULL;
  t = SSL_explode_term(a_34);
  if(match_cons(t, sym__2))
    {
      ATerm c_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_14 = ATgetArgument(t, 1);
        if(((ATgetType(d_14) == AT_LIST) && !(ATisEmpty(d_14))))
          {
            b_34 = ATgetFirst((ATermList) d_14);
            {
              ATerm f_14 = (ATerm) ATgetNext((ATermList) d_14);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_34;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_34;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_34;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_34;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm o_35 (ATerm e_34, ATerm f_34, ATerm g_34, ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,s_34 = NULL,c_6 = NULL;
  t = SSLgetAnnotations(g_34);
  l_34 = t;
  t = e_34;
  if(match_cons(t, sym_Path_1))
    {
      s_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_34, f_34);
  c_6 = t;
  t = SSLsetAnnotations(c_6, l_34);
  if(match_cons(t, sym__2))
    {
      j_34 = ATgetArgument(t, 0);
      k_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(j_34, k_34, t);
  return(t);
}
ATerm q_35 (ATerm u_34, ATerm v_34, ATerm w_34, ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL,e_35 = NULL,e_8 = NULL;
  t = SSLgetAnnotations(w_34);
  b_35 = t;
  t = SSL_is_string(u_34);
  e_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_35, v_34);
  e_8 = t;
  t = SSLsetAnnotations(e_8, b_35);
  if(match_cons(t, sym__2))
    {
      z_34 = ATgetArgument(t, 0);
      a_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(z_34, a_35, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,m_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_14 = ATgetArgument(t, 0);
      ATerm h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  i_35 = t;
  if(match_cons(t, sym__2))
    {
      j_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
      {
        ATerm p_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_35(i_35, t);
            ;
            LocalPopChoice(q_14);
          }
        else
          {
            t = p_14;
            {
              ATerm s_14 = t;
              int u_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_35(j_35, m_35, i_35, t);
                  ;
                  LocalPopChoice(u_14);
                }
              else
                {
                  t = s_14;
                  t = q_35(j_35, m_35, i_35, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_35(i_35, t);
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_v_14;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_35 = NULL;
      u_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_35, term_y_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      t = debug_1_0(e_4, t);
      _fail(t);
    }
  s_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(t_35, t);
  r_35 = t;
  t = s_35;
  t = fclose_0_0(t);
  t = r_35;
  return(t);
}
ATerm fetch_1_0 (ATerm w_94 (ATerm), ATerm t)
{
  ATerm b_37 (ATerm t)
  {
    ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
    y_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_36 = ATgetFirst((ATermList) t);
        a_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_14 = t;
      int g_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_17 = NULL,s_17 = NULL,m_8 = NULL;
          t = SSLgetAnnotations(y_36);
          o_17 = t;
          t = z_36;
          t = w_94(t);
          s_17 = t;
          t = (ATerm) ATinsert(CheckATermList(a_37), s_17);
          m_8 = t;
          t = SSLsetAnnotations(m_8, o_17);
          ;
          LocalPopChoice(g_15);
        }
      else
        {
          t = z_14;
          {
            ATerm e_18 = NULL,h_18 = NULL,n_8 = NULL;
            t = SSLgetAnnotations(y_36);
            e_18 = t;
            t = a_37;
            t = b_37(t);
            h_18 = t;
            t = (ATerm) ATinsert(CheckATermList(h_18), z_36);
            n_8 = t;
            t = SSLsetAnnotations(n_8, e_18);
          }
        }
    }
    return(t);
  }
  t = b_37(t);
  return(t);
}
ATerm m_6 (ATerm j_54, ATerm k_54, ATerm t)
{
  t = SSL_strcat(j_54, k_54);
  return(t);
}
ATerm debug_1_0 (ATerm d_110 (ATerm), ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,h_37 = NULL,i_37 = NULL;
  e_37 = t;
  t = d_110(t);
  f_37 = t;
  t = term_x_7;
  h_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_37), f_37);
  i_37 = t;
  t = SSL_printnl(h_37, i_37);
  t = e_37;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_37 = NULL;
      s_37 = t;
      t = SSL_is_string(s_37);
      ;
      LocalPopChoice(n_15);
    }
  else
    {
      t = l_15;
      {
        ATerm o_15 = t;
        int p_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_4, t);
            ;
            LocalPopChoice(p_15);
          }
        else
          {
            t = o_15;
            {
              ATerm y_37 = NULL,a_38 = NULL,b_38 = NULL;
              y_37 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_38 = ATgetArgument(t, 0);
                  t = a_38;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_38 = ATgetArgument(t, 0);
                      t = a_38;
                      {
                        ATerm q_15 = t;
                        int r_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(r_15);
                          }
                        else
                          {
                            t = q_15;
                            t = debug_1_0(g_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_38 = NULL,g_38 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_38 = ATgetArgument(t, 0);
                          b_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_38;
                      t = eval_config_0_0(t);
                      f_38 = t;
                      t = b_38;
                      t = eval_config_0_0(t);
                      g_38 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_38, g_38);
                      t = m_6(f_38, g_38, t);
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
  ATerm k_38 = NULL,n_38 = NULL;
  k_38 = t;
  t = term_s_15;
  n_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_15, k_38);
  t = v_6(n_38, k_38, t);
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_38 = NULL,w_38 = NULL;
        t = eval_config_0_0(t);
        v_38 = t;
        t = term_s_15;
        w_38 = t;
        t = SSL_table_put(w_38, k_38, v_38);
        t = v_38;
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm q_111 (ATerm), ATerm t)
{
  ATerm f_39 = NULL;
  f_39 = t;
  {
    ATerm x_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_39 = NULL;
        t = term_a_16;
        t = get_config_0_0(t);
        l_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_39, term_b_16);
        t = geq_0_0(t);
        t = f_39;
        t = q_111(t);
        ;
        LocalPopChoice(z_15);
      }
    else
      {
        t = x_15;
        t = f_39;
      }
  }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm q_39 = NULL;
  q_39 = t;
  if(match_string(t, "-k"))
    {
      t = q_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_39;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,v_39 = NULL;
  r_39 = t;
  t = SSL_string_to_int(r_39);
  s_39 = t;
  t = term_c_16;
  v_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_16, s_39);
  t = y_6(v_39, s_39, t);
  t = r_39;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, j_4, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm x_39 = NULL;
  x_39 = t;
  if(match_string(t, "-S"))
    {
      t = x_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_39;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm b_40 = NULL,f_40 = NULL;
  t = term_a_16;
  b_40 = t;
  t = term_e_16;
  f_40 = t;
  t = term_l_16;
  t = y_6(b_40, f_40, t);
  t = term_o_16;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_p_16;
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
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
  g_40 = t;
  t = SSL_string_to_int(g_40);
  h_40 = t;
  t = term_a_16;
  i_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_16, h_40);
  t = y_6(i_40, h_40, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_40);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_q_16;
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
  ATerm j_40 = NULL,k_40 = NULL;
  t = term_r_16;
  j_40 = t;
  t = term_w_7;
  k_40 = t;
  t = term_t_16;
  t = y_6(j_40, k_40, t);
  t = term_u_16;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_y_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_4, n_4, o_4, t);
      ;
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_4, r_4, s_4, t);
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            t = Option_3_0(t_4, u_4, w_4, t);
          }
      }
    }
  return(t);
}
ATerm y_6 (ATerm k_61, ATerm l_61, ATerm t)
{
  ATerm l_40 = NULL;
  t = term_s_15;
  l_40 = t;
  t = SSL_table_put(l_40, k_61, l_61);
  t = (ATerm) ATmakeAppl(sym__3, term_s_15, k_61, l_61);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_40 = NULL,v_40 = NULL,z_40 = NULL;
      t = term_w_7;
      t = d_0(t);
      u_40 = t;
      t = term_f_17;
      v_40 = t;
      t = term_g_17;
      z_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_17, term_g_17, u_40);
      t = w_6(v_40, z_40, u_40, t);
      _fail(t);
    }
  else
    {
      ATerm e_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_40 = ATgetFirst((ATermList) t);
          p_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_40;
      t = a_0(t);
      t = term_w_7;
      t = b_0(t);
      e_41 = t;
      t = (ATerm) ATinsert(CheckATermList(p_40), e_41);
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm i_41 = NULL;
  i_41 = t;
  if(match_string(t, "-o"))
    {
      t = i_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_41;
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm j_41 = NULL,m_41 = NULL;
  j_41 = t;
  t = term_h_17;
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_17, j_41);
  t = y_6(m_41, j_41, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_41);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, a_5, d_5, t);
  return(t);
}
ATerm w_6 (ATerm c_46, ATerm d_46, ATerm b_46, ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_46, d_46);
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_17 = ATgetArgument(t, 0);
            ATerm p_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_46, d_46);
        t = v_6(c_46, d_46, t);
        ;
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        t = (ATerm) ATempty;
      }
    r_41 = t;
    t = (ATerm) ATinsert(CheckATermList(r_41), b_46);
    s_41 = t;
    t = SSL_table_put(c_46, d_46, s_41);
    t = q_41;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL;
      t = term_w_7;
      t = l_0(t);
      k_42 = t;
      t = term_f_17;
      l_42 = t;
      t = term_g_17;
      m_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_17, term_g_17, k_42);
      t = w_6(l_42, m_42, k_42, t);
      _fail(t);
    }
  else
    {
      ATerm q_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_42 = ATgetFirst((ATermList) t);
          h_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_42 = ATgetFirst((ATermList) t);
          j_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_42;
      t = h_0(t);
      t = i_42;
      t = j_0(t);
      q_42 = t;
      t = (ATerm) ATinsert(CheckATermList(j_42), q_42);
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm s_42 = NULL;
  s_42 = t;
  if(match_string(t, "-i"))
    {
      t = s_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_42;
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL;
  t_42 = t;
  t = term_r_17;
  u_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_17, t_42);
  t = y_6(u_42, t_42, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_42);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_5, g_5, h_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_7;
  t = whoami_0_0(t);
  v_42 = t;
  t = term_x_7;
  x_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_17), v_42);
  y_42 = t;
  t = SSL_printnl(x_42, y_42);
  t = term_d_8;
  w_42 = t;
  t = SSL_exit(w_42);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_17;
  t = get_config_0_0(t);
  return(t);
}
ATerm t_6 (ATerm g_44, ATerm h_44, ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_44, h_44);
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      t = SSL_addr(g_44, h_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
  a_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_43;
      t = n_99(t);
    }
  else
    {
      ATerm f_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_43 = ATgetFirst((ATermList) t);
          c_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_43;
      t = foldr_2_0(n_99, o_99, t);
      f_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_43, f_43);
      t = o_99(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL;
  if(match_cons(t, sym__2))
    {
      x_20 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(x_20, y_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_43 = NULL,h_20 = NULL,i_20 = NULL;
  t = times_0_0(t);
  i_20 = t;
  t = SSL_explode_term(i_20);
  if(match_cons(t, sym__2))
    {
      ATerm y_17 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_20;
  t = foldr_2_0(k_5, m_5, t);
  i_43 = t;
  t = SSL_TicksToSeconds(i_43);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
  t_43 = t;
  if(match_cons(t, sym__2))
    {
      u_43 = ATgetArgument(t, 0);
      v_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_43;
        if((u_43 != t))
          {
            _fail(t);
          }
        t = t_43;
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = (ATerm) ATmakeAppl(sym__2, u_43, v_43);
        {
          ATerm b_18 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_43, v_43);
              ;
              LocalPopChoice(c_18);
            }
          else
            {
              t = b_18;
              t = SSL_gtr(u_43, v_43);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_43, v_43);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_111 (ATerm), ATerm t)
{
  ATerm z_43 = NULL;
  z_43 = t;
  {
    ATerm d_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_44 = NULL;
        t = term_a_16;
        t = get_config_0_0(t);
        b_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_44, term_d_8);
        t = geq_0_0(t);
        t = z_43;
        t = p_111(t);
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = d_18;
        t = z_43;
      }
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,i_44 = NULL,j_44 = NULL;
  t = run_time_0_0(t);
  d_44 = t;
  t = term_w_7;
  t = whoami_0_0(t);
  e_44 = t;
  t = term_x_7;
  i_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_18), d_44), term_g_18), e_44);
  j_44 = t;
  t = SSL_printnl(i_44, j_44);
  t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_18), d_44), term_g_18), e_44));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_16;
  k_44 = t;
  t = SSL_exit(k_44);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL;
  t_44 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_44;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_44 = ATgetArgument(t, 0);
          {
            ATerm g_22 = NULL,v_8 = NULL;
            t = SSLgetAnnotations(t_44);
            g_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_44);
            v_8 = t;
            t = SSLsetAnnotations(v_8, g_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_44;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_114 (ATerm), ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
      t = fetch_1_0(o_5, t);
    }
  t = f_114(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_44 = ATgetFirst((ATermList) t);
      x_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_45 = NULL,c_45 = NULL;
        ATerm q_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_45)), not_null(c_45));
          return(t);
        }
        t = not_null(x_44);
        t = g_0(t);
        if(((b_45 != NULL) && (b_45 != t)))
          _fail(t);
        else
          b_45 = t;
        t = not_null(w_44);
        t = f_0(t);
        if(((c_45 != NULL) && (c_45 != t)))
          _fail(t);
        else
          c_45 = t;
        t = not_null(x_44);
        t = reverse_acc_2_0(f_0, q_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_7;
      t = g_0(t);
    }
  return(t);
}
ATerm v_6 (ATerm t_47, ATerm u_47, ATerm t)
{
  t = SSL_table_get(t_47, u_47);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,o_9 = NULL;
  i_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_45);
  g_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_45);
  o_9 = t;
  t = SSLsetAnnotations(o_9, g_45);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm k_45 = NULL;
  k_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_45), term_m_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL;
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      t = fetch_1_0(r_5, t);
    }
  t = term_r_18;
  t = echo_0_0(t);
  t = term_f_17;
  e_45 = t;
  t = term_g_17;
  f_45 = t;
  t = term_s_18;
  t = v_6(e_45, f_45, t);
  t = reverse_acc_2_0(_id, s_5, t);
  t = map_1_0(t_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
  x_45 = t;
  {
    ATerm t_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_45;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_18 = ATgetFirst((ATermList) t);
                ATerm z_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_45;
          }
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = t_18;
        t = (ATerm) ATinsert(ATempty, x_45);
      }
    y_45 = t;
    t = term_v_13;
    z_45 = t;
    t = SSL_printnl(z_45, y_45);
    t = x_45;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL;
  t = term_a_19;
  k_46 = t;
  t = term_w_7;
  l_46 = t;
  t = term_b_19;
  t = y_6(k_46, l_46, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_c_19;
  return(t);
}
ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm m_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL;
  t = term_a_19;
  u_46 = t;
  t = term_w_7;
  v_46 = t;
  t = term_b_19;
  t = y_6(u_46, v_46, t);
  t = term_d_19;
  m_46 = t;
  t = term_w_7;
  t_46 = t;
  t = term_e_19;
  t = y_6(m_46, t_46, t);
  t = term_f_19;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_5, x_5, d_6, t);
      ;
      LocalPopChoice(i_19);
    }
  else
    {
      t = h_19;
      t = Option_3_0(e_6, j_6, l_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_116 (ATerm), ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,f_47 = NULL,g_47 = NULL,s_9 = NULL;
  if(((a_47 != NULL) && (a_47 != t)))
    _fail(t);
  else
    a_47 = t;
  {
    ATerm j_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_19;
        t = i_116(t);
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = j_19;
      }
    t = not_null(a_47);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((c_47 != NULL) && (c_47 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          c_47 = ATgetFirst((ATermList) t);
        if(((d_47 != NULL) && (d_47 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          d_47 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(a_47));
    if(((b_47 != NULL) && (b_47 != t)))
      _fail(t);
    else
      b_47 = t;
    t = term_v_17;
    if(((g_47 != NULL) && (g_47 != t)))
      _fail(t);
    else
      g_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_17, not_null(c_47));
    t = y_6(not_null(g_47), not_null(c_47), t);
    t = not_null(d_47);
    {
      ATerm q_47 (ATerm t)
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_19 = t;
            int t_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_47 = NULL;
                j_47 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_47;
                ;
                LocalPopChoice(t_19);
              }
            else
              {
                t = s_19;
                t = i_116(t);
                t = Cons_2_0(_id, q_47, t);
              }
            ;
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            {
              ATerm m_47 = NULL,n_47 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_47 = ATgetFirst((ATermList) t);
                  n_47 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_47), (ATerm) ATmakeAppl(sym_Undefined_1, m_47));
            }
          }
        return(t);
      }
      t = q_47(t);
      if(((f_47 != NULL) && (f_47 != t)))
        _fail(t);
      else
        f_47 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(f_47)), (ATerm) ATmakeAppl(sym_Program_1, not_null(c_47)));
      if(((s_9 != NULL) && (s_9 != t)))
        _fail(t);
      else
        s_9 = t;
      t = SSLsetAnnotations(not_null(s_9), not_null(b_47));
    }
  }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm e_48 = NULL;
  e_48 = t;
  if(match_string(t, "--help"))
    {
      t = e_48;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_48;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_48;
        }
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL;
  t = term_l_18;
  f_48 = t;
  t = term_w_7;
  g_48 = t;
  t = term_u_19;
  t = y_6(f_48, g_48, t);
  t = term_x_19;
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm c_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_116 (ATerm), ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL;
  if(((z_47 != NULL) && (z_47 != t)))
    _fail(t);
  else
    z_47 = t;
  t = term_f_17;
  if(((b_48 != NULL) && (b_48 != t)))
    _fail(t);
  else
    b_48 = t;
  t = term_g_17;
  if(((c_48 != NULL) && (c_48 != t)))
    _fail(t);
  else
    c_48 = t;
  t = (ATerm) ATempty;
  if(((d_48 != NULL) && (d_48 != t)))
    _fail(t);
  else
    d_48 = t;
  t = SSL_table_put(not_null(b_48), not_null(c_48), not_null(d_48));
  t = not_null(z_47);
  {
    ATerm u_6 (ATerm t)
    {
      ATerm c_20 = t;
      int d_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_116(t);
          ;
          LocalPopChoice(d_20);
        }
      else
        {
          t = c_20;
          {
            ATerm e_20 = t;
            int j_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_6, a_7, b_7, t);
                ;
                LocalPopChoice(j_20);
              }
            else
              {
                t = e_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_6, t);
    {
      ATerm k_20 = t;
      int l_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_48 = NULL;
          n_48 = t;
          {
            ATerm m_20 = t;
            int n_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_24 = NULL;
                t = n_48;
                {
                  ATerm o_20 = t;
                  int p_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_18;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(p_20);
                    }
                  else
                    {
                      t = o_20;
                      t = fetch_1_0(c_7, t);
                    }
                  t = n_48;
                  t = default_system_usage_0_0(t);
                  t = term_e_16;
                  b_24 = t;
                  t = SSL_exit(b_24);
                }
                ;
                LocalPopChoice(n_20);
              }
            else
              {
                t = m_20;
                {
                  ATerm n_24 = NULL;
                  t = term_a_19;
                  t = get_config_0_0(t);
                  t = n_48;
                  t = default_system_about_0_0(t);
                  t = term_e_16;
                  n_24 = t;
                  t = SSL_exit(n_24);
                }
              }
          }
          ;
          LocalPopChoice(l_20);
        }
      else
        {
          t = k_20;
          {
            ATerm q_20 = t;
            int r_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL;
                ATerm f_7 (ATerm t)
                {
                  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_9 = NULL;
                  t_48 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      s_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_48);
                  r_48 = t;
                  t = s_48;
                  if(((x_47 != NULL) && (x_47 != t)))
                    _fail(t);
                  else
                    x_47 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_48);
                  u_9 = t;
                  t = SSLsetAnnotations(u_9, r_48);
                  return(t);
                }
                t = fetch_1_0(f_7, t);
                t = term_x_7;
                if(((p_48 != NULL) && (p_48 != t)))
                  _fail(t);
                else
                  p_48 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_47)), term_s_20);
                if(((q_48 != NULL) && (q_48 != t)))
                  _fail(t);
                else
                  q_48 = t;
                t = SSL_printnl(not_null(p_48), not_null(q_48));
                t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_47)), term_s_20));
                t = default_system_usage_0_0(t);
                t = term_d_8;
                if(((o_48 != NULL) && (o_48 != t)))
                  _fail(t);
                else
                  o_48 = t;
                t = SSL_exit(not_null(o_48));
                ;
                LocalPopChoice(r_20);
              }
            else
              {
                t = q_20;
              }
          }
        }
      if(((y_47 != NULL) && (y_47 != t)))
        _fail(t);
      else
        y_47 = t;
      t = term_f_17;
      if(((a_48 != NULL) && (a_48 != t)))
        _fail(t);
      else
        a_48 = t;
      t = SSL_table_destroy(not_null(a_48));
      t = not_null(y_47);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_114 (ATerm), ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL;
  t = parse_options_1_0(h_114, t);
  y_48 = t;
  t = term_w_20;
  b_49 = t;
  t = SSL_table_create(b_49);
  t = term_w_20;
  z_48 = t;
  t = term_z_20;
  a_49 = t;
  t = SSL_table_put(z_48, a_49, y_48);
  t = y_48;
  t = j_114(t);
  {
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_114, t);
        ;
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        {
          ATerm c_21 = t;
          int d_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_114(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_21);
            }
          else
            {
              t = c_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = if_verbose2_1_0(r_7, t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL;
  t = term_f_21;
  c_49 = t;
  t = term_w_7;
  d_49 = t;
  t = term_j_21;
  t = y_6(c_49, d_49, t);
  t = term_k_21;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_m_21;
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL;
  e_49 = t;
  t = term_v_17;
  t = get_config_0_0(t);
  f_49 = t;
  t = term_x_7;
  g_49 = t;
  t = (ATerm) ATinsert(ATempty, f_49);
  h_49 = t;
  t = SSL_printnl(g_49, h_49);
  t = e_49;
  return(t);
}
ATerm iowrap_3_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm q_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_113(t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = q_21;
        {
          ATerm c_22 = t;
          int d_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(d_22);
            }
          else
            {
              t = c_22;
              {
                ATerm e_22 = t;
                int f_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(f_22);
                  }
                else
                  {
                    t = e_22;
                    {
                      ATerm h_22 = t;
                      int i_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(l_7, m_7, q_7, t);
                          ;
                          LocalPopChoice(i_22);
                        }
                      else
                        {
                          t = h_22;
                          {
                            ATerm s_22 = t;
                            int t_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(t_22);
                              }
                            else
                              {
                                t = s_22;
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
  ATerm k_7 (ATerm t)
  {
    ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
    if(((j_49 != NULL) && (j_49 != t)))
      _fail(t);
    else
      j_49 = t;
    {
      ATerm v_22 = t;
      int w_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_49 != NULL) && (i_49 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_49 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_7, t);
          ;
          LocalPopChoice(w_22);
        }
      else
        {
          t = v_22;
          t = term_b_23;
          if(((i_49 != NULL) && (i_49 != t)))
            _fail(t);
          else
            i_49 = t;
        }
      t = not_null(i_49);
      t = ReadFromFile_0_0(t);
      if(((k_49 != NULL) && (k_49 != t)))
        _fail(t);
      else
        k_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_49), not_null(k_49));
      t = apply_strategy_1_0(q_113, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(h_7, s_113, i_7, k_7, t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,z_9 = NULL,y_9 = NULL,x_9 = NULL;
  x_49 = t;
  if(match_cons(t, sym__2))
    {
      m_49 = ATgetArgument(t, 0);
      n_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_49);
  l_49 = t;
  t = n_49;
  if(match_cons(t, sym_Specification_1))
    {
      p_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_49);
  o_49 = t;
  t = p_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_49 = ATgetFirst((ATermList) t);
      t_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_49);
  r_49 = t;
  t = t_49;
  t = Cons_2_0(u_7, v_7, t);
  v_49 = t;
  t = (ATerm) ATinsert(CheckATermList(v_49), s_49);
  x_9 = t;
  t = SSLsetAnnotations(x_9, r_49);
  w_49 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_49);
  y_9 = t;
  t = SSLsetAnnotations(y_9, o_49);
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_49, q_49);
  z_9 = t;
  t = SSLsetAnnotations(z_9, l_49);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,w_9 = NULL;
  b_50 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      z_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_50);
  y_49 = t;
  t = z_49;
  t = dead_def_elim_0_0(t);
  t = map_1_0(local_dead_def_elim_0_0, t);
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_50);
  w_9 = t;
  t = SSLsetAnnotations(w_9, y_49);
  return(t);
}
ATerm v_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(t_7, _fail, default_usage_0_0, t);
  return(t);
}
