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
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
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
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  init_constant_terms();
}
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_m_22;
ATerm term_k_22;
ATerm term_b_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_u_19;
ATerm term_p_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_o_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_x_15;
ATerm term_l_15;
ATerm term_c_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_x_12;
ATerm term_a_11;
ATerm term_w_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_x_8;
ATerm term_h_8;
ATerm term_d_8;
void init_constant_terms (void)
{
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__2, term_r_16, term_s_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym__2, term_b_17, term_h_8);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_l_17);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_h_8);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_h_8);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_h_8);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local        do not eliminate top-level definitions", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_h_8);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm DefDead_0_0 (ATerm);
ATerm filter_1_0 (ATerm x_89 (ATerm), ATerm);
ATerm n_5 (ATerm w_34, ATerm x_34, ATerm y_34, ATerm);
ATerm r_5 (ATerm o_34, ATerm p_34, ATerm);
ATerm end_scope_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm p_89 (ATerm), ATerm);
ATerm scope_2_0 (ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm local_dead_def_elim_0_0 (ATerm);
ATerm map_1_0 (ATerm g_83 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm w_5 (ATerm p_20, ATerm o_20, ATerm);
ATerm y_5 (ATerm t_85 (ATerm), ATerm y_28, ATerm x_28, ATerm);
ATerm foldr_3_0 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm free_vars_3_0 (ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm o_92 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm a_6 (ATerm u_34, ATerm v_34, ATerm);
ATerm Definition_0_0 (ATerm);
ATerm at_end_1_0 (ATerm w_83 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm k_20 (ATerm c_20, ATerm);
ATerm conc_0_0 (ATerm);
ATerm c_6 (ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm c_29, ATerm b_29, ATerm);
ATerm d_6 (ATerm o_85 (ATerm), ATerm w_28, ATerm v_28, ATerm);
ATerm genzip_4_0 (ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm);
ATerm x_1 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm i_6 (ATerm d_589, ATerm i_589, ATerm v_55, ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm k_2 (ATerm);
ATerm h_24 (ATerm x_22, ATerm z_22, ATerm a_23, ATerm);
ATerm l_2 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm k_6 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm j_56, ATerm g_56, ATerm n_56, ATerm k_56, ATerm h_56, ATerm i_56, ATerm);
ATerm GnNext_3_0 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm);
ATerm for_3_0 (ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm graph_nodes_roots_3_0 (ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm);
ATerm n_6 (ATerm t_89 (ATerm), ATerm b_34, ATerm z_33, ATerm);
ATerm r_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm RegisterDefinition_0_0 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm f_3 (ATerm);
ATerm l_3 (ATerm);
ATerm n_3 (ATerm);
ATerm dead_def_elim_0_0 (ATerm);
ATerm y_6 (ATerm t_42, ATerm u_42, ATerm);
ATerm s_3 (ATerm);
ATerm v_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_61 (ATerm), ATerm a_62 (ATerm), ATerm);
ATerm o_6 (ATerm d_45, ATerm e_45, ATerm);
ATerm p_6 (ATerm r_48, ATerm s_48, ATerm);
ATerm r_6 (ATerm f_99 (ATerm), ATerm f_462, ATerm v_48, ATerm);
ATerm q_6 (ATerm n_48, ATerm o_48, ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm output_1_0 (ATerm o_103 (ATerm), ATerm);
ATerm k_35 (ATerm c_35, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm s_6 (ATerm t_48, ATerm);
ATerm debug_1_0 (ATerm d_99 (ATerm), ATerm);
ATerm t_6 (ATerm f_45, ATerm g_45, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm p_37 (ATerm h_36, ATerm);
ATerm s_37 (ATerm l_36, ATerm o_36, ATerm p_36, ATerm);
ATerm t_37 (ATerm b_37, ATerm c_37, ATerm d_37, ATerm);
ATerm u_6 (ATerm);
ATerm d_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm p_103 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm c_7 (ATerm u_49, ATerm v_49, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm a_7 (ATerm j_34, ATerm k_34, ATerm i_34, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm e_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_6 (ATerm n_32, ATerm o_32, ATerm);
ATerm foldr_2_0 (ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_5 (ATerm);
ATerm j_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm p_100 (ATerm), ATerm);
ATerm k_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_5 (ATerm);
ATerm need_help_1_0 (ATerm f_103 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm z_6 (ATerm a_36, ATerm b_36, ATerm);
ATerm p_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm q_83 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm i_105 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm w_6 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm parse_options_1_0 (ATerm h_105 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm DefDead_0_0 (ATerm t)
{
  ATerm f_1 = NULL,g_1 = NULL;
  f_1 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      g_1 = ATgetArgument(t, 0);
      {
        ATerm x_7 = ATgetArgument(t, 1);
      }
      {
        ATerm z_7 = ATgetArgument(t, 2);
      }
      {
        ATerm a_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm b_8 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL,k_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, g_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        z_0 = t;
        t = term_d_8;
        k_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATmakeAppl(sym_SDefT_4, g_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
        t = a_6(k_1, z_0, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(c_8);
      }
    else
      {
        t = b_8;
        {
          ATerm h_2 = NULL,i_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, g_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
          h_2 = t;
          t = term_d_8;
          i_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATmakeAppl(sym_SDefT_4, g_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
          t = a_6(i_2, h_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm f_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_8) != ATmakeSymbol("j_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_h_8;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,c_2 = NULL;
  z_1 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_1;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_2 = ATgetFirst((ATermList) t);
          c_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 = NULL,u_2 = NULL,v_2 = NULL,a_0 = NULL;
            t = SSLgetAnnotations(z_1);
            o_2 = t;
            t = a_2;
            t = x_89(t);
            u_2 = t;
            t = c_2;
            t = filter_1_0(x_89, t);
            v_2 = t;
            t = (ATerm) ATinsert(CheckATermList(v_2), u_2);
            a_0 = t;
            t = SSLsetAnnotations(a_0, o_2);
            ;
            LocalPopChoice(n_8);
          }
        else
          {
            t = m_8;
            t = c_2;
            t = filter_1_0(x_89, t);
          }
      }
    }
  return(t);
}
ATerm n_5 (ATerm w_34, ATerm x_34, ATerm y_34, ATerm t)
{
  ATerm j_2 = NULL,p_2 = NULL,s_2 = NULL;
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_34, x_34);
  t = z_6(w_34, x_34, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_8 = ATgetFirst((ATermList) t);
      j_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_2), y_34);
  s_2 = t;
  t = SSL_table_put(w_34, x_34, s_2);
  t = p_2;
  return(t);
}
ATerm r_5 (ATerm o_34, ATerm p_34, ATerm t)
{
  ATerm t_2 = NULL,b_3 = NULL;
  b_3 = t;
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_34, p_34);
        t = z_6(o_34, p_34, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_8 = ATgetFirst((ATermList) t);
            t_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_8);
        t = SSL_table_put(o_34, p_34, t_2);
        t = (ATerm) ATmakeAppl(sym__3, o_34, p_34, t_2);
      }
    else
      {
        t = p_8;
        t = SSL_table_remove(o_34, p_34);
        t = (ATerm) ATmakeAppl(sym__2, o_34, p_34);
      }
    t = b_3;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL;
  h_3 = t;
  t = q_89(t);
  g_3 = t;
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_3 = NULL;
        t = term_x_8;
        k_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_3, term_x_8);
        t = z_6(g_3, k_3, t);
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_3 = ATgetFirst((ATermList) t);
        d_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_x_8;
    i_3 = t;
    t = SSL_table_put(g_3, i_3, d_3);
    t = e_3;
    {
      ATerm n_0 (ATerm t)
      {
        ATerm m_3 = NULL;
        m_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_3, m_3);
        t = r_5(g_3, m_3, t);
        return(t);
      }
      t = map_1_0(n_0, t);
      t = h_3;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm t)
{
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_80(t);
      t = n_80(t);
      ;
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      t = n_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_89 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,q_3 = NULL,r_3 = NULL,t_3 = NULL,u_3 = NULL;
  q_3 = t;
  t = p_89(t);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_3, term_x_8);
  {
    ATerm a_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_9 = ATgetArgument(t, 0);
            ATerm h_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_8;
        y_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_3, term_x_8);
        t = z_6(o_3, y_3, t);
        ;
        LocalPopChoice(d_9);
      }
    else
      {
        t = a_9;
        t = (ATerm) ATempty;
      }
    r_3 = t;
    t = term_x_8;
    t_3 = t;
    t = (ATerm) ATinsert(CheckATermList(r_3), (ATerm) ATempty);
    u_3 = t;
    t = SSL_table_put(o_3, t_3, u_3);
    t = q_3;
  }
  return(t);
}
ATerm scope_2_0 (ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    t = end_scope_1_0(r_89, t);
    return(t);
  }
  t = begin_scope_1_0(r_89, t);
  t = restore_always_2_0(s_89, q_0, t);
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_d_8;
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      z_3 = ATgetArgument(t, 0);
      {
        ATerm i_9 = ATgetArgument(t, 1);
      }
      {
        ATerm j_9 = ATgetArgument(t, 2);
      }
      {
        ATerm k_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, z_3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  b_4 = t;
  t = term_m_9;
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, z_3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_m_9);
  t = n_6(v_0, b_4, c_4, t);
  t = a_4;
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_d_8;
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm n_9 = t;
  if((PushChoice() == 0))
    {
      t = DefDead_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_9;
    }
  return(t);
}
ATerm local_dead_def_elim_0_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,d_5 = NULL,f_5 = NULL,g_5 = NULL,i_5 = NULL;
    i_5 = t;
    if(match_cons(t, sym_Let_2))
      {
        d_5 = ATgetArgument(t, 0);
        g_5 = ATgetArgument(t, 1);
        {
          ATerm o_9 = t;
          int p_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_3 = NULL,p_3 = NULL,o_0 = NULL;
              t = SSLgetAnnotations(i_5);
              j_3 = t;
              t = d_5;
              t = map_1_0(u_0, t);
              p_3 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, p_3, g_5);
              o_0 = t;
              t = SSLsetAnnotations(o_0, j_3);
              ;
              LocalPopChoice(p_9);
            }
          else
            {
              t = o_9;
              t = i_5;
            }
        }
      }
    else
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_CallT_3))
              {
                d_5 = ATgetArgument(t, 0);
                {
                  ATerm s_9 = ATgetArgument(t, 1);
                }
                {
                  ATerm t_9 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(r_9);
            t = d_5;
            if(match_cons(t, sym_SVar_1))
              {
                f_5 = ATgetArgument(t, 0);
                {
                  ATerm u_9 = t;
                  int v_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_5 = NULL,j_6 = NULL,g_7 = NULL;
                      t = term_d_8;
                      x_5 = t;
                      t = (ATerm) ATmakeAppl(sym_SDefT_4, f_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
                      j_6 = t;
                      t = term_w_9;
                      g_7 = t;
                      t = (ATerm) ATmakeAppl(sym__3, term_d_8, (ATerm)ATmakeAppl(sym_SDefT_4, f_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_w_9);
                      t = n_5(x_5, j_6, g_7, t);
                      t = i_5;
                      ;
                      LocalPopChoice(v_9);
                    }
                  else
                    {
                      t = u_9;
                      t = i_5;
                    }
                }
              }
            else
              {
                t = i_5;
              }
          }
        else
          {
            t = q_9;
            t = i_5;
          }
      }
    t = SRTS_all(local_dead_def_elim_0_0, t);
    l_8 = t;
    if(match_cons(t, sym_Let_2))
      {
        j_8 = ATgetArgument(t, 0);
        k_8 = ATgetArgument(t, 1);
        {
          ATerm b_10 = t;
          int d_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_4 = NULL,o_4 = NULL,p_0 = NULL;
              t = SSLgetAnnotations(l_8);
              j_4 = t;
              t = j_8;
              t = filter_1_0(w_0, t);
              o_4 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, o_4, k_8);
              p_0 = t;
              t = SSLsetAnnotations(p_0, j_4);
              ;
              LocalPopChoice(d_10);
            }
          else
            {
              t = b_10;
              t = l_8;
            }
        }
      }
    else
      {
        t = l_8;
      }
    return(t);
  }
  t = scope_2_0(r_0, t_0, t);
  return(t);
}
ATerm map_1_0 (ATerm g_83 (ATerm), ATerm t)
{
  ATerm a_10 (ATerm t)
  {
    ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
    x_9 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_9;
      }
    else
      {
        ATerm m_5 = NULL,q_5 = NULL,s_5 = NULL,s_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_9 = ATgetFirst((ATermList) t);
            z_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_9);
        m_5 = t;
        t = y_9;
        t = g_83(t);
        q_5 = t;
        t = z_9;
        t = a_10(t);
        s_5 = t;
        t = (ATerm) ATinsert(CheckATermList(s_5), q_5);
        s_0 = t;
        t = SSLsetAnnotations(s_0, m_5);
      }
    return(t);
  }
  t = a_10(t);
  return(t);
}
ATerm sboundin_3_0 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,q_13 = NULL,s_13 = NULL,t_13 = NULL;
  q_13 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
      {
        ATerm l_6 = NULL,x_6 = NULL,b_7 = NULL,a_1 = NULL;
        t = SSLgetAnnotations(q_13);
        l_6 = t;
        t = s_13;
        t = k_76(t);
        x_6 = t;
        t = t_13;
        t = k_76(t);
        b_7 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_6, b_7);
        a_1 = t;
        t = SSLsetAnnotations(a_1, l_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          s_13 = ATgetArgument(t, 0);
          t_13 = ATgetArgument(t, 1);
          m_13 = ATgetArgument(t, 2);
          {
            ATerm r_7 = NULL,v_7 = NULL,w_7 = NULL,y_7 = NULL,b_1 = NULL;
            t = SSLgetAnnotations(q_13);
            r_7 = t;
            t = s_13;
            t = m_76(t);
            v_7 = t;
            t = t_13;
            t = m_76(t);
            w_7 = t;
            t = m_13;
            t = k_76(t);
            y_7 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, v_7, w_7, y_7);
            b_1 = t;
            t = SSLsetAnnotations(b_1, r_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              s_13 = ATgetArgument(t, 0);
              t_13 = ATgetArgument(t, 1);
              m_13 = ATgetArgument(t, 2);
              n_13 = ATgetArgument(t, 3);
              {
                ATerm w_8 = NULL,b_9 = NULL,c_9 = NULL,f_9 = NULL,g_9 = NULL,c_1 = NULL;
                t = SSLgetAnnotations(q_13);
                w_8 = t;
                t = s_13;
                t = m_76(t);
                b_9 = t;
                t = t_13;
                t = m_76(t);
                c_9 = t;
                t = m_13;
                t = m_76(t);
                f_9 = t;
                t = n_13;
                t = k_76(t);
                g_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, b_9, c_9, f_9, g_9);
                c_1 = t;
                t = SSLsetAnnotations(c_1, w_8);
              }
            }
          else
            {
              ATerm c_10 = NULL,f_10 = NULL,g_10 = NULL,d_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  s_13 = ATgetArgument(t, 0);
                  t_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(q_13);
              c_10 = t;
              t = s_13;
              t = m_76(t);
              f_10 = t;
              t = t_13;
              t = k_76(t);
              g_10 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, f_10, g_10);
              d_1 = t;
              t = SSLsetAnnotations(d_1, c_10);
            }
        }
    }
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm f_14 = NULL;
  ATerm e_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_14 = ATgetArgument(t, 0);
          {
            ATerm i_10 = ATgetArgument(t, 1);
          }
          {
            ATerm j_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_10);
      t = f_14;
    }
  else
    {
      t = e_10;
      if(match_cons(t, sym_SDefT_4))
        {
          f_14 = ATgetArgument(t, 0);
          {
            ATerm k_10 = ATgetArgument(t, 1);
          }
          {
            ATerm l_10 = ATgetArgument(t, 2);
          }
          {
            ATerm m_10 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = f_14;
    }
  return(t);
}
ATerm w_5 (ATerm p_20, ATerm o_20, ATerm t)
{
  t = p_20;
  t = map_1_0(x_0, t);
  return(t);
}
ATerm y_5 (ATerm t_85 (ATerm), ATerm y_28, ATerm x_28, ATerm t)
{
  ATerm a_16 (ATerm t)
  {
    ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
    s_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_15 = ATgetFirst((ATermList) t);
            u_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_10 = t;
          int o_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_15;
              {
                ATerm y_0 (ATerm t)
                {
                  t = x_28;
                  return(t);
                }
                t = c_6(t_85, y_0, t_15, u_15, t);
                t = a_16(t);
              }
              ;
              LocalPopChoice(o_10);
            }
          else
            {
              t = n_10;
              {
                ATerm z_10 = NULL,f_11 = NULL,p_1 = NULL;
                t = SSLgetAnnotations(s_15);
                z_10 = t;
                t = u_15;
                t = a_16(t);
                f_11 = t;
                t = (ATerm) ATinsert(CheckATermList(f_11), t_15);
                p_1 = t;
                t = SSLsetAnnotations(p_1, z_10);
              }
            }
        }
      }
    return(t);
  }
  t = y_28;
  t = a_16(t);
  return(t);
}
ATerm foldr_3_0 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm t)
{
  ATerm k_16 = NULL,m_16 = NULL,q_16 = NULL;
  k_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_16;
      t = j_88(t);
    }
  else
    {
      ATerm u_16 = NULL,v_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_16 = ATgetFirst((ATermList) t);
          q_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_16;
      t = l_88(t);
      u_16 = t;
      t = q_16;
      t = foldr_3_0(j_88, k_88, l_88, t);
      v_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_16, v_16);
      t = k_88(t);
    }
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm b_12 = NULL,d_12 = NULL;
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(l_1, b_12, d_12, t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      e_12 = ATgetArgument(t, 0);
      if((e_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL;
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_5(o_1, t_12, u_12, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm v_12 = NULL;
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      if((v_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm o_92 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_17 (ATerm t)
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_92(t);
        ;
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        {
          ATerm r_10 = t;
          int s_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_16 = NULL,a_17 = NULL,t_11 = NULL,u_11 = NULL;
              z_16 = t;
              t = n_92(t);
              a_17 = t;
              t = z_16;
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm c_17 = NULL;
                  t = m_17(t);
                  c_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_17, a_17);
                  t = diff_0_0(t);
                  return(t);
                }
                t = o_92(e_1, m_17, h_1, t);
                u_11 = t;
                t = SSL_explode_term(u_11);
                if(match_cons(t, sym__2))
                  {
                    ATerm t_10 = ATgetArgument(t, 0);
                    t_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_11;
                t = foldr_3_0(i_1, j_1, _id, t);
              }
              ;
              LocalPopChoice(s_10);
            }
          else
            {
              t = r_10;
              {
                ATerm l_12 = NULL,m_12 = NULL;
                m_12 = t;
                t = SSL_explode_term(m_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm u_10 = ATgetArgument(t, 0);
                    l_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_12;
                t = foldr_3_0(m_1, n_1, m_17, t);
              }
            }
        }
      }
    return(t);
  }
  t = m_17(t);
  return(t);
}
ATerm a_6 (ATerm u_34, ATerm v_34, ATerm t)
{
  ATerm n_17 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_34, v_34);
  t = z_6(u_34, v_34, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_17 = ATgetFirst((ATermList) t);
      {
        ATerm v_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_17;
  return(t);
}
ATerm Definition_0_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  i_18 = t;
  if(match_cons(t, sym__2))
    {
      j_18 = ATgetArgument(t, 0);
      {
        ATerm w_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_14 = NULL,h_14 = NULL,i_14 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, j_18, (ATerm) ATempty);
        h_14 = t;
        t = term_a_11;
        i_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_11, (ATerm) ATmakeAppl(sym__2, j_18, (ATerm) ATempty));
        t = a_6(i_14, h_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm b_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_11) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            b_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_14;
        ;
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        {
          ATerm c_11 = t;
          int d_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_14 = NULL,s_14 = NULL,t_14 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, j_18, (ATerm) ATempty);
              s_14 = t;
              t = term_a_11;
              t_14 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_a_11, (ATerm) ATmakeAppl(sym__2, j_18, (ATerm) ATempty));
              t = a_6(t_14, s_14, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm e_11 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_11) != ATmakeSymbol("f_0", 0, ATtrue)))
                    _fail(t);
                  p_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_14;
              ;
              LocalPopChoice(d_11);
            }
          else
            {
              t = c_11;
              {
                ATerm a_15 = NULL,d_15 = NULL,e_15 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, j_18, (ATerm) ATempty);
                d_15 = t;
                t = term_a_11;
                e_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_a_11, (ATerm) ATmakeAppl(sym__2, j_18, (ATerm) ATempty));
                t = a_6(e_15, d_15, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm g_11 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) g_11) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    a_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_15;
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm w_83 (ATerm), ATerm t)
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
          ATerm n_15 = NULL,y_15 = NULL,r_1 = NULL;
          t = SSLgetAnnotations(x_19);
          n_15 = t;
          t = w_19;
          t = y_19(t);
          y_15 = t;
          t = (ATerm) ATinsert(CheckATermList(y_15), v_19);
          r_1 = t;
          t = SSLsetAnnotations(r_1, n_15);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_19;
        t = w_83(t);
      }
    return(t);
  }
  t = y_19(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,v_18 = NULL;
  r_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_18;
    }
  else
    {
      ATerm q_1 (ATerm t)
      {
        t = not_null(v_18);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_18 = ATgetFirst((ATermList) t);
          if(((v_18 != NULL) && (v_18 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_18;
      t = at_end_1_0(q_1, t);
    }
  return(t);
}
ATerm k_20 (ATerm c_20, ATerm t)
{
  ATerm d_20 = NULL;
  t = SSL_explode_term(c_20);
  if(match_cons(t, sym__2))
    {
      ATerm h_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_11) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              t = g_20;
              return(t);
            }
            t = f_20;
            t = at_end_1_0(s_1, t);
            ;
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
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
ATerm c_6 (ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm c_29, ATerm b_29, ATerm t)
{
  t = x_85(t);
  {
    ATerm u_1 (ATerm t)
    {
      ATerm l_20 = NULL;
      l_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_29, l_20);
      t = w_85(t);
      return(t);
    }
    t = fetch_1_0(u_1, t);
    t = b_29;
  }
  return(t);
}
ATerm d_6 (ATerm o_85 (ATerm), ATerm w_28, ATerm v_28, ATerm t)
{
  ATerm d_21 (ATerm t)
  {
    ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
    y_20 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_20;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_20 = ATgetFirst((ATermList) t);
            a_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_11 = t;
          int l_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_20;
              {
                ATerm w_1 (ATerm t)
                {
                  t = v_28;
                  return(t);
                }
                t = c_6(o_85, w_1, z_20, a_21, t);
                t = d_21(t);
              }
              ;
              LocalPopChoice(l_11);
            }
          else
            {
              t = k_11;
              {
                ATerm j_16 = NULL,o_16 = NULL,t_1 = NULL;
                t = SSLgetAnnotations(y_20);
                j_16 = t;
                t = a_21;
                t = d_21(t);
                o_16 = t;
                t = (ATerm) ATinsert(CheckATermList(o_16), z_20);
                t_1 = t;
                t = SSLsetAnnotations(t_1, j_16);
              }
            }
        }
      }
    return(t);
  }
  t = w_28;
  t = d_21(t);
  return(t);
}
ATerm genzip_4_0 (ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm t)
{
  ATerm p_21 (ATerm t)
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_81(t);
        ;
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        {
          ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,n_21 = NULL,o_21 = NULL,v_1 = NULL;
          t = s_81(t);
          o_21 = t;
          if(match_cons(t, sym__2))
            {
              g_21 = ATgetArgument(t, 0);
              h_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_21);
          f_21 = t;
          t = g_21;
          t = u_81(t);
          i_21 = t;
          t = h_21;
          t = p_21(t);
          n_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_21, n_21);
          v_1 = t;
          t = SSLsetAnnotations(v_1, f_21);
          t = t_81(t);
        }
      }
    return(t);
  }
  t = p_21(t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_11 = ATgetArgument(t, 0);
      if(((ATgetType(o_11) != AT_LIST) || !(ATisEmpty(o_11))))
        _fail(t);
      {
        ATerm p_11 = ATgetArgument(t, 1);
        if(((ATgetType(p_11) != AT_LIST) || !(ATisEmpty(p_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_11 = ATgetArgument(t, 0);
      if(((ATgetType(q_11) == AT_LIST) && !(ATisEmpty(q_11))))
        {
          y_21 = ATgetFirst((ATermList) q_11);
          z_21 = (ATerm) ATgetNext((ATermList) q_11);
        }
      else
        _fail(t);
      {
        ATerm r_11 = ATgetArgument(t, 1);
        if(((ATgetType(r_11) == AT_LIST) && !(ATisEmpty(r_11))))
          {
            a_22 = ATgetFirst((ATermList) r_11);
            b_22 = (ATerm) ATgetNext((ATermList) r_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_21, a_22), (ATerm) ATmakeAppl(sym__2, z_21, b_22));
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL;
  if(match_cons(t, sym__2))
    {
      c_22 = ATgetArgument(t, 0);
      d_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_22), c_22);
  return(t);
}
ATerm i_6 (ATerm d_589, ATerm i_589, ATerm v_55, ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL;
  t = SSL_explode_term(i_589);
  if(match_cons(t, sym__2))
    {
      r_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_589);
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
  t = genzip_4_0(x_1, b_2, d_2, _id, t);
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_21, v_55);
  t = conc_0_0(t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm n_22 = NULL;
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, n_22);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,w_22 = NULL,y_1 = NULL;
  w_22 = t;
  if(match_cons(t, sym__2))
    {
      p_22 = ATgetArgument(t, 0);
      q_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_22);
  o_22 = t;
  t = q_22;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_22, q_22);
  y_1 = t;
  t = SSLsetAnnotations(y_1, o_22);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
  t_23 = t;
  if(match_cons(t, sym__2))
    {
      u_23 = ATgetArgument(t, 0);
      v_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_23;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_23 = ATgetFirst((ATermList) t);
      x_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_24(u_23, v_23, t_23, t);
            ;
            LocalPopChoice(v_11);
          }
        else
          {
            t = s_11;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_23), w_23), x_23);
          }
      }
    }
  else
    {
      t = h_24(u_23, v_23, t_23, t);
    }
  return(t);
}
ATerm h_24 (ATerm x_22, ATerm z_22, ATerm a_23, ATerm t)
{
  ATerm b_23 = NULL,e_23 = NULL,e_2 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL;
  t = SSLgetAnnotations(a_23);
  b_23 = t;
  t = z_22;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_23 = ATgetFirst((ATermList) t);
      n_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_23;
  if(match_cons(t, sym__2))
    {
      l_23 = ATgetArgument(t, 0);
      m_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_23;
        if((l_23 != t))
          {
            _fail(t);
          }
        t = n_23;
        ;
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = z_22;
        t = i_6(l_23, m_23, n_23, t);
      }
    e_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_22, e_23);
    e_2 = t;
    t = SSLsetAnnotations(e_2, b_23);
  }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm g_24 = NULL;
  if(match_cons(t, sym__2))
    {
      g_24 = ATgetArgument(t, 0);
      if((g_24 != ATgetArgument(t, 1)))
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
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_2, g_2, k_2, t);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
        b_24 = t;
        if(match_cons(t, sym__2))
          {
            c_24 = ATgetArgument(t, 0);
            d_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_24;
        t = d_6(l_2, c_24, d_24, t);
      }
    }
  return(t);
}
ATerm k_6 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm j_56, ATerm g_56, ATerm n_56, ATerm k_56, ATerm h_56, ATerm i_56, ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_56, k_56);
  t = l_106(t);
  i_24 = t;
  t = m_106(t);
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_24, n_56);
  t = diff_0_0(t);
  k_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_24, g_56);
  t = conc_0_0(t);
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_24, n_56);
  t = conc_0_0(t);
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_56, i_24, h_56);
  t = n_106(t);
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym__5, l_24, m_24, k_56, n_24, i_56);
  return(t);
}
ATerm GnNext_3_0 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm a_12 = ATgetArgument(t, 0);
      if(((ATgetType(a_12) == AT_LIST) && !(ATisEmpty(a_12))))
        {
          p_24 = ATgetFirst((ATermList) a_12);
          q_24 = (ATerm) ATgetNext((ATermList) a_12);
        }
      else
        _fail(t);
      r_24 = ATgetArgument(t, 1);
      s_24 = ATgetArgument(t, 2);
      t_24 = ATgetArgument(t, 3);
      u_24 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = k_6(l_106, m_106, n_106, p_24, q_24, r_24, s_24, t_24, u_24, t);
  return(t);
}
ATerm while_not_2_0 (ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm t)
{
  ATerm v_24 (ATerm t)
  {
    ATerm c_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_94(t);
        ;
        LocalPopChoice(f_12);
      }
    else
      {
        t = c_12;
        t = y_94(t);
        t = v_24(t);
      }
    return(t);
  }
  t = v_24(t);
  return(t);
}
ATerm for_3_0 (ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm t)
{
  t = a_95(t);
  t = while_not_2_0(b_95, c_95, t);
  return(t);
}
ATerm m_2 (ATerm t)
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
ATerm n_2 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm g_12 = ATgetArgument(t, 0);
      if(((ATgetType(g_12) != AT_LIST) || !(ATisEmpty(g_12))))
        _fail(t);
      {
        ATerm h_12 = ATgetArgument(t, 1);
      }
      {
        ATerm i_12 = ATgetArgument(t, 2);
      }
      e_25 = ATgetArgument(t, 3);
      f_25 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_25, f_25);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm t)
{
  ATerm y_24 = NULL;
  ATerm q_2 (ATerm t)
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(i_106, j_106, k_106, t);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        {
          ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
          if(match_cons(t, sym__5))
            {
              h_25 = ATgetArgument(t, 0);
              k_25 = ATgetArgument(t, 1);
              l_25 = ATgetArgument(t, 2);
              m_25 = ATgetArgument(t, 3);
              n_25 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = h_25;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_25 = ATgetFirst((ATermList) t);
              j_25 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, j_25, k_25, l_25, m_25, (ATerm) ATinsert(CheckATermList(n_25), i_25));
        }
      }
    return(t);
  }
  t = for_3_0(m_2, n_2, q_2, t);
  if(match_cons(t, sym__2))
    {
      y_24 = ATgetArgument(t, 0);
      {
        ATerm n_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_24;
  return(t);
}
ATerm n_6 (ATerm t_89 (ATerm), ATerm b_34, ATerm z_33, ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,g_26 = NULL;
  a_26 = t;
  t = t_89(t);
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_25, b_34, z_33);
  t = a_7(x_25, b_34, z_33, t);
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_26 = NULL;
        t = term_x_8;
        h_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_25, term_x_8);
        t = z_6(x_25, h_26, t);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_25 = ATgetFirst((ATermList) t);
        z_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_x_8;
    b_26 = t;
    t = (ATerm) ATinsert(CheckATermList(z_25), (ATerm) ATinsert(CheckATermList(y_25), b_34));
    g_26 = t;
    t = SSL_table_put(x_25, b_26, g_26);
    t = a_26;
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL;
  j_26 = t;
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDef_3))
          {
            k_26 = ATgetArgument(t, 0);
            {
              ATerm s_12 = ATgetArgument(t, 1);
            }
            {
              ATerm w_12 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(r_12);
        {
          ATerm c_27 = NULL,d_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, k_26, (ATerm) ATempty);
          c_27 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_12, j_26);
          d_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_26, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_x_12, j_26));
          t = n_6(r_2, c_27, d_27, t);
          t = j_26;
        }
      }
    else
      {
        t = q_12;
        {
          ATerm y_12 = t;
          int z_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  k_26 = ATgetArgument(t, 0);
                  {
                    ATerm a_13 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm b_13 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm c_13 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(z_12);
              {
                ATerm h_27 = NULL,i_27 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, k_26, (ATerm) ATempty);
                h_27 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_13, j_26);
                i_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_26, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_d_13, j_26));
                t = n_6(w_2, h_27, i_27, t);
                t = j_26;
              }
            }
          else
            {
              t = y_12;
              {
                ATerm m_27 = NULL,n_27 = NULL;
                if(match_cons(t, sym_SDefT_4))
                  {
                    k_26 = ATgetArgument(t, 0);
                    {
                      ATerm e_13 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm f_13 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm g_13 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, k_26, (ATerm) ATempty);
                m_27 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_13, j_26);
                n_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_26, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_h_13, j_26));
                t = n_6(x_2, m_27, n_27, t);
                t = j_26;
              }
            }
        }
      }
  }
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = free_vars_3_0(a_3, c_3, sboundin_3_0, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm i_13 = ATgetArgument(t, 0);
      x_30 = ATgetArgument(t, 1);
      y_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_30), x_30);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm a_28 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      a_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_28);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm d_28 = NULL,g_28 = NULL,i_28 = NULL,j_28 = NULL,p_28 = NULL;
  d_28 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_28 = ATgetArgument(t, 0);
      i_28 = ATgetArgument(t, 1);
      t = d_28;
      t = w_5(g_28, i_28, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          g_28 = ATgetArgument(t, 0);
          i_28 = ATgetArgument(t, 1);
          j_28 = ATgetArgument(t, 2);
          t = i_28;
          t = map_1_0(f_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              g_28 = ATgetArgument(t, 0);
              i_28 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, g_28);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  g_28 = ATgetArgument(t, 0);
                  i_28 = ATgetArgument(t, 1);
                  j_28 = ATgetArgument(t, 2);
                  p_28 = ATgetArgument(t, 3);
                  t = i_28;
                  t = map_1_0(l_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_28 = ATgetArgument(t, 0);
                      i_28 = ATgetArgument(t, 1);
                      j_28 = ATgetArgument(t, 2);
                      p_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_28;
                  t = map_1_0(n_3, t);
                }
            }
        }
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm k_29 = NULL;
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_29 = ATgetArgument(t, 0);
          {
            ATerm l_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_13);
      t = k_29;
    }
  else
    {
      t = j_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_29;
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm b_30 = NULL;
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_30 = ATgetArgument(t, 0);
          {
            ATerm r_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_13);
      t = b_30;
    }
  else
    {
      t = o_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_30;
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm u_30 = NULL;
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_30 = ATgetArgument(t, 0);
          {
            ATerm w_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_13);
      t = u_30;
    }
  else
    {
      t = u_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_30;
    }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm x_27 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  x_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_x_13), x_27, (ATerm) ATempty);
  t = graph_nodes_roots_3_0(Definition_0_0, y_2, z_2, t);
  return(t);
}
ATerm y_6 (ATerm t_42, ATerm u_42, ATerm t)
{
  t = SSL_strcat(t_42, u_42);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_31 = NULL;
      f_31 = t;
      t = SSL_is_string(f_31);
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm e_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_3, t);
            ;
            LocalPopChoice(g_14);
          }
        else
          {
            t = e_14;
            {
              ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
              l_31 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_31 = ATgetArgument(t, 0);
                  t = m_31;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_31 = ATgetArgument(t, 0);
                      t = m_31;
                      {
                        ATerm j_14 = t;
                        int k_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_14);
                          }
                        else
                          {
                            t = j_14;
                            t = debug_1_0(v_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_31 = NULL,s_31 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_31 = ATgetArgument(t, 0);
                          n_31 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_31;
                      t = eval_config_0_0(t);
                      r_31 = t;
                      t = n_31;
                      t = eval_config_0_0(t);
                      s_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_31, s_31);
                      t = y_6(r_31, s_31, t);
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
  ATerm w_31 = NULL,z_31 = NULL;
  w_31 = t;
  t = term_l_14;
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_14, w_31);
  t = z_6(z_31, w_31, t);
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_32 = NULL,b_32 = NULL;
        t = eval_config_0_0(t);
        a_32 = t;
        t = term_l_14;
        b_32 = t;
        t = SSL_table_put(b_32, w_31, a_32);
        t = a_32;
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
      }
  }
  return(t);
}
ATerm Cons_2_0 (ATerm z_61 (ATerm), ATerm a_62 (ATerm), ATerm t)
{
  ATerm e_32 = NULL,i_32 = NULL,l_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,n_4 = NULL;
  s_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_32 = ATgetFirst((ATermList) t);
      l_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_32);
  e_32 = t;
  t = i_32;
  t = z_61(t);
  q_32 = t;
  t = l_32;
  t = a_62(t);
  r_32 = t;
  t = (ATerm) ATinsert(CheckATermList(r_32), q_32);
  n_4 = t;
  t = SSLsetAnnotations(n_4, e_32);
  return(t);
}
ATerm o_6 (ATerm d_45, ATerm e_45, ATerm t)
{
  ATerm t_32 = NULL;
  t = SSL_fputc(d_45, e_45);
  t_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_32);
  return(t);
}
ATerm p_6 (ATerm r_48, ATerm s_48, ATerm t)
{
  ATerm x_32 = NULL;
  t = SSL_write_term_to_stream_text(r_48, s_48);
  x_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_32);
  return(t);
}
ATerm r_6 (ATerm f_99 (ATerm), ATerm f_462, ATerm v_48, ATerm t)
{
  ATerm y_32 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_462, term_o_14);
  t = u_6(t);
  y_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_32, v_48);
  t = f_99(t);
  t = fclose_0_0(t);
  t = v_48;
  return(t);
}
ATerm q_6 (ATerm n_48, ATerm o_48, ATerm t)
{
  ATerm z_32 = NULL;
  t = SSL_write_term_to_stream_baf(n_48, o_48);
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_32);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm i_33 = NULL,k_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_14 = ATgetArgument(t, 0);
      if(match_cons(q_14, sym_Stream_1))
        {
          i_33 = ATgetArgument(q_14, 0);
        }
      else
        _fail(t);
      k_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(i_33, k_33, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_14 = ATgetArgument(t, 0);
      if(match_cons(r_14, sym_Stream_1))
        {
          r_33 = ATgetArgument(r_14, 0);
        }
      else
        _fail(t);
      s_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(r_33, s_33, t);
  n_33 = t;
  t = term_u_14;
  o_33 = t;
  t = n_33;
  if(match_cons(t, sym_Stream_1))
    {
      q_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_14, n_33);
  t = o_6(o_33, q_33, t);
  return(t);
}
ATerm output_1_0 (ATerm o_103 (ATerm), ATerm t)
{
  ATerm d_33 = NULL,f_33 = NULL;
  t = o_103(t);
  f_33 = t;
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_14;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
        t = term_y_14;
      }
    d_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_33, f_33);
    {
      ATerm z_14 = t;
      int b_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_c_15;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, d_33, f_33);
          LocalPopChoice(b_15);
          if(match_cons(t, sym__2))
            {
              ATerm f_15 = ATgetArgument(t, 0);
              ATerm g_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_6(w_3, d_33, f_33, t);
        }
      else
        {
          t = z_14;
          if(match_cons(t, sym__2))
            {
              ATerm h_15 = ATgetArgument(t, 0);
              ATerm i_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_6(x_3, d_33, f_33, t);
        }
    }
  }
  return(t);
}
ATerm k_35 (ATerm c_35, ATerm t)
{
  t = SSL_fclose(c_35);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL;
  g_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_35 = ATgetArgument(t, 0);
      {
        ATerm j_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_35);
            ;
            LocalPopChoice(k_15);
          }
        else
          {
            t = j_15;
            t = k_35(g_35, t);
          }
      }
    }
  else
    {
      t = k_35(g_35, t);
    }
  return(t);
}
ATerm s_6 (ATerm t_48, ATerm t)
{
  t = SSL_read_term_from_stream(t_48);
  return(t);
}
ATerm debug_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  ATerm l_35 = NULL,n_35 = NULL,o_35 = NULL,r_35 = NULL;
  l_35 = t;
  t = d_99(t);
  n_35 = t;
  t = term_l_15;
  o_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_35), n_35);
  r_35 = t;
  t = SSL_printnl(o_35, r_35);
  t = l_35;
  return(t);
}
ATerm t_6 (ATerm f_45, ATerm g_45, ATerm t)
{
  ATerm s_35 = NULL;
  t = SSL_fopen(f_45, g_45);
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_35);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_35 = NULL;
  t = SSL_stdin_stream();
  t_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_35);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_35 = NULL;
  t = SSL_stdout_stream();
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_35);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_35 = NULL;
  t = SSL_stderr_stream();
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_35);
  return(t);
}
ATerm p_37 (ATerm h_36, ATerm t)
{
  ATerm i_36 = NULL;
  t = SSL_explode_term(h_36);
  if(match_cons(t, sym__2))
    {
      ATerm m_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_15 = ATgetArgument(t, 1);
        if(((ATgetType(o_15) == AT_LIST) && !(ATisEmpty(o_15))))
          {
            i_36 = ATgetFirst((ATermList) o_15);
            {
              ATerm p_15 = (ATerm) ATgetNext((ATermList) o_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_36;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_36;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_36;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_36;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm s_37 (ATerm l_36, ATerm o_36, ATerm p_36, ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,x_36 = NULL,q_4 = NULL;
  t = SSLgetAnnotations(p_36);
  s_36 = t;
  t = l_36;
  if(match_cons(t, sym_Path_1))
    {
      x_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_36, o_36);
  q_4 = t;
  t = SSLsetAnnotations(q_4, s_36);
  if(match_cons(t, sym__2))
    {
      q_36 = ATgetArgument(t, 0);
      r_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(q_36, r_36, t);
  return(t);
}
ATerm t_37 (ATerm b_37, ATerm c_37, ATerm d_37, ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,k_37 = NULL,s_4 = NULL;
  t = SSLgetAnnotations(d_37);
  h_37 = t;
  t = SSL_is_string(b_37);
  k_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_37, c_37);
  s_4 = t;
  t = SSLsetAnnotations(s_4, h_37);
  if(match_cons(t, sym__2))
    {
      f_37 = ATgetArgument(t, 0);
      g_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(f_37, g_37, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  m_37 = t;
  if(match_cons(t, sym__2))
    {
      n_37 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
      {
        ATerm q_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_37(m_37, t);
            ;
            LocalPopChoice(r_15);
          }
        else
          {
            t = q_15;
            {
              ATerm v_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_37(n_37, o_37, m_37, t);
                  ;
                  LocalPopChoice(w_15);
                }
              else
                {
                  t = v_15;
                  t = t_37(n_37, o_37, m_37, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_37(m_37, t);
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  ATerm z_15 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_37 = NULL;
      x_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_37, term_c_16);
      t = u_6(t);
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = z_15;
      t = debug_1_0(d_4, t);
      _fail(t);
    }
  v_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(w_37, t);
  u_37 = t;
  t = v_37;
  t = fclose_0_0(t);
  t = u_37;
  return(t);
}
ATerm input_1_0 (ATerm p_103 (ATerm), ATerm t)
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      t = term_g_16;
    }
  t = ReadFromFile_0_0(t);
  t = p_103(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
  z_37 = t;
  t = term_h_8;
  t = whoami_0_0(t);
  a_38 = t;
  t = term_l_15;
  d_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_16), a_38), term_h_16);
  e_38 = t;
  t = SSL_printnl(d_38, e_38);
  t = term_l_16;
  c_38 = t;
  t = SSL_exit(c_38);
  t = z_37;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm g_38 = NULL;
  g_38 = t;
  if(match_string(t, "-k"))
    {
      t = g_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_38;
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm h_38 = NULL,j_38 = NULL,k_38 = NULL;
  h_38 = t;
  t = SSL_string_to_int(h_38);
  j_38 = t;
  t = term_n_16;
  k_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_16, j_38);
  t = c_7(k_38, j_38, t);
  t = h_38;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, f_4, g_4, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm m_38 = NULL;
  m_38 = t;
  if(match_string(t, "-S"))
    {
      t = m_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_38;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL;
  t = term_r_16;
  n_38 = t;
  t = term_s_16;
  o_38 = t;
  t = term_t_16;
  t = c_7(n_38, o_38, t);
  t = term_w_16;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_x_16;
  return(t);
}
ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,t_38 = NULL;
  p_38 = t;
  t = SSL_string_to_int(p_38);
  q_38 = t;
  t = term_r_16;
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_16, q_38);
  t = c_7(t_38, q_38, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_38);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_y_16;
  return(t);
}
ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL;
  t = term_b_17;
  u_38 = t;
  t = term_h_8;
  v_38 = t;
  t = term_d_17;
  t = c_7(u_38, v_38, t);
  t = term_e_17;
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_4, i_4, k_4, t);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_4, m_4, p_4, t);
            ;
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            t = Option_3_0(r_4, t_4, u_4, t);
          }
      }
    }
  return(t);
}
ATerm c_7 (ATerm u_49, ATerm v_49, ATerm t)
{
  ATerm w_38 = NULL;
  t = term_l_14;
  w_38 = t;
  t = SSL_table_put(w_38, u_49, v_49);
  t = (ATerm) ATmakeAppl(sym__3, term_l_14, u_49, v_49);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_39 = NULL,e_39 = NULL,g_39 = NULL;
      t = term_h_8;
      t = e_0(t);
      d_39 = t;
      t = term_k_17;
      e_39 = t;
      t = term_l_17;
      g_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_17, term_l_17, d_39);
      t = a_7(e_39, g_39, d_39, t);
      _fail(t);
    }
  else
    {
      ATerm k_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_39 = ATgetFirst((ATermList) t);
          b_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_39;
      t = c_0(t);
      t = term_h_8;
      t = d_0(t);
      k_39 = t;
      t = (ATerm) ATinsert(CheckATermList(b_39), k_39);
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm s_39 = NULL;
  s_39 = t;
  if(match_string(t, "-o"))
    {
      t = s_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_39;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL;
  t_39 = t;
  t = term_x_14;
  u_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, t_39);
  t = c_7(u_39, t_39, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_39);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_o_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_4, x_4, z_4, t);
  return(t);
}
ATerm a_7 (ATerm j_34, ATerm k_34, ATerm i_34, ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_34, k_34);
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_17 = ATgetArgument(t, 0);
            ATerm s_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_34, k_34);
        t = z_6(j_34, k_34, t);
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        t = (ATerm) ATempty;
      }
    y_39 = t;
    t = (ATerm) ATinsert(CheckATermList(y_39), i_34);
    z_39 = t;
    t = SSL_table_put(j_34, k_34, z_39);
    t = x_39;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
      t = term_h_8;
      t = m_0(t);
      o_40 = t;
      t = term_k_17;
      p_40 = t;
      t = term_l_17;
      q_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_17, term_l_17, o_40);
      t = a_7(p_40, q_40, o_40, t);
      _fail(t);
    }
  else
    {
      ATerm u_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_40 = ATgetFirst((ATermList) t);
          k_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_40;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_40 = ATgetFirst((ATermList) t);
          m_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_40;
      t = k_0(t);
      t = l_40;
      t = l_0(t);
      u_40 = t;
      t = (ATerm) ATinsert(CheckATermList(m_40), u_40);
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm w_40 = NULL;
  w_40 = t;
  if(match_string(t, "-i"))
    {
      t = w_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_40;
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL;
  x_40 = t;
  t = term_f_16;
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_16, x_40);
  t = c_7(y_40, x_40, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_40);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, b_5, e_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_8;
  t = whoami_0_0(t);
  b_41 = t;
  t = term_l_15;
  f_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_17), b_41);
  g_41 = t;
  t = SSL_printnl(f_41, g_41);
  t = term_l_16;
  e_41 = t;
  t = SSL_exit(e_41);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_17;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_6 (ATerm n_32, ATerm o_32, ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_32, o_32);
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      t = SSL_addr(n_32, o_32);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm t)
{
  ATerm l_41 = NULL,o_41 = NULL,r_41 = NULL;
  l_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_41;
      t = h_88(t);
    }
  else
    {
      ATerm w_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_41 = ATgetFirst((ATermList) t);
          r_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_41;
      t = foldr_2_0(h_88, i_88, t);
      w_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_41, w_41);
      t = i_88(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_s_16;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm g_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym__2))
    {
      g_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(g_19, i_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_42 = NULL,c_19 = NULL,d_19 = NULL;
  t = times_0_0(t);
  d_19 = t;
  t = SSL_explode_term(d_19);
  if(match_cons(t, sym__2))
    {
      ATerm y_17 = ATgetArgument(t, 0);
      c_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_19;
  t = foldr_2_0(h_5, j_5, t);
  b_42 = t;
  t = SSL_TicksToSeconds(b_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_42 = NULL,v_42 = NULL,w_42 = NULL;
  s_42 = t;
  if(match_cons(t, sym__2))
    {
      v_42 = ATgetArgument(t, 0);
      w_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_42;
        if((v_42 != t))
          {
            _fail(t);
          }
        t = s_42;
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = (ATerm) ATmakeAppl(sym__2, v_42, w_42);
        {
          ATerm b_18 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_42, w_42);
              ;
              LocalPopChoice(c_18);
            }
          else
            {
              t = b_18;
              t = SSL_gtr(v_42, w_42);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_42, w_42);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm a_43 = NULL;
  a_43 = t;
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_43 = NULL;
        t = term_r_16;
        t = get_config_0_0(t);
        c_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_43, term_l_16);
        t = geq_0_0(t);
        t = a_43;
        t = p_100(t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = a_43;
      }
  }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,h_43 = NULL,i_43 = NULL;
  t = run_time_0_0(t);
  e_43 = t;
  t = term_h_8;
  t = whoami_0_0(t);
  f_43 = t;
  t = term_l_15;
  h_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), e_43), term_f_18), f_43);
  i_43 = t;
  t = SSL_printnl(h_43, i_43);
  t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), e_43), term_f_18), f_43));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_16;
  j_43 = t;
  t = SSL_exit(j_43);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL;
  w_43 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_43;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_43 = ATgetArgument(t, 0);
          {
            ATerm l_21 = NULL,v_4 = NULL;
            t = SSLgetAnnotations(w_43);
            l_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_43);
            v_4 = t;
            t = SSLsetAnnotations(v_4, l_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_43;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_103 (ATerm), ATerm t)
{
  ATerm h_18 = t;
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
      t = h_18;
      t = fetch_1_0(l_5, t);
    }
  t = f_103(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_43 = ATgetFirst((ATermList) t);
      a_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_44 = NULL,f_44 = NULL;
        ATerm o_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_44)), not_null(f_44));
          return(t);
        }
        t = a_44;
        t = i_0(t);
        if(((e_44 != NULL) && (e_44 != t)))
          _fail(t);
        else
          e_44 = t;
        t = z_43;
        t = g_0(t);
        if(((f_44 != NULL) && (f_44 != t)))
          _fail(t);
        else
          f_44 = t;
        t = a_44;
        t = reverse_acc_2_0(g_0, o_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_8;
      t = i_0(t);
    }
  return(t);
}
ATerm z_6 (ATerm a_36, ATerm b_36, ATerm t)
{
  t = SSL_table_get(a_36, b_36);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL,y_4 = NULL;
  l_44 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_44);
  j_44 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_44);
  y_4 = t;
  t = SSLsetAnnotations(y_4, j_44);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm n_44 = NULL;
  n_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_44), term_m_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      t = fetch_1_0(p_5, t);
    }
  t = term_p_18;
  t = echo_0_0(t);
  t = term_k_17;
  h_44 = t;
  t = term_l_17;
  i_44 = t;
  t = term_q_18;
  t = z_6(h_44, i_44, t);
  t = reverse_acc_2_0(_id, t_5, t);
  t = map_1_0(u_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm q_83 (ATerm), ATerm t)
{
  ATerm q_45 (ATerm t)
  {
    ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
    n_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_45 = ATgetFirst((ATermList) t);
        p_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_18 = t;
      int u_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_22 = NULL,l_22 = NULL,c_5 = NULL;
          t = SSLgetAnnotations(n_45);
          i_22 = t;
          t = o_45;
          t = q_83(t);
          l_22 = t;
          t = (ATerm) ATinsert(CheckATermList(p_45), l_22);
          c_5 = t;
          t = SSLsetAnnotations(c_5, i_22);
          ;
          LocalPopChoice(u_18);
        }
      else
        {
          t = t_18;
          {
            ATerm f_23 = NULL,w_24 = NULL,k_7 = NULL;
            t = SSLgetAnnotations(n_45);
            f_23 = t;
            t = p_45;
            t = q_45(t);
            w_24 = t;
            t = (ATerm) ATinsert(CheckATermList(w_24), o_45);
            k_7 = t;
            t = SSLsetAnnotations(k_7, f_23);
          }
        }
    }
    return(t);
  }
  t = q_45(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL;
  u_45 = t;
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_45;
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
            t = u_45;
          }
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = (ATerm) ATinsert(ATempty, u_45);
      }
    v_45 = t;
    t = term_y_14;
    w_45 = t;
    t = SSL_printnl(w_45, v_45);
    t = u_45;
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
ATerm z_5 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL;
  t = term_a_19;
  a_46 = t;
  t = term_h_8;
  b_46 = t;
  t = term_b_19;
  t = c_7(a_46, b_46, t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL;
  t = term_a_19;
  e_46 = t;
  t = term_h_8;
  f_46 = t;
  t = term_b_19;
  t = c_7(e_46, f_46, t);
  t = term_f_19;
  c_46 = t;
  t = term_h_8;
  d_46 = t;
  t = term_h_19;
  t = c_7(c_46, d_46, t);
  t = term_j_19;
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_k_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_5, z_5, b_6, t);
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      t = Option_3_0(e_6, f_6, g_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,p_46 = NULL,q_46 = NULL,e_8 = NULL;
  k_46 = t;
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_19;
        t = i_105(t);
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
      }
    t = k_46;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_46 = ATgetFirst((ATermList) t);
        n_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_46);
    l_46 = t;
    t = term_v_17;
    q_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_17, m_46);
    t = c_7(q_46, m_46, t);
    t = n_46;
    {
      ATerm a_47 (ATerm t)
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_19 = t;
            int t_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_46 = NULL;
                t_46 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_46;
                ;
                LocalPopChoice(t_19);
              }
            else
              {
                t = s_19;
                t = i_105(t);
                t = Cons_2_0(_id, a_47, t);
              }
            ;
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            {
              ATerm w_46 = NULL,x_46 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_46 = ATgetFirst((ATermList) t);
                  x_46 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_46), (ATerm) ATmakeAppl(sym_Undefined_1, w_46));
            }
          }
        return(t);
      }
      t = a_47(t);
      p_46 = t;
      t = (ATerm) ATinsert(CheckATermList(p_46), (ATerm) ATmakeAppl(sym_Program_1, m_46));
      e_8 = t;
      t = SSLsetAnnotations(e_8, l_46);
    }
  }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm m_47 = NULL;
  m_47 = t;
  if(match_string(t, "--help"))
    {
      t = m_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_47;
        }
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL;
  t = term_l_18;
  n_47 = t;
  t = term_h_8;
  o_47 = t;
  t = term_u_19;
  t = c_7(n_47, o_47, t);
  t = term_z_19;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm e_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL;
  h_47 = t;
  t = term_k_17;
  j_47 = t;
  t = term_l_17;
  k_47 = t;
  t = (ATerm) ATempty;
  l_47 = t;
  t = SSL_table_put(j_47, k_47, l_47);
  t = h_47;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm b_20 = t;
      int e_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_105(t);
          ;
          LocalPopChoice(e_20);
        }
      else
        {
          t = b_20;
          {
            ATerm i_20 = t;
            int j_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_6, w_6, d_7, t);
                ;
                LocalPopChoice(j_20);
              }
            else
              {
                t = i_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_6, t);
    {
      ATerm m_20 = t;
      int n_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_47 = NULL;
          v_47 = t;
          {
            ATerm q_20 = t;
            int r_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_26 = NULL;
                t = v_47;
                {
                  ATerm s_20 = t;
                  int t_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_18;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(t_20);
                    }
                  else
                    {
                      t = s_20;
                      t = fetch_1_0(e_7, t);
                    }
                  t = v_47;
                  t = default_system_usage_0_0(t);
                  t = term_s_16;
                  e_26 = t;
                  t = SSL_exit(e_26);
                }
                ;
                LocalPopChoice(r_20);
              }
            else
              {
                t = q_20;
                {
                  ATerm p_26 = NULL;
                  t = term_a_19;
                  t = get_config_0_0(t);
                  t = v_47;
                  t = default_system_about_0_0(t);
                  t = term_s_16;
                  p_26 = t;
                  t = SSL_exit(p_26);
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
            ATerm u_20 = t;
            int v_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL;
                ATerm f_7 (ATerm t)
                {
                  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,g_8 = NULL;
                  b_48 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      a_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_48);
                  z_47 = t;
                  t = a_48;
                  if(((f_47 != NULL) && (f_47 != t)))
                    _fail(t);
                  else
                    f_47 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, a_48);
                  g_8 = t;
                  t = SSLsetAnnotations(g_8, z_47);
                  return(t);
                }
                t = fetch_1_0(f_7, t);
                t = term_l_15;
                x_47 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_47)), term_w_20);
                y_47 = t;
                t = SSL_printnl(x_47, y_47);
                t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_47)), term_w_20));
                t = default_system_usage_0_0(t);
                t = term_l_16;
                w_47 = t;
                t = SSL_exit(w_47);
                ;
                LocalPopChoice(v_20);
              }
            else
              {
                t = u_20;
              }
          }
        }
      g_47 = t;
      t = term_k_17;
      i_47 = t;
      t = SSL_table_destroy(i_47);
      t = g_47;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL;
  t = parse_options_1_0(h_103, t);
  g_48 = t;
  t = term_x_20;
  j_48 = t;
  t = SSL_table_create(j_48);
  t = term_x_20;
  h_48 = t;
  t = term_b_21;
  i_48 = t;
  t = SSL_table_put(h_48, i_48, g_48);
  t = g_48;
  t = j_103(t);
  {
    ATerm c_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_103, t);
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = c_21;
        {
          ATerm j_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_103(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_21);
            }
          else
            {
              t = j_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm m_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_7, l_7, m_7, t);
      ;
      LocalPopChoice(q_21);
    }
  else
    {
      t = m_21;
      {
        ATerm v_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(w_21);
          }
        else
          {
            t = v_21;
            {
              ATerm x_21 = t;
              int e_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(e_22);
                }
              else
                {
                  t = x_21;
                  {
                    ATerm f_22 = t;
                    int g_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(n_7, o_7, p_7, t);
                        ;
                        LocalPopChoice(g_22);
                      }
                    else
                      {
                        t = f_22;
                        {
                          ATerm h_22 = t;
                          int j_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(j_22);
                            }
                          else
                            {
                              t = h_22;
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
ATerm i_7 (ATerm t)
{
  t = input_1_0(q_7, t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--only-local", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_k_22;
  _fail(t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_m_22;
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
  ATerm q_48 = NULL,w_48 = NULL;
  t = term_c_15;
  q_48 = t;
  t = term_h_8;
  w_48 = t;
  t = term_r_22;
  t = c_7(q_48, w_48, t);
  t = term_s_22;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = output_1_0(s_7, t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,v_8 = NULL,u_8 = NULL;
  f_49 = t;
  if(match_cons(t, sym_Specification_1))
    {
      z_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_49);
  y_48 = t;
  t = z_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_49 = ATgetFirst((ATermList) t);
      c_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_48);
  a_49 = t;
  t = c_49;
  t = Cons_2_0(t_7, u_7, t);
  d_49 = t;
  t = (ATerm) ATinsert(CheckATermList(d_49), b_49);
  u_8 = t;
  t = SSLsetAnnotations(u_8, a_49);
  e_49 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_49);
  v_8 = t;
  t = SSLsetAnnotations(v_8, y_48);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,i_8 = NULL;
  j_49 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      h_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_49);
  g_49 = t;
  t = h_49;
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_22;
        t = get_config_0_0(t);
        t = h_49;
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        t = dead_def_elim_0_0(t);
      }
    t = map_1_0(local_dead_def_elim_0_0, t);
    i_49 = t;
    t = (ATerm) ATmakeAppl(sym_Strategies_1, i_49);
    i_8 = t;
    t = SSLsetAnnotations(i_8, g_49);
  }
  return(t);
}
ATerm u_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(h_7, default_usage_0_0, _id, i_7, t);
  return(t);
}
