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
ATerm term_x_30;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_v_27;
ATerm term_s_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_r_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_u_25;
ATerm term_l_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_y_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_e_23;
ATerm term_a_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_a_20;
ATerm term_q_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_w_16;
ATerm term_a_14;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_o_11;
ATerm term_v_9;
ATerm term_t_9;
void init_constant_terms (void)
{
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_v_9);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__3, term_q_28, term_r_28, term_w_16);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm SDefT_4_0 (ATerm f_74 (ATerm), ATerm g_74 (ATerm), ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm);
ATerm prop_sdef_1_0 (ATerm i_80 (ATerm), ATerm);
ATerm Not_1_0 (ATerm m_72 (ATerm), ATerm);
ATerm prop_not_1_0 (ATerm g_80 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm);
ATerm prop_rec_1_0 (ATerm f_80 (ATerm), ATerm);
ATerm Let_2_0 (ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm);
ATerm prop_let_1_0 (ATerm j_80 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm h_72 (ATerm), ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm);
ATerm isect_CurrentTerm_0_0 (ATerm);
ATerm isect_Binding_0_0 (ATerm);
ATerm restore_CurrentTerm_0_0 (ATerm);
ATerm save_CurrentTerm_0_0 (ATerm);
ATerm prop_abstract_choice_2_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm d_72 (ATerm), ATerm e_72 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm f_71 (ATerm), ATerm g_71 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm);
ATerm prop_choice_1_0 (ATerm m_80 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm);
ATerm prop_seq_1_0 (ATerm a_80 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm);
ATerm prop_traversal_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm restore_Binding_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_Binding_0_0 (ATerm);
ATerm exec_maybe_1_0 (ATerm z_79 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm t_72 (ATerm), ATerm u_72 (ATerm), ATerm v_72 (ATerm), ATerm);
ATerm prop_call_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm UndefCurrentTerm_0_0 (ATerm);
ATerm Scope_2_0 (ATerm x_71 (ATerm), ATerm y_71 (ATerm), ATerm);
ATerm prop_scope_1_0 (ATerm h_80 (ATerm), ATerm);
ATerm Build_1_0 (ATerm v_71 (ATerm), ATerm);
ATerm prop_build_0_0 (ATerm);
ATerm assert_1_0 (ATerm x_98 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm n_83 (ATerm), ATerm);
ATerm introduce_binding_0_0 (ATerm);
ATerm Var_1_0 (ATerm d_68 (ATerm), ATerm);
ATerm TermIsVarIgnore_1_0 (ATerm l_80 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm SubsVar_2_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm);
ATerm zip_1_0 (ATerm j_90 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm);
ATerm substitute_1_0 (ATerm z_106 (ATerm), ATerm);
ATerm is_subterm_0_0 (ATerm);
ATerm UfVar_1_0 (ATerm j_110 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm);
ATerm for_3_0 (ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm);
ATerm prop_pattern_match_0_0 (ATerm);
ATerm CurrentTerm_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm z_98 (ATerm), ATerm);
ATerm Binding_0_0 (ATerm);
ATerm alltd_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm Match_1_0 (ATerm u_71 (ATerm), ATerm);
ATerm prop_match_0_0 (ATerm);
ATerm cp_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm u_98 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm t_98 (ATerm), ATerm);
ATerm scope_2_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm);
ATerm const_prop_0_0 (ATerm);
ATerm map_1_0 (ATerm a_88 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm f_67 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm g_67 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm k_67 (ATerm), ATerm);
ATerm _2_0 (ATerm q_65 (ATerm), ATerm r_65 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm r_88 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm u_101 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm q_100 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm s_103 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm c_100 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm r_95 (ATerm), ATerm s_95 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm);
ATerm crush_2_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_101 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm q_104 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm t_79 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_79 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm l_88 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm q_105 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm p_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm v_106 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm t_106 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm s_106 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm w_103 (ATerm), ATerm);
ATerm const_prop_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm SDefT_4_0 (ATerm f_74 (ATerm), ATerm g_74 (ATerm), ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm t)
{
  ATerm u_0 = NULL,y_0 = NULL,z_0 = NULL,e_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL;
  l_1 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      y_0 = ATgetArgument(t, 0);
      z_0 = ATgetArgument(t, 1);
      e_1 = ATgetArgument(t, 2);
      g_1 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_1);
  u_0 = t;
  t = y_0;
  t = f_74(t);
  h_1 = t;
  t = z_0;
  t = g_74(t);
  i_1 = t;
  t = e_1;
  t = h_74(t);
  j_1 = t;
  t = g_1;
  t = i_74(t);
  k_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, h_1, i_1, j_1, k_1), u_0);
  return(t);
}
ATerm prop_sdef_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  ATerm o_1 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm k_9 = ATgetArgument(t, 0);
      ATerm p_9 = ATgetArgument(t, 1);
      o_1 = ATgetArgument(t, 2);
      {
        ATerm q_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm n_0 (ATerm t)
    {
      t = term_t_9;
      return(t);
    }
    ATerm o_0 (ATerm t)
    {
      ATerm p_1 = NULL;
      p_1 = t;
      t = o_1;
      {
        ATerm p_0 (ATerm t)
        {
          ATerm q_1 = NULL,r_1 = NULL;
          if(match_cons(t, sym_VarDec_2))
            {
              q_1 = ATgetArgument(t, 0);
              {
                ATerm u_9 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          r_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, q_1), term_v_9);
          {
            ATerm q_0 (ATerm t)
            {
              t = term_t_9;
              return(t);
            }
            t = assert_1_0(q_0, t);
            t = r_1;
          }
          return(t);
        }
        t = map_1_0(p_0, t);
        t = p_1;
        {
          ATerm r_0 (ATerm t)
          {
            t = UndefCurrentTerm_0_0(t);
            t = i_80(t);
            return(t);
          }
          t = SDefT_4_0(_id, _id, _id, r_0, t);
        }
      }
      return(t);
    }
    t = scope_2_0(n_0, o_0, t);
  }
  return(t);
}
ATerm Not_1_0 (ATerm m_72 (ATerm), ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL;
  v_1 = t;
  if(match_cons(t, sym_Not_1))
    {
      t_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_1);
  s_1 = t;
  t = t_1;
  t = m_72(t);
  u_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, u_1), s_1);
  return(t);
}
ATerm prop_not_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  if(match_cons(t, sym_Not_1))
    {
      ATerm w_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = UndefCurrentTerm_0_0(t);
  {
    ATerm s_0 (ATerm t)
    {
      t = exec_maybe_1_0(g_80, t);
      return(t);
    }
    t = Not_1_0(s_0, t);
  }
  return(t);
}
ATerm Rec_2_0 (ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm t)
{
  ATerm y_1 = NULL,a_2 = NULL,b_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL;
  f_2 = t;
  if(match_cons(t, sym_Rec_2))
    {
      a_2 = ATgetArgument(t, 0);
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_2);
  y_1 = t;
  t = a_2;
  t = k_72(t);
  d_2 = t;
  t = b_2;
  t = l_72(t);
  e_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, d_2, e_2), y_1);
  return(t);
}
ATerm prop_rec_1_0 (ATerm f_80 (ATerm), ATerm t)
{
  if(match_cons(t, sym_Rec_2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      ATerm z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_0 (ATerm t)
    {
      t = exec_maybe_1_0(f_80, t);
      return(t);
    }
    t = Rec_2_0(_id, t_0, t);
  }
  return(t);
}
ATerm Let_2_0 (ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,q_2 = NULL,s_2 = NULL,v_2 = NULL;
  v_2 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_2 = ATgetArgument(t, 0);
      o_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_2);
  m_2 = t;
  t = n_2;
  t = n_71(t);
  q_2 = t;
  t = o_2;
  t = o_71(t);
  s_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, q_2, s_2), m_2);
  return(t);
}
ATerm prop_let_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,j_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm c_10 = ATgetArgument(t, 0);
      ATerm d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  e_3 = t;
  t = save_Binding_0_0(t);
  j_3 = t;
  t = save_CurrentTerm_0_0(t);
  n_3 = t;
  t = e_3;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm x_0 (ATerm t)
      {
        ATerm q_3 = NULL;
        q_3 = t;
        t = UndefCurrentTerm_0_0(t);
        t = j_3;
        t = restore_Binding_0_0(t);
        t = q_3;
        t = j_80(t);
        return(t);
      }
      t = map_1_0(x_0, t);
      return(t);
    }
    ATerm w_0 (ATerm t)
    {
      ATerm r_3 = NULL;
      r_3 = t;
      t = n_3;
      t = restore_CurrentTerm_0_0(t);
      t = j_3;
      t = restore_Binding_0_0(t);
      t = r_3;
      t = j_80(t);
      return(t);
    }
    t = Let_2_0(v_0, w_0, t);
  }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm h_72 (ATerm), ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL;
  b_4 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      u_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
      x_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_4);
  t_3 = t;
  t = u_3;
  t = h_72(t);
  y_3 = t;
  t = v_3;
  t = i_72(t);
  z_3 = t;
  t = x_3;
  t = j_72(t);
  a_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, y_3, z_3, a_4), t_3);
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm c_1 (ATerm t)
    {
      ATerm t_5 (ATerm q_4, ATerm s_4, ATerm u_4, ATerm t)
      {
        t = u_4;
        {
          ATerm h_10 = t;
          int j_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)), q_4);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm k_10 = ATgetFirst((ATermList) t);
                  if(match_cons(k_10, sym_Defined_2))
                    {
                      ATerm m_10 = ATgetArgument(k_10, 0);
                      if((s_4 != ATgetArgument(k_10, 1)))
                        {
                          _fail(ATgetArgument(k_10, 1));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm l_10 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = u_4;
              ;
              LocalPopChoice(j_10);
            }
          else
            {
              t = h_10;
              t = (ATerm) ATmakeAppl(sym__2, q_4, (ATerm) ATinsert(ATempty, term_v_9));
            }
        }
        return(t);
      }
      ATerm a_5 = NULL,b_5 = NULL,e_5 = NULL,f_5 = NULL,p_5 = NULL;
      a_5 = t;
      if(match_cons(t, sym__2))
        {
          b_5 = ATgetArgument(t, 0);
          e_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_5;
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_5 = ATgetFirst((ATermList) t);
                {
                  ATerm p_10 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_10);
            t = f_5;
            {
              ATerm q_10 = t;
              int r_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm s_10 = ATgetArgument(t, 0);
                      p_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(r_10);
                  t = b_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm t_10 = t;
                      int v_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_5;
                          ;
                          LocalPopChoice(v_10);
                        }
                      else
                        {
                          t = t_10;
                          t = t_5(b_5, p_5, a_5, t);
                        }
                    }
                  else
                    {
                      t = t_5(b_5, p_5, a_5, t);
                    }
                }
              else
                {
                  t = q_10;
                  t = b_5;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = a_5;
                }
            }
          }
        else
          {
            t = n_10;
            t = b_5;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = a_5;
          }
      }
      return(t);
    }
    t = try_1_0(c_1, t);
    return(t);
  }
  t = map_1_0(b_1, t);
  t = restore_CurrentTerm_0_0(t);
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      ATerm r_8 (ATerm k_6, ATerm l_6, ATerm m_6, ATerm t)
      {
        t = m_6;
        {
          ATerm w_10 = t;
          int x_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)), k_6);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_10 = ATgetFirst((ATermList) t);
                  if(match_cons(y_10, sym_Defined_2))
                    {
                      ATerm e_11 = ATgetArgument(y_10, 0);
                      if((l_6 != ATgetArgument(y_10, 1)))
                        {
                          _fail(ATgetArgument(y_10, 1));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm d_11 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = m_6;
              ;
              LocalPopChoice(x_10);
            }
          else
            {
              t = w_10;
              t = (ATerm) ATmakeAppl(sym__2, k_6, (ATerm) ATinsert(ATempty, term_v_9));
            }
        }
        return(t);
      }
      ATerm y_6 = NULL,d_7 = NULL,u_7 = NULL,h_8 = NULL,m_8 = NULL;
      y_6 = t;
      if(match_cons(t, sym__2))
        {
          d_7 = ATgetArgument(t, 0);
          u_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_7;
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_8 = ATgetFirst((ATermList) t);
                {
                  ATerm h_11 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(g_11);
            t = h_8;
            {
              ATerm i_11 = t;
              int j_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm l_11 = ATgetArgument(t, 0);
                      m_8 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(j_11);
                  t = d_7;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm m_11 = t;
                      int n_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_6;
                          ;
                          LocalPopChoice(n_11);
                        }
                      else
                        {
                          t = m_11;
                          t = r_8(d_7, m_8, y_6, t);
                        }
                    }
                  else
                    {
                      t = r_8(d_7, m_8, y_6, t);
                    }
                }
              else
                {
                  t = i_11;
                  t = d_7;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = y_6;
                }
            }
          }
        else
          {
            t = f_11;
            t = d_7;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = y_6;
          }
      }
      return(t);
    }
    t = try_1_0(m_1, t);
    return(t);
  }
  t = map_1_0(f_1, t);
  t = restore_Binding_0_0(t);
  return(t);
}
ATerm restore_CurrentTerm_0_0 (ATerm t)
{
  ATerm z_8 = NULL;
  z_8 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_o_11, z_8);
  t = table_putlist_0_0(t);
  t = z_8;
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = term_o_11;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,f_9 = NULL,g_9 = NULL,i_9 = NULL,l_9 = NULL;
  a_9 = t;
  t = save_Binding_0_0(t);
  b_9 = t;
  t = save_CurrentTerm_0_0(t);
  c_9 = t;
  t = a_9;
  t = n_80(t);
  f_9 = t;
  t = save_Binding_0_0(t);
  g_9 = t;
  t = b_9;
  t = restore_Binding_0_0(t);
  t = save_CurrentTerm_0_0(t);
  i_9 = t;
  t = c_9;
  t = restore_CurrentTerm_0_0(t);
  t = f_9;
  t = o_80(t);
  l_9 = t;
  t = g_9;
  t = isect_Binding_0_0(t);
  t = i_9;
  t = isect_CurrentTerm_0_0(t);
  t = l_9;
  return(t);
}
ATerm LChoice_2_0 (ATerm d_72 (ATerm), ATerm e_72 (ATerm), ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,r_9 = NULL,s_9 = NULL,x_9 = NULL;
  x_9 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      n_9 = ATgetArgument(t, 0);
      o_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_9);
  m_9 = t;
  t = n_9;
  t = d_72(t);
  r_9 = t;
  t = o_9;
  t = e_72(t);
  s_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, r_9, s_9), m_9);
  return(t);
}
ATerm GChoice_2_0 (ATerm f_71 (ATerm), ATerm g_71 (ATerm), ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,i_10 = NULL;
  i_10 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      b_10 = ATgetArgument(t, 0);
      e_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_10);
  a_10 = t;
  t = b_10;
  t = f_71(t);
  f_10 = t;
  t = e_10;
  t = g_71(t);
  g_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, f_10, g_10), a_10);
  return(t);
}
ATerm Choice_2_0 (ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm t)
{
  ATerm u_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,k_11 = NULL;
  k_11 = t;
  if(match_cons(t, sym_Choice_2))
    {
      z_10 = ATgetArgument(t, 0);
      a_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_11);
  u_10 = t;
  t = z_10;
  t = b_71(t);
  b_11 = t;
  t = a_11;
  t = c_71(t);
  c_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, b_11, c_11), u_10);
  return(t);
}
ATerm prop_choice_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm s_11 = NULL;
  s_11 = t;
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm r_11 = ATgetArgument(t, 0);
            ATerm t_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(q_11);
        t = s_11;
        {
          ATerm n_1 (ATerm t)
          {
            t = Choice_2_0(m_80, _id, t);
            return(t);
          }
          ATerm w_1 (ATerm t)
          {
            t = Choice_2_0(_id, m_80, t);
            return(t);
          }
          t = prop_abstract_choice_2_0(n_1, w_1, t);
        }
      }
    else
      {
        t = p_11;
        {
          ATerm u_11 = t;
          int v_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm w_11 = ATgetArgument(t, 0);
                  ATerm x_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(v_11);
              t = s_11;
              {
                ATerm x_1 (ATerm t)
                {
                  t = GChoice_2_0(m_80, _id, t);
                  return(t);
                }
                ATerm z_1 (ATerm t)
                {
                  t = GChoice_2_0(_id, m_80, t);
                  return(t);
                }
                t = prop_abstract_choice_2_0(x_1, z_1, t);
              }
            }
          else
            {
              t = u_11;
              {
                ATerm y_11 = t;
                int z_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm a_12 = ATgetArgument(t, 0);
                        ATerm b_12 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(z_11);
                    t = s_11;
                    {
                      ATerm c_2 (ATerm t)
                      {
                        t = LChoice_2_0(m_80, _id, t);
                        return(t);
                      }
                      ATerm g_2 (ATerm t)
                      {
                        t = LChoice_2_0(_id, m_80, t);
                        return(t);
                      }
                      t = prop_abstract_choice_2_0(c_2, g_2, t);
                    }
                  }
                else
                  {
                    t = y_11;
                    if(match_cons(t, sym_GuardedLChoice_3))
                      {
                        ATerm c_12 = ATgetArgument(t, 0);
                        ATerm d_12 = ATgetArgument(t, 1);
                        ATerm e_12 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = s_11;
                    {
                      ATerm h_2 (ATerm t)
                      {
                        t = GuardedLChoice_3_0(m_80, _id, _id, t);
                        t = GuardedLChoice_3_0(_id, m_80, _id, t);
                        return(t);
                      }
                      ATerm i_2 (ATerm t)
                      {
                        t = GuardedLChoice_3_0(_id, _id, m_80, t);
                        return(t);
                      }
                      t = prop_abstract_choice_2_0(h_2, i_2, t);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Seq_2_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,o_12 = NULL,y_12 = NULL,z_12 = NULL,c_13 = NULL;
  c_13 = t;
  if(match_cons(t, sym_Seq_2))
    {
      g_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_13);
  f_12 = t;
  t = g_12;
  t = b_72(t);
  y_12 = t;
  t = o_12;
  t = c_72(t);
  z_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, y_12, z_12), f_12);
  return(t);
}
ATerm prop_seq_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  t = Seq_2_0(a_80, a_80, t);
  return(t);
}
ATerm Cong_2_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,m_13 = NULL,u_13 = NULL,y_13 = NULL,c_14 = NULL;
  c_14 = t;
  if(match_cons(t, sym_Cong_2))
    {
      k_13 = ATgetArgument(t, 0);
      m_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_14);
  j_13 = t;
  t = k_13;
  t = b_67(t);
  u_13 = t;
  t = m_13;
  t = c_67(t);
  y_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, u_13, y_13), j_13);
  return(t);
}
ATerm prop_traversal_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_14 = NULL;
      l_14 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm j_12 = ATgetArgument(t, 0);
          ATerm k_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_14;
      t = UndefCurrentTerm_0_0(t);
      {
        ATerm j_2 (ATerm t)
        {
          ATerm k_2 (ATerm t)
          {
            t = exec_maybe_1_0(m_0, t);
            return(t);
          }
          t = map_1_0(k_2, t);
          return(t);
        }
        t = Cong_2_0(_id, j_2, t);
      }
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      {
        ATerm l_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm n_12 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            ;
            LocalPopChoice(m_12);
          }
        else
          {
            t = l_12;
            {
              ATerm p_14 = NULL;
              p_14 = t;
              {
                ATerm p_12 = t;
                int q_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_One_1))
                      {
                        ATerm r_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(q_12);
                    t = p_14;
                  }
                else
                  {
                    t = p_12;
                    {
                      ATerm s_12 = t;
                      int t_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm u_12 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(t_12);
                          t = p_14;
                        }
                      else
                        {
                          t = s_12;
                          {
                            ATerm v_12 = t;
                            int w_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm x_12 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(w_12);
                                t = p_14;
                              }
                            else
                              {
                                t = v_12;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm a_13 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = p_14;
                              }
                          }
                        }
                    }
                  }
              }
            }
          }
        t = UndefCurrentTerm_0_0(t);
        {
          ATerm l_2 (ATerm t)
          {
            t = exec_maybe_1_0(m_0, t);
            return(t);
          }
          t = SRTS_one(l_2, t);
        }
      }
    }
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      v_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_14;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm y_14 = NULL,a_15 = NULL;
      if(match_cons(t, sym__2))
        {
          y_14 = ATgetArgument(t, 0);
          a_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(v_14, y_14, a_15);
      t = (ATerm) ATmakeAppl(sym__3, v_14, y_14, a_15);
      return(t);
    }
    t = map_1_0(p_2, t);
  }
  return(t);
}
ATerm restore_Binding_0_0 (ATerm t)
{
  ATerm b_15 = NULL;
  b_15 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_t_9, b_15);
  t = table_putlist_0_0(t);
  t = b_15;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm c_15 = NULL;
  c_15 = t;
  t = SSL_table_keys(c_15);
  {
    ATerm t_2 (ATerm t)
    {
      ATerm f_15 = NULL,g_15 = NULL;
      f_15 = t;
      t = SSL_table_get(c_15, f_15);
      g_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_15, g_15);
      return(t);
    }
    t = map_1_0(t_2, t);
  }
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = term_t_9;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm exec_maybe_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
  k_15 = t;
  t = UndefCurrentTerm_0_0(t);
  t = save_Binding_0_0(t);
  l_15 = t;
  t = k_15;
  t = z_79(t);
  m_15 = t;
  t = UndefCurrentTerm_0_0(t);
  t = l_15;
  t = restore_Binding_0_0(t);
  t = m_15;
  return(t);
}
ATerm CallT_3_0 (ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,b_16 = NULL,f_16 = NULL;
  f_16 = t;
  if(match_cons(t, sym_CallT_3))
    {
      o_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
      u_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_16);
  n_15 = t;
  t = o_15;
  t = r_71(t);
  v_15 = t;
  t = t_15;
  t = s_71(t);
  w_15 = t;
  t = u_15;
  t = t_71(t);
  b_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, v_15, w_15, b_16), n_15);
  return(t);
}
ATerm PrimT_3_0 (ATerm t_72 (ATerm), ATerm u_72 (ATerm), ATerm v_72 (ATerm), ATerm t)
{
  ATerm i_16 = NULL,k_16 = NULL,m_16 = NULL,o_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,u_16 = NULL;
  u_16 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      k_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
      o_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_16);
  i_16 = t;
  t = k_16;
  t = t_72(t);
  q_16 = t;
  t = m_16;
  t = u_72(t);
  r_16 = t;
  t = o_16;
  t = v_72(t);
  s_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, q_16, r_16, s_16), i_16);
  return(t);
}
ATerm prop_call_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm c_17 = NULL;
  c_17 = t;
  {
    ATerm b_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm e_13 = ATgetArgument(t, 0);
            ATerm f_13 = ATgetArgument(t, 1);
            ATerm g_13 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(d_13);
        t = c_17;
        t = UndefCurrentTerm_0_0(t);
        {
          ATerm u_2 (ATerm t)
          {
            ATerm x_2 (ATerm t)
            {
              t = exec_maybe_1_0(l_0, t);
              return(t);
            }
            t = map_1_0(x_2, t);
            return(t);
          }
          ATerm w_2 (ATerm t)
          {
            t = alltd_1_0(Binding_0_0, t);
            return(t);
          }
          t = PrimT_3_0(_id, u_2, w_2, t);
        }
      }
    else
      {
        t = b_13;
        if(match_cons(t, sym_CallT_3))
          {
            ATerm h_13 = ATgetArgument(t, 0);
            ATerm i_13 = ATgetArgument(t, 1);
            ATerm l_13 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = c_17;
        t = UndefCurrentTerm_0_0(t);
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
          ATerm a_3 (ATerm t)
          {
            t = alltd_1_0(Binding_0_0, t);
            return(t);
          }
          t = CallT_3_0(_id, z_2, a_3, t);
        }
      }
  }
  return(t);
}
ATerm UndefCurrentTerm_0_0 (ATerm t)
{
  ATerm c_18 = NULL;
  c_18 = t;
  t = term_n_13;
  {
    ATerm c_3 (ATerm t)
    {
      t = term_o_11;
      return(t);
    }
    t = assert_1_0(c_3, t);
    t = c_18;
  }
  return(t);
}
ATerm Scope_2_0 (ATerm x_71 (ATerm), ATerm y_71 (ATerm), ATerm t)
{
  ATerm j_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  u_18 = t;
  if(match_cons(t, sym_Scope_2))
    {
      q_18 = ATgetArgument(t, 0);
      r_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_18);
  j_18 = t;
  t = q_18;
  t = x_71(t);
  s_18 = t;
  t = r_18;
  t = y_71(t);
  t_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, s_18, t_18), j_18);
  return(t);
}
ATerm prop_scope_1_0 (ATerm h_80 (ATerm), ATerm t)
{
  ATerm x_18 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      x_18 = ATgetArgument(t, 0);
      {
        ATerm o_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm d_3 (ATerm t)
    {
      t = term_t_9;
      return(t);
    }
    ATerm f_3 (ATerm t)
    {
      ATerm y_18 = NULL,z_18 = NULL;
      y_18 = t;
      t = x_18;
      {
        ATerm g_3 (ATerm t)
        {
          ATerm a_19 = NULL;
          a_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_19), term_v_9);
          {
            ATerm h_3 (ATerm t)
            {
              t = term_t_9;
              return(t);
            }
            t = assert_1_0(h_3, t);
            t = a_19;
          }
          return(t);
        }
        t = map_1_0(g_3, t);
        t = y_18;
        t = Scope_2_0(_id, h_80, t);
        z_18 = t;
        {
          ATerm i_3 (ATerm t)
          {
            t = CurrentTerm_0_0(t);
            {
              ATerm k_3 (ATerm t)
              {
                ATerm b_19 = NULL;
                if(match_cons(t, sym_Var_1))
                  {
                    b_19 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = x_18;
                {
                  ATerm l_3 (ATerm t)
                  {
                    if((b_19 != t))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = fetch_1_0(l_3, t);
                }
                return(t);
              }
              t = oncetd_1_0(k_3, t);
              t = UndefCurrentTerm_0_0(t);
            }
            return(t);
          }
          t = try_1_0(i_3, t);
          t = z_18;
        }
      }
      return(t);
    }
    t = scope_2_0(d_3, f_3, t);
  }
  return(t);
}
ATerm Build_1_0 (ATerm v_71 (ATerm), ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym_Build_1))
    {
      d_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_19);
  c_19 = t;
  t = d_19;
  t = v_71(t);
  e_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, e_19), c_19);
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm i_19 = NULL;
  ATerm m_3 (ATerm t)
  {
    t = alltd_1_0(Binding_0_0, t);
    return(t);
  }
  t = Build_1_0(m_3, t);
  if(match_cons(t, sym_Build_1))
    {
      i_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_13, i_19));
  {
    ATerm s_3 (ATerm t)
    {
      t = term_o_11;
      return(t);
    }
    t = assert_1_0(s_3, t);
    t = (ATerm) ATmakeAppl(sym_Build_1, i_19);
  }
  return(t);
}
ATerm assert_1_0 (ATerm x_98 (ATerm), ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
  if(match_cons(t, sym__2))
    {
      j_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_98(t);
  l_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_19, j_19, k_19);
  t = table_push_0_0(t);
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(l_19, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_19 = ATgetFirst((ATermList) t);
        n_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(l_19, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(n_19), (ATerm) ATinsert(CheckATermList(m_19), j_19)));
    t = (ATerm) ATmakeAppl(sym__2, j_19, k_19);
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm n_83 (ATerm), ATerm t)
{
  ATerm o_19 (ATerm t)
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_83(t);
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        t = SRTS_one(o_19, t);
      }
    return(t);
  }
  t = o_19(t);
  return(t);
}
ATerm introduce_binding_0_0 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_13 = ATgetArgument(t, 0);
      if(match_cons(v_13, sym_Var_1))
        {
          q_19 = ATgetArgument(v_13, 0);
        }
      else
        _fail(t);
      r_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_19;
  {
    ATerm w_13 = t;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          ATerm s_19 = NULL;
          s_19 = t;
          if(match_cons(t, sym_Wld_0))
            {
              t = s_19;
            }
          else
            {
              if(match_cons(t, sym_As_2))
                {
                  ATerm x_13 = ATgetArgument(t, 0);
                  ATerm z_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_19;
            }
          return(t);
        }
        t = oncetd_1_0(w_3, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_13;
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, q_19), (ATerm) ATmakeAppl(sym_Defined_2, term_a_14, r_19));
    {
      ATerm c_4 (ATerm t)
      {
        t = term_t_9;
        return(t);
      }
      t = assert_1_0(c_4, t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, q_19), r_19);
    }
  }
  return(t);
}
ATerm Var_1_0 (ATerm d_68 (ATerm), ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
  y_19 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_19);
  v_19 = t;
  t = w_19;
  t = d_68(t);
  x_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, x_19), v_19);
  return(t);
}
ATerm TermIsVarIgnore_1_0 (ATerm l_80 (ATerm), ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_14 = ATgetFirst((ATermList) t);
      if(match_cons(b_14, sym__2))
        {
          b_20 = ATgetArgument(b_14, 0);
          c_20 = ATgetArgument(b_14, 1);
        }
      else
        _fail(t);
      d_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_20;
  {
    ATerm d_14 = t;
    if((PushChoice() == 0))
      {
        t = l_80(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_14;
      }
    t = c_20;
    t = l_80(t);
    t = d_20;
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_14 = ATgetFirst((ATermList) t);
      if(match_cons(e_14, sym__2))
        {
          e_20 = ATgetArgument(e_14, 0);
          f_20 = ATgetArgument(e_14, 1);
        }
      else
        _fail(t);
      g_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_20);
  if(match_cons(t, sym__2))
    {
      h_20 = ATgetArgument(t, 0);
      i_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(e_20);
  if(match_cons(t, sym__2))
    {
      if((h_20 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_20, i_20);
  t = zip_1_0(_id, t);
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_20, g_20);
  t = conc_0_0(t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
  if(match_cons(t, sym__2))
    {
      r_20 = ATgetArgument(t, 0);
      s_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_20;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_20 = ATgetFirst((ATermList) t);
      u_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_20;
  if(match_cons(t, sym__2))
    {
      o_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
      {
        ATerm f_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_20;
            if((r_20 != t))
              {
                _fail(t);
              }
            t = p_20;
            ;
            LocalPopChoice(g_14);
          }
        else
          {
            t = f_14;
            t = (ATerm) ATmakeAppl(sym__2, r_20, u_20);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, r_20, u_20);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm SubsVar_2_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  t = m_107(t);
  d_21 = t;
  t = n_107(t);
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_21, e_21);
  t = lookup_0_0(t);
  return(t);
}
ATerm genzip_4_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm t)
{
  ATerm f_21 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_90(t);
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = f_90(t);
        t = _2_0(h_90, f_21, t);
        t = g_90(t);
      }
    return(t);
  }
  t = f_21(t);
  return(t);
}
ATerm zip_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm d_4 (ATerm t)
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
  ATerm e_4 (ATerm t)
  {
    ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm m_14 = ATgetArgument(t, 0);
        if(((ATgetType(m_14) == AT_LIST) && !(ATisEmpty(m_14))))
          {
            g_21 = ATgetFirst((ATermList) m_14);
            i_21 = (ATerm) ATgetNext((ATermList) m_14);
          }
        else
          _fail(t);
        {
          ATerm n_14 = ATgetArgument(t, 1);
          if(((ATgetType(n_14) == AT_LIST) && !(ATisEmpty(n_14))))
            {
              h_21 = ATgetFirst((ATermList) n_14);
              j_21 = (ATerm) ATgetNext((ATermList) n_14);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_21, h_21), (ATerm) ATmakeAppl(sym__2, i_21, j_21));
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    ATerm k_21 = NULL,l_21 = NULL;
    if(match_cons(t, sym__2))
      {
        k_21 = ATgetArgument(t, 0);
        l_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(l_21), k_21);
    return(t);
  }
  t = genzip_4_0(d_4, e_4, f_4, j_90, t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
  n_21 = t;
  {
    ATerm o_14 = t;
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
        LocalPopChoice(q_14);
        t = n_21;
      }
    else
      {
        t = o_14;
        {
          ATerm u_21 = NULL;
          if(match_cons(t, sym__3))
            {
              o_21 = ATgetArgument(t, 0);
              p_21 = ATgetArgument(t, 1);
              q_21 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, o_21, p_21);
          t = zip_1_0(_id, t);
          u_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_21, q_21);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      w_21 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_21;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm h_4 (ATerm t)
      {
        t = w_21;
        return(t);
      }
      t = SubsVar_2_0(x_106, h_4, t);
      t = y_106(t);
      return(t);
    }
    t = alltd_1_0(g_4, t);
  }
  return(t);
}
ATerm substitute_1_0 (ATerm z_106 (ATerm), ATerm t)
{
  t = substitute_2_0(z_106, _id, t);
  return(t);
}
ATerm is_subterm_0_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL;
  if(match_cons(t, sym__2))
    {
      x_21 = ATgetArgument(t, 0);
      y_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_21;
  {
    ATerm i_4 (ATerm t)
    {
      if((x_21 != t))
        {
          _fail(t);
        }
      return(t);
    }
    t = oncetd_1_0(i_4, t);
    t = (ATerm) ATmakeAppl(sym__2, x_21, y_21);
  }
  return(t);
}
ATerm UfVar_1_0 (ATerm j_110 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_14 = ATgetArgument(t, 0);
      if(((ATgetType(t_14) == AT_LIST) && !(ATisEmpty(t_14))))
        {
          ATerm w_14 = ATgetFirst((ATermList) t_14);
          if(match_cons(w_14, sym__2))
            {
              z_21 = ATgetArgument(w_14, 0);
              a_22 = ATgetArgument(w_14, 1);
            }
          else
            _fail(t);
          b_22 = (ATerm) ATgetNext((ATermList) t_14);
        }
      else
        _fail(t);
      c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_21;
  t = j_110(t);
  t = (ATerm) ATmakeAppl(sym__2, z_21, a_22);
  {
    ATerm x_14 = t;
    if((PushChoice() == 0))
      {
        t = is_subterm_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_14;
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, z_21, a_22)), (ATerm) ATmakeAppl(sym__2, c_22, b_22));
    t = substitute_1_0(j_110, t);
    if(match_cons(t, sym__2))
      {
        d_22 = ATgetArgument(t, 0);
        e_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, e_22, (ATerm) ATinsert(CheckATermList(d_22), (ATerm) ATmakeAppl(sym__2, z_21, a_22)));
  }
  return(t);
}
ATerm while_not_2_0 (ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm t)
{
  ATerm f_22 (ATerm t)
  {
    ATerm z_14 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_82(t);
        ;
        LocalPopChoice(d_15);
      }
    else
      {
        t = z_14;
        t = b_82(t);
        t = f_22(t);
      }
    return(t);
  }
  t = f_22(t);
  return(t);
}
ATerm for_3_0 (ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm f_82 (ATerm), ATerm t)
{
  t = d_82(t);
  t = while_not_2_0(e_82, f_82, t);
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm g_22 = NULL;
    g_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_22, (ATerm) ATempty);
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    ATerm h_22 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm e_15 = ATgetArgument(t, 0);
        if(((ATgetType(e_15) != AT_LIST) || !(ATisEmpty(e_15))))
          _fail(t);
        h_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = h_22;
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_4 (ATerm t)
        {
          ATerm i_22 = NULL,j_22 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_15 = ATgetFirst((ATermList) t);
              if(match_cons(j_15, sym__2))
                {
                  i_22 = ATgetArgument(j_15, 0);
                  if((i_22 != ATgetArgument(j_15, 1)))
                    {
                      _fail(ATgetArgument(j_15, 1));
                    }
                }
              else
                _fail(t);
              j_22 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = j_22;
          return(t);
        }
        t = _2_0(m_4, _id, t);
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        {
          ATerm p_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_4 (ATerm t)
              {
                t = Var_1_0(_id, t);
                return(t);
              }
              t = UfVar_1_0(n_4, t);
              ;
              LocalPopChoice(q_15);
            }
          else
            {
              t = p_15;
              {
                ATerm r_15 = t;
                int s_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = _2_0(UfDecompose_0_0, _id, t);
                    ;
                    LocalPopChoice(s_15);
                  }
                else
                  {
                    t = r_15;
                    {
                      ATerm x_15 = t;
                      int y_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm o_4 (ATerm t)
                          {
                            ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm z_15 = ATgetFirst((ATermList) t);
                                if(match_cons(z_15, sym__2))
                                  {
                                    ATerm a_16 = ATgetArgument(z_15, 0);
                                    if(match_cons(a_16, sym_As_2))
                                      {
                                        k_22 = ATgetArgument(a_16, 0);
                                        l_22 = ATgetArgument(a_16, 1);
                                      }
                                    else
                                      _fail(t);
                                    m_22 = ATgetArgument(z_15, 1);
                                  }
                                else
                                  _fail(t);
                                n_22 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATinsert(ATinsert(CheckATermList(n_22), (ATerm) ATmakeAppl(sym__2, l_22, m_22)), (ATerm) ATmakeAppl(sym__2, k_22, m_22));
                            return(t);
                          }
                          t = _2_0(o_4, _id, t);
                          ;
                          LocalPopChoice(y_15);
                        }
                      else
                        {
                          t = x_15;
                          {
                            ATerm c_16 = t;
                            int d_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_4 (ATerm t)
                                {
                                  ATerm o_22 = NULL;
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      ATerm e_16 = ATgetFirst((ATermList) t);
                                      if(match_cons(e_16, sym__2))
                                        {
                                          ATerm g_16 = ATgetArgument(e_16, 0);
                                          if(!(match_cons(g_16, sym_Wld_0)))
                                            _fail(t);
                                          {
                                            ATerm h_16 = ATgetArgument(e_16, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      o_22 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  else
                                    _fail(t);
                                  t = o_22;
                                  return(t);
                                }
                                t = _2_0(p_4, _id, t);
                                ;
                                LocalPopChoice(d_16);
                              }
                            else
                              {
                                t = c_16;
                                {
                                  ATerm r_4 (ATerm t)
                                  {
                                    ATerm t_4 (ATerm t)
                                    {
                                      t = Var_1_0(_id, t);
                                      return(t);
                                    }
                                    t = TermIsVarIgnore_1_0(t_4, t);
                                    return(t);
                                  }
                                  t = _2_0(r_4, _id, t);
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
  t = for_3_0(j_4, k_4, l_4, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm j_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_22 = NULL;
      t = (ATerm) ATempty;
      {
        ATerm v_4 (ATerm t)
        {
          t = term_o_11;
          return(t);
        }
        t = rewrite_1_0(v_4, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm n_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_16) != ATmakeSymbol("i_0", 0, ATtrue)))
              _fail(t);
            p_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_22;
      }
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = j_16;
      {
        ATerm p_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_22 = NULL;
            t = (ATerm) ATempty;
            {
              ATerm w_4 (ATerm t)
              {
                t = term_o_11;
                return(t);
              }
              t = rewrite_1_0(w_4, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm v_16 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) v_16) != ATmakeSymbol("g_0", 0, ATtrue)))
                    _fail(t);
                  q_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_22;
            }
            ;
            LocalPopChoice(t_16);
          }
        else
          {
            t = p_16;
            t = (ATerm) ATempty;
            {
              ATerm x_4 (ATerm t)
              {
                t = term_o_11;
                return(t);
              }
              t = rewrite_1_0(x_4, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm rewrite_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,a_1 = NULL;
  u_22 = t;
  t = term_w_16;
  t = z_98(t);
  v_22 = t;
  t = SSL_table_get(v_22, u_22);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_1 = ATgetFirst((ATermList) t);
      {
        ATerm x_16 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_1;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm h_23 = NULL;
  h_23 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm y_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_1 = NULL;
        t = h_23;
        {
          ATerm y_4 (ATerm t)
          {
            t = term_t_9;
            return(t);
          }
          t = rewrite_1_0(y_4, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm b_17 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_17) != ATmakeSymbol("k_0", 0, ATtrue)))
                _fail(t);
              d_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_1;
        }
        ;
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        t = h_23;
        {
          ATerm z_4 (ATerm t)
          {
            t = term_t_9;
            return(t);
          }
          t = rewrite_1_0(z_4, t);
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm m_23 (ATerm t)
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_84(t);
        ;
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        t = SRTS_all(m_23, t);
      }
    return(t);
  }
  t = m_23(t);
  return(t);
}
ATerm Match_1_0 (ATerm u_71 (ATerm), ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  q_23 = t;
  if(match_cons(t, sym_Match_1))
    {
      o_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_23);
  n_23 = t;
  t = o_23;
  t = u_71(t);
  p_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, p_23), n_23);
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL;
  ATerm c_5 (ATerm t)
  {
    t = alltd_1_0(Binding_0_0, t);
    return(t);
  }
  t = Match_1_0(c_5, t);
  if(match_cons(t, sym_Match_1))
    {
      w_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_5 (ATerm t)
    {
      ATerm f_24 = NULL;
      f_24 = t;
      {
        ATerm f_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_24;
            t = CurrentTerm_0_0(t);
            x_23 = t;
            t = f_24;
            {
              ATerm h_17 = t;
              int i_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_23, x_23));
                  t = prop_pattern_match_0_0(t);
                  {
                    ATerm g_5 (ATerm t)
                    {
                      t = try_1_0(introduce_binding_0_0, t);
                      return(t);
                    }
                    t = map_1_0(g_5, t);
                    t = f_24;
                  }
                  ;
                  LocalPopChoice(i_17);
                }
              else
                {
                  t = h_17;
                  t = (ATerm) ATmakeAppl(sym__4, term_j_17, f_24, term_k_17, x_23);
                  {
                    ATerm h_5 (ATerm t)
                    {
                      t = term_l_17;
                      return(t);
                    }
                    t = debug_1_0(h_5, t);
                    t = term_m_17;
                  }
                }
            }
            ;
            LocalPopChoice(g_17);
          }
        else
          {
            t = f_17;
            t = w_23;
            {
              ATerm n_17 = t;
              if((PushChoice() == 0))
                {
                  ATerm i_5 (ATerm t)
                  {
                    ATerm r_2 = NULL;
                    r_2 = t;
                    if(match_cons(t, sym_Wld_0))
                      {
                        t = r_2;
                      }
                    else
                      {
                        if(match_cons(t, sym_As_2))
                          {
                            ATerm o_17 = ATgetArgument(t, 0);
                            ATerm p_17 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = r_2;
                      }
                    return(t);
                  }
                  t = oncetd_1_0(i_5, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = n_17;
                }
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_17, w_23));
              {
                ATerm j_5 (ATerm t)
                {
                  t = term_o_11;
                  return(t);
                }
                t = assert_1_0(j_5, t);
                t = f_24;
              }
            }
          }
      }
      return(t);
    }
    t = try_1_0(d_5, t);
  }
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      {
        ATerm t_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0_0(t);
            ;
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            {
              ATerm v_17 = t;
              int w_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = prop_scope_1_0(cp_0_0, t);
                  ;
                  LocalPopChoice(w_17);
                }
              else
                {
                  t = v_17;
                  {
                    ATerm x_17 = t;
                    int y_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        ;
                        LocalPopChoice(y_17);
                      }
                    else
                      {
                        t = x_17;
                        {
                          ATerm z_17 = t;
                          int a_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
                              ;
                              LocalPopChoice(a_18);
                            }
                          else
                            {
                              t = z_17;
                              {
                                ATerm b_18 = t;
                                int d_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = prop_seq_1_0(cp_0_0, t);
                                    ;
                                    LocalPopChoice(d_18);
                                  }
                                else
                                  {
                                    t = b_18;
                                    {
                                      ATerm e_18 = t;
                                      int f_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1_0(cp_0_0, t);
                                          ;
                                          LocalPopChoice(f_18);
                                        }
                                      else
                                        {
                                          t = e_18;
                                          {
                                            ATerm g_18 = t;
                                            int h_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = prop_let_1_0(cp_0_0, t);
                                                ;
                                                LocalPopChoice(h_18);
                                              }
                                            else
                                              {
                                                t = g_18;
                                                {
                                                  ATerm i_18 = t;
                                                  int k_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = prop_rec_1_0(cp_0_0, t);
                                                      ;
                                                      LocalPopChoice(k_18);
                                                    }
                                                  else
                                                    {
                                                      t = i_18;
                                                      {
                                                        ATerm l_18 = t;
                                                        int m_18 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = prop_not_1_0(cp_0_0, t);
                                                            ;
                                                            LocalPopChoice(m_18);
                                                          }
                                                        else
                                                          {
                                                            t = l_18;
                                                            {
                                                              ATerm n_18 = t;
                                                              int o_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = prop_sdef_1_0(cp_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(o_18);
                                                                }
                                                              else
                                                                {
                                                                  t = n_18;
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
      }
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
  if(match_cons(t, sym__2))
    {
      k_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_2 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_18 = ATgetArgument(t, 0);
            ATerm g_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_24, l_24);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_19 = ATgetFirst((ATermList) t);
            y_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_2;
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = p_18;
        t = (ATerm) ATempty;
      }
    m_24 = t;
    t = SSL_table_put(k_24, l_24, m_24);
    t = (ATerm) ATmakeAppl(sym__2, k_24, l_24);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
  s_24 = t;
  t = u_98(t);
  t_24 = t;
  {
    ATerm p_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(t_24, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = p_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_24 = ATgetFirst((ATermList) t);
        u_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(t_24, (ATerm)ATmakeAppl(sym_Scopes_0), u_24);
    t = v_24;
    {
      ATerm k_5 (ATerm t)
      {
        ATerm w_24 = NULL;
        w_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_24, w_24);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(k_5, t);
      t = s_24;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t)
{
  ATerm u_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_81(t);
      t = f_81(t);
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = u_19;
      t = f_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_98 (ATerm), ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
  z_24 = t;
  t = t_98(t);
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_25, term_a_20);
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_20 = ATgetArgument(t, 0);
            ATerm q_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(a_25, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = (ATerm) ATempty;
      }
    b_25 = t;
    t = SSL_table_put(a_25, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(b_25), (ATerm) ATempty));
    t = z_24;
  }
  return(t);
}
ATerm scope_2_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm t)
{
  t = begin_scope_1_0(v_98, t);
  {
    ATerm l_5 (ATerm t)
    {
      t = end_scope_1_0(v_98, t);
      return(t);
    }
    t = restore_always_2_0(w_98, l_5, t);
  }
  return(t);
}
ATerm const_prop_0_0 (ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    t = term_o_11;
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    ATerm o_5 (ATerm t)
    {
      t = term_t_9;
      return(t);
    }
    t = scope_2_0(o_5, cp_0_0, t);
    return(t);
  }
  t = scope_2_0(m_5, n_5, t);
  return(t);
}
ATerm map_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm g_25 (ATerm t)
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        t = Cons_2_0(a_88, g_25, t);
      }
    return(t);
  }
  t = g_25(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm f_67 (ATerm), ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
  k_25 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      i_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_25);
  h_25 = t;
  t = i_25;
  t = f_67(t);
  j_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, j_25), h_25);
  return(t);
}
ATerm Cons_2_0 (ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL;
  s_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_25 = ATgetFirst((ATermList) t);
      p_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_25);
  n_25 = t;
  t = o_25;
  t = z_66(t);
  q_25 = t;
  t = p_25;
  t = a_67(t);
  r_25 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(r_25), q_25), n_25);
  return(t);
}
ATerm Signature_1_0 (ATerm g_67 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  y_25 = t;
  if(match_cons(t, sym_Signature_1))
    {
      w_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_25);
  v_25 = t;
  t = w_25;
  t = g_67(t);
  x_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, x_25), v_25);
  return(t);
}
ATerm Specification_1_0 (ATerm k_67 (ATerm), ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
  e_26 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_26);
  b_26 = t;
  t = c_26;
  t = k_67(t);
  d_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, d_26), b_26);
  return(t);
}
ATerm _2_0 (ATerm q_65 (ATerm), ATerm r_65 (ATerm), ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
  m_26 = t;
  if(match_cons(t, sym__2))
    {
      i_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_26);
  h_26 = t;
  t = i_26;
  t = q_65(t);
  k_26 = t;
  t = j_26;
  t = r_65(t);
  l_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, k_26, l_26), h_26);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  p_26 = t;
  t = term_w_16;
  t = whoami_0_0(t);
  q_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), q_26), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = p_26;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      {
        ATerm t_26 = NULL,u_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_26 = ATgetFirst((ATermList) t);
            u_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_26;
        {
          ATerm q_5 (ATerm t)
          {
            t = u_26;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(q_5, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL;
  y_26 = t;
  t = SSL_explode_term(y_26);
  if(match_cons(t, sym__2))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_26;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm r_88 (ATerm), ATerm t)
{
  ATerm a_27 (ATerm t)
  {
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, a_27, t);
        ;
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_88(t);
      }
    return(t);
  }
  t = a_27(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  if(match_cons(t, sym__2))
    {
      c_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_27;
  {
    ATerm r_5 (ATerm t)
    {
      t = b_27;
      return(t);
    }
    t = at_end_1_0(r_5, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = c_21;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm d_27 = NULL;
  ATerm s_5 (ATerm t)
  {
    ATerm e_27 = NULL;
    e_27 = t;
    t = SSL_explode_string(e_27);
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    ATerm f_27 = NULL;
    f_27 = t;
    t = SSL_explode_string(f_27);
    return(t);
  }
  t = _2_0(s_5, u_5, t);
  t = conc_0_0(t);
  d_27 = t;
  t = SSL_implode_string(d_27);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_27 = NULL;
      l_27 = t;
      t = SSL_is_string(l_27);
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm t_21 = t;
        int r_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_5 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(v_5, t);
            ;
            LocalPopChoice(r_22);
          }
        else
          {
            t = t_21;
            {
              ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
              p_27 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_27 = ATgetArgument(t, 0);
                  t = q_27;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_27 = ATgetArgument(t, 0);
                      t = q_27;
                      {
                        ATerm s_22 = t;
                        int t_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(t_22);
                          }
                        else
                          {
                            t = s_22;
                            {
                              ATerm w_5 (ATerm t)
                              {
                                t = term_w_22;
                                return(t);
                              }
                              t = debug_1_0(w_5, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm g_28 = NULL,j_28 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_27 = ATgetArgument(t, 0);
                          r_27 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_27;
                      t = eval_config_0_0(t);
                      g_28 = t;
                      t = r_27;
                      t = eval_config_0_0(t);
                      j_28 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_28, j_28);
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
  ATerm w_28 = NULL;
  w_28 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_28);
  {
    ATerm x_5 (ATerm t)
    {
      ATerm b_29 = NULL;
      t = eval_config_0_0(t);
      b_29 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_28, b_29);
      t = b_29;
      return(t);
    }
    t = try_1_0(x_5, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_101 (ATerm), ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm c_29 = NULL,d_29 = NULL;
    c_29 = t;
    t = term_x_22;
    t = get_config_0_0(t);
    d_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_29, term_y_22);
    t = geq_0_0(t);
    t = c_29;
    t = u_101(t);
    return(t);
  }
  t = try_1_0(y_5, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm z_22 = ATgetArgument(t, 0);
        if(match_cons(z_22, sym_Stream_1))
          {
            h_29 = ATgetArgument(z_22, 0);
          }
        else
          _fail(t);
        i_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(h_29, i_29);
    j_29 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), j_29);
    k_29 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, k_29);
    return(t);
  }
  t = WriteToFile_1_0(z_5, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm q_100 (ATerm), ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,r_29 = NULL;
  if(match_cons(t, sym__2))
    {
      l_29 = ATgetArgument(t, 0);
      m_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_29, term_a_23);
  t = open_stream_0_0(t);
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_29, m_29);
  t = q_100(t);
  t = fclose_0_0(t);
  t = m_29;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm s_29 = NULL,t_29 = NULL,w_29 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm b_23 = ATgetArgument(t, 0);
        if(match_cons(b_23, sym_Stream_1))
          {
            s_29 = ATgetArgument(b_23, 0);
          }
        else
          _fail(t);
        t_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(s_29, t_29);
    w_29 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, w_29);
    return(t);
  }
  t = WriteToFile_1_0(a_6, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL;
  x_29 = t;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm c_23 = t;
      int d_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_6 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                y_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(c_6, t);
          ;
          LocalPopChoice(d_23);
        }
      else
        {
          t = c_23;
          t = term_e_23;
          y_29 = t;
        }
      return(t);
    }
    t = _2_0(b_6, _id, t);
    t = x_29;
    {
      ATerm d_6 (ATerm t)
      {
        ATerm e_6 (ATerm t)
        {
          t = not_null(y_29);
          return(t);
        }
        t = split_2_0(e_6, _id, t);
        return(t);
      }
      t = _2_0(_id, d_6, t);
      {
        ATerm f_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_6 (ATerm t)
            {
              ATerm g_6 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(g_6, t);
              return(t);
            }
            t = _2_0(f_6, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(g_23);
          }
        else
          {
            t = f_23;
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
ATerm apply_strategy_1_0 (ATerm s_103 (ATerm), ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
  z_29 = t;
  t = dtime_0_0(t);
  t = z_29;
  t = s_103(t);
  a_30 = t;
  t = dtime_0_0(t);
  b_30 = t;
  t = a_30;
  if(match_cons(t, sym__2))
    {
      c_30 = ATgetArgument(t, 0);
      d_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_30), (ATerm) ATmakeAppl(sym_Runtime_1, b_30)), d_30);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_30 (ATerm l_30, ATerm t)
  {
    t = SSL_fclose(l_30);
    return(t);
  }
  ATerm o_30 = NULL,p_30 = NULL;
  p_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_30 = ATgetArgument(t, 0);
      {
        ATerm i_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_30);
            ;
            LocalPopChoice(j_23);
          }
        else
          {
            t = i_23;
            t = r_30(p_30, t);
          }
      }
    }
  else
    {
      t = r_30(p_30, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm c_100 (ATerm), ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  s_30 = t;
  t = c_100(t);
  t_30 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_30), t_30));
  t = s_30;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_30 = NULL;
  t = SSL_stdin_stream();
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_30);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_30 = NULL;
  t = SSL_stdout_stream();
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_30);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_30 = NULL;
  t = SSL_stderr_stream();
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_30);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm y_30 = NULL;
  y_30 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_30;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_30;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_30;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_23 = ATgetArgument(t, 0);
      ATerm l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_3 = NULL,p_3 = NULL;
        o_3 = t;
        t = SSL_explode_term(o_3);
        if(match_cons(t, sym__2))
          {
            ATerm t_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_23 = ATgetArgument(t, 1);
              if(((ATgetType(u_23) == AT_LIST) && !(ATisEmpty(u_23))))
                {
                  p_3 = ATgetFirst((ATermList) u_23);
                  {
                    ATerm v_23 = (ATerm) ATgetNext((ATermList) u_23);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = p_3;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          ATerm y_23 = t;
          int z_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_31 = NULL,h_31 = NULL,i_31 = NULL;
              ATerm h_6 (ATerm t)
              {
                ATerm j_31 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    j_31 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = j_31;
                return(t);
              }
              t = _2_0(h_6, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_31 = ATgetArgument(t, 0);
                  h_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(b_31, h_31);
              i_31 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, i_31);
              ;
              LocalPopChoice(z_23);
            }
          else
            {
              t = y_23;
              {
                ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
                ATerm i_6 (ATerm t)
                {
                  ATerm n_31 = NULL;
                  n_31 = t;
                  t = SSL_is_string(n_31);
                  return(t);
                }
                t = _2_0(i_6, _id, t);
                if(match_cons(t, sym__2))
                  {
                    k_31 = ATgetArgument(t, 0);
                    l_31 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(k_31, l_31);
                m_31 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, m_31);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_31 = NULL;
      r_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_31, term_c_24);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm j_6 (ATerm t)
        {
          t = term_d_24;
          return(t);
        }
        t = debug_1_0(j_6, t);
        _fail(t);
      }
    }
  o_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(q_31);
  p_31 = t;
  t = o_31;
  t = fclose_0_0(t);
  t = p_31;
  return(t);
}
ATerm split_2_0 (ATerm r_95 (ATerm), ATerm s_95 (ATerm), ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,x_31 = NULL;
  t_31 = t;
  t = r_95(t);
  u_31 = t;
  t = t_31;
  t = s_95(t);
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_31, x_31);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  y_31 = t;
  {
    ATerm e_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_6 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              z_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(n_6, t);
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = e_24;
        t = term_h_24;
        z_31 = t;
      }
    t = y_31;
    {
      ATerm o_6 (ATerm t)
      {
        t = not_null(z_31);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, o_6, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    ATerm b_32 = NULL;
    b_32 = t;
    if(match_string(t, "-k"))
      {
        t = b_32;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = b_32;
      }
    return(t);
  }
  ATerm q_6 (ATerm t)
  {
    ATerm c_32 = NULL,d_32 = NULL;
    c_32 = t;
    t = SSL_string_to_int(c_32);
    d_32 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), d_32);
    t = c_32;
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    t = term_i_24;
    return(t);
  }
  t = ArgOption_3_0(p_6, q_6, r_6, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_6 (ATerm t)
      {
        ATerm f_32 = NULL;
        f_32 = t;
        if(match_string(t, "-S"))
          {
            t = f_32;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = f_32;
          }
        return(t);
      }
      ATerm t_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_p_24;
        return(t);
      }
      ATerm u_6 (ATerm t)
      {
        t = term_q_24;
        return(t);
      }
      t = Option_3_0(s_6, t_6, u_6, t);
      ;
      LocalPopChoice(n_24);
    }
  else
    {
      t = j_24;
      {
        ATerm r_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_6 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm w_6 (ATerm t)
            {
              ATerm g_32 = NULL,h_32 = NULL;
              g_32 = t;
              t = SSL_string_to_int(g_32);
              h_32 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_32);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, g_32);
              return(t);
            }
            ATerm x_6 (ATerm t)
            {
              t = term_y_24;
              return(t);
            }
            t = ArgOption_3_0(v_6, w_6, x_6, t);
            ;
            LocalPopChoice(x_24);
          }
        else
          {
            t = r_24;
            {
              ATerm z_6 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm a_7 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_c_25;
                return(t);
              }
              ATerm b_7 (ATerm t)
              {
                t = term_d_25;
                return(t);
              }
              t = Option_3_0(z_6, a_7, b_7, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    ATerm j_32 = NULL;
    j_32 = t;
    if(match_string(t, "-o"))
      {
        t = j_32;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = j_32;
      }
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    ATerm k_32 = NULL;
    k_32 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), k_32);
    t = (ATerm) ATmakeAppl(sym_Output_1, k_32);
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = term_l_25;
    return(t);
  }
  t = ArgOption_3_0(c_7, e_7, f_7, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm m_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = m_25;
      {
        ATerm g_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm h_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_u_25;
          return(t);
        }
        ATerm i_7 (ATerm t)
        {
          t = term_z_25;
          return(t);
        }
        t = Option_3_0(g_7, h_7, i_7, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  n_32 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = n_32;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm v_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_32 = ATgetFirst((ATermList) t);
          p_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_32 = ATgetFirst((ATermList) t);
          r_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_32;
      t = f_0(t);
      t = q_32;
      t = h_0(t);
      v_32 = t;
      t = (ATerm) ATinsert(CheckATermList(r_32), v_32);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm j_7 (ATerm t)
  {
    ATerm x_32 = NULL;
    x_32 = t;
    if(match_string(t, "-i"))
      {
        t = x_32;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = x_32;
      }
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    ATerm y_32 = NULL;
    y_32 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), y_32);
    t = (ATerm) ATmakeAppl(sym_Input_1, y_32);
    return(t);
  }
  ATerm m_7 (ATerm t)
  {
    t = term_a_26;
    return(t);
  }
  t = ArgOption_3_0(j_7, l_7, m_7, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_16;
  t = whoami_0_0(t);
  z_32 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), z_32));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm t)
{
  ATerm s_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_94(t);
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = s_26;
      {
        ATerm c_33 = NULL,d_33 = NULL,g_33 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_33 = ATgetFirst((ATermList) t);
            d_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_33;
        t = foldr_2_0(c_94, d_94, t);
        g_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_33, g_33);
        t = d_94(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL;
  h_33 = t;
  t = SSL_explode_term(h_33);
  if(match_cons(t, sym__2))
    {
      ATerm w_26 = ATgetArgument(t, 0);
      i_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_33;
  t = foldr_2_0(v_97, w_97, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_33 = NULL;
  t = times_0_0(t);
  {
    ATerm n_7 (ATerm t)
    {
      t = term_o_24;
      return(t);
    }
    ATerm o_7 (ATerm t)
    {
      ATerm k_33 = NULL,l_33 = NULL;
      if(match_cons(t, sym__2))
        {
          k_33 = ATgetArgument(t, 0);
          l_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm x_26 = t;
        int g_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(k_33, l_33);
            ;
            LocalPopChoice(g_27);
          }
        else
          {
            t = x_26;
            t = SSL_addr(k_33, l_33);
          }
      }
      return(t);
    }
    t = crush_2_0(n_7, o_7, t);
    j_33 = t;
    t = SSL_TicksToSeconds(j_33);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
  u_33 = t;
  if(match_cons(t, sym__2))
    {
      v_33 = ATgetArgument(t, 0);
      w_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_33;
        if((v_33 != t))
          {
            _fail(t);
          }
        t = u_33;
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = u_33;
        {
          ATerm j_27 = t;
          int k_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_33, w_33);
              ;
              LocalPopChoice(k_27);
            }
          else
            {
              t = j_27;
              t = SSL_gtr(v_33, w_33);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_33, w_33);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_101 (ATerm), ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    ATerm z_33 = NULL,a_34 = NULL;
    z_33 = t;
    t = term_x_22;
    t = get_config_0_0(t);
    a_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_34, term_m_27);
    t = geq_0_0(t);
    t = z_33;
    t = t_101(t);
    return(t);
  }
  t = try_1_0(p_7, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm q_7 (ATerm t)
  {
    ATerm c_34 = NULL,d_34 = NULL;
    t = run_time_0_0(t);
    c_34 = t;
    t = term_w_16;
    t = whoami_0_0(t);
    d_34 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), c_34), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), d_34));
    t = (ATerm) ATmakeAppl(sym__2, term_n_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_27), c_34), term_o_27), d_34));
    return(t);
  }
  t = if_verbose1_1_0(q_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm q_104 (ATerm), ATerm t)
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_27);
    }
  else
    {
      t = t_27;
      {
        ATerm r_7 (ATerm t)
        {
          ATerm w_27 = t;
          int x_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(x_27);
            }
          else
            {
              t = w_27;
              {
                ATerm y_27 = t;
                int z_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(z_27);
                  }
                else
                  {
                    t = y_27;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(r_7, t);
      }
    }
  t = q_104(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_34 = ATgetFirst((ATermList) t);
      h_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_34 = NULL,m_34 = NULL;
        t = h_34;
        t = e_0(t);
        l_34 = t;
        t = g_34;
        t = d_0(t);
        m_34 = t;
        t = h_34;
        {
          ATerm s_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(l_34), m_34);
            return(t);
          }
          t = reverse_acc_2_0(d_0, s_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_16;
      t = e_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, t_7, t);
  return(t);
}
ATerm Program_1_0 (ATerm t_79 (ATerm), ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  q_34 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_34);
  n_34 = t;
  t = o_34;
  t = t_79(t);
  p_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, p_34), n_34);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      {
        ATerm v_7 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(v_7, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_c_28;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm w_7 (ATerm t)
    {
      ATerm t_34 = NULL;
      t_34 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, t_34), term_d_28);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(w_7, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
  x_34 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      v_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_34);
  u_34 = t;
  t = v_34;
  t = u_79(t);
  w_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, w_34), u_34);
  return(t);
}
ATerm fetch_1_0 (ATerm l_88 (ATerm), ATerm t)
{
  ATerm a_35 (ATerm t)
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(l_88, _id, t);
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        t = Cons_2_0(_id, a_35, t);
      }
    return(t);
  }
  t = a_35(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  t = fetch_1_0(q_105, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL;
  c_35 = t;
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_28 = ATgetFirst((ATermList) t);
                ATerm l_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_35;
          }
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = (ATerm) ATinsert(ATempty, c_35);
      }
    d_35 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), d_35);
    t = c_35;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm p_80 (ATerm), ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_80(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_7 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm y_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_s_28;
        return(t);
      }
      ATerm z_7 (ATerm t)
      {
        t = term_t_28;
        return(t);
      }
      t = Option_3_0(x_7, y_7, z_7, t);
      ;
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      {
        ATerm a_8 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm b_8 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_u_28;
          return(t);
        }
        ATerm c_8 (ATerm t)
        {
          t = term_v_28;
          return(t);
        }
        t = Option_3_0(a_8, b_8, c_8, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL;
  if(match_cons(t, sym__3))
    {
      j_35 = ATgetArgument(t, 0);
      k_35 = ATgetArgument(t, 1);
      l_35 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_35, k_35);
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_28 = ATgetArgument(t, 0);
            ATerm a_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_35, k_35);
        ;
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = (ATerm) ATempty;
      }
    m_35 = t;
    t = SSL_table_put(j_35, k_35, (ATerm) ATinsert(CheckATermList(m_35), l_35));
    t = (ATerm) ATmakeAppl(sym__3, j_35, k_35, l_35);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm v_106 (ATerm), ATerm t)
{
  ATerm r_35 = NULL;
  t = term_w_16;
  t = v_106(t);
  r_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_29, term_f_29, r_35);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
  t_35 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = t_35;
      t = register_usage_1_0(c_0, t);
    }
  else
    {
      ATerm y_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_35 = ATgetFirst((ATermList) t);
          v_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_35;
      t = a_0(t);
      t = term_w_16;
      t = b_0(t);
      y_35 = t;
      t = (ATerm) ATinsert(CheckATermList(v_35), y_35);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm d_8 (ATerm t)
  {
    ATerm a_36 = NULL;
    a_36 = t;
    if(match_string(t, "--help"))
      {
        t = a_36;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = a_36;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = a_36;
          }
      }
    return(t);
  }
  ATerm e_8 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_g_29;
    return(t);
  }
  ATerm f_8 (ATerm t)
  {
    t = term_n_29;
    return(t);
  }
  t = Option_3_0(d_8, e_8, f_8, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_106 (ATerm), ATerm t)
{
  ATerm e_36 = NULL;
  e_36 = t;
  {
    ATerm g_8 (ATerm t)
    {
      t = term_o_29;
      t = t_106(t);
      return(t);
    }
    t = try_1_0(g_8, t);
    t = e_36;
    {
      ATerm i_8 (ATerm t)
      {
        ATerm f_36 = NULL;
        f_36 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_36);
        t = (ATerm) ATmakeAppl(sym_Program_1, f_36);
        return(t);
      }
      ATerm j_8 (ATerm t)
      {
        ATerm p_29 = t;
        int q_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_29 = t;
            int v_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(v_29);
              }
            else
              {
                t = u_29;
                t = t_106(t);
                t = Cons_2_0(_id, j_8, t);
              }
            ;
            LocalPopChoice(q_29);
          }
        else
          {
            t = p_29;
            {
              ATerm h_36 = NULL,i_36 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_36 = ATgetFirst((ATermList) t);
                  i_36 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_36), (ATerm) ATmakeAppl(sym_Undefined_1, h_36));
            }
          }
        return(t);
      }
      t = Cons_2_0(i_8, j_8, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm s_106 (ATerm), ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
  o_36 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = o_36;
  {
    ATerm k_8 (ATerm t)
    {
      ATerm e_30 = t;
      int f_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_106(t);
          ;
          LocalPopChoice(f_30);
        }
      else
        {
          t = e_30;
          {
            ATerm g_30 = t;
            int h_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(h_30);
              }
            else
              {
                t = g_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_8, t);
    {
      ATerm l_8 (ATerm t)
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_36 = NULL;
            v_36 = t;
            {
              ATerm k_30 = t;
              int m_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_36;
                  {
                    ATerm n_30 = t;
                    int q_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_v_27;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(q_30);
                      }
                    else
                      {
                        t = n_30;
                        {
                          ATerm n_8 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(n_8, t);
                        }
                      }
                    t = v_36;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(m_30);
                }
              else
                {
                  t = k_30;
                  t = term_r_28;
                  t = get_config_0_0(t);
                  t = v_36;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
            {
              ATerm o_8 (ATerm t)
              {
                ATerm p_8 (ATerm t)
                {
                  p_36 = t;
                  return(t);
                }
                t = Undefined_1_0(p_8, t);
                return(t);
              }
              t = option_defined_1_0(o_8, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_36)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_n_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_36)), term_x_30));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(l_8, t);
      q_36 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = q_36;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm t)
{
  ATerm k_7 = NULL;
  t = parse_options_1_0(s_104, t);
  k_7 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), k_7);
  t = k_7;
  t = u_104(t);
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_104, t);
        ;
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        {
          ATerm c_31 = t;
          int d_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_104(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_31);
            }
          else
            {
              t = c_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm t)
{
  ATerm q_8 (ATerm t)
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_104(t);
        ;
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm s_8 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(h_104, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(q_8, j_104, k_104, s_8, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    ATerm u_8 (ATerm t)
    {
      ATerm y_36 = NULL,z_36 = NULL;
      y_36 = t;
      t = term_r_26;
      t = get_config_0_0(t);
      z_36 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, z_36));
      t = y_36;
      return(t);
    }
    t = if_verbose2_1_0(u_8, t);
    return(t);
  }
  t = iowrap_4_0(b_104, c_104, d_104, t_8, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm t)
{
  t = iowrap_3_0(z_103, a_104, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm w_103 (ATerm), ATerm t)
{
  ATerm v_8 (ATerm t)
  {
    t = _2_0(_id, w_103, t);
    return(t);
  }
  t = iowrap_2_0(v_8, _fail, t);
  return(t);
}
ATerm const_prop_io_0_0 (ATerm t)
{
  ATerm w_8 (ATerm t)
  {
    ATerm x_8 (ATerm t)
    {
      ATerm y_8 (ATerm t)
      {
        t = Signature_1_0(_id, t);
        return(t);
      }
      ATerm d_9 (ATerm t)
      {
        ATerm e_9 (ATerm t)
        {
          ATerm j_9 (ATerm t)
          {
            t = map_1_0(const_prop_0_0, t);
            return(t);
          }
          t = Strategies_1_0(j_9, t);
          return(t);
        }
        ATerm h_9 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(e_9, h_9, t);
        return(t);
      }
      t = Cons_2_0(y_8, d_9, t);
      return(t);
    }
    t = Specification_1_0(x_8, t);
    return(t);
  }
  t = iowrap_1_0(w_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = const_prop_io_0_0(t);
  return(t);
}
