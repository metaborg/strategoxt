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
ATerm term_y_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_n_35;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_b_34;
ATerm term_w_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_k_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_c_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_k_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_w_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_t_28;
ATerm term_g_27;
ATerm term_w_26;
ATerm term_t_26;
ATerm term_f_25;
ATerm term_a_25;
ATerm term_t_24;
ATerm term_n_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_z_21;
ATerm term_t_18;
ATerm term_l_18;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
void init_constant_terms (void)
{
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_a_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_29);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym__3, term_t_28, term_z_32, term_s_13);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm e_81 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm s_5 (ATerm);
ATerm v_5 (ATerm);
ATerm x_5 (ATerm);
ATerm prop_sdef_1_0 (ATerm e_87 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm exec_maybe_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm Not_1_0 (ATerm i_79 (ATerm), ATerm);
ATerm assert_1_0 (ATerm u_105 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm);
ATerm Let_2_0 (ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm prop_let_1_0 (ATerm f_87 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm f_8 (ATerm c_7, ATerm f_7, ATerm g_7, ATerm);
ATerm isect_CurrentTerm_0_0 (ATerm);
ATerm h_6 (ATerm);
ATerm e_11 (ATerm k_10, ATerm l_10, ATerm m_10, ATerm);
ATerm isect_Binding_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm save_CurrentTerm_0_0 (ATerm);
ATerm save_Binding_0_0 (ATerm);
ATerm prop_abstract_choice_2_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm x_77 (ATerm), ATerm y_77 (ATerm), ATerm);
ATerm prop_choice_1_0 (ATerm i_87 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm x_78 (ATerm), ATerm y_78 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm);
ATerm w_6 (ATerm);
ATerm z_6 (ATerm);
ATerm prop_traversal_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm p_79 (ATerm), ATerm q_79 (ATerm), ATerm r_79 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm j_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm prop_call_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm h_8 (ATerm);
ATerm prop_scope_1_0 (ATerm d_87 (ATerm), ATerm);
ATerm Build_1_0 (ATerm r_78 (ATerm), ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm prop_build_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm j_90 (ATerm), ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm introduce_binding_0_0 (ATerm);
ATerm Var_1_0 (ATerm z_74 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm m_95 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm s_25 (ATerm k_25, ATerm);
ATerm conc_0_0 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm genzip_4_0 (ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm);
ATerm UfVar_1_0 (ATerm g_117 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm);
ATerm for_3_0 (ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm);
ATerm y_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm prop_pattern_match_0_0 (ATerm);
ATerm CurrentTerm_0_0 (ATerm);
ATerm Binding_0_0 (ATerm);
ATerm alltd_1_0 (ATerm x_90 (ATerm), ATerm);
ATerm Match_1_0 (ATerm q_78 (ATerm), ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm prop_match_0_0 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm cp_0_0 (ATerm);
ATerm table_pop_rm_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm r_105 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_105 (ATerm), ATerm);
ATerm scope_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_94 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm w_73 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm x_73 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm b_74 (ATerm), ATerm);
ATerm _2_0 (ATerm b_69 (ATerm), ATerm c_69 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm n_107 (ATerm), ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm p_110 (ATerm), ATerm);
ATerm j_34 (ATerm d_34, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm c_10 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm g_95 (ATerm), ATerm);
ATerm debug_1_0 (ATerm l_107 (ATerm), ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm f_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm a_11 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm j_11 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_108 (ATerm), ATerm);
ATerm o_11 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm p_11 (ATerm);
ATerm need_help_1_0 (ATerm n_111 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm p_86 (ATerm), ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm q_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm w_11 (ATerm);
ATerm x_11 (ATerm);
ATerm y_11 (ATerm);
ATerm a_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm b_12 (ATerm);
ATerm parse_options_p__1_0 (ATerm q_113 (ATerm), ATerm);
ATerm j_12 (ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm parse_options_1_0 (ATerm p_113 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm);
ATerm s_12 (ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm w_12 (ATerm);
ATerm y_12 (ATerm);
ATerm iowrap_3_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm);
ATerm a_13 (ATerm);
ATerm b_13 (ATerm);
ATerm c_13 (ATerm);
ATerm g_13 (ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm k_13 (ATerm);
ATerm m_13 (ATerm);
ATerm o_13 (ATerm);
ATerm p_13 (ATerm);
ATerm q_13 (ATerm);
ATerm r_13 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_0 = NULL,e_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL;
  z_0 = t;
  t = term_s_13;
  t = whoami_0_0(t);
  e_1 = t;
  t = term_t_13;
  g_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_13), e_1), term_u_13);
  h_1 = t;
  t = SSL_printnl(g_1, h_1);
  t = term_w_13;
  i_1 = t;
  t = SSL_exit(i_1);
  t = z_0;
  return(t);
}
ATerm SDefT_4_0 (ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm e_81 (ATerm), ATerm t)
{
  ATerm j_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL,n_0 = NULL,o_0 = NULL;
  t_1 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      l_1 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
      n_1 = ATgetArgument(t, 2);
      o_1 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_1);
  j_1 = t;
  t = l_1;
  t = b_81(t);
  p_1 = t;
  t = m_1;
  t = c_81(t);
  q_1 = t;
  t = n_1;
  t = d_81(t);
  r_1 = t;
  t = o_1;
  t = e_81(t);
  s_1 = t;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, p_1, q_1, r_1, s_1);
  n_0 = t;
  t = SSLsetAnnotations(n_0, j_1);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      z_1 = ATgetArgument(t, 0);
      {
        ATerm y_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_1), term_a_14);
  t = assert_1_0(v_5, t);
  t = a_2;
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm prop_sdef_1_0 (ATerm e_87 (ATerm), ATerm t)
{
  ATerm x_1 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm g_14 = ATgetArgument(t, 0);
      ATerm h_14 = ATgetArgument(t, 1);
      x_1 = ATgetArgument(t, 2);
      {
        ATerm j_14 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm q_5 (ATerm t)
    {
      ATerm y_1 = NULL;
      ATerm w_5 (ATerm t)
      {
        ATerm b_2 = NULL;
        b_2 = t;
        t = term_k_14;
        t = assert_1_0(x_5, t);
        t = b_2;
        t = e_87(t);
        return(t);
      }
      if(((y_1 != NULL) && (y_1 != t)))
        _fail(t);
      else
        y_1 = t;
      t = x_1;
      t = map_1_0(s_5, t);
      t = not_null(y_1);
      t = SDefT_4_0(_id, _id, _id, w_5, t);
      return(t);
    }
    t = scope_2_0(p_5, q_5, t);
  }
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL;
  c_2 = t;
  t = term_k_14;
  t = assert_1_0(z_5, t);
  t = c_2;
  t = save_Binding_0_0(t);
  d_2 = t;
  t = c_2;
  t = v_86(t);
  e_2 = t;
  t = term_k_14;
  t = assert_1_0(b_6, t);
  t = term_x_13;
  f_2 = t;
  t = SSL_table_destroy(f_2);
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, d_2);
  t = table_putlist_0_0(t);
  t = e_2;
  return(t);
}
ATerm Not_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,o_2 = NULL,q_2 = NULL,p_0 = NULL,r_0 = NULL;
  q_2 = t;
  if(match_cons(t, sym_Not_1))
    {
      m_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_2);
  l_2 = t;
  t = m_2;
  t = i_79(t);
  o_2 = t;
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, o_2);
  p_0 = t;
  t = SSLsetAnnotations(p_0, l_2);
  return(t);
}
ATerm assert_1_0 (ATerm u_105 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,d_3 = NULL,g_3 = NULL,m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      v_2 = ATgetArgument(t, 0);
      w_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_105(t);
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_2, v_2, w_2);
  t = table_push_0_0(t);
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_3 = NULL;
        t = term_o_14;
        s_3 = t;
        t = SSL_table_get(x_2, s_3);
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_3 = ATgetFirst((ATermList) t);
        g_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_o_14;
    m_3 = t;
    t = (ATerm) ATinsert(CheckATermList(g_3), (ATerm) ATinsert(CheckATermList(d_3), v_2));
    n_3 = t;
    t = SSL_table_put(x_2, m_3, n_3);
    t = (ATerm) ATmakeAppl(sym__2, v_2, w_2);
  }
  return(t);
}
ATerm Rec_2_0 (ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm t)
{
  ATerm w_3 = NULL,z_3 = NULL,a_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,s_0 = NULL,t_0 = NULL;
  e_4 = t;
  if(match_cons(t, sym_Rec_2))
    {
      z_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_4);
  w_3 = t;
  t = z_3;
  t = g_79(t);
  c_4 = t;
  t = a_4;
  t = h_79(t);
  d_4 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, c_4, d_4);
  s_0 = t;
  t = SSLsetAnnotations(s_0, w_3);
  return(t);
}
ATerm Let_2_0 (ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,v_0 = NULL,d_1 = NULL;
  p_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_4);
  j_4 = t;
  t = k_4;
  t = j_78(t);
  n_4 = t;
  t = m_4;
  t = k_78(t);
  o_4 = t;
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, n_4, o_4);
  v_0 = t;
  t = SSLsetAnnotations(v_0, j_4);
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm prop_let_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm s_4 = NULL,x_4 = NULL,y_4 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm t_14 = ATgetArgument(t, 0);
      ATerm u_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  s_4 = t;
  t = save_Binding_0_0(t);
  x_4 = t;
  t = save_CurrentTerm_0_0(t);
  y_4 = t;
  t = s_4;
  {
    ATerm c_6 (ATerm t)
    {
      ATerm e_6 (ATerm t)
      {
        ATerm z_4 = NULL,a_5 = NULL;
        z_4 = t;
        t = term_k_14;
        t = assert_1_0(f_6, t);
        t = term_x_13;
        a_5 = t;
        t = SSL_table_destroy(a_5);
        t = (ATerm) ATmakeAppl(sym__2, term_x_13, x_4);
        t = table_putlist_0_0(t);
        t = z_4;
        t = f_87(t);
        return(t);
      }
      t = map_1_0(e_6, t);
      return(t);
    }
    ATerm d_6 (ATerm t)
    {
      ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
      b_5 = t;
      t = term_b_14;
      c_5 = t;
      t = SSL_table_destroy(c_5);
      t = (ATerm) ATmakeAppl(sym__2, term_b_14, y_4);
      t = table_putlist_0_0(t);
      t = term_x_13;
      d_5 = t;
      t = SSL_table_destroy(d_5);
      t = (ATerm) ATmakeAppl(sym__2, term_x_13, x_4);
      t = table_putlist_0_0(t);
      t = b_5;
      t = f_87(t);
      return(t);
    }
    t = Let_2_0(c_6, d_6, t);
  }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,n_5 = NULL,o_5 = NULL,r_5 = NULL,k_1 = NULL,u_1 = NULL;
  r_5 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      i_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
      k_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_5);
  h_5 = t;
  t = i_5;
  t = d_79(t);
  l_5 = t;
  t = j_5;
  t = e_79(t);
  n_5 = t;
  t = k_5;
  t = f_79(t);
  o_5 = t;
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, l_5, n_5, o_5);
  k_1 = t;
  t = SSLsetAnnotations(k_1, h_5);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,x_7 = NULL;
      s_7 = t;
      if(match_cons(t, sym__2))
        {
          t_7 = ATgetArgument(t, 0);
          u_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_7;
      {
        ATerm y_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_7 = ATgetFirst((ATermList) t);
                {
                  ATerm a_15 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(z_14);
            t = v_7;
            {
              ATerm b_15 = t;
              int d_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm e_15 = ATgetArgument(t, 0);
                      x_7 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_15);
                  t = t_7;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm f_15 = t;
                      int g_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = s_7;
                          ;
                          LocalPopChoice(g_15);
                        }
                      else
                        {
                          t = f_15;
                          t = f_8(t_7, x_7, s_7, t);
                        }
                    }
                  else
                    {
                      t = f_8(t_7, x_7, s_7, t);
                    }
                }
              else
                {
                  t = b_15;
                  t = t_7;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = s_7;
                }
            }
          }
        else
          {
            t = y_14;
            t = t_7;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = s_7;
          }
      }
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
    }
  return(t);
}
ATerm f_8 (ATerm c_7, ATerm f_7, ATerm g_7, ATerm t)
{
  t = g_7;
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 = NULL;
        t = term_b_14;
        q_0 = t;
        t = SSL_table_get(q_0, c_7);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_15 = ATgetFirst((ATermList) t);
            if(match_cons(j_15, sym_Defined_2))
              {
                ATerm l_15 = ATgetArgument(j_15, 0);
                if((f_7 != ATgetArgument(j_15, 1)))
                  {
                    _fail(ATgetArgument(j_15, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm k_15 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = g_7;
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        t = (ATerm) ATmakeAppl(sym__2, c_7, (ATerm) ATinsert(ATempty, term_a_14));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm t_6 = NULL,a_7 = NULL;
  t = map_1_0(g_6, t);
  t_6 = t;
  t = term_b_14;
  a_7 = t;
  t = SSL_table_destroy(a_7);
  t = (ATerm) ATmakeAppl(sym__2, term_b_14, t_6);
  t = table_putlist_0_0(t);
  t = t_6;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm m_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,b_11 = NULL;
      w_10 = t;
      if(match_cons(t, sym__2))
        {
          x_10 = ATgetArgument(t, 0);
          y_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_10;
      {
        ATerm q_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_10 = ATgetFirst((ATermList) t);
                {
                  ATerm v_15 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(u_15);
            t = z_10;
            {
              ATerm x_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm z_15 = ATgetArgument(t, 0);
                      b_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(y_15);
                  t = x_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm a_16 = t;
                      int b_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_10;
                          ;
                          LocalPopChoice(b_16);
                        }
                      else
                        {
                          t = a_16;
                          t = e_11(x_10, b_11, w_10, t);
                        }
                    }
                  else
                    {
                      t = e_11(x_10, b_11, w_10, t);
                    }
                }
              else
                {
                  t = x_15;
                  t = x_10;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = w_10;
                }
            }
          }
        else
          {
            t = q_15;
            t = x_10;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = w_10;
          }
      }
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = m_15;
    }
  return(t);
}
ATerm e_11 (ATerm k_10, ATerm l_10, ATerm m_10, ATerm t)
{
  t = m_10;
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL;
        t = term_x_13;
        u_0 = t;
        t = SSL_table_get(u_0, k_10);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_16 = ATgetFirst((ATermList) t);
            if(match_cons(e_16, sym_Defined_2))
              {
                ATerm g_16 = ATgetArgument(e_16, 0);
                if((l_10 != ATgetArgument(e_16, 1)))
                  {
                    _fail(ATgetArgument(e_16, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm f_16 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = m_10;
        ;
        LocalPopChoice(d_16);
      }
    else
      {
        t = c_16;
        t = (ATerm) ATmakeAppl(sym__2, k_10, (ATerm) ATinsert(ATempty, term_a_14));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm g_10 = NULL,j_10 = NULL;
  t = map_1_0(h_6, t);
  g_10 = t;
  t = term_x_13;
  j_10 = t;
  t = SSL_table_destroy(j_10);
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, g_10);
  t = table_putlist_0_0(t);
  t = g_10;
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL;
  if(match_cons(t, sym__2))
    {
      i_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_11;
  {
    ATerm i_6 (ATerm t)
    {
      ATerm k_11 = NULL,l_11 = NULL;
      if(match_cons(t, sym__2))
        {
          k_11 = ATgetArgument(t, 0);
          l_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(i_11, k_11, l_11);
      t = (ATerm) ATmakeAppl(sym__3, i_11, k_11, l_11);
      return(t);
    }
    t = map_1_0(i_6, t);
  }
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  ATerm w_0 = NULL;
  t = term_b_14;
  w_0 = t;
  t = SSL_table_keys(w_0);
  {
    ATerm j_6 (ATerm t)
    {
      ATerm x_0 = NULL,y_0 = NULL;
      x_0 = t;
      t = SSL_table_get(w_0, x_0);
      y_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_0, y_0);
      return(t);
    }
    t = map_1_0(j_6, t);
  }
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  ATerm a_1 = NULL;
  t = term_x_13;
  a_1 = t;
  t = SSL_table_keys(a_1);
  {
    ATerm k_6 (ATerm t)
    {
      ATerm b_1 = NULL,c_1 = NULL;
      b_1 = t;
      t = SSL_table_get(a_1, b_1);
      c_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_1, c_1);
      return(t);
    }
    t = map_1_0(k_6, t);
  }
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,g_12 = NULL,h_12 = NULL,k_12 = NULL,o_12 = NULL,x_12 = NULL;
  z_11 = t;
  t = save_Binding_0_0(t);
  c_12 = t;
  t = save_CurrentTerm_0_0(t);
  d_12 = t;
  t = z_11;
  t = j_87(t);
  e_12 = t;
  t = save_Binding_0_0(t);
  g_12 = t;
  t = term_x_13;
  h_12 = t;
  t = SSL_table_destroy(h_12);
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, c_12);
  t = table_putlist_0_0(t);
  t = c_12;
  t = save_CurrentTerm_0_0(t);
  k_12 = t;
  t = term_b_14;
  o_12 = t;
  t = SSL_table_destroy(o_12);
  t = (ATerm) ATmakeAppl(sym__2, term_b_14, d_12);
  t = table_putlist_0_0(t);
  t = e_12;
  t = k_87(t);
  x_12 = t;
  t = g_12;
  t = isect_Binding_0_0(t);
  t = k_12;
  t = isect_CurrentTerm_0_0(t);
  t = x_12;
  return(t);
}
ATerm LChoice_2_0 (ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,j_13 = NULL,l_13 = NULL,n_13 = NULL,v_1 = NULL,w_1 = NULL;
  n_13 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      e_13 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_13);
  d_13 = t;
  t = e_13;
  t = z_78(t);
  j_13 = t;
  t = f_13;
  t = a_79(t);
  l_13 = t;
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, j_13, l_13);
  v_1 = t;
  t = SSLsetAnnotations(v_1, d_13);
  return(t);
}
ATerm GChoice_2_0 (ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm t)
{
  ATerm z_13 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,i_14 = NULL,g_2 = NULL,k_2 = NULL;
  i_14 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      c_14 = ATgetArgument(t, 0);
      d_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_14);
  z_13 = t;
  t = c_14;
  t = b_78(t);
  e_14 = t;
  t = d_14;
  t = c_78(t);
  f_14 = t;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym_GChoice_2, e_14, f_14);
  g_2 = t;
  t = SSLsetAnnotations(g_2, z_13);
  return(t);
}
ATerm Choice_2_0 (ATerm x_77 (ATerm), ATerm y_77 (ATerm), ATerm t)
{
  ATerm l_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,v_14 = NULL,s_2 = NULL,t_2 = NULL;
  v_14 = t;
  if(match_cons(t, sym_Choice_2))
    {
      p_14 = ATgetArgument(t, 0);
      q_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_14);
  l_14 = t;
  t = p_14;
  t = x_77(t);
  r_14 = t;
  t = q_14;
  t = y_77(t);
  s_14 = t;
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, r_14, s_14);
  s_2 = t;
  t = SSLsetAnnotations(s_2, l_14);
  return(t);
}
ATerm prop_choice_1_0 (ATerm i_87 (ATerm), ATerm t)
{
  ATerm c_15 = NULL;
  c_15 = t;
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm j_16 = ATgetArgument(t, 0);
            ATerm k_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(i_16);
        t = c_15;
        {
          ATerm l_6 (ATerm t)
          {
            t = Choice_2_0(i_87, _id, t);
            return(t);
          }
          ATerm o_6 (ATerm t)
          {
            t = Choice_2_0(_id, i_87, t);
            return(t);
          }
          t = prop_abstract_choice_2_0(l_6, o_6, t);
        }
      }
    else
      {
        t = h_16;
        {
          ATerm l_16 = t;
          int m_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm n_16 = ATgetArgument(t, 0);
                  ATerm p_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(m_16);
              t = c_15;
              {
                ATerm p_6 (ATerm t)
                {
                  t = GChoice_2_0(i_87, _id, t);
                  return(t);
                }
                ATerm q_6 (ATerm t)
                {
                  t = GChoice_2_0(_id, i_87, t);
                  return(t);
                }
                t = prop_abstract_choice_2_0(p_6, q_6, t);
              }
            }
          else
            {
              t = l_16;
              {
                ATerm r_16 = t;
                int s_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm t_16 = ATgetArgument(t, 0);
                        ATerm v_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(s_16);
                    t = c_15;
                    {
                      ATerm r_6 (ATerm t)
                      {
                        t = LChoice_2_0(i_87, _id, t);
                        return(t);
                      }
                      ATerm s_6 (ATerm t)
                      {
                        t = LChoice_2_0(_id, i_87, t);
                        return(t);
                      }
                      t = prop_abstract_choice_2_0(r_6, s_6, t);
                    }
                  }
                else
                  {
                    t = r_16;
                    if(match_cons(t, sym_GuardedLChoice_3))
                      {
                        ATerm w_16 = ATgetArgument(t, 0);
                        ATerm x_16 = ATgetArgument(t, 1);
                        ATerm y_16 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = c_15;
                    {
                      ATerm u_6 (ATerm t)
                      {
                        t = GuardedLChoice_3_0(i_87, _id, _id, t);
                        t = GuardedLChoice_3_0(_id, i_87, _id, t);
                        return(t);
                      }
                      ATerm v_6 (ATerm t)
                      {
                        t = GuardedLChoice_3_0(_id, _id, i_87, t);
                        return(t);
                      }
                      t = prop_abstract_choice_2_0(u_6, v_6, t);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Seq_2_0 (ATerm x_78 (ATerm), ATerm y_78 (ATerm), ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,w_15 = NULL,u_2 = NULL,b_3 = NULL;
  w_15 = t;
  if(match_cons(t, sym_Seq_2))
    {
      o_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_15);
  n_15 = t;
  t = o_15;
  t = x_78(t);
  s_15 = t;
  t = r_15;
  t = y_78(t);
  t_15 = t;
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, s_15, t_15);
  u_2 = t;
  t = SSLsetAnnotations(u_2, n_15);
  return(t);
}
ATerm Cong_2_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,q_16 = NULL,u_16 = NULL,i_17 = NULL,j_17 = NULL,m_17 = NULL,c_3 = NULL,e_3 = NULL;
  m_17 = t;
  if(match_cons(t, sym_Cong_2))
    {
      q_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_17);
  o_16 = t;
  t = q_16;
  t = s_73(t);
  i_17 = t;
  t = u_16;
  t = t_73(t);
  j_17 = t;
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, i_17, j_17);
  c_3 = t;
  t = SSLsetAnnotations(c_3, o_16);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_17 = NULL;
      u_17 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm b_17 = ATgetArgument(t, 0);
          ATerm c_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = term_k_14;
      t = assert_1_0(w_6, t);
      t = u_17;
      {
        ATerm x_6 (ATerm t)
        {
          ATerm y_6 (ATerm t)
          {
            t = exec_maybe_1_0(m_0, t);
            return(t);
          }
          t = map_1_0(y_6, t);
          return(t);
        }
        t = Cong_2_0(_id, x_6, t);
      }
      ;
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      {
        ATerm b_18 = NULL;
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm f_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            ;
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            {
              ATerm c_18 = NULL;
              c_18 = t;
              {
                ATerm g_17 = t;
                int h_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_One_1))
                      {
                        ATerm k_17 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_17);
                    t = c_18;
                  }
                else
                  {
                    t = g_17;
                    {
                      ATerm l_17 = t;
                      int n_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm o_17 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(n_17);
                          t = c_18;
                        }
                      else
                        {
                          t = l_17;
                          {
                            ATerm p_17 = t;
                            int q_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm r_17 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(q_17);
                                t = c_18;
                              }
                            else
                              {
                                t = p_17;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm s_17 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = c_18;
                              }
                          }
                        }
                    }
                  }
              }
            }
          }
        b_18 = t;
        t = term_k_14;
        t = assert_1_0(z_6, t);
        t = b_18;
        {
          ATerm b_7 (ATerm t)
          {
            t = exec_maybe_1_0(m_0, t);
            return(t);
          }
          t = SRTS_one(b_7, t);
        }
      }
    }
  return(t);
}
ATerm CallT_3_0 (ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,m_18 = NULL,x_18 = NULL,a_19 = NULL,b_19 = NULL,f_3 = NULL,h_3 = NULL;
  b_19 = t;
  if(match_cons(t, sym_CallT_3))
    {
      i_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
      k_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_19);
  h_18 = t;
  t = i_18;
  t = n_78(t);
  m_18 = t;
  t = j_18;
  t = o_78(t);
  x_18 = t;
  t = k_18;
  t = p_78(t);
  a_19 = t;
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, m_18, x_18, a_19);
  f_3 = t;
  t = SSLsetAnnotations(f_3, h_18);
  return(t);
}
ATerm PrimT_3_0 (ATerm p_79 (ATerm), ATerm q_79 (ATerm), ATerm r_79 (ATerm), ATerm t)
{
  ATerm i_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,b_20 = NULL,f_20 = NULL,h_20 = NULL,k_20 = NULL,i_3 = NULL,j_3 = NULL;
  k_20 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      m_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
      o_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_20);
  i_19 = t;
  t = m_19;
  t = p_79(t);
  b_20 = t;
  t = n_19;
  t = q_79(t);
  f_20 = t;
  t = o_19;
  t = r_79(t);
  h_20 = t;
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, b_20, f_20, h_20);
  i_3 = t;
  t = SSLsetAnnotations(i_3, i_19);
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = alltd_1_0(l_7, t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = Binding_0_0(t);
  t = Var_1_0(_id, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = alltd_1_0(q_7, t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = Binding_0_0(t);
  t = Var_1_0(_id, t);
  return(t);
}
ATerm prop_call_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  {
    ATerm t_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm w_17 = ATgetArgument(t, 0);
            ATerm x_17 = ATgetArgument(t, 1);
            ATerm y_17 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(v_17);
        t = term_k_14;
        t = assert_1_0(d_7, t);
        t = c_21;
        {
          ATerm i_7 (ATerm t)
          {
            ATerm k_7 (ATerm t)
            {
              t = exec_maybe_1_0(l_0, t);
              return(t);
            }
            t = map_1_0(k_7, t);
            return(t);
          }
          t = PrimT_3_0(_id, i_7, j_7, t);
        }
      }
    else
      {
        t = t_17;
        if(match_cons(t, sym_CallT_3))
          {
            ATerm z_17 = ATgetArgument(t, 0);
            ATerm a_18 = ATgetArgument(t, 1);
            ATerm d_18 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = term_k_14;
        t = assert_1_0(m_7, t);
        t = c_21;
        {
          ATerm n_7 (ATerm t)
          {
            ATerm p_7 (ATerm t)
            {
              t = exec_maybe_1_0(l_0, t);
              return(t);
            }
            t = map_1_0(p_7, t);
            return(t);
          }
          t = CallT_3_0(_id, n_7, o_7, t);
        }
      }
  }
  return(t);
}
ATerm Scope_2_0 (ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,f_22 = NULL,o_22 = NULL,v_22 = NULL,c_23 = NULL,l_23 = NULL,k_3 = NULL,l_3 = NULL;
  l_23 = t;
  if(match_cons(t, sym_Scope_2))
    {
      f_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_23);
  y_21 = t;
  t = f_22;
  t = t_78(t);
  v_22 = t;
  t = o_22;
  t = u_78(t);
  c_23 = t;
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, v_22, c_23);
  k_3 = t;
  t = SSLsetAnnotations(k_3, y_21);
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm d_24 = NULL;
  d_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, d_24), term_a_14);
  t = assert_1_0(b_8, t);
  t = d_24;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm prop_scope_1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm a_24 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      a_24 = ATgetArgument(t, 0);
      {
        ATerm e_18 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm y_7 (ATerm t)
    {
      ATerm b_24 = NULL,c_24 = NULL;
      b_24 = t;
      t = a_24;
      t = map_1_0(a_8, t);
      t = b_24;
      t = Scope_2_0(_id, d_87, t);
      c_24 = t;
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_24 = NULL;
            t = CurrentTerm_0_0(t);
            {
              ATerm e_8 (ATerm t)
              {
                ATerm f_24 = NULL;
                ATerm g_8 (ATerm t)
                {
                  if(((f_24 != NULL) && (f_24 != t)))
                    _fail(t);
                  else
                    f_24 = t;
                  return(t);
                }
                if(match_cons(t, sym_Var_1))
                  {
                    if(((f_24 != NULL) && (f_24 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      f_24 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_24;
                t = fetch_1_0(g_8, t);
                return(t);
              }
              t = oncetd_1_0(e_8, t);
              e_24 = t;
              t = term_k_14;
              t = assert_1_0(h_8, t);
              t = e_24;
            }
            ;
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
          }
        t = c_24;
      }
      return(t);
    }
    t = scope_2_0(w_7, y_7, t);
  }
  return(t);
}
ATerm Build_1_0 (ATerm r_78 (ATerm), ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,o_3 = NULL,p_3 = NULL;
  j_24 = t;
  if(match_cons(t, sym_Build_1))
    {
      h_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_24);
  g_24 = t;
  t = h_24;
  t = r_78(t);
  i_24 = t;
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, i_24);
  o_3 = t;
  t = SSLsetAnnotations(o_3, g_24);
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = alltd_1_0(Binding_0_0, t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm m_24 = NULL;
  t = Build_1_0(i_8, t);
  if(match_cons(t, sym_Build_1))
    {
      m_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_18, m_24));
  t = assert_1_0(j_8, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, m_24);
  return(t);
}
ATerm oncetd_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm n_24 (ATerm t)
  {
    ATerm n_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_90(t);
        ;
        LocalPopChoice(o_18);
      }
    else
      {
        t = n_18;
        t = SRTS_one(n_24, t);
      }
    return(t);
  }
  t = n_24(t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = r_24;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm p_18 = ATgetArgument(t, 0);
          ATerm q_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_24;
    }
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm introduce_binding_0_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_18 = ATgetArgument(t, 0);
      if(match_cons(r_18, sym_Var_1))
        {
          p_24 = ATgetArgument(r_18, 0);
        }
      else
        _fail(t);
      q_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_24;
  {
    ATerm s_18 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(k_8, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_18;
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_24), (ATerm) ATmakeAppl(sym_Defined_2, term_t_18, q_24));
    t = assert_1_0(l_8, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_24), q_24);
  }
  return(t);
}
ATerm Var_1_0 (ATerm z_74 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,q_3 = NULL,r_3 = NULL;
  x_24 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_24);
  u_24 = t;
  t = v_24;
  t = z_74(t);
  w_24 = t;
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_24);
  q_3 = t;
  t = SSLsetAnnotations(q_3, u_24);
  return(t);
}
ATerm at_end_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  ATerm h_25 (ATerm t)
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, h_25, t);
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_95(t);
      }
    return(t);
  }
  t = h_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_18);
    }
  else
    {
      t = w_18;
      {
        ATerm c_25 = NULL,d_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_25 = ATgetFirst((ATermList) t);
            d_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_25;
        {
          ATerm m_8 (ATerm t)
          {
            t = d_25;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_8, t);
        }
      }
    }
  return(t);
}
ATerm s_25 (ATerm k_25, ATerm t)
{
  ATerm m_25 = NULL;
  t = SSL_explode_term(k_25);
  if(match_cons(t, sym__2))
    {
      ATerm z_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_25;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
  p_25 = t;
  if(match_cons(t, sym__2))
    {
      n_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_8 (ATerm t)
            {
              t = o_25;
              return(t);
            }
            t = n_25;
            t = at_end_1_0(n_8, t);
            ;
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            t = s_25(p_25, t);
          }
      }
    }
  else
    {
      t = s_25(p_25, t);
    }
  return(t);
}
ATerm o_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_19 = ATgetArgument(t, 0);
      if(((ATgetType(e_19) != AT_LIST) || !(ATisEmpty(e_19))))
        _fail(t);
      {
        ATerm f_19 = ATgetArgument(t, 1);
        if(((ATgetType(f_19) != AT_LIST) || !(ATisEmpty(f_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_19 = ATgetArgument(t, 0);
      if(((ATgetType(g_19) == AT_LIST) && !(ATisEmpty(g_19))))
        {
          a_26 = ATgetFirst((ATermList) g_19);
          c_26 = (ATerm) ATgetNext((ATermList) g_19);
        }
      else
        _fail(t);
      {
        ATerm h_19 = ATgetArgument(t, 1);
        if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
          {
            b_26 = ATgetFirst((ATermList) h_19);
            d_26 = (ATerm) ATgetNext((ATermList) h_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_26, b_26), (ATerm) ATmakeAppl(sym__2, c_26, d_26));
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL;
  if(match_cons(t, sym__2))
    {
      e_26 = ATgetArgument(t, 0);
      f_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_26), e_26);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_19 = ATgetFirst((ATermList) t);
      if(match_cons(j_19, sym__2))
        {
          t_25 = ATgetArgument(j_19, 0);
          u_25 = ATgetArgument(j_19, 1);
        }
      else
        _fail(t);
      v_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(u_25);
  if(match_cons(t, sym__2))
    {
      w_25 = ATgetArgument(t, 0);
      x_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_25);
  if(match_cons(t, sym__2))
    {
      if((w_25 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      y_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_25, x_25);
  t = genzip_4_0(o_8, p_8, q_8, _id, t);
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_25, v_25);
  t = conc_0_0(t);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
  if(match_cons(t, sym__2))
    {
      m_26 = ATgetArgument(t, 0);
      n_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_26 = ATgetFirst((ATermList) t);
      p_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_26;
  if(match_cons(t, sym__2))
    {
      j_26 = ATgetArgument(t, 0);
      k_26 = ATgetArgument(t, 1);
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_26;
            if((m_26 != t))
              {
                _fail(t);
              }
            t = k_26;
            ;
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            t = (ATerm) ATmakeAppl(sym__2, m_26, p_26);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, m_26, p_26);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm t)
{
  ATerm a_27 (ATerm t)
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_96(t);
        ;
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = a_97(t);
        t = _2_0(c_97, a_27, t);
        t = b_97(t);
      }
    return(t);
  }
  t = a_27(t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_19 = ATgetArgument(t, 0);
      if(((ATgetType(r_19) != AT_LIST) || !(ATisEmpty(r_19))))
        _fail(t);
      {
        ATerm s_19 = ATgetArgument(t, 1);
        if(((ATgetType(s_19) != AT_LIST) || !(ATisEmpty(s_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_19 = ATgetArgument(t, 0);
      if(((ATgetType(t_19) == AT_LIST) && !(ATisEmpty(t_19))))
        {
          k_27 = ATgetFirst((ATermList) t_19);
          m_27 = (ATerm) ATgetNext((ATermList) t_19);
        }
      else
        _fail(t);
      {
        ATerm u_19 = ATgetArgument(t, 1);
        if(((ATgetType(u_19) == AT_LIST) && !(ATisEmpty(u_19))))
          {
            l_27 = ATgetFirst((ATermList) u_19);
            n_27 = (ATerm) ATgetNext((ATermList) u_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_27, l_27), (ATerm) ATmakeAppl(sym__2, m_27, n_27));
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL;
  if(match_cons(t, sym__2))
    {
      o_27 = ATgetArgument(t, 0);
      p_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_27), o_27);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL;
  c_27 = t;
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_19 = ATgetArgument(t, 0);
            ATerm y_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(w_19);
        t = c_27;
      }
    else
      {
        t = v_19;
        {
          ATerm j_27 = NULL;
          if(match_cons(t, sym__3))
            {
              d_27 = ATgetArgument(t, 0);
              e_27 = ATgetArgument(t, 1);
              f_27 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, d_27, e_27);
          t = genzip_4_0(s_8, t_8, u_8, _id, t);
          j_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_27, f_27);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      r_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_27;
  {
    ATerm w_8 (ATerm t)
    {
      ATerm f_1 = NULL;
      t = u_113(t);
      f_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_1, r_27);
      t = lookup_0_0(t);
      t = v_113(t);
      return(t);
    }
    t = alltd_1_0(w_8, t);
  }
  return(t);
}
ATerm UfVar_1_0 (ATerm g_117 (ATerm), ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_19 = ATgetArgument(t, 0);
      if(((ATgetType(z_19) == AT_LIST) && !(ATisEmpty(z_19))))
        {
          ATerm a_20 = ATgetFirst((ATermList) z_19);
          if(match_cons(a_20, sym__2))
            {
              s_27 = ATgetArgument(a_20, 0);
              t_27 = ATgetArgument(a_20, 1);
            }
          else
            _fail(t);
          u_27 = (ATerm) ATgetNext((ATermList) z_19);
        }
      else
        _fail(t);
      v_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_27;
  t = g_117(t);
  t = (ATerm) ATmakeAppl(sym__2, s_27, t_27);
  {
    ATerm c_20 = t;
    if((PushChoice() == 0))
      {
        ATerm y_27 = NULL,z_27 = NULL;
        if(match_cons(t, sym__2))
          {
            y_27 = ATgetArgument(t, 0);
            z_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_27;
        {
          ATerm x_8 (ATerm t)
          {
            if((y_27 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(x_8, t);
          t = (ATerm) ATmakeAppl(sym__2, y_27, z_27);
        }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_20;
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_27, t_27)), (ATerm) ATmakeAppl(sym__2, v_27, u_27));
    t = substitute_2_0(g_117, _id, t);
    if(match_cons(t, sym__2))
      {
        w_27 = ATgetArgument(t, 0);
        x_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, x_27, (ATerm) ATinsert(CheckATermList(w_27), (ATerm) ATmakeAppl(sym__2, s_27, t_27)));
  }
  return(t);
}
ATerm while_not_2_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm t)
{
  ATerm a_28 (ATerm t)
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_88(t);
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = x_88(t);
        t = a_28(t);
      }
    return(t);
  }
  t = a_28(t);
  return(t);
}
ATerm for_3_0 (ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm t)
{
  t = z_88(t);
  t = while_not_2_0(a_89, b_89, t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm b_28 = NULL;
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_28, (ATerm) ATempty);
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm c_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_20 = ATgetArgument(t, 0);
      if(((ATgetType(g_20) != AT_LIST) || !(ATisEmpty(g_20))))
        _fail(t);
      c_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_28;
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(c_9, _id, t);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UfVar_1_0(d_9, t);
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            {
              ATerm n_20 = t;
              int o_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = _2_0(UfDecompose_0_0, _id, t);
                  ;
                  LocalPopChoice(o_20);
                }
              else
                {
                  t = n_20;
                  {
                    ATerm p_20 = t;
                    int q_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = _2_0(e_9, _id, t);
                        ;
                        LocalPopChoice(q_20);
                      }
                    else
                      {
                        t = p_20;
                        {
                          ATerm r_20 = t;
                          int s_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = _2_0(f_9, _id, t);
                              ;
                              LocalPopChoice(s_20);
                            }
                          else
                            {
                              t = r_20;
                              t = _2_0(g_9, _id, t);
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
ATerm c_9 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_20 = ATgetFirst((ATermList) t);
      if(match_cons(t_20, sym__2))
        {
          d_28 = ATgetArgument(t_20, 0);
          if((d_28 != ATgetArgument(t_20, 1)))
            {
              _fail(ATgetArgument(t_20, 1));
            }
        }
      else
        _fail(t);
      e_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_28;
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_20 = ATgetFirst((ATermList) t);
      if(match_cons(u_20, sym__2))
        {
          ATerm v_20 = ATgetArgument(u_20, 0);
          if(match_cons(v_20, sym_As_2))
            {
              f_28 = ATgetArgument(v_20, 0);
              g_28 = ATgetArgument(v_20, 1);
            }
          else
            _fail(t);
          h_28 = ATgetArgument(u_20, 1);
        }
      else
        _fail(t);
      i_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(i_28), (ATerm) ATmakeAppl(sym__2, g_28, h_28)), (ATerm) ATmakeAppl(sym__2, f_28, h_28));
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm j_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_20 = ATgetFirst((ATermList) t);
      if(match_cons(w_20, sym__2))
        {
          ATerm x_20 = ATgetArgument(w_20, 0);
          if(!(match_cons(x_20, sym_Wld_0)))
            _fail(t);
          {
            ATerm y_20 = ATgetArgument(w_20, 1);
          }
        }
      else
        _fail(t);
      j_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_28;
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_20 = ATgetFirst((ATermList) t);
      if(match_cons(z_20, sym__2))
        {
          k_28 = ATgetArgument(z_20, 0);
          l_28 = ATgetArgument(z_20, 1);
        }
      else
        _fail(t);
      m_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_28;
  {
    ATerm a_21 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_21;
      }
    t = l_28;
    t = Var_1_0(_id, t);
    t = m_28;
  }
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(y_8, a_9, b_9, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm b_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_28 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
      t = (ATerm) ATempty;
      h_2 = t;
      t = term_b_14;
      i_2 = t;
      t = SSL_table_get(i_2, h_2);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_2 = ATgetFirst((ATermList) t);
          {
            ATerm e_21 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = j_2;
      if(match_cons(t, sym_Defined_2))
        {
          ATerm f_21 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) f_21) != ATmakeSymbol("i_0", 0, ATtrue)))
            _fail(t);
          n_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_28;
      ;
      LocalPopChoice(d_21);
    }
  else
    {
      t = b_21;
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_28 = NULL,n_2 = NULL,p_2 = NULL,r_2 = NULL;
            t = (ATerm) ATempty;
            n_2 = t;
            t = term_b_14;
            p_2 = t;
            t = SSL_table_get(p_2, n_2);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_2 = ATgetFirst((ATermList) t);
                {
                  ATerm i_21 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = r_2;
            if(match_cons(t, sym_Defined_2))
              {
                ATerm j_21 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) j_21) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                o_28 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_28;
            ;
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            {
              ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
              t = (ATerm) ATempty;
              y_2 = t;
              t = term_b_14;
              z_2 = t;
              t = SSL_table_get(z_2, y_2);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_3 = ATgetFirst((ATermList) t);
                  {
                    ATerm k_21 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = a_3;
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
  ATerm d_29 = NULL;
  d_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm l_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_3 = NULL,b_4 = NULL,f_4 = NULL;
        t = term_x_13;
        b_4 = t;
        t = SSL_table_get(b_4, d_29);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_4 = ATgetFirst((ATermList) t);
            {
              ATerm o_21 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = f_4;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm p_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_21) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
            v_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_3;
        ;
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        {
          ATerm q_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_4 = NULL,e_5 = NULL;
              t = term_x_13;
              w_4 = t;
              t = SSL_table_get(w_4, d_29);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_5 = ATgetFirst((ATermList) t);
                  {
                    ATerm s_21 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = e_5;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              {
                ATerm t_5 = NULL,u_5 = NULL;
                t = term_x_13;
                t_5 = t;
                t = SSL_table_get(t_5, d_29);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_5 = ATgetFirst((ATermList) t);
                    {
                      ATerm t_21 = (ATerm) ATgetNext((ATermList) t);
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
ATerm alltd_1_0 (ATerm x_90 (ATerm), ATerm t)
{
  ATerm i_29 (ATerm t)
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_90(t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = SRTS_all(i_29, t);
      }
    return(t);
  }
  t = i_29(t);
  return(t);
}
ATerm Match_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,t_3 = NULL,u_3 = NULL;
  m_29 = t;
  if(match_cons(t, sym_Match_1))
    {
      k_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_29);
  j_29 = t;
  t = k_29;
  t = q_78(t);
  l_29 = t;
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, l_29);
  t_3 = t;
  t = SSLsetAnnotations(t_3, j_29);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = alltd_1_0(Binding_0_0, t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = introduce_binding_0_0(t);
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
    }
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm s_29 = NULL;
  s_29 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = s_29;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm a_22 = ATgetArgument(t, 0);
          ATerm b_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_29;
    }
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL;
  t = Match_1_0(h_9, t);
  if(match_cons(t, sym_Match_1))
    {
      q_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        r_29 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, q_29);
        {
          ATerm e_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_29, r_29));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(i_9, t);
              t = (ATerm) ATmakeAppl(sym_Match_1, q_29);
              ;
              LocalPopChoice(g_22);
            }
          else
            {
              t = e_22;
              t = (ATerm) ATmakeAppl(sym__4, term_h_22, (ATerm)ATmakeAppl(sym_Match_1, q_29), term_i_22, r_29);
              t = debug_1_0(j_9, t);
              t = term_j_22;
            }
        }
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        {
          ATerm k_22 = t;
          int l_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_29;
              {
                ATerm m_22 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(k_9, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_22;
                  }
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_22, q_29));
                t = assert_1_0(l_9, t);
                t = (ATerm) ATmakeAppl(sym_Match_1, q_29);
              }
              ;
              LocalPopChoice(l_22);
            }
          else
            {
              t = k_22;
            }
        }
      }
  }
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = exec_maybe_1_0(cp_0_0, t);
  return(t);
}
ATerm n_9 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = exec_maybe_1_0(cp_0_0, t);
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
      ;
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      {
        ATerm r_22 = t;
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0_0(t);
            ;
            LocalPopChoice(s_22);
          }
        else
          {
            t = r_22;
            {
              ATerm t_22 = t;
              int u_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = prop_scope_1_0(cp_0_0, t);
                  ;
                  LocalPopChoice(u_22);
                }
              else
                {
                  t = t_22;
                  {
                    ATerm w_22 = t;
                    int x_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        ;
                        LocalPopChoice(x_22);
                      }
                    else
                      {
                        t = w_22;
                        {
                          ATerm y_22 = t;
                          int z_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
                              ;
                              LocalPopChoice(z_22);
                            }
                          else
                            {
                              t = y_22;
                              {
                                ATerm a_23 = t;
                                int b_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Seq_2_0(cp_0_0, cp_0_0, t);
                                    ;
                                    LocalPopChoice(b_23);
                                  }
                                else
                                  {
                                    t = a_23;
                                    {
                                      ATerm d_23 = t;
                                      int e_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1_0(cp_0_0, t);
                                          ;
                                          LocalPopChoice(e_23);
                                        }
                                      else
                                        {
                                          t = d_23;
                                          {
                                            ATerm f_23 = t;
                                            int g_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = prop_let_1_0(cp_0_0, t);
                                                ;
                                                LocalPopChoice(g_23);
                                              }
                                            else
                                              {
                                                t = f_23;
                                                {
                                                  ATerm h_23 = t;
                                                  int i_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_29 = NULL;
                                                      x_29 = t;
                                                      {
                                                        ATerm j_23 = t;
                                                        int k_23 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm m_23 = ATgetArgument(t, 0);
                                                                ATerm n_23 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(k_23);
                                                            t = x_29;
                                                            t = Rec_2_0(_id, m_9, t);
                                                          }
                                                        else
                                                          {
                                                            t = j_23;
                                                            if(match_cons(t, sym_Not_1))
                                                              {
                                                                ATerm o_23 = ATgetArgument(t, 0);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = term_k_14;
                                                            t = assert_1_0(n_9, t);
                                                            t = x_29;
                                                            t = Not_1_0(o_9, t);
                                                          }
                                                      }
                                                      ;
                                                      LocalPopChoice(i_23);
                                                    }
                                                  else
                                                    {
                                                      t = h_23;
                                                      {
                                                        ATerm p_23 = t;
                                                        int q_23 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = prop_sdef_1_0(cp_0_0, t);
                                                            ;
                                                            LocalPopChoice(q_23);
                                                          }
                                                        else
                                                          {
                                                            t = p_23;
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
ATerm table_pop_rm_0_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  if(match_cons(t, sym__2))
    {
      a_30 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(a_30, b_30);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_23 = ATgetFirst((ATermList) t);
            c_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(s_23);
        t = SSL_table_put(a_30, b_30, c_30);
        t = (ATerm) ATmakeAppl(sym__3, a_30, b_30, c_30);
      }
    else
      {
        t = r_23;
        t = SSL_table_remove(a_30, b_30);
        t = (ATerm) ATmakeAppl(sym__2, a_30, b_30);
      }
    t = (ATerm) ATmakeAppl(sym__2, a_30, b_30);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
  d_30 = t;
  t = r_105(t);
  e_30 = t;
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_30 = NULL;
        t = term_o_14;
        i_30 = t;
        t = SSL_table_get(e_30, i_30);
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_30 = ATgetFirst((ATermList) t);
        f_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_o_14;
    h_30 = t;
    t = SSL_table_put(e_30, h_30, f_30);
    t = g_30;
    {
      ATerm p_9 (ATerm t)
      {
        ATerm j_30 = NULL;
        j_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_30, j_30);
        t = table_pop_rm_0_0(t);
        return(t);
      }
      t = map_1_0(p_9, t);
      t = d_30;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm t)
{
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_88(t);
      t = b_88(t);
      ;
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
      t = b_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL;
  m_30 = t;
  t = q_105(t);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_30, term_o_14);
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_24 = ATgetArgument(t, 0);
            ATerm l_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_14;
        y_5 = t;
        t = SSL_table_get(n_30, y_5);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = (ATerm) ATempty;
      }
    o_30 = t;
    t = term_o_14;
    p_30 = t;
    t = (ATerm) ATinsert(CheckATermList(o_30), (ATerm) ATempty);
    q_30 = t;
    t = SSL_table_put(n_30, p_30, q_30);
    t = m_30;
  }
  return(t);
}
ATerm scope_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm t)
{
  t = begin_scope_1_0(s_105, t);
  {
    ATerm q_9 (ATerm t)
    {
      t = end_scope_1_0(s_105, t);
      return(t);
    }
    t = restore_always_2_0(t_105, q_9, t);
  }
  return(t);
}
ATerm map_1_0 (ATerm w_94 (ATerm), ATerm t)
{
  ATerm x_30 (ATerm t)
  {
    ATerm o_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(s_24);
      }
    else
      {
        t = o_24;
        t = Cons_2_0(w_94, x_30, t);
      }
    return(t);
  }
  t = x_30(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm w_73 (ATerm), ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,x_3 = NULL,y_3 = NULL;
  b_31 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      z_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_31);
  y_30 = t;
  t = z_30;
  t = w_73(t);
  a_31 = t;
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_31);
  x_3 = t;
  t = SSLsetAnnotations(x_3, y_30);
  return(t);
}
ATerm Cons_2_0 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,g_4 = NULL,h_4 = NULL;
  j_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_31 = ATgetFirst((ATermList) t);
      g_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_31);
  e_31 = t;
  t = f_31;
  t = q_73(t);
  h_31 = t;
  t = g_31;
  t = r_73(t);
  i_31 = t;
  h_4 = t;
  t = (ATerm) ATinsert(CheckATermList(i_31), h_31);
  g_4 = t;
  t = SSLsetAnnotations(g_4, e_31);
  return(t);
}
ATerm Signature_1_0 (ATerm x_73 (ATerm), ATerm t)
{
  ATerm p_31 = NULL,r_31 = NULL,u_31 = NULL,z_31 = NULL,i_4 = NULL,l_4 = NULL;
  z_31 = t;
  if(match_cons(t, sym_Signature_1))
    {
      r_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_31);
  p_31 = t;
  t = r_31;
  t = x_73(t);
  u_31 = t;
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, u_31);
  i_4 = t;
  t = SSLsetAnnotations(i_4, p_31);
  return(t);
}
ATerm Specification_1_0 (ATerm b_74 (ATerm), ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_4 = NULL,r_4 = NULL;
  p_32 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_32);
  m_32 = t;
  t = n_32;
  t = b_74(t);
  o_32 = t;
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_32);
  q_4 = t;
  t = SSLsetAnnotations(q_4, m_32);
  return(t);
}
ATerm _2_0 (ATerm b_69 (ATerm), ATerm c_69 (ATerm), ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,t_4 = NULL,u_4 = NULL;
  x_32 = t;
  if(match_cons(t, sym__2))
    {
      t_32 = ATgetArgument(t, 0);
      u_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_32);
  s_32 = t;
  t = t_32;
  t = b_69(t);
  v_32 = t;
  t = u_32;
  t = c_69(t);
  w_32 = t;
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_32, w_32);
  t_4 = t;
  t = SSLsetAnnotations(t_4, s_32);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
  if(match_cons(t, sym__2))
    {
      e_33 = ATgetArgument(t, 0);
      f_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_33, term_t_24);
  t = open_stream_0_0(t);
  g_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_33, f_33);
  t = n_107(t);
  t = fclose_0_0(t);
  t = f_33;
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = fetch_1_0(w_9, t);
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = WriteToFile_1_0(x_9, t);
  return(t);
}
ATerm w_9 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_24 = ATgetArgument(t, 0);
      if(match_cons(y_24, sym_Stream_1))
        {
          j_33 = ATgetArgument(y_24, 0);
        }
      else
        _fail(t);
      k_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(j_33, k_33);
  l_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_33);
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = WriteToFile_1_0(z_9, t);
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_24 = ATgetArgument(t, 0);
      if(match_cons(z_24, sym_Stream_1))
        {
          m_33 = ATgetArgument(z_24, 0);
        }
      else
        _fail(t);
      n_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(m_33, n_33);
  o_33 = t;
  t = term_a_25;
  p_33 = t;
  t = SSL_fputc(p_33, o_33);
  q_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_33);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL;
  h_33 = t;
  {
    ATerm r_9 (ATerm t)
    {
      ATerm b_25 = t;
      int e_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_9 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((i_33 != NULL) && (i_33 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_33 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_9, t);
          ;
          LocalPopChoice(e_25);
        }
      else
        {
          t = b_25;
          t = term_f_25;
          if(((i_33 != NULL) && (i_33 != t)))
            _fail(t);
          else
            i_33 = t;
        }
      return(t);
    }
    t = _2_0(r_9, _id, t);
    t = h_33;
    {
      ATerm t_9 (ATerm t)
      {
        ATerm a_6 = NULL;
        a_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_33), a_6);
        return(t);
      }
      t = _2_0(_id, t_9, t);
      {
        ATerm g_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(u_9, v_9, t);
            ;
            LocalPopChoice(i_25);
          }
        else
          {
            t = g_25;
            t = _2_0(_id, y_9, t);
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
ATerm apply_strategy_1_0 (ATerm p_110 (ATerm), ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
  r_33 = t;
  t = dtime_0_0(t);
  t = r_33;
  t = p_110(t);
  s_33 = t;
  t = dtime_0_0(t);
  t_33 = t;
  t = s_33;
  if(match_cons(t, sym__2))
    {
      u_33 = ATgetArgument(t, 0);
      v_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_33), (ATerm) ATmakeAppl(sym_Runtime_1, t_33)), v_33);
  return(t);
}
ATerm j_34 (ATerm d_34, ATerm t)
{
  t = SSL_fclose(d_34);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL;
  h_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_34 = ATgetArgument(t, 0);
      {
        ATerm j_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_34);
            ;
            LocalPopChoice(l_25);
          }
        else
          {
            t = j_25;
            t = j_34(h_34, t);
          }
      }
    }
  else
    {
      t = j_34(h_34, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_34 = NULL;
  t = SSL_stdin_stream();
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_34);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_34 = NULL;
  t = SSL_stdout_stream();
  l_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_34);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_34 = NULL;
  t = SSL_stderr_stream();
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_34);
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm z_34 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      z_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_34;
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm d_35 = NULL;
  d_35 = t;
  t = SSL_is_string(d_35);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_25 = ATgetArgument(t, 0);
      ATerm r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_6 = NULL,n_6 = NULL;
        m_6 = t;
        t = SSL_explode_term(m_6);
        if(match_cons(t, sym__2))
          {
            ATerm i_26 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_26) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_26 = ATgetArgument(t, 1);
              if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
                {
                  n_6 = ATgetFirst((ATermList) l_26);
                  {
                    ATerm q_26 = (ATerm) ATgetNext((ATermList) l_26);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = n_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = n_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = n_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        {
          ATerm r_26 = t;
          int s_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
              t = _2_0(a_10, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_34 = ATgetArgument(t, 0);
                  x_34 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(w_34, x_34);
              y_34 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, y_34);
              ;
              LocalPopChoice(s_26);
            }
          else
            {
              t = r_26;
              {
                ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
                t = _2_0(b_10, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_35 = ATgetArgument(t, 0);
                    b_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(a_35, b_35);
                c_35 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, c_35);
              }
            }
        }
      }
  }
  return(t);
}
ATerm c_10 (ATerm t)
{
  t = term_t_26;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,i_35 = NULL;
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_35 = NULL;
      j_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_35, term_w_26);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      t = debug_1_0(c_10, t);
      _fail(t);
    }
  e_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_35);
  f_35 = t;
  t = e_35;
  t = fclose_0_0(t);
  t = f_35;
  return(t);
}
ATerm fetch_1_0 (ATerm g_95 (ATerm), ATerm t)
{
  ATerm o_35 (ATerm t)
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_95, _id, t);
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        t = Cons_2_0(_id, o_35, t);
      }
    return(t);
  }
  t = o_35(t);
  return(t);
}
ATerm debug_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL;
  p_35 = t;
  t = l_107(t);
  q_35 = t;
  t = term_t_13;
  r_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_35), q_35);
  s_35 = t;
  t = SSL_printnl(r_35, s_35);
  t = p_35;
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm z_26 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_27);
    }
  else
    {
      t = z_26;
    }
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_35 = NULL;
      z_35 = t;
      t = SSL_is_string(z_35);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      {
        ATerm p_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_10, t);
            ;
            LocalPopChoice(q_28);
          }
        else
          {
            t = p_28;
            {
              ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
              k_36 = t;
              if(match_cons(t, sym_Path_1))
                {
                  l_36 = ATgetArgument(t, 0);
                  t = l_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      l_36 = ATgetArgument(t, 0);
                      t = l_36;
                      {
                        ATerm r_28 = t;
                        int s_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(s_28);
                          }
                        else
                          {
                            t = r_28;
                            t = debug_1_0(e_10, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_7 = NULL,h_7 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          l_36 = ATgetArgument(t, 0);
                          m_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_36;
                      t = eval_config_0_0(t);
                      e_7 = t;
                      t = m_36;
                      t = eval_config_0_0(t);
                      h_7 = t;
                      t = SSL_strcat(e_7, h_7);
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
  ATerm r_36 = NULL,s_36 = NULL;
  r_36 = t;
  t = term_t_28;
  s_36 = t;
  t = SSL_table_get(s_36, r_36);
  {
    ATerm u_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_36 = NULL,u_36 = NULL;
        t = eval_config_0_0(t);
        t_36 = t;
        t = term_t_28;
        u_36 = t;
        t = SSL_table_put(u_36, r_36, t_36);
        t = t_36;
        ;
        LocalPopChoice(v_28);
      }
    else
      {
        t = u_28;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_36 = NULL,x_36 = NULL;
      v_36 = t;
      t = term_y_28;
      t = get_config_0_0(t);
      x_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_36, term_z_28);
      t = geq_0_0(t);
      t = v_36;
      t = y_108(t);
      ;
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
    }
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  if(match_string(t, "-k"))
    {
      t = z_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_36;
    }
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL;
  a_37 = t;
  t = SSL_string_to_int(a_37);
  b_37 = t;
  t = term_t_28;
  c_37 = t;
  t = term_a_29;
  d_37 = t;
  t = SSL_table_put(c_37, d_37, b_37);
  t = a_37;
  return(t);
}
ATerm i_10 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_10, h_10, i_10, t);
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm f_37 = NULL;
  f_37 = t;
  if(match_string(t, "-S"))
    {
      t = f_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_37;
    }
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
  t = term_t_28;
  g_37 = t;
  t = term_y_28;
  h_37 = t;
  t = term_c_29;
  i_37 = t;
  t = SSL_table_put(g_37, h_37, i_37);
  t = term_e_29;
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm q_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  j_37 = t;
  t = SSL_string_to_int(j_37);
  k_37 = t;
  t = term_t_28;
  l_37 = t;
  t = term_y_28;
  m_37 = t;
  t = SSL_table_put(l_37, m_37, k_37);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_37);
  return(t);
}
ATerm s_10 (ATerm t)
{
  t = term_g_29;
  return(t);
}
ATerm t_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
  t = term_t_28;
  n_37 = t;
  t = term_h_29;
  o_37 = t;
  t = term_s_13;
  p_37 = t;
  t = SSL_table_put(n_37, o_37, p_37);
  t = term_n_29;
  return(t);
}
ATerm v_10 (ATerm t)
{
  t = term_o_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_10, o_10, p_10, t);
      ;
      LocalPopChoice(t_29);
    }
  else
    {
      t = p_29;
      {
        ATerm u_29 = t;
        int v_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_10, r_10, s_10, t);
            ;
            LocalPopChoice(v_29);
          }
        else
          {
            t = u_29;
            t = Option_3_0(t_10, u_10, v_10, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_37 = NULL;
      t = term_s_13;
      t = c_0(t);
      u_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_29, term_y_29, u_37);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm x_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_37 = ATgetFirst((ATermList) t);
          t_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_37;
      t = a_0(t);
      t = term_s_13;
      t = b_0(t);
      x_37 = t;
      t = (ATerm) ATinsert(CheckATermList(t_37), x_37);
    }
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm z_37 = NULL;
  z_37 = t;
  if(match_string(t, "-o"))
    {
      t = z_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_37;
    }
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL;
  a_38 = t;
  t = term_t_28;
  b_38 = t;
  t = term_z_29;
  c_38 = t;
  t = SSL_table_put(b_38, c_38, a_38);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_38);
  return(t);
}
ATerm d_11 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_11, c_11, d_11, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL;
  if(match_cons(t, sym__3))
    {
      f_38 = ATgetArgument(t, 0);
      g_38 = ATgetArgument(t, 1);
      h_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_38, g_38);
  {
    ATerm l_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_30 = ATgetArgument(t, 0);
            ATerm t_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(f_38, g_38);
        ;
        LocalPopChoice(r_30);
      }
    else
      {
        t = l_30;
        t = (ATerm) ATempty;
      }
    i_38 = t;
    t = (ATerm) ATinsert(CheckATermList(i_38), h_38);
    j_38 = t;
    t = SSL_table_put(f_38, g_38, j_38);
    t = (ATerm) ATmakeAppl(sym__3, f_38, g_38, h_38);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_38 = NULL;
      t = term_s_13;
      t = j_0(t);
      v_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_29, term_y_29, v_38);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm z_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_38 = ATgetFirst((ATermList) t);
          s_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_38;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_38 = ATgetFirst((ATermList) t);
          u_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_38;
      t = f_0(t);
      t = t_38;
      t = h_0(t);
      z_38 = t;
      t = (ATerm) ATinsert(CheckATermList(u_38), z_38);
    }
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm b_39 = NULL;
  b_39 = t;
  if(match_string(t, "-i"))
    {
      t = b_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_39;
    }
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
  c_39 = t;
  t = term_t_28;
  d_39 = t;
  t = term_u_30;
  e_39 = t;
  t = SSL_table_put(d_39, e_39, c_39);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_39);
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_v_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_11, g_11, j_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_13;
  t = whoami_0_0(t);
  f_39 = t;
  t = term_t_13;
  g_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_30), f_39);
  h_39 = t;
  t = SSL_printnl(g_39, h_39);
  t = term_w_13;
  i_39 = t;
  t = SSL_exit(i_39);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_31;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t)
{
  ATerm d_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_100(t);
      ;
      LocalPopChoice(k_31);
    }
  else
    {
      t = d_31;
      {
        ATerm l_39 = NULL,m_39 = NULL,p_39 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_39 = ATgetFirst((ATermList) t);
            m_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_39;
        t = foldr_2_0(z_100, a_101, t);
        p_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_39, p_39);
        t = a_101(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL;
  if(match_cons(t, sym__2))
    {
      c_8 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(c_8, d_8);
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = SSL_addr(c_8, d_8);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_39 = NULL,r_7 = NULL,z_7 = NULL;
  t = times_0_0(t);
  r_7 = t;
  t = SSL_explode_term(r_7);
  if(match_cons(t, sym__2))
    {
      ATerm n_31 = ATgetArgument(t, 0);
      z_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7;
  t = foldr_2_0(m_11, n_11, t);
  s_39 = t;
  t = SSL_TicksToSeconds(s_39);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
  d_40 = t;
  if(match_cons(t, sym__2))
    {
      e_40 = ATgetArgument(t, 0);
      f_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_40;
        if((e_40 != t))
          {
            _fail(t);
          }
        t = d_40;
        ;
        LocalPopChoice(q_31);
      }
    else
      {
        t = o_31;
        t = d_40;
        {
          ATerm s_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_40, f_40);
              ;
              LocalPopChoice(t_31);
            }
          else
            {
              t = s_31;
              t = SSL_gtr(e_40, f_40);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_40, f_40);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_40 = NULL,k_40 = NULL;
      i_40 = t;
      t = term_y_28;
      t = get_config_0_0(t);
      k_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_40, term_w_13);
      t = geq_0_0(t);
      t = i_40;
      t = x_108(t);
      ;
      LocalPopChoice(w_31);
    }
  else
    {
      t = v_31;
    }
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL;
  t = run_time_0_0(t);
  m_40 = t;
  t = term_s_13;
  t = whoami_0_0(t);
  n_40 = t;
  t = term_t_13;
  o_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_31), m_40), term_x_31), n_40);
  p_40 = t;
  t = SSL_printnl(o_40, p_40);
  t = (ATerm) ATmakeAppl(sym__2, term_t_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_31), m_40), term_x_31), n_40));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_29;
  q_40 = t;
  t = SSL_exit(q_40);
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
      {
        ATerm c_32 = t;
        int d_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(d_32);
          }
        else
          {
            t = c_32;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_111 (ATerm), ATerm t)
{
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
      t = fetch_1_0(p_11, t);
    }
  t = n_111(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_40 = ATgetFirst((ATermList) t);
      t_40 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_40 = NULL,a_41 = NULL;
        t = t_40;
        t = e_0(t);
        z_40 = t;
        t = s_40;
        t = d_0(t);
        a_41 = t;
        t = t_40;
        {
          ATerm q_11 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(z_40), a_41);
            return(t);
          }
          t = reverse_acc_2_0(d_0, q_11, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_13;
      t = e_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm p_86 (ATerm), ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,v_4 = NULL,f_5 = NULL;
  e_41 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_41);
  b_41 = t;
  t = c_41;
  t = p_86(t);
  d_41 = t;
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_41);
  v_4 = t;
  t = SSLsetAnnotations(v_4, b_41);
  return(t);
}
ATerm r_11 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm j_41 = NULL;
  j_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_41), term_h_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL;
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_32);
    }
  else
    {
      t = i_32;
      t = fetch_1_0(r_11, t);
    }
  t = term_k_32;
  t = echo_0_0(t);
  t = term_w_29;
  h_41 = t;
  t = term_y_29;
  i_41 = t;
  t = SSL_table_get(h_41, i_41);
  t = reverse_acc_2_0(_id, s_11, t);
  t = map_1_0(t_11, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,g_5 = NULL,m_5 = NULL;
  n_41 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      l_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_41);
  k_41 = t;
  t = l_41;
  t = q_86(t);
  m_41 = t;
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, m_41);
  g_5 = t;
  t = SSLsetAnnotations(g_5, k_41);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
  r_41 = t;
  {
    ATerm l_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_41;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_32 = ATgetFirst((ATermList) t);
                ATerm y_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_41;
          }
        ;
        LocalPopChoice(q_32);
      }
    else
      {
        t = l_32;
        t = (ATerm) ATinsert(ATempty, r_41);
      }
    s_41 = t;
    t = term_f_25;
    t_41 = t;
    t = SSL_printnl(t_41, s_41);
    t = r_41;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_31;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm u_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_11 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  t = term_t_28;
  x_41 = t;
  t = term_z_32;
  y_41 = t;
  t = term_s_13;
  z_41 = t;
  t = SSL_table_put(x_41, y_41, z_41);
  t = term_a_33;
  return(t);
}
ATerm w_11 (ATerm t)
{
  t = term_b_33;
  return(t);
}
ATerm x_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL;
  t = term_t_28;
  a_42 = t;
  t = term_z_32;
  b_42 = t;
  t = term_s_13;
  c_42 = t;
  t = SSL_table_put(a_42, b_42, c_42);
  t = term_t_28;
  d_42 = t;
  t = term_c_33;
  e_42 = t;
  t = term_s_13;
  f_42 = t;
  t = SSL_table_put(d_42, e_42, f_42);
  t = term_d_33;
  return(t);
}
ATerm a_12 (ATerm t)
{
  t = term_w_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_11, v_11, w_11, t);
      ;
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
      t = Option_3_0(x_11, y_11, a_12, t);
    }
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm i_42 = NULL,k_42 = NULL,l_42 = NULL;
  i_42 = t;
  t = term_t_28;
  k_42 = t;
  t = term_c_31;
  l_42 = t;
  t = SSL_table_put(k_42, l_42, i_42);
  t = (ATerm) ATmakeAppl(sym_Program_1, i_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_113 (ATerm), ATerm t)
{
  ATerm h_42 = NULL;
  h_42 = t;
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_34;
        t = q_113(t);
        ;
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
      }
    t = h_42;
    {
      ATerm f_12 (ATerm t)
      {
        ATerm c_34 = t;
        int e_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_34 = t;
            int i_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(i_34);
              }
            else
              {
                t = f_34;
                t = q_113(t);
                t = Cons_2_0(_id, f_12, t);
              }
            ;
            LocalPopChoice(e_34);
          }
        else
          {
            t = c_34;
            {
              ATerm n_42 = NULL,o_42 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_42 = ATgetFirst((ATermList) t);
                  o_42 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_42), (ATerm) ATmakeAppl(sym_Undefined_1, n_42));
            }
          }
        return(t);
      }
      t = Cons_2_0(b_12, f_12, t);
    }
  }
  return(t);
}
ATerm j_12 (ATerm t)
{
  ATerm c_43 = NULL;
  c_43 = t;
  if(match_string(t, "--help"))
    {
      t = c_43;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_43;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_43;
        }
    }
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
  t = term_t_28;
  d_43 = t;
  t = term_g_32;
  e_43 = t;
  t = term_s_13;
  f_43 = t;
  t = SSL_table_put(d_43, e_43, f_43);
  t = term_n_34;
  return(t);
}
ATerm m_12 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm n_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_113 (ATerm), ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL;
  v_42 = t;
  t = term_w_29;
  w_42 = t;
  t = term_y_29;
  x_42 = t;
  t = (ATerm) ATempty;
  y_42 = t;
  t = SSL_table_put(w_42, x_42, y_42);
  t = v_42;
  {
    ATerm i_12 (ATerm t)
    {
      ATerm p_34 = t;
      int q_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_113(t);
          ;
          LocalPopChoice(q_34);
        }
      else
        {
          t = p_34;
          {
            ATerm r_34 = t;
            int s_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_12, l_12, m_12, t);
                ;
                LocalPopChoice(s_34);
              }
            else
              {
                t = r_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_12, t);
    {
      ATerm t_34 = t;
      int u_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_43 = NULL;
          m_43 = t;
          {
            ATerm v_34 = t;
            int g_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_8 = NULL;
                t = m_43;
                {
                  ATerm h_35 = t;
                  int k_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_g_32;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(k_35);
                    }
                  else
                    {
                      t = h_35;
                      t = fetch_1_0(n_12, t);
                    }
                  t = m_43;
                  t = default_system_usage_0_0(t);
                  t = term_c_29;
                  r_8 = t;
                  t = SSL_exit(r_8);
                }
                ;
                LocalPopChoice(g_35);
              }
            else
              {
                t = v_34;
                {
                  ATerm v_8 = NULL;
                  t = term_z_32;
                  t = get_config_0_0(t);
                  t = m_43;
                  t = default_system_about_0_0(t);
                  t = term_c_29;
                  v_8 = t;
                  t = SSL_exit(v_8);
                }
              }
          }
          ;
          LocalPopChoice(u_34);
        }
      else
        {
          t = t_34;
          {
            ATerm l_35 = t;
            int m_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
                ATerm p_12 (ATerm t)
                {
                  ATerm q_12 (ATerm t)
                  {
                    if(((z_42 != NULL) && (z_42 != t)))
                      _fail(t);
                    else
                      z_42 = t;
                    return(t);
                  }
                  t = Undefined_1_0(q_12, t);
                  return(t);
                }
                t = fetch_1_0(p_12, t);
                t = term_t_13;
                n_43 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_42)), term_n_35);
                o_43 = t;
                t = SSL_printnl(n_43, o_43);
                t = (ATerm) ATmakeAppl(sym__2, term_t_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_42)), term_n_35));
                t = default_system_usage_0_0(t);
                t = term_w_13;
                p_43 = t;
                t = SSL_exit(p_43);
                ;
                LocalPopChoice(m_35);
              }
            else
              {
                t = l_35;
              }
          }
        }
      a_43 = t;
      t = term_w_29;
      b_43 = t;
      t = SSL_table_destroy(b_43);
      t = a_43;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL;
  t = parse_options_1_0(p_111, t);
  s_43 = t;
  t = term_t_35;
  t_43 = t;
  t = SSL_table_create(t_43);
  t = term_t_35;
  u_43 = t;
  t = term_u_35;
  v_43 = t;
  t = SSL_table_put(u_43, v_43, s_43);
  t = s_43;
  t = r_111(t);
  {
    ATerm v_35 = t;
    int w_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_111, t);
        ;
        LocalPopChoice(w_35);
      }
    else
      {
        t = v_35;
        {
          ATerm x_35 = t;
          int y_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_111(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_35);
            }
          else
            {
              t = x_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm s_12 (ATerm t)
{
  t = if_verbose2_1_0(y_12, t);
  return(t);
}
ATerm u_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_12 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL;
  t = term_t_28;
  w_43 = t;
  t = term_a_36;
  x_43 = t;
  t = term_s_13;
  y_43 = t;
  t = SSL_table_put(w_43, x_43, y_43);
  t = term_b_36;
  return(t);
}
ATerm w_12 (ATerm t)
{
  t = term_c_36;
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
  z_43 = t;
  t = term_c_31;
  t = get_config_0_0(t);
  a_44 = t;
  t = term_t_13;
  b_44 = t;
  t = (ATerm) ATinsert(ATempty, a_44);
  c_44 = t;
  t = SSL_printnl(b_44, c_44);
  t = z_43;
  return(t);
}
ATerm iowrap_3_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t)
{
  ATerm r_12 (ATerm t)
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_110(t);
        ;
        LocalPopChoice(e_36);
      }
    else
      {
        t = d_36;
        {
          ATerm f_36 = t;
          int g_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(g_36);
            }
          else
            {
              t = f_36;
              {
                ATerm h_36 = t;
                int i_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(i_36);
                  }
                else
                  {
                    t = h_36;
                    {
                      ATerm j_36 = t;
                      int n_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(u_12, v_12, w_12, t);
                          ;
                          LocalPopChoice(n_36);
                        }
                      else
                        {
                          t = j_36;
                          {
                            ATerm o_36 = t;
                            int p_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(p_36);
                              }
                            else
                              {
                                t = o_36;
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
  ATerm t_12 (ATerm t)
  {
    ATerm d_44 = NULL,e_44 = NULL,z_8 = NULL;
    d_44 = t;
    {
      ATerm q_36 = t;
      int w_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_12 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_44 != NULL) && (e_44 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_12, t);
          ;
          LocalPopChoice(w_36);
        }
      else
        {
          t = q_36;
          t = term_y_36;
          e_44 = t;
        }
      t = not_null(e_44);
      t = ReadFromFile_0_0(t);
      z_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_44, z_8);
      t = apply_strategy_1_0(y_110, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(r_12, a_111, s_12, t_12, t);
  return(t);
}
ATerm a_13 (ATerm t)
{
  t = _2_0(_id, b_13, t);
  return(t);
}
ATerm b_13 (ATerm t)
{
  t = Specification_1_0(c_13, t);
  return(t);
}
ATerm c_13 (ATerm t)
{
  t = Cons_2_0(g_13, h_13, t);
  return(t);
}
ATerm g_13 (ATerm t)
{
  t = Signature_1_0(_id, t);
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = Cons_2_0(i_13, k_13, t);
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = Strategies_1_0(m_13, t);
  return(t);
}
ATerm k_13 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm m_13 (ATerm t)
{
  t = map_1_0(o_13, t);
  return(t);
}
ATerm o_13 (ATerm t)
{
  t = scope_2_0(p_13, q_13, t);
  return(t);
}
ATerm p_13 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm q_13 (ATerm t)
{
  t = scope_2_0(r_13, cp_0_0, t);
  return(t);
}
ATerm r_13 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_13, _fail, default_usage_0_0, t);
  return(t);
}
