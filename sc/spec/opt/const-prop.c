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
ATerm term_l_34;
ATerm term_k_34;
ATerm term_z_33;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_k_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_s_31;
ATerm term_m_31;
ATerm term_a_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_x_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_u_27;
ATerm term_p_25;
ATerm term_n_24;
ATerm term_h_24;
ATerm term_a_24;
ATerm term_n_20;
ATerm term_f_20;
ATerm term_g_15;
ATerm term_t_14;
ATerm term_w_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_m_10;
ATerm term_l_10;
void init_constant_terms (void)
{
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_p_10);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_28);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym__3, term_a_32, term_b_32, term_l_10);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm);
ATerm n_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm s_0 (ATerm);
ATerm prop_sdef_1_0 (ATerm t_86 (ATerm), ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm exec_maybe_1_0 (ATerm k_86 (ATerm), ATerm);
ATerm Not_1_0 (ATerm x_78 (ATerm), ATerm);
ATerm assert_1_0 (ATerm i_105 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm);
ATerm Let_2_0 (ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm prop_let_1_0 (ATerm u_86 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm l_7 (ATerm c_6, ATerm f_6, ATerm i_6, ATerm);
ATerm isect_CurrentTerm_0_0 (ATerm);
ATerm d_1 (ATerm);
ATerm r_9 (ATerm l_8, ATerm n_8, ATerm w_8, ATerm);
ATerm isect_Binding_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm save_CurrentTerm_0_0 (ATerm);
ATerm t_1 (ATerm);
ATerm save_Binding_0_0 (ATerm);
ATerm prop_abstract_choice_2_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm);
ATerm prop_choice_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm);
ATerm t_2 (ATerm);
ATerm b_3 (ATerm);
ATerm prop_traversal_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm);
ATerm e_3 (ATerm);
ATerm i_3 (ATerm);
ATerm l_3 (ATerm);
ATerm p_3 (ATerm);
ATerm prop_call_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm x_3 (ATerm);
ATerm prop_scope_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm Build_1_0 (ATerm g_78 (ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm b_4 (ATerm);
ATerm prop_build_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm y_89 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm introduce_binding_0_0 (ATerm);
ATerm Var_1_0 (ATerm o_74 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm genzip_4_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm c_5 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm);
ATerm UfVar_1_0 (ATerm u_116 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm);
ATerm for_3_0 (ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm prop_pattern_match_0_0 (ATerm);
ATerm CurrentTerm_0_0 (ATerm);
ATerm Binding_0_0 (ATerm);
ATerm alltd_1_0 (ATerm m_90 (ATerm), ATerm);
ATerm Match_1_0 (ATerm f_78 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm prop_match_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm cp_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm f_105 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm e_105 (ATerm), ATerm);
ATerm scope_2_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm);
ATerm map_1_0 (ATerm l_94 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm q_73 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm r_73 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm v_73 (ATerm), ATerm);
ATerm _2_0 (ATerm v_68 (ATerm), ATerm w_68 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm b_107 (ATerm), ATerm);
ATerm h_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm d_110 (ATerm), ATerm);
ATerm z_28 (ATerm t_28, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm w_94 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm c_95 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm y_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm m_108 (ATerm), ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm e_7 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_108 (ATerm), ATerm);
ATerm a_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm b_8 (ATerm);
ATerm need_help_1_0 (ATerm b_111 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm e_86 (ATerm), ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm f_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm g_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm m_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm q_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm e_113 (ATerm), ATerm);
ATerm u_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm parse_options_1_0 (ATerm d_113 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_111 (ATerm), ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm);
ATerm f_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm q_9 (ATerm);
ATerm s_9 (ATerm);
ATerm iowrap_3_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm f_10 (ATerm);
ATerm h_10 (ATerm);
ATerm k_10 (ATerm);
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
  t = term_l_10;
  t = whoami_0_0(t);
  e_1 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_1), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = z_0;
  return(t);
}
ATerm SDefT_4_0 (ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL;
  q_1 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      h_1 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
      j_1 = ATgetArgument(t, 2);
      l_1 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_1);
  g_1 = t;
  t = h_1;
  t = q_80(t);
  m_1 = t;
  t = i_1;
  t = r_80(t);
  n_1 = t;
  t = j_1;
  t = s_80(t);
  o_1 = t;
  t = l_1;
  t = t_80(t);
  p_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, m_1, n_1, o_1, p_1), g_1);
  return(t);
}
ATerm n_0 (ATerm t)
{
  t = term_m_10;
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      w_1 = ATgetArgument(t, 0);
      {
        ATerm o_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_1), term_p_10);
  t = assert_1_0(q_0, t);
  t = x_1;
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = term_m_10;
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm prop_sdef_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm u_1 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm s_10 = ATgetArgument(t, 0);
      ATerm t_10 = ATgetArgument(t, 1);
      u_1 = ATgetArgument(t, 2);
      {
        ATerm u_10 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm o_0 (ATerm t)
    {
      ATerm v_1 = NULL;
      ATerm r_0 (ATerm t)
      {
        ATerm y_1 = NULL;
        y_1 = t;
        t = term_w_10;
        t = assert_1_0(s_0, t);
        t = y_1;
        t = t_86(t);
        return(t);
      }
      if(((v_1 != NULL) && (v_1 != t)))
        _fail(t);
      else
        v_1 = t;
      t = u_1;
      t = map_1_0(p_0, t);
      t = not_null(v_1);
      t = SDefT_4_0(_id, _id, _id, r_0, t);
      return(t);
    }
    t = scope_2_0(n_0, o_0, t);
  }
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL;
  z_1 = t;
  t = term_w_10;
  t = assert_1_0(t_0, t);
  t = z_1;
  t = save_Binding_0_0(t);
  a_2 = t;
  t = z_1;
  t = k_86(t);
  b_2 = t;
  t = term_w_10;
  t = assert_1_0(u_0, t);
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, a_2);
  t = table_putlist_0_0(t);
  t = b_2;
  return(t);
}
ATerm Not_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,k_2 = NULL,m_2 = NULL;
  m_2 = t;
  if(match_cons(t, sym_Not_1))
    {
      i_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_2);
  h_2 = t;
  t = i_2;
  t = x_78(t);
  k_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, k_2), h_2);
  return(t);
}
ATerm assert_1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,u_2 = NULL,v_2 = NULL;
  if(match_cons(t, sym__2))
    {
      q_2 = ATgetArgument(t, 0);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_105(t);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_2, q_2, r_2);
  t = table_push_0_0(t);
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(s_2, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_2 = ATgetFirst((ATermList) t);
        v_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(s_2, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(v_2), (ATerm) ATinsert(CheckATermList(u_2), q_2)));
    t = (ATerm) ATmakeAppl(sym__2, q_2, r_2);
  }
  return(t);
}
ATerm Rec_2_0 (ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,d_3 = NULL,g_3 = NULL,m_3 = NULL,n_3 = NULL;
  n_3 = t;
  if(match_cons(t, sym_Rec_2))
    {
      x_2 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_3);
  w_2 = t;
  t = x_2;
  t = v_78(t);
  g_3 = t;
  t = d_3;
  t = w_78(t);
  m_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, g_3, m_3), w_2);
  return(t);
}
ATerm Let_2_0 (ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL;
  g_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_4 = ATgetArgument(t, 0);
      c_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_4);
  z_3 = t;
  t = a_4;
  t = y_77(t);
  d_4 = t;
  t = c_4;
  t = z_77(t);
  e_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, d_4, e_4), z_3);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm prop_let_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm k_4 = NULL,m_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm z_10 = ATgetArgument(t, 0);
      ATerm a_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  k_4 = t;
  t = save_Binding_0_0(t);
  m_4 = t;
  t = save_CurrentTerm_0_0(t);
  n_4 = t;
  t = k_4;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm x_0 (ATerm t)
      {
        ATerm o_4 = NULL;
        o_4 = t;
        t = term_w_10;
        t = assert_1_0(b_1, t);
        t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)));
        t = (ATerm) ATmakeAppl(sym__2, term_m_10, m_4);
        t = table_putlist_0_0(t);
        t = o_4;
        t = u_86(t);
        return(t);
      }
      t = map_1_0(x_0, t);
      return(t);
    }
    ATerm w_0 (ATerm t)
    {
      ATerm p_4 = NULL;
      p_4 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)));
      t = (ATerm) ATmakeAppl(sym__2, term_q_10, n_4);
      t = table_putlist_0_0(t);
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)));
      t = (ATerm) ATmakeAppl(sym__2, term_m_10, m_4);
      t = table_putlist_0_0(t);
      t = p_4;
      t = u_86(t);
      return(t);
    }
    t = Let_2_0(v_0, w_0, t);
  }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
  b_5 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      r_4 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
      x_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_5);
  q_4 = t;
  t = r_4;
  t = s_78(t);
  y_4 = t;
  t = s_4;
  t = t_78(t);
  z_4 = t;
  t = x_4;
  t = u_78(t);
  a_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, y_4, z_4, a_5), q_4);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,f_7 = NULL;
      u_6 = t;
      if(match_cons(t, sym__2))
        {
          v_6 = ATgetArgument(t, 0);
          w_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_6;
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_6 = ATgetFirst((ATermList) t);
                {
                  ATerm j_11 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_11);
            t = x_6;
            {
              ATerm k_11 = t;
              int l_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm m_11 = ATgetArgument(t, 0);
                      f_7 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_11);
                  t = v_6;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm n_11 = t;
                      int o_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_6;
                          ;
                          LocalPopChoice(o_11);
                        }
                      else
                        {
                          t = n_11;
                          t = l_7(v_6, f_7, u_6, t);
                        }
                    }
                  else
                    {
                      t = l_7(v_6, f_7, u_6, t);
                    }
                }
              else
                {
                  t = k_11;
                  t = v_6;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = u_6;
                }
            }
          }
        else
          {
            t = h_11;
            t = v_6;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = u_6;
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
ATerm l_7 (ATerm c_6, ATerm f_6, ATerm i_6, ATerm t)
{
  t = i_6;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)), c_6);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_11 = ATgetFirst((ATermList) t);
            if(match_cons(s_11, sym_Defined_2))
              {
                ATerm v_11 = ATgetArgument(s_11, 0);
                if((f_6 != ATgetArgument(s_11, 1)))
                  {
                    _fail(ATgetArgument(s_11, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm t_11 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = i_6;
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = (ATerm) ATmakeAppl(sym__2, c_6, (ATerm) ATinsert(ATempty, term_p_10));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm s_5 = NULL;
  t = map_1_0(c_1, t);
  s_5 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_q_10, s_5);
  t = table_putlist_0_0(t);
  t = s_5;
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm w_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_9 = NULL,h_9 = NULL,j_9 = NULL,l_9 = NULL,p_9 = NULL;
      g_9 = t;
      if(match_cons(t, sym__2))
        {
          h_9 = ATgetArgument(t, 0);
          j_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_9;
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_9 = ATgetFirst((ATermList) t);
                {
                  ATerm c_12 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(a_12);
            t = l_9;
            {
              ATerm e_12 = t;
              int g_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm h_12 = ATgetArgument(t, 0);
                      p_9 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(g_12);
                  t = h_9;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm i_12 = t;
                      int j_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_9;
                          ;
                          LocalPopChoice(j_12);
                        }
                      else
                        {
                          t = i_12;
                          t = r_9(h_9, p_9, g_9, t);
                        }
                    }
                  else
                    {
                      t = r_9(h_9, p_9, g_9, t);
                    }
                }
              else
                {
                  t = e_12;
                  t = h_9;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = g_9;
                }
            }
          }
        else
          {
            t = z_11;
            t = h_9;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = g_9;
          }
      }
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = w_11;
    }
  return(t);
}
ATerm r_9 (ATerm l_8, ATerm n_8, ATerm w_8, ATerm t)
{
  t = w_8;
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)), l_8);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_12 = ATgetFirst((ATermList) t);
            if(match_cons(m_12, sym_Defined_2))
              {
                ATerm o_12 = ATgetArgument(m_12, 0);
                if((n_8 != ATgetArgument(m_12, 1)))
                  {
                    _fail(ATgetArgument(m_12, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm n_12 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = w_8;
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        t = (ATerm) ATmakeAppl(sym__2, l_8, (ATerm) ATinsert(ATempty, term_p_10));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm k_8 = NULL;
  t = map_1_0(d_1, t);
  k_8 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, k_8);
  t = table_putlist_0_0(t);
  t = k_8;
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm d_10 = NULL,g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      g_10 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm i_10 = NULL,j_10 = NULL;
      if(match_cons(t, sym__2))
        {
          i_10 = ATgetArgument(t, 0);
          j_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(g_10, i_10, j_10);
      t = (ATerm) ATmakeAppl(sym__3, g_10, i_10, j_10);
      return(t);
    }
    t = map_1_0(f_1, t);
  }
  return(t);
}
ATerm r_1 (ATerm t)
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
  t = map_1_0(r_1, t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm k_1 = NULL,s_1 = NULL;
  k_1 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)), k_1);
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_1, s_1);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = SSL_table_keys((ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)));
  t = map_1_0(t_1, t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,u_11 = NULL,d_12 = NULL,q_12 = NULL;
  d_11 = t;
  t = save_Binding_0_0(t);
  e_11 = t;
  t = save_CurrentTerm_0_0(t);
  f_11 = t;
  t = d_11;
  t = y_86(t);
  g_11 = t;
  t = save_Binding_0_0(t);
  u_11 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, e_11);
  t = table_putlist_0_0(t);
  t = e_11;
  t = save_CurrentTerm_0_0(t);
  d_12 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_q_10, f_11);
  t = table_putlist_0_0(t);
  t = g_11;
  t = z_86(t);
  q_12 = t;
  t = u_11;
  t = isect_Binding_0_0(t);
  t = d_12;
  t = isect_CurrentTerm_0_0(t);
  t = q_12;
  return(t);
}
ATerm LChoice_2_0 (ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,c_13 = NULL,j_13 = NULL,o_13 = NULL,t_13 = NULL,y_13 = NULL;
  y_13 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      c_13 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_13);
  t_12 = t;
  t = c_13;
  t = o_78(t);
  o_13 = t;
  t = j_13;
  t = p_78(t);
  t_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, o_13, t_13), t_12);
  return(t);
}
ATerm GChoice_2_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
  k_14 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      e_14 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_14);
  d_14 = t;
  t = e_14;
  t = q_77(t);
  i_14 = t;
  t = h_14;
  t = r_77(t);
  j_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, i_14, j_14), d_14);
  return(t);
}
ATerm Choice_2_0 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,y_14 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  e_15 = t;
  if(match_cons(t, sym_Choice_2))
    {
      v_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_15);
  u_14 = t;
  t = v_14;
  t = m_77(t);
  c_15 = t;
  t = y_14;
  t = n_77(t);
  d_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, c_15, d_15), u_14);
  return(t);
}
ATerm prop_choice_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm l_15 = NULL;
  l_15 = t;
  {
    ATerm p_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm s_12 = ATgetArgument(t, 0);
            ATerm u_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(r_12);
        t = l_15;
        {
          ATerm c_2 (ATerm t)
          {
            t = Choice_2_0(x_86, _id, t);
            return(t);
          }
          ATerm d_2 (ATerm t)
          {
            t = Choice_2_0(_id, x_86, t);
            return(t);
          }
          t = prop_abstract_choice_2_0(c_2, d_2, t);
        }
      }
    else
      {
        t = p_12;
        {
          ATerm v_12 = t;
          int w_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm x_12 = ATgetArgument(t, 0);
                  ATerm y_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(w_12);
              t = l_15;
              {
                ATerm e_2 (ATerm t)
                {
                  t = GChoice_2_0(x_86, _id, t);
                  return(t);
                }
                ATerm g_2 (ATerm t)
                {
                  t = GChoice_2_0(_id, x_86, t);
                  return(t);
                }
                t = prop_abstract_choice_2_0(e_2, g_2, t);
              }
            }
          else
            {
              t = v_12;
              {
                ATerm z_12 = t;
                int a_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm b_13 = ATgetArgument(t, 0);
                        ATerm d_13 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(a_13);
                    t = l_15;
                    {
                      ATerm l_2 (ATerm t)
                      {
                        t = LChoice_2_0(x_86, _id, t);
                        return(t);
                      }
                      ATerm n_2 (ATerm t)
                      {
                        t = LChoice_2_0(_id, x_86, t);
                        return(t);
                      }
                      t = prop_abstract_choice_2_0(l_2, n_2, t);
                    }
                  }
                else
                  {
                    t = z_12;
                    if(match_cons(t, sym_GuardedLChoice_3))
                      {
                        ATerm e_13 = ATgetArgument(t, 0);
                        ATerm f_13 = ATgetArgument(t, 1);
                        ATerm g_13 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = l_15;
                    {
                      ATerm o_2 (ATerm t)
                      {
                        t = GuardedLChoice_3_0(x_86, _id, _id, t);
                        t = GuardedLChoice_3_0(_id, x_86, _id, t);
                        return(t);
                      }
                      ATerm p_2 (ATerm t)
                      {
                        t = GuardedLChoice_3_0(_id, _id, x_86, t);
                        return(t);
                      }
                      t = prop_abstract_choice_2_0(o_2, p_2, t);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Seq_2_0 (ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,u_15 = NULL,v_15 = NULL,y_15 = NULL,a_16 = NULL,b_16 = NULL;
  b_16 = t;
  if(match_cons(t, sym_Seq_2))
    {
      u_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_16);
  r_15 = t;
  t = u_15;
  t = m_78(t);
  y_15 = t;
  t = v_15;
  t = n_78(t);
  a_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, y_15, a_16), r_15);
  return(t);
}
ATerm Cong_2_0 (ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL,l_16 = NULL,p_16 = NULL,y_16 = NULL;
  y_16 = t;
  if(match_cons(t, sym_Cong_2))
    {
      i_16 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_16);
  h_16 = t;
  t = i_16;
  t = m_73(t);
  l_16 = t;
  t = j_16;
  t = n_73(t);
  p_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, l_16, p_16), h_16);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_17 = NULL;
      n_17 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm k_13 = ATgetArgument(t, 0);
          ATerm l_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = term_w_10;
      t = assert_1_0(t_2, t);
      t = n_17;
      {
        ATerm y_2 (ATerm t)
        {
          ATerm z_2 (ATerm t)
          {
            t = exec_maybe_1_0(m_0, t);
            return(t);
          }
          t = map_1_0(z_2, t);
          return(t);
        }
        t = Cong_2_0(_id, y_2, t);
      }
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      {
        ATerm s_17 = NULL;
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm p_13 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            ;
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            {
              ATerm t_17 = NULL;
              t_17 = t;
              {
                ATerm q_13 = t;
                int r_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_One_1))
                      {
                        ATerm s_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(r_13);
                    t = t_17;
                  }
                else
                  {
                    t = q_13;
                    {
                      ATerm u_13 = t;
                      int v_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm w_13 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(v_13);
                          t = t_17;
                        }
                      else
                        {
                          t = u_13;
                          {
                            ATerm x_13 = t;
                            int z_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm a_14 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(z_13);
                                t = t_17;
                              }
                            else
                              {
                                t = x_13;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm b_14 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = t_17;
                              }
                          }
                        }
                    }
                  }
              }
            }
          }
        s_17 = t;
        t = term_w_10;
        t = assert_1_0(b_3, t);
        t = s_17;
        {
          ATerm c_3 (ATerm t)
          {
            t = exec_maybe_1_0(m_0, t);
            return(t);
          }
          t = SRTS_one(c_3, t);
        }
      }
    }
  return(t);
}
ATerm CallT_3_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,d_18 = NULL;
  d_18 = t;
  if(match_cons(t, sym_CallT_3))
    {
      w_17 = ATgetArgument(t, 0);
      x_17 = ATgetArgument(t, 1);
      y_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_18);
  v_17 = t;
  t = w_17;
  t = c_78(t);
  z_17 = t;
  t = x_17;
  t = d_78(t);
  a_18 = t;
  t = y_17;
  t = e_78(t);
  b_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, z_17, a_18, b_18), v_17);
  return(t);
}
ATerm PrimT_3_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  o_18 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      i_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
      k_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_18);
  h_18 = t;
  t = i_18;
  t = e_79(t);
  l_18 = t;
  t = j_18;
  t = f_79(t);
  m_18 = t;
  t = k_18;
  t = g_79(t);
  n_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, l_18, m_18, n_18), h_18);
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = alltd_1_0(Binding_0_0, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = alltd_1_0(Binding_0_0, t);
  return(t);
}
ATerm prop_call_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm s_18 = NULL;
  s_18 = t;
  {
    ATerm c_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm g_14 = ATgetArgument(t, 0);
            ATerm l_14 = ATgetArgument(t, 1);
            ATerm m_14 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(f_14);
        t = term_w_10;
        t = assert_1_0(e_3, t);
        t = s_18;
        {
          ATerm h_3 (ATerm t)
          {
            ATerm j_3 (ATerm t)
            {
              t = exec_maybe_1_0(l_0, t);
              return(t);
            }
            t = map_1_0(j_3, t);
            return(t);
          }
          t = PrimT_3_0(_id, h_3, i_3, t);
        }
      }
    else
      {
        t = c_14;
        if(match_cons(t, sym_CallT_3))
          {
            ATerm n_14 = ATgetArgument(t, 0);
            ATerm o_14 = ATgetArgument(t, 1);
            ATerm p_14 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = term_w_10;
        t = assert_1_0(l_3, t);
        t = s_18;
        {
          ATerm o_3 (ATerm t)
          {
            ATerm q_3 (ATerm t)
            {
              t = exec_maybe_1_0(l_0, t);
              return(t);
            }
            t = map_1_0(q_3, t);
            return(t);
          }
          t = CallT_3_0(_id, o_3, p_3, t);
        }
      }
  }
  return(t);
}
ATerm Scope_2_0 (ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
  d_19 = t;
  if(match_cons(t, sym_Scope_2))
    {
      z_18 = ATgetArgument(t, 0);
      a_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_19);
  y_18 = t;
  t = z_18;
  t = i_78(t);
  b_19 = t;
  t = a_19;
  t = j_78(t);
  c_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, b_19, c_19), y_18);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_m_10;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm m_19 = NULL;
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, m_19), term_p_10);
  t = assert_1_0(u_3, t);
  t = m_19;
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_m_10;
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm prop_scope_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm g_19 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      g_19 = ATgetArgument(t, 0);
      {
        ATerm q_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm s_3 (ATerm t)
    {
      ATerm h_19 = NULL,i_19 = NULL;
      h_19 = t;
      t = g_19;
      t = map_1_0(t_3, t);
      t = h_19;
      t = Scope_2_0(_id, s_86, t);
      i_19 = t;
      {
        ATerm r_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_19 = NULL;
            t = CurrentTerm_0_0(t);
            {
              ATerm v_3 (ATerm t)
              {
                ATerm o_19 = NULL;
                ATerm w_3 (ATerm t)
                {
                  if(((o_19 != NULL) && (o_19 != t)))
                    _fail(t);
                  else
                    o_19 = t;
                  return(t);
                }
                if(match_cons(t, sym_Var_1))
                  {
                    if(((o_19 != NULL) && (o_19 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      o_19 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = g_19;
                t = fetch_1_0(w_3, t);
                return(t);
              }
              t = oncetd_1_0(v_3, t);
              n_19 = t;
              t = term_w_10;
              t = assert_1_0(x_3, t);
              t = n_19;
            }
            ;
            LocalPopChoice(s_14);
          }
        else
          {
            t = r_14;
          }
        t = i_19;
      }
      return(t);
    }
    t = scope_2_0(r_3, s_3, t);
  }
  return(t);
}
ATerm Build_1_0 (ATerm g_78 (ATerm), ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL;
  s_19 = t;
  if(match_cons(t, sym_Build_1))
    {
      q_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_19);
  p_19 = t;
  t = q_19;
  t = g_78(t);
  r_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, r_19), p_19);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = alltd_1_0(Binding_0_0, t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm y_19 = NULL;
  t = Build_1_0(y_3, t);
  if(match_cons(t, sym_Build_1))
    {
      y_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_14, y_19));
  t = assert_1_0(b_4, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, y_19);
  return(t);
}
ATerm oncetd_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm z_19 (ATerm t)
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_89(t);
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = SRTS_one(z_19, t);
      }
    return(t);
  }
  t = z_19(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm d_20 = NULL;
  d_20 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = d_20;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm z_14 = ATgetArgument(t, 0);
          ATerm a_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_20;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_m_10;
  return(t);
}
ATerm introduce_binding_0_0 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_15 = ATgetArgument(t, 0);
      if(match_cons(b_15, sym_Var_1))
        {
          b_20 = ATgetArgument(b_15, 0);
        }
      else
        _fail(t);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_20;
  {
    ATerm f_15 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(f_4, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_15;
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, b_20), (ATerm) ATmakeAppl(sym_Defined_2, term_g_15, c_20));
    t = assert_1_0(h_4, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, b_20), c_20);
  }
  return(t);
}
ATerm Var_1_0 (ATerm o_74 (ATerm), ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  k_20 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_20);
  h_20 = t;
  t = i_20;
  t = o_74(t);
  j_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, j_20), h_20);
  return(t);
}
ATerm i_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_15 = ATgetArgument(t, 0);
      if(((ATgetType(h_15) != AT_LIST) || !(ATisEmpty(h_15))))
        _fail(t);
      {
        ATerm i_15 = ATgetArgument(t, 1);
        if(((ATgetType(i_15) != AT_LIST) || !(ATisEmpty(i_15))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,e_21 = NULL,f_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_15 = ATgetArgument(t, 0);
      if(((ATgetType(j_15) == AT_LIST) && !(ATisEmpty(j_15))))
        {
          z_20 = ATgetFirst((ATermList) j_15);
          e_21 = (ATerm) ATgetNext((ATermList) j_15);
        }
      else
        _fail(t);
      {
        ATerm k_15 = ATgetArgument(t, 1);
        if(((ATgetType(k_15) == AT_LIST) && !(ATisEmpty(k_15))))
          {
            a_21 = ATgetFirst((ATermList) k_15);
            f_21 = (ATerm) ATgetNext((ATermList) k_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_20, a_21), (ATerm) ATmakeAppl(sym__2, e_21, f_21));
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL;
  if(match_cons(t, sym__2))
    {
      h_21 = ATgetArgument(t, 0);
      i_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_21), h_21);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,u_20 = NULL,v_20 = NULL,x_20 = NULL,y_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_15 = ATgetFirst((ATermList) t);
      if(match_cons(m_15, sym__2))
        {
          o_20 = ATgetArgument(m_15, 0);
          p_20 = ATgetArgument(m_15, 1);
        }
      else
        _fail(t);
      q_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_20);
  if(match_cons(t, sym__2))
    {
      u_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_20);
  if(match_cons(t, sym__2))
    {
      if((u_20 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      x_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_20, v_20);
  t = genzip_4_0(i_4, j_4, l_4, _id, t);
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_20, q_20);
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_15 = ATgetArgument(t, 0);
            ATerm q_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_20;
        {
          ATerm t_4 (ATerm t)
          {
            t = q_20;
            return(t);
          }
          t = at_end_1_0(t_4, t);
        }
        ;
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        {
          ATerm f_2 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, y_20, q_20));
          if(match_cons(t, sym__2))
            {
              ATerm s_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_15) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              f_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_2;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL;
  if(match_cons(t, sym__2))
    {
      s_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_21;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_21 = ATgetFirst((ATermList) t);
      v_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_21;
  if(match_cons(t, sym__2))
    {
      p_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
      {
        ATerm t_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_21;
            if((s_21 != t))
              {
                _fail(t);
              }
            t = q_21;
            ;
            LocalPopChoice(w_15);
          }
        else
          {
            t = t_15;
            t = (ATerm) ATmakeAppl(sym__2, s_21, v_21);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, s_21, v_21);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t)
{
  ATerm g_22 (ATerm t)
  {
    ATerm x_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_96(t);
        ;
        LocalPopChoice(z_15);
      }
    else
      {
        t = x_15;
        t = q_96(t);
        t = _2_0(s_96, g_22, t);
        t = r_96(t);
      }
    return(t);
  }
  t = g_22(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if(((ATgetType(c_16) != AT_LIST) || !(ATisEmpty(c_16))))
        _fail(t);
      {
        ATerm d_16 = ATgetArgument(t, 1);
        if(((ATgetType(d_16) != AT_LIST) || !(ATisEmpty(d_16))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_16 = ATgetArgument(t, 0);
      if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
        {
          q_22 = ATgetFirst((ATermList) e_16);
          s_22 = (ATerm) ATgetNext((ATermList) e_16);
        }
      else
        _fail(t);
      {
        ATerm f_16 = ATgetArgument(t, 1);
        if(((ATgetType(f_16) == AT_LIST) && !(ATisEmpty(f_16))))
          {
            r_22 = ATgetFirst((ATermList) f_16);
            t_22 = (ATerm) ATgetNext((ATermList) f_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_22, r_22), (ATerm) ATmakeAppl(sym__2, s_22, t_22));
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL;
  if(match_cons(t, sym__2))
    {
      u_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_22), u_22);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL;
  i_22 = t;
  {
    ATerm g_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_16 = ATgetArgument(t, 0);
            ATerm n_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(k_16);
        t = i_22;
      }
    else
      {
        t = g_16;
        {
          ATerm p_22 = NULL;
          if(match_cons(t, sym__3))
            {
              j_22 = ATgetArgument(t, 0);
              k_22 = ATgetArgument(t, 1);
              l_22 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, j_22, k_22);
          t = genzip_4_0(v_4, w_4, c_5, _id, t);
          p_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_22, l_22);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      x_22 = ATgetArgument(t, 0);
      w_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_22;
  {
    ATerm d_5 (ATerm t)
    {
      ATerm j_2 = NULL;
      t = i_113(t);
      j_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_2, x_22);
      t = lookup_0_0(t);
      t = j_113(t);
      return(t);
    }
    t = alltd_1_0(d_5, t);
  }
  return(t);
}
ATerm UfVar_1_0 (ATerm u_116 (ATerm), ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_16 = ATgetArgument(t, 0);
      if(((ATgetType(o_16) == AT_LIST) && !(ATisEmpty(o_16))))
        {
          ATerm q_16 = ATgetFirst((ATermList) o_16);
          if(match_cons(q_16, sym__2))
            {
              y_22 = ATgetArgument(q_16, 0);
              z_22 = ATgetArgument(q_16, 1);
            }
          else
            _fail(t);
          a_23 = (ATerm) ATgetNext((ATermList) o_16);
        }
      else
        _fail(t);
      b_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_22;
  t = u_116(t);
  t = (ATerm) ATmakeAppl(sym__2, y_22, z_22);
  {
    ATerm r_16 = t;
    if((PushChoice() == 0))
      {
        ATerm e_23 = NULL,f_23 = NULL;
        if(match_cons(t, sym__2))
          {
            e_23 = ATgetArgument(t, 0);
            f_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_23;
        {
          ATerm e_5 (ATerm t)
          {
            if((e_23 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(e_5, t);
          t = (ATerm) ATmakeAppl(sym__2, e_23, f_23);
        }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_16;
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_22, z_22)), (ATerm) ATmakeAppl(sym__2, b_23, a_23));
    t = substitute_2_0(u_116, _id, t);
    if(match_cons(t, sym__2))
      {
        c_23 = ATgetArgument(t, 0);
        d_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, d_23, (ATerm) ATinsert(CheckATermList(c_23), (ATerm) ATmakeAppl(sym__2, y_22, z_22)));
  }
  return(t);
}
ATerm while_not_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t)
{
  ATerm g_23 (ATerm t)
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_88(t);
        ;
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = m_88(t);
        t = g_23(t);
      }
    return(t);
  }
  t = g_23(t);
  return(t);
}
ATerm for_3_0 (ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm t)
{
  t = o_88(t);
  t = while_not_2_0(p_88, q_88, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm h_23 = NULL;
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_23, (ATerm) ATempty);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm i_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      if(((ATgetType(u_16) != AT_LIST) || !(ATisEmpty(u_16))))
        _fail(t);
      i_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_23;
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(j_5, _id, t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      {
        ATerm x_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UfVar_1_0(k_5, t);
            ;
            LocalPopChoice(z_16);
          }
        else
          {
            t = x_16;
            {
              ATerm a_17 = t;
              int b_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = _2_0(UfDecompose_0_0, _id, t);
                  ;
                  LocalPopChoice(b_17);
                }
              else
                {
                  t = a_17;
                  {
                    ATerm c_17 = t;
                    int d_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = _2_0(l_5, _id, t);
                        ;
                        LocalPopChoice(d_17);
                      }
                    else
                      {
                        t = c_17;
                        {
                          ATerm e_17 = t;
                          int f_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = _2_0(n_5, _id, t);
                              ;
                              LocalPopChoice(f_17);
                            }
                          else
                            {
                              t = e_17;
                              t = _2_0(o_5, _id, t);
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
ATerm j_5 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_17 = ATgetFirst((ATermList) t);
      if(match_cons(g_17, sym__2))
        {
          j_23 = ATgetArgument(g_17, 0);
          if((j_23 != ATgetArgument(g_17, 1)))
            {
              _fail(ATgetArgument(g_17, 1));
            }
        }
      else
        _fail(t);
      k_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_23;
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_17 = ATgetFirst((ATermList) t);
      if(match_cons(h_17, sym__2))
        {
          ATerm i_17 = ATgetArgument(h_17, 0);
          if(match_cons(i_17, sym_As_2))
            {
              l_23 = ATgetArgument(i_17, 0);
              m_23 = ATgetArgument(i_17, 1);
            }
          else
            _fail(t);
          n_23 = ATgetArgument(h_17, 1);
        }
      else
        _fail(t);
      o_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(o_23), (ATerm) ATmakeAppl(sym__2, m_23, n_23)), (ATerm) ATmakeAppl(sym__2, l_23, n_23));
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm p_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_17 = ATgetFirst((ATermList) t);
      if(match_cons(j_17, sym__2))
        {
          ATerm k_17 = ATgetArgument(j_17, 0);
          if(!(match_cons(k_17, sym_Wld_0)))
            _fail(t);
          {
            ATerm l_17 = ATgetArgument(j_17, 1);
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
ATerm o_5 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_17 = ATgetFirst((ATermList) t);
      if(match_cons(m_17, sym__2))
        {
          q_23 = ATgetArgument(m_17, 0);
          r_23 = ATgetArgument(m_17, 1);
        }
      else
        _fail(t);
      s_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_23;
  {
    ATerm o_17 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_17;
      }
    t = r_23;
    t = Var_1_0(_id, t);
    t = s_23;
  }
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(g_5, h_5, i_5, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_23 = NULL,a_3 = NULL;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)), (ATerm) ATempty);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_3 = ATgetFirst((ATermList) t);
          {
            ATerm r_17 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = a_3;
      if(match_cons(t, sym_Defined_2))
        {
          ATerm u_17 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) u_17) != ATmakeSymbol("i_0", 0, ATtrue)))
            _fail(t);
          t_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_23;
      ;
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      {
        ATerm c_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_23 = NULL,f_3 = NULL;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)), (ATerm) ATempty);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_3 = ATgetFirst((ATermList) t);
                {
                  ATerm f_18 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = f_3;
            if(match_cons(t, sym_Defined_2))
              {
                ATerm g_18 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) g_18) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                u_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_23;
            ;
            LocalPopChoice(e_18);
          }
        else
          {
            t = c_18;
            {
              ATerm k_3 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)), (ATerm) ATempty);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_3 = ATgetFirst((ATermList) t);
                  {
                    ATerm p_18 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = k_3;
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
  ATerm k_24 = NULL;
  k_24 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm q_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 = NULL,f_5 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)), k_24);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_5 = ATgetFirst((ATermList) t);
            {
              ATerm u_18 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = f_5;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm v_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_18) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
            u_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_4;
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = r_18;
        {
          ATerm w_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_5 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)), k_24);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_5 = ATgetFirst((ATermList) t);
                  {
                    ATerm e_19 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = m_5;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(x_18);
            }
          else
            {
              t = w_18;
              {
                ATerm u_5 = NULL;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)), k_24);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_5 = ATgetFirst((ATermList) t);
                    {
                      ATerm f_19 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = u_5;
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
ATerm alltd_1_0 (ATerm m_90 (ATerm), ATerm t)
{
  ATerm p_24 (ATerm t)
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_90(t);
        ;
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        t = SRTS_all(p_24, t);
      }
    return(t);
  }
  t = p_24(t);
  return(t);
}
ATerm Match_1_0 (ATerm f_78 (ATerm), ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
  t_24 = t;
  if(match_cons(t, sym_Match_1))
    {
      r_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_24);
  q_24 = t;
  t = r_24;
  t = f_78(t);
  s_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, s_24), q_24);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = alltd_1_0(Binding_0_0, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm l_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = introduce_binding_0_0(t);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = l_19;
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = z_24;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm u_19 = ATgetArgument(t, 0);
          ATerm v_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_24;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  t = Match_1_0(p_5, t);
  if(match_cons(t, sym_Match_1))
    {
      x_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        y_24 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, x_24);
        {
          ATerm a_20 = t;
          int e_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_24, y_24));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(q_5, t);
              t = (ATerm) ATmakeAppl(sym_Match_1, x_24);
              ;
              LocalPopChoice(e_20);
            }
          else
            {
              t = a_20;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue)), (ATerm)ATmakeAppl(sym_Match_1, x_24), (ATerm)ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue)), y_24)), (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue))));
              t = term_f_20;
            }
        }
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        {
          ATerm g_20 = t;
          int l_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_24;
              {
                ATerm m_20 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(r_5, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_20;
                  }
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_20, x_24));
                t = assert_1_0(t_5, t);
                t = (ATerm) ATmakeAppl(sym_Match_1, x_24);
              }
              ;
              LocalPopChoice(l_20);
            }
          else
            {
              t = g_20;
            }
        }
      }
  }
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = exec_maybe_1_0(cp_0_0, t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = exec_maybe_1_0(cp_0_0, t);
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm t_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0_0(t);
            ;
            LocalPopChoice(w_20);
          }
        else
          {
            t = t_20;
            {
              ATerm b_21 = t;
              int c_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = prop_scope_1_0(cp_0_0, t);
                  ;
                  LocalPopChoice(c_21);
                }
              else
                {
                  t = b_21;
                  {
                    ATerm d_21 = t;
                    int g_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        ;
                        LocalPopChoice(g_21);
                      }
                    else
                      {
                        t = d_21;
                        {
                          ATerm j_21 = t;
                          int k_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
                              ;
                              LocalPopChoice(k_21);
                            }
                          else
                            {
                              t = j_21;
                              {
                                ATerm l_21 = t;
                                int m_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Seq_2_0(cp_0_0, cp_0_0, t);
                                    ;
                                    LocalPopChoice(m_21);
                                  }
                                else
                                  {
                                    t = l_21;
                                    {
                                      ATerm n_21 = t;
                                      int o_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1_0(cp_0_0, t);
                                          ;
                                          LocalPopChoice(o_21);
                                        }
                                      else
                                        {
                                          t = n_21;
                                          {
                                            ATerm r_21 = t;
                                            int w_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = prop_let_1_0(cp_0_0, t);
                                                ;
                                                LocalPopChoice(w_21);
                                              }
                                            else
                                              {
                                                t = r_21;
                                                {
                                                  ATerm x_21 = t;
                                                  int y_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_25 = NULL;
                                                      e_25 = t;
                                                      {
                                                        ATerm z_21 = t;
                                                        int a_22 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm b_22 = ATgetArgument(t, 0);
                                                                ATerm c_22 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(a_22);
                                                            t = e_25;
                                                            t = Rec_2_0(_id, v_5, t);
                                                          }
                                                        else
                                                          {
                                                            t = z_21;
                                                            if(match_cons(t, sym_Not_1))
                                                              {
                                                                ATerm d_22 = ATgetArgument(t, 0);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = term_w_10;
                                                            t = assert_1_0(w_5, t);
                                                            t = e_25;
                                                            t = Not_1_0(x_5, t);
                                                          }
                                                      }
                                                      ;
                                                      LocalPopChoice(y_21);
                                                    }
                                                  else
                                                    {
                                                      t = x_21;
                                                      {
                                                        ATerm e_22 = t;
                                                        int f_22 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = prop_sdef_1_0(cp_0_0, t);
                                                            ;
                                                            LocalPopChoice(f_22);
                                                          }
                                                        else
                                                          {
                                                            t = e_22;
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
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
  if(match_cons(t, sym__2))
    {
      j_25 = ATgetArgument(t, 0);
      k_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_25, k_25);
  {
    ATerm h_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_22 = ATgetArgument(t, 0);
            ATerm o_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_25, k_25);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_23 = ATgetFirst((ATermList) t);
            b_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_6;
        ;
        LocalPopChoice(m_22);
      }
    else
      {
        t = h_22;
        t = (ATerm) ATempty;
      }
    l_25 = t;
    t = SSL_table_put(j_25, k_25, l_25);
    t = (ATerm) ATmakeAppl(sym__2, j_25, k_25);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm f_105 (ATerm), ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,v_25 = NULL,x_25 = NULL;
  r_25 = t;
  t = f_105(t);
  s_25 = t;
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(s_25, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_25 = ATgetFirst((ATermList) t);
        v_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(s_25, (ATerm)ATmakeAppl(sym_Scopes_0), v_25);
    t = x_25;
    {
      ATerm y_5 (ATerm t)
      {
        ATerm y_25 = NULL;
        y_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_25, y_25);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(y_5, t);
      t = r_25;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_87(t);
      t = q_87(t);
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      t = q_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_105 (ATerm), ATerm t)
{
  ATerm d_26 = NULL,f_26 = NULL,h_26 = NULL;
  d_26 = t;
  t = e_105(t);
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_26, term_a_24);
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_24 = ATgetArgument(t, 0);
            ATerm e_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(f_26, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        t = (ATerm) ATempty;
      }
    h_26 = t;
    t = SSL_table_put(f_26, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(h_26), (ATerm) ATempty));
    t = d_26;
  }
  return(t);
}
ATerm scope_2_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm t)
{
  t = begin_scope_1_0(g_105, t);
  {
    ATerm z_5 (ATerm t)
    {
      t = end_scope_1_0(g_105, t);
      return(t);
    }
    t = restore_always_2_0(h_105, z_5, t);
  }
  return(t);
}
ATerm map_1_0 (ATerm l_94 (ATerm), ATerm t)
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
        t = Cons_2_0(l_94, m_26, t);
      }
    return(t);
  }
  t = m_26(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm q_73 (ATerm), ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
  q_26 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      o_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_26);
  n_26 = t;
  t = o_26;
  t = q_73(t);
  p_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, p_26), n_26);
  return(t);
}
ATerm Cons_2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  y_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_26 = ATgetFirst((ATermList) t);
      v_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_26);
  t_26 = t;
  t = u_26;
  t = k_73(t);
  w_26 = t;
  t = v_26;
  t = l_73(t);
  x_26 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(x_26), w_26), t_26);
  return(t);
}
ATerm Signature_1_0 (ATerm r_73 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
  e_27 = t;
  if(match_cons(t, sym_Signature_1))
    {
      c_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_27);
  b_27 = t;
  t = c_27;
  t = r_73(t);
  d_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, d_27), b_27);
  return(t);
}
ATerm Specification_1_0 (ATerm v_73 (ATerm), ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL;
  k_27 = t;
  if(match_cons(t, sym_Specification_1))
    {
      i_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_27);
  h_27 = t;
  t = i_27;
  t = v_73(t);
  j_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, j_27), h_27);
  return(t);
}
ATerm _2_0 (ATerm v_68 (ATerm), ATerm w_68 (ATerm), ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  s_27 = t;
  if(match_cons(t, sym__2))
    {
      o_27 = ATgetArgument(t, 0);
      p_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_27);
  n_27 = t;
  t = o_27;
  t = v_68(t);
  q_27 = t;
  t = p_27;
  t = w_68(t);
  r_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, q_27, r_27), n_27);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
  if(match_cons(t, sym__2))
    {
      v_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_27, term_h_24);
  t = open_stream_0_0(t);
  x_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_27, w_27);
  t = b_107(t);
  t = fclose_0_0(t);
  t = w_27;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = fetch_1_0(k_6, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = WriteToFile_1_0(l_6, t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_24 = ATgetArgument(t, 0);
      if(match_cons(i_24, sym_Stream_1))
        {
          a_28 = ATgetArgument(i_24, 0);
        }
      else
        _fail(t);
      b_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(a_28, b_28);
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_28);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = WriteToFile_1_0(n_6, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_24 = ATgetArgument(t, 0);
      if(match_cons(j_24, sym_Stream_1))
        {
          d_28 = ATgetArgument(j_24, 0);
        }
      else
        _fail(t);
      e_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(d_28, e_28);
  f_28 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), f_28);
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_28);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL;
  y_27 = t;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm l_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_6 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((z_27 != NULL) && (z_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_6, t);
          ;
          LocalPopChoice(m_24);
        }
      else
        {
          t = l_24;
          t = term_n_24;
          if(((z_27 != NULL) && (z_27 != t)))
            _fail(t);
          else
            z_27 = t;
        }
      return(t);
    }
    t = _2_0(a_6, _id, t);
    t = y_27;
    {
      ATerm g_6 (ATerm t)
      {
        ATerm d_6 = NULL;
        d_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_27), d_6);
        return(t);
      }
      t = _2_0(_id, g_6, t);
      {
        ATerm o_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(h_6, j_6, t);
            ;
            LocalPopChoice(u_24);
          }
        else
          {
            t = o_24;
            t = _2_0(_id, m_6, t);
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
ATerm apply_strategy_1_0 (ATerm d_110 (ATerm), ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL;
  h_28 = t;
  t = dtime_0_0(t);
  t = h_28;
  t = d_110(t);
  i_28 = t;
  t = dtime_0_0(t);
  j_28 = t;
  t = i_28;
  if(match_cons(t, sym__2))
    {
      k_28 = ATgetArgument(t, 0);
      l_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_28), (ATerm) ATmakeAppl(sym_Runtime_1, j_28)), l_28);
  return(t);
}
ATerm z_28 (ATerm t_28, ATerm t)
{
  t = SSL_fclose(t_28);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL;
  x_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_28 = ATgetArgument(t, 0);
      {
        ATerm v_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_28);
            ;
            LocalPopChoice(w_24);
          }
        else
          {
            t = v_24;
            t = z_28(x_28, t);
          }
      }
    }
  else
    {
      t = z_28(x_28, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_29 = NULL;
  t = SSL_stdin_stream();
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_29);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_29 = NULL;
  t = SSL_stdout_stream();
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_29);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_29 = NULL;
  t = SSL_stderr_stream();
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_29);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm k_29 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      k_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_29;
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm p_29 = NULL;
  p_29 = t;
  t = SSL_is_string(p_29);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_25 = ATgetArgument(t, 0);
      ATerm b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_7 = NULL,c_7 = NULL;
        b_7 = t;
        t = SSL_explode_term(b_7);
        if(match_cons(t, sym__2))
          {
            ATerm f_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_25 = ATgetArgument(t, 1);
              if(((ATgetType(g_25) == AT_LIST) && !(ATisEmpty(g_25))))
                {
                  c_7 = ATgetFirst((ATermList) g_25);
                  {
                    ATerm h_25 = (ATerm) ATgetNext((ATermList) g_25);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_7;
        if(match_cons(t, sym_stderr_0))
          {
            t = c_7;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = c_7;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = c_7;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        {
          ATerm i_25 = t;
          int m_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
              t = _2_0(o_6, _id, t);
              if(match_cons(t, sym__2))
                {
                  h_29 = ATgetArgument(t, 0);
                  i_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(h_29, i_29);
              j_29 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, j_29);
              ;
              LocalPopChoice(m_25);
            }
          else
            {
              t = i_25;
              {
                ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
                t = _2_0(p_6, _id, t);
                if(match_cons(t, sym__2))
                  {
                    l_29 = ATgetArgument(t, 0);
                    m_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(l_29, m_29);
                n_29 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, n_29);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_29 = NULL;
      t_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_29, term_p_25);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm d_7 = NULL;
        d_7 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_7), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = d_7;
        _fail(t);
      }
    }
  q_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(s_29);
  r_29 = t;
  t = q_29;
  t = fclose_0_0(t);
  t = r_29;
  return(t);
}
ATerm fetch_1_0 (ATerm w_94 (ATerm), ATerm t)
{
  ATerm y_29 (ATerm t)
  {
    ATerm q_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(w_94, _id, t);
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = q_25;
        t = Cons_2_0(_id, y_29, t);
      }
    return(t);
  }
  t = y_29(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(w_25);
    }
  else
    {
      t = u_25;
      {
        ATerm b_30 = NULL,c_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_30 = ATgetFirst((ATermList) t);
            c_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_30;
        {
          ATerm q_6 (ATerm t)
          {
            t = c_30;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(q_6, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm c_95 (ATerm), ATerm t)
{
  ATerm i_30 (ATerm t)
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, i_30, t);
        ;
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_95(t);
      }
    return(t);
  }
  t = i_30(t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm l_30 = NULL;
  l_30 = t;
  t = SSL_explode_string(l_30);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  t = SSL_explode_string(m_30);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm k_30 = NULL;
  t = _2_0(r_6, s_6, t);
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_30 = NULL,p_30 = NULL;
        if(match_cons(t, sym__2))
          {
            o_30 = ATgetArgument(t, 0);
            p_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_30;
        {
          ATerm t_6 (ATerm t)
          {
            t = p_30;
            return(t);
          }
          t = at_end_1_0(t_6, t);
        }
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        {
          ATerm m_7 = NULL,n_7 = NULL;
          m_7 = t;
          t = SSL_explode_term(m_7);
          if(match_cons(t, sym__2))
            {
              ATerm e_26 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_26) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              n_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_7;
          t = concat_0_0(t);
        }
      }
    k_30 = t;
    t = SSL_implode_string(k_30);
  }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm g_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = g_26;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_30 = NULL;
      z_30 = t;
      t = SSL_is_string(z_30);
      ;
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      {
        ATerm l_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_6, t);
            ;
            LocalPopChoice(r_26);
          }
        else
          {
            t = l_26;
            {
              ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
              d_31 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_31 = ATgetArgument(t, 0);
                  t = e_31;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_31 = ATgetArgument(t, 0);
                      t = e_31;
                      {
                        ATerm s_26 = t;
                        int z_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_31);
                            {
                              ATerm a_27 = t;
                              int f_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_8 = NULL;
                                  t = eval_config_0_0(t);
                                  h_8 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), e_31, h_8);
                                  t = h_8;
                                  ;
                                  LocalPopChoice(f_27);
                                }
                              else
                                {
                                  t = a_27;
                                }
                            }
                            ;
                            LocalPopChoice(z_26);
                          }
                        else
                          {
                            t = s_26;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_31), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = e_31;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_31 = NULL,u_31 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_31 = ATgetArgument(t, 0);
                          f_31 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_31;
                      t = eval_config_0_0(t);
                      p_31 = t;
                      t = f_31;
                      t = eval_config_0_0(t);
                      u_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_31, u_31);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm g_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_32 = NULL,n_32 = NULL;
      l_32 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm m_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_8 = NULL;
            t = eval_config_0_0(t);
            r_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_8);
            t = r_8;
            ;
            LocalPopChoice(t_27);
          }
        else
          {
            t = m_27;
          }
        n_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_32, term_u_27);
        t = geq_0_0(t);
        t = l_32;
        t = m_108(t);
      }
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = g_27;
    }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  if(match_string(t, "-k"))
    {
      t = p_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_32;
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL;
  q_32 = t;
  t = SSL_string_to_int(q_32);
  r_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), r_32);
  t = q_32;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_m_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_6, a_7, e_7, t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm x_32 = NULL;
  x_32 = t;
  if(match_string(t, "-S"))
    {
      t = x_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_32;
    }
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_o_28;
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL;
  y_32 = t;
  t = SSL_string_to_int(y_32);
  z_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_32);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_32);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_q_28;
  return(t);
}
ATerm p_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_r_28;
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_s_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_7, h_7, i_7, t);
      ;
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      {
        ATerm y_28 = t;
        int d_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_7, k_7, o_7, t);
            ;
            LocalPopChoice(d_29);
          }
        else
          {
            t = y_28;
            t = Option_3_0(p_7, q_7, r_7, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_33 = NULL;
      t = term_l_10;
      t = c_0(t);
      e_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_29, term_f_29, e_33);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm h_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_33 = ATgetFirst((ATermList) t);
          d_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_33;
      t = a_0(t);
      t = term_l_10;
      t = b_0(t);
      h_33 = t;
      t = (ATerm) ATinsert(CheckATermList(d_33), h_33);
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm j_33 = NULL;
  j_33 = t;
  if(match_string(t, "-o"))
    {
      t = j_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_33;
    }
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), k_33);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_33);
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_g_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_7, t_7, u_7, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL;
  if(match_cons(t, sym__3))
    {
      n_33 = ATgetArgument(t, 0);
      o_33 = ATgetArgument(t, 1);
      p_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_33, o_33);
  {
    ATerm o_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_29 = ATgetArgument(t, 0);
            ATerm w_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_33, o_33);
        ;
        LocalPopChoice(u_29);
      }
    else
      {
        t = o_29;
        t = (ATerm) ATempty;
      }
    q_33 = t;
    t = SSL_table_put(n_33, o_33, (ATerm) ATinsert(CheckATermList(q_33), p_33));
    t = (ATerm) ATmakeAppl(sym__3, n_33, o_33, p_33);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_34 = NULL;
      t = term_l_10;
      t = j_0(t);
      e_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_29, term_f_29, e_34);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm i_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_34 = ATgetFirst((ATermList) t);
          b_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_34 = ATgetFirst((ATermList) t);
          d_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_34;
      t = f_0(t);
      t = c_34;
      t = h_0(t);
      i_34 = t;
      t = (ATerm) ATinsert(CheckATermList(d_34), i_34);
    }
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm n_34 = NULL;
  n_34 = t;
  if(match_string(t, "-i"))
    {
      t = n_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_34;
    }
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm o_34 = NULL;
  o_34 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), o_34);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_34);
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_7, w_7, x_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_10;
  t = whoami_0_0(t);
  p_34 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), p_34));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_8 = NULL;
        t = eval_config_0_0(t);
        v_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_8);
        t = v_8;
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t)
{
  ATerm d_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_100(t);
      ;
      LocalPopChoice(e_30);
    }
  else
    {
      t = d_30;
      {
        ATerm t_34 = NULL,u_34 = NULL,x_34 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_34 = ATgetFirst((ATermList) t);
            u_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_34;
        t = foldr_2_0(n_100, o_100, t);
        x_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_34, x_34);
        t = o_100(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm i_9 = NULL,k_9 = NULL;
  if(match_cons(t, sym__2))
    {
      i_9 = ATgetArgument(t, 0);
      k_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(i_9, k_9);
        ;
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        t = SSL_addr(i_9, k_9);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_35 = NULL,b_9 = NULL,c_9 = NULL;
  t = times_0_0(t);
  b_9 = t;
  t = SSL_explode_term(b_9);
  if(match_cons(t, sym__2))
    {
      ATerm h_30 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9;
  t = foldr_2_0(y_7, z_7, t);
  a_35 = t;
  t = SSL_TicksToSeconds(a_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
  n_35 = t;
  if(match_cons(t, sym__2))
    {
      o_35 = ATgetArgument(t, 0);
      p_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_35;
        if((o_35 != t))
          {
            _fail(t);
          }
        t = n_35;
        ;
        LocalPopChoice(n_30);
      }
    else
      {
        t = j_30;
        t = n_35;
        {
          ATerm q_30 = t;
          int r_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_35, p_35);
              ;
              LocalPopChoice(r_30);
            }
          else
            {
              t = q_30;
              t = SSL_gtr(o_35, p_35);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_35, p_35);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_108 (ATerm), ATerm t)
{
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_35 = NULL,u_35 = NULL;
      s_35 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_10 = NULL;
            t = eval_config_0_0(t);
            e_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_10);
            t = e_10;
            ;
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
          }
        u_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_35, term_w_30);
        t = geq_0_0(t);
        t = s_35;
        t = l_108(t);
      }
      ;
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL;
  t = run_time_0_0(t);
  w_35 = t;
  t = term_l_10;
  t = whoami_0_0(t);
  x_35 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), w_35), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), x_35));
  t = (ATerm) ATmakeAppl(sym__2, term_x_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_31), w_35), term_y_30), x_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
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
ATerm need_help_1_0 (ATerm b_111 (ATerm), ATerm t)
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm k_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_10 = NULL;
            t = eval_config_0_0(t);
            n_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), n_10);
            t = n_10;
            ;
            LocalPopChoice(l_31);
          }
        else
          {
            t = k_31;
          }
      }
      ;
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      t = fetch_1_0(b_8, t);
    }
  t = b_111(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_35 = ATgetFirst((ATermList) t);
      a_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_36 = NULL,f_36 = NULL;
        t = a_36;
        t = e_0(t);
        e_36 = t;
        t = z_35;
        t = d_0(t);
        f_36 = t;
        t = a_36;
        {
          ATerm c_8 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(e_36), f_36);
            return(t);
          }
          t = reverse_acc_2_0(d_0, c_8, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_10;
      t = e_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm e_86 (ATerm), ATerm t)
{
  ATerm h_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL;
  l_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_36);
  h_36 = t;
  t = j_36;
  t = e_86(t);
  k_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, k_36), h_36);
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_36), term_m_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm q_31 = t;
        int r_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_10 = NULL;
            t = eval_config_0_0(t);
            r_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_10);
            t = r_10;
            ;
            LocalPopChoice(r_31);
          }
        else
          {
            t = q_31;
          }
      }
      ;
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      t = fetch_1_0(d_8, t);
    }
  t = term_s_31;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, e_8, t);
  t = map_1_0(f_8, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm f_86 (ATerm), ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
  s_36 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      q_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_36);
  p_36 = t;
  t = q_36;
  t = f_86(t);
  r_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, r_36), p_36);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  w_36 = t;
  {
    ATerm t_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_31 = ATgetFirst((ATermList) t);
                ATerm x_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_36;
          }
        ;
        LocalPopChoice(v_31);
      }
    else
      {
        t = t_31;
        t = (ATerm) ATinsert(ATempty, w_36);
      }
    x_36 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), x_36);
    t = w_36;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_10 = NULL;
        t = eval_config_0_0(t);
        v_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_10);
        t = v_10;
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm g_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_c_32;
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm m_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_e_32;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_f_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_32 = t;
  int h_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_8, i_8, j_8, t);
      ;
      LocalPopChoice(h_32);
    }
  else
    {
      t = g_32;
      t = Option_3_0(m_8, o_8, p_8, t);
    }
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm d_37 = NULL;
  d_37 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_37);
  t = (ATerm) ATmakeAppl(sym_Program_1, d_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_113 (ATerm), ATerm t)
{
  ATerm c_37 = NULL;
  c_37 = t;
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_32;
        t = e_113(t);
        ;
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
      }
    t = c_37;
    {
      ATerm s_8 (ATerm t)
      {
        ATerm m_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_32 = t;
            int t_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(t_32);
              }
            else
              {
                t = s_32;
                t = e_113(t);
                t = Cons_2_0(_id, s_8, t);
              }
            ;
            LocalPopChoice(o_32);
          }
        else
          {
            t = m_32;
            {
              ATerm f_37 = NULL,g_37 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_37 = ATgetFirst((ATermList) t);
                  g_37 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_37), (ATerm) ATmakeAppl(sym_Undefined_1, f_37));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_8, s_8, t);
    }
  }
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm s_37 = NULL;
  s_37 = t;
  if(match_string(t, "--help"))
    {
      t = s_37;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_37;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_37;
        }
    }
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_u_32;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_v_32;
  return(t);
}
ATerm z_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
  p_37 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = p_37;
  {
    ATerm t_8 (ATerm t)
    {
      ATerm w_32 = t;
      int a_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_113(t);
          ;
          LocalPopChoice(a_33);
        }
      else
        {
          t = w_32;
          {
            ATerm b_33 = t;
            int f_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_8, x_8, y_8, t);
                ;
                LocalPopChoice(f_33);
              }
            else
              {
                t = b_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_8, t);
    {
      ATerm g_33 = t;
      int i_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_37 = NULL;
          x_37 = t;
          {
            ATerm l_33 = t;
            int m_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = x_37;
                {
                  ATerm r_33 = t;
                  int s_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm t_33 = t;
                        int u_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_11 = NULL;
                            t = eval_config_0_0(t);
                            p_11 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), p_11);
                            t = p_11;
                            ;
                            LocalPopChoice(u_33);
                          }
                        else
                          {
                            t = t_33;
                          }
                      }
                      ;
                      LocalPopChoice(s_33);
                    }
                  else
                    {
                      t = r_33;
                      t = fetch_1_0(z_8, t);
                    }
                  t = x_37;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(m_33);
              }
            else
              {
                t = l_33;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm v_33 = t;
                  int w_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_11 = NULL;
                      t = eval_config_0_0(t);
                      x_11 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), x_11);
                      t = x_11;
                      ;
                      LocalPopChoice(w_33);
                    }
                  else
                    {
                      t = v_33;
                    }
                  t = x_37;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(i_33);
        }
      else
        {
          t = g_33;
          {
            ATerm x_33 = t;
            int y_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_9 (ATerm t)
                {
                  ATerm d_9 (ATerm t)
                  {
                    if(((q_37 != NULL) && (q_37 != t)))
                      _fail(t);
                    else
                      q_37 = t;
                    return(t);
                  }
                  t = Undefined_1_0(d_9, t);
                  return(t);
                }
                t = fetch_1_0(a_9, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_37)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_x_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_37)), term_z_33));
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
      r_37 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = r_37;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_111 (ATerm), ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm t)
{
  ATerm a_38 = NULL;
  t = parse_options_1_0(d_111, t);
  a_38 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), a_38);
  t = a_38;
  t = f_111(t);
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_111, t);
        ;
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        {
          ATerm h_34 = t;
          int j_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_111(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_34);
            }
          else
            {
              t = h_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = if_verbose2_1_0(s_9, t);
  return(t);
}
ATerm n_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_k_34;
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_l_34;
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL;
  b_38 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm m_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_12 = NULL;
        t = eval_config_0_0(t);
        b_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_12);
        t = b_12;
        ;
        LocalPopChoice(q_34);
      }
    else
      {
        t = m_34;
      }
    c_38 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, c_38));
    t = b_38;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm t)
{
  ATerm e_9 (ATerm t)
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_110(t);
        ;
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        {
          ATerm v_34 = t;
          int w_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(w_34);
            }
          else
            {
              t = v_34;
              {
                ATerm y_34 = t;
                int z_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(z_34);
                  }
                else
                  {
                    t = y_34;
                    {
                      ATerm b_35 = t;
                      int c_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_9, o_9, q_9, t);
                          ;
                          LocalPopChoice(c_35);
                        }
                      else
                        {
                          t = b_35;
                          {
                            ATerm d_35 = t;
                            int e_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(e_35);
                              }
                            else
                              {
                                t = d_35;
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
  ATerm m_9 (ATerm t)
  {
    ATerm d_38 = NULL,e_38 = NULL,f_12 = NULL;
    d_38 = t;
    {
      ATerm f_35 = t;
      int g_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_9 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_38 != NULL) && (e_38 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_38 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_9, t);
          ;
          LocalPopChoice(g_35);
        }
      else
        {
          t = f_35;
          t = term_h_35;
          e_38 = t;
        }
      t = not_null(e_38);
      t = ReadFromFile_0_0(t);
      f_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_38, f_12);
      t = apply_strategy_1_0(m_110, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(e_9, o_110, f_9, m_9, t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = _2_0(_id, v_9, t);
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = Specification_1_0(w_9, t);
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = Cons_2_0(x_9, y_9, t);
  return(t);
}
ATerm x_9 (ATerm t)
{
  t = Signature_1_0(_id, t);
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = Cons_2_0(z_9, a_10, t);
  return(t);
}
ATerm z_9 (ATerm t)
{
  t = Strategies_1_0(b_10, t);
  return(t);
}
ATerm a_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm b_10 (ATerm t)
{
  t = map_1_0(c_10, t);
  return(t);
}
ATerm c_10 (ATerm t)
{
  t = scope_2_0(f_10, h_10, t);
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = scope_2_0(k_10, cp_0_0, t);
  return(t);
}
ATerm k_10 (ATerm t)
{
  t = term_m_10;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(u_9, _fail, default_usage_0_0, t);
  return(t);
}
