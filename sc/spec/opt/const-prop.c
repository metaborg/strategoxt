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
ATerm term_f_29;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_v_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_x_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_f_20;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_f_17;
ATerm term_y_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_a_14;
ATerm term_f_12;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_w_9;
ATerm term_j_8;
ATerm term_g_8;
void init_constant_terms (void)
{
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_j_8);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_23);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__3, term_o_27, term_p_27, term_a_14);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm SDefT_4_0 (ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm);
ATerm prop_sdef_1_0 (ATerm l_81 (ATerm), ATerm);
ATerm Not_1_0 (ATerm p_73 (ATerm), ATerm);
ATerm prop_not_1_0 (ATerm j_81 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm);
ATerm prop_rec_1_0 (ATerm i_81 (ATerm), ATerm);
ATerm Let_2_0 (ATerm q_72 (ATerm), ATerm r_72 (ATerm), ATerm);
ATerm prop_let_1_0 (ATerm m_81 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm m_73 (ATerm), ATerm);
ATerm isect_CurrentTerm_0_0 (ATerm);
ATerm isect_Binding_0_0 (ATerm);
ATerm restore_CurrentTerm_0_0 (ATerm);
ATerm save_CurrentTerm_0_0 (ATerm);
ATerm prop_abstract_choice_2_0 (ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm g_73 (ATerm), ATerm h_73 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm e_72 (ATerm), ATerm f_72 (ATerm), ATerm);
ATerm prop_choice_1_0 (ATerm p_81 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm e_73 (ATerm), ATerm f_73 (ATerm), ATerm);
ATerm prop_seq_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm);
ATerm prop_traversal_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm restore_Binding_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_Binding_0_0 (ATerm);
ATerm exec_maybe_1_0 (ATerm c_81 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm u_72 (ATerm), ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm);
ATerm prop_call_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm UndefCurrentTerm_0_0 (ATerm);
ATerm Scope_2_0 (ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm);
ATerm prop_scope_1_0 (ATerm k_81 (ATerm), ATerm);
ATerm Build_1_0 (ATerm y_72 (ATerm), ATerm);
ATerm prop_build_0_0 (ATerm);
ATerm assert_1_0 (ATerm w_99 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm q_84 (ATerm), ATerm);
ATerm introduce_binding_0_0 (ATerm);
ATerm Var_1_0 (ATerm g_69 (ATerm), ATerm);
ATerm TermIsVarIgnore_1_0 (ATerm o_81 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm SubsVar_2_0 (ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm);
ATerm zip_1_0 (ATerm l_91 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm);
ATerm substitute_1_0 (ATerm y_107 (ATerm), ATerm);
ATerm is_subterm_0_0 (ATerm);
ATerm UfVar_1_0 (ATerm i_111 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm);
ATerm for_3_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm);
ATerm prop_pattern_match_0_0 (ATerm);
ATerm CurrentTerm_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm y_99 (ATerm), ATerm);
ATerm Binding_0_0 (ATerm);
ATerm alltd_1_0 (ATerm e_85 (ATerm), ATerm);
ATerm Match_1_0 (ATerm x_72 (ATerm), ATerm);
ATerm prop_match_0_0 (ATerm);
ATerm cp_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm t_99 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm s_99 (ATerm), ATerm);
ATerm scope_2_0 (ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm);
ATerm const_prop_0_0 (ATerm);
ATerm map_1_0 (ATerm d_89 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm i_68 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm j_68 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm n_68 (ATerm), ATerm);
ATerm _2_0 (ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm t_89 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm t_102 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm p_101 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm r_104 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm b_101 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm);
ATerm crush_2_0 (ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_102 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm p_105 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm w_80 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm x_80 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm n_89 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm p_106 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm s_81 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm u_107 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm s_107 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm r_107 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm v_104 (ATerm), ATerm);
ATerm const_prop_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm SDefT_4_0 (ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL;
  h_4 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      y_3 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
      a_4 = ATgetArgument(t, 2);
      b_4 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_4);
  x_3 = t;
  t = y_3;
  t = i_75(t);
  d_4 = t;
  t = z_3;
  t = j_75(t);
  e_4 = t;
  t = a_4;
  t = k_75(t);
  f_4 = t;
  t = b_4;
  t = l_75(t);
  g_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, d_4, e_4, f_4, g_4), x_3);
  return(t);
}
ATerm prop_sdef_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  ATerm o_4 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm d_8 = ATgetArgument(t, 0);
      ATerm e_8 = ATgetArgument(t, 1);
      o_4 = ATgetArgument(t, 2);
      {
        ATerm f_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm n_0 (ATerm t)
    {
      t = term_g_8;
      return(t);
    }
    ATerm o_0 (ATerm t)
    {
      ATerm p_4 = NULL;
      p_4 = t;
      t = o_4;
      {
        ATerm p_0 (ATerm t)
        {
          ATerm q_4 = NULL,s_4 = NULL;
          if(match_cons(t, sym_VarDec_2))
            {
              q_4 = ATgetArgument(t, 0);
              {
                ATerm i_8 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          s_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, q_4), term_j_8);
          {
            ATerm q_0 (ATerm t)
            {
              t = term_g_8;
              return(t);
            }
            t = assert_1_0(q_0, t);
            t = s_4;
          }
          return(t);
        }
        t = map_1_0(p_0, t);
        t = p_4;
        {
          ATerm r_0 (ATerm t)
          {
            t = UndefCurrentTerm_0_0(t);
            t = l_81(t);
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
ATerm Not_1_0 (ATerm p_73 (ATerm), ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
  x_4 = t;
  if(match_cons(t, sym_Not_1))
    {
      v_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_4);
  u_4 = t;
  t = v_4;
  t = p_73(t);
  w_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, w_4), u_4);
  return(t);
}
ATerm prop_not_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  if(match_cons(t, sym_Not_1))
    {
      ATerm k_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = UndefCurrentTerm_0_0(t);
  {
    ATerm s_0 (ATerm t)
    {
      t = exec_maybe_1_0(j_81, t);
      return(t);
    }
    t = Not_1_0(s_0, t);
  }
  return(t);
}
ATerm Rec_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm t)
{
  ATerm b_5 = NULL,e_5 = NULL,f_5 = NULL,m_5 = NULL,p_5 = NULL,q_5 = NULL;
  q_5 = t;
  if(match_cons(t, sym_Rec_2))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_5);
  b_5 = t;
  t = e_5;
  t = n_73(t);
  m_5 = t;
  t = f_5;
  t = o_73(t);
  p_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, m_5, p_5), b_5);
  return(t);
}
ATerm prop_rec_1_0 (ATerm i_81 (ATerm), ATerm t)
{
  if(match_cons(t, sym_Rec_2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      ATerm o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_0 (ATerm t)
    {
      t = exec_maybe_1_0(i_81, t);
      return(t);
    }
    t = Rec_2_0(_id, t_0, t);
  }
  return(t);
}
ATerm Let_2_0 (ATerm q_72 (ATerm), ATerm r_72 (ATerm), ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,g_6 = NULL,i_6 = NULL;
  i_6 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_6 = ATgetArgument(t, 0);
      d_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_6);
  b_6 = t;
  t = c_6;
  t = q_72(t);
  e_6 = t;
  t = d_6;
  t = r_72(t);
  g_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, e_6, g_6), b_6);
  return(t);
}
ATerm prop_let_1_0 (ATerm m_81 (ATerm), ATerm t)
{
  ATerm q_6 = NULL,v_6 = NULL,w_6 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm p_8 = ATgetArgument(t, 0);
      ATerm q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  q_6 = t;
  t = save_Binding_0_0(t);
  v_6 = t;
  t = save_CurrentTerm_0_0(t);
  w_6 = t;
  t = q_6;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm w_0 (ATerm t)
      {
        ATerm x_6 = NULL;
        x_6 = t;
        t = UndefCurrentTerm_0_0(t);
        t = v_6;
        t = restore_Binding_0_0(t);
        t = x_6;
        t = m_81(t);
        return(t);
      }
      t = map_1_0(w_0, t);
      return(t);
    }
    ATerm v_0 (ATerm t)
    {
      ATerm y_6 = NULL;
      y_6 = t;
      t = w_6;
      t = restore_CurrentTerm_0_0(t);
      t = v_6;
      t = restore_Binding_0_0(t);
      t = y_6;
      t = m_81(t);
      return(t);
    }
    t = Let_2_0(u_0, v_0, t);
  }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm m_73 (ATerm), ATerm t)
{
  ATerm h_8 = NULL,l_8 = NULL,m_8 = NULL,r_8 = NULL,s_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
  b_9 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      l_8 = ATgetArgument(t, 0);
      m_8 = ATgetArgument(t, 1);
      r_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_9);
  h_8 = t;
  t = l_8;
  t = k_73(t);
  s_8 = t;
  t = m_8;
  t = l_73(t);
  z_8 = t;
  t = r_8;
  t = m_73(t);
  a_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, s_8, z_8, a_9), h_8);
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm z_0 (ATerm t)
    {
      ATerm s_11 (ATerm z_9, ATerm a_10, ATerm e_10, ATerm t)
      {
        t = e_10;
        {
          ATerm t_8 = t;
          int u_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)), z_9);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm v_8 = ATgetFirst((ATermList) t);
                  if(match_cons(v_8, sym_Defined_2))
                    {
                      ATerm x_8 = ATgetArgument(v_8, 0);
                      if((a_10 != ATgetArgument(v_8, 1)))
                        {
                          _fail(ATgetArgument(v_8, 1));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm w_8 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = e_10;
              ;
              LocalPopChoice(u_8);
            }
          else
            {
              t = t_8;
              t = (ATerm) ATmakeAppl(sym__2, z_9, (ATerm) ATinsert(ATempty, term_j_8));
            }
        }
        return(t);
      }
      ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,p_11 = NULL;
      z_10 = t;
      if(match_cons(t, sym__2))
        {
          a_11 = ATgetArgument(t, 0);
          b_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_11;
      {
        ATerm y_8 = t;
        int c_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_11 = ATgetFirst((ATermList) t);
                {
                  ATerm d_9 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(c_9);
            t = c_11;
            {
              ATerm e_9 = t;
              int f_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm g_9 = ATgetArgument(t, 0);
                      p_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(f_9);
                  t = a_11;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm h_9 = t;
                      int i_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_10;
                          ;
                          LocalPopChoice(i_9);
                        }
                      else
                        {
                          t = h_9;
                          t = s_11(a_11, p_11, z_10, t);
                        }
                    }
                  else
                    {
                      t = s_11(a_11, p_11, z_10, t);
                    }
                }
              else
                {
                  t = e_9;
                  t = a_11;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = z_10;
                }
            }
          }
        else
          {
            t = y_8;
            t = a_11;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = z_10;
          }
      }
      return(t);
    }
    t = try_1_0(z_0, t);
    return(t);
  }
  t = map_1_0(y_0, t);
  t = restore_CurrentTerm_0_0(t);
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm c_1 (ATerm t)
    {
      ATerm a_15 (ATerm j_13, ATerm k_13, ATerm m_13, ATerm t)
      {
        t = m_13;
        {
          ATerm j_9 = t;
          int k_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)), j_13);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm l_9 = ATgetFirst((ATermList) t);
                  if(match_cons(l_9, sym_Defined_2))
                    {
                      ATerm n_9 = ATgetArgument(l_9, 0);
                      if((k_13 != ATgetArgument(l_9, 1)))
                        {
                          _fail(ATgetArgument(l_9, 1));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm m_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = m_13;
              ;
              LocalPopChoice(k_9);
            }
          else
            {
              t = j_9;
              t = (ATerm) ATmakeAppl(sym__2, j_13, (ATerm) ATinsert(ATempty, term_j_8));
            }
        }
        return(t);
      }
      ATerm i_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,u_14 = NULL;
      i_14 = t;
      if(match_cons(t, sym__2))
        {
          n_14 = ATgetArgument(t, 0);
          o_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_14;
      {
        ATerm o_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_14 = ATgetFirst((ATermList) t);
                {
                  ATerm q_9 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(p_9);
            t = p_14;
            {
              ATerm r_9 = t;
              int s_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm t_9 = ATgetArgument(t, 0);
                      u_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(s_9);
                  t = n_14;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm u_9 = t;
                      int v_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = i_14;
                          ;
                          LocalPopChoice(v_9);
                        }
                      else
                        {
                          t = u_9;
                          t = a_15(n_14, u_14, i_14, t);
                        }
                    }
                  else
                    {
                      t = a_15(n_14, u_14, i_14, t);
                    }
                }
              else
                {
                  t = r_9;
                  t = n_14;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = i_14;
                }
            }
          }
        else
          {
            t = o_9;
            t = n_14;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = i_14;
          }
      }
      return(t);
    }
    t = try_1_0(c_1, t);
    return(t);
  }
  t = map_1_0(b_1, t);
  t = restore_Binding_0_0(t);
  return(t);
}
ATerm restore_CurrentTerm_0_0 (ATerm t)
{
  ATerm c_15 = NULL;
  c_15 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_w_9, c_15);
  t = table_putlist_0_0(t);
  t = c_15;
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = term_w_9;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,t_15 = NULL;
  f_15 = t;
  t = save_Binding_0_0(t);
  g_15 = t;
  t = save_CurrentTerm_0_0(t);
  l_15 = t;
  t = f_15;
  t = q_81(t);
  m_15 = t;
  t = save_Binding_0_0(t);
  n_15 = t;
  t = g_15;
  t = restore_Binding_0_0(t);
  t = save_CurrentTerm_0_0(t);
  o_15 = t;
  t = l_15;
  t = restore_CurrentTerm_0_0(t);
  t = m_15;
  t = r_81(t);
  t_15 = t;
  t = n_15;
  t = isect_Binding_0_0(t);
  t = o_15;
  t = isect_CurrentTerm_0_0(t);
  t = t_15;
  return(t);
}
ATerm LChoice_2_0 (ATerm g_73 (ATerm), ATerm h_73 (ATerm), ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
  h_16 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      v_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_16);
  u_15 = t;
  t = v_15;
  t = g_73(t);
  f_16 = t;
  t = w_15;
  t = h_73(t);
  g_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, f_16, g_16), u_15);
  return(t);
}
ATerm GChoice_2_0 (ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  u_16 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      q_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_16);
  p_16 = t;
  t = q_16;
  t = i_72(t);
  s_16 = t;
  t = r_16;
  t = j_72(t);
  t_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, s_16, t_16), p_16);
  return(t);
}
ATerm Choice_2_0 (ATerm e_72 (ATerm), ATerm f_72 (ATerm), ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  d_17 = t;
  if(match_cons(t, sym_Choice_2))
    {
      z_16 = ATgetArgument(t, 0);
      a_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_17);
  y_16 = t;
  t = z_16;
  t = e_72(t);
  b_17 = t;
  t = a_17;
  t = f_72(t);
  c_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, b_17, c_17), y_16);
  return(t);
}
ATerm prop_choice_1_0 (ATerm p_81 (ATerm), ATerm t)
{
  ATerm i_17 = NULL;
  i_17 = t;
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm b_10 = ATgetArgument(t, 0);
            ATerm c_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(y_9);
        t = i_17;
        {
          ATerm d_1 (ATerm t)
          {
            t = Choice_2_0(p_81, _id, t);
            return(t);
          }
          ATerm e_1 (ATerm t)
          {
            t = Choice_2_0(_id, p_81, t);
            return(t);
          }
          t = prop_abstract_choice_2_0(d_1, e_1, t);
        }
      }
    else
      {
        t = x_9;
        {
          ATerm d_10 = t;
          int f_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm g_10 = ATgetArgument(t, 0);
                  ATerm h_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(f_10);
              t = i_17;
              {
                ATerm f_1 (ATerm t)
                {
                  t = GChoice_2_0(p_81, _id, t);
                  return(t);
                }
                ATerm g_1 (ATerm t)
                {
                  t = GChoice_2_0(_id, p_81, t);
                  return(t);
                }
                t = prop_abstract_choice_2_0(f_1, g_1, t);
              }
            }
          else
            {
              t = d_10;
              {
                ATerm i_10 = t;
                int j_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm k_10 = ATgetArgument(t, 0);
                        ATerm l_10 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(j_10);
                    t = i_17;
                    {
                      ATerm h_1 (ATerm t)
                      {
                        t = LChoice_2_0(p_81, _id, t);
                        return(t);
                      }
                      ATerm i_1 (ATerm t)
                      {
                        t = LChoice_2_0(_id, p_81, t);
                        return(t);
                      }
                      t = prop_abstract_choice_2_0(h_1, i_1, t);
                    }
                  }
                else
                  {
                    t = i_10;
                    if(match_cons(t, sym_GuardedLChoice_3))
                      {
                        ATerm m_10 = ATgetArgument(t, 0);
                        ATerm n_10 = ATgetArgument(t, 1);
                        ATerm o_10 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = i_17;
                    {
                      ATerm k_1 (ATerm t)
                      {
                        t = GuardedLChoice_3_0(p_81, _id, _id, t);
                        t = GuardedLChoice_3_0(_id, p_81, _id, t);
                        return(t);
                      }
                      ATerm l_1 (ATerm t)
                      {
                        t = GuardedLChoice_3_0(_id, _id, p_81, t);
                        return(t);
                      }
                      t = prop_abstract_choice_2_0(k_1, l_1, t);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Seq_2_0 (ATerm e_73 (ATerm), ATerm f_73 (ATerm), ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
  r_17 = t;
  if(match_cons(t, sym_Seq_2))
    {
      n_17 = ATgetArgument(t, 0);
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_17);
  m_17 = t;
  t = n_17;
  t = e_73(t);
  p_17 = t;
  t = o_17;
  t = f_73(t);
  q_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, p_17, q_17), m_17);
  return(t);
}
ATerm prop_seq_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  t = Seq_2_0(d_81, d_81, t);
  return(t);
}
ATerm Cong_2_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  a_18 = t;
  if(match_cons(t, sym_Cong_2))
    {
      w_17 = ATgetArgument(t, 0);
      x_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_18);
  v_17 = t;
  t = w_17;
  t = m_67(t);
  y_17 = t;
  t = x_17;
  t = n_67(t);
  z_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, y_17, z_17), v_17);
  return(t);
}
ATerm prop_traversal_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_18 = NULL;
      g_18 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm r_10 = ATgetArgument(t, 0);
          ATerm s_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_18;
      t = UndefCurrentTerm_0_0(t);
      {
        ATerm m_1 (ATerm t)
        {
          ATerm o_1 (ATerm t)
          {
            t = exec_maybe_1_0(m_0, t);
            return(t);
          }
          t = map_1_0(o_1, t);
          return(t);
        }
        t = Cong_2_0(_id, m_1, t);
      }
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm v_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            ;
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            {
              ATerm j_18 = NULL;
              j_18 = t;
              {
                ATerm w_10 = t;
                int x_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_One_1))
                      {
                        ATerm y_10 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(x_10);
                    t = j_18;
                  }
                else
                  {
                    t = w_10;
                    {
                      ATerm d_11 = t;
                      int e_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm f_11 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(e_11);
                          t = j_18;
                        }
                      else
                        {
                          t = d_11;
                          {
                            ATerm g_11 = t;
                            int h_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm i_11 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(h_11);
                                t = j_18;
                              }
                            else
                              {
                                t = g_11;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm j_11 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = j_18;
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
          ATerm p_1 (ATerm t)
          {
            t = exec_maybe_1_0(m_0, t);
            return(t);
          }
          t = SRTS_one(p_1, t);
        }
      }
    }
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL;
  if(match_cons(t, sym__2))
    {
      m_18 = ATgetArgument(t, 0);
      l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_18;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm n_18 = NULL,o_18 = NULL;
      if(match_cons(t, sym__2))
        {
          n_18 = ATgetArgument(t, 0);
          o_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(m_18, n_18, o_18);
      t = (ATerm) ATmakeAppl(sym__3, m_18, n_18, o_18);
      return(t);
    }
    t = map_1_0(q_1, t);
  }
  return(t);
}
ATerm restore_Binding_0_0 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue)));
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, p_18);
  t = table_putlist_0_0(t);
  t = p_18;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_18 = NULL;
  q_18 = t;
  t = SSL_table_keys(q_18);
  {
    ATerm r_1 (ATerm t)
    {
      ATerm r_18 = NULL,s_18 = NULL;
      r_18 = t;
      t = SSL_table_get(q_18, r_18);
      s_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_18, s_18);
      return(t);
    }
    t = map_1_0(r_1, t);
  }
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = term_g_8;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm exec_maybe_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  t = UndefCurrentTerm_0_0(t);
  t = save_Binding_0_0(t);
  u_18 = t;
  t = t_18;
  t = c_81(t);
  v_18 = t;
  t = UndefCurrentTerm_0_0(t);
  t = u_18;
  t = restore_Binding_0_0(t);
  t = v_18;
  return(t);
}
ATerm CallT_3_0 (ATerm u_72 (ATerm), ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
  d_19 = t;
  if(match_cons(t, sym_CallT_3))
    {
      x_18 = ATgetArgument(t, 0);
      y_18 = ATgetArgument(t, 1);
      z_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_19);
  w_18 = t;
  t = x_18;
  t = u_72(t);
  a_19 = t;
  t = y_18;
  t = v_72(t);
  b_19 = t;
  t = z_18;
  t = w_72(t);
  c_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, a_19, b_19, c_19), w_18);
  return(t);
}
ATerm PrimT_3_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
  o_19 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      i_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
      k_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_19);
  h_19 = t;
  t = i_19;
  t = w_73(t);
  l_19 = t;
  t = j_19;
  t = x_73(t);
  m_19 = t;
  t = k_19;
  t = y_73(t);
  n_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, l_19, m_19, n_19), h_19);
  return(t);
}
ATerm prop_call_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm t_19 = NULL;
  t_19 = t;
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm m_11 = ATgetArgument(t, 0);
            ATerm n_11 = ATgetArgument(t, 1);
            ATerm o_11 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(l_11);
        t = t_19;
        t = UndefCurrentTerm_0_0(t);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm u_1 (ATerm t)
            {
              t = exec_maybe_1_0(l_0, t);
              return(t);
            }
            t = map_1_0(u_1, t);
            return(t);
          }
          ATerm t_1 (ATerm t)
          {
            t = alltd_1_0(Binding_0_0, t);
            return(t);
          }
          t = PrimT_3_0(_id, s_1, t_1, t);
        }
      }
    else
      {
        t = k_11;
        if(match_cons(t, sym_CallT_3))
          {
            ATerm q_11 = ATgetArgument(t, 0);
            ATerm r_11 = ATgetArgument(t, 1);
            ATerm t_11 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = t_19;
        t = UndefCurrentTerm_0_0(t);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              t = exec_maybe_1_0(l_0, t);
              return(t);
            }
            t = map_1_0(x_1, t);
            return(t);
          }
          ATerm w_1 (ATerm t)
          {
            t = alltd_1_0(Binding_0_0, t);
            return(t);
          }
          t = CallT_3_0(_id, v_1, w_1, t);
        }
      }
  }
  return(t);
}
ATerm UndefCurrentTerm_0_0 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  t = term_u_11;
  {
    ATerm y_1 (ATerm t)
    {
      t = term_w_9;
      return(t);
    }
    t = assert_1_0(y_1, t);
    t = x_19;
  }
  return(t);
}
ATerm Scope_2_0 (ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
  d_20 = t;
  if(match_cons(t, sym_Scope_2))
    {
      z_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_20);
  y_19 = t;
  t = z_19;
  t = a_73(t);
  b_20 = t;
  t = a_20;
  t = b_73(t);
  c_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, b_20, c_20), y_19);
  return(t);
}
ATerm prop_scope_1_0 (ATerm k_81 (ATerm), ATerm t)
{
  ATerm h_20 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      h_20 = ATgetArgument(t, 0);
      {
        ATerm v_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm b_2 (ATerm t)
    {
      t = term_g_8;
      return(t);
    }
    ATerm c_2 (ATerm t)
    {
      ATerm i_20 = NULL,j_20 = NULL;
      i_20 = t;
      t = h_20;
      {
        ATerm d_2 (ATerm t)
        {
          ATerm k_20 = NULL;
          k_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, k_20), term_j_8);
          {
            ATerm e_2 (ATerm t)
            {
              t = term_g_8;
              return(t);
            }
            t = assert_1_0(e_2, t);
            t = k_20;
          }
          return(t);
        }
        t = map_1_0(d_2, t);
        t = i_20;
        t = Scope_2_0(_id, k_81, t);
        j_20 = t;
        {
          ATerm f_2 (ATerm t)
          {
            t = CurrentTerm_0_0(t);
            {
              ATerm g_2 (ATerm t)
              {
                ATerm l_20 = NULL;
                if(match_cons(t, sym_Var_1))
                  {
                    l_20 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = h_20;
                {
                  ATerm h_2 (ATerm t)
                  {
                    if((l_20 != t))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = fetch_1_0(h_2, t);
                }
                return(t);
              }
              t = oncetd_1_0(g_2, t);
              t = UndefCurrentTerm_0_0(t);
            }
            return(t);
          }
          t = try_1_0(f_2, t);
          t = j_20;
        }
      }
      return(t);
    }
    t = scope_2_0(b_2, c_2, t);
  }
  return(t);
}
ATerm Build_1_0 (ATerm y_72 (ATerm), ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
  p_20 = t;
  if(match_cons(t, sym_Build_1))
    {
      n_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_20);
  m_20 = t;
  t = n_20;
  t = y_72(t);
  o_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, o_20), m_20);
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm t_20 = NULL;
  ATerm i_2 (ATerm t)
  {
    t = alltd_1_0(Binding_0_0, t);
    return(t);
  }
  t = Build_1_0(i_2, t);
  if(match_cons(t, sym_Build_1))
    {
      t_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_11, t_20));
  {
    ATerm j_2 (ATerm t)
    {
      t = term_w_9;
      return(t);
    }
    t = assert_1_0(j_2, t);
    t = (ATerm) ATmakeAppl(sym_Build_1, t_20);
  }
  return(t);
}
ATerm assert_1_0 (ATerm w_99 (ATerm), ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL;
  if(match_cons(t, sym__2))
    {
      u_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_99(t);
  w_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_20, u_20, v_20);
  t = table_push_0_0(t);
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_20, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_20 = ATgetFirst((ATermList) t);
        y_20 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_20, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(y_20), (ATerm) ATinsert(CheckATermList(x_20), u_20)));
    t = (ATerm) ATmakeAppl(sym__2, u_20, v_20);
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm q_84 (ATerm), ATerm t)
{
  ATerm z_20 (ATerm t)
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_84(t);
        ;
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = SRTS_one(z_20, t);
      }
    return(t);
  }
  t = z_20(t);
  return(t);
}
ATerm introduce_binding_0_0 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_12 = ATgetArgument(t, 0);
      if(match_cons(b_12, sym_Var_1))
        {
          b_21 = ATgetArgument(b_12, 0);
        }
      else
        _fail(t);
      c_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_21;
  {
    ATerm c_12 = t;
    if((PushChoice() == 0))
      {
        ATerm k_2 (ATerm t)
        {
          ATerm d_21 = NULL;
          d_21 = t;
          if(match_cons(t, sym_Wld_0))
            {
              t = d_21;
            }
          else
            {
              if(match_cons(t, sym_As_2))
                {
                  ATerm d_12 = ATgetArgument(t, 0);
                  ATerm e_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_21;
            }
          return(t);
        }
        t = oncetd_1_0(k_2, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_12;
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, b_21), (ATerm) ATmakeAppl(sym_Defined_2, term_f_12, c_21));
    {
      ATerm l_2 (ATerm t)
      {
        t = term_g_8;
        return(t);
      }
      t = assert_1_0(l_2, t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, b_21), c_21);
    }
  }
  return(t);
}
ATerm Var_1_0 (ATerm g_69 (ATerm), ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
  j_21 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_21);
  g_21 = t;
  t = h_21;
  t = g_69(t);
  i_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, i_21), g_21);
  return(t);
}
ATerm TermIsVarIgnore_1_0 (ATerm o_81 (ATerm), ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_12 = ATgetFirst((ATermList) t);
      if(match_cons(g_12, sym__2))
        {
          n_21 = ATgetArgument(g_12, 0);
          o_21 = ATgetArgument(g_12, 1);
        }
      else
        _fail(t);
      p_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_21;
  {
    ATerm h_12 = t;
    if((PushChoice() == 0))
      {
        t = o_81(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_12;
      }
    t = o_21;
    t = o_81(t);
    t = p_21;
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_12 = ATgetFirst((ATermList) t);
      if(match_cons(i_12, sym__2))
        {
          q_21 = ATgetArgument(i_12, 0);
          r_21 = ATgetArgument(i_12, 1);
        }
      else
        _fail(t);
      s_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_21);
  if(match_cons(t, sym__2))
    {
      t_21 = ATgetArgument(t, 0);
      u_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_21);
  if(match_cons(t, sym__2))
    {
      if((t_21 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      v_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_21, u_21);
  t = zip_1_0(_id, t);
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_21, s_21);
  t = conc_0_0(t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL;
  if(match_cons(t, sym__2))
    {
      d_22 = ATgetArgument(t, 0);
      e_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_22;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_22 = ATgetFirst((ATermList) t);
      g_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_22;
  if(match_cons(t, sym__2))
    {
      a_22 = ATgetArgument(t, 0);
      b_22 = ATgetArgument(t, 1);
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_22;
            if((d_22 != t))
              {
                _fail(t);
              }
            t = b_22;
            ;
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            t = (ATerm) ATmakeAppl(sym__2, d_22, g_22);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, d_22, g_22);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm SubsVar_2_0 (ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL;
  t = l_108(t);
  p_22 = t;
  t = m_108(t);
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_22, q_22);
  t = lookup_0_0(t);
  return(t);
}
ATerm genzip_4_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm t)
{
  ATerm r_22 (ATerm t)
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_91(t);
        ;
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        t = h_91(t);
        t = _2_0(j_91, r_22, t);
        t = i_91(t);
      }
    return(t);
  }
  t = r_22(t);
  return(t);
}
ATerm zip_1_0 (ATerm l_91 (ATerm), ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm n_12 = ATgetArgument(t, 0);
        if(((ATgetType(n_12) != AT_LIST) || !(ATisEmpty(n_12))))
          _fail(t);
        {
          ATerm o_12 = ATgetArgument(t, 1);
          if(((ATgetType(o_12) != AT_LIST) || !(ATisEmpty(o_12))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm p_12 = ATgetArgument(t, 0);
        if(((ATgetType(p_12) == AT_LIST) && !(ATisEmpty(p_12))))
          {
            s_22 = ATgetFirst((ATermList) p_12);
            u_22 = (ATerm) ATgetNext((ATermList) p_12);
          }
        else
          _fail(t);
        {
          ATerm q_12 = ATgetArgument(t, 1);
          if(((ATgetType(q_12) == AT_LIST) && !(ATisEmpty(q_12))))
            {
              t_22 = ATgetFirst((ATermList) q_12);
              v_22 = (ATerm) ATgetNext((ATermList) q_12);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_22, t_22), (ATerm) ATmakeAppl(sym__2, u_22, v_22));
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm w_22 = NULL,x_22 = NULL;
    if(match_cons(t, sym__2))
      {
        w_22 = ATgetArgument(t, 0);
        x_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(x_22), w_22);
    return(t);
  }
  t = genzip_4_0(m_2, n_2, o_2, l_91, t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  z_22 = t;
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_12 = ATgetArgument(t, 0);
            ATerm u_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(s_12);
        t = z_22;
      }
    else
      {
        t = r_12;
        {
          ATerm g_23 = NULL;
          if(match_cons(t, sym__3))
            {
              a_23 = ATgetArgument(t, 0);
              b_23 = ATgetArgument(t, 1);
              c_23 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, a_23, b_23);
          t = zip_1_0(_id, t);
          g_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_23, c_23);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      i_23 = ATgetArgument(t, 0);
      h_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_23;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm q_2 (ATerm t)
      {
        t = i_23;
        return(t);
      }
      t = SubsVar_2_0(w_107, q_2, t);
      t = x_107(t);
      return(t);
    }
    t = alltd_1_0(p_2, t);
  }
  return(t);
}
ATerm substitute_1_0 (ATerm y_107 (ATerm), ATerm t)
{
  t = substitute_2_0(y_107, _id, t);
  return(t);
}
ATerm is_subterm_0_0 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL;
  if(match_cons(t, sym__2))
    {
      j_23 = ATgetArgument(t, 0);
      k_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_23;
  {
    ATerm r_2 (ATerm t)
    {
      if((j_23 != t))
        {
          _fail(t);
        }
      return(t);
    }
    t = oncetd_1_0(r_2, t);
    t = (ATerm) ATmakeAppl(sym__2, j_23, k_23);
  }
  return(t);
}
ATerm UfVar_1_0 (ATerm i_111 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_12 = ATgetArgument(t, 0);
      if(((ATgetType(v_12) == AT_LIST) && !(ATisEmpty(v_12))))
        {
          ATerm w_12 = ATgetFirst((ATermList) v_12);
          if(match_cons(w_12, sym__2))
            {
              l_23 = ATgetArgument(w_12, 0);
              m_23 = ATgetArgument(w_12, 1);
            }
          else
            _fail(t);
          n_23 = (ATerm) ATgetNext((ATermList) v_12);
        }
      else
        _fail(t);
      o_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_23;
  t = i_111(t);
  t = (ATerm) ATmakeAppl(sym__2, l_23, m_23);
  {
    ATerm x_12 = t;
    if((PushChoice() == 0))
      {
        t = is_subterm_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_12;
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, l_23, m_23)), (ATerm) ATmakeAppl(sym__2, o_23, n_23));
    t = substitute_1_0(i_111, t);
    if(match_cons(t, sym__2))
      {
        p_23 = ATgetArgument(t, 0);
        q_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, q_23, (ATerm) ATinsert(CheckATermList(p_23), (ATerm) ATmakeAppl(sym__2, l_23, m_23)));
  }
  return(t);
}
ATerm while_not_2_0 (ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm t)
{
  ATerm r_23 (ATerm t)
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_83(t);
        ;
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        t = e_83(t);
        t = r_23(t);
      }
    return(t);
  }
  t = r_23(t);
  return(t);
}
ATerm for_3_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm t)
{
  t = g_83(t);
  t = while_not_2_0(h_83, i_83, t);
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm s_23 = NULL;
    s_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_23, (ATerm) ATempty);
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm t_23 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm a_13 = ATgetArgument(t, 0);
        if(((ATgetType(a_13) != AT_LIST) || !(ATisEmpty(a_13))))
          _fail(t);
        t_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = t_23;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_2 (ATerm t)
        {
          ATerm u_23 = NULL,v_23 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm d_13 = ATgetFirst((ATermList) t);
              if(match_cons(d_13, sym__2))
                {
                  u_23 = ATgetArgument(d_13, 0);
                  if((u_23 != ATgetArgument(d_13, 1)))
                    {
                      _fail(ATgetArgument(d_13, 1));
                    }
                }
              else
                _fail(t);
              v_23 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_23;
          return(t);
        }
        t = _2_0(v_2, _id, t);
        ;
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        {
          ATerm e_13 = t;
          int f_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_2 (ATerm t)
              {
                t = Var_1_0(_id, t);
                return(t);
              }
              t = UfVar_1_0(w_2, t);
              ;
              LocalPopChoice(f_13);
            }
          else
            {
              t = e_13;
              {
                ATerm g_13 = t;
                int h_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = _2_0(UfDecompose_0_0, _id, t);
                    ;
                    LocalPopChoice(h_13);
                  }
                else
                  {
                    t = g_13;
                    {
                      ATerm i_13 = t;
                      int l_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_2 (ATerm t)
                          {
                            ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm n_13 = ATgetFirst((ATermList) t);
                                if(match_cons(n_13, sym__2))
                                  {
                                    ATerm o_13 = ATgetArgument(n_13, 0);
                                    if(match_cons(o_13, sym_As_2))
                                      {
                                        w_23 = ATgetArgument(o_13, 0);
                                        x_23 = ATgetArgument(o_13, 1);
                                      }
                                    else
                                      _fail(t);
                                    y_23 = ATgetArgument(n_13, 1);
                                  }
                                else
                                  _fail(t);
                                z_23 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATinsert(ATinsert(CheckATermList(z_23), (ATerm) ATmakeAppl(sym__2, x_23, y_23)), (ATerm) ATmakeAppl(sym__2, w_23, y_23));
                            return(t);
                          }
                          t = _2_0(x_2, _id, t);
                          ;
                          LocalPopChoice(l_13);
                        }
                      else
                        {
                          t = i_13;
                          {
                            ATerm p_13 = t;
                            int q_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm y_2 (ATerm t)
                                {
                                  ATerm a_24 = NULL;
                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                    {
                                      ATerm r_13 = ATgetFirst((ATermList) t);
                                      if(match_cons(r_13, sym__2))
                                        {
                                          ATerm s_13 = ATgetArgument(r_13, 0);
                                          if(!(match_cons(s_13, sym_Wld_0)))
                                            _fail(t);
                                          {
                                            ATerm t_13 = ATgetArgument(r_13, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      a_24 = (ATerm) ATgetNext((ATermList) t);
                                    }
                                  else
                                    _fail(t);
                                  t = a_24;
                                  return(t);
                                }
                                t = _2_0(y_2, _id, t);
                                ;
                                LocalPopChoice(q_13);
                              }
                            else
                              {
                                t = p_13;
                                {
                                  ATerm z_2 (ATerm t)
                                  {
                                    ATerm a_3 (ATerm t)
                                    {
                                      t = Var_1_0(_id, t);
                                      return(t);
                                    }
                                    t = TermIsVarIgnore_1_0(a_3, t);
                                    return(t);
                                  }
                                  t = _2_0(z_2, _id, t);
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
  t = for_3_0(s_2, t_2, u_2, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_24 = NULL;
      t = (ATerm) ATempty;
      {
        ATerm b_3 (ATerm t)
        {
          t = term_w_9;
          return(t);
        }
        t = rewrite_1_0(b_3, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm w_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_13) != ATmakeSymbol("i_0", 0, ATtrue)))
              _fail(t);
            b_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_24;
      }
      ;
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      {
        ATerm x_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_24 = NULL;
            t = (ATerm) ATempty;
            {
              ATerm c_3 (ATerm t)
              {
                t = term_w_9;
                return(t);
              }
              t = rewrite_1_0(c_3, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm z_13 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) z_13) != ATmakeSymbol("g_0", 0, ATtrue)))
                    _fail(t);
                  c_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_24;
            }
            ;
            LocalPopChoice(y_13);
          }
        else
          {
            t = x_13;
            t = (ATerm) ATempty;
            {
              ATerm d_3 (ATerm t)
              {
                t = term_w_9;
                return(t);
              }
              t = rewrite_1_0(d_3, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm rewrite_1_0 (ATerm y_99 (ATerm), ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,x_0 = NULL;
  g_24 = t;
  t = term_a_14;
  t = y_99(t);
  h_24 = t;
  t = SSL_table_get(h_24, g_24);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_0 = ATgetFirst((ATermList) t);
      {
        ATerm b_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_0;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm t_24 = NULL;
  t_24 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm c_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_1 = NULL;
        t = t_24;
        {
          ATerm e_3 (ATerm t)
          {
            t = term_g_8;
            return(t);
          }
          t = rewrite_1_0(e_3, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm f_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_14) != ATmakeSymbol("k_0", 0, ATtrue)))
                _fail(t);
              a_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_1;
        }
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        t = t_24;
        {
          ATerm f_3 (ATerm t)
          {
            t = term_g_8;
            return(t);
          }
          t = rewrite_1_0(f_3, t);
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm e_85 (ATerm), ATerm t)
{
  ATerm y_24 (ATerm t)
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_85(t);
        ;
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        t = SRTS_all(y_24, t);
      }
    return(t);
  }
  t = y_24(t);
  return(t);
}
ATerm Match_1_0 (ATerm x_72 (ATerm), ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
  c_25 = t;
  if(match_cons(t, sym_Match_1))
    {
      a_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_25);
  z_24 = t;
  t = a_25;
  t = x_72(t);
  b_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, b_25), z_24);
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL;
  ATerm g_3 (ATerm t)
  {
    t = alltd_1_0(Binding_0_0, t);
    return(t);
  }
  t = Match_1_0(g_3, t);
  if(match_cons(t, sym_Match_1))
    {
      j_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_3 (ATerm t)
    {
      ATerm s_25 = NULL;
      s_25 = t;
      {
        ATerm j_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_25;
            t = CurrentTerm_0_0(t);
            k_25 = t;
            t = s_25;
            {
              ATerm l_14 = t;
              int m_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_25, k_25));
                  t = prop_pattern_match_0_0(t);
                  {
                    ATerm i_3 (ATerm t)
                    {
                      t = try_1_0(introduce_binding_0_0, t);
                      return(t);
                    }
                    t = map_1_0(i_3, t);
                    t = s_25;
                  }
                  ;
                  LocalPopChoice(m_14);
                }
              else
                {
                  t = l_14;
                  t = (ATerm) ATmakeAppl(sym__4, term_q_14, s_25, term_r_14, k_25);
                  {
                    ATerm j_3 (ATerm t)
                    {
                      t = term_s_14;
                      return(t);
                    }
                    t = debug_1_0(j_3, t);
                    t = term_t_14;
                  }
                }
            }
            ;
            LocalPopChoice(k_14);
          }
        else
          {
            t = j_14;
            t = j_25;
            {
              ATerm v_14 = t;
              if((PushChoice() == 0))
                {
                  ATerm k_3 (ATerm t)
                  {
                    ATerm j_1 = NULL;
                    j_1 = t;
                    if(match_cons(t, sym_Wld_0))
                      {
                        t = j_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_As_2))
                          {
                            ATerm w_14 = ATgetArgument(t, 0);
                            ATerm x_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = j_1;
                      }
                    return(t);
                  }
                  t = oncetd_1_0(k_3, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = v_14;
                }
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_y_14, j_25));
              {
                ATerm l_3 (ATerm t)
                {
                  t = term_w_9;
                  return(t);
                }
                t = assert_1_0(l_3, t);
                t = s_25;
              }
            }
          }
      }
      return(t);
    }
    t = try_1_0(h_3, t);
  }
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm z_14 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
      ;
      LocalPopChoice(b_15);
    }
  else
    {
      t = z_14;
      {
        ATerm d_15 = t;
        int e_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0_0(t);
            ;
            LocalPopChoice(e_15);
          }
        else
          {
            t = d_15;
            {
              ATerm h_15 = t;
              int i_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = prop_scope_1_0(cp_0_0, t);
                  ;
                  LocalPopChoice(i_15);
                }
              else
                {
                  t = h_15;
                  {
                    ATerm j_15 = t;
                    int k_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        ;
                        LocalPopChoice(k_15);
                      }
                    else
                      {
                        t = j_15;
                        {
                          ATerm p_15 = t;
                          int q_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
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
                                    t = prop_seq_1_0(cp_0_0, t);
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
                                          t = prop_choice_1_0(cp_0_0, t);
                                          ;
                                          LocalPopChoice(y_15);
                                        }
                                      else
                                        {
                                          t = x_15;
                                          {
                                            ATerm z_15 = t;
                                            int a_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = prop_let_1_0(cp_0_0, t);
                                                ;
                                                LocalPopChoice(a_16);
                                              }
                                            else
                                              {
                                                t = z_15;
                                                {
                                                  ATerm b_16 = t;
                                                  int c_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = prop_rec_1_0(cp_0_0, t);
                                                      ;
                                                      LocalPopChoice(c_16);
                                                    }
                                                  else
                                                    {
                                                      t = b_16;
                                                      {
                                                        ATerm d_16 = t;
                                                        int e_16 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = prop_not_1_0(cp_0_0, t);
                                                            ;
                                                            LocalPopChoice(e_16);
                                                          }
                                                        else
                                                          {
                                                            t = d_16;
                                                            {
                                                              ATerm i_16 = t;
                                                              int j_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = prop_sdef_1_0(cp_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(j_16);
                                                                }
                                                              else
                                                                {
                                                                  t = i_16;
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
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
  if(match_cons(t, sym__2))
    {
      x_25 = ATgetArgument(t, 0);
      y_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_1 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_16 = ATgetArgument(t, 0);
            ATerm n_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(x_25, y_25);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_16 = ATgetFirst((ATermList) t);
            n_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_1;
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        t = (ATerm) ATempty;
      }
    z_25 = t;
    t = SSL_table_put(x_25, y_25, z_25);
    t = (ATerm) ATmakeAppl(sym__2, x_25, y_25);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm t_99 (ATerm), ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
  f_26 = t;
  t = t_99(t);
  g_26 = t;
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(g_26, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_26 = ATgetFirst((ATermList) t);
        h_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(g_26, (ATerm)ATmakeAppl(sym_Scopes_0), h_26);
    t = i_26;
    {
      ATerm m_3 (ATerm t)
      {
        ATerm j_26 = NULL;
        j_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_26, j_26);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(m_3, t);
      t = f_26;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm t)
{
  ATerm x_16 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_82(t);
      t = i_82(t);
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = x_16;
      t = i_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_99 (ATerm), ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  m_26 = t;
  t = s_99(t);
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_26, term_f_17);
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_17 = ATgetArgument(t, 0);
            ATerm k_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_26, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        t = (ATerm) ATempty;
      }
    o_26 = t;
    t = SSL_table_put(n_26, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(o_26), (ATerm) ATempty));
    t = m_26;
  }
  return(t);
}
ATerm scope_2_0 (ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm t)
{
  t = begin_scope_1_0(u_99, t);
  {
    ATerm n_3 (ATerm t)
    {
      t = end_scope_1_0(u_99, t);
      return(t);
    }
    t = restore_always_2_0(v_99, n_3, t);
  }
  return(t);
}
ATerm const_prop_0_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    t = term_w_9;
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm q_3 (ATerm t)
    {
      t = term_g_8;
      return(t);
    }
    t = scope_2_0(q_3, cp_0_0, t);
    return(t);
  }
  t = scope_2_0(o_3, p_3, t);
  return(t);
}
ATerm map_1_0 (ATerm d_89 (ATerm), ATerm t)
{
  ATerm t_26 (ATerm t)
  {
    ATerm l_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = l_17;
        t = Cons_2_0(d_89, t_26, t);
      }
    return(t);
  }
  t = t_26(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm i_68 (ATerm), ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  x_26 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_26);
  u_26 = t;
  t = v_26;
  t = i_68(t);
  w_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, w_26), u_26);
  return(t);
}
ATerm Cons_2_0 (ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  g_27 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_27 = ATgetFirst((ATermList) t);
      d_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_27);
  b_27 = t;
  t = c_27;
  t = k_67(t);
  e_27 = t;
  t = d_27;
  t = l_67(t);
  f_27 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(f_27), e_27), b_27);
  return(t);
}
ATerm Signature_1_0 (ATerm j_68 (ATerm), ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  n_27 = t;
  if(match_cons(t, sym_Signature_1))
    {
      l_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_27);
  k_27 = t;
  t = l_27;
  t = j_68(t);
  m_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, m_27), k_27);
  return(t);
}
ATerm Specification_1_0 (ATerm n_68 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL;
  u_27 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_27);
  r_27 = t;
  t = s_27;
  t = n_68(t);
  t_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, t_27), r_27);
  return(t);
}
ATerm _2_0 (ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL;
  d_28 = t;
  if(match_cons(t, sym__2))
    {
      z_27 = ATgetArgument(t, 0);
      a_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_28);
  y_27 = t;
  t = z_27;
  t = b_66(t);
  b_28 = t;
  t = a_28;
  t = c_66(t);
  c_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, b_28, c_28), y_27);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL;
  h_28 = t;
  t = term_a_14;
  t = whoami_0_0(t);
  i_28 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), i_28), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = h_28;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      {
        ATerm v_28 = NULL,x_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_28 = ATgetFirst((ATermList) t);
            x_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_28;
        {
          ATerm r_3 (ATerm t)
          {
            t = x_28;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(r_3, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm n_29 = NULL,s_29 = NULL;
  n_29 = t;
  t = SSL_explode_term(n_29);
  if(match_cons(t, sym__2))
    {
      ATerm b_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_29;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm t_29 (ATerm t)
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, t_29, t);
        ;
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_89(t);
      }
    return(t);
  }
  t = t_29(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm u_29 = NULL,y_29 = NULL;
  if(match_cons(t, sym__2))
    {
      y_29 = ATgetArgument(t, 0);
      u_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_29;
  {
    ATerm s_3 (ATerm t)
    {
      t = u_29;
      return(t);
    }
    t = at_end_1_0(s_3, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm z_29 = NULL;
  ATerm t_3 (ATerm t)
  {
    ATerm a_30 = NULL;
    a_30 = t;
    t = SSL_explode_string(a_30);
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm b_30 = NULL;
    b_30 = t;
    t = SSL_explode_string(b_30);
    return(t);
  }
  t = _2_0(t_3, u_3, t);
  t = conc_0_0(t);
  z_29 = t;
  t = SSL_implode_string(z_29);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_30 = NULL;
      n_30 = t;
      t = SSL_is_string(n_30);
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      {
        ATerm k_18 = t;
        int e_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_3 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(v_3, t);
            ;
            LocalPopChoice(e_19);
          }
        else
          {
            t = k_18;
            {
              ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
              r_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_30 = ATgetArgument(t, 0);
                  t = s_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_30 = ATgetArgument(t, 0);
                      t = s_30;
                      {
                        ATerm f_19 = t;
                        int g_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(g_19);
                          }
                        else
                          {
                            t = f_19;
                            {
                              ATerm w_3 (ATerm t)
                              {
                                t = term_p_19;
                                return(t);
                              }
                              t = debug_1_0(w_3, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm x_30 = NULL,y_30 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_30 = ATgetArgument(t, 0);
                          t_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_30;
                      t = eval_config_0_0(t);
                      x_30 = t;
                      t = t_30;
                      t = eval_config_0_0(t);
                      y_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_30, y_30);
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
  ATerm b_31 = NULL;
  b_31 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_31);
  {
    ATerm c_4 (ATerm t)
    {
      ATerm c_31 = NULL;
      t = eval_config_0_0(t);
      c_31 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_31, c_31);
      t = c_31;
      return(t);
    }
    t = try_1_0(c_4, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm d_31 = NULL,e_31 = NULL;
    d_31 = t;
    t = term_q_19;
    t = get_config_0_0(t);
    e_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_31, term_r_19);
    t = geq_0_0(t);
    t = d_31;
    t = t_102(t);
    return(t);
  }
  t = try_1_0(i_4, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm s_19 = ATgetArgument(t, 0);
        if(match_cons(s_19, sym_Stream_1))
          {
            f_31 = ATgetArgument(s_19, 0);
          }
        else
          _fail(t);
        g_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(f_31, g_31);
    h_31 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), h_31);
    i_31 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, i_31);
    return(t);
  }
  t = WriteToFile_1_0(j_4, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm p_101 (ATerm), ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  if(match_cons(t, sym__2))
    {
      j_31 = ATgetArgument(t, 0);
      k_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_31, term_u_19);
  t = open_stream_0_0(t);
  l_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_31, k_31);
  t = p_101(t);
  t = fclose_0_0(t);
  t = k_31;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm v_19 = ATgetArgument(t, 0);
        if(match_cons(v_19, sym_Stream_1))
          {
            m_31 = ATgetArgument(v_19, 0);
          }
        else
          _fail(t);
        n_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(m_31, n_31);
    o_31 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, o_31);
    return(t);
  }
  t = WriteToFile_1_0(k_4, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL;
  p_31 = t;
  {
    ATerm l_4 (ATerm t)
    {
      ATerm w_19 = t;
      int e_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_4 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                q_31 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(m_4, t);
          ;
          LocalPopChoice(e_20);
        }
      else
        {
          t = w_19;
          t = term_f_20;
          q_31 = t;
        }
      return(t);
    }
    t = _2_0(l_4, _id, t);
    t = p_31;
    {
      ATerm n_4 (ATerm t)
      {
        ATerm r_4 (ATerm t)
        {
          t = not_null(q_31);
          return(t);
        }
        t = split_2_0(r_4, _id, t);
        return(t);
      }
      t = _2_0(_id, n_4, t);
      {
        ATerm g_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 (ATerm t)
            {
              ATerm y_4 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(y_4, t);
              return(t);
            }
            t = _2_0(t_4, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(q_20);
          }
        else
          {
            t = g_20;
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
ATerm apply_strategy_1_0 (ATerm r_104 (ATerm), ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL;
  r_31 = t;
  t = dtime_0_0(t);
  t = r_31;
  t = r_104(t);
  s_31 = t;
  t = dtime_0_0(t);
  y_31 = t;
  t = s_31;
  if(match_cons(t, sym__2))
    {
      z_31 = ATgetArgument(t, 0);
      a_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_31), (ATerm) ATmakeAppl(sym_Runtime_1, y_31)), a_32);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_32 (ATerm i_32, ATerm t)
  {
    t = SSL_fclose(i_32);
    return(t);
  }
  ATerm l_32 = NULL,o_32 = NULL;
  o_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_32 = ATgetArgument(t, 0);
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_32);
            ;
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            t = q_32(o_32, t);
          }
      }
    }
  else
    {
      t = q_32(o_32, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm b_101 (ATerm), ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL;
  r_32 = t;
  t = b_101(t);
  s_32 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_32), s_32));
  t = r_32;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_32 = NULL;
  t = SSL_stdin_stream();
  t_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_32 = NULL;
  t = SSL_stdout_stream();
  u_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_32 = NULL;
  t = SSL_stderr_stream();
  v_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_32);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm x_32 = NULL;
  x_32 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_21 = ATgetArgument(t, 0);
      ATerm e_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL,a_2 = NULL;
        z_1 = t;
        t = SSL_explode_term(z_1);
        if(match_cons(t, sym__2))
          {
            ATerm l_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_21 = ATgetArgument(t, 1);
              if(((ATgetType(m_21) == AT_LIST) && !(ATisEmpty(m_21))))
                {
                  a_2 = ATgetFirst((ATermList) m_21);
                  {
                    ATerm x_21 = (ATerm) ATgetNext((ATermList) m_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = a_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = f_21;
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
              ATerm z_4 (ATerm t)
              {
                ATerm d_33 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    d_33 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = d_33;
                return(t);
              }
              t = _2_0(z_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  a_33 = ATgetArgument(t, 0);
                  b_33 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(a_33, b_33);
              c_33 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, c_33);
              ;
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
              {
                ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
                ATerm a_5 (ATerm t)
                {
                  ATerm h_33 = NULL;
                  h_33 = t;
                  t = SSL_is_string(h_33);
                  return(t);
                }
                t = _2_0(a_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    e_33 = ATgetArgument(t, 0);
                    f_33 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(e_33, f_33);
                g_33 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, g_33);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  ATerm c_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_33 = NULL;
      l_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_33, term_i_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_22);
    }
  else
    {
      t = c_22;
      {
        ATerm c_5 (ATerm t)
        {
          t = term_j_22;
          return(t);
        }
        t = debug_1_0(c_5, t);
        _fail(t);
      }
    }
  i_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(k_33);
  j_33 = t;
  t = i_33;
  t = fclose_0_0(t);
  t = j_33;
  return(t);
}
ATerm split_2_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
  n_33 = t;
  t = t_96(t);
  o_33 = t;
  t = n_33;
  t = u_96(t);
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_33, p_33);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL;
  q_33 = t;
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_5 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              r_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(d_5, t);
        ;
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        t = term_m_22;
        r_33 = t;
      }
    t = q_33;
    {
      ATerm g_5 (ATerm t)
      {
        t = not_null(r_33);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, g_5, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm t_33 = NULL;
    t_33 = t;
    if(match_string(t, "-k"))
      {
        t = t_33;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = t_33;
      }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    ATerm u_33 = NULL,v_33 = NULL;
    u_33 = t;
    t = SSL_string_to_int(u_33);
    v_33 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), v_33);
    t = u_33;
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_n_22;
    return(t);
  }
  t = ArgOption_3_0(h_5, i_5, k_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5 (ATerm t)
      {
        ATerm x_33 = NULL;
        x_33 = t;
        if(match_string(t, "-S"))
          {
            t = x_33;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = x_33;
          }
        return(t);
      }
      ATerm n_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_e_23;
        return(t);
      }
      ATerm o_5 (ATerm t)
      {
        t = term_f_23;
        return(t);
      }
      t = Option_3_0(l_5, n_5, o_5, t);
      ;
      LocalPopChoice(y_22);
    }
  else
    {
      t = o_22;
      {
        ATerm d_24 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm s_5 (ATerm t)
            {
              ATerm y_33 = NULL,z_33 = NULL;
              y_33 = t;
              t = SSL_string_to_int(y_33);
              z_33 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_33);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, y_33);
              return(t);
            }
            ATerm t_5 (ATerm t)
            {
              t = term_f_24;
              return(t);
            }
            t = ArgOption_3_0(r_5, s_5, t_5, t);
            ;
            LocalPopChoice(e_24);
          }
        else
          {
            t = d_24;
            {
              ATerm u_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm v_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_i_24;
                return(t);
              }
              ATerm w_5 (ATerm t)
              {
                t = term_j_24;
                return(t);
              }
              t = Option_3_0(u_5, v_5, w_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm b_34 = NULL;
    b_34 = t;
    if(match_string(t, "-o"))
      {
        t = b_34;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = b_34;
      }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    ATerm c_34 = NULL;
    c_34 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), c_34);
    t = (ATerm) ATmakeAppl(sym_Output_1, c_34);
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = term_m_24;
    return(t);
  }
  t = ArgOption_3_0(x_5, y_5, z_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      {
        ATerm a_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_p_24;
          return(t);
        }
        ATerm h_6 (ATerm t)
        {
          t = term_q_24;
          return(t);
        }
        t = Option_3_0(a_6, f_6, h_6, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
  f_34 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = f_34;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm n_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_34 = ATgetFirst((ATermList) t);
          h_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_34 = ATgetFirst((ATermList) t);
          j_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_34;
      t = f_0(t);
      t = i_34;
      t = h_0(t);
      n_34 = t;
      t = (ATerm) ATinsert(CheckATermList(j_34), n_34);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm p_34 = NULL;
    p_34 = t;
    if(match_string(t, "-i"))
      {
        t = p_34;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = p_34;
      }
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    ATerm q_34 = NULL;
    q_34 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), q_34);
    t = (ATerm) ATmakeAppl(sym_Input_1, q_34);
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = term_r_24;
    return(t);
  }
  t = ArgOption_3_0(j_6, k_6, l_6, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm s_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = s_24;
      {
        ATerm v_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(w_24);
          }
        else
          {
            t = v_24;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_14;
  t = whoami_0_0(t);
  r_34 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), r_34));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_24;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_95(t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm u_34 = NULL,v_34 = NULL,y_34 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_34 = ATgetFirst((ATermList) t);
            v_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_34;
        t = foldr_2_0(e_95, f_95, t);
        y_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_34, y_34);
        t = f_95(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL;
  z_34 = t;
  t = SSL_explode_term(z_34);
  if(match_cons(t, sym__2))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      a_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_35;
  t = foldr_2_0(x_98, y_98, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_35 = NULL;
  t = times_0_0(t);
  {
    ATerm m_6 (ATerm t)
    {
      t = term_d_23;
      return(t);
    }
    ATerm n_6 (ATerm t)
    {
      ATerm c_35 = NULL,d_35 = NULL;
      if(match_cons(t, sym__2))
        {
          c_35 = ATgetArgument(t, 0);
          d_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(c_35, d_35);
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            t = SSL_addr(c_35, d_35);
          }
      }
      return(t);
    }
    t = crush_2_0(m_6, n_6, t);
    b_35 = t;
    t = SSL_TicksToSeconds(b_35);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  m_35 = t;
  if(match_cons(t, sym__2))
    {
      n_35 = ATgetArgument(t, 0);
      o_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_35;
        if((n_35 != t))
          {
            _fail(t);
          }
        t = m_35;
        ;
        LocalPopChoice(l_25);
      }
    else
      {
        t = i_25;
        t = m_35;
        {
          ATerm m_25 = t;
          int n_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_35, o_35);
              ;
              LocalPopChoice(n_25);
            }
          else
            {
              t = m_25;
              t = SSL_gtr(n_35, o_35);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_35, o_35);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm r_35 = NULL,s_35 = NULL;
    r_35 = t;
    t = term_q_19;
    t = get_config_0_0(t);
    s_35 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_35, term_o_25);
    t = geq_0_0(t);
    t = r_35;
    t = s_102(t);
    return(t);
  }
  t = try_1_0(o_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    ATerm u_35 = NULL,v_35 = NULL;
    t = run_time_0_0(t);
    u_35 = t;
    t = term_a_14;
    t = whoami_0_0(t);
    v_35 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), u_35), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), v_35));
    t = (ATerm) ATmakeAppl(sym__2, term_p_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_25), u_35), term_q_25), v_35));
    return(t);
  }
  t = if_verbose1_1_0(p_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm p_105 (ATerm), ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
        ATerm r_6 (ATerm t)
        {
          ATerm w_25 = t;
          int a_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(a_26);
            }
          else
            {
              t = w_25;
              {
                ATerm b_26 = t;
                int c_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(c_26);
                  }
                else
                  {
                    t = b_26;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(r_6, t);
      }
    }
  t = p_105(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_35 = ATgetFirst((ATermList) t);
      z_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_36 = NULL,e_36 = NULL;
        t = z_35;
        t = e_0(t);
        d_36 = t;
        t = y_35;
        t = d_0(t);
        e_36 = t;
        t = z_35;
        {
          ATerm s_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(d_36), e_36);
            return(t);
          }
          t = reverse_acc_2_0(d_0, s_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_14;
      t = e_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, t_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  i_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_36);
  f_36 = t;
  t = g_36;
  t = w_80(t);
  h_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, h_36), f_36);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
        ATerm u_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(u_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_k_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm z_6 (ATerm t)
    {
      ATerm m_36 = NULL;
      m_36 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, m_36), term_l_26);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(z_6, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
  q_36 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      o_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_36);
  n_36 = t;
  t = o_36;
  t = x_80(t);
  p_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, p_36), n_36);
  return(t);
}
ATerm fetch_1_0 (ATerm n_89 (ATerm), ATerm t)
{
  ATerm u_36 (ATerm t)
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_89, _id, t);
        ;
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = Cons_2_0(_id, u_36, t);
      }
    return(t);
  }
  t = u_36(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm p_106 (ATerm), ATerm t)
{
  t = fetch_1_0(p_106, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  w_36 = t;
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
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
                ATerm y_26 = ATgetFirst((ATermList) t);
                ATerm z_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_36;
          }
        ;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
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
  t = term_x_24;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm s_81 (ATerm), ATerm t)
{
  ATerm a_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_81(t);
      ;
      LocalPopChoice(h_27);
    }
  else
    {
      t = a_27;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_7 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm b_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_q_27;
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        t = term_v_27;
        return(t);
      }
      t = Option_3_0(a_7, b_7, c_7, t);
      ;
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      {
        ATerm d_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm e_7 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_w_27;
          return(t);
        }
        ATerm f_7 (ATerm t)
        {
          t = term_x_27;
          return(t);
        }
        t = Option_3_0(d_7, e_7, f_7, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL;
  if(match_cons(t, sym__3))
    {
      d_37 = ATgetArgument(t, 0);
      e_37 = ATgetArgument(t, 1);
      f_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_37, e_37);
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_28 = ATgetArgument(t, 0);
            ATerm j_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(d_37, e_37);
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        t = (ATerm) ATempty;
      }
    g_37 = t;
    t = SSL_table_put(d_37, e_37, (ATerm) ATinsert(CheckATermList(g_37), f_37));
    t = (ATerm) ATmakeAppl(sym__3, d_37, e_37, f_37);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm u_107 (ATerm), ATerm t)
{
  ATerm l_37 = NULL;
  t = term_a_14;
  t = u_107(t);
  l_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_28, term_l_28, l_37);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
  n_37 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = n_37;
      t = register_usage_1_0(c_0, t);
    }
  else
    {
      ATerm s_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_37 = ATgetFirst((ATermList) t);
          p_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_37;
      t = a_0(t);
      t = term_a_14;
      t = b_0(t);
      s_37 = t;
      t = (ATerm) ATinsert(CheckATermList(p_37), s_37);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm g_7 (ATerm t)
  {
    ATerm u_37 = NULL;
    u_37 = t;
    if(match_string(t, "--help"))
      {
        t = u_37;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = u_37;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = u_37;
          }
      }
    return(t);
  }
  ATerm h_7 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_m_28;
    return(t);
  }
  ATerm i_7 (ATerm t)
  {
    t = term_n_28;
    return(t);
  }
  t = Option_3_0(g_7, h_7, i_7, t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_107 (ATerm), ATerm t)
{
  ATerm y_37 = NULL;
  y_37 = t;
  {
    ATerm j_7 (ATerm t)
    {
      t = term_o_28;
      t = s_107(t);
      return(t);
    }
    t = try_1_0(j_7, t);
    t = y_37;
    {
      ATerm k_7 (ATerm t)
      {
        ATerm z_37 = NULL;
        z_37 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_37);
        t = (ATerm) ATmakeAppl(sym_Program_1, z_37);
        return(t);
      }
      ATerm l_7 (ATerm t)
      {
        ATerm p_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_28 = t;
            int s_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(s_28);
              }
            else
              {
                t = r_28;
                t = s_107(t);
                t = Cons_2_0(_id, l_7, t);
              }
            ;
            LocalPopChoice(q_28);
          }
        else
          {
            t = p_28;
            {
              ATerm d_38 = NULL,e_38 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_38 = ATgetFirst((ATermList) t);
                  e_38 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_38), (ATerm) ATmakeAppl(sym_Undefined_1, d_38));
            }
          }
        return(t);
      }
      t = Cons_2_0(k_7, l_7, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm r_107 (ATerm), ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
  k_38 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = k_38;
  {
    ATerm m_7 (ATerm t)
    {
      ATerm t_28 = t;
      int u_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_107(t);
          ;
          LocalPopChoice(u_28);
        }
      else
        {
          t = t_28;
          {
            ATerm w_28 = t;
            int y_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(y_28);
              }
            else
              {
                t = w_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_7, t);
    {
      ATerm n_7 (ATerm t)
      {
        ATerm z_28 = t;
        int a_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_38 = NULL;
            r_38 = t;
            {
              ATerm b_29 = t;
              int c_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_38;
                  {
                    ATerm d_29 = t;
                    int e_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_v_25;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(e_29);
                      }
                    else
                      {
                        t = d_29;
                        {
                          ATerm o_7 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(o_7, t);
                        }
                      }
                    t = r_38;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(c_29);
                }
              else
                {
                  t = b_29;
                  t = term_p_27;
                  t = get_config_0_0(t);
                  t = r_38;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(a_29);
          }
        else
          {
            t = z_28;
            {
              ATerm p_7 (ATerm t)
              {
                ATerm q_7 (ATerm t)
                {
                  l_38 = t;
                  return(t);
                }
                t = Undefined_1_0(q_7, t);
                return(t);
              }
              t = option_defined_1_0(p_7, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_38)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_p_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_38)), term_f_29));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(n_7, t);
      m_38 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = m_38;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm t)
{
  ATerm j_5 = NULL;
  t = parse_options_1_0(r_105, t);
  j_5 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), j_5);
  t = j_5;
  t = t_105(t);
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_105, t);
        ;
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
        {
          ATerm i_29 = t;
          int j_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_105(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_29);
            }
          else
            {
              t = i_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm t)
{
  ATerm r_7 (ATerm t)
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_105(t);
        ;
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(g_105, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(r_7, i_105, j_105, s_7, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    ATerm u_7 (ATerm t)
    {
      ATerm u_38 = NULL,v_38 = NULL;
      u_38 = t;
      t = term_x_24;
      t = get_config_0_0(t);
      v_38 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, v_38));
      t = u_38;
      return(t);
    }
    t = if_verbose2_1_0(u_7, t);
    return(t);
  }
  t = iowrap_4_0(a_105, b_105, c_105, t_7, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm t)
{
  t = iowrap_3_0(y_104, z_104, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm v_104 (ATerm), ATerm t)
{
  ATerm v_7 (ATerm t)
  {
    t = _2_0(_id, v_104, t);
    return(t);
  }
  t = iowrap_2_0(v_7, _fail, t);
  return(t);
}
ATerm const_prop_io_0_0 (ATerm t)
{
  ATerm w_7 (ATerm t)
  {
    ATerm x_7 (ATerm t)
    {
      ATerm y_7 (ATerm t)
      {
        t = Signature_1_0(_id, t);
        return(t);
      }
      ATerm z_7 (ATerm t)
      {
        ATerm a_8 (ATerm t)
        {
          ATerm c_8 (ATerm t)
          {
            t = map_1_0(const_prop_0_0, t);
            return(t);
          }
          t = Strategies_1_0(c_8, t);
          return(t);
        }
        ATerm b_8 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(a_8, b_8, t);
        return(t);
      }
      t = Cons_2_0(y_7, z_7, t);
      return(t);
    }
    t = Specification_1_0(x_7, t);
    return(t);
  }
  t = iowrap_1_0(w_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = const_prop_io_0_0(t);
  return(t);
}
