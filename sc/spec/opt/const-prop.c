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
Symbol sym_Cong_2;
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_As_2;
Symbol sym_Choice_2;
Symbol sym_GChoice_2;
Symbol sym_Fail_0;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Bagof_1;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
Symbol sym_Some_1;
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
ATerm term_h_35;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_z_33;
ATerm term_r_32;
ATerm term_p_32;
ATerm term_i_32;
ATerm term_d_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_o_31;
ATerm term_i_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_u_30;
ATerm term_l_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_l_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_d_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_m_25;
ATerm term_m_24;
ATerm term_h_24;
ATerm term_j_23;
ATerm term_k_20;
ATerm term_c_20;
ATerm term_w_14;
ATerm term_o_14;
ATerm term_r_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
void init_constant_terms (void)
{
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_l_10);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_28);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__3, term_w_31, term_x_31, term_h_10);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm u_80 (ATerm), ATerm);
ATerm n_0 (ATerm);
ATerm q_0 (ATerm);
ATerm s_0 (ATerm);
ATerm p_0 (ATerm);
ATerm prop_sdef_1_0 (ATerm u_86 (ATerm), ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm exec_maybe_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm Not_1_0 (ATerm y_78 (ATerm), ATerm);
ATerm assert_1_0 (ATerm j_105 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm w_78 (ATerm), ATerm x_78 (ATerm), ATerm);
ATerm Let_2_0 (ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm prop_let_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm);
ATerm j_8 (ATerm s_6, ATerm w_6, ATerm y_6, ATerm);
ATerm c_1 (ATerm);
ATerm isect_CurrentTerm_0_0 (ATerm);
ATerm c_12 (ATerm c_9, ATerm d_9, ATerm e_9, ATerm);
ATerm d_1 (ATerm);
ATerm isect_Binding_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm save_CurrentTerm_0_0 (ATerm);
ATerm t_1 (ATerm);
ATerm save_Binding_0_0 (ATerm);
ATerm prop_abstract_choice_2_0 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm p_78 (ATerm), ATerm q_78 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm);
ATerm prop_choice_1_0 (ATerm y_86 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm);
ATerm q_2 (ATerm);
ATerm v_2 (ATerm);
ATerm prop_traversal_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm);
ATerm x_2 (ATerm);
ATerm a_3 (ATerm);
ATerm f_3 (ATerm);
ATerm h_3 (ATerm);
ATerm prop_call_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm s_3 (ATerm);
ATerm a_4 (ATerm);
ATerm p_3 (ATerm);
ATerm prop_scope_1_0 (ATerm t_86 (ATerm), ATerm);
ATerm Build_1_0 (ATerm h_78 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm prop_build_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm z_89 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm introduce_binding_0_0 (ATerm);
ATerm Var_1_0 (ATerm p_74 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm genzip_4_0 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm);
ATerm UfVar_1_0 (ATerm v_116 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm);
ATerm for_3_0 (ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm n_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm prop_pattern_match_0_0 (ATerm);
ATerm CurrentTerm_0_0 (ATerm);
ATerm Binding_0_0 (ATerm);
ATerm alltd_1_0 (ATerm n_90 (ATerm), ATerm);
ATerm Match_1_0 (ATerm g_78 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm prop_match_0_0 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm cp_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm g_105 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm q_87 (ATerm), ATerm r_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm f_105 (ATerm), ATerm);
ATerm scope_2_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm);
ATerm map_1_0 (ATerm m_94 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm r_73 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm l_73 (ATerm), ATerm m_73 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm s_73 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm w_73 (ATerm), ATerm);
ATerm _2_0 (ATerm w_68 (ATerm), ATerm x_68 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm c_107 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm l_6 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_110 (ATerm), ATerm);
ATerm h_29 (ATerm b_29, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm x_94 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm d_95 (ATerm), ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm b_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm g_108 (ATerm), ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm t_7 (ATerm);
ATerm w_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm b_8 (ATerm);
ATerm d_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_108 (ATerm), ATerm);
ATerm e_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm c_111 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm f_86 (ATerm), ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm g_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm u_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_113 (ATerm), ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm parse_options_1_0 (ATerm e_113 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm h_111 (ATerm), ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm i_9 (ATerm);
ATerm iowrap_3_0 (ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm);
ATerm z_9 (ATerm);
ATerm d_10 (ATerm);
ATerm g_10 (ATerm);
ATerm f_10 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_0 = NULL,e_1 = NULL;
  z_0 = t;
  t = term_h_10;
  t = whoami_0_0(t);
  e_1 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_1), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = z_0;
  return(t);
}
ATerm SDefT_4_0 (ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm u_80 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL;
  r_1 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      h_1 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
      j_1 = ATgetArgument(t, 2);
      l_1 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_1);
  g_1 = t;
  t = h_1;
  t = r_80(t);
  m_1 = t;
  t = i_1;
  t = s_80(t);
  n_1 = t;
  t = j_1;
  t = t_80(t);
  o_1 = t;
  t = l_1;
  t = u_80(t);
  p_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, m_1, n_1, o_1, p_1), g_1);
  return(t);
}
ATerm n_0 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      x_1 = ATgetArgument(t, 0);
      {
        ATerm k_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_1), term_l_10);
  t = assert_1_0(q_0, t);
  t = y_1;
  return(t);
}
ATerm prop_sdef_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm u_1 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      ATerm n_10 = ATgetArgument(t, 1);
      u_1 = ATgetArgument(t, 2);
      {
        ATerm q_10 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm o_0 (ATerm t)
    {
      ATerm w_1 = NULL;
      ATerm r_0 (ATerm t)
      {
        ATerm d_2 = NULL;
        d_2 = t;
        t = term_r_10;
        t = assert_1_0(s_0, t);
        t = d_2;
        t = u_86(t);
        return(t);
      }
      if(((w_1 != NULL) && (w_1 != t)))
        _fail(t);
      else
        w_1 = t;
      t = u_1;
      t = map_1_0(p_0, t);
      t = not_null(w_1);
      t = SDefT_4_0(_id, _id, _id, r_0, t);
      return(t);
    }
    t = scope_2_0(n_0, o_0, t);
  }
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL,i_2 = NULL;
  e_2 = t;
  t = term_r_10;
  t = assert_1_0(t_0, t);
  t = e_2;
  t = save_Binding_0_0(t);
  f_2 = t;
  t = e_2;
  t = l_86(t);
  i_2 = t;
  t = term_r_10;
  t = assert_1_0(u_0, t);
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, f_2);
  t = table_putlist_0_0(t);
  t = i_2;
  return(t);
}
ATerm Not_1_0 (ATerm y_78 (ATerm), ATerm t)
{
  ATerm k_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL;
  o_2 = t;
  if(match_cons(t, sym_Not_1))
    {
      m_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_2);
  k_2 = t;
  t = m_2;
  t = y_78(t);
  n_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, n_2), k_2);
  return(t);
}
ATerm assert_1_0 (ATerm j_105 (ATerm), ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,j_3 = NULL,n_3 = NULL,q_3 = NULL;
  if(match_cons(t, sym__2))
    {
      d_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_105(t);
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_3, d_3, e_3);
  t = table_push_0_0(t);
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(j_3, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_3 = ATgetFirst((ATermList) t);
        q_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(j_3, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(q_3), (ATerm) ATinsert(CheckATermList(n_3), d_3)));
    t = (ATerm) ATmakeAppl(sym__2, d_3, e_3);
  }
  return(t);
}
ATerm Rec_2_0 (ATerm w_78 (ATerm), ATerm x_78 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL;
  y_3 = t;
  if(match_cons(t, sym_Rec_2))
    {
      t_3 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_3);
  r_3 = t;
  t = t_3;
  t = w_78(t);
  v_3 = t;
  t = u_3;
  t = x_78(t);
  x_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, v_3, x_3), r_3);
  return(t);
}
ATerm Let_2_0 (ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,m_4 = NULL;
  m_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_4 = ATgetArgument(t, 0);
      f_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_4);
  d_4 = t;
  t = e_4;
  t = z_77(t);
  g_4 = t;
  t = f_4;
  t = a_78(t);
  h_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, g_4, h_4), d_4);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm prop_let_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,u_4 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm u_10 = ATgetArgument(t, 0);
      ATerm v_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  p_4 = t;
  t = save_Binding_0_0(t);
  q_4 = t;
  t = save_CurrentTerm_0_0(t);
  u_4 = t;
  t = p_4;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm x_0 (ATerm t)
      {
        ATerm v_4 = NULL;
        v_4 = t;
        t = term_r_10;
        t = assert_1_0(b_1, t);
        t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)));
        t = (ATerm) ATmakeAppl(sym__2, term_i_10, q_4);
        t = table_putlist_0_0(t);
        t = v_4;
        t = v_86(t);
        return(t);
      }
      t = map_1_0(x_0, t);
      return(t);
    }
    ATerm w_0 (ATerm t)
    {
      ATerm w_4 = NULL;
      w_4 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)));
      t = (ATerm) ATmakeAppl(sym__2, term_j_10, u_4);
      t = table_putlist_0_0(t);
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)));
      t = (ATerm) ATmakeAppl(sym__2, term_i_10, q_4);
      t = table_putlist_0_0(t);
      t = w_4;
      t = v_86(t);
      return(t);
    }
    t = Let_2_0(v_0, w_0, t);
  }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,a_5 = NULL,b_5 = NULL,e_5 = NULL,f_5 = NULL,p_5 = NULL,s_5 = NULL;
  s_5 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      y_4 = ATgetArgument(t, 0);
      a_5 = ATgetArgument(t, 1);
      b_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_5);
  x_4 = t;
  t = y_4;
  t = t_78(t);
  e_5 = t;
  t = a_5;
  t = u_78(t);
  f_5 = t;
  t = b_5;
  t = v_78(t);
  p_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, e_5, f_5, p_5), x_4);
  return(t);
}
ATerm j_8 (ATerm s_6, ATerm w_6, ATerm y_6, ATerm t)
{
  t = y_6;
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)), s_6);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_10 = ATgetFirst((ATermList) t);
            if(match_cons(y_10, sym_Defined_2))
              {
                ATerm a_11 = ATgetArgument(y_10, 0);
                if((w_6 != ATgetArgument(y_10, 1)))
                  {
                    _fail(ATgetArgument(y_10, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm z_10 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = y_6;
        ;
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        t = (ATerm) ATmakeAppl(sym__2, s_6, (ATerm) ATinsert(ATempty, term_l_10));
      }
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_7 = NULL,s_7 = NULL,u_7 = NULL,v_7 = NULL,y_7 = NULL;
      r_7 = t;
      if(match_cons(t, sym__2))
        {
          s_7 = ATgetArgument(t, 0);
          u_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_7;
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_7 = ATgetFirst((ATermList) t);
                {
                  ATerm g_11 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(e_11);
            t = v_7;
            {
              ATerm h_11 = t;
              int i_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm j_11 = ATgetArgument(t, 0);
                      y_7 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_11);
                  t = s_7;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm k_11 = t;
                      int l_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = r_7;
                          ;
                          LocalPopChoice(l_11);
                        }
                      else
                        {
                          t = k_11;
                          t = j_8(s_7, y_7, r_7, t);
                        }
                    }
                  else
                    {
                      t = j_8(s_7, y_7, r_7, t);
                    }
                }
              else
                {
                  t = h_11;
                  t = s_7;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = r_7;
                }
            }
          }
        else
          {
            t = d_11;
            t = s_7;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = r_7;
          }
      }
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
    }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm r_6 = NULL;
  t = map_1_0(c_1, t);
  r_6 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, r_6);
  t = table_putlist_0_0(t);
  t = r_6;
  return(t);
}
ATerm c_12 (ATerm c_9, ATerm d_9, ATerm e_9, ATerm t)
{
  t = e_9;
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)), c_9);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_11 = ATgetFirst((ATermList) t);
            if(match_cons(o_11, sym_Defined_2))
              {
                ATerm q_11 = ATgetArgument(o_11, 0);
                if((d_9 != ATgetArgument(o_11, 1)))
                  {
                    _fail(ATgetArgument(o_11, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm p_11 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = e_9;
        ;
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        t = (ATerm) ATmakeAppl(sym__2, c_9, (ATerm) ATinsert(ATempty, term_l_10));
      }
  }
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_9 = NULL,y_9 = NULL,o_10 = NULL,p_10 = NULL,f_11 = NULL;
      x_9 = t;
      if(match_cons(t, sym__2))
        {
          y_9 = ATgetArgument(t, 0);
          o_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_10;
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_10 = ATgetFirst((ATermList) t);
                {
                  ATerm v_11 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(u_11);
            t = p_10;
            {
              ATerm w_11 = t;
              int x_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm y_11 = ATgetArgument(t, 0);
                      f_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(x_11);
                  t = y_9;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm z_11 = t;
                      int a_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_9;
                          ;
                          LocalPopChoice(a_12);
                        }
                      else
                        {
                          t = z_11;
                          t = c_12(y_9, f_11, x_9, t);
                        }
                    }
                  else
                    {
                      t = c_12(y_9, f_11, x_9, t);
                    }
                }
              else
                {
                  t = w_11;
                  t = y_9;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = x_9;
                }
            }
          }
        else
          {
            t = t_11;
            t = y_9;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = x_9;
          }
      }
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
    }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm b_9 = NULL;
  t = map_1_0(d_1, t);
  b_9 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, b_9);
  t = table_putlist_0_0(t);
  t = b_9;
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL;
  if(match_cons(t, sym__2))
    {
      s_12 = ATgetArgument(t, 0);
      r_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_12;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm x_12 = NULL,z_12 = NULL;
      if(match_cons(t, sym__2))
        {
          x_12 = ATgetArgument(t, 0);
          z_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(s_12, x_12, z_12);
      t = (ATerm) ATmakeAppl(sym__3, s_12, x_12, z_12);
      return(t);
    }
    t = map_1_0(f_1, t);
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm y_0 = NULL,a_1 = NULL;
  y_0 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)), y_0);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_0, a_1);
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = SSL_table_keys((ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)));
  t = map_1_0(s_1, t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm k_1 = NULL,q_1 = NULL;
  k_1 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)), k_1);
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_1, q_1);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = SSL_table_keys((ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)));
  t = map_1_0(t_1, t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm t)
{
  ATerm g_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
  g_13 = t;
  t = save_Binding_0_0(t);
  j_13 = t;
  t = save_CurrentTerm_0_0(t);
  k_13 = t;
  t = g_13;
  t = z_86(t);
  l_13 = t;
  t = save_Binding_0_0(t);
  n_13 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, j_13);
  t = table_putlist_0_0(t);
  t = j_13;
  t = save_CurrentTerm_0_0(t);
  o_13 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, k_13);
  t = table_putlist_0_0(t);
  t = l_13;
  t = a_87(t);
  p_13 = t;
  t = n_13;
  t = isect_Binding_0_0(t);
  t = o_13;
  t = isect_CurrentTerm_0_0(t);
  t = p_13;
  return(t);
}
ATerm LChoice_2_0 (ATerm p_78 (ATerm), ATerm q_78 (ATerm), ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,x_13 = NULL,y_13 = NULL,b_14 = NULL,c_14 = NULL;
  c_14 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      u_13 = ATgetArgument(t, 0);
      x_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_14);
  t_13 = t;
  t = u_13;
  t = p_78(t);
  y_13 = t;
  t = x_13;
  t = q_78(t);
  b_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, y_13, b_14), t_13);
  return(t);
}
ATerm GChoice_2_0 (ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,l_14 = NULL,m_14 = NULL,s_14 = NULL,z_14 = NULL;
  z_14 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      i_14 = ATgetArgument(t, 0);
      l_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_14);
  h_14 = t;
  t = i_14;
  t = r_77(t);
  m_14 = t;
  t = l_14;
  t = s_77(t);
  s_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, m_14, s_14), h_14);
  return(t);
}
ATerm Choice_2_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm t)
{
  ATerm h_15 = NULL,j_15 = NULL,l_15 = NULL,m_15 = NULL,p_15 = NULL,q_15 = NULL;
  q_15 = t;
  if(match_cons(t, sym_Choice_2))
    {
      j_15 = ATgetArgument(t, 0);
      l_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_15);
  h_15 = t;
  t = j_15;
  t = n_77(t);
  m_15 = t;
  t = l_15;
  t = o_77(t);
  p_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, m_15, p_15), h_15);
  return(t);
}
ATerm prop_choice_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  ATerm z_15 = NULL;
  z_15 = t;
  {
    ATerm b_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm e_12 = ATgetArgument(t, 0);
            ATerm f_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(d_12);
        t = z_15;
        {
          ATerm v_1 (ATerm t)
          {
            t = Choice_2_0(y_86, _id, t);
            return(t);
          }
          ATerm z_1 (ATerm t)
          {
            t = Choice_2_0(_id, y_86, t);
            return(t);
          }
          t = prop_abstract_choice_2_0(v_1, z_1, t);
        }
      }
    else
      {
        t = b_12;
        {
          ATerm g_12 = t;
          int h_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm i_12 = ATgetArgument(t, 0);
                  ATerm j_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(h_12);
              t = z_15;
              {
                ATerm a_2 (ATerm t)
                {
                  t = GChoice_2_0(y_86, _id, t);
                  return(t);
                }
                ATerm c_2 (ATerm t)
                {
                  t = GChoice_2_0(_id, y_86, t);
                  return(t);
                }
                t = prop_abstract_choice_2_0(a_2, c_2, t);
              }
            }
          else
            {
              t = g_12;
              {
                ATerm k_12 = t;
                int l_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm m_12 = ATgetArgument(t, 0);
                        ATerm n_12 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(l_12);
                    t = z_15;
                    {
                      ATerm h_2 (ATerm t)
                      {
                        t = LChoice_2_0(y_86, _id, t);
                        return(t);
                      }
                      ATerm j_2 (ATerm t)
                      {
                        t = LChoice_2_0(_id, y_86, t);
                        return(t);
                      }
                      t = prop_abstract_choice_2_0(h_2, j_2, t);
                    }
                  }
                else
                  {
                    t = k_12;
                    if(match_cons(t, sym_GuardedLChoice_3))
                      {
                        ATerm o_12 = ATgetArgument(t, 0);
                        ATerm p_12 = ATgetArgument(t, 1);
                        ATerm q_12 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = z_15;
                    {
                      ATerm l_2 (ATerm t)
                      {
                        t = GuardedLChoice_3_0(y_86, _id, _id, t);
                        t = GuardedLChoice_3_0(_id, y_86, _id, t);
                        return(t);
                      }
                      ATerm p_2 (ATerm t)
                      {
                        t = GuardedLChoice_3_0(_id, _id, y_86, t);
                        return(t);
                      }
                      t = prop_abstract_choice_2_0(l_2, p_2, t);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Seq_2_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm t)
{
  ATerm e_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,n_16 = NULL,o_16 = NULL;
  o_16 = t;
  if(match_cons(t, sym_Seq_2))
    {
      h_16 = ATgetArgument(t, 0);
      i_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_16);
  e_16 = t;
  t = h_16;
  t = n_78(t);
  j_16 = t;
  t = i_16;
  t = o_78(t);
  n_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, j_16, n_16), e_16);
  return(t);
}
ATerm Cong_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm t)
{
  ATerm t_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
  a_17 = t;
  if(match_cons(t, sym_Cong_2))
    {
      w_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_17);
  t_16 = t;
  t = w_16;
  t = n_73(t);
  y_16 = t;
  t = x_16;
  t = o_73(t);
  z_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, y_16, z_16), t_16);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_17 = NULL;
      l_17 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm v_12 = ATgetArgument(t, 0);
          ATerm w_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = term_r_10;
      t = assert_1_0(q_2, t);
      t = l_17;
      {
        ATerm t_2 (ATerm t)
        {
          ATerm u_2 (ATerm t)
          {
            t = exec_maybe_1_0(m_0, t);
            return(t);
          }
          t = map_1_0(u_2, t);
          return(t);
        }
        t = Cong_2_0(_id, t_2, t);
      }
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      {
        ATerm q_17 = NULL;
        ATerm y_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm b_13 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = y_12;
            {
              ATerm r_17 = NULL;
              r_17 = t;
              {
                ATerm c_13 = t;
                int d_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_One_1))
                      {
                        ATerm e_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(d_13);
                    t = r_17;
                  }
                else
                  {
                    t = c_13;
                    {
                      ATerm f_13 = t;
                      int h_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm i_13 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(h_13);
                          t = r_17;
                        }
                      else
                        {
                          t = f_13;
                          {
                            ATerm m_13 = t;
                            int q_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm r_13 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(q_13);
                                t = r_17;
                              }
                            else
                              {
                                t = m_13;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm s_13 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = r_17;
                              }
                          }
                        }
                    }
                  }
              }
            }
          }
        q_17 = t;
        t = term_r_10;
        t = assert_1_0(v_2, t);
        t = q_17;
        {
          ATerm w_2 (ATerm t)
          {
            t = exec_maybe_1_0(m_0, t);
            return(t);
          }
          t = SRTS_one(w_2, t);
        }
      }
    }
  return(t);
}
ATerm CallT_3_0 (ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  a_18 = t;
  if(match_cons(t, sym_CallT_3))
    {
      u_17 = ATgetArgument(t, 0);
      v_17 = ATgetArgument(t, 1);
      w_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_18);
  t_17 = t;
  t = u_17;
  t = d_78(t);
  x_17 = t;
  t = v_17;
  t = e_78(t);
  y_17 = t;
  t = w_17;
  t = f_78(t);
  z_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, x_17, y_17, z_17), t_17);
  return(t);
}
ATerm PrimT_3_0 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
  k_18 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      e_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
      g_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_18);
  d_18 = t;
  t = e_18;
  t = f_79(t);
  h_18 = t;
  t = f_18;
  t = g_79(t);
  i_18 = t;
  t = g_18;
  t = h_79(t);
  j_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, h_18, i_18, j_18), d_18);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = alltd_1_0(Binding_0_0, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = alltd_1_0(Binding_0_0, t);
  return(t);
}
ATerm prop_call_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm o_18 = NULL;
  o_18 = t;
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm z_13 = ATgetArgument(t, 0);
            ATerm a_14 = ATgetArgument(t, 1);
            ATerm d_14 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(w_13);
        t = term_r_10;
        t = assert_1_0(x_2, t);
        t = o_18;
        {
          ATerm z_2 (ATerm t)
          {
            ATerm b_3 (ATerm t)
            {
              t = exec_maybe_1_0(l_0, t);
              return(t);
            }
            t = map_1_0(b_3, t);
            return(t);
          }
          t = PrimT_3_0(_id, z_2, a_3, t);
        }
      }
    else
      {
        t = v_13;
        if(match_cons(t, sym_CallT_3))
          {
            ATerm e_14 = ATgetArgument(t, 0);
            ATerm f_14 = ATgetArgument(t, 1);
            ATerm g_14 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = term_r_10;
        t = assert_1_0(f_3, t);
        t = o_18;
        {
          ATerm g_3 (ATerm t)
          {
            ATerm i_3 (ATerm t)
            {
              t = exec_maybe_1_0(l_0, t);
              return(t);
            }
            t = map_1_0(i_3, t);
            return(t);
          }
          t = CallT_3_0(_id, g_3, h_3, t);
        }
      }
  }
  return(t);
}
ATerm Scope_2_0 (ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  z_18 = t;
  if(match_cons(t, sym_Scope_2))
    {
      v_18 = ATgetArgument(t, 0);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_18);
  u_18 = t;
  t = v_18;
  t = j_78(t);
  x_18 = t;
  t = w_18;
  t = k_78(t);
  y_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, x_18, y_18), u_18);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm f_19 = NULL;
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, f_19), term_l_10);
  t = assert_1_0(s_3, t);
  t = f_19;
  return(t);
}
ATerm prop_scope_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm c_19 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      c_19 = ATgetArgument(t, 0);
      {
        ATerm j_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm l_3 (ATerm t)
    {
      ATerm d_19 = NULL,e_19 = NULL;
      d_19 = t;
      t = c_19;
      t = map_1_0(p_3, t);
      t = d_19;
      t = Scope_2_0(_id, t_86, t);
      e_19 = t;
      {
        ATerm k_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_19 = NULL;
            t = CurrentTerm_0_0(t);
            {
              ATerm w_3 (ATerm t)
              {
                ATerm j_19 = NULL;
                ATerm z_3 (ATerm t)
                {
                  if(((j_19 != NULL) && (j_19 != t)))
                    _fail(t);
                  else
                    j_19 = t;
                  return(t);
                }
                if(match_cons(t, sym_Var_1))
                  {
                    if(((j_19 != NULL) && (j_19 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      j_19 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = c_19;
                t = fetch_1_0(z_3, t);
                return(t);
              }
              t = oncetd_1_0(w_3, t);
              h_19 = t;
              t = term_r_10;
              t = assert_1_0(a_4, t);
              t = h_19;
            }
            ;
            LocalPopChoice(n_14);
          }
        else
          {
            t = k_14;
          }
        t = e_19;
      }
      return(t);
    }
    t = scope_2_0(k_3, l_3, t);
  }
  return(t);
}
ATerm Build_1_0 (ATerm h_78 (ATerm), ATerm t)
{
  ATerm k_19 = NULL,n_19 = NULL,p_19 = NULL,r_19 = NULL;
  r_19 = t;
  if(match_cons(t, sym_Build_1))
    {
      n_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_19);
  k_19 = t;
  t = n_19;
  t = h_78(t);
  p_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, p_19), k_19);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = alltd_1_0(Binding_0_0, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm u_19 = NULL;
  t = Build_1_0(b_4, t);
  if(match_cons(t, sym_Build_1))
    {
      u_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_14, u_19));
  t = assert_1_0(c_4, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, u_19);
  return(t);
}
ATerm oncetd_1_0 (ATerm z_89 (ATerm), ATerm t)
{
  ATerm v_19 (ATerm t)
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_89(t);
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = SRTS_one(v_19, t);
      }
    return(t);
  }
  t = v_19(t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = a_20;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm r_14 = ATgetArgument(t, 0);
          ATerm t_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_20;
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm introduce_binding_0_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_14 = ATgetArgument(t, 0);
      if(match_cons(u_14, sym_Var_1))
        {
          y_19 = ATgetArgument(u_14, 0);
        }
      else
        _fail(t);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_19;
  {
    ATerm v_14 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(i_4, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_14;
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, y_19), (ATerm) ATmakeAppl(sym_Defined_2, term_w_14, z_19));
    t = assert_1_0(j_4, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, y_19), z_19);
  }
  return(t);
}
ATerm Var_1_0 (ATerm p_74 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
  g_20 = t;
  if(match_cons(t, sym_Var_1))
    {
      e_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_20);
  d_20 = t;
  t = e_20;
  t = p_74(t);
  f_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, f_20), d_20);
  return(t);
}
ATerm k_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_14 = ATgetArgument(t, 0);
      if(((ATgetType(x_14) != AT_LIST) || !(ATisEmpty(x_14))))
        _fail(t);
      {
        ATerm y_14 = ATgetArgument(t, 1);
        if(((ATgetType(y_14) != AT_LIST) || !(ATisEmpty(y_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_15 = ATgetArgument(t, 0);
      if(((ATgetType(a_15) == AT_LIST) && !(ATisEmpty(a_15))))
        {
          t_20 = ATgetFirst((ATermList) a_15);
          v_20 = (ATerm) ATgetNext((ATermList) a_15);
        }
      else
        _fail(t);
      {
        ATerm b_15 = ATgetArgument(t, 1);
        if(((ATgetType(b_15) == AT_LIST) && !(ATisEmpty(b_15))))
          {
            u_20 = ATgetFirst((ATermList) b_15);
            w_20 = (ATerm) ATgetNext((ATermList) b_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_20, u_20), (ATerm) ATmakeAppl(sym__2, v_20, w_20));
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL;
  if(match_cons(t, sym__2))
    {
      x_20 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_20), x_20);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_15 = ATgetFirst((ATermList) t);
      if(match_cons(c_15, sym__2))
        {
          m_20 = ATgetArgument(c_15, 0);
          n_20 = ATgetArgument(c_15, 1);
        }
      else
        _fail(t);
      o_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_20);
  if(match_cons(t, sym__2))
    {
      p_20 = ATgetArgument(t, 0);
      q_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_20);
  if(match_cons(t, sym__2))
    {
      if((p_20 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      r_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_20, q_20);
  t = genzip_4_0(k_4, l_4, n_4, _id, t);
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_20, o_20);
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
        t = s_20;
        {
          ATerm o_4 (ATerm t)
          {
            t = o_20;
            return(t);
          }
          t = at_end_1_0(o_4, t);
        }
        ;
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        {
          ATerm b_2 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, s_20, o_20));
          if(match_cons(t, sym__2))
            {
              ATerm i_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_15) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_2;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  if(match_cons(t, sym__2))
    {
      i_21 = ATgetArgument(t, 0);
      j_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_21;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_21 = ATgetFirst((ATermList) t);
      l_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_21;
  if(match_cons(t, sym__2))
    {
      f_21 = ATgetArgument(t, 0);
      g_21 = ATgetArgument(t, 1);
      {
        ATerm k_15 = t;
        int n_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_21;
            if((i_21 != t))
              {
                _fail(t);
              }
            t = g_21;
            ;
            LocalPopChoice(n_15);
          }
        else
          {
            t = k_15;
            t = (ATerm) ATmakeAppl(sym__2, i_21, l_21);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, i_21, l_21);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm t)
{
  ATerm z_21 (ATerm t)
  {
    ATerm o_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_96(t);
        ;
        LocalPopChoice(r_15);
      }
    else
      {
        t = o_15;
        t = r_96(t);
        t = _2_0(t_96, z_21, t);
        t = s_96(t);
      }
    return(t);
  }
  t = z_21(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_15 = ATgetArgument(t, 0);
      if(((ATgetType(s_15) != AT_LIST) || !(ATisEmpty(s_15))))
        _fail(t);
      {
        ATerm t_15 = ATgetArgument(t, 1);
        if(((ATgetType(t_15) != AT_LIST) || !(ATisEmpty(t_15))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_15 = ATgetArgument(t, 0);
      if(((ATgetType(u_15) == AT_LIST) && !(ATisEmpty(u_15))))
        {
          n_22 = ATgetFirst((ATermList) u_15);
          p_22 = (ATerm) ATgetNext((ATermList) u_15);
        }
      else
        _fail(t);
      {
        ATerm v_15 = ATgetArgument(t, 1);
        if(((ATgetType(v_15) == AT_LIST) && !(ATisEmpty(v_15))))
          {
            o_22 = ATgetFirst((ATermList) v_15);
            q_22 = (ATerm) ATgetNext((ATermList) v_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_22, o_22), (ATerm) ATmakeAppl(sym__2, p_22, q_22));
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  if(match_cons(t, sym__2))
    {
      r_22 = ATgetArgument(t, 0);
      s_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_22), r_22);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm b_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
  b_22 = t;
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_15 = ATgetArgument(t, 0);
            ATerm a_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(x_15);
        t = b_22;
      }
    else
      {
        t = w_15;
        {
          ATerm l_22 = NULL;
          if(match_cons(t, sym__3))
            {
              f_22 = ATgetArgument(t, 0);
              g_22 = ATgetArgument(t, 1);
              h_22 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, f_22, g_22);
          t = genzip_4_0(r_4, s_4, t_4, _id, t);
          l_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_22, h_22);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      u_22 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_22;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm g_2 = NULL;
      t = j_113(t);
      g_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_2, u_22);
      t = lookup_0_0(t);
      t = k_113(t);
      return(t);
    }
    t = alltd_1_0(g_5, t);
  }
  return(t);
}
ATerm UfVar_1_0 (ATerm v_116 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,b_23 = NULL,c_23 = NULL,e_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_16 = ATgetArgument(t, 0);
      if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
        {
          ATerm c_16 = ATgetFirst((ATermList) b_16);
          if(match_cons(c_16, sym__2))
            {
              v_22 = ATgetArgument(c_16, 0);
              w_22 = ATgetArgument(c_16, 1);
            }
          else
            _fail(t);
          x_22 = (ATerm) ATgetNext((ATermList) b_16);
        }
      else
        _fail(t);
      b_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_22;
  t = v_116(t);
  t = (ATerm) ATmakeAppl(sym__2, v_22, w_22);
  {
    ATerm d_16 = t;
    if((PushChoice() == 0))
      {
        ATerm f_23 = NULL,g_23 = NULL;
        if(match_cons(t, sym__2))
          {
            f_23 = ATgetArgument(t, 0);
            g_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_23;
        {
          ATerm h_5 (ATerm t)
          {
            if((f_23 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(h_5, t);
          t = (ATerm) ATmakeAppl(sym__2, f_23, g_23);
        }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_16;
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_22, w_22)), (ATerm) ATmakeAppl(sym__2, b_23, x_22));
    t = substitute_2_0(v_116, _id, t);
    if(match_cons(t, sym__2))
      {
        c_23 = ATgetArgument(t, 0);
        e_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, e_23, (ATerm) ATinsert(CheckATermList(c_23), (ATerm) ATmakeAppl(sym__2, v_22, w_22)));
  }
  return(t);
}
ATerm while_not_2_0 (ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm t)
{
  ATerm h_23 (ATerm t)
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_88(t);
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        t = n_88(t);
        t = h_23(t);
      }
    return(t);
  }
  t = h_23(t);
  return(t);
}
ATerm for_3_0 (ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm t)
{
  t = p_88(t);
  t = while_not_2_0(q_88, r_88, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm l_23 = NULL;
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_23, (ATerm) ATempty);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm m_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_16 = ATgetArgument(t, 0);
      if(((ATgetType(k_16) != AT_LIST) || !(ATisEmpty(k_16))))
        _fail(t);
      m_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_23;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_16 = ATgetFirst((ATermList) t);
      if(match_cons(l_16, sym__2))
        {
          o_23 = ATgetArgument(l_16, 0);
          if((o_23 != ATgetArgument(l_16, 1)))
            {
              _fail(ATgetArgument(l_16, 1));
            }
        }
      else
        _fail(t);
      p_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_23;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_16 = ATgetFirst((ATermList) t);
      if(match_cons(m_16, sym__2))
        {
          ATerm p_16 = ATgetArgument(m_16, 0);
          if(match_cons(p_16, sym_As_2))
            {
              q_23 = ATgetArgument(p_16, 0);
              r_23 = ATgetArgument(p_16, 1);
            }
          else
            _fail(t);
          s_23 = ATgetArgument(m_16, 1);
        }
      else
        _fail(t);
      t_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(t_23), (ATerm) ATmakeAppl(sym__2, r_23, s_23)), (ATerm) ATmakeAppl(sym__2, q_23, s_23));
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm u_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_16 = ATgetFirst((ATermList) t);
      if(match_cons(q_16, sym__2))
        {
          ATerm r_16 = ATgetArgument(q_16, 0);
          if(!(match_cons(r_16, sym_Wld_0)))
            _fail(t);
          {
            ATerm s_16 = ATgetArgument(q_16, 1);
          }
        }
      else
        _fail(t);
      u_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_23;
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(n_5, _id, t);
        ;
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
        {
          ATerm b_17 = t;
          int c_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_5 (ATerm t)
              {
                t = Var_1_0(_id, t);
                return(t);
              }
              t = UfVar_1_0(o_5, t);
              ;
              LocalPopChoice(c_17);
            }
          else
            {
              t = b_17;
              {
                ATerm d_17 = t;
                int e_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = _2_0(UfDecompose_0_0, _id, t);
                    ;
                    LocalPopChoice(e_17);
                  }
                else
                  {
                    t = d_17;
                    {
                      ATerm f_17 = t;
                      int g_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = _2_0(q_5, _id, t);
                          ;
                          LocalPopChoice(g_17);
                        }
                      else
                        {
                          t = f_17;
                          {
                            ATerm h_17 = t;
                            int i_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = _2_0(r_5, _id, t);
                                ;
                                LocalPopChoice(i_17);
                              }
                            else
                              {
                                t = h_17;
                                {
                                  ATerm t_5 (ATerm t)
                                  {
                                    ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm j_17 = ATgetFirst((ATermList) t);
                                        if(match_cons(j_17, sym__2))
                                          {
                                            v_23 = ATgetArgument(j_17, 0);
                                            w_23 = ATgetArgument(j_17, 1);
                                          }
                                        else
                                          _fail(t);
                                        x_23 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = v_23;
                                    {
                                      ATerm k_17 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = Var_1_0(_id, t);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = k_17;
                                        }
                                      t = w_23;
                                      t = Var_1_0(_id, t);
                                      t = x_23;
                                    }
                                    return(t);
                                  }
                                  t = _2_0(t_5, _id, t);
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
    return(t);
  }
  t = for_3_0(i_5, j_5, m_5, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_23 = NULL,z_23 = NULL;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)), (ATerm) ATempty);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_23 = ATgetFirst((ATermList) t);
          {
            ATerm o_17 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = z_23;
      if(match_cons(t, sym_Defined_2))
        {
          ATerm p_17 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) p_17) != ATmakeSymbol("i_0", 0, ATtrue)))
            _fail(t);
          y_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_23;
      ;
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        ATerm s_17 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_24 = NULL,b_24 = NULL;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)), (ATerm) ATempty);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_24 = ATgetFirst((ATermList) t);
                {
                  ATerm c_18 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = b_24;
            if(match_cons(t, sym_Defined_2))
              {
                ATerm l_18 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) l_18) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                a_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_24;
            ;
            LocalPopChoice(b_18);
          }
        else
          {
            t = s_17;
            {
              ATerm c_24 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)), (ATerm) ATempty);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_24 = ATgetFirst((ATermList) t);
                  {
                    ATerm m_18 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = c_24;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm n_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 = NULL,s_2 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)), r_24);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_2 = ATgetFirst((ATermList) t);
            {
              ATerm r_18 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = s_2;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm s_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_18) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
            r_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_2;
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        {
          ATerm t_18 = t;
          int a_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_2 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)), r_24);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_2 = ATgetFirst((ATermList) t);
                  {
                    ATerm b_19 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = y_2;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(a_19);
            }
          else
            {
              t = t_18;
              {
                ATerm c_3 = NULL;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)), r_24);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    c_3 = ATgetFirst((ATermList) t);
                    {
                      ATerm g_19 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = c_3;
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm n_90 (ATerm), ATerm t)
{
  ATerm w_24 (ATerm t)
  {
    ATerm i_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_90(t);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = i_19;
        t = SRTS_all(w_24, t);
      }
    return(t);
  }
  t = w_24(t);
  return(t);
}
ATerm Match_1_0 (ATerm g_78 (ATerm), ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
  a_25 = t;
  if(match_cons(t, sym_Match_1))
    {
      y_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_25);
  x_24 = t;
  t = y_24;
  t = g_78(t);
  z_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, z_24), x_24);
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = alltd_1_0(Binding_0_0, t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm m_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = introduce_binding_0_0(t);
      ;
      LocalPopChoice(o_19);
    }
  else
    {
      t = m_19;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = g_25;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm q_19 = ATgetArgument(t, 0);
          ATerm s_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_25;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL;
  t = Match_1_0(u_5, t);
  if(match_cons(t, sym_Match_1))
    {
      e_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        f_25 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, e_25);
        {
          ATerm x_19 = t;
          int b_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_25, f_25));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(v_5, t);
              t = (ATerm) ATmakeAppl(sym_Match_1, e_25);
              ;
              LocalPopChoice(b_20);
            }
          else
            {
              t = x_19;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue)), (ATerm)ATmakeAppl(sym_Match_1, e_25), (ATerm)ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue)), f_25)), (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue))));
              t = term_c_20;
            }
        }
        ;
        LocalPopChoice(w_19);
      }
    else
      {
        t = t_19;
        {
          ATerm h_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_25;
              {
                ATerm j_20 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(w_5, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_20;
                  }
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_k_20, e_25));
                t = assert_1_0(x_5, t);
                t = (ATerm) ATmakeAppl(sym_Match_1, e_25);
              }
              ;
              LocalPopChoice(i_20);
            }
          else
            {
              t = h_20;
            }
        }
      }
  }
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = exec_maybe_1_0(cp_0_0, t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = exec_maybe_1_0(cp_0_0, t);
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm l_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = l_20;
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0_0(t);
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
                  t = prop_scope_1_0(cp_0_0, t);
                  ;
                  LocalPopChoice(d_21);
                }
              else
                {
                  t = c_21;
                  {
                    ATerm e_21 = t;
                    int h_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        ;
                        LocalPopChoice(h_21);
                      }
                    else
                      {
                        t = e_21;
                        {
                          ATerm m_21 = t;
                          int n_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
                              ;
                              LocalPopChoice(n_21);
                            }
                          else
                            {
                              t = m_21;
                              {
                                ATerm o_21 = t;
                                int p_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Seq_2_0(cp_0_0, cp_0_0, t);
                                    ;
                                    LocalPopChoice(p_21);
                                  }
                                else
                                  {
                                    t = o_21;
                                    {
                                      ATerm q_21 = t;
                                      int r_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1_0(cp_0_0, t);
                                          ;
                                          LocalPopChoice(r_21);
                                        }
                                      else
                                        {
                                          t = q_21;
                                          {
                                            ATerm s_21 = t;
                                            int t_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = prop_let_1_0(cp_0_0, t);
                                                ;
                                                LocalPopChoice(t_21);
                                              }
                                            else
                                              {
                                                t = s_21;
                                                {
                                                  ATerm u_21 = t;
                                                  int v_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_25 = NULL;
                                                      l_25 = t;
                                                      {
                                                        ATerm w_21 = t;
                                                        int x_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm y_21 = ATgetArgument(t, 0);
                                                                ATerm a_22 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(x_21);
                                                            t = l_25;
                                                            t = Rec_2_0(_id, y_5, t);
                                                          }
                                                        else
                                                          {
                                                            t = w_21;
                                                            if(match_cons(t, sym_Not_1))
                                                              {
                                                                ATerm c_22 = ATgetArgument(t, 0);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = term_r_10;
                                                            t = assert_1_0(z_5, t);
                                                            t = l_25;
                                                            t = Not_1_0(a_6, t);
                                                          }
                                                      }
                                                      ;
                                                      LocalPopChoice(v_21);
                                                    }
                                                  else
                                                    {
                                                      t = u_21;
                                                      {
                                                        ATerm d_22 = t;
                                                        int e_22 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = prop_sdef_1_0(cp_0_0, t);
                                                            ;
                                                            LocalPopChoice(e_22);
                                                          }
                                                        else
                                                          {
                                                            t = d_22;
                                                            t = SRTS_all(cp_0_0, t);
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
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  if(match_cons(t, sym__2))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_3 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_22 = ATgetArgument(t, 0);
            ATerm m_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(q_25, r_25);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_22 = ATgetFirst((ATermList) t);
            m_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_3;
        ;
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        t = (ATerm) ATempty;
      }
    s_25 = t;
    t = SSL_table_put(q_25, r_25, s_25);
    t = (ATerm) ATmakeAppl(sym__2, q_25, r_25);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm g_105 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
  y_25 = t;
  t = g_105(t);
  z_25 = t;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(z_25, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_26 = ATgetFirst((ATermList) t);
        a_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(z_25, (ATerm)ATmakeAppl(sym_Scopes_0), a_26);
    t = b_26;
    {
      ATerm b_6 (ATerm t)
      {
        ATerm c_26 = NULL;
        c_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_25, c_26);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(b_6, t);
      t = y_25;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm q_87 (ATerm), ATerm r_87 (ATerm), ATerm t)
{
  ATerm d_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_87(t);
      t = r_87(t);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = d_23;
      t = r_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm f_105 (ATerm), ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  t = f_105(t);
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_26, term_j_23);
  {
    ATerm k_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_24 = ATgetArgument(t, 0);
            ATerm e_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_26, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = k_23;
        t = (ATerm) ATempty;
      }
    h_26 = t;
    t = SSL_table_put(g_26, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(h_26), (ATerm) ATempty));
    t = f_26;
  }
  return(t);
}
ATerm scope_2_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm t)
{
  t = begin_scope_1_0(h_105, t);
  {
    ATerm c_6 (ATerm t)
    {
      t = end_scope_1_0(h_105, t);
      return(t);
    }
    t = restore_always_2_0(i_105, c_6, t);
  }
  return(t);
}
ATerm map_1_0 (ATerm m_94 (ATerm), ATerm t)
{
  ATerm m_26 (ATerm t)
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = Cons_2_0(m_94, m_26, t);
      }
    return(t);
  }
  t = m_26(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm r_73 (ATerm), ATerm t)
{
  ATerm n_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
  r_26 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      p_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_26);
  n_26 = t;
  t = p_26;
  t = r_73(t);
  q_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, q_26), n_26);
  return(t);
}
ATerm Cons_2_0 (ATerm l_73 (ATerm), ATerm m_73 (ATerm), ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL;
  z_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_26 = ATgetFirst((ATermList) t);
      w_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_26);
  u_26 = t;
  t = v_26;
  t = l_73(t);
  x_26 = t;
  t = w_26;
  t = m_73(t);
  y_26 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(y_26), x_26), u_26);
  return(t);
}
ATerm Signature_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL;
  f_27 = t;
  if(match_cons(t, sym_Signature_1))
    {
      d_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_27);
  c_27 = t;
  t = d_27;
  t = s_73(t);
  e_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, e_27), c_27);
  return(t);
}
ATerm Specification_1_0 (ATerm w_73 (ATerm), ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
  l_27 = t;
  if(match_cons(t, sym_Specification_1))
    {
      j_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_27);
  i_27 = t;
  t = j_27;
  t = w_73(t);
  k_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, k_27), i_27);
  return(t);
}
ATerm _2_0 (ATerm w_68 (ATerm), ATerm x_68 (ATerm), ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL;
  t_27 = t;
  if(match_cons(t, sym__2))
    {
      p_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_27);
  o_27 = t;
  t = p_27;
  t = w_68(t);
  r_27 = t;
  t = q_27;
  t = x_68(t);
  s_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, r_27, s_27), o_27);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  if(match_cons(t, sym__2))
    {
      w_27 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_27, term_h_24);
  t = open_stream_0_0(t);
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_27, x_27);
  t = c_107(t);
  t = fclose_0_0(t);
  t = x_27;
  return(t);
}
ATerm j_6 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_24 = ATgetArgument(t, 0);
      if(match_cons(i_24, sym_Stream_1))
        {
          e_28 = ATgetArgument(i_24, 0);
        }
      else
        _fail(t);
      f_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(e_28, f_28);
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_28);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,m_28 = NULL,o_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_24 = ATgetArgument(t, 0);
      if(match_cons(j_24, sym_Stream_1))
        {
          j_28 = ATgetArgument(j_24, 0);
        }
      else
        _fail(t);
      k_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(j_28, k_28);
  m_28 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), m_28);
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_28);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = fetch_1_0(j_6, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = WriteToFile_1_0(k_6, t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = WriteToFile_1_0(m_6, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_27 = NULL,c_28 = NULL;
  z_27 = t;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm k_24 = t;
      int l_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_6 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_28 != NULL) && (c_28 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_6, t);
          ;
          LocalPopChoice(l_24);
        }
      else
        {
          t = k_24;
          t = term_m_24;
          if(((c_28 != NULL) && (c_28 != t)))
            _fail(t);
          else
            c_28 = t;
        }
      return(t);
    }
    t = _2_0(d_6, _id, t);
    t = z_27;
    {
      ATerm f_6 (ATerm t)
      {
        ATerm o_3 = NULL;
        o_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_28), o_3);
        return(t);
      }
      t = _2_0(_id, f_6, t);
      {
        ATerm n_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(g_6, h_6, t);
            ;
            LocalPopChoice(o_24);
          }
        else
          {
            t = n_24;
            t = _2_0(_id, l_6, t);
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
ATerm apply_strategy_1_0 (ATerm e_110 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  p_28 = t;
  t = dtime_0_0(t);
  t = p_28;
  t = e_110(t);
  q_28 = t;
  t = dtime_0_0(t);
  r_28 = t;
  t = q_28;
  if(match_cons(t, sym__2))
    {
      s_28 = ATgetArgument(t, 0);
      t_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_28), (ATerm) ATmakeAppl(sym_Runtime_1, r_28)), t_28);
  return(t);
}
ATerm h_29 (ATerm b_29, ATerm t)
{
  t = SSL_fclose(b_29);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL;
  f_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_29 = ATgetArgument(t, 0);
      {
        ATerm p_24 = t;
        int q_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_29);
            ;
            LocalPopChoice(q_24);
          }
        else
          {
            t = p_24;
            t = h_29(f_29, t);
          }
      }
    }
  else
    {
      t = h_29(f_29, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_29 = NULL;
  t = SSL_stdin_stream();
  i_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_29);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_29 = NULL;
  t = SSL_stdout_stream();
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_29);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_29 = NULL;
  t = SSL_stderr_stream();
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_29);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm s_29 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      s_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_29;
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  t = SSL_is_string(w_29);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_24 = ATgetArgument(t, 0);
      ATerm t_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_4 = NULL,c_5 = NULL;
        z_4 = t;
        t = SSL_explode_term(z_4);
        if(match_cons(t, sym__2))
          {
            ATerm b_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm c_25 = ATgetArgument(t, 1);
              if(((ATgetType(c_25) == AT_LIST) && !(ATisEmpty(c_25))))
                {
                  c_5 = ATgetFirst((ATermList) c_25);
                  {
                    ATerm d_25 = (ATerm) ATgetNext((ATermList) c_25);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_5;
        if(match_cons(t, sym_stderr_0))
          {
            t = c_5;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = c_5;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = c_5;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        {
          ATerm h_25 = t;
          int i_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
              t = _2_0(n_6, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_29 = ATgetArgument(t, 0);
                  q_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(p_29, q_29);
              r_29 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, r_29);
              ;
              LocalPopChoice(i_25);
            }
          else
            {
              t = h_25;
              {
                ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
                t = _2_0(o_6, _id, t);
                if(match_cons(t, sym__2))
                  {
                    t_29 = ATgetArgument(t, 0);
                    u_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(t_29, u_29);
                v_29 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, v_29);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_30 = NULL;
      a_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_30, term_m_25);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
      {
        ATerm d_5 = NULL;
        d_5 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = d_5;
        _fail(t);
      }
    }
  x_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(z_29);
  y_29 = t;
  t = x_29;
  t = fclose_0_0(t);
  t = y_29;
  return(t);
}
ATerm fetch_1_0 (ATerm x_94 (ATerm), ATerm t)
{
  ATerm f_30 (ATerm t)
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(x_94, _id, t);
        ;
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        t = Cons_2_0(_id, f_30, t);
      }
    return(t);
  }
  t = f_30(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = p_25;
      {
        ATerm i_30 = NULL,j_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_30 = ATgetFirst((ATermList) t);
            j_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_30;
        {
          ATerm q_6 (ATerm t)
          {
            t = j_30;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(q_6, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm d_95 (ATerm), ATerm t)
{
  ATerm p_30 (ATerm t)
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_30, t);
        ;
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_95(t);
      }
    return(t);
  }
  t = p_30(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm s_30 = NULL;
  s_30 = t;
  t = SSL_explode_string(s_30);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm t_30 = NULL;
  t_30 = t;
  t = SSL_explode_string(t_30);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm r_30 = NULL;
  t = _2_0(t_6, u_6, t);
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_30 = NULL,w_30 = NULL;
        if(match_cons(t, sym__2))
          {
            v_30 = ATgetArgument(t, 0);
            w_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_30;
        {
          ATerm a_7 (ATerm t)
          {
            t = w_30;
            return(t);
          }
          t = at_end_1_0(a_7, t);
        }
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        {
          ATerm k_5 = NULL,l_5 = NULL;
          k_5 = t;
          t = SSL_explode_term(k_5);
          if(match_cons(t, sym__2))
            {
              ATerm d_26 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_26) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              l_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_5;
          t = concat_0_0(t);
        }
      }
    r_30 = t;
    t = SSL_implode_string(r_30);
  }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm e_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = e_26;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_31 = NULL;
      j_31 = t;
      t = SSL_is_string(j_31);
      ;
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      {
        ATerm l_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(b_7, t);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = l_26;
            {
              ATerm u_31 = NULL,y_31 = NULL,c_32 = NULL;
              u_31 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_31 = ATgetArgument(t, 0);
                  t = y_31;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_31 = ATgetArgument(t, 0);
                      t = y_31;
                      {
                        ATerm s_26 = t;
                        int t_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_31);
                            {
                              ATerm a_27 = t;
                              int b_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_6 = NULL;
                                  t = eval_config_0_0(t);
                                  i_6 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_31, i_6);
                                  t = i_6;
                                  ;
                                  LocalPopChoice(b_27);
                                }
                              else
                                {
                                  t = a_27;
                                }
                            }
                            ;
                            LocalPopChoice(t_26);
                          }
                        else
                          {
                            t = s_26;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_31), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = y_31;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_32 = NULL,l_32 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_31 = ATgetArgument(t, 0);
                          c_32 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_31;
                      t = eval_config_0_0(t);
                      k_32 = t;
                      t = c_32;
                      t = eval_config_0_0(t);
                      l_32 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_32, l_32);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_108 (ATerm), ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_32 = NULL,s_32 = NULL;
      q_32 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm m_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_6 = NULL;
            t = eval_config_0_0(t);
            p_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_6);
            t = p_6;
            ;
            LocalPopChoice(n_27);
          }
        else
          {
            t = m_27;
          }
        s_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_32, term_u_27);
        t = geq_0_0(t);
        t = q_32;
        t = g_108(t);
      }
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  if(match_string(t, "-k"))
    {
      t = y_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_32;
    }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL;
  z_32 = t;
  t = SSL_string_to_int(z_32);
  a_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), a_33);
  t = z_32;
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_7, f_7, g_7, t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm c_33 = NULL;
  c_33 = t;
  if(match_string(t, "-S"))
    {
      t = c_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_33;
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_b_28;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm k_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL;
  d_33 = t;
  t = SSL_string_to_int(d_33);
  e_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_33);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_33);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_h_28;
  return(t);
}
ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_i_28;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_7, i_7, j_7, t);
      ;
      LocalPopChoice(u_28);
    }
  else
    {
      t = n_28;
      {
        ATerm v_28 = t;
        int w_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_7, l_7, m_7, t);
            ;
            LocalPopChoice(w_28);
          }
        else
          {
            t = v_28;
            t = Option_3_0(n_7, o_7, p_7, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_33 = NULL;
      t = term_h_10;
      t = c_0(t);
      j_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_28, term_y_28, j_33);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm m_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_33 = ATgetFirst((ATermList) t);
          i_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_33;
      t = a_0(t);
      t = term_h_10;
      t = b_0(t);
      m_33 = t;
      t = (ATerm) ATinsert(CheckATermList(i_33), m_33);
    }
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm o_33 = NULL;
  o_33 = t;
  if(match_string(t, "-o"))
    {
      t = o_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_33;
    }
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm p_33 = NULL;
  p_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), p_33);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_33);
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_7, t_7, w_7, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL;
  if(match_cons(t, sym__3))
    {
      t_33 = ATgetArgument(t, 0);
      u_33 = ATgetArgument(t, 1);
      v_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_33, u_33);
  {
    ATerm a_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_29 = ATgetArgument(t, 0);
            ATerm g_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_33, u_33);
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = a_29;
        t = (ATerm) ATempty;
      }
    w_33 = t;
    t = SSL_table_put(t_33, u_33, (ATerm) ATinsert(CheckATermList(w_33), v_33));
    t = (ATerm) ATmakeAppl(sym__3, t_33, u_33, v_33);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_34 = NULL;
      t = term_h_10;
      t = j_0(t);
      i_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_28, term_y_28, i_34);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm p_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_34 = ATgetFirst((ATermList) t);
          f_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_34 = ATgetFirst((ATermList) t);
          h_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_34;
      t = f_0(t);
      t = g_34;
      t = h_0(t);
      p_34 = t;
      t = (ATerm) ATinsert(CheckATermList(h_34), p_34);
    }
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm r_34 = NULL;
  r_34 = t;
  if(match_string(t, "-i"))
    {
      t = r_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_34;
    }
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm s_34 = NULL;
  s_34 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), s_34);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_34);
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_7, z_7, a_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_10;
  t = whoami_0_0(t);
  t_34 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), t_34));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_6 = NULL;
        t = eval_config_0_0(t);
        v_6 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_6);
        t = v_6;
        ;
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm t)
{
  ATerm o_29 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_100(t);
      ;
      LocalPopChoice(b_30);
    }
  else
    {
      t = o_29;
      {
        ATerm w_34 = NULL,x_34 = NULL,a_35 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_34 = ATgetFirst((ATermList) t);
            x_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_34;
        t = foldr_2_0(o_100, p_100, t);
        a_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_34, a_35);
        t = p_100(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_a_28;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL;
  if(match_cons(t, sym__2))
    {
      c_7 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(c_7, d_7);
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        t = SSL_addr(c_7, d_7);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_35 = NULL,x_6 = NULL,z_6 = NULL;
  t = times_0_0(t);
  x_6 = t;
  t = SSL_explode_term(x_6);
  if(match_cons(t, sym__2))
    {
      ATerm e_30 = ATgetArgument(t, 0);
      z_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6;
  t = foldr_2_0(b_8, d_8, t);
  f_35 = t;
  t = SSL_TicksToSeconds(f_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL;
  s_35 = t;
  if(match_cons(t, sym__2))
    {
      t_35 = ATgetArgument(t, 0);
      u_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_35;
        if((t_35 != t))
          {
            _fail(t);
          }
        t = s_35;
        ;
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        t = s_35;
        {
          ATerm k_30 = t;
          int l_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_35, u_35);
              ;
              LocalPopChoice(l_30);
            }
          else
            {
              t = k_30;
              t = SSL_gtr(t_35, u_35);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_35, u_35);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_108 (ATerm), ATerm t)
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_35 = NULL,z_35 = NULL;
      x_35 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm o_30 = t;
        int q_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_8 = NULL;
            t = eval_config_0_0(t);
            c_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_8);
            t = c_8;
            ;
            LocalPopChoice(q_30);
          }
        else
          {
            t = o_30;
          }
        z_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_35, term_u_30);
        t = geq_0_0(t);
        t = x_35;
        t = f_108(t);
      }
      ;
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL;
  t = run_time_0_0(t);
  b_36 = t;
  t = term_h_10;
  t = whoami_0_0(t);
  c_36 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), b_36), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), c_36));
  t = (ATerm) ATmakeAppl(sym__2, term_x_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_30), b_36), term_y_30), c_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm c_111 (ATerm), ATerm t)
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm c_31 = t;
        int d_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_8 = NULL;
            t = eval_config_0_0(t);
            g_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), g_8);
            t = g_8;
            ;
            LocalPopChoice(d_31);
          }
        else
          {
            t = c_31;
          }
      }
      ;
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
      {
        ATerm f_8 (ATerm t)
        {
          ATerm e_31 = t;
          int f_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(f_31);
            }
          else
            {
              t = e_31;
              {
                ATerm g_31 = t;
                int h_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(h_31);
                  }
                else
                  {
                    t = g_31;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(f_8, t);
      }
    }
  t = c_111(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_36 = ATgetFirst((ATermList) t);
      f_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_36 = NULL,m_36 = NULL;
        t = f_36;
        t = e_0(t);
        j_36 = t;
        t = e_36;
        t = d_0(t);
        m_36 = t;
        t = f_36;
        {
          ATerm h_8 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_36), m_36);
            return(t);
          }
          t = reverse_acc_2_0(d_0, h_8, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_10;
      t = e_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm f_86 (ATerm), ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
  q_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_36);
  n_36 = t;
  t = o_36;
  t = f_86(t);
  p_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, p_36), n_36);
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_36), term_i_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm m_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_8 = NULL;
            t = eval_config_0_0(t);
            m_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_8);
            t = m_8;
            ;
            LocalPopChoice(n_31);
          }
        else
          {
            t = m_31;
          }
      }
      ;
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
      {
        ATerm i_8 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(i_8, t);
      }
    }
  t = term_o_31;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, k_8, t);
  t = map_1_0(l_8, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm g_86 (ATerm), ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
  x_36 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      v_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_36);
  u_36 = t;
  t = v_36;
  t = g_86(t);
  w_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, w_36), u_36);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  b_37 = t;
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_31 = ATgetFirst((ATermList) t);
                ATerm s_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_37;
          }
        ;
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        t = (ATerm) ATinsert(ATempty, b_37);
      }
    c_37 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), c_37);
    t = b_37;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm t_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_8 = NULL;
        t = eval_config_0_0(t);
        q_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_8);
        t = q_8;
        ;
        LocalPopChoice(v_31);
      }
    else
      {
        t = t_31;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm n_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_z_31;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm r_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_b_32;
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_8, o_8, p_8, t);
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
      t = Option_3_0(r_8, s_8, t_8, t);
    }
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm j_37 = NULL;
  j_37 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_37);
  t = (ATerm) ATmakeAppl(sym_Program_1, j_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_113 (ATerm), ATerm t)
{
  ATerm h_37 = NULL;
  h_37 = t;
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_32;
        t = f_113(t);
        ;
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
      }
    t = h_37;
    {
      ATerm v_8 (ATerm t)
      {
        ATerm j_32 = t;
        int m_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_32 = t;
            int o_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(o_32);
              }
            else
              {
                t = n_32;
                t = f_113(t);
                t = Cons_2_0(_id, v_8, t);
              }
            ;
            LocalPopChoice(m_32);
          }
        else
          {
            t = j_32;
            {
              ATerm l_37 = NULL,m_37 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_37 = ATgetFirst((ATermList) t);
                  m_37 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_37), (ATerm) ATmakeAppl(sym_Undefined_1, l_37));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_8, v_8, t);
    }
  }
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm w_37 = NULL;
  w_37 = t;
  if(match_string(t, "--help"))
    {
      t = w_37;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_37;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_37;
        }
    }
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_p_32;
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm a_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_113 (ATerm), ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
  t_37 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = t_37;
  {
    ATerm w_8 (ATerm t)
    {
      ATerm t_32 = t;
      int u_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_113(t);
          ;
          LocalPopChoice(u_32);
        }
      else
        {
          t = t_32;
          {
            ATerm v_32 = t;
            int w_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_8, y_8, z_8, t);
                ;
                LocalPopChoice(w_32);
              }
            else
              {
                t = v_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_8, t);
    {
      ATerm x_32 = t;
      int b_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_38 = NULL;
          b_38 = t;
          {
            ATerm f_33 = t;
            int g_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = b_38;
                {
                  ATerm k_33 = t;
                  int l_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm n_33 = t;
                        int q_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm j_9 = NULL;
                            t = eval_config_0_0(t);
                            j_9 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), j_9);
                            t = j_9;
                            ;
                            LocalPopChoice(q_33);
                          }
                        else
                          {
                            t = n_33;
                          }
                      }
                      ;
                      LocalPopChoice(l_33);
                    }
                  else
                    {
                      t = k_33;
                      t = fetch_1_0(a_9, t);
                    }
                  t = b_38;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(g_33);
              }
            else
              {
                t = f_33;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm r_33 = t;
                  int s_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_9 = NULL;
                      t = eval_config_0_0(t);
                      s_9 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), s_9);
                      t = s_9;
                      ;
                      LocalPopChoice(s_33);
                    }
                  else
                    {
                      t = r_33;
                    }
                  t = b_38;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(b_33);
        }
      else
        {
          t = x_32;
          {
            ATerm x_33 = t;
            int y_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_9 (ATerm t)
                {
                  ATerm g_9 (ATerm t)
                  {
                    if(((u_37 != NULL) && (u_37 != t)))
                      _fail(t);
                    else
                      u_37 = t;
                    return(t);
                  }
                  t = Undefined_1_0(g_9, t);
                  return(t);
                }
                t = fetch_1_0(f_9, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_37)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_x_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_37)), term_z_33));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(y_33);
              }
            else
              {
                t = x_33;
              }
          }
        }
      v_37 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = v_37;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm h_111 (ATerm), ATerm t)
{
  ATerm e_38 = NULL;
  t = parse_options_1_0(e_111, t);
  e_38 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), e_38);
  t = e_38;
  t = g_111(t);
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_111, t);
        ;
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        {
          ATerm c_34 = t;
          int d_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_111(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_34);
            }
          else
            {
              t = c_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm l_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_j_34;
  return(t);
}
ATerm n_9 (ATerm t)
{
  t = term_k_34;
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL;
  f_38 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_10 = NULL;
        t = eval_config_0_0(t);
        b_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_10);
        t = b_10;
        ;
        LocalPopChoice(m_34);
      }
    else
      {
        t = l_34;
      }
    g_38 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, g_38));
    t = f_38;
  }
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = if_verbose2_1_0(o_9, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm t)
{
  ATerm h_9 (ATerm t)
  {
    ATerm n_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_110(t);
        ;
        LocalPopChoice(o_34);
      }
    else
      {
        t = n_34;
        {
          ATerm q_34 = t;
          int u_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(u_34);
            }
          else
            {
              t = q_34;
              {
                ATerm v_34 = t;
                int y_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(y_34);
                  }
                else
                  {
                    t = v_34;
                    {
                      ATerm z_34 = t;
                      int b_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(l_9, m_9, n_9, t);
                          ;
                          LocalPopChoice(b_35);
                        }
                      else
                        {
                          t = z_34;
                          {
                            ATerm c_35 = t;
                            int d_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(d_35);
                              }
                            else
                              {
                                t = c_35;
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
  ATerm k_9 (ATerm t)
  {
    ATerm h_38 = NULL,i_38 = NULL,e_10 = NULL;
    h_38 = t;
    {
      ATerm e_35 = t;
      int g_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_38 != NULL) && (i_38 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_38 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_9, t);
          ;
          LocalPopChoice(g_35);
        }
      else
        {
          t = e_35;
          t = term_h_35;
          i_38 = t;
        }
      t = not_null(i_38);
      t = ReadFromFile_0_0(t);
      e_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_38, e_10);
      t = apply_strategy_1_0(n_110, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(h_9, p_110, i_9, k_9, t);
  return(t);
}
ATerm z_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = scope_2_0(g_10, cp_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm q_9 (ATerm t)
  {
    ATerm r_9 (ATerm t)
    {
      ATerm t_9 (ATerm t)
      {
        ATerm u_9 (ATerm t)
        {
          t = Signature_1_0(_id, t);
          return(t);
        }
        ATerm v_9 (ATerm t)
        {
          ATerm w_9 (ATerm t)
          {
            ATerm a_10 (ATerm t)
            {
              ATerm c_10 (ATerm t)
              {
                t = scope_2_0(d_10, f_10, t);
                return(t);
              }
              t = map_1_0(c_10, t);
              return(t);
            }
            t = Strategies_1_0(a_10, t);
            return(t);
          }
          t = Cons_2_0(w_9, z_9, t);
          return(t);
        }
        t = Cons_2_0(u_9, v_9, t);
        return(t);
      }
      t = Specification_1_0(t_9, t);
      return(t);
    }
    t = _2_0(_id, r_9, t);
    return(t);
  }
  t = iowrap_3_0(q_9, _fail, default_usage_0_0, t);
  return(t);
}
