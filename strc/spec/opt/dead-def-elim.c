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
ATerm term_p_22;
ATerm term_b_22;
ATerm term_u_21;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_u_20;
ATerm term_y_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_l_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_r_15;
ATerm term_k_15;
ATerm term_y_14;
ATerm term_u_14;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_z_12;
ATerm term_v_12;
ATerm term_o_10;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_f_9;
ATerm term_m_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
void init_constant_terms (void)
{
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
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
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__2, term_x_15, term_c_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__2, term_s_16, term_a_8);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_f_17, term_g_17);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym__2, term_x_18, term_a_8);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_a_8);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__2, term_k_18, term_a_8);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, term_m_21, term_a_8);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm DefDead_0_0 (ATerm);
ATerm filter_1_0 (ATerm j_88 (ATerm), ATerm);
ATerm l_5 (ATerm t_33, ATerm u_33, ATerm v_33, ATerm);
ATerm p_5 (ATerm l_33, ATerm m_33, ATerm);
ATerm end_scope_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm scope_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm z_0 (ATerm);
ATerm local_dead_def_elim_0_0 (ATerm);
ATerm map_1_0 (ATerm s_81 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm w_74 (ATerm), ATerm x_74 (ATerm), ATerm y_74 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm u_5 (ATerm o_19, ATerm n_19, ATerm);
ATerm w_5 (ATerm f_84 (ATerm), ATerm x_27, ATerm w_27, ATerm);
ATerm foldr_3_0 (ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm);
ATerm i_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm s_1 (ATerm);
ATerm free_vars_3_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm a_91 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm y_5 (ATerm r_33, ATerm s_33, ATerm);
ATerm at_end_1_0 (ATerm i_82 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm j_20 (ATerm b_20, ATerm);
ATerm conc_0_0 (ATerm);
ATerm a_6 (ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm b_28, ATerm a_28, ATerm);
ATerm b_6 (ATerm a_84 (ATerm), ATerm v_27, ATerm u_27, ATerm);
ATerm genzip_4_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm c_2 (ATerm);
ATerm f_6 (ATerm o_580, ATerm t_580, ATerm r_54, ATerm);
ATerm d_2 (ATerm);
ATerm j_2 (ATerm);
ATerm m_2 (ATerm);
ATerm e_24 (ATerm y_22, ATerm z_22, ATerm a_23, ATerm);
ATerm n_2 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm h_6 (ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm f_55, ATerm c_55, ATerm j_55, ATerm g_55, ATerm d_55, ATerm e_55, ATerm);
ATerm GnNext_3_0 (ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm);
ATerm for_3_0 (ATerm m_93 (ATerm), ATerm n_93 (ATerm), ATerm o_93 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm);
ATerm k_6 (ATerm f_88 (ATerm), ATerm y_32, ATerm w_32, ATerm);
ATerm s_2 (ATerm);
ATerm RegisterDefinition_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm dead_def_elim_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_60 (ATerm), ATerm w_60 (ATerm), ATerm);
ATerm n_6 (ATerm z_43, ATerm a_44, ATerm);
ATerm o_6 (ATerm n_47, ATerm o_47, ATerm);
ATerm q_6 (ATerm r_97 (ATerm), ATerm q_453, ATerm r_47, ATerm);
ATerm p_6 (ATerm j_47, ATerm k_47, ATerm);
ATerm k_3 (ATerm);
ATerm r_3 (ATerm);
ATerm c_4 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm t_100 (ATerm), ATerm);
ATerm r_34 (ATerm c_34, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm r_6 (ATerm p_47, ATerm);
ATerm s_6 (ATerm b_44, ATerm c_44, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm x_36 (ATerm d_35, ATerm);
ATerm z_36 (ATerm j_35, ATerm n_35, ATerm o_35, ATerm);
ATerm a_37 (ATerm z_35, ATerm a_36, ATerm c_36, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm c_82 (ATerm), ATerm);
ATerm m_6 (ATerm p_41, ATerm q_41, ATerm);
ATerm debug_1_0 (ATerm p_97 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm c_99 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm w_4 (ATerm);
ATerm a_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm y_6 (ATerm q_48, ATerm r_48, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm w_6 (ATerm g_33, ATerm h_33, ATerm f_33, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm t_6 (ATerm k_31, ATerm l_31, ATerm);
ATerm foldr_2_0 (ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_99 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm r_5 (ATerm);
ATerm need_help_1_0 (ATerm r_101 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm v_6 (ATerm x_34, ATerm y_34, ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm x_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm d_6 (ATerm);
ATerm g_6 (ATerm);
ATerm i_6 (ATerm);
ATerm u_6 (ATerm);
ATerm x_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm u_103 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm e_7 (ATerm);
ATerm g_7 (ATerm);
ATerm parse_options_1_0 (ATerm t_103 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm);
ATerm j_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm iowrap_3_0 (ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm);
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
  ATerm a_0 = NULL,i_0 = NULL,s_0 = NULL,u_0 = NULL,y_0 = NULL;
  a_0 = t;
  t = term_a_8;
  t = whoami_0_0(t);
  i_0 = t;
  t = term_b_8;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), i_0), term_c_8);
  y_0 = t;
  t = SSL_printnl(u_0, y_0);
  t = term_e_8;
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
    ATerm k_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 = NULL,q_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, k_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        g_1 = t;
        t = term_m_8;
        q_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATmakeAppl(sym_SDefT_4, k_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
        t = y_5(q_1, g_1, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(l_8);
      }
    else
      {
        t = k_8;
        {
          ATerm k_2 = NULL,l_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, k_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
          k_2 = t;
          t = term_m_8;
          l_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATmakeAppl(sym_SDefT_4, k_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
          t = y_5(l_2, k_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm n_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_8) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_a_8;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm j_88 (ATerm), ATerm t)
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
            ATerm q_2 = NULL,u_2 = NULL,v_2 = NULL,k_0 = NULL;
            t = SSLgetAnnotations(g_2);
            q_2 = t;
            t = h_2;
            t = j_88(t);
            u_2 = t;
            t = i_2;
            t = filter_1_0(j_88, t);
            v_2 = t;
            t = (ATerm) ATinsert(CheckATermList(v_2), u_2);
            k_0 = t;
            t = SSLsetAnnotations(k_0, q_2);
            ;
            LocalPopChoice(r_8);
          }
        else
          {
            t = p_8;
            t = i_2;
            t = filter_1_0(j_88, t);
          }
      }
    }
  return(t);
}
ATerm l_5 (ATerm t_33, ATerm u_33, ATerm v_33, ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,d_3 = NULL;
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_33, u_33);
  t = v_6(t_33, u_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_8 = ATgetFirst((ATermList) t);
      w_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_2), v_33);
  d_3 = t;
  t = SSL_table_put(t_33, u_33, d_3);
  t = x_2;
  return(t);
}
ATerm p_5 (ATerm l_33, ATerm m_33, ATerm t)
{
  ATerm h_3 = NULL,j_3 = NULL;
  j_3 = t;
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_33, m_33);
        t = v_6(l_33, m_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_8 = ATgetFirst((ATermList) t);
            h_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_8);
        t = SSL_table_put(l_33, m_33, h_3);
        t = (ATerm) ATmakeAppl(sym__3, l_33, m_33, h_3);
      }
    else
      {
        t = t_8;
        t = SSL_table_remove(l_33, m_33);
        t = (ATerm) ATmakeAppl(sym__2, l_33, m_33);
      }
    t = j_3;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
  p_3 = t;
  t = c_88(t);
  o_3 = t;
  {
    ATerm b_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_3 = NULL;
        t = term_f_9;
        s_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_3, term_f_9);
        t = v_6(o_3, s_3, t);
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = b_9;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_3 = ATgetFirst((ATermList) t);
        l_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_f_9;
    q_3 = t;
    t = SSL_table_put(o_3, q_3, l_3);
    t = m_3;
    {
      ATerm n_0 (ATerm t)
      {
        ATerm u_3 = NULL;
        u_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_3, u_3);
        t = p_5(o_3, u_3, t);
        return(t);
      }
      t = map_1_0(n_0, t);
      t = p_3;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm t)
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_78(t);
      t = z_78(t);
      ;
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      t = z_78(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm w_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL;
  y_3 = t;
  t = b_88(t);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_3, term_f_9);
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
        t = term_f_9;
        i_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_3, term_f_9);
        t = v_6(w_3, i_4, t);
        ;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        t = (ATerm) ATempty;
      }
    z_3 = t;
    t = term_f_9;
    a_4 = t;
    t = (ATerm) ATinsert(CheckATermList(z_3), (ATerm) ATempty);
    b_4 = t;
    t = SSL_table_put(w_3, a_4, b_4);
    t = y_3;
  }
  return(t);
}
ATerm scope_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    t = end_scope_1_0(d_88, t);
    return(t);
  }
  t = begin_scope_1_0(d_88, t);
  t = restore_always_2_0(e_88, q_0, t);
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_m_8;
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm t_3 = NULL,v_3 = NULL,x_3 = NULL,e_4 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      t_3 = ATgetArgument(t, 0);
      {
        ATerm n_9 = ATgetArgument(t, 1);
      }
      {
        ATerm o_9 = ATgetArgument(t, 2);
      }
      {
        ATerm p_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, t_3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  x_3 = t;
  t = term_t_9;
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, t_3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_t_9);
  t = k_6(x_0, x_3, e_4, t);
  t = v_3;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_m_8;
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm y_9 = t;
  if((PushChoice() == 0))
    {
      t = DefDead_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_9;
    }
  return(t);
}
ATerm local_dead_def_elim_0_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,c_6 = NULL,z_6 = NULL,d_7 = NULL,f_7 = NULL;
    f_7 = t;
    if(match_cons(t, sym_Let_2))
      {
        c_6 = ATgetArgument(t, 0);
        d_7 = ATgetArgument(t, 1);
        {
          ATerm b_10 = t;
          int f_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_3 = NULL,n_3 = NULL,o_0 = NULL;
              t = SSLgetAnnotations(f_7);
              g_3 = t;
              t = c_6;
              t = map_1_0(w_0, t);
              n_3 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, n_3, d_7);
              o_0 = t;
              t = SSLsetAnnotations(o_0, g_3);
              ;
              LocalPopChoice(f_10);
            }
          else
            {
              t = b_10;
              t = f_7;
            }
        }
      }
    else
      {
        ATerm g_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_CallT_3))
              {
                c_6 = ATgetArgument(t, 0);
                {
                  ATerm k_10 = ATgetArgument(t, 1);
                }
                {
                  ATerm l_10 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_10);
            t = c_6;
            if(match_cons(t, sym_SVar_1))
              {
                z_6 = ATgetArgument(t, 0);
                {
                  ATerm m_10 = t;
                  int n_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
                      t = term_m_8;
                      x_7 = t;
                      t = (ATerm) ATmakeAppl(sym_SDefT_4, z_6, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
                      y_7 = t;
                      t = term_o_10;
                      z_7 = t;
                      t = (ATerm) ATmakeAppl(sym__3, term_m_8, (ATerm)ATmakeAppl(sym_SDefT_4, z_6, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_o_10);
                      t = l_5(x_7, y_7, z_7, t);
                      t = f_7;
                      ;
                      LocalPopChoice(n_10);
                    }
                  else
                    {
                      t = m_10;
                      t = f_7;
                    }
                }
              }
            else
              {
                t = f_7;
              }
          }
        else
          {
            t = g_10;
            t = f_7;
          }
      }
    t = SRTS_all(local_dead_def_elim_0_0, t);
    x_8 = t;
    if(match_cons(t, sym_Let_2))
      {
        v_8 = ATgetArgument(t, 0);
        w_8 = ATgetArgument(t, 1);
        {
          ATerm p_10 = t;
          int q_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_4 = NULL,q_4 = NULL,p_0 = NULL;
              t = SSLgetAnnotations(x_8);
              n_4 = t;
              t = v_8;
              t = filter_1_0(z_0, t);
              q_4 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, q_4, w_8);
              p_0 = t;
              t = SSLsetAnnotations(p_0, n_4);
              ;
              LocalPopChoice(q_10);
            }
          else
            {
              t = p_10;
              t = x_8;
            }
        }
      }
    else
      {
        t = x_8;
      }
    return(t);
  }
  t = scope_2_0(r_0, v_0, t);
  return(t);
}
ATerm map_1_0 (ATerm s_81 (ATerm), ATerm t)
{
  ATerm e_10 (ATerm t)
  {
    ATerm z_9 = NULL,a_10 = NULL,c_10 = NULL;
    z_9 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_9;
      }
    else
      {
        ATerm h_5 = NULL,k_5 = NULL,m_5 = NULL,t_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_10 = ATgetFirst((ATermList) t);
            c_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_9);
        h_5 = t;
        t = a_10;
        t = s_81(t);
        k_5 = t;
        t = c_10;
        t = e_10(t);
        m_5 = t;
        t = (ATerm) ATinsert(CheckATermList(m_5), k_5);
        t_0 = t;
        t = SSLsetAnnotations(t_0, h_5);
      }
    return(t);
  }
  t = e_10(t);
  return(t);
}
ATerm sboundin_3_0 (ATerm w_74 (ATerm), ATerm x_74 (ATerm), ATerm y_74 (ATerm), ATerm t)
{
  ATerm c_14 = NULL,e_14 = NULL,k_14 = NULL,l_14 = NULL,n_14 = NULL;
  k_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
      {
        ATerm e_6 = NULL,j_6 = NULL,l_6 = NULL,c_1 = NULL;
        t = SSLgetAnnotations(k_14);
        e_6 = t;
        t = l_14;
        t = w_74(t);
        j_6 = t;
        t = n_14;
        t = w_74(t);
        l_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, j_6, l_6);
        c_1 = t;
        t = SSLsetAnnotations(c_1, e_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_14 = ATgetArgument(t, 0);
          n_14 = ATgetArgument(t, 1);
          c_14 = ATgetArgument(t, 2);
          {
            ATerm l_7 = NULL,p_7 = NULL,r_7 = NULL,s_7 = NULL,d_1 = NULL;
            t = SSLgetAnnotations(k_14);
            l_7 = t;
            t = l_14;
            t = y_74(t);
            p_7 = t;
            t = n_14;
            t = y_74(t);
            r_7 = t;
            t = c_14;
            t = w_74(t);
            s_7 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, p_7, r_7, s_7);
            d_1 = t;
            t = SSLsetAnnotations(d_1, l_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              l_14 = ATgetArgument(t, 0);
              n_14 = ATgetArgument(t, 1);
              c_14 = ATgetArgument(t, 2);
              e_14 = ATgetArgument(t, 3);
              {
                ATerm q_8 = NULL,z_8 = NULL,a_9 = NULL,c_9 = NULL,d_9 = NULL,e_1 = NULL;
                t = SSLgetAnnotations(k_14);
                q_8 = t;
                t = l_14;
                t = y_74(t);
                z_8 = t;
                t = n_14;
                t = y_74(t);
                a_9 = t;
                t = c_14;
                t = y_74(t);
                c_9 = t;
                t = e_14;
                t = w_74(t);
                d_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_8, a_9, c_9, d_9);
                e_1 = t;
                t = SSLsetAnnotations(e_1, q_8);
              }
            }
          else
            {
              ATerm d_10 = NULL,i_10 = NULL,j_10 = NULL,f_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  l_14 = ATgetArgument(t, 0);
                  n_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_14);
              d_10 = t;
              t = l_14;
              t = y_74(t);
              i_10 = t;
              t = n_14;
              t = w_74(t);
              j_10 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, i_10, j_10);
              f_1 = t;
              t = SSLsetAnnotations(f_1, d_10);
            }
        }
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm g_15 = NULL;
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          g_15 = ATgetArgument(t, 0);
          {
            ATerm t_10 = ATgetArgument(t, 1);
          }
          {
            ATerm u_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_10);
      t = g_15;
    }
  else
    {
      t = r_10;
      if(match_cons(t, sym_SDefT_4))
        {
          g_15 = ATgetArgument(t, 0);
          {
            ATerm w_10 = ATgetArgument(t, 1);
          }
          {
            ATerm x_10 = ATgetArgument(t, 2);
          }
          {
            ATerm z_10 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = g_15;
    }
  return(t);
}
ATerm u_5 (ATerm o_19, ATerm n_19, ATerm t)
{
  t = o_19;
  t = map_1_0(a_1, t);
  return(t);
}
ATerm w_5 (ATerm f_84 (ATerm), ATerm x_27, ATerm w_27, ATerm t)
{
  ATerm r_16 (ATerm t)
  {
    ATerm e_16 = NULL,h_16 = NULL,j_16 = NULL;
    e_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_27;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_16 = ATgetFirst((ATermList) t);
            j_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_11 = t;
          int b_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_16;
              {
                ATerm b_1 (ATerm t)
                {
                  t = w_27;
                  return(t);
                }
                t = a_6(f_84, b_1, h_16, j_16, t);
                t = r_16(t);
              }
              ;
              LocalPopChoice(b_11);
            }
          else
            {
              t = a_11;
              {
                ATerm v_10 = NULL,y_10 = NULL,r_1 = NULL;
                t = SSLgetAnnotations(e_16);
                v_10 = t;
                t = j_16;
                t = r_16(t);
                y_10 = t;
                t = (ATerm) ATinsert(CheckATermList(y_10), h_16);
                r_1 = t;
                t = SSLsetAnnotations(r_1, v_10);
              }
            }
        }
      }
    return(t);
  }
  t = x_27;
  t = r_16(t);
  return(t);
}
ATerm foldr_3_0 (ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
  u_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_16;
      t = v_86(t);
    }
  else
    {
      ATerm c_17 = NULL,d_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_16 = ATgetFirst((ATermList) t);
          w_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_16;
      t = x_86(t);
      c_17 = t;
      t = w_16;
      t = foldr_3_0(v_86, w_86, x_86, t);
      d_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_17, d_17);
      t = w_86(t);
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL;
  if(match_cons(t, sym__2))
    {
      w_11 = ATgetArgument(t, 0);
      x_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(n_1, w_11, x_11, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm d_12 = NULL;
  if(match_cons(t, sym__2))
    {
      d_12 = ATgetArgument(t, 0);
      if((d_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL;
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(s_1, n_12, o_12, t);
  return(t);
}
ATerm s_1 (ATerm t)
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
ATerm free_vars_3_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm a_91 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm p_18 (ATerm t)
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_90(t);
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
              ATerm i_17 = NULL,j_17 = NULL,o_11 = NULL,q_11 = NULL;
              i_17 = t;
              t = z_90(t);
              j_17 = t;
              t = i_17;
              {
                ATerm h_1 (ATerm t)
                {
                  ATerm l_17 = NULL;
                  t = p_18(t);
                  l_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, l_17, j_17);
                  t = diff_0_0(t);
                  return(t);
                }
                t = a_91(h_1, p_18, i_1, t);
                q_11 = t;
                t = SSL_explode_term(q_11);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_11 = ATgetArgument(t, 0);
                    o_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_11;
                t = foldr_3_0(l_1, m_1, _id, t);
              }
              ;
              LocalPopChoice(f_11);
            }
          else
            {
              t = e_11;
              {
                ATerm f_12 = NULL,g_12 = NULL;
                g_12 = t;
                t = SSL_explode_term(g_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_11 = ATgetArgument(t, 0);
                    f_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_12;
                t = foldr_3_0(o_1, p_1, p_18, t);
              }
            }
        }
      }
    return(t);
  }
  t = p_18(t);
  return(t);
}
ATerm y_5 (ATerm r_33, ATerm s_33, ATerm t)
{
  ATerm q_18 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_33, s_33);
  t = v_6(r_33, s_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_18 = ATgetFirst((ATermList) t);
      {
        ATerm i_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_18;
  return(t);
}
ATerm at_end_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm x_19 (ATerm t)
  {
    ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
    w_19 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_19 = ATgetFirst((ATermList) t);
        v_19 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_13 = NULL,e_13 = NULL,u_1 = NULL;
          t = SSLgetAnnotations(w_19);
          b_13 = t;
          t = v_19;
          t = x_19(t);
          e_13 = t;
          t = (ATerm) ATinsert(CheckATermList(e_13), u_19);
          u_1 = t;
          t = SSLsetAnnotations(u_1, b_13);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_19;
        t = i_82(t);
      }
    return(t);
  }
  t = x_19(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
  c_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_19;
    }
  else
    {
      ATerm t_1 (ATerm t)
      {
        t = not_null(e_19);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_19 = ATgetFirst((ATermList) t);
          if(((e_19 != NULL) && (e_19 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_19;
      t = at_end_1_0(t_1, t);
    }
  return(t);
}
ATerm j_20 (ATerm b_20, ATerm t)
{
  ATerm c_20 = NULL;
  t = SSL_explode_term(b_20);
  if(match_cons(t, sym__2))
    {
      ATerm j_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_20;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  g_20 = t;
  if(match_cons(t, sym__2))
    {
      e_20 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_1 (ATerm t)
            {
              t = f_20;
              return(t);
            }
            t = e_20;
            t = at_end_1_0(v_1, t);
            ;
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            t = j_20(g_20, t);
          }
      }
    }
  else
    {
      t = j_20(g_20, t);
    }
  return(t);
}
ATerm a_6 (ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm b_28, ATerm a_28, ATerm t)
{
  t = j_84(t);
  {
    ATerm w_1 (ATerm t)
    {
      ATerm k_20 = NULL;
      k_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_28, k_20);
      t = i_84(t);
      return(t);
    }
    t = fetch_1_0(w_1, t);
    t = a_28;
  }
  return(t);
}
ATerm b_6 (ATerm a_84 (ATerm), ATerm v_27, ATerm u_27, ATerm t)
{
  ATerm e_21 (ATerm t)
  {
    ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
    v_20 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_20;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_20 = ATgetFirst((ATermList) t);
            x_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_11 = t;
          int n_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_20;
              {
                ATerm y_1 (ATerm t)
                {
                  t = u_27;
                  return(t);
                }
                t = a_6(a_84, y_1, w_20, x_20, t);
                t = e_21(t);
              }
              ;
              LocalPopChoice(n_11);
            }
          else
            {
              t = m_11;
              {
                ATerm z_13 = NULL,f_14 = NULL,x_1 = NULL;
                t = SSLgetAnnotations(v_20);
                z_13 = t;
                t = x_20;
                t = e_21(t);
                f_14 = t;
                t = (ATerm) ATinsert(CheckATermList(f_14), w_20);
                x_1 = t;
                t = SSLsetAnnotations(x_1, z_13);
              }
            }
        }
      }
    return(t);
  }
  t = v_27;
  t = e_21(t);
  return(t);
}
ATerm genzip_4_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm t)
{
  ATerm o_21 (ATerm t)
  {
    ATerm p_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_80(t);
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = p_11;
        {
          ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,n_21 = NULL,b_2 = NULL;
          t = e_80(t);
          n_21 = t;
          if(match_cons(t, sym__2))
            {
              h_21 = ATgetArgument(t, 0);
              i_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_21);
          g_21 = t;
          t = h_21;
          t = g_80(t);
          j_21 = t;
          t = i_21;
          t = o_21(t);
          k_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_21, k_21);
          b_2 = t;
          t = SSLsetAnnotations(b_2, g_21);
          t = f_80(t);
        }
      }
    return(t);
  }
  t = o_21(t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_11 = ATgetArgument(t, 0);
      if(((ATgetType(s_11) != AT_LIST) || !(ATisEmpty(s_11))))
        _fail(t);
      {
        ATerm t_11 = ATgetArgument(t, 1);
        if(((ATgetType(t_11) != AT_LIST) || !(ATisEmpty(t_11))))
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
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_11 = ATgetArgument(t, 0);
      if(((ATgetType(u_11) == AT_LIST) && !(ATisEmpty(u_11))))
        {
          v_21 = ATgetFirst((ATermList) u_11);
          w_21 = (ATerm) ATgetNext((ATermList) u_11);
        }
      else
        _fail(t);
      {
        ATerm v_11 = ATgetArgument(t, 1);
        if(((ATgetType(v_11) == AT_LIST) && !(ATisEmpty(v_11))))
          {
            x_21 = ATgetFirst((ATermList) v_11);
            y_21 = (ATerm) ATgetNext((ATermList) v_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_21, x_21), (ATerm) ATmakeAppl(sym__2, w_21, y_21));
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL;
  if(match_cons(t, sym__2))
    {
      z_21 = ATgetArgument(t, 0);
      a_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_22), z_21);
  return(t);
}
ATerm f_6 (ATerm o_580, ATerm t_580, ATerm r_54, ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
  t = SSL_explode_term(t_580);
  if(match_cons(t, sym__2))
    {
      q_21 = ATgetArgument(t, 0);
      s_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_580);
  if(match_cons(t, sym__2))
    {
      if((q_21 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      r_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_21, s_21);
  t = genzip_4_0(z_1, a_2, c_2, _id, t);
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_21, r_54);
  t = conc_0_0(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, q_22);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,v_22 = NULL,x_22 = NULL,e_2 = NULL;
  x_22 = t;
  if(match_cons(t, sym__2))
    {
      s_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_22);
  r_22 = t;
  t = v_22;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_22, v_22);
  e_2 = t;
  t = SSLsetAnnotations(e_2, r_22);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
  q_23 = t;
  if(match_cons(t, sym__2))
    {
      r_23 = ATgetArgument(t, 0);
      s_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_23;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_23 = ATgetFirst((ATermList) t);
      u_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_24(r_23, s_23, q_23, t);
            ;
            LocalPopChoice(z_11);
          }
        else
          {
            t = y_11;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_23), t_23), u_23);
          }
      }
    }
  else
    {
      t = e_24(r_23, s_23, q_23, t);
    }
  return(t);
}
ATerm e_24 (ATerm y_22, ATerm z_22, ATerm a_23, ATerm t)
{
  ATerm b_23 = NULL,e_23 = NULL,f_2 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
  t = SSLgetAnnotations(a_23);
  b_23 = t;
  t = z_22;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_23 = ATgetFirst((ATermList) t);
      k_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_23;
  if(match_cons(t, sym__2))
    {
      i_23 = ATgetArgument(t, 0);
      j_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_23;
        if((i_23 != t))
          {
            _fail(t);
          }
        t = k_23;
        ;
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        t = z_22;
        t = f_6(i_23, j_23, k_23, t);
      }
    e_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_22, e_23);
    f_2 = t;
    t = SSLsetAnnotations(f_2, b_23);
  }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm d_24 = NULL;
  if(match_cons(t, sym__2))
    {
      d_24 = ATgetArgument(t, 0);
      if((d_24 != ATgetArgument(t, 1)))
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
  ATerm c_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(d_2, j_2, m_2, t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = c_12;
      {
        ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
        y_23 = t;
        if(match_cons(t, sym__2))
          {
            z_23 = ATgetArgument(t, 0);
            a_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_23;
        t = b_6(n_2, z_23, a_24, t);
      }
    }
  return(t);
}
ATerm h_6 (ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm f_55, ATerm c_55, ATerm j_55, ATerm g_55, ATerm d_55, ATerm e_55, ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_55, g_55);
  t = x_104(t);
  f_24 = t;
  t = y_104(t);
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_24, j_55);
  t = diff_0_0(t);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_24, c_55);
  t = conc_0_0(t);
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_24, j_55);
  t = conc_0_0(t);
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_55, f_24, d_55);
  t = z_104(t);
  k_24 = t;
  t = (ATerm) ATmakeAppl(sym__5, i_24, j_24, g_55, k_24, e_55);
  return(t);
}
ATerm GnNext_3_0 (ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm h_12 = ATgetArgument(t, 0);
      if(((ATgetType(h_12) == AT_LIST) && !(ATisEmpty(h_12))))
        {
          m_24 = ATgetFirst((ATermList) h_12);
          n_24 = (ATerm) ATgetNext((ATermList) h_12);
        }
      else
        _fail(t);
      o_24 = ATgetArgument(t, 1);
      p_24 = ATgetArgument(t, 2);
      q_24 = ATgetArgument(t, 3);
      r_24 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = h_6(x_104, y_104, z_104, m_24, n_24, o_24, p_24, q_24, r_24, t);
  return(t);
}
ATerm while_not_2_0 (ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm t)
{
  ATerm s_24 (ATerm t)
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_93(t);
        ;
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = k_93(t);
        t = s_24(t);
      }
    return(t);
  }
  t = s_24(t);
  return(t);
}
ATerm for_3_0 (ATerm m_93 (ATerm), ATerm n_93 (ATerm), ATerm o_93 (ATerm), ATerm t)
{
  t = m_93(t);
  t = while_not_2_0(n_93, o_93, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
  if(match_cons(t, sym__3))
    {
      w_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
      y_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, w_24, w_24, x_24, y_24, (ATerm) ATempty);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm k_12 = ATgetArgument(t, 0);
      if(((ATgetType(k_12) != AT_LIST) || !(ATisEmpty(k_12))))
        _fail(t);
      {
        ATerm l_12 = ATgetArgument(t, 1);
      }
      {
        ATerm m_12 = ATgetArgument(t, 2);
      }
      b_25 = ATgetArgument(t, 3);
      c_25 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_25, c_25);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm t)
{
  ATerm v_24 = NULL;
  ATerm r_2 (ATerm t)
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(u_104, v_104, w_104, t);
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        {
          ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
          if(match_cons(t, sym__5))
            {
              e_25 = ATgetArgument(t, 0);
              k_25 = ATgetArgument(t, 1);
              l_25 = ATgetArgument(t, 2);
              m_25 = ATgetArgument(t, 3);
              n_25 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = e_25;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_25 = ATgetFirst((ATermList) t);
              g_25 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, g_25, k_25, l_25, m_25, (ATerm) ATinsert(CheckATermList(n_25), f_25));
        }
      }
    return(t);
  }
  t = for_3_0(o_2, p_2, r_2, t);
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      {
        ATerm s_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_24;
  return(t);
}
ATerm k_6 (ATerm f_88 (ATerm), ATerm y_32, ATerm w_32, ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,p_26 = NULL,q_26 = NULL;
  g_26 = t;
  t = f_88(t);
  d_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_26, y_32, w_32);
  t = w_6(d_26, y_32, w_32, t);
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_26 = NULL;
        t = term_f_9;
        r_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_26, term_f_9);
        t = v_6(d_26, r_26, t);
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
        e_26 = ATgetFirst((ATermList) t);
        f_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_f_9;
    p_26 = t;
    t = (ATerm) ATinsert(CheckATermList(f_26), (ATerm) ATinsert(CheckATermList(e_26), y_32));
    q_26 = t;
    t = SSL_table_put(d_26, p_26, q_26);
    t = g_26;
  }
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_v_12;
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  t_26 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      s_26 = ATgetArgument(t, 0);
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
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_26, (ATerm) ATempty);
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_12, t_26);
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_26, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_z_12, t_26));
  t = k_6(s_2, v_26, w_26, t);
  t = u_26;
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm m_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  if(match_cons(t, sym__2))
    {
      m_14 = ATgetArgument(t, 0);
      {
        ATerm a_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_14, (ATerm) ATempty);
  p_14 = t;
  t = term_v_12;
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, (ATerm) ATmakeAppl(sym__2, m_14, (ATerm) ATempty));
  t = y_5(q_14, p_14, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm c_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_13) != ATmakeSymbol("c_0", 0, ATtrue)))
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
  ATerm y_29 = NULL,z_29 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm d_13 = ATgetArgument(t, 0);
      y_29 = ATgetArgument(t, 1);
      z_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_29), y_29);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm c_27 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      c_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_27);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,i_27 = NULL;
  d_27 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_27 = ATgetArgument(t, 0);
      f_27 = ATgetArgument(t, 1);
      t = d_27;
      t = u_5(e_27, f_27, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_27 = ATgetArgument(t, 0);
          f_27 = ATgetArgument(t, 1);
          g_27 = ATgetArgument(t, 2);
          t = f_27;
          t = map_1_0(c_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              e_27 = ATgetArgument(t, 0);
              f_27 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, e_27);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  e_27 = ATgetArgument(t, 0);
                  f_27 = ATgetArgument(t, 1);
                  g_27 = ATgetArgument(t, 2);
                  i_27 = ATgetArgument(t, 3);
                  t = f_27;
                  t = map_1_0(e_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_27 = ATgetArgument(t, 0);
                      f_27 = ATgetArgument(t, 1);
                      g_27 = ATgetArgument(t, 2);
                      i_27 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_27;
                  t = map_1_0(f_3, t);
                }
            }
        }
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm j_28 = NULL;
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_28 = ATgetArgument(t, 0);
          {
            ATerm h_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_13);
      t = j_28;
    }
  else
    {
      t = f_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_28;
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm c_29 = NULL;
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_29 = ATgetArgument(t, 0);
          {
            ATerm k_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_13);
      t = c_29;
    }
  else
    {
      t = i_13;
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
ATerm f_3 (ATerm t)
{
  ATerm v_29 = NULL;
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_29 = ATgetArgument(t, 0);
          {
            ATerm n_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_13);
      t = v_29;
    }
  else
    {
      t = l_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_29;
    }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm b_27 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_o_13), b_27, (ATerm) ATempty);
  t = graph_nodes_roots_3_0(t_2, y_2, z_2, t);
  return(t);
}
ATerm Cons_2_0 (ATerm v_60 (ATerm), ATerm w_60 (ATerm), ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,g_30 = NULL,h_30 = NULL,s_4 = NULL;
  h_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_30 = ATgetFirst((ATermList) t);
      c_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_30);
  a_30 = t;
  t = b_30;
  t = v_60(t);
  d_30 = t;
  t = c_30;
  t = w_60(t);
  g_30 = t;
  t = (ATerm) ATinsert(CheckATermList(g_30), d_30);
  s_4 = t;
  t = SSLsetAnnotations(s_4, a_30);
  return(t);
}
ATerm n_6 (ATerm z_43, ATerm a_44, ATerm t)
{
  ATerm k_30 = NULL;
  t = SSL_fputc(z_43, a_44);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_30);
  return(t);
}
ATerm o_6 (ATerm n_47, ATerm o_47, ATerm t)
{
  ATerm l_30 = NULL;
  t = SSL_write_term_to_stream_text(n_47, o_47);
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_30);
  return(t);
}
ATerm q_6 (ATerm r_97 (ATerm), ATerm q_453, ATerm r_47, ATerm t)
{
  ATerm m_30 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_453, term_p_13);
  t = open_stream_0_0(t);
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_30, r_47);
  t = r_97(t);
  t = fclose_0_0(t);
  t = r_47;
  return(t);
}
ATerm p_6 (ATerm j_47, ATerm k_47, ATerm t)
{
  ATerm o_30 = NULL;
  t = SSL_write_term_to_stream_baf(j_47, k_47);
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_30);
  return(t);
}
ATerm k_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      if(match_cons(q_13, sym_Stream_1))
        {
          h_15 = ATgetArgument(q_13, 0);
        }
      else
        _fail(t);
      i_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(h_15, i_15, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm i_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_13 = ATgetArgument(t, 0);
      if(match_cons(r_13, sym_Stream_1))
        {
          o_16 = ATgetArgument(r_13, 0);
        }
      else
        _fail(t);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(o_16, p_16, t);
  i_16 = t;
  t = term_s_13;
  m_16 = t;
  t = i_16;
  if(match_cons(t, sym_Stream_1))
    {
      n_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, i_16);
  t = n_6(m_16, n_16, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,w_30 = NULL,x_30 = NULL,a_31 = NULL,b_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,k_32 = NULL,l_32 = NULL,x_4 = NULL,v_4 = NULL;
  t_30 = t;
  if(match_cons(t, sym__2))
    {
      d_31 = ATgetArgument(t, 0);
      e_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_30);
  b_31 = t;
  t = d_31;
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((s_30 != NULL) && (s_30 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(i_3, t);
        ;
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        t = term_v_13;
        s_30 = t;
      }
    f_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_31, e_31);
    v_4 = t;
    t = SSLsetAnnotations(v_4, b_31);
    t = t_30;
    if(match_cons(t, sym__2))
      {
        w_30 = ATgetArgument(t, 0);
        x_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_30);
    u_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_30, (ATerm) ATmakeAppl(sym__2, not_null(s_30), x_30));
    x_4 = t;
    t = SSLsetAnnotations(x_4, u_30);
    a_31 = t;
    if(match_cons(t, sym__2))
      {
        k_32 = ATgetArgument(t, 0);
        l_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm w_13 = t;
      int x_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_14 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,f_15 = NULL,y_4 = NULL;
          t = SSLgetAnnotations(a_31);
          w_14 = t;
          t = k_32;
          t = fetch_1_0(k_3, t);
          b_15 = t;
          t = l_32;
          if(match_cons(t, sym__2))
            {
              d_15 = ATgetArgument(t, 0);
              f_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_6(r_3, d_15, f_15, t);
          c_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_15, c_15);
          y_4 = t;
          t = SSLsetAnnotations(y_4, w_14);
          ;
          LocalPopChoice(x_13);
        }
      else
        {
          t = w_13;
          {
            ATerm s_15 = NULL,y_15 = NULL,f_16 = NULL,g_16 = NULL,z_4 = NULL;
            t = SSLgetAnnotations(a_31);
            s_15 = t;
            t = l_32;
            if(match_cons(t, sym__2))
              {
                f_16 = ATgetArgument(t, 0);
                g_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_6(c_4, f_16, g_16, t);
            y_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_32, y_15);
            z_4 = t;
            t = SSLsetAnnotations(z_4, s_15);
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
ATerm apply_strategy_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
  d_33 = t;
  t = dtime_0_0(t);
  t = d_33;
  t = t_100(t);
  c_33 = t;
  t = dtime_0_0(t);
  o_32 = t;
  t = c_33;
  if(match_cons(t, sym__2))
    {
      p_32 = ATgetArgument(t, 0);
      b_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_32), (ATerm) ATmakeAppl(sym_Runtime_1, o_32)), b_33);
  return(t);
}
ATerm r_34 (ATerm c_34, ATerm t)
{
  t = SSL_fclose(c_34);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_34 = NULL,n_34 = NULL;
  n_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_34 = ATgetArgument(t, 0);
      {
        ATerm y_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_34);
            ;
            LocalPopChoice(a_14);
          }
        else
          {
            t = y_13;
            t = r_34(n_34, t);
          }
      }
    }
  else
    {
      t = r_34(n_34, t);
    }
  return(t);
}
ATerm r_6 (ATerm p_47, ATerm t)
{
  t = SSL_read_term_from_stream(p_47);
  return(t);
}
ATerm s_6 (ATerm b_44, ATerm c_44, ATerm t)
{
  ATerm s_34 = NULL;
  t = SSL_fopen(b_44, c_44);
  s_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_34);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_34 = NULL;
  t = SSL_stdin_stream();
  t_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_34);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_34 = NULL;
  t = SSL_stdout_stream();
  u_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_34);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_34 = NULL;
  t = SSL_stderr_stream();
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_34);
  return(t);
}
ATerm x_36 (ATerm d_35, ATerm t)
{
  ATerm g_35 = NULL;
  t = SSL_explode_term(d_35);
  if(match_cons(t, sym__2))
    {
      ATerm b_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_14 = ATgetArgument(t, 1);
        if(((ATgetType(d_14) == AT_LIST) && !(ATisEmpty(d_14))))
          {
            g_35 = ATgetFirst((ATermList) d_14);
            {
              ATerm g_14 = (ATerm) ATgetNext((ATermList) d_14);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_35;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_35;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_35;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_35;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm z_36 (ATerm j_35, ATerm n_35, ATerm o_35, ATerm t)
{
  ATerm p_35 = NULL,t_35 = NULL,u_35 = NULL,x_35 = NULL,o_5 = NULL;
  t = SSLgetAnnotations(o_35);
  u_35 = t;
  t = j_35;
  if(match_cons(t, sym_Path_1))
    {
      x_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_35, n_35);
  o_5 = t;
  t = SSLsetAnnotations(o_5, u_35);
  if(match_cons(t, sym__2))
    {
      p_35 = ATgetArgument(t, 0);
      t_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(p_35, t_35, t);
  return(t);
}
ATerm a_37 (ATerm z_35, ATerm a_36, ATerm c_36, ATerm t)
{
  ATerm f_36 = NULL,h_36 = NULL,l_36 = NULL,p_36 = NULL,q_5 = NULL;
  t = SSLgetAnnotations(c_36);
  l_36 = t;
  t = SSL_is_string(z_35);
  p_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_36, a_36);
  q_5 = t;
  t = SSLsetAnnotations(q_5, l_36);
  if(match_cons(t, sym__2))
    {
      f_36 = ATgetArgument(t, 0);
      h_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(f_36, h_36, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm t_36 = NULL,v_36 = NULL,w_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_14 = ATgetArgument(t, 0);
      ATerm i_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t_36 = t;
  if(match_cons(t, sym__2))
    {
      v_36 = ATgetArgument(t, 0);
      w_36 = ATgetArgument(t, 1);
      {
        ATerm j_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_36(t_36, t);
            ;
            LocalPopChoice(r_14);
          }
        else
          {
            t = j_14;
            {
              ATerm s_14 = t;
              int t_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_36(v_36, w_36, t_36, t);
                  ;
                  LocalPopChoice(t_14);
                }
              else
                {
                  t = s_14;
                  t = a_37(v_36, w_36, t_36, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_36(t_36, t);
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_u_14;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_37 = NULL,e_37 = NULL,f_37 = NULL;
  ATerm v_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_37 = NULL;
      g_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_37, term_y_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = v_14;
      t = debug_1_0(d_4, t);
      _fail(t);
    }
  e_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(f_37, t);
  b_37 = t;
  t = e_37;
  t = fclose_0_0(t);
  t = b_37;
  return(t);
}
ATerm fetch_1_0 (ATerm c_82 (ATerm), ATerm t)
{
  ATerm p_38 (ATerm t)
  {
    ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
    m_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_38 = ATgetFirst((ATermList) t);
        o_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_14 = t;
      int a_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_17 = NULL,v_17 = NULL,f_8 = NULL;
          t = SSLgetAnnotations(m_38);
          r_17 = t;
          t = n_38;
          t = c_82(t);
          v_17 = t;
          t = (ATerm) ATinsert(CheckATermList(o_38), v_17);
          f_8 = t;
          t = SSLsetAnnotations(f_8, r_17);
          ;
          LocalPopChoice(a_15);
        }
      else
        {
          t = z_14;
          {
            ATerm h_18 = NULL,l_18 = NULL,j_8 = NULL;
            t = SSLgetAnnotations(m_38);
            h_18 = t;
            t = o_38;
            t = p_38(t);
            l_18 = t;
            t = (ATerm) ATinsert(CheckATermList(l_18), n_38);
            j_8 = t;
            t = SSLsetAnnotations(j_8, h_18);
          }
        }
    }
    return(t);
  }
  t = p_38(t);
  return(t);
}
ATerm m_6 (ATerm p_41, ATerm q_41, ATerm t)
{
  t = SSL_strcat(p_41, q_41);
  return(t);
}
ATerm debug_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,w_38 = NULL,x_38 = NULL;
  s_38 = t;
  t = p_97(t);
  t_38 = t;
  t = term_b_8;
  w_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_38), t_38);
  x_38 = t;
  t = SSL_printnl(w_38, x_38);
  t = s_38;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm e_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(j_15);
    }
  else
    {
      t = e_15;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_39 = NULL;
      e_39 = t;
      t = SSL_is_string(e_39);
      ;
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
      {
        ATerm n_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_4, t);
            ;
            LocalPopChoice(o_15);
          }
        else
          {
            t = n_15;
            {
              ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
              r_39 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_39 = ATgetArgument(t, 0);
                  t = s_39;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_39 = ATgetArgument(t, 0);
                      t = s_39;
                      {
                        ATerm p_15 = t;
                        int q_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_15);
                          }
                        else
                          {
                            t = p_15;
                            t = debug_1_0(g_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_39 = NULL,z_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_39 = ATgetArgument(t, 0);
                          t_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_39;
                      t = eval_config_0_0(t);
                      y_39 = t;
                      t = t_39;
                      t = eval_config_0_0(t);
                      z_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_39, z_39);
                      t = m_6(y_39, z_39, t);
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
  ATerm g_40 = NULL,h_40 = NULL;
  g_40 = t;
  t = term_r_15;
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_15, g_40);
  t = v_6(h_40, g_40, t);
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_40 = NULL,j_40 = NULL;
        t = eval_config_0_0(t);
        i_40 = t;
        t = term_r_15;
        j_40 = t;
        t = SSL_table_put(j_40, g_40, i_40);
        t = i_40;
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
ATerm if_verbose2_1_0 (ATerm c_99 (ATerm), ATerm t)
{
  ATerm o_40 = NULL;
  o_40 = t;
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_40 = NULL;
        t = term_x_15;
        t = get_config_0_0(t);
        q_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_40, term_z_15);
        t = geq_0_0(t);
        t = o_40;
        t = c_99(t);
        ;
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        t = o_40;
      }
  }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm t_40 = NULL;
  t_40 = t;
  if(match_string(t, "-k"))
    {
      t = t_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_40;
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL;
  u_40 = t;
  t = SSL_string_to_int(u_40);
  v_40 = t;
  t = term_a_16;
  w_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_16, v_40);
  t = y_6(w_40, v_40, t);
  t = u_40;
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
  ATerm a_41 = NULL;
  a_41 = t;
  if(match_string(t, "-S"))
    {
      t = a_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_41;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL;
  t = term_x_15;
  d_41 = t;
  t = term_c_16;
  e_41 = t;
  t = term_d_16;
  t = y_6(d_41, e_41, t);
  t = term_k_16;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_l_16;
  return(t);
}
ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,k_41 = NULL;
  f_41 = t;
  t = SSL_string_to_int(f_41);
  g_41 = t;
  t = term_x_15;
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_15, g_41);
  t = y_6(k_41, g_41, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_41);
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_q_16;
  return(t);
}
ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm n_41 = NULL,s_41 = NULL;
  t = term_s_16;
  n_41 = t;
  t = term_a_8;
  s_41 = t;
  t = term_t_16;
  t = y_6(n_41, s_41, t);
  t = term_x_16;
  return(t);
}
ATerm a_5 (ATerm t)
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
      t = Option_3_0(l_4, m_4, o_4, t);
      ;
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      {
        ATerm b_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_4, r_4, t_4, t);
            ;
            LocalPopChoice(e_17);
          }
        else
          {
            t = b_17;
            t = Option_3_0(u_4, w_4, a_5, t);
          }
      }
    }
  return(t);
}
ATerm y_6 (ATerm q_48, ATerm r_48, ATerm t)
{
  ATerm t_41 = NULL;
  t = term_r_15;
  t_41 = t;
  t = SSL_table_put(t_41, q_48, r_48);
  t = (ATerm) ATmakeAppl(sym__3, term_r_15, q_48, r_48);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
      t = term_a_8;
      t = f_0(t);
      c_42 = t;
      t = term_f_17;
      d_42 = t;
      t = term_g_17;
      e_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_17, term_g_17, c_42);
      t = w_6(d_42, e_42, c_42, t);
      _fail(t);
    }
  else
    {
      ATerm n_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_41 = ATgetFirst((ATermList) t);
          z_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_41;
      t = b_0(t);
      t = term_a_8;
      t = d_0(t);
      n_42 = t;
      t = (ATerm) ATinsert(CheckATermList(z_41), n_42);
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm p_42 = NULL;
  p_42 = t;
  if(match_string(t, "-o"))
    {
      t = p_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_42;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL;
  q_42 = t;
  t = term_h_17;
  r_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_17, q_42);
  t = y_6(r_42, q_42, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_42);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_k_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_5, c_5, d_5, t);
  return(t);
}
ATerm w_6 (ATerm g_33, ATerm h_33, ATerm f_33, ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
  t_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_17 = ATgetArgument(t, 0);
            ATerm p_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
        t = v_6(g_33, h_33, t);
        ;
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        t = (ATerm) ATempty;
      }
    u_42 = t;
    t = (ATerm) ATinsert(CheckATermList(u_42), f_33);
    v_42 = t;
    t = SSL_table_put(g_33, h_33, v_42);
    t = t_42;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,g_43 = NULL,h_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_43 = NULL,l_43 = NULL,o_43 = NULL;
      t = term_a_8;
      t = m_0(t);
      k_43 = t;
      t = term_f_17;
      l_43 = t;
      t = term_g_17;
      o_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_17, term_g_17, k_43);
      t = w_6(l_43, o_43, k_43, t);
      _fail(t);
    }
  else
    {
      ATerm u_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_43 = ATgetFirst((ATermList) t);
          d_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_43;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_43 = ATgetFirst((ATermList) t);
          h_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_43;
      t = j_0(t);
      t = g_43;
      t = l_0(t);
      u_43 = t;
      t = (ATerm) ATinsert(CheckATermList(h_43), u_43);
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm x_43 = NULL;
  x_43 = t;
  if(match_string(t, "-i"))
    {
      t = x_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_43;
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm y_43 = NULL,f_44 = NULL;
  y_43 = t;
  t = term_q_17;
  f_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, y_43);
  t = y_6(f_44, y_43, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_43);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_s_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_5, f_5, g_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_8;
  t = whoami_0_0(t);
  g_44 = t;
  t = term_b_8;
  i_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_17), g_44);
  j_44 = t;
  t = SSL_printnl(i_44, j_44);
  t = term_e_8;
  h_44 = t;
  t = SSL_exit(h_44);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_17;
  t = get_config_0_0(t);
  return(t);
}
ATerm t_6 (ATerm k_31, ATerm l_31, ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_31, l_31);
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      t = SSL_addr(k_31, l_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
  l_44 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_44;
      t = t_86(t);
    }
  else
    {
      ATerm q_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_44 = ATgetFirst((ATermList) t);
          n_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_44;
      t = foldr_2_0(t_86, u_86, t);
      q_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_44, q_44);
      t = u_86(t);
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
ATerm j_5 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  if(match_cons(t, sym__2))
    {
      z_20 = ATgetArgument(t, 0);
      a_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(z_20, a_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_44 = NULL,a_20 = NULL,l_20 = NULL;
  t = times_0_0(t);
  l_20 = t;
  t = SSL_explode_term(l_20);
  if(match_cons(t, sym__2))
    {
      ATerm y_17 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_20;
  t = foldr_2_0(i_5, j_5, t);
  t_44 = t;
  t = SSL_TicksToSeconds(t_44);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
  e_45 = t;
  if(match_cons(t, sym__2))
    {
      f_45 = ATgetArgument(t, 0);
      g_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_45;
        if((f_45 != t))
          {
            _fail(t);
          }
        t = e_45;
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = (ATerm) ATmakeAppl(sym__2, f_45, g_45);
        {
          ATerm b_18 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_45, g_45);
              ;
              LocalPopChoice(c_18);
            }
          else
            {
              t = b_18;
              t = SSL_gtr(f_45, g_45);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_45, g_45);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm k_45 = NULL;
  k_45 = t;
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_45 = NULL;
        t = term_x_15;
        t = get_config_0_0(t);
        m_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_45, term_e_8);
        t = geq_0_0(t);
        t = k_45;
        t = b_99(t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = k_45;
      }
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,r_45 = NULL,s_45 = NULL;
  t = run_time_0_0(t);
  o_45 = t;
  t = term_a_8;
  t = whoami_0_0(t);
  p_45 = t;
  t = term_b_8;
  r_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), o_45), term_f_18), p_45);
  s_45 = t;
  t = SSL_printnl(r_45, s_45);
  t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), o_45), term_f_18), p_45));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_45 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_16;
  t_45 = t;
  t = SSL_exit(t_45);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL;
  c_46 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_46;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_46 = ATgetArgument(t, 0);
          {
            ATerm j_22 = NULL,o_8 = NULL;
            t = SSLgetAnnotations(c_46);
            j_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_46);
            o_8 = t;
            t = SSLsetAnnotations(o_8, j_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_46;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_101 (ATerm), ATerm t)
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      t = fetch_1_0(r_5, t);
    }
  t = r_101(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_46 = ATgetFirst((ATermList) t);
      g_46 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_46 = NULL,l_46 = NULL;
        ATerm s_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_46)), not_null(l_46));
          return(t);
        }
        t = g_46;
        t = h_0(t);
        if(((k_46 != NULL) && (k_46 != t)))
          _fail(t);
        else
          k_46 = t;
        t = f_46;
        t = g_0(t);
        if(((l_46 != NULL) && (l_46 != t)))
          _fail(t);
        else
          l_46 = t;
        t = g_46;
        t = reverse_acc_2_0(g_0, s_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_8;
      t = h_0(t);
    }
  return(t);
}
ATerm v_6 (ATerm x_34, ATerm y_34, ATerm t)
{
  t = SSL_table_get(x_34, y_34);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,g_9 = NULL;
  r_46 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_46);
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_46);
  g_9 = t;
  t = SSLsetAnnotations(g_9, p_46);
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm t_46 = NULL;
  t_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_46), term_m_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      t = fetch_1_0(t_5, t);
    }
  t = term_r_18;
  t = echo_0_0(t);
  t = term_f_17;
  n_46 = t;
  t = term_g_17;
  o_46 = t;
  t = term_s_18;
  t = v_6(n_46, o_46, t);
  t = reverse_acc_2_0(_id, v_5, t);
  t = map_1_0(x_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
  v_46 = t;
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_46;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_18 = ATgetFirst((ATermList) t);
                ATerm w_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_46;
          }
        ;
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        t = (ATerm) ATinsert(ATempty, v_46);
      }
    w_46 = t;
    t = term_v_13;
    x_46 = t;
    t = SSL_printnl(x_46, w_46);
    t = v_46;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL;
  t = term_x_18;
  b_47 = t;
  t = term_a_8;
  c_47 = t;
  t = term_y_18;
  t = y_6(b_47, c_47, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_z_18;
  return(t);
}
ATerm i_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  t = term_x_18;
  f_47 = t;
  t = term_a_8;
  g_47 = t;
  t = term_y_18;
  t = y_6(f_47, g_47, t);
  t = term_a_19;
  d_47 = t;
  t = term_a_8;
  e_47 = t;
  t = term_b_19;
  t = y_6(d_47, e_47, t);
  t = term_f_19;
  return(t);
}
ATerm x_6 (ATerm t)
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
      t = Option_3_0(z_5, d_6, g_6, t);
      ;
      LocalPopChoice(i_19);
    }
  else
    {
      t = h_19;
      t = Option_3_0(i_6, u_6, x_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_103 (ATerm), ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,x_47 = NULL,y_47 = NULL,q_9 = NULL;
  s_47 = t;
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_19;
        t = u_103(t);
        ;
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
      }
    t = s_47;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_47 = ATgetFirst((ATermList) t);
        v_47 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_47);
    t_47 = t;
    t = term_u_17;
    y_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_17, u_47);
    t = y_6(y_47, u_47, t);
    t = v_47;
    {
      ATerm i_48 (ATerm t)
      {
        ATerm m_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_19 = t;
            int r_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_48 = NULL;
                b_48 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = b_48;
                ;
                LocalPopChoice(r_19);
              }
            else
              {
                t = q_19;
                t = u_103(t);
                t = Cons_2_0(_id, i_48, t);
              }
            ;
            LocalPopChoice(p_19);
          }
        else
          {
            t = m_19;
            {
              ATerm e_48 = NULL,f_48 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_48 = ATgetFirst((ATermList) t);
                  f_48 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_48), (ATerm) ATmakeAppl(sym_Undefined_1, e_48));
            }
          }
        return(t);
      }
      t = i_48(t);
      x_47 = t;
      t = (ATerm) ATinsert(CheckATermList(x_47), (ATerm) ATmakeAppl(sym_Program_1, u_47));
      q_9 = t;
      t = SSLsetAnnotations(q_9, t_47);
    }
  }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm w_48 = NULL;
  w_48 = t;
  if(match_string(t, "--help"))
    {
      t = w_48;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_48;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_48;
        }
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL;
  t = term_k_18;
  x_48 = t;
  t = term_a_8;
  y_48 = t;
  t = term_s_19;
  t = y_6(x_48, y_48, t);
  t = term_t_19;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm g_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_103 (ATerm), ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
  p_48 = t;
  t = term_f_17;
  t_48 = t;
  t = term_g_17;
  u_48 = t;
  t = (ATerm) ATempty;
  v_48 = t;
  t = SSL_table_put(t_48, u_48, v_48);
  t = p_48;
  {
    ATerm a_7 (ATerm t)
    {
      ATerm z_19 = t;
      int d_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_103(t);
          ;
          LocalPopChoice(d_20);
        }
      else
        {
          t = z_19;
          {
            ATerm h_20 = t;
            int i_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_7, c_7, e_7, t);
                ;
                LocalPopChoice(i_20);
              }
            else
              {
                t = h_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_7, t);
    {
      ATerm m_20 = t;
      int n_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_49 = NULL;
          k_49 = t;
          {
            ATerm o_20 = t;
            int p_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_22 = NULL;
                t = k_49;
                {
                  ATerm q_20 = t;
                  int r_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_k_18;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(r_20);
                    }
                  else
                    {
                      t = q_20;
                      t = fetch_1_0(g_7, t);
                    }
                  t = k_49;
                  t = default_system_usage_0_0(t);
                  t = term_c_16;
                  t_22 = t;
                  t = SSL_exit(t_22);
                }
                ;
                LocalPopChoice(p_20);
              }
            else
              {
                t = o_20;
                {
                  ATerm u_24 = NULL;
                  t = term_x_18;
                  t = get_config_0_0(t);
                  t = k_49;
                  t = default_system_about_0_0(t);
                  t = term_c_16;
                  u_24 = t;
                  t = SSL_exit(u_24);
                }
              }
          }
          ;
          LocalPopChoice(n_20);
        }
      else
        {
          t = m_20;
          {
            ATerm s_20 = t;
            int t_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
                ATerm h_7 (ATerm t)
                {
                  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL,s_9 = NULL;
                  q_49 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      p_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_49);
                  o_49 = t;
                  t = p_49;
                  if(((n_48 != NULL) && (n_48 != t)))
                    _fail(t);
                  else
                    n_48 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, p_49);
                  s_9 = t;
                  t = SSLsetAnnotations(s_9, o_49);
                  return(t);
                }
                t = fetch_1_0(h_7, t);
                t = term_b_8;
                m_49 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_48)), term_u_20);
                n_49 = t;
                t = SSL_printnl(m_49, n_49);
                t = (ATerm) ATmakeAppl(sym__2, term_b_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_48)), term_u_20));
                t = default_system_usage_0_0(t);
                t = term_e_8;
                l_49 = t;
                t = SSL_exit(l_49);
                ;
                LocalPopChoice(t_20);
              }
            else
              {
                t = s_20;
              }
          }
        }
      o_48 = t;
      t = term_f_17;
      s_48 = t;
      t = SSL_table_destroy(s_48);
      t = o_48;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL;
  t = parse_options_1_0(t_101, t);
  v_49 = t;
  t = term_y_20;
  y_49 = t;
  t = SSL_table_create(y_49);
  t = term_y_20;
  w_49 = t;
  t = term_b_21;
  x_49 = t;
  t = SSL_table_put(w_49, x_49, v_49);
  t = v_49;
  t = v_101(t);
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_101, t);
        ;
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        {
          ATerm f_21 = t;
          int l_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_101(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(l_21);
            }
          else
            {
              t = f_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = if_verbose2_1_0(q_7, t);
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
  ATerm z_49 = NULL,a_50 = NULL;
  t = term_m_21;
  z_49 = t;
  t = term_a_8;
  a_50 = t;
  t = term_p_21;
  t = y_6(z_49, a_50, t);
  t = term_u_21;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_b_22;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL;
  b_50 = t;
  t = term_u_17;
  t = get_config_0_0(t);
  c_50 = t;
  t = term_b_8;
  d_50 = t;
  t = (ATerm) ATinsert(ATempty, c_50);
  e_50 = t;
  t = SSL_printnl(d_50, e_50);
  t = b_50;
  return(t);
}
ATerm iowrap_3_0 (ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm t)
{
  ATerm i_7 (ATerm t)
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_101(t);
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
              t = input_option_0_0(t);
              ;
              LocalPopChoice(f_22);
            }
          else
            {
              t = e_22;
              {
                ATerm g_22 = t;
                int h_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(h_22);
                  }
                else
                  {
                    t = g_22;
                    {
                      ATerm i_22 = t;
                      int k_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(m_7, n_7, o_7, t);
                          ;
                          LocalPopChoice(k_22);
                        }
                      else
                        {
                          t = i_22;
                          {
                            ATerm l_22 = t;
                            int m_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(m_22);
                              }
                            else
                              {
                                t = l_22;
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
    ATerm f_50 = NULL,g_50 = NULL,l_50 = NULL;
    g_50 = t;
    {
      ATerm n_22 = t;
      int o_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((f_50 != NULL) && (f_50 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_50 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_7, t);
          ;
          LocalPopChoice(o_22);
        }
      else
        {
          t = n_22;
          t = term_p_22;
          f_50 = t;
        }
      t = not_null(f_50);
      t = ReadFromFile_0_0(t);
      l_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_50, l_50);
      t = apply_strategy_1_0(c_101, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(i_7, e_101, j_7, k_7, t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,x_9 = NULL,w_9 = NULL,v_9 = NULL;
  x_50 = t;
  if(match_cons(t, sym__2))
    {
      n_50 = ATgetArgument(t, 0);
      o_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_50);
  m_50 = t;
  t = o_50;
  if(match_cons(t, sym_Specification_1))
    {
      q_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_50);
  p_50 = t;
  t = q_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_50 = ATgetFirst((ATermList) t);
      u_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_50);
  s_50 = t;
  t = u_50;
  t = Cons_2_0(v_7, w_7, t);
  v_50 = t;
  t = (ATerm) ATinsert(CheckATermList(v_50), t_50);
  v_9 = t;
  t = SSLsetAnnotations(v_9, s_50);
  w_50 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_50);
  w_9 = t;
  t = SSLsetAnnotations(w_9, p_50);
  r_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_50, r_50);
  x_9 = t;
  t = SSLsetAnnotations(x_9, m_50);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,u_9 = NULL;
  b_51 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      z_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_51);
  y_50 = t;
  t = z_50;
  t = dead_def_elim_0_0(t);
  t = map_1_0(local_dead_def_elim_0_0, t);
  a_51 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_51);
  u_9 = t;
  t = SSLsetAnnotations(u_9, y_50);
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
