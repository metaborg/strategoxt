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
ATerm term_o_22;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_g_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_k_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_p_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_c_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_q_15;
ATerm term_j_15;
ATerm term_x_14;
ATerm term_t_14;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_a_13;
ATerm term_w_12;
ATerm term_p_10;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_g_9;
ATerm term_m_8;
ATerm term_f_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_x_7;
void init_constant_terms (void)
{
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_9);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__2, term_w_15, term_c_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_x_7);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_f_17);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__2, term_w_18, term_x_7);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym__2, term_z_18, term_x_7);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_x_7);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_x_7);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm DefDead_0_0 (ATerm);
ATerm filter_1_0 (ATerm o_88 (ATerm), ATerm);
ATerm l_5 (ATerm w_33, ATerm x_33, ATerm y_33, ATerm);
ATerm p_5 (ATerm o_33, ATerm p_33, ATerm);
ATerm end_scope_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm g_88 (ATerm), ATerm);
ATerm scope_2_0 (ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm z_0 (ATerm);
ATerm local_dead_def_elim_0_0 (ATerm);
ATerm map_1_0 (ATerm x_81 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm u_5 (ATerm p_19, ATerm o_19, ATerm);
ATerm w_5 (ATerm k_84 (ATerm), ATerm y_27, ATerm x_27, ATerm);
ATerm foldr_3_0 (ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm free_vars_3_0 (ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm f_91 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm y_5 (ATerm u_33, ATerm v_33, ATerm);
ATerm at_end_1_0 (ATerm n_82 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm k_20 (ATerm c_20, ATerm);
ATerm conc_0_0 (ATerm);
ATerm a_6 (ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm c_28, ATerm b_28, ATerm);
ATerm b_6 (ATerm f_84 (ATerm), ATerm w_27, ATerm v_27, ATerm);
ATerm genzip_4_0 (ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm g_6 (ATerm u_584, ATerm z_584, ATerm v_54, ATerm);
ATerm e_2 (ATerm);
ATerm j_2 (ATerm);
ATerm m_2 (ATerm);
ATerm f_24 (ATerm z_22, ATerm a_23, ATerm b_23, ATerm);
ATerm n_2 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm i_6 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm j_55, ATerm g_55, ATerm n_55, ATerm k_55, ATerm h_55, ATerm i_55, ATerm);
ATerm GnNext_3_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm);
ATerm for_3_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm);
ATerm l_6 (ATerm k_88 (ATerm), ATerm b_33, ATerm z_32, ATerm);
ATerm s_2 (ATerm);
ATerm RegisterDefinition_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm g_3 (ATerm);
ATerm dead_def_elim_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_60 (ATerm), ATerm a_61 (ATerm), ATerm);
ATerm o_6 (ATerm d_44, ATerm e_44, ATerm);
ATerm p_6 (ATerm r_47, ATerm s_47, ATerm);
ATerm r_6 (ATerm w_97 (ATerm), ATerm w_457, ATerm v_47, ATerm);
ATerm q_6 (ATerm n_47, ATerm o_47, ATerm);
ATerm n_3 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_100 (ATerm), ATerm);
ATerm q_34 (ATerm d_34, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm s_6 (ATerm t_47, ATerm);
ATerm t_6 (ATerm f_44, ATerm g_44, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm y_36 (ATerm e_35, ATerm);
ATerm z_36 (ATerm k_35, ATerm l_35, ATerm p_35, ATerm);
ATerm a_37 (ATerm a_36, ATerm b_36, ATerm c_36, ATerm);
ATerm u_6 (ATerm);
ATerm e_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_82 (ATerm), ATerm);
ATerm n_6 (ATerm t_41, ATerm u_41, ATerm);
ATerm debug_1_0 (ATerm u_97 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm h_99 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm a_7 (ATerm u_48, ATerm v_48, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm y_6 (ATerm j_33, ATerm k_33, ATerm i_33, ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm h_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_6 (ATerm n_31, ATerm o_31, ATerm);
ATerm foldr_2_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm i_5 (ATerm);
ATerm m_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm g_99 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm need_help_1_0 (ATerm w_101 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm x_6 (ATerm a_35, ATerm b_35, ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm x_5 (ATerm);
ATerm z_5 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm z_103 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm parse_options_1_0 (ATerm y_103 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm);
ATerm j_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm r_7 (ATerm);
ATerm iowrap_3_0 (ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,s_0 = NULL,u_0 = NULL,y_0 = NULL;
  a_0 = t;
  t = term_x_7;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_b_8;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), c_0), term_c_8);
  y_0 = t;
  t = SSL_printnl(u_0, y_0);
  t = term_f_8;
  s_0 = t;
  t = SSL_exit(s_0);
  t = a_0;
  return(t);
}
ATerm DefDead_0_0 (ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL;
  j_1 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      k_1 = ATgetArgument(t, 0);
      {
        ATerm g_8 = ATgetArgument(t, 1);
      }
      {
        ATerm h_8 = ATgetArgument(t, 2);
      }
      {
        ATerm i_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm j_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 = NULL,g_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, k_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        b_1 = t;
        t = term_m_8;
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATmakeAppl(sym_SDefT_4, k_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
        t = y_5(g_1, b_1, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(l_8);
      }
    else
      {
        t = j_8;
        {
          ATerm d_2 = NULL,k_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, k_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
          d_2 = t;
          t = term_m_8;
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATmakeAppl(sym_SDefT_4, k_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
          t = y_5(k_2, d_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm o_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_8) != ATmakeSymbol("f_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_x_7;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm o_88 (ATerm), ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL;
  g_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_2 = ATgetFirst((ATermList) t);
          i_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_2 = NULL,t_2 = NULL,u_2 = NULL,e_0 = NULL;
            t = SSLgetAnnotations(g_2);
            p_2 = t;
            t = h_2;
            t = o_88(t);
            t_2 = t;
            t = i_2;
            t = filter_1_0(o_88, t);
            u_2 = t;
            t = (ATerm) ATinsert(CheckATermList(u_2), t_2);
            e_0 = t;
            t = SSLsetAnnotations(e_0, p_2);
            ;
            LocalPopChoice(r_8);
          }
        else
          {
            t = p_8;
            t = i_2;
            t = filter_1_0(o_88, t);
          }
      }
    }
  return(t);
}
ATerm l_5 (ATerm w_33, ATerm x_33, ATerm y_33, ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,d_3 = NULL;
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_33, x_33);
  t = x_6(w_33, x_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_8 = ATgetFirst((ATermList) t);
      w_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_2), y_33);
  d_3 = t;
  t = SSL_table_put(w_33, x_33, d_3);
  t = x_2;
  return(t);
}
ATerm p_5 (ATerm o_33, ATerm p_33, ATerm t)
{
  ATerm h_3 = NULL,j_3 = NULL;
  j_3 = t;
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_33, p_33);
        t = x_6(o_33, p_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_9 = ATgetFirst((ATermList) t);
            h_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_8);
        t = SSL_table_put(o_33, p_33, h_3);
        t = (ATerm) ATmakeAppl(sym__3, o_33, p_33, h_3);
      }
    else
      {
        t = u_8;
        t = SSL_table_remove(o_33, p_33);
        t = (ATerm) ATmakeAppl(sym__2, o_33, p_33);
      }
    t = j_3;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
  p_3 = t;
  t = h_88(t);
  o_3 = t;
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_3 = NULL;
        t = term_g_9;
        s_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_3, term_g_9);
        t = x_6(o_3, s_3, t);
        ;
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_3 = ATgetFirst((ATermList) t);
        l_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_9;
    q_3 = t;
    t = SSL_table_put(o_3, q_3, l_3);
    t = m_3;
    {
      ATerm i_0 (ATerm t)
      {
        ATerm u_3 = NULL;
        u_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_3, u_3);
        t = p_5(o_3, u_3, t);
        return(t);
      }
      t = map_1_0(i_0, t);
      t = p_3;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm t)
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_79(t);
      t = e_79(t);
      ;
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      t = e_79(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm w_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL;
  y_3 = t;
  t = g_88(t);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_3, term_g_9);
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_4 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_9 = ATgetArgument(t, 0);
            ATerm m_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_9;
        i_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_3, term_g_9);
        t = x_6(w_3, i_4, t);
        ;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        t = (ATerm) ATempty;
      }
    z_3 = t;
    t = term_g_9;
    a_4 = t;
    t = (ATerm) ATinsert(CheckATermList(z_3), (ATerm) ATempty);
    b_4 = t;
    t = SSL_table_put(w_3, a_4, b_4);
    t = y_3;
  }
  return(t);
}
ATerm scope_2_0 (ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    t = end_scope_1_0(i_88, t);
    return(t);
  }
  t = begin_scope_1_0(i_88, t);
  t = restore_always_2_0(j_88, q_0, t);
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_m_8;
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm r_3 = NULL,t_3 = NULL,v_3 = NULL,x_3 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      r_3 = ATgetArgument(t, 0);
      {
        ATerm n_9 = ATgetArgument(t, 1);
      }
      {
        ATerm p_9 = ATgetArgument(t, 2);
      }
      {
        ATerm q_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, r_3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  v_3 = t;
  t = term_t_9;
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, r_3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_t_9);
  t = l_6(x_0, v_3, x_3, t);
  t = t_3;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_m_8;
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
    ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,c_6 = NULL,z_6 = NULL,f_7 = NULL,h_7 = NULL;
    h_7 = t;
    if(match_cons(t, sym_Let_2))
      {
        c_6 = ATgetArgument(t, 0);
        f_7 = ATgetArgument(t, 1);
        {
          ATerm f_10 = t;
          int g_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_3 = NULL,k_3 = NULL,k_0 = NULL;
              t = SSLgetAnnotations(h_7);
              f_3 = t;
              t = c_6;
              t = map_1_0(w_0, t);
              k_3 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, k_3, f_7);
              k_0 = t;
              t = SSLsetAnnotations(k_0, f_3);
              ;
              LocalPopChoice(g_10);
            }
          else
            {
              t = f_10;
              t = h_7;
            }
        }
      }
    else
      {
        ATerm h_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_CallT_3))
              {
                c_6 = ATgetArgument(t, 0);
                {
                  ATerm l_10 = ATgetArgument(t, 1);
                }
                {
                  ATerm m_10 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(k_10);
            t = c_6;
            if(match_cons(t, sym_SVar_1))
              {
                z_6 = ATgetArgument(t, 0);
                {
                  ATerm n_10 = t;
                  int o_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
                      t = term_m_8;
                      y_7 = t;
                      t = (ATerm) ATmakeAppl(sym_SDefT_4, z_6, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
                      z_7 = t;
                      t = term_p_10;
                      a_8 = t;
                      t = (ATerm) ATmakeAppl(sym__3, term_m_8, (ATerm)ATmakeAppl(sym_SDefT_4, z_6, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_p_10);
                      t = l_5(y_7, z_7, a_8, t);
                      t = h_7;
                      ;
                      LocalPopChoice(o_10);
                    }
                  else
                    {
                      t = n_10;
                      t = h_7;
                    }
                }
              }
            else
              {
                t = h_7;
              }
          }
        else
          {
            t = h_10;
            t = h_7;
          }
      }
    t = SRTS_all(local_dead_def_elim_0_0, t);
    y_8 = t;
    if(match_cons(t, sym_Let_2))
      {
        w_8 = ATgetArgument(t, 0);
        x_8 = ATgetArgument(t, 1);
        {
          ATerm q_10 = t;
          int r_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_4 = NULL,p_4 = NULL,o_0 = NULL;
              t = SSLgetAnnotations(y_8);
              m_4 = t;
              t = w_8;
              t = filter_1_0(z_0, t);
              p_4 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, p_4, x_8);
              o_0 = t;
              t = SSLsetAnnotations(o_0, m_4);
              ;
              LocalPopChoice(r_10);
            }
          else
            {
              t = q_10;
              t = y_8;
            }
        }
      }
    else
      {
        t = y_8;
      }
    return(t);
  }
  t = scope_2_0(r_0, v_0, t);
  return(t);
}
ATerm map_1_0 (ATerm x_81 (ATerm), ATerm t)
{
  ATerm e_10 (ATerm t)
  {
    ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
    a_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_10;
      }
    else
      {
        ATerm g_5 = NULL,j_5 = NULL,k_5 = NULL,t_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_10 = ATgetFirst((ATermList) t);
            c_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_10);
        g_5 = t;
        t = b_10;
        t = x_81(t);
        j_5 = t;
        t = c_10;
        t = e_10(t);
        k_5 = t;
        t = (ATerm) ATinsert(CheckATermList(k_5), j_5);
        t_0 = t;
        t = SSLsetAnnotations(t_0, g_5);
      }
    return(t);
  }
  t = e_10(t);
  return(t);
}
ATerm sboundin_3_0 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm t)
{
  ATerm d_14 = NULL,f_14 = NULL,k_14 = NULL,m_14 = NULL,n_14 = NULL;
  k_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
      {
        ATerm d_6 = NULL,h_6 = NULL,j_6 = NULL,d_1 = NULL;
        t = SSLgetAnnotations(k_14);
        d_6 = t;
        t = m_14;
        t = b_75(t);
        h_6 = t;
        t = n_14;
        t = b_75(t);
        j_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, h_6, j_6);
        d_1 = t;
        t = SSLsetAnnotations(d_1, d_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          m_14 = ATgetArgument(t, 0);
          n_14 = ATgetArgument(t, 1);
          d_14 = ATgetArgument(t, 2);
          {
            ATerm l_7 = NULL,p_7 = NULL,q_7 = NULL,s_7 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(k_14);
            l_7 = t;
            t = m_14;
            t = d_75(t);
            p_7 = t;
            t = n_14;
            t = d_75(t);
            q_7 = t;
            t = d_14;
            t = b_75(t);
            s_7 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, p_7, q_7, s_7);
            e_1 = t;
            t = SSLsetAnnotations(e_1, l_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              m_14 = ATgetArgument(t, 0);
              n_14 = ATgetArgument(t, 1);
              d_14 = ATgetArgument(t, 2);
              f_14 = ATgetArgument(t, 3);
              {
                ATerm q_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,d_9 = NULL,f_1 = NULL;
                t = SSLgetAnnotations(k_14);
                q_8 = t;
                t = m_14;
                t = d_75(t);
                z_8 = t;
                t = n_14;
                t = d_75(t);
                a_9 = t;
                t = d_14;
                t = d_75(t);
                b_9 = t;
                t = f_14;
                t = b_75(t);
                d_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_8, a_9, b_9, d_9);
                f_1 = t;
                t = SSLsetAnnotations(f_1, q_8);
              }
            }
          else
            {
              ATerm d_10 = NULL,i_10 = NULL,j_10 = NULL,h_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  m_14 = ATgetArgument(t, 0);
                  n_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_14);
              d_10 = t;
              t = m_14;
              t = d_75(t);
              i_10 = t;
              t = n_14;
              t = b_75(t);
              j_10 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, i_10, j_10);
              h_1 = t;
              t = SSLsetAnnotations(h_1, d_10);
            }
        }
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm h_15 = NULL;
  ATerm s_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          h_15 = ATgetArgument(t, 0);
          {
            ATerm v_10 = ATgetArgument(t, 1);
          }
          {
            ATerm w_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_10);
      t = h_15;
    }
  else
    {
      t = s_10;
      if(match_cons(t, sym_SDefT_4))
        {
          h_15 = ATgetArgument(t, 0);
          {
            ATerm x_10 = ATgetArgument(t, 1);
          }
          {
            ATerm z_10 = ATgetArgument(t, 2);
          }
          {
            ATerm a_11 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = h_15;
    }
  return(t);
}
ATerm u_5 (ATerm p_19, ATerm o_19, ATerm t)
{
  t = p_19;
  t = map_1_0(a_1, t);
  return(t);
}
ATerm w_5 (ATerm k_84 (ATerm), ATerm y_27, ATerm x_27, ATerm t)
{
  ATerm s_16 (ATerm t)
  {
    ATerm f_16 = NULL,i_16 = NULL,k_16 = NULL;
    f_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_27;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_16 = ATgetFirst((ATermList) t);
            k_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_11 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_16;
              {
                ATerm c_1 (ATerm t)
                {
                  t = x_27;
                  return(t);
                }
                t = a_6(k_84, c_1, i_16, k_16, t);
                t = s_16(t);
              }
              ;
              LocalPopChoice(c_11);
            }
          else
            {
              t = b_11;
              {
                ATerm t_10 = NULL,y_10 = NULL,t_1 = NULL;
                t = SSLgetAnnotations(f_16);
                t_10 = t;
                t = k_16;
                t = s_16(t);
                y_10 = t;
                t = (ATerm) ATinsert(CheckATermList(y_10), i_16);
                t_1 = t;
                t = SSLsetAnnotations(t_1, t_10);
              }
            }
        }
      }
    return(t);
  }
  t = y_27;
  t = s_16(t);
  return(t);
}
ATerm foldr_3_0 (ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  v_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_16;
      t = a_87(t);
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
      t = c_87(t);
      d_17 = t;
      t = x_16;
      t = foldr_3_0(a_87, b_87, c_87, t);
      e_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_17, e_17);
      t = b_87(t);
    }
  return(t);
}
ATerm l_1 (ATerm t)
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
  ATerm v_11 = NULL,x_11 = NULL;
  if(match_cons(t, sym__2))
    {
      v_11 = ATgetArgument(t, 0);
      x_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(o_1, v_11, x_11, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm y_11 = NULL;
  if(match_cons(t, sym__2))
    {
      y_11 = ATgetArgument(t, 0);
      if((y_11 != ATgetArgument(t, 1)))
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
  ATerm n_12 = NULL,o_12 = NULL;
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(r_1, n_12, o_12, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm p_12 = NULL;
  if(match_cons(t, sym__2))
    {
      p_12 = ATgetArgument(t, 0);
      if((p_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm f_91 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm q_18 (ATerm t)
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_91(t);
        ;
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        {
          ATerm f_11 = t;
          int g_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_17 = NULL,k_17 = NULL,p_11 = NULL,q_11 = NULL;
              j_17 = t;
              t = e_91(t);
              k_17 = t;
              t = j_17;
              {
                ATerm i_1 (ATerm t)
                {
                  ATerm m_17 = NULL;
                  t = q_18(t);
                  m_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_17, k_17);
                  t = diff_0_0(t);
                  return(t);
                }
                t = f_91(i_1, q_18, l_1, t);
                q_11 = t;
                t = SSL_explode_term(q_11);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_11 = ATgetArgument(t, 0);
                    p_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_11;
                t = foldr_3_0(m_1, n_1, _id, t);
              }
              ;
              LocalPopChoice(g_11);
            }
          else
            {
              t = f_11;
              {
                ATerm f_12 = NULL,g_12 = NULL;
                g_12 = t;
                t = SSL_explode_term(g_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_11 = ATgetArgument(t, 0);
                    f_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_12;
                t = foldr_3_0(p_1, q_1, q_18, t);
              }
            }
        }
      }
    return(t);
  }
  t = q_18(t);
  return(t);
}
ATerm y_5 (ATerm u_33, ATerm v_33, ATerm t)
{
  ATerm r_18 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_33, v_33);
  t = x_6(u_33, v_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_18 = ATgetFirst((ATermList) t);
      {
        ATerm j_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_18;
  return(t);
}
ATerm at_end_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  ATerm y_19 (ATerm t)
  {
    ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
    x_19 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_19 = ATgetFirst((ATermList) t);
        w_19 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_13 = NULL,e_13 = NULL,w_1 = NULL;
          t = SSLgetAnnotations(x_19);
          b_13 = t;
          t = w_19;
          t = y_19(t);
          e_13 = t;
          t = (ATerm) ATinsert(CheckATermList(e_13), v_19);
          w_1 = t;
          t = SSLsetAnnotations(w_1, b_13);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_19;
        t = n_82(t);
      }
    return(t);
  }
  t = y_19(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
  d_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_19;
    }
  else
    {
      ATerm s_1 (ATerm t)
      {
        t = not_null(f_19);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_19 = ATgetFirst((ATermList) t);
          if(((f_19 != NULL) && (f_19 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_19;
      t = at_end_1_0(s_1, t);
    }
  return(t);
}
ATerm k_20 (ATerm c_20, ATerm t)
{
  ATerm d_20 = NULL;
  t = SSL_explode_term(c_20);
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_20;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  h_20 = t;
  if(match_cons(t, sym__2))
    {
      f_20 = ATgetArgument(t, 0);
      g_20 = ATgetArgument(t, 1);
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 (ATerm t)
            {
              t = g_20;
              return(t);
            }
            t = f_20;
            t = at_end_1_0(u_1, t);
            ;
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            t = k_20(h_20, t);
          }
      }
    }
  else
    {
      t = k_20(h_20, t);
    }
  return(t);
}
ATerm a_6 (ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm c_28, ATerm b_28, ATerm t)
{
  t = o_84(t);
  {
    ATerm v_1 (ATerm t)
    {
      ATerm l_20 = NULL;
      l_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_28, l_20);
      t = n_84(t);
      return(t);
    }
    t = fetch_1_0(v_1, t);
    t = b_28;
  }
  return(t);
}
ATerm b_6 (ATerm f_84 (ATerm), ATerm w_27, ATerm v_27, ATerm t)
{
  ATerm f_21 (ATerm t)
  {
    ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
    w_20 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_20;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_20 = ATgetFirst((ATermList) t);
            y_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_11 = t;
          int o_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_20;
              {
                ATerm x_1 (ATerm t)
                {
                  t = v_27;
                  return(t);
                }
                t = a_6(f_84, x_1, x_20, y_20, t);
                t = f_21(t);
              }
              ;
              LocalPopChoice(o_11);
            }
          else
            {
              t = n_11;
              {
                ATerm z_13 = NULL,e_14 = NULL,y_1 = NULL;
                t = SSLgetAnnotations(w_20);
                z_13 = t;
                t = y_20;
                t = f_21(t);
                e_14 = t;
                t = (ATerm) ATinsert(CheckATermList(e_14), x_20);
                y_1 = t;
                t = SSLsetAnnotations(y_1, z_13);
              }
            }
        }
      }
    return(t);
  }
  t = w_27;
  t = f_21(t);
  return(t);
}
ATerm genzip_4_0 (ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm t)
{
  ATerm p_21 (ATerm t)
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_80(t);
        ;
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        {
          ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,c_2 = NULL;
          t = j_80(t);
          m_21 = t;
          if(match_cons(t, sym__2))
            {
              i_21 = ATgetArgument(t, 0);
              j_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_21);
          h_21 = t;
          t = i_21;
          t = l_80(t);
          k_21 = t;
          t = j_21;
          t = p_21(t);
          l_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_21, l_21);
          c_2 = t;
          t = SSLsetAnnotations(c_2, h_21);
          t = k_80(t);
        }
      }
    return(t);
  }
  t = p_21(t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_11 = ATgetArgument(t, 0);
      if(((ATgetType(t_11) != AT_LIST) || !(ATisEmpty(t_11))))
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
ATerm a_2 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_11 = ATgetArgument(t, 0);
      if(((ATgetType(w_11) == AT_LIST) && !(ATisEmpty(w_11))))
        {
          w_21 = ATgetFirst((ATermList) w_11);
          x_21 = (ATerm) ATgetNext((ATermList) w_11);
        }
      else
        _fail(t);
      {
        ATerm z_11 = ATgetArgument(t, 1);
        if(((ATgetType(z_11) == AT_LIST) && !(ATisEmpty(z_11))))
          {
            y_21 = ATgetFirst((ATermList) z_11);
            z_21 = (ATerm) ATgetNext((ATermList) z_11);
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
ATerm b_2 (ATerm t)
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
ATerm g_6 (ATerm u_584, ATerm z_584, ATerm v_54, ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL;
  t = SSL_explode_term(z_584);
  if(match_cons(t, sym__2))
    {
      r_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(u_584);
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
  t = genzip_4_0(z_1, a_2, b_2, _id, t);
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_21, v_54);
  t = conc_0_0(t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm r_22 = NULL;
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, r_22);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,x_22 = NULL,f_2 = NULL;
  x_22 = t;
  if(match_cons(t, sym__2))
    {
      t_22 = ATgetArgument(t, 0);
      u_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_22);
  s_22 = t;
  t = u_22;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_22, u_22);
  f_2 = t;
  t = SSLsetAnnotations(f_2, s_22);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
  r_23 = t;
  if(match_cons(t, sym__2))
    {
      s_23 = ATgetArgument(t, 0);
      t_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_23;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_23 = ATgetFirst((ATermList) t);
      v_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_24(s_23, t_23, r_23, t);
            ;
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_23), u_23), v_23);
          }
      }
    }
  else
    {
      t = f_24(s_23, t_23, r_23, t);
    }
  return(t);
}
ATerm f_24 (ATerm z_22, ATerm a_23, ATerm b_23, ATerm t)
{
  ATerm c_23 = NULL,f_23 = NULL,l_2 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL;
  t = SSLgetAnnotations(b_23);
  c_23 = t;
  t = a_23;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_23 = ATgetFirst((ATermList) t);
      l_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_23;
  if(match_cons(t, sym__2))
    {
      j_23 = ATgetArgument(t, 0);
      k_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_23;
        if((j_23 != t))
          {
            _fail(t);
          }
        t = l_23;
        ;
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        t = a_23;
        t = g_6(j_23, k_23, l_23, t);
      }
    f_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_22, f_23);
    l_2 = t;
    t = SSLsetAnnotations(l_2, c_23);
  }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm e_24 = NULL;
  if(match_cons(t, sym__2))
    {
      e_24 = ATgetArgument(t, 0);
      if((e_24 != ATgetArgument(t, 1)))
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
  ATerm e_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_2, j_2, m_2, t);
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = e_12;
      {
        ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
        z_23 = t;
        if(match_cons(t, sym__2))
          {
            a_24 = ATgetArgument(t, 0);
            b_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_23;
        t = b_6(n_2, a_24, b_24, t);
      }
    }
  return(t);
}
ATerm i_6 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm j_55, ATerm g_55, ATerm n_55, ATerm k_55, ATerm h_55, ATerm i_55, ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_55, k_55);
  t = c_105(t);
  g_24 = t;
  t = d_105(t);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_24, n_55);
  t = diff_0_0(t);
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_24, g_55);
  t = conc_0_0(t);
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_24, n_55);
  t = conc_0_0(t);
  k_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_55, g_24, h_55);
  t = e_105(t);
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym__5, j_24, k_24, k_55, l_24, i_55);
  return(t);
}
ATerm GnNext_3_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm i_12 = ATgetArgument(t, 0);
      if(((ATgetType(i_12) == AT_LIST) && !(ATisEmpty(i_12))))
        {
          n_24 = ATgetFirst((ATermList) i_12);
          o_24 = (ATerm) ATgetNext((ATermList) i_12);
        }
      else
        _fail(t);
      p_24 = ATgetArgument(t, 1);
      q_24 = ATgetArgument(t, 2);
      r_24 = ATgetArgument(t, 3);
      s_24 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = i_6(c_105, d_105, e_105, n_24, o_24, p_24, q_24, r_24, s_24, t);
  return(t);
}
ATerm while_not_2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm t)
{
  ATerm t_24 (ATerm t)
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_93(t);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = p_93(t);
        t = t_24(t);
      }
    return(t);
  }
  t = t_24(t);
  return(t);
}
ATerm for_3_0 (ATerm r_93 (ATerm), ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm t)
{
  t = r_93(t);
  t = while_not_2_0(s_93, t_93, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  if(match_cons(t, sym__3))
    {
      x_24 = ATgetArgument(t, 0);
      y_24 = ATgetArgument(t, 1);
      z_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, x_24, x_24, y_24, z_24, (ATerm) ATempty);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm l_12 = ATgetArgument(t, 0);
      if(((ATgetType(l_12) != AT_LIST) || !(ATisEmpty(l_12))))
        _fail(t);
      {
        ATerm m_12 = ATgetArgument(t, 1);
      }
      {
        ATerm q_12 = ATgetArgument(t, 2);
      }
      c_25 = ATgetArgument(t, 3);
      d_25 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_25, d_25);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t)
{
  ATerm w_24 = NULL;
  ATerm r_2 (ATerm t)
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(z_104, a_105, b_105, t);
        ;
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        {
          ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
          if(match_cons(t, sym__5))
            {
              f_25 = ATgetArgument(t, 0);
              i_25 = ATgetArgument(t, 1);
              m_25 = ATgetArgument(t, 2);
              n_25 = ATgetArgument(t, 3);
              o_25 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = f_25;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_25 = ATgetFirst((ATermList) t);
              h_25 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, h_25, i_25, m_25, n_25, (ATerm) ATinsert(CheckATermList(o_25), g_25));
        }
      }
    return(t);
  }
  t = for_3_0(o_2, q_2, r_2, t);
  if(match_cons(t, sym__2))
    {
      w_24 = ATgetArgument(t, 0);
      {
        ATerm t_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_24;
  return(t);
}
ATerm l_6 (ATerm k_88 (ATerm), ATerm b_33, ATerm z_32, ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,q_26 = NULL;
  h_26 = t;
  t = k_88(t);
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_26, b_33, z_32);
  t = y_6(e_26, b_33, z_32, t);
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_26 = NULL;
        t = term_g_9;
        r_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_26, term_g_9);
        t = x_6(e_26, r_26, t);
        ;
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_26 = ATgetFirst((ATermList) t);
        g_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_9;
    i_26 = t;
    t = (ATerm) ATinsert(CheckATermList(g_26), (ATerm) ATinsert(CheckATermList(f_26), b_33));
    q_26 = t;
    t = SSL_table_put(e_26, i_26, q_26);
    t = h_26;
  }
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_w_12;
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  u_26 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      t_26 = ATgetArgument(t, 0);
      {
        ATerm x_12 = ATgetArgument(t, 1);
      }
      {
        ATerm y_12 = ATgetArgument(t, 2);
      }
      {
        ATerm z_12 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_26, (ATerm) ATempty);
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_13, u_26);
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_26, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_a_13, u_26));
  t = l_6(s_2, w_26, x_26, t);
  t = v_26;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm l_14 = NULL,o_14 = NULL,p_14 = NULL,r_14 = NULL;
  if(match_cons(t, sym__2))
    {
      l_14 = ATgetArgument(t, 0);
      {
        ATerm c_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_14, (ATerm) ATempty);
  p_14 = t;
  t = term_w_12;
  r_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_12, (ATerm) ATmakeAppl(sym__2, l_14, (ATerm) ATempty));
  t = y_5(r_14, p_14, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm d_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_13) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      o_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_14;
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = free_vars_3_0(a_3, b_3, sboundin_3_0, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm f_13 = ATgetArgument(t, 0);
      z_29 = ATgetArgument(t, 1);
      a_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_30), z_29);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm d_27 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      d_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_27);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
  e_27 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_27 = ATgetArgument(t, 0);
      g_27 = ATgetArgument(t, 1);
      t = e_27;
      t = u_5(f_27, g_27, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_27 = ATgetArgument(t, 0);
          g_27 = ATgetArgument(t, 1);
          h_27 = ATgetArgument(t, 2);
          t = g_27;
          t = map_1_0(c_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              f_27 = ATgetArgument(t, 0);
              g_27 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, f_27);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  f_27 = ATgetArgument(t, 0);
                  g_27 = ATgetArgument(t, 1);
                  h_27 = ATgetArgument(t, 2);
                  i_27 = ATgetArgument(t, 3);
                  t = g_27;
                  t = map_1_0(e_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_27 = ATgetArgument(t, 0);
                      g_27 = ATgetArgument(t, 1);
                      h_27 = ATgetArgument(t, 2);
                      i_27 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_27;
                  t = map_1_0(g_3, t);
                }
            }
        }
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm k_28 = NULL;
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_28 = ATgetArgument(t, 0);
          {
            ATerm i_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_13);
      t = k_28;
    }
  else
    {
      t = g_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_28;
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm d_29 = NULL;
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_29 = ATgetArgument(t, 0);
          {
            ATerm l_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_13);
      t = d_29;
    }
  else
    {
      t = j_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_29;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm w_29 = NULL;
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_29 = ATgetArgument(t, 0);
          {
            ATerm o_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_13);
      t = w_29;
    }
  else
    {
      t = m_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_29;
    }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm c_27 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_p_13), c_27, (ATerm) ATempty);
  t = graph_nodes_roots_3_0(v_2, y_2, z_2, t);
  return(t);
}
ATerm Cons_2_0 (ATerm z_60 (ATerm), ATerm a_61 (ATerm), ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,i_30 = NULL,u_4 = NULL;
  i_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_30 = ATgetFirst((ATermList) t);
      d_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_30);
  b_30 = t;
  t = c_30;
  t = z_60(t);
  e_30 = t;
  t = d_30;
  t = a_61(t);
  f_30 = t;
  t = (ATerm) ATinsert(CheckATermList(f_30), e_30);
  u_4 = t;
  t = SSLsetAnnotations(u_4, b_30);
  return(t);
}
ATerm o_6 (ATerm d_44, ATerm e_44, ATerm t)
{
  ATerm j_30 = NULL;
  t = SSL_fputc(d_44, e_44);
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_30);
  return(t);
}
ATerm p_6 (ATerm r_47, ATerm s_47, ATerm t)
{
  ATerm m_30 = NULL;
  t = SSL_write_term_to_stream_text(r_47, s_47);
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_30);
  return(t);
}
ATerm r_6 (ATerm w_97 (ATerm), ATerm w_457, ATerm v_47, ATerm t)
{
  ATerm n_30 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_457, term_q_13);
  t = u_6(t);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_30, v_47);
  t = w_97(t);
  t = fclose_0_0(t);
  t = v_47;
  return(t);
}
ATerm q_6 (ATerm n_47, ATerm o_47, ATerm t)
{
  ATerm o_30 = NULL;
  t = SSL_write_term_to_stream_baf(n_47, o_47);
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_30);
  return(t);
}
ATerm n_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm g_15 = NULL,i_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_13 = ATgetArgument(t, 0);
      if(match_cons(r_13, sym_Stream_1))
        {
          g_15 = ATgetArgument(r_13, 0);
        }
      else
        _fail(t);
      i_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(g_15, i_15, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm h_16 = NULL,j_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_13 = ATgetArgument(t, 0);
      if(match_cons(s_13, sym_Stream_1))
        {
          o_16 = ATgetArgument(s_13, 0);
        }
      else
        _fail(t);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(o_16, p_16, t);
  h_16 = t;
  t = term_t_13;
  j_16 = t;
  t = h_16;
  if(match_cons(t, sym_Stream_1))
    {
      n_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_13, h_16);
  t = o_6(j_16, n_16, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,y_30 = NULL,a_31 = NULL,c_31 = NULL,d_31 = NULL,f_31 = NULL,g_31 = NULL,l_32 = NULL,m_32 = NULL,y_4 = NULL,x_4 = NULL;
  u_30 = t;
  if(match_cons(t, sym__2))
    {
      d_31 = ATgetArgument(t, 0);
      f_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_30);
  c_31 = t;
  t = d_31;
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((t_30 != NULL) && (t_30 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(i_3, t);
        ;
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        t = term_w_13;
        t_30 = t;
      }
    g_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_31, f_31);
    x_4 = t;
    t = SSLsetAnnotations(x_4, c_31);
    t = u_30;
    if(match_cons(t, sym__2))
      {
        w_30 = ATgetArgument(t, 0);
        y_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_30);
    v_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_30, (ATerm) ATmakeAppl(sym__2, not_null(t_30), y_30));
    y_4 = t;
    t = SSLsetAnnotations(y_4, v_30);
    a_31 = t;
    if(match_cons(t, sym__2))
      {
        l_32 = ATgetArgument(t, 0);
        m_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm x_13 = t;
      int y_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_14 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,z_4 = NULL;
          t = SSLgetAnnotations(a_31);
          w_14 = t;
          t = l_32;
          t = fetch_1_0(n_3, t);
          b_15 = t;
          t = m_32;
          if(match_cons(t, sym__2))
            {
              d_15 = ATgetArgument(t, 0);
              e_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_6(c_4, d_15, e_15, t);
          c_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_15, c_15);
          z_4 = t;
          t = SSLsetAnnotations(z_4, w_14);
          ;
          LocalPopChoice(y_13);
        }
      else
        {
          t = x_13;
          {
            ATerm s_15 = NULL,x_15 = NULL,z_15 = NULL,g_16 = NULL,b_5 = NULL;
            t = SSLgetAnnotations(a_31);
            s_15 = t;
            t = m_32;
            if(match_cons(t, sym__2))
              {
                z_15 = ATgetArgument(t, 0);
                g_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_6(d_4, z_15, g_16, t);
            x_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_32, x_15);
            b_5 = t;
            t = SSLsetAnnotations(b_5, s_15);
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
ATerm apply_strategy_1_0 (ATerm y_100 (ATerm), ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,e_33 = NULL;
  e_33 = t;
  t = dtime_0_0(t);
  t = e_33;
  t = y_100(t);
  s_32 = t;
  t = dtime_0_0(t);
  p_32 = t;
  t = s_32;
  if(match_cons(t, sym__2))
    {
      q_32 = ATgetArgument(t, 0);
      r_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_32), (ATerm) ATmakeAppl(sym_Runtime_1, p_32)), r_32);
  return(t);
}
ATerm q_34 (ATerm d_34, ATerm t)
{
  t = SSL_fclose(d_34);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL;
  j_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_34 = ATgetArgument(t, 0);
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_34);
            ;
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            t = q_34(j_34, t);
          }
      }
    }
  else
    {
      t = q_34(j_34, t);
    }
  return(t);
}
ATerm s_6 (ATerm t_47, ATerm t)
{
  t = SSL_read_term_from_stream(t_47);
  return(t);
}
ATerm t_6 (ATerm f_44, ATerm g_44, ATerm t)
{
  ATerm t_34 = NULL;
  t = SSL_fopen(f_44, g_44);
  t_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_34);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_34 = NULL;
  t = SSL_stdin_stream();
  u_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_34);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_34 = NULL;
  t = SSL_stdout_stream();
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_34);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_34 = NULL;
  t = SSL_stderr_stream();
  w_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_34);
  return(t);
}
ATerm y_36 (ATerm e_35, ATerm t)
{
  ATerm f_35 = NULL;
  t = SSL_explode_term(e_35);
  if(match_cons(t, sym__2))
    {
      ATerm c_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_14 = ATgetArgument(t, 1);
        if(((ATgetType(g_14) == AT_LIST) && !(ATisEmpty(g_14))))
          {
            f_35 = ATgetFirst((ATermList) g_14);
            {
              ATerm h_14 = (ATerm) ATgetNext((ATermList) g_14);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_35;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_35;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_35;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_35;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm z_36 (ATerm k_35, ATerm l_35, ATerm p_35, ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,v_35 = NULL,y_35 = NULL,q_5 = NULL;
  t = SSLgetAnnotations(p_35);
  v_35 = t;
  t = k_35;
  if(match_cons(t, sym_Path_1))
    {
      y_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_35, l_35);
  q_5 = t;
  t = SSLsetAnnotations(q_5, v_35);
  if(match_cons(t, sym__2))
    {
      q_35 = ATgetArgument(t, 0);
      r_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(q_35, r_35, t);
  return(t);
}
ATerm a_37 (ATerm a_36, ATerm b_36, ATerm c_36, ATerm t)
{
  ATerm e_36 = NULL,h_36 = NULL,j_36 = NULL,p_36 = NULL,e_8 = NULL;
  t = SSLgetAnnotations(c_36);
  j_36 = t;
  t = SSL_is_string(a_36);
  p_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_36, b_36);
  e_8 = t;
  t = SSLsetAnnotations(e_8, j_36);
  if(match_cons(t, sym__2))
    {
      e_36 = ATgetArgument(t, 0);
      h_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(e_36, h_36, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm s_36 = NULL,v_36 = NULL,x_36 = NULL;
  s_36 = t;
  if(match_cons(t, sym__2))
    {
      v_36 = ATgetArgument(t, 0);
      x_36 = ATgetArgument(t, 1);
      {
        ATerm i_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_36(s_36, t);
            ;
            LocalPopChoice(j_14);
          }
        else
          {
            t = i_14;
            {
              ATerm q_14 = t;
              int s_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_36(v_36, x_36, s_36, t);
                  ;
                  LocalPopChoice(s_14);
                }
              else
                {
                  t = q_14;
                  t = a_37(v_36, x_36, s_36, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_36(s_36, t);
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_t_14;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,g_37 = NULL;
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_37 = NULL;
      h_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_37, term_x_14);
      t = u_6(t);
      ;
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      t = debug_1_0(e_4, t);
      _fail(t);
    }
  d_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(g_37, t);
  c_37 = t;
  t = d_37;
  t = fclose_0_0(t);
  t = c_37;
  return(t);
}
ATerm fetch_1_0 (ATerm h_82 (ATerm), ATerm t)
{
  ATerm q_38 (ATerm t)
  {
    ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
    n_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_38 = ATgetFirst((ATermList) t);
        p_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_14 = t;
      int z_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_17 = NULL,u_17 = NULL,k_8 = NULL;
          t = SSLgetAnnotations(n_38);
          q_17 = t;
          t = o_38;
          t = h_82(t);
          u_17 = t;
          t = (ATerm) ATinsert(CheckATermList(p_38), u_17);
          k_8 = t;
          t = SSLsetAnnotations(k_8, q_17);
          ;
          LocalPopChoice(z_14);
        }
      else
        {
          t = y_14;
          {
            ATerm e_18 = NULL,l_18 = NULL,n_8 = NULL;
            t = SSLgetAnnotations(n_38);
            e_18 = t;
            t = p_38;
            t = q_38(t);
            l_18 = t;
            t = (ATerm) ATinsert(CheckATermList(l_18), o_38);
            n_8 = t;
            t = SSLsetAnnotations(n_8, e_18);
          }
        }
    }
    return(t);
  }
  t = q_38(t);
  return(t);
}
ATerm n_6 (ATerm t_41, ATerm u_41, ATerm t)
{
  t = SSL_strcat(t_41, u_41);
  return(t);
}
ATerm debug_1_0 (ATerm u_97 (ATerm), ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,y_38 = NULL;
  t_38 = t;
  t = u_97(t);
  u_38 = t;
  t = term_b_8;
  v_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_38), u_38);
  y_38 = t;
  t = SSL_printnl(v_38, y_38);
  t = t_38;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm a_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = a_15;
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
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_39 = NULL;
      f_39 = t;
      t = SSL_is_string(f_39);
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      {
        ATerm m_15 = t;
        int n_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_4, t);
            ;
            LocalPopChoice(n_15);
          }
        else
          {
            t = m_15;
            {
              ATerm m_39 = NULL,t_39 = NULL,u_39 = NULL;
              m_39 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_39 = ATgetArgument(t, 0);
                  t = t_39;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_39 = ATgetArgument(t, 0);
                      t = t_39;
                      {
                        ATerm o_15 = t;
                        int p_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_15);
                          }
                        else
                          {
                            t = o_15;
                            t = debug_1_0(g_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm z_39 = NULL,a_40 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_39 = ATgetArgument(t, 0);
                          u_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_39;
                      t = eval_config_0_0(t);
                      z_39 = t;
                      t = u_39;
                      t = eval_config_0_0(t);
                      a_40 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_39, a_40);
                      t = n_6(z_39, a_40, t);
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
  ATerm h_40 = NULL,i_40 = NULL;
  h_40 = t;
  t = term_q_15;
  i_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_15, h_40);
  t = x_6(i_40, h_40, t);
  {
    ATerm r_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_40 = NULL,k_40 = NULL;
        t = eval_config_0_0(t);
        j_40 = t;
        t = term_q_15;
        k_40 = t;
        t = SSL_table_put(k_40, h_40, j_40);
        t = j_40;
        ;
        LocalPopChoice(t_15);
      }
    else
      {
        t = r_15;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_99 (ATerm), ATerm t)
{
  ATerm p_40 = NULL;
  p_40 = t;
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_40 = NULL;
        t = term_w_15;
        t = get_config_0_0(t);
        r_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_40, term_y_15);
        t = geq_0_0(t);
        t = p_40;
        t = h_99(t);
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        t = p_40;
      }
  }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm u_40 = NULL;
  u_40 = t;
  if(match_string(t, "-k"))
    {
      t = u_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_40;
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
  v_40 = t;
  t = SSL_string_to_int(v_40);
  w_40 = t;
  t = term_a_16;
  x_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_16, w_40);
  t = a_7(x_40, w_40, t);
  t = v_40;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_b_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, j_4, k_4, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm z_40 = NULL;
  z_40 = t;
  if(match_string(t, "-S"))
    {
      t = z_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_40;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm c_41 = NULL,f_41 = NULL;
  t = term_w_15;
  c_41 = t;
  t = term_c_16;
  f_41 = t;
  t = term_d_16;
  t = a_7(c_41, f_41, t);
  t = term_e_16;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_l_16;
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
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
  g_41 = t;
  t = SSL_string_to_int(g_41);
  h_41 = t;
  t = term_w_15;
  i_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_15, h_41);
  t = a_7(i_41, h_41, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_41);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_m_16;
  return(t);
}
ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm m_41 = NULL,p_41 = NULL;
  t = term_q_16;
  m_41 = t;
  t = term_x_7;
  p_41 = t;
  t = term_r_16;
  t = a_7(m_41, p_41, t);
  t = term_t_16;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_u_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_4, n_4, o_4, t);
      ;
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      {
        ATerm a_17 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_4, r_4, s_4, t);
            ;
            LocalPopChoice(b_17);
          }
        else
          {
            t = a_17;
            t = Option_3_0(t_4, v_4, w_4, t);
          }
      }
    }
  return(t);
}
ATerm a_7 (ATerm u_48, ATerm v_48, ATerm t)
{
  ATerm s_41 = NULL;
  t = term_q_15;
  s_41 = t;
  t = SSL_table_put(s_41, u_48, v_48);
  t = (ATerm) ATmakeAppl(sym__3, term_q_15, u_48, v_48);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_42 = NULL,e_42 = NULL,f_42 = NULL;
      t = term_x_7;
      t = h_0(t);
      b_42 = t;
      t = term_c_17;
      e_42 = t;
      t = term_f_17;
      f_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_17, term_f_17, b_42);
      t = y_6(e_42, f_42, b_42, t);
      _fail(t);
    }
  else
    {
      ATerm o_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_41 = ATgetFirst((ATermList) t);
          a_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_41;
      t = d_0(t);
      t = term_x_7;
      t = g_0(t);
      o_42 = t;
      t = (ATerm) ATinsert(CheckATermList(a_42), o_42);
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm q_42 = NULL;
  q_42 = t;
  if(match_string(t, "-o"))
    {
      t = q_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_42;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL;
  r_42 = t;
  t = term_g_17;
  s_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_17, r_42);
  t = a_7(s_42, r_42, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_42);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_h_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, c_5, d_5, t);
  return(t);
}
ATerm y_6 (ATerm j_33, ATerm k_33, ATerm i_33, ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
  u_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_33, k_33);
  {
    ATerm i_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_17 = ATgetArgument(t, 0);
            ATerm o_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_33, k_33);
        t = x_6(j_33, k_33, t);
        ;
        LocalPopChoice(l_17);
      }
    else
      {
        t = i_17;
        t = (ATerm) ATempty;
      }
    v_42 = t;
    t = (ATerm) ATinsert(CheckATermList(v_42), i_33);
    w_42 = t;
    t = SSL_table_put(j_33, k_33, w_42);
    t = u_42;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL,i_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_43 = NULL,m_43 = NULL,n_43 = NULL;
      t = term_x_7;
      t = p_0(t);
      j_43 = t;
      t = term_c_17;
      m_43 = t;
      t = term_f_17;
      n_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_17, term_f_17, j_43);
      t = y_6(m_43, n_43, j_43, t);
      _fail(t);
    }
  else
    {
      ATerm v_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_43 = ATgetFirst((ATermList) t);
          e_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_43;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_43 = ATgetFirst((ATermList) t);
          i_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_43;
      t = m_0(t);
      t = f_43;
      t = n_0(t);
      v_43 = t;
      t = (ATerm) ATinsert(CheckATermList(i_43), v_43);
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm y_43 = NULL;
  y_43 = t;
  if(match_string(t, "-i"))
    {
      t = y_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_43;
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL;
  z_43 = t;
  t = term_p_17;
  a_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_17, z_43);
  t = a_7(a_44, z_43, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_43);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_r_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_5, f_5, h_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,j_44 = NULL,k_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_7;
  t = whoami_0_0(t);
  b_44 = t;
  t = term_b_8;
  j_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_17), b_44);
  k_44 = t;
  t = SSL_printnl(j_44, k_44);
  t = term_f_8;
  c_44 = t;
  t = SSL_exit(c_44);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_17;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_6 (ATerm n_31, ATerm o_31, ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_31, o_31);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      t = SSL_addr(n_31, o_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
  m_44 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_44;
      t = y_86(t);
    }
  else
    {
      ATerm r_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_44 = ATgetFirst((ATermList) t);
          o_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_44;
      t = foldr_2_0(y_86, z_86, t);
      r_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_44, r_44);
      t = z_86(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_c_16;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  if(match_cons(t, sym__2))
    {
      a_21 = ATgetArgument(t, 0);
      b_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(a_21, b_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_44 = NULL,a_20 = NULL,b_20 = NULL;
  t = times_0_0(t);
  b_20 = t;
  t = SSL_explode_term(b_20);
  if(match_cons(t, sym__2))
    {
      ATerm x_17 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_20;
  t = foldr_2_0(i_5, m_5, t);
  u_44 = t;
  t = SSL_TicksToSeconds(u_44);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL;
  f_45 = t;
  if(match_cons(t, sym__2))
    {
      g_45 = ATgetArgument(t, 0);
      h_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_45;
        if((g_45 != t))
          {
            _fail(t);
          }
        t = f_45;
        ;
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
        t = (ATerm) ATmakeAppl(sym__2, g_45, h_45);
        {
          ATerm a_18 = t;
          int b_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_45, h_45);
              ;
              LocalPopChoice(b_18);
            }
          else
            {
              t = a_18;
              t = SSL_gtr(g_45, h_45);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_45, h_45);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_99 (ATerm), ATerm t)
{
  ATerm l_45 = NULL;
  l_45 = t;
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_45 = NULL;
        t = term_w_15;
        t = get_config_0_0(t);
        n_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_45, term_f_8);
        t = geq_0_0(t);
        t = l_45;
        t = g_99(t);
        ;
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
        t = l_45;
      }
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,s_45 = NULL,t_45 = NULL;
  t = run_time_0_0(t);
  p_45 = t;
  t = term_x_7;
  t = whoami_0_0(t);
  q_45 = t;
  t = term_b_8;
  s_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), p_45), term_f_18), q_45);
  t_45 = t;
  t = SSL_printnl(s_45, t_45);
  t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), p_45), term_f_18), q_45));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_45 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_16;
  u_45 = t;
  t = SSL_exit(u_45);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL;
  d_46 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_46;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_46 = ATgetArgument(t, 0);
          {
            ATerm j_22 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(d_46);
            j_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_46);
            t_8 = t;
            t = SSLsetAnnotations(t_8, j_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_46;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_101 (ATerm), ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      t = fetch_1_0(o_5, t);
    }
  t = w_101(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_46 = ATgetFirst((ATermList) t);
      h_46 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_46 = NULL,m_46 = NULL;
        ATerm r_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_46)), not_null(m_46));
          return(t);
        }
        t = h_46;
        t = l_0(t);
        if(((l_46 != NULL) && (l_46 != t)))
          _fail(t);
        else
          l_46 = t;
        t = g_46;
        t = j_0(t);
        if(((m_46 != NULL) && (m_46 != t)))
          _fail(t);
        else
          m_46 = t;
        t = h_46;
        t = reverse_acc_2_0(j_0, r_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_7;
      t = l_0(t);
    }
  return(t);
}
ATerm x_6 (ATerm a_35, ATerm b_35, ATerm t)
{
  t = SSL_table_get(a_35, b_35);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL,o_9 = NULL;
  s_46 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_46);
  q_46 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_46);
  o_9 = t;
  t = SSLsetAnnotations(o_9, q_46);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm u_46 = NULL;
  u_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_46), term_k_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL;
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
      t = fetch_1_0(s_5, t);
    }
  t = term_o_18;
  t = echo_0_0(t);
  t = term_c_17;
  o_46 = t;
  t = term_f_17;
  p_46 = t;
  t = term_p_18;
  t = x_6(o_46, p_46, t);
  t = reverse_acc_2_0(_id, t_5, t);
  t = map_1_0(v_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
  w_46 = t;
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_46;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_18 = ATgetFirst((ATermList) t);
                ATerm v_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_46;
          }
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = (ATerm) ATinsert(ATempty, w_46);
      }
    x_46 = t;
    t = term_w_13;
    y_46 = t;
    t = SSL_printnl(y_46, x_46);
    t = w_46;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL;
  t = term_w_18;
  c_47 = t;
  t = term_x_7;
  d_47 = t;
  t = term_x_18;
  t = a_7(c_47, d_47, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_y_18;
  return(t);
}
ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL;
  t = term_w_18;
  g_47 = t;
  t = term_x_7;
  h_47 = t;
  t = term_x_18;
  t = a_7(g_47, h_47, t);
  t = term_z_18;
  e_47 = t;
  t = term_x_7;
  f_47 = t;
  t = term_a_19;
  t = a_7(e_47, f_47, t);
  t = term_b_19;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_c_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_5, z_5, e_6, t);
      ;
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      t = Option_3_0(f_6, k_6, m_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_103 (ATerm), ATerm t)
{
  ATerm m_47 = NULL,p_47 = NULL,q_47 = NULL,w_47 = NULL,y_47 = NULL,z_47 = NULL,s_9 = NULL;
  m_47 = t;
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_19;
        t = z_103(t);
        ;
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
      }
    t = m_47;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_47 = ATgetFirst((ATermList) t);
        w_47 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_47);
    p_47 = t;
    t = term_t_17;
    z_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_17, q_47);
    t = a_7(z_47, q_47, t);
    t = w_47;
    {
      ATerm j_48 (ATerm t)
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_19 = t;
            int q_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_48 = NULL;
                c_48 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_48;
                ;
                LocalPopChoice(q_19);
              }
            else
              {
                t = n_19;
                t = z_103(t);
                t = Cons_2_0(_id, j_48, t);
              }
            ;
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            {
              ATerm f_48 = NULL,g_48 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_48 = ATgetFirst((ATermList) t);
                  g_48 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_48), (ATerm) ATmakeAppl(sym_Undefined_1, f_48));
            }
          }
        return(t);
      }
      t = j_48(t);
      y_47 = t;
      t = (ATerm) ATinsert(CheckATermList(y_47), (ATerm) ATmakeAppl(sym_Program_1, q_47));
      s_9 = t;
      t = SSLsetAnnotations(s_9, p_47);
    }
  }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm x_48 = NULL;
  x_48 = t;
  if(match_string(t, "--help"))
    {
      t = x_48;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_48;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_48;
        }
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL;
  t = term_j_18;
  y_48 = t;
  t = term_x_7;
  z_48 = t;
  t = term_r_19;
  t = a_7(y_48, z_48, t);
  t = term_s_19;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm e_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_103 (ATerm), ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,w_48 = NULL;
  q_48 = t;
  t = term_c_17;
  s_48 = t;
  t = term_f_17;
  t_48 = t;
  t = (ATerm) ATempty;
  w_48 = t;
  t = SSL_table_put(s_48, t_48, w_48);
  t = q_48;
  {
    ATerm w_6 (ATerm t)
    {
      ATerm u_19 = t;
      int z_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_103(t);
          ;
          LocalPopChoice(z_19);
        }
      else
        {
          t = u_19;
          {
            ATerm e_20 = t;
            int i_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_7, c_7, d_7, t);
                ;
                LocalPopChoice(i_20);
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
    t = parse_options_p__1_0(w_6, t);
    {
      ATerm j_20 = t;
      int m_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_49 = NULL;
          l_49 = t;
          {
            ATerm n_20 = t;
            int o_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_22 = NULL;
                t = l_49;
                {
                  ATerm p_20 = t;
                  int q_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_j_18;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(q_20);
                    }
                  else
                    {
                      t = p_20;
                      t = fetch_1_0(e_7, t);
                    }
                  t = l_49;
                  t = default_system_usage_0_0(t);
                  t = term_c_16;
                  q_22 = t;
                  t = SSL_exit(q_22);
                }
                ;
                LocalPopChoice(o_20);
              }
            else
              {
                t = n_20;
                {
                  ATerm u_24 = NULL;
                  t = term_w_18;
                  t = get_config_0_0(t);
                  t = l_49;
                  t = default_system_about_0_0(t);
                  t = term_c_16;
                  u_24 = t;
                  t = SSL_exit(u_24);
                }
              }
          }
          ;
          LocalPopChoice(m_20);
        }
      else
        {
          t = j_20;
          {
            ATerm r_20 = t;
            int s_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL;
                ATerm g_7 (ATerm t)
                {
                  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,u_9 = NULL;
                  r_49 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      q_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_49);
                  p_49 = t;
                  t = q_49;
                  if(((o_48 != NULL) && (o_48 != t)))
                    _fail(t);
                  else
                    o_48 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, q_49);
                  u_9 = t;
                  t = SSLsetAnnotations(u_9, p_49);
                  return(t);
                }
                t = fetch_1_0(g_7, t);
                t = term_b_8;
                n_49 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_48)), term_t_20);
                o_49 = t;
                t = SSL_printnl(n_49, o_49);
                t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_48)), term_t_20));
                t = default_system_usage_0_0(t);
                t = term_f_8;
                m_49 = t;
                t = SSL_exit(m_49);
                ;
                LocalPopChoice(s_20);
              }
            else
              {
                t = r_20;
              }
          }
        }
      p_48 = t;
      t = term_c_17;
      r_48 = t;
      t = SSL_table_destroy(r_48);
      t = p_48;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL;
  t = parse_options_1_0(y_101, t);
  w_49 = t;
  t = term_u_20;
  z_49 = t;
  t = SSL_table_create(z_49);
  t = term_u_20;
  x_49 = t;
  t = term_v_20;
  y_49 = t;
  t = SSL_table_put(x_49, y_49, w_49);
  t = w_49;
  t = a_102(t);
  {
    ATerm z_20 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_101, t);
        ;
        LocalPopChoice(c_21);
      }
    else
      {
        t = z_20;
        {
          ATerm d_21 = t;
          int e_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_102(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(e_21);
            }
          else
            {
              t = d_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = if_verbose2_1_0(r_7, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL;
  t = term_g_21;
  a_50 = t;
  t = term_x_7;
  b_50 = t;
  t = term_n_21;
  t = a_7(a_50, b_50, t);
  t = term_o_21;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL;
  c_50 = t;
  t = term_t_17;
  t = get_config_0_0(t);
  d_50 = t;
  t = term_b_8;
  e_50 = t;
  t = (ATerm) ATinsert(ATempty, d_50);
  f_50 = t;
  t = SSL_printnl(e_50, f_50);
  t = c_50;
  return(t);
}
ATerm iowrap_3_0 (ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm t)
{
  ATerm i_7 (ATerm t)
  {
    ATerm v_21 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_101(t);
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = v_21;
        {
          ATerm d_22 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(g_22);
                  }
                else
                  {
                    t = f_22;
                    {
                      ATerm h_22 = t;
                      int i_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(m_7, n_7, o_7, t);
                          ;
                          LocalPopChoice(i_22);
                        }
                      else
                        {
                          t = h_22;
                          {
                            ATerm k_22 = t;
                            int l_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(l_22);
                              }
                            else
                              {
                                t = k_22;
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
    ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
    h_50 = t;
    {
      ATerm m_22 = t;
      int n_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_50 != NULL) && (g_50 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_50 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_7, t);
          ;
          LocalPopChoice(n_22);
        }
      else
        {
          t = m_22;
          t = term_o_22;
          g_50 = t;
        }
      t = not_null(g_50);
      t = ReadFromFile_0_0(t);
      i_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_50, i_50);
      t = apply_strategy_1_0(h_101, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(i_7, j_101, j_7, k_7, t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_9 = NULL,y_9 = NULL,x_9 = NULL;
  y_50 = t;
  if(match_cons(t, sym__2))
    {
      k_50 = ATgetArgument(t, 0);
      p_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_50);
  j_50 = t;
  t = p_50;
  if(match_cons(t, sym_Specification_1))
    {
      r_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_50);
  q_50 = t;
  t = r_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_50 = ATgetFirst((ATermList) t);
      v_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_50);
  t_50 = t;
  t = v_50;
  t = Cons_2_0(v_7, w_7, t);
  w_50 = t;
  t = (ATerm) ATinsert(CheckATermList(w_50), u_50);
  x_9 = t;
  t = SSLsetAnnotations(x_9, t_50);
  x_50 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_50);
  y_9 = t;
  t = SSLsetAnnotations(y_9, q_50);
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_50, s_50);
  z_9 = t;
  t = SSLsetAnnotations(z_9, j_50);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,w_9 = NULL;
  c_51 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_51);
  z_50 = t;
  t = a_51;
  t = dead_def_elim_0_0(t);
  t = map_1_0(local_dead_def_elim_0_0, t);
  b_51 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_51);
  w_9 = t;
  t = SSLsetAnnotations(w_9, z_50);
  return(t);
}
ATerm w_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(u_7, _fail, default_usage_0_0, t);
  return(t);
}
