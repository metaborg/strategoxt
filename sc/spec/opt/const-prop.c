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
ATerm term_p_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_u_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_d_47;
ATerm term_y_46;
ATerm term_v_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_p_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_v_44;
ATerm term_s_44;
ATerm term_p_44;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_g_43;
ATerm term_d_43;
ATerm term_a_43;
ATerm term_l_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_h_38;
ATerm term_u_37;
ATerm term_s_32;
ATerm term_k_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_f_30;
ATerm term_c_22;
void init_constant_terms (void)
{
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_f_32);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_45);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(sym__3, term_p_44, term_k_47, term_c_22);
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm);
ATerm w_19 (ATerm);
ATerm a_20 (ATerm);
ATerm e_20 (ATerm);
ATerm g_20 (ATerm);
ATerm prop_sdef_1_0 (ATerm t_86 (ATerm), ATerm);
ATerm l_20 (ATerm);
ATerm m_20 (ATerm);
ATerm exec_maybe_1_0 (ATerm k_86 (ATerm), ATerm);
ATerm Not_1_0 (ATerm x_78 (ATerm), ATerm);
ATerm assert_1_0 (ATerm i_105 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm);
ATerm Let_2_0 (ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm);
ATerm t_20 (ATerm);
ATerm prop_let_1_0 (ATerm u_86 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm);
ATerm w_20 (ATerm);
ATerm l_7 (ATerm c_6, ATerm f_6, ATerm i_6, ATerm);
ATerm isect_CurrentTerm_0_0 (ATerm);
ATerm b_21 (ATerm);
ATerm r_9 (ATerm l_8, ATerm n_8, ATerm w_8, ATerm);
ATerm isect_Binding_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm d_21 (ATerm);
ATerm save_CurrentTerm_0_0 (ATerm);
ATerm g_21 (ATerm);
ATerm save_Binding_0_0 (ATerm);
ATerm prop_abstract_choice_2_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm);
ATerm prop_choice_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm);
ATerm x_21 (ATerm);
ATerm a_22 (ATerm);
ATerm prop_traversal_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm);
ATerm d_22 (ATerm);
ATerm f_22 (ATerm);
ATerm m_22 (ATerm);
ATerm o_22 (ATerm);
ATerm prop_call_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm);
ATerm w_23 (ATerm);
ATerm y_23 (ATerm);
ATerm z_23 (ATerm);
ATerm c_24 (ATerm);
ATerm prop_scope_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm Build_1_0 (ATerm g_78 (ATerm), ATerm);
ATerm d_24 (ATerm);
ATerm e_24 (ATerm);
ATerm prop_build_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm y_89 (ATerm), ATerm);
ATerm f_24 (ATerm);
ATerm g_24 (ATerm);
ATerm introduce_binding_0_0 (ATerm);
ATerm Var_1_0 (ATerm o_74 (ATerm), ATerm);
ATerm h_24 (ATerm);
ATerm i_24 (ATerm);
ATerm j_24 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm lookup_0_0 (ATerm);
ATerm genzip_4_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm);
ATerm m_24 (ATerm);
ATerm n_24 (ATerm);
ATerm o_24 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm);
ATerm UfVar_1_0 (ATerm u_116 (ATerm), ATerm);
ATerm while_not_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm);
ATerm for_3_0 (ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm);
ATerm w_24 (ATerm);
ATerm a_25 (ATerm);
ATerm b_25 (ATerm);
ATerm c_25 (ATerm);
ATerm d_25 (ATerm);
ATerm f_25 (ATerm);
ATerm g_25 (ATerm);
ATerm h_25 (ATerm);
ATerm prop_pattern_match_0_0 (ATerm);
ATerm CurrentTerm_0_0 (ATerm);
ATerm Binding_0_0 (ATerm);
ATerm alltd_1_0 (ATerm m_90 (ATerm), ATerm);
ATerm Match_1_0 (ATerm f_78 (ATerm), ATerm);
ATerm i_25 (ATerm);
ATerm m_25 (ATerm);
ATerm n_25 (ATerm);
ATerm o_25 (ATerm);
ATerm prop_match_0_0 (ATerm);
ATerm p_25 (ATerm);
ATerm q_25 (ATerm);
ATerm t_25 (ATerm);
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
ATerm c_26 (ATerm);
ATerm e_26 (ATerm);
ATerm g_26 (ATerm);
ATerm i_26 (ATerm);
ATerm j_26 (ATerm);
ATerm k_26 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm d_110 (ATerm), ATerm);
ATerm z_28 (ATerm t_28, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm l_26 (ATerm);
ATerm r_26 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm w_94 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm c_95 (ATerm), ATerm);
ATerm z_26 (ATerm);
ATerm a_27 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm g_27 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm m_108 (ATerm), ATerm);
ATerm l_27 (ATerm);
ATerm m_27 (ATerm);
ATerm t_27 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm u_27 (ATerm);
ATerm m_28 (ATerm);
ATerm n_28 (ATerm);
ATerm o_28 (ATerm);
ATerm p_28 (ATerm);
ATerm q_28 (ATerm);
ATerm r_28 (ATerm);
ATerm s_28 (ATerm);
ATerm u_28 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm v_28 (ATerm);
ATerm y_28 (ATerm);
ATerm d_29 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm e_29 (ATerm);
ATerm f_29 (ATerm);
ATerm g_29 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_29 (ATerm);
ATerm u_29 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_108 (ATerm), ATerm);
ATerm v_29 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm w_29 (ATerm);
ATerm need_help_1_0 (ATerm b_111 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm e_86 (ATerm), ATerm);
ATerm z_29 (ATerm);
ATerm a_30 (ATerm);
ATerm d_30 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm f_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm e_30 (ATerm);
ATerm g_30 (ATerm);
ATerm h_30 (ATerm);
ATerm j_30 (ATerm);
ATerm n_30 (ATerm);
ATerm q_30 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm r_30 (ATerm);
ATerm parse_options_p__1_0 (ATerm e_113 (ATerm), ATerm);
ATerm u_30 (ATerm);
ATerm v_30 (ATerm);
ATerm w_30 (ATerm);
ATerm x_30 (ATerm);
ATerm parse_options_1_0 (ATerm d_113 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_111 (ATerm), ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm);
ATerm c_31 (ATerm);
ATerm h_31 (ATerm);
ATerm i_31 (ATerm);
ATerm j_31 (ATerm);
ATerm k_31 (ATerm);
ATerm iowrap_3_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm);
ATerm m_31 (ATerm);
ATerm n_31 (ATerm);
ATerm o_31 (ATerm);
ATerm q_31 (ATerm);
ATerm r_31 (ATerm);
ATerm s_31 (ATerm);
ATerm t_31 (ATerm);
ATerm v_31 (ATerm);
ATerm w_31 (ATerm);
ATerm x_31 (ATerm);
ATerm y_31 (ATerm);
ATerm z_31 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_0 = NULL,e_1 = NULL,n_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL;
  z_0 = t;
  t = term_c_22;
  t = whoami_0_0(t);
  e_1 = t;
  p_0 = t;
  t = term_f_30;
  n_0 = t;
  t = p_0;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_32), e_1), term_a_32);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  s_0 = t;
  t = term_c_32;
  r_0 = t;
  t = SSL_exit(r_0);
  t = z_0;
  return(t);
}
ATerm SDefT_4_0 (ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,t_0 = NULL,u_0 = NULL;
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
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, m_1, n_1, o_1, p_1);
  t_0 = t;
  t = SSLsetAnnotations(t_0, g_1);
  return(t);
}
ATerm w_19 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm a_20 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      w_1 = ATgetArgument(t, 0);
      {
        ATerm e_32 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_1), term_f_32);
  t = assert_1_0(e_20, t);
  t = x_1;
  return(t);
}
ATerm e_20 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm g_20 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm prop_sdef_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm u_1 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm h_32 = ATgetArgument(t, 0);
      ATerm i_32 = ATgetArgument(t, 1);
      u_1 = ATgetArgument(t, 2);
      {
        ATerm j_32 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm x_19 (ATerm t)
    {
      ATerm v_1 = NULL;
      ATerm f_20 (ATerm t)
      {
        ATerm y_1 = NULL;
        y_1 = t;
        t = term_k_32;
        t = assert_1_0(g_20, t);
        t = y_1;
        t = t_86(t);
        return(t);
      }
      if(((v_1 != NULL) && (v_1 != t)))
        _fail(t);
      else
        v_1 = t;
      t = u_1;
      t = map_1_0(a_20, t);
      t = not_null(v_1);
      t = SDefT_4_0(_id, _id, _id, f_20, t);
      return(t);
    }
    t = scope_2_0(w_19, x_19, t);
  }
  return(t);
}
ATerm l_20 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm m_20 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,v_0 = NULL,w_0 = NULL;
  z_1 = t;
  t = term_k_32;
  t = assert_1_0(l_20, t);
  t = z_1;
  t = save_Binding_0_0(t);
  a_2 = t;
  t = z_1;
  t = k_86(t);
  b_2 = t;
  t = term_k_32;
  t = assert_1_0(m_20, t);
  w_0 = t;
  t = term_d_32;
  v_0 = t;
  t = SSL_table_destroy(v_0);
  t = (ATerm) ATmakeAppl(sym__2, term_d_32, a_2);
  t = table_putlist_0_0(t);
  t = b_2;
  return(t);
}
ATerm Not_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,k_2 = NULL,m_2 = NULL,x_0 = NULL,b_1 = NULL;
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
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, k_2);
  x_0 = t;
  t = SSLsetAnnotations(x_0, h_2);
  return(t);
}
ATerm assert_1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,u_2 = NULL,v_2 = NULL,f_1 = NULL,r_1 = NULL,t_1 = NULL,c_2 = NULL;
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
    ATerm m_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 = NULL,d_1 = NULL;
        d_1 = t;
        t = term_s_32;
        c_1 = t;
        t = SSL_table_get(s_2, c_1);
        ;
        LocalPopChoice(o_32);
      }
    else
      {
        t = m_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_2 = ATgetFirst((ATermList) t);
        v_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t_1 = t;
    t = term_s_32;
    f_1 = t;
    t = t_1;
    c_2 = t;
    t = (ATerm) ATinsert(CheckATermList(v_2), (ATerm) ATinsert(CheckATermList(u_2), q_2));
    r_1 = t;
    t = SSL_table_put(s_2, f_1, r_1);
    t = (ATerm) ATmakeAppl(sym__2, q_2, r_2);
  }
  return(t);
}
ATerm Rec_2_0 (ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,d_3 = NULL,g_3 = NULL,m_3 = NULL,n_3 = NULL,d_2 = NULL,e_2 = NULL;
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
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, g_3, m_3);
  d_2 = t;
  t = SSLsetAnnotations(d_2, w_2);
  return(t);
}
ATerm Let_2_0 (ATerm y_77 (ATerm), ATerm z_77 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL,g_2 = NULL,l_2 = NULL;
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
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, d_4, e_4);
  g_2 = t;
  t = SSLsetAnnotations(g_2, z_3);
  return(t);
}
ATerm t_20 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm prop_let_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm k_4 = NULL,m_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm t_32 = ATgetArgument(t, 0);
      ATerm u_32 = ATgetArgument(t, 1);
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
    ATerm n_20 (ATerm t)
    {
      ATerm s_20 (ATerm t)
      {
        ATerm o_4 = NULL,n_2 = NULL,o_2 = NULL;
        o_4 = t;
        t = term_k_32;
        t = assert_1_0(t_20, t);
        o_2 = t;
        t = term_d_32;
        n_2 = t;
        t = SSL_table_destroy(n_2);
        t = (ATerm) ATmakeAppl(sym__2, term_d_32, m_4);
        t = table_putlist_0_0(t);
        t = o_4;
        t = u_86(t);
        return(t);
      }
      t = map_1_0(s_20, t);
      return(t);
    }
    ATerm r_20 (ATerm t)
    {
      ATerm p_4 = NULL,p_2 = NULL,t_2 = NULL,y_2 = NULL,z_2 = NULL;
      p_4 = t;
      t_2 = t;
      t = term_g_32;
      p_2 = t;
      t = SSL_table_destroy(p_2);
      t = (ATerm) ATmakeAppl(sym__2, term_g_32, n_4);
      t = table_putlist_0_0(t);
      z_2 = t;
      t = term_d_32;
      y_2 = t;
      t = SSL_table_destroy(y_2);
      t = (ATerm) ATmakeAppl(sym__2, term_d_32, m_4);
      t = table_putlist_0_0(t);
      t = p_4;
      t = u_86(t);
      return(t);
    }
    t = Let_2_0(n_20, r_20, t);
  }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,b_3 = NULL,c_3 = NULL;
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
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_4, z_4, a_5);
  b_3 = t;
  t = SSLsetAnnotations(b_3, q_4);
  return(t);
}
ATerm w_20 (ATerm t)
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
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
        ATerm a_33 = t;
        int b_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_6 = ATgetFirst((ATermList) t);
                {
                  ATerm f_33 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(b_33);
            t = x_6;
            {
              ATerm g_33 = t;
              int i_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm l_33 = ATgetArgument(t, 0);
                      f_7 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_33);
                  t = v_6;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm m_33 = t;
                      int r_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_6;
                          ;
                          LocalPopChoice(r_33);
                        }
                      else
                        {
                          t = m_33;
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
                  t = g_33;
                  t = v_6;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = u_6;
                }
            }
          }
        else
          {
            t = a_33;
            t = v_6;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = u_6;
          }
      }
      ;
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
    }
  return(t);
}
ATerm l_7 (ATerm c_6, ATerm f_6, ATerm i_6, ATerm t)
{
  t = i_6;
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_3 = NULL,h_3 = NULL;
        t = i_6;
        h_3 = t;
        t = term_g_32;
        e_3 = t;
        t = SSL_table_get(e_3, c_6);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_33 = ATgetFirst((ATermList) t);
            if(match_cons(u_33, sym_Defined_2))
              {
                ATerm w_33 = ATgetArgument(u_33, 0);
                if((f_6 != ATgetArgument(u_33, 1)))
                  {
                    _fail(ATgetArgument(u_33, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm v_33 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = i_6;
        ;
        LocalPopChoice(t_33);
      }
    else
      {
        t = s_33;
        t = (ATerm) ATmakeAppl(sym__2, c_6, (ATerm) ATinsert(ATempty, term_f_32));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm s_5 = NULL,i_3 = NULL,j_3 = NULL;
  t = map_1_0(w_20, t);
  s_5 = t;
  j_3 = t;
  t = term_g_32;
  i_3 = t;
  t = SSL_table_destroy(i_3);
  t = (ATerm) ATmakeAppl(sym__2, term_g_32, s_5);
  t = table_putlist_0_0(t);
  t = s_5;
  return(t);
}
ATerm b_21 (ATerm t)
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
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
        ATerm z_33 = t;
        int f_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_9 = ATgetFirst((ATermList) t);
                {
                  ATerm g_34 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_34);
            t = l_9;
            {
              ATerm h_34 = t;
              int j_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm k_34 = ATgetArgument(t, 0);
                      p_9 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(j_34);
                  t = h_9;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      ATerm l_34 = t;
                      int m_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_9;
                          ;
                          LocalPopChoice(m_34);
                        }
                      else
                        {
                          t = l_34;
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
                  t = h_34;
                  t = h_9;
                  if(!(match_cons(t, sym_Scopes_0)))
                    _fail(t);
                  t = g_9;
                }
            }
          }
        else
          {
            t = z_33;
            t = h_9;
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = g_9;
          }
      }
      ;
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
    }
  return(t);
}
ATerm r_9 (ATerm l_8, ATerm n_8, ATerm w_8, ATerm t)
{
  t = w_8;
  {
    ATerm q_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_3 = NULL,o_3 = NULL;
        t = w_8;
        o_3 = t;
        t = term_d_32;
        l_3 = t;
        t = SSL_table_get(l_3, l_8);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_34 = ATgetFirst((ATermList) t);
            if(match_cons(s_34, sym_Defined_2))
              {
                ATerm w_34 = ATgetArgument(s_34, 0);
                if((n_8 != ATgetArgument(s_34, 1)))
                  {
                    _fail(ATgetArgument(s_34, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm v_34 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = w_8;
        ;
        LocalPopChoice(r_34);
      }
    else
      {
        t = q_34;
        t = (ATerm) ATmakeAppl(sym__2, l_8, (ATerm) ATinsert(ATempty, term_f_32));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm k_8 = NULL,p_3 = NULL,q_3 = NULL;
  t = map_1_0(b_21, t);
  k_8 = t;
  q_3 = t;
  t = term_d_32;
  p_3 = t;
  t = SSL_table_destroy(p_3);
  t = (ATerm) ATmakeAppl(sym__2, term_d_32, k_8);
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
    ATerm c_21 (ATerm t)
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
    t = map_1_0(c_21, t);
  }
  return(t);
}
ATerm d_21 (ATerm t)
{
  ATerm y_0 = NULL,a_1 = NULL,t_3 = NULL,u_3 = NULL;
  y_0 = t;
  u_3 = t;
  t = term_g_32;
  t_3 = t;
  t = SSL_table_get(t_3, y_0);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_0, a_1);
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  t = term_g_32;
  s_3 = t;
  t = term_g_32;
  r_3 = t;
  t = SSL_table_keys(r_3);
  t = map_1_0(d_21, t);
  return(t);
}
ATerm g_21 (ATerm t)
{
  ATerm k_1 = NULL,s_1 = NULL,x_3 = NULL,y_3 = NULL;
  k_1 = t;
  y_3 = t;
  t = term_d_32;
  x_3 = t;
  t = SSL_table_get(x_3, k_1);
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_1, s_1);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL;
  t = term_d_32;
  w_3 = t;
  t = term_d_32;
  v_3 = t;
  t = SSL_table_keys(v_3);
  t = map_1_0(g_21, t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,u_11 = NULL,d_12 = NULL,q_12 = NULL,b_4 = NULL,f_4 = NULL,h_4 = NULL,i_4 = NULL;
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
  f_4 = t;
  t = term_d_32;
  b_4 = t;
  t = SSL_table_destroy(b_4);
  t = (ATerm) ATmakeAppl(sym__2, term_d_32, e_11);
  t = table_putlist_0_0(t);
  t = e_11;
  t = save_CurrentTerm_0_0(t);
  d_12 = t;
  i_4 = t;
  t = term_g_32;
  h_4 = t;
  t = SSL_table_destroy(h_4);
  t = (ATerm) ATmakeAppl(sym__2, term_g_32, f_11);
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
  ATerm t_12 = NULL,c_13 = NULL,j_13 = NULL,o_13 = NULL,t_13 = NULL,y_13 = NULL,j_4 = NULL,l_4 = NULL;
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
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, o_13, t_13);
  j_4 = t;
  t = SSLsetAnnotations(j_4, t_12);
  return(t);
}
ATerm GChoice_2_0 (ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,t_4 = NULL,v_4 = NULL;
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
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym_GChoice_2, i_14, j_14);
  t_4 = t;
  t = SSLsetAnnotations(t_4, d_14);
  return(t);
}
ATerm Choice_2_0 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,y_14 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,w_4 = NULL,c_5 = NULL;
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
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, c_15, d_15);
  w_4 = t;
  t = SSLsetAnnotations(w_4, u_14);
  return(t);
}
ATerm prop_choice_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm l_15 = NULL;
  l_15 = t;
  {
    ATerm y_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm b_35 = ATgetArgument(t, 0);
            ATerm c_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(z_34);
        t = l_15;
        {
          ATerm j_21 (ATerm t)
          {
            t = Choice_2_0(x_86, _id, t);
            return(t);
          }
          ATerm k_21 (ATerm t)
          {
            t = Choice_2_0(_id, x_86, t);
            return(t);
          }
          t = prop_abstract_choice_2_0(j_21, k_21, t);
        }
      }
    else
      {
        t = y_34;
        {
          ATerm d_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm f_35 = ATgetArgument(t, 0);
                  ATerm g_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(e_35);
              t = l_15;
              {
                ATerm l_21 (ATerm t)
                {
                  t = GChoice_2_0(x_86, _id, t);
                  return(t);
                }
                ATerm m_21 (ATerm t)
                {
                  t = GChoice_2_0(_id, x_86, t);
                  return(t);
                }
                t = prop_abstract_choice_2_0(l_21, m_21, t);
              }
            }
          else
            {
              t = d_35;
              {
                ATerm h_35 = t;
                int i_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm j_35 = ATgetArgument(t, 0);
                        ATerm k_35 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(i_35);
                    t = l_15;
                    {
                      ATerm n_21 (ATerm t)
                      {
                        t = LChoice_2_0(x_86, _id, t);
                        return(t);
                      }
                      ATerm o_21 (ATerm t)
                      {
                        t = LChoice_2_0(_id, x_86, t);
                        return(t);
                      }
                      t = prop_abstract_choice_2_0(n_21, o_21, t);
                    }
                  }
                else
                  {
                    t = h_35;
                    if(match_cons(t, sym_GuardedLChoice_3))
                      {
                        ATerm l_35 = ATgetArgument(t, 0);
                        ATerm m_35 = ATgetArgument(t, 1);
                        ATerm q_35 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = l_15;
                    {
                      ATerm r_21 (ATerm t)
                      {
                        t = GuardedLChoice_3_0(x_86, _id, _id, t);
                        t = GuardedLChoice_3_0(_id, x_86, _id, t);
                        return(t);
                      }
                      ATerm w_21 (ATerm t)
                      {
                        t = GuardedLChoice_3_0(_id, _id, x_86, t);
                        return(t);
                      }
                      t = prop_abstract_choice_2_0(r_21, w_21, t);
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
  ATerm r_15 = NULL,u_15 = NULL,v_15 = NULL,y_15 = NULL,a_16 = NULL,b_16 = NULL,d_5 = NULL,e_5 = NULL;
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
  e_5 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, y_15, a_16);
  d_5 = t;
  t = SSLsetAnnotations(d_5, r_15);
  return(t);
}
ATerm Cong_2_0 (ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL,l_16 = NULL,p_16 = NULL,y_16 = NULL,g_5 = NULL,h_5 = NULL;
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
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, l_16, p_16);
  g_5 = t;
  t = SSLsetAnnotations(g_5, h_16);
  return(t);
}
ATerm x_21 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm a_22 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm r_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_17 = NULL;
      n_17 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm v_35 = ATgetArgument(t, 0);
          ATerm y_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = term_k_32;
      t = assert_1_0(x_21, t);
      t = n_17;
      {
        ATerm y_21 (ATerm t)
        {
          ATerm z_21 (ATerm t)
          {
            t = exec_maybe_1_0(m_0, t);
            return(t);
          }
          t = map_1_0(z_21, t);
          return(t);
        }
        t = Cong_2_0(_id, y_21, t);
      }
      ;
      LocalPopChoice(t_35);
    }
  else
    {
      t = r_35;
      {
        ATerm s_17 = NULL;
        ATerm b_36 = t;
        int c_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm d_36 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            ;
            LocalPopChoice(c_36);
          }
        else
          {
            t = b_36;
            {
              ATerm t_17 = NULL;
              t_17 = t;
              {
                ATerm g_36 = t;
                int i_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_One_1))
                      {
                        ATerm m_36 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(i_36);
                    t = t_17;
                  }
                else
                  {
                    t = g_36;
                    {
                      ATerm n_36 = t;
                      int t_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm u_36 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(t_36);
                          t = t_17;
                        }
                      else
                        {
                          t = n_36;
                          {
                            ATerm v_36 = t;
                            int y_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm z_36 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(y_36);
                                t = t_17;
                              }
                            else
                              {
                                t = v_36;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm a_37 = ATgetArgument(t, 0);
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
        t = term_k_32;
        t = assert_1_0(a_22, t);
        t = s_17;
        {
          ATerm b_22 (ATerm t)
          {
            t = exec_maybe_1_0(m_0, t);
            return(t);
          }
          t = SRTS_one(b_22, t);
        }
      }
    }
  return(t);
}
ATerm CallT_3_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm e_78 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,d_18 = NULL,i_5 = NULL,j_5 = NULL;
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
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, z_17, a_18, b_18);
  i_5 = t;
  t = SSLsetAnnotations(i_5, v_17);
  return(t);
}
ATerm PrimT_3_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,k_5 = NULL,l_5 = NULL;
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
  l_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, l_18, m_18, n_18);
  k_5 = t;
  t = SSLsetAnnotations(k_5, h_18);
  return(t);
}
ATerm d_22 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm f_22 (ATerm t)
{
  t = alltd_1_0(Binding_0_0, t);
  return(t);
}
ATerm m_22 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm o_22 (ATerm t)
{
  t = alltd_1_0(Binding_0_0, t);
  return(t);
}
ATerm prop_call_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm s_18 = NULL;
  s_18 = t;
  {
    ATerm b_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm h_37 = ATgetArgument(t, 0);
            ATerm i_37 = ATgetArgument(t, 1);
            ATerm j_37 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(e_37);
        t = term_k_32;
        t = assert_1_0(d_22, t);
        t = s_18;
        {
          ATerm e_22 (ATerm t)
          {
            ATerm h_22 (ATerm t)
            {
              t = exec_maybe_1_0(l_0, t);
              return(t);
            }
            t = map_1_0(h_22, t);
            return(t);
          }
          t = PrimT_3_0(_id, e_22, f_22, t);
        }
      }
    else
      {
        t = b_37;
        if(match_cons(t, sym_CallT_3))
          {
            ATerm k_37 = ATgetArgument(t, 0);
            ATerm l_37 = ATgetArgument(t, 1);
            ATerm m_37 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = term_k_32;
        t = assert_1_0(m_22, t);
        t = s_18;
        {
          ATerm n_22 (ATerm t)
          {
            ATerm v_23 (ATerm t)
            {
              t = exec_maybe_1_0(l_0, t);
              return(t);
            }
            t = map_1_0(v_23, t);
            return(t);
          }
          t = CallT_3_0(_id, n_22, o_22, t);
        }
      }
  }
  return(t);
}
ATerm Scope_2_0 (ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,n_5 = NULL,o_5 = NULL;
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
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, b_19, c_19);
  n_5 = t;
  t = SSLsetAnnotations(n_5, y_18);
  return(t);
}
ATerm w_23 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm y_23 (ATerm t)
{
  ATerm m_19 = NULL;
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, m_19), term_f_32);
  t = assert_1_0(z_23, t);
  t = m_19;
  return(t);
}
ATerm z_23 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm c_24 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm prop_scope_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm g_19 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      g_19 = ATgetArgument(t, 0);
      {
        ATerm n_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm x_23 (ATerm t)
    {
      ATerm h_19 = NULL,i_19 = NULL;
      h_19 = t;
      t = g_19;
      t = map_1_0(y_23, t);
      t = h_19;
      t = Scope_2_0(_id, s_86, t);
      i_19 = t;
      {
        ATerm o_37 = t;
        int t_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_19 = NULL;
            t = CurrentTerm_0_0(t);
            {
              ATerm a_24 (ATerm t)
              {
                ATerm o_19 = NULL;
                ATerm b_24 (ATerm t)
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
                t = fetch_1_0(b_24, t);
                return(t);
              }
              t = oncetd_1_0(a_24, t);
              n_19 = t;
              t = term_k_32;
              t = assert_1_0(c_24, t);
              t = n_19;
            }
            ;
            LocalPopChoice(t_37);
          }
        else
          {
            t = o_37;
          }
        t = i_19;
      }
      return(t);
    }
    t = scope_2_0(w_23, x_23, t);
  }
  return(t);
}
ATerm Build_1_0 (ATerm g_78 (ATerm), ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,p_5 = NULL,q_5 = NULL;
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
  q_5 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, r_19);
  p_5 = t;
  t = SSLsetAnnotations(p_5, p_19);
  return(t);
}
ATerm d_24 (ATerm t)
{
  t = alltd_1_0(Binding_0_0, t);
  return(t);
}
ATerm e_24 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm y_19 = NULL;
  t = Build_1_0(d_24, t);
  if(match_cons(t, sym_Build_1))
    {
      y_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_37, y_19));
  t = assert_1_0(e_24, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, y_19);
  return(t);
}
ATerm oncetd_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm z_19 (ATerm t)
  {
    ATerm v_37 = t;
    int w_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_89(t);
        ;
        LocalPopChoice(w_37);
      }
    else
      {
        t = v_37;
        t = SRTS_one(z_19, t);
      }
    return(t);
  }
  t = z_19(t);
  return(t);
}
ATerm f_24 (ATerm t)
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
          ATerm y_37 = ATgetArgument(t, 0);
          ATerm z_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_20;
    }
  return(t);
}
ATerm g_24 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm introduce_binding_0_0 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_38 = ATgetArgument(t, 0);
      if(match_cons(f_38, sym_Var_1))
        {
          b_20 = ATgetArgument(f_38, 0);
        }
      else
        _fail(t);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_20;
  {
    ATerm g_38 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(f_24, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_38;
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, b_20), (ATerm) ATmakeAppl(sym_Defined_2, term_h_38, c_20));
    t = assert_1_0(g_24, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, b_20), c_20);
  }
  return(t);
}
ATerm Var_1_0 (ATerm o_74 (ATerm), ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,r_5 = NULL,t_5 = NULL;
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
  t_5 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_20);
  r_5 = t;
  t = SSLsetAnnotations(r_5, h_20);
  return(t);
}
ATerm h_24 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_38 = ATgetArgument(t, 0);
      if(((ATgetType(i_38) != AT_LIST) || !(ATisEmpty(i_38))))
        _fail(t);
      {
        ATerm j_38 = ATgetArgument(t, 1);
        if(((ATgetType(j_38) != AT_LIST) || !(ATisEmpty(j_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_24 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,e_21 = NULL,f_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_38 = ATgetArgument(t, 0);
      if(((ATgetType(k_38) == AT_LIST) && !(ATisEmpty(k_38))))
        {
          z_20 = ATgetFirst((ATermList) k_38);
          e_21 = (ATerm) ATgetNext((ATermList) k_38);
        }
      else
        _fail(t);
      {
        ATerm l_38 = ATgetArgument(t, 1);
        if(((ATgetType(l_38) == AT_LIST) && !(ATisEmpty(l_38))))
          {
            a_21 = ATgetFirst((ATermList) l_38);
            f_21 = (ATerm) ATgetNext((ATermList) l_38);
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
ATerm j_24 (ATerm t)
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
      ATerm m_38 = ATgetFirst((ATermList) t);
      if(match_cons(m_38, sym__2))
        {
          o_20 = ATgetArgument(m_38, 0);
          p_20 = ATgetArgument(m_38, 1);
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
  t = genzip_4_0(h_24, i_24, j_24, _id, t);
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_20, q_20);
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_38 = ATgetArgument(t, 0);
            ATerm q_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_20;
        {
          ATerm l_24 (ATerm t)
          {
            t = q_20;
            return(t);
          }
          t = at_end_1_0(l_24, t);
        }
        ;
        LocalPopChoice(o_38);
      }
    else
      {
        t = n_38;
        {
          ATerm f_2 = NULL,v_5 = NULL,w_5 = NULL;
          w_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_20, q_20);
          v_5 = t;
          t = SSL_explode_term(v_5);
          if(match_cons(t, sym__2))
            {
              ATerm r_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_38) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm s_38 = t;
        int t_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_21;
            if((s_21 != t))
              {
                _fail(t);
              }
            t = q_21;
            ;
            LocalPopChoice(t_38);
          }
        else
          {
            t = s_38;
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
    ATerm u_38 = t;
    int v_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_96(t);
        ;
        LocalPopChoice(v_38);
      }
    else
      {
        t = u_38;
        t = q_96(t);
        t = _2_0(s_96, g_22, t);
        t = r_96(t);
      }
    return(t);
  }
  t = g_22(t);
  return(t);
}
ATerm m_24 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      if(((ATgetType(w_38) != AT_LIST) || !(ATisEmpty(w_38))))
        _fail(t);
      {
        ATerm x_38 = ATgetArgument(t, 1);
        if(((ATgetType(x_38) != AT_LIST) || !(ATisEmpty(x_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_24 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_38 = ATgetArgument(t, 0);
      if(((ATgetType(y_38) == AT_LIST) && !(ATisEmpty(y_38))))
        {
          q_22 = ATgetFirst((ATermList) y_38);
          s_22 = (ATerm) ATgetNext((ATermList) y_38);
        }
      else
        _fail(t);
      {
        ATerm z_38 = ATgetArgument(t, 1);
        if(((ATgetType(z_38) == AT_LIST) && !(ATisEmpty(z_38))))
          {
            r_22 = ATgetFirst((ATermList) z_38);
            t_22 = (ATerm) ATgetNext((ATermList) z_38);
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
ATerm o_24 (ATerm t)
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
    ATerm a_39 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_39 = ATgetArgument(t, 0);
            ATerm d_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(b_39);
        t = i_22;
      }
    else
      {
        t = a_39;
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
          t = genzip_4_0(m_24, n_24, o_24, _id, t);
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
    ATerm u_24 (ATerm t)
    {
      ATerm j_2 = NULL;
      t = i_113(t);
      j_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_2, x_22);
      t = lookup_0_0(t);
      t = j_113(t);
      return(t);
    }
    t = alltd_1_0(u_24, t);
  }
  return(t);
}
ATerm UfVar_1_0 (ATerm u_116 (ATerm), ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_39 = ATgetArgument(t, 0);
      if(((ATgetType(e_39) == AT_LIST) && !(ATisEmpty(e_39))))
        {
          ATerm f_39 = ATgetFirst((ATermList) e_39);
          if(match_cons(f_39, sym__2))
            {
              y_22 = ATgetArgument(f_39, 0);
              z_22 = ATgetArgument(f_39, 1);
            }
          else
            _fail(t);
          a_23 = (ATerm) ATgetNext((ATermList) e_39);
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
    ATerm g_39 = t;
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
          ATerm v_24 (ATerm t)
          {
            if((e_23 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(v_24, t);
          t = (ATerm) ATmakeAppl(sym__2, e_23, f_23);
        }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_39;
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
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_88(t);
        ;
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
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
ATerm w_24 (ATerm t)
{
  ATerm h_23 = NULL;
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_23, (ATerm) ATempty);
  return(t);
}
ATerm a_25 (ATerm t)
{
  ATerm i_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_39 = ATgetArgument(t, 0);
      if(((ATgetType(j_39) != AT_LIST) || !(ATisEmpty(j_39))))
        _fail(t);
      i_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_23;
  return(t);
}
ATerm b_25 (ATerm t)
{
  ATerm k_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(c_25, _id, t);
      ;
      LocalPopChoice(l_39);
    }
  else
    {
      t = k_39;
      {
        ATerm m_39 = t;
        int n_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UfVar_1_0(d_25, t);
            ;
            LocalPopChoice(n_39);
          }
        else
          {
            t = m_39;
            {
              ATerm o_39 = t;
              int p_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = _2_0(UfDecompose_0_0, _id, t);
                  ;
                  LocalPopChoice(p_39);
                }
              else
                {
                  t = o_39;
                  {
                    ATerm q_39 = t;
                    int r_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = _2_0(f_25, _id, t);
                        ;
                        LocalPopChoice(r_39);
                      }
                    else
                      {
                        t = q_39;
                        {
                          ATerm s_39 = t;
                          int t_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = _2_0(g_25, _id, t);
                              ;
                              LocalPopChoice(t_39);
                            }
                          else
                            {
                              t = s_39;
                              t = _2_0(h_25, _id, t);
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
ATerm c_25 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_39 = ATgetFirst((ATermList) t);
      if(match_cons(u_39, sym__2))
        {
          j_23 = ATgetArgument(u_39, 0);
          if((j_23 != ATgetArgument(u_39, 1)))
            {
              _fail(ATgetArgument(u_39, 1));
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
ATerm d_25 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm f_25 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_39 = ATgetFirst((ATermList) t);
      if(match_cons(v_39, sym__2))
        {
          ATerm w_39 = ATgetArgument(v_39, 0);
          if(match_cons(w_39, sym_As_2))
            {
              l_23 = ATgetArgument(w_39, 0);
              m_23 = ATgetArgument(w_39, 1);
            }
          else
            _fail(t);
          n_23 = ATgetArgument(v_39, 1);
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
ATerm g_25 (ATerm t)
{
  ATerm p_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_39 = ATgetFirst((ATermList) t);
      if(match_cons(x_39, sym__2))
        {
          ATerm y_39 = ATgetArgument(x_39, 0);
          if(!(match_cons(y_39, sym_Wld_0)))
            _fail(t);
          {
            ATerm z_39 = ATgetArgument(x_39, 1);
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
ATerm h_25 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_40 = ATgetFirst((ATermList) t);
      if(match_cons(a_40, sym__2))
        {
          q_23 = ATgetArgument(a_40, 0);
          r_23 = ATgetArgument(a_40, 1);
        }
      else
        _fail(t);
      s_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_23;
  {
    ATerm b_40 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_40;
      }
    t = r_23;
    t = Var_1_0(_id, t);
    t = s_23;
  }
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(w_24, a_25, b_25, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm c_40 = t;
  int d_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_23 = NULL,a_3 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL;
      t = term_g_32;
      z_5 = t;
      t = term_g_32;
      x_5 = t;
      t = z_5;
      a_6 = t;
      t = (ATerm) ATempty;
      y_5 = t;
      t = SSL_table_get(x_5, y_5);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_3 = ATgetFirst((ATermList) t);
          {
            ATerm e_40 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = a_3;
      if(match_cons(t, sym_Defined_2))
        {
          ATerm f_40 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) f_40) != ATmakeSymbol("i_0", 0, ATtrue)))
            _fail(t);
          t_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_23;
      ;
      LocalPopChoice(d_40);
    }
  else
    {
      t = c_40;
      {
        ATerm g_40 = t;
        int h_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_23 = NULL,f_3 = NULL,e_6 = NULL,g_6 = NULL,h_6 = NULL,j_6 = NULL;
            t = term_g_32;
            h_6 = t;
            t = term_g_32;
            e_6 = t;
            t = h_6;
            j_6 = t;
            t = (ATerm) ATempty;
            g_6 = t;
            t = SSL_table_get(e_6, g_6);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_3 = ATgetFirst((ATermList) t);
                {
                  ATerm i_40 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = f_3;
            if(match_cons(t, sym_Defined_2))
              {
                ATerm j_40 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) j_40) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                u_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_23;
            ;
            LocalPopChoice(h_40);
          }
        else
          {
            t = g_40;
            {
              ATerm k_3 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
              t = term_g_32;
              m_6 = t;
              t = term_g_32;
              k_6 = t;
              t = m_6;
              n_6 = t;
              t = (ATerm) ATempty;
              l_6 = t;
              t = SSL_table_get(k_6, l_6);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_3 = ATgetFirst((ATermList) t);
                  {
                    ATerm k_40 = (ATerm) ATgetNext((ATermList) t);
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
      ATerm l_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_40 = t;
    int n_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 = NULL,f_5 = NULL,o_6 = NULL,p_6 = NULL;
        t = term_d_32;
        p_6 = t;
        t = term_d_32;
        o_6 = t;
        t = SSL_table_get(o_6, k_24);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_5 = ATgetFirst((ATermList) t);
            {
              ATerm o_40 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = f_5;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm p_40 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_40) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
            u_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_4;
        ;
        LocalPopChoice(n_40);
      }
    else
      {
        t = m_40;
        {
          ATerm q_40 = t;
          int r_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_5 = NULL,q_6 = NULL,r_6 = NULL;
              t = term_d_32;
              r_6 = t;
              t = term_d_32;
              q_6 = t;
              t = SSL_table_get(q_6, k_24);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_5 = ATgetFirst((ATermList) t);
                  {
                    ATerm s_40 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = m_5;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(r_40);
            }
          else
            {
              t = q_40;
              {
                ATerm u_5 = NULL,s_6 = NULL,t_6 = NULL;
                t = term_d_32;
                t_6 = t;
                t = term_d_32;
                s_6 = t;
                t = SSL_table_get(s_6, k_24);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_5 = ATgetFirst((ATermList) t);
                    {
                      ATerm t_40 = (ATerm) ATgetNext((ATermList) t);
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
    ATerm u_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_90(t);
        ;
        LocalPopChoice(v_40);
      }
    else
      {
        t = u_40;
        t = SRTS_all(p_24, t);
      }
    return(t);
  }
  t = p_24(t);
  return(t);
}
ATerm Match_1_0 (ATerm f_78 (ATerm), ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,y_6 = NULL,z_6 = NULL;
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
  z_6 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, s_24);
  y_6 = t;
  t = SSLsetAnnotations(y_6, q_24);
  return(t);
}
ATerm i_25 (ATerm t)
{
  t = alltd_1_0(Binding_0_0, t);
  return(t);
}
ATerm m_25 (ATerm t)
{
  ATerm w_40 = t;
  int x_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = introduce_binding_0_0(t);
      ;
      LocalPopChoice(x_40);
    }
  else
    {
      t = w_40;
    }
  return(t);
}
ATerm n_25 (ATerm t)
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
          ATerm y_40 = ATgetArgument(t, 0);
          ATerm z_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_24;
    }
  return(t);
}
ATerm o_25 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  t = Match_1_0(i_25, t);
  if(match_cons(t, sym_Match_1))
    {
      x_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_41 = t;
    int b_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        y_24 = t;
        t = (ATerm) ATmakeAppl(sym_Match_1, x_24);
        {
          ATerm c_41 = t;
          int d_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, x_24, y_24));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(m_25, t);
              t = (ATerm) ATmakeAppl(sym_Match_1, x_24);
              ;
              LocalPopChoice(d_41);
            }
          else
            {
              t = c_41;
              {
                ATerm a_7 = NULL,e_7 = NULL,g_7 = NULL,h_7 = NULL;
                t = term_e_41;
                g_7 = t;
                t = term_f_30;
                a_7 = t;
                t = g_7;
                h_7 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym__4, term_f_41, (ATerm)ATmakeAppl(sym_Match_1, x_24), term_g_41, y_24)), term_e_41);
                e_7 = t;
                t = SSL_printnl(a_7, e_7);
                t = term_h_41;
              }
            }
        }
        ;
        LocalPopChoice(b_41);
      }
    else
      {
        t = a_41;
        {
          ATerm i_41 = t;
          int j_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_24;
              {
                ATerm k_41 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(n_25, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_41;
                  }
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_41, x_24));
                t = assert_1_0(o_25, t);
                t = (ATerm) ATmakeAppl(sym_Match_1, x_24);
              }
              ;
              LocalPopChoice(j_41);
            }
          else
            {
              t = i_41;
            }
        }
      }
  }
  return(t);
}
ATerm p_25 (ATerm t)
{
  t = exec_maybe_1_0(cp_0_0, t);
  return(t);
}
ATerm q_25 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm t_25 (ATerm t)
{
  t = exec_maybe_1_0(cp_0_0, t);
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm m_41 = t;
  int n_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
      ;
      LocalPopChoice(n_41);
    }
  else
    {
      t = m_41;
      {
        ATerm o_41 = t;
        int p_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0_0(t);
            ;
            LocalPopChoice(p_41);
          }
        else
          {
            t = o_41;
            {
              ATerm q_41 = t;
              int r_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = prop_scope_1_0(cp_0_0, t);
                  ;
                  LocalPopChoice(r_41);
                }
              else
                {
                  t = q_41;
                  {
                    ATerm s_41 = t;
                    int t_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        ;
                        LocalPopChoice(t_41);
                      }
                    else
                      {
                        t = s_41;
                        {
                          ATerm u_41 = t;
                          int v_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
                              ;
                              LocalPopChoice(v_41);
                            }
                          else
                            {
                              t = u_41;
                              {
                                ATerm w_41 = t;
                                int x_41 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Seq_2_0(cp_0_0, cp_0_0, t);
                                    ;
                                    LocalPopChoice(x_41);
                                  }
                                else
                                  {
                                    t = w_41;
                                    {
                                      ATerm y_41 = t;
                                      int z_41 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1_0(cp_0_0, t);
                                          ;
                                          LocalPopChoice(z_41);
                                        }
                                      else
                                        {
                                          t = y_41;
                                          {
                                            ATerm a_42 = t;
                                            int b_42 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = prop_let_1_0(cp_0_0, t);
                                                ;
                                                LocalPopChoice(b_42);
                                              }
                                            else
                                              {
                                                t = a_42;
                                                {
                                                  ATerm c_42 = t;
                                                  int d_42 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_25 = NULL;
                                                      e_25 = t;
                                                      {
                                                        ATerm e_42 = t;
                                                        int f_42 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm g_42 = ATgetArgument(t, 0);
                                                                ATerm h_42 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(f_42);
                                                            t = e_25;
                                                            t = Rec_2_0(_id, p_25, t);
                                                          }
                                                        else
                                                          {
                                                            t = e_42;
                                                            if(match_cons(t, sym_Not_1))
                                                              {
                                                                ATerm i_42 = ATgetArgument(t, 0);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = term_k_32;
                                                            t = assert_1_0(q_25, t);
                                                            t = e_25;
                                                            t = Not_1_0(t_25, t);
                                                          }
                                                      }
                                                      ;
                                                      LocalPopChoice(d_42);
                                                    }
                                                  else
                                                    {
                                                      t = c_42;
                                                      {
                                                        ATerm j_42 = t;
                                                        int k_42 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = prop_sdef_1_0(cp_0_0, t);
                                                            ;
                                                            LocalPopChoice(k_42);
                                                          }
                                                        else
                                                          {
                                                            t = j_42;
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
    ATerm l_42 = t;
    int m_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_42 = ATgetArgument(t, 0);
            ATerm o_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_25, k_25);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_42 = ATgetFirst((ATermList) t);
            b_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_6;
        ;
        LocalPopChoice(m_42);
      }
    else
      {
        t = l_42;
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
  ATerm r_25 = NULL,s_25 = NULL,v_25 = NULL,x_25 = NULL,k_7 = NULL,o_7 = NULL;
  r_25 = t;
  t = f_105(t);
  s_25 = t;
  {
    ATerm q_42 = t;
    int r_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_7 = NULL,j_7 = NULL;
        j_7 = t;
        t = term_s_32;
        i_7 = t;
        t = SSL_table_get(s_25, i_7);
        ;
        LocalPopChoice(r_42);
      }
    else
      {
        t = q_42;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_25 = ATgetFirst((ATermList) t);
        v_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    o_7 = t;
    t = term_s_32;
    k_7 = t;
    t = SSL_table_put(s_25, k_7, v_25);
    t = x_25;
    {
      ATerm u_25 (ATerm t)
      {
        ATerm y_25 = NULL;
        y_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_25, y_25);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(u_25, t);
      t = r_25;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm t)
{
  ATerm s_42 = t;
  int t_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_87(t);
      t = q_87(t);
      ;
      LocalPopChoice(t_42);
    }
  else
    {
      t = s_42;
      t = q_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_105 (ATerm), ATerm t)
{
  ATerm d_26 = NULL,f_26 = NULL,h_26 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL;
  d_26 = t;
  t = e_105(t);
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_26, term_s_32);
  {
    ATerm u_42 = t;
    int v_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_7 = NULL,q_7 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_42 = ATgetArgument(t, 0);
            ATerm x_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        q_7 = t;
        t = term_s_32;
        p_7 = t;
        t = SSL_table_get(f_26, p_7);
        ;
        LocalPopChoice(v_42);
      }
    else
      {
        t = u_42;
        t = (ATerm) ATempty;
      }
    h_26 = t;
    t_7 = t;
    t = term_s_32;
    r_7 = t;
    t = t_7;
    u_7 = t;
    t = (ATerm) ATinsert(CheckATermList(h_26), (ATerm) ATempty);
    s_7 = t;
    t = SSL_table_put(f_26, r_7, s_7);
    t = d_26;
  }
  return(t);
}
ATerm scope_2_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm t)
{
  t = begin_scope_1_0(g_105, t);
  {
    ATerm w_25 (ATerm t)
    {
      t = end_scope_1_0(g_105, t);
      return(t);
    }
    t = restore_always_2_0(h_105, w_25, t);
  }
  return(t);
}
ATerm map_1_0 (ATerm l_94 (ATerm), ATerm t)
{
  ATerm m_26 (ATerm t)
  {
    ATerm y_42 = t;
    int z_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_42);
      }
    else
      {
        t = y_42;
        t = Cons_2_0(l_94, m_26, t);
      }
    return(t);
  }
  t = m_26(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm q_73 (ATerm), ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,v_7 = NULL,w_7 = NULL;
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
  w_7 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, p_26);
  v_7 = t;
  t = SSLsetAnnotations(v_7, n_26);
  return(t);
}
ATerm Cons_2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,x_7 = NULL,y_7 = NULL;
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
  y_7 = t;
  t = (ATerm) ATinsert(CheckATermList(x_26), w_26);
  x_7 = t;
  t = SSLsetAnnotations(x_7, t_26);
  return(t);
}
ATerm Signature_1_0 (ATerm r_73 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,z_7 = NULL,a_8 = NULL;
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
  a_8 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, d_27);
  z_7 = t;
  t = SSLsetAnnotations(z_7, b_27);
  return(t);
}
ATerm Specification_1_0 (ATerm v_73 (ATerm), ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,b_8 = NULL,c_8 = NULL;
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
  c_8 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, j_27);
  b_8 = t;
  t = SSLsetAnnotations(b_8, h_27);
  return(t);
}
ATerm _2_0 (ATerm v_68 (ATerm), ATerm w_68 (ATerm), ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,d_8 = NULL,e_8 = NULL;
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
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
  d_8 = t;
  t = SSLsetAnnotations(d_8, n_27);
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
  t = (ATerm) ATmakeAppl(sym__2, v_27, term_a_43);
  t = open_stream_0_0(t);
  x_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_27, w_27);
  t = b_107(t);
  t = fclose_0_0(t);
  t = w_27;
  return(t);
}
ATerm c_26 (ATerm t)
{
  t = fetch_1_0(g_26, t);
  return(t);
}
ATerm e_26 (ATerm t)
{
  t = WriteToFile_1_0(i_26, t);
  return(t);
}
ATerm g_26 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm i_26 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_43 = ATgetArgument(t, 0);
      if(match_cons(b_43, sym_Stream_1))
        {
          a_28 = ATgetArgument(b_43, 0);
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
ATerm j_26 (ATerm t)
{
  t = WriteToFile_1_0(k_26, t);
  return(t);
}
ATerm k_26 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,f_8 = NULL,g_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_43 = ATgetArgument(t, 0);
      if(match_cons(c_43, sym_Stream_1))
        {
          d_28 = ATgetArgument(c_43, 0);
        }
      else
        _fail(t);
      e_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(d_28, e_28);
  f_28 = t;
  g_8 = t;
  t = term_d_43;
  f_8 = t;
  t = SSL_fputc(f_8, f_28);
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_28);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL;
  y_27 = t;
  {
    ATerm z_25 (ATerm t)
    {
      ATerm e_43 = t;
      int f_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_26 (ATerm t)
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
          t = fetch_1_0(a_26, t);
          ;
          LocalPopChoice(f_43);
        }
      else
        {
          t = e_43;
          t = term_g_43;
          if(((z_27 != NULL) && (z_27 != t)))
            _fail(t);
          else
            z_27 = t;
        }
      return(t);
    }
    t = _2_0(z_25, _id, t);
    t = y_27;
    {
      ATerm b_26 (ATerm t)
      {
        ATerm d_6 = NULL;
        d_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_27), d_6);
        return(t);
      }
      t = _2_0(_id, b_26, t);
      {
        ATerm h_43 = t;
        int i_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(c_26, e_26, t);
            ;
            LocalPopChoice(i_43);
          }
        else
          {
            t = h_43;
            t = _2_0(_id, j_26, t);
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
        ATerm j_43 = t;
        int k_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_28);
            ;
            LocalPopChoice(k_43);
          }
        else
          {
            t = j_43;
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
ATerm l_26 (ATerm t)
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
ATerm r_26 (ATerm t)
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
      ATerm l_43 = ATgetArgument(t, 0);
      ATerm m_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_43 = t;
    int o_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_7 = NULL,c_7 = NULL;
        b_7 = t;
        t = SSL_explode_term(b_7);
        if(match_cons(t, sym__2))
          {
            ATerm p_43 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_43) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_43 = ATgetArgument(t, 1);
              if(((ATgetType(q_43) == AT_LIST) && !(ATisEmpty(q_43))))
                {
                  c_7 = ATgetFirst((ATermList) q_43);
                  {
                    ATerm r_43 = (ATerm) ATgetNext((ATermList) q_43);
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
        LocalPopChoice(o_43);
      }
    else
      {
        t = n_43;
        {
          ATerm s_43 = t;
          int t_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
              t = _2_0(l_26, _id, t);
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
              LocalPopChoice(t_43);
            }
          else
            {
              t = s_43;
              {
                ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
                t = _2_0(r_26, _id, t);
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
  ATerm u_43 = t;
  int v_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_29 = NULL;
      t_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_29, term_w_43);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_43);
    }
  else
    {
      t = u_43;
      {
        ATerm d_7 = NULL,i_8 = NULL,j_8 = NULL,m_8 = NULL,o_8 = NULL;
        d_7 = t;
        t = term_x_43;
        m_8 = t;
        t = term_f_30;
        i_8 = t;
        t = m_8;
        o_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, d_7), term_x_43);
        j_8 = t;
        t = SSL_printnl(i_8, j_8);
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
    ATerm y_43 = t;
    int z_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(w_94, _id, t);
        ;
        LocalPopChoice(z_43);
      }
    else
      {
        t = y_43;
        t = Cons_2_0(_id, y_29, t);
      }
    return(t);
  }
  t = y_29(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_44 = t;
  int b_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_44);
    }
  else
    {
      t = a_44;
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
          ATerm s_26 (ATerm t)
          {
            t = c_30;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(s_26, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm c_95 (ATerm), ATerm t)
{
  ATerm i_30 (ATerm t)
  {
    ATerm c_44 = t;
    int d_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, i_30, t);
        ;
        LocalPopChoice(d_44);
      }
    else
      {
        t = c_44;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_95(t);
      }
    return(t);
  }
  t = i_30(t);
  return(t);
}
ATerm z_26 (ATerm t)
{
  ATerm l_30 = NULL;
  l_30 = t;
  t = SSL_explode_string(l_30);
  return(t);
}
ATerm a_27 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  t = SSL_explode_string(m_30);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm k_30 = NULL;
  t = _2_0(z_26, a_27, t);
  {
    ATerm e_44 = t;
    int f_44 = stack_ptr;
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
          ATerm f_27 (ATerm t)
          {
            t = p_30;
            return(t);
          }
          t = at_end_1_0(f_27, t);
        }
        ;
        LocalPopChoice(f_44);
      }
    else
      {
        t = e_44;
        {
          ATerm m_7 = NULL,n_7 = NULL;
          m_7 = t;
          t = SSL_explode_term(m_7);
          if(match_cons(t, sym__2))
            {
              ATerm g_44 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_44) != ATmakeSymbol("", 0, ATtrue)))
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
ATerm g_27 (ATerm t)
{
  ATerm h_44 = t;
  int i_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_44);
    }
  else
    {
      t = h_44;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_44 = t;
  int k_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_30 = NULL;
      z_30 = t;
      t = SSL_is_string(z_30);
      ;
      LocalPopChoice(k_44);
    }
  else
    {
      t = j_44;
      {
        ATerm l_44 = t;
        int m_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_27, t);
            ;
            LocalPopChoice(m_44);
          }
        else
          {
            t = l_44;
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
                        ATerm n_44 = t;
                        int o_44 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_8 = NULL,q_8 = NULL;
                            q_8 = t;
                            t = term_p_44;
                            p_8 = t;
                            t = SSL_table_get(p_8, e_31);
                            {
                              ATerm q_44 = t;
                              int r_44 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_8 = NULL,s_8 = NULL,t_8 = NULL;
                                  t = eval_config_0_0(t);
                                  h_8 = t;
                                  t_8 = t;
                                  t = term_p_44;
                                  s_8 = t;
                                  t = SSL_table_put(s_8, e_31, h_8);
                                  t = h_8;
                                  ;
                                  LocalPopChoice(r_44);
                                }
                              else
                                {
                                  t = q_44;
                                }
                            }
                            ;
                            LocalPopChoice(o_44);
                          }
                        else
                          {
                            t = n_44;
                            {
                              ATerm u_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
                              t = term_s_44;
                              y_8 = t;
                              t = term_f_30;
                              u_8 = t;
                              t = y_8;
                              z_8 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, e_31), term_s_44);
                              x_8 = t;
                              t = SSL_printnl(u_8, x_8);
                              t = e_31;
                              _fail(t);
                            }
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
  ATerm t_44 = t;
  int u_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_32 = NULL,n_32 = NULL,a_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
      l_32 = t;
      t = term_v_44;
      e_9 = t;
      t = term_p_44;
      a_9 = t;
      t = e_9;
      f_9 = t;
      t = term_v_44;
      d_9 = t;
      t = SSL_table_get(a_9, d_9);
      {
        ATerm w_44 = t;
        int x_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_8 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,q_9 = NULL;
            t = eval_config_0_0(t);
            r_8 = t;
            o_9 = t;
            t = term_p_44;
            m_9 = t;
            t = o_9;
            q_9 = t;
            t = term_v_44;
            n_9 = t;
            t = SSL_table_put(m_9, n_9, r_8);
            t = r_8;
            ;
            LocalPopChoice(x_44);
          }
        else
          {
            t = w_44;
          }
        n_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_32, term_y_44);
        t = geq_0_0(t);
        t = l_32;
        t = m_108(t);
      }
      ;
      LocalPopChoice(u_44);
    }
  else
    {
      t = t_44;
    }
  return(t);
}
ATerm l_27 (ATerm t)
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
ATerm m_27 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
  q_32 = t;
  t = SSL_string_to_int(q_32);
  r_32 = t;
  u_9 = t;
  t = term_p_44;
  s_9 = t;
  t = u_9;
  v_9 = t;
  t = term_z_44;
  t_9 = t;
  t = SSL_table_put(s_9, t_9, r_32);
  t = q_32;
  return(t);
}
ATerm t_27 (ATerm t)
{
  t = term_a_45;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_27, m_27, t_27, t);
  return(t);
}
ATerm u_27 (ATerm t)
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
ATerm m_28 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL;
  z_9 = t;
  t = term_p_44;
  w_9 = t;
  t = z_9;
  a_10 = t;
  t = term_v_44;
  x_9 = t;
  t = a_10;
  b_10 = t;
  t = term_b_45;
  y_9 = t;
  t = SSL_table_put(w_9, x_9, y_9);
  t = term_c_45;
  return(t);
}
ATerm n_28 (ATerm t)
{
  t = term_d_45;
  return(t);
}
ATerm o_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_28 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,c_10 = NULL,f_10 = NULL,h_10 = NULL,k_10 = NULL;
  y_32 = t;
  t = SSL_string_to_int(y_32);
  z_32 = t;
  h_10 = t;
  t = term_p_44;
  c_10 = t;
  t = h_10;
  k_10 = t;
  t = term_v_44;
  f_10 = t;
  t = SSL_table_put(c_10, f_10, z_32);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_32);
  return(t);
}
ATerm q_28 (ATerm t)
{
  t = term_e_45;
  return(t);
}
ATerm r_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_28 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,s_10 = NULL;
  p_10 = t;
  t = term_p_44;
  l_10 = t;
  t = p_10;
  q_10 = t;
  t = term_f_45;
  m_10 = t;
  t = q_10;
  s_10 = t;
  t = term_c_22;
  o_10 = t;
  t = SSL_table_put(l_10, m_10, o_10);
  t = term_g_45;
  return(t);
}
ATerm u_28 (ATerm t)
{
  t = term_h_45;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_45 = t;
  int j_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_27, m_28, n_28, t);
      ;
      LocalPopChoice(j_45);
    }
  else
    {
      t = i_45;
      {
        ATerm k_45 = t;
        int l_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_28, p_28, q_28, t);
            ;
            LocalPopChoice(l_45);
          }
        else
          {
            t = k_45;
            t = Option_3_0(r_28, s_28, u_28, t);
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
      t = term_c_22;
      t = c_0(t);
      e_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_45, term_n_45, e_33);
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
      t = term_c_22;
      t = b_0(t);
      h_33 = t;
      t = (ATerm) ATinsert(CheckATermList(d_33), h_33);
    }
  return(t);
}
ATerm v_28 (ATerm t)
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
ATerm y_28 (ATerm t)
{
  ATerm k_33 = NULL,t_10 = NULL,u_10 = NULL,w_10 = NULL,x_10 = NULL;
  k_33 = t;
  w_10 = t;
  t = term_p_44;
  t_10 = t;
  t = w_10;
  x_10 = t;
  t = term_o_45;
  u_10 = t;
  t = SSL_table_put(t_10, u_10, k_33);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_33);
  return(t);
}
ATerm d_29 (ATerm t)
{
  t = term_p_45;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_28, y_28, d_29, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,y_10 = NULL,z_10 = NULL;
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
    ATerm q_45 = t;
    int r_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_45 = ATgetArgument(t, 0);
            ATerm t_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_33, o_33);
        ;
        LocalPopChoice(r_45);
      }
    else
      {
        t = q_45;
        t = (ATerm) ATempty;
      }
    q_33 = t;
    z_10 = t;
    t = (ATerm) ATinsert(CheckATermList(q_33), p_33);
    y_10 = t;
    t = SSL_table_put(n_33, o_33, y_10);
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
      t = term_c_22;
      t = j_0(t);
      e_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_45, term_n_45, e_34);
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
ATerm e_29 (ATerm t)
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
ATerm f_29 (ATerm t)
{
  ATerm o_34 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,h_11 = NULL;
  o_34 = t;
  c_11 = t;
  t = term_p_44;
  a_11 = t;
  t = c_11;
  h_11 = t;
  t = term_u_45;
  b_11 = t;
  t = SSL_table_put(a_11, b_11, o_34);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_34);
  return(t);
}
ATerm g_29 (ATerm t)
{
  t = term_v_45;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_29, f_29, g_29, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_34 = NULL,m_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,n_11 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_22;
  t = whoami_0_0(t);
  p_34 = t;
  k_11 = t;
  t = term_f_30;
  i_11 = t;
  t = k_11;
  l_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_45), p_34);
  j_11 = t;
  t = SSL_printnl(i_11, j_11);
  n_11 = t;
  t = term_c_32;
  m_11 = t;
  t = SSL_exit(m_11);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
  t = term_x_45;
  r_11 = t;
  t = term_p_44;
  o_11 = t;
  t = r_11;
  s_11 = t;
  t = term_x_45;
  q_11 = t;
  t = SSL_table_get(o_11, q_11);
  {
    ATerm y_45 = t;
    int z_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_8 = NULL,t_11 = NULL,v_11 = NULL,w_11 = NULL,y_11 = NULL;
        t = eval_config_0_0(t);
        v_8 = t;
        w_11 = t;
        t = term_p_44;
        t_11 = t;
        t = w_11;
        y_11 = t;
        t = term_x_45;
        v_11 = t;
        t = SSL_table_put(t_11, v_11, v_8);
        t = v_8;
        ;
        LocalPopChoice(z_45);
      }
    else
      {
        t = y_45;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t)
{
  ATerm a_46 = t;
  int b_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_100(t);
      ;
      LocalPopChoice(b_46);
    }
  else
    {
      t = a_46;
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
ATerm o_29 (ATerm t)
{
  t = term_b_45;
  return(t);
}
ATerm u_29 (ATerm t)
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
    ATerm c_46 = t;
    int d_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(i_9, k_9);
        ;
        LocalPopChoice(d_46);
      }
    else
      {
        t = c_46;
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
      ATerm e_46 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9;
  t = foldr_2_0(o_29, u_29, t);
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
    ATerm f_46 = t;
    int g_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_35;
        if((o_35 != t))
          {
            _fail(t);
          }
        t = n_35;
        ;
        LocalPopChoice(g_46);
      }
    else
      {
        t = f_46;
        t = n_35;
        {
          ATerm h_46 = t;
          int i_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_35, p_35);
              ;
              LocalPopChoice(i_46);
            }
          else
            {
              t = h_46;
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
  ATerm j_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_35 = NULL,u_35 = NULL,z_11 = NULL,a_12 = NULL,c_12 = NULL,e_12 = NULL;
      s_35 = t;
      t = term_v_44;
      c_12 = t;
      t = term_p_44;
      z_11 = t;
      t = c_12;
      e_12 = t;
      t = term_v_44;
      a_12 = t;
      t = SSL_table_get(z_11, a_12);
      {
        ATerm l_46 = t;
        int m_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_10 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
            t = eval_config_0_0(t);
            e_10 = t;
            i_12 = t;
            t = term_p_44;
            g_12 = t;
            t = i_12;
            j_12 = t;
            t = term_v_44;
            h_12 = t;
            t = SSL_table_put(g_12, h_12, e_10);
            t = e_10;
            ;
            LocalPopChoice(m_46);
          }
        else
          {
            t = l_46;
          }
        u_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_35, term_c_32);
        t = geq_0_0(t);
        t = s_35;
        t = l_108(t);
      }
      ;
      LocalPopChoice(k_46);
    }
  else
    {
      t = j_46;
    }
  return(t);
}
ATerm v_29 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
  t = run_time_0_0(t);
  w_35 = t;
  t = term_c_22;
  t = whoami_0_0(t);
  x_35 = t;
  m_12 = t;
  t = term_f_30;
  k_12 = t;
  t = m_12;
  n_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_46), w_35), term_n_46), x_35);
  l_12 = t;
  t = SSL_printnl(k_12, l_12);
  t = (ATerm) ATmakeAppl(sym__2, term_f_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_46), w_35), term_n_46), x_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_29, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL;
  t = report_run_time_0_0(t);
  p_12 = t;
  t = term_b_45;
  o_12 = t;
  t = SSL_exit(o_12);
  return(t);
}
ATerm w_29 (ATerm t)
{
  ATerm p_46 = t;
  int q_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(q_46);
    }
  else
    {
      t = p_46;
      {
        ATerm r_46 = t;
        int s_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(s_46);
          }
        else
          {
            t = r_46;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_111 (ATerm), ATerm t)
{
  ATerm t_46 = t;
  int u_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_12 = NULL,s_12 = NULL,u_12 = NULL,v_12 = NULL;
      t = term_v_46;
      u_12 = t;
      t = term_p_44;
      r_12 = t;
      t = u_12;
      v_12 = t;
      t = term_v_46;
      s_12 = t;
      t = SSL_table_get(r_12, s_12);
      {
        ATerm w_46 = t;
        int x_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_10 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
            t = eval_config_0_0(t);
            n_10 = t;
            y_12 = t;
            t = term_p_44;
            w_12 = t;
            t = y_12;
            z_12 = t;
            t = term_v_46;
            x_12 = t;
            t = SSL_table_put(w_12, x_12, n_10);
            t = n_10;
            ;
            LocalPopChoice(x_46);
          }
        else
          {
            t = w_46;
          }
      }
      ;
      LocalPopChoice(u_46);
    }
  else
    {
      t = t_46;
      t = fetch_1_0(w_29, t);
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
          ATerm x_29 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(e_36), f_36);
            return(t);
          }
          t = reverse_acc_2_0(d_0, x_29, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_22;
      t = e_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm e_86 (ATerm), ATerm t)
{
  ATerm h_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,a_13 = NULL,b_13 = NULL;
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
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_36);
  a_13 = t;
  t = SSLsetAnnotations(a_13, h_36);
  return(t);
}
ATerm z_29 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm a_30 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_30 (ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_36), term_y_46);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,p_13 = NULL,q_13 = NULL;
  ATerm z_46 = t;
  int a_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
      t = term_x_45;
      f_13 = t;
      t = term_p_44;
      d_13 = t;
      t = f_13;
      g_13 = t;
      t = term_x_45;
      e_13 = t;
      t = SSL_table_get(d_13, e_13);
      {
        ATerm b_47 = t;
        int c_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_10 = NULL,h_13 = NULL,i_13 = NULL,k_13 = NULL,l_13 = NULL;
            t = eval_config_0_0(t);
            r_10 = t;
            k_13 = t;
            t = term_p_44;
            h_13 = t;
            t = k_13;
            l_13 = t;
            t = term_x_45;
            i_13 = t;
            t = SSL_table_put(h_13, i_13, r_10);
            t = r_10;
            ;
            LocalPopChoice(c_47);
          }
        else
          {
            t = b_47;
          }
      }
      ;
      LocalPopChoice(a_47);
    }
  else
    {
      t = z_46;
      t = fetch_1_0(z_29, t);
    }
  t = term_d_47;
  t = echo_0_0(t);
  p_13 = t;
  t = term_m_45;
  m_13 = t;
  t = p_13;
  q_13 = t;
  t = term_n_45;
  n_13 = t;
  t = SSL_table_get(m_13, n_13);
  t = reverse_acc_2_0(_id, a_30, t);
  t = map_1_0(d_30, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm f_86 (ATerm), ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL,r_13 = NULL,s_13 = NULL;
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
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_36);
  r_13 = t;
  t = SSLsetAnnotations(r_13, p_36);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,u_13 = NULL,v_13 = NULL;
  w_36 = t;
  {
    ATerm e_47 = t;
    int f_47 = stack_ptr;
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
                ATerm g_47 = ATgetFirst((ATermList) t);
                ATerm h_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_36;
          }
        ;
        LocalPopChoice(f_47);
      }
    else
      {
        t = e_47;
        t = (ATerm) ATinsert(ATempty, w_36);
      }
    x_36 = t;
    v_13 = t;
    t = term_g_43;
    u_13 = t;
    t = SSL_printnl(u_13, x_36);
    t = w_36;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,z_13 = NULL,a_14 = NULL;
  t = term_x_45;
  z_13 = t;
  t = term_p_44;
  w_13 = t;
  t = z_13;
  a_14 = t;
  t = term_x_45;
  x_13 = t;
  t = SSL_table_get(w_13, x_13);
  {
    ATerm i_47 = t;
    int j_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_10 = NULL,b_14 = NULL,c_14 = NULL,f_14 = NULL,g_14 = NULL;
        t = eval_config_0_0(t);
        v_10 = t;
        f_14 = t;
        t = term_p_44;
        b_14 = t;
        t = f_14;
        g_14 = t;
        t = term_x_45;
        c_14 = t;
        t = SSL_table_put(b_14, c_14, v_10);
        t = v_10;
        ;
        LocalPopChoice(j_47);
      }
    else
      {
        t = i_47;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm e_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_30 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  o_14 = t;
  t = term_p_44;
  l_14 = t;
  t = o_14;
  p_14 = t;
  t = term_k_47;
  m_14 = t;
  t = p_14;
  q_14 = t;
  t = term_c_22;
  n_14 = t;
  t = SSL_table_put(l_14, m_14, n_14);
  t = term_l_47;
  return(t);
}
ATerm h_30 (ATerm t)
{
  t = term_m_47;
  return(t);
}
ATerm j_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_30 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL,w_14 = NULL,x_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  w_14 = t;
  t = term_p_44;
  r_14 = t;
  t = w_14;
  x_14 = t;
  t = term_k_47;
  s_14 = t;
  t = x_14;
  z_14 = t;
  t = term_c_22;
  t_14 = t;
  t = SSL_table_put(r_14, s_14, t_14);
  g_15 = t;
  t = term_p_44;
  a_15 = t;
  t = g_15;
  h_15 = t;
  t = term_n_47;
  b_15 = t;
  t = h_15;
  i_15 = t;
  t = term_c_22;
  f_15 = t;
  t = SSL_table_put(a_15, b_15, f_15);
  t = term_o_47;
  return(t);
}
ATerm q_30 (ATerm t)
{
  t = term_p_47;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_47 = t;
  int r_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_30, g_30, h_30, t);
      ;
      LocalPopChoice(r_47);
    }
  else
    {
      t = q_47;
      t = Option_3_0(j_30, n_30, q_30, t);
    }
  return(t);
}
ATerm r_30 (ATerm t)
{
  ATerm d_37 = NULL,j_15 = NULL,k_15 = NULL,m_15 = NULL,n_15 = NULL;
  d_37 = t;
  m_15 = t;
  t = term_p_44;
  j_15 = t;
  t = m_15;
  n_15 = t;
  t = term_x_45;
  k_15 = t;
  t = SSL_table_put(j_15, k_15, d_37);
  t = (ATerm) ATmakeAppl(sym_Program_1, d_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_113 (ATerm), ATerm t)
{
  ATerm c_37 = NULL;
  c_37 = t;
  {
    ATerm s_47 = t;
    int t_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_47;
        t = e_113(t);
        ;
        LocalPopChoice(t_47);
      }
    else
      {
        t = s_47;
      }
    t = c_37;
    {
      ATerm s_30 (ATerm t)
      {
        ATerm v_47 = t;
        int w_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_47 = t;
            int y_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(y_47);
              }
            else
              {
                t = x_47;
                t = e_113(t);
                t = Cons_2_0(_id, s_30, t);
              }
            ;
            LocalPopChoice(w_47);
          }
        else
          {
            t = v_47;
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
      t = Cons_2_0(r_30, s_30, t);
    }
  }
  return(t);
}
ATerm u_30 (ATerm t)
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
ATerm v_30 (ATerm t)
{
  ATerm x_15 = NULL,z_15 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  d_16 = t;
  t = term_p_44;
  x_15 = t;
  t = d_16;
  e_16 = t;
  t = term_v_46;
  z_15 = t;
  t = e_16;
  f_16 = t;
  t = term_c_22;
  c_16 = t;
  t = SSL_table_put(x_15, z_15, c_16);
  t = term_z_47;
  return(t);
}
ATerm w_30 (ATerm t)
{
  t = term_a_48;
  return(t);
}
ATerm x_30 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,s_15 = NULL,t_15 = NULL,w_15 = NULL,m_17 = NULL,o_17 = NULL;
  p_37 = t;
  s_15 = t;
  t = term_m_45;
  o_15 = t;
  t = s_15;
  t_15 = t;
  t = term_n_45;
  p_15 = t;
  t = t_15;
  w_15 = t;
  t = (ATerm) ATempty;
  q_15 = t;
  t = SSL_table_put(o_15, p_15, q_15);
  t = p_37;
  {
    ATerm t_30 (ATerm t)
    {
      ATerm b_48 = t;
      int c_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_113(t);
          ;
          LocalPopChoice(c_48);
        }
      else
        {
          t = b_48;
          {
            ATerm d_48 = t;
            int e_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_30, v_30, w_30, t);
                ;
                LocalPopChoice(e_48);
              }
            else
              {
                t = d_48;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_30, t);
    {
      ATerm f_48 = t;
      int g_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_37 = NULL;
          x_37 = t;
          {
            ATerm h_48 = t;
            int i_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_16 = NULL,u_16 = NULL;
                t = x_37;
                {
                  ATerm j_48 = t;
                  int k_48 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_16 = NULL,k_16 = NULL,m_16 = NULL,n_16 = NULL;
                      t = term_v_46;
                      m_16 = t;
                      t = term_p_44;
                      g_16 = t;
                      t = m_16;
                      n_16 = t;
                      t = term_v_46;
                      k_16 = t;
                      t = SSL_table_get(g_16, k_16);
                      {
                        ATerm l_48 = t;
                        int m_48 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_11 = NULL,o_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL;
                            t = eval_config_0_0(t);
                            p_11 = t;
                            r_16 = t;
                            t = term_p_44;
                            o_16 = t;
                            t = r_16;
                            s_16 = t;
                            t = term_v_46;
                            q_16 = t;
                            t = SSL_table_put(o_16, q_16, p_11);
                            t = p_11;
                            ;
                            LocalPopChoice(m_48);
                          }
                        else
                          {
                            t = l_48;
                          }
                      }
                      ;
                      LocalPopChoice(k_48);
                    }
                  else
                    {
                      t = j_48;
                      t = fetch_1_0(x_30, t);
                    }
                  t = x_37;
                  t = default_system_usage_0_0(t);
                  u_16 = t;
                  t = term_b_45;
                  t_16 = t;
                  t = SSL_exit(t_16);
                }
                ;
                LocalPopChoice(i_48);
              }
            else
              {
                t = h_48;
                {
                  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,z_16 = NULL,e_17 = NULL,f_17 = NULL;
                  t = term_k_47;
                  x_16 = t;
                  t = term_p_44;
                  v_16 = t;
                  t = x_16;
                  z_16 = t;
                  t = term_k_47;
                  w_16 = t;
                  t = SSL_table_get(v_16, w_16);
                  {
                    ATerm n_48 = t;
                    int o_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_11 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
                        t = eval_config_0_0(t);
                        x_11 = t;
                        c_17 = t;
                        t = term_p_44;
                        a_17 = t;
                        t = c_17;
                        d_17 = t;
                        t = term_k_47;
                        b_17 = t;
                        t = SSL_table_put(a_17, b_17, x_11);
                        t = x_11;
                        ;
                        LocalPopChoice(o_48);
                      }
                    else
                      {
                        t = n_48;
                      }
                    t = x_37;
                    t = default_system_about_0_0(t);
                    f_17 = t;
                    t = term_b_45;
                    e_17 = t;
                    t = SSL_exit(e_17);
                  }
                }
              }
          }
          ;
          LocalPopChoice(g_48);
        }
      else
        {
          t = f_48;
          {
            ATerm p_48 = t;
            int q_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
                ATerm y_30 (ATerm t)
                {
                  ATerm a_31 (ATerm t)
                  {
                    if(((q_37 != NULL) && (q_37 != t)))
                      _fail(t);
                    else
                      q_37 = t;
                    return(t);
                  }
                  t = Undefined_1_0(a_31, t);
                  return(t);
                }
                t = fetch_1_0(y_30, t);
                i_17 = t;
                t = term_f_30;
                g_17 = t;
                t = i_17;
                j_17 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_37)), term_r_48);
                h_17 = t;
                t = SSL_printnl(g_17, h_17);
                t = (ATerm) ATmakeAppl(sym__2, term_f_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_37)), term_r_48));
                t = default_system_usage_0_0(t);
                l_17 = t;
                t = term_c_32;
                k_17 = t;
                t = SSL_exit(k_17);
                ;
                LocalPopChoice(q_48);
              }
            else
              {
                t = p_48;
              }
          }
        }
      r_37 = t;
      o_17 = t;
      t = term_m_45;
      m_17 = t;
      t = SSL_table_destroy(m_17);
      t = r_37;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_111 (ATerm), ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm t)
{
  ATerm a_38 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,u_17 = NULL,c_18 = NULL,e_18 = NULL;
  t = parse_options_1_0(d_111, t);
  a_38 = t;
  q_17 = t;
  t = term_s_48;
  p_17 = t;
  t = SSL_table_create(p_17);
  c_18 = t;
  t = term_s_48;
  r_17 = t;
  t = c_18;
  e_18 = t;
  t = term_t_48;
  u_17 = t;
  t = SSL_table_put(r_17, u_17, a_38);
  t = a_38;
  t = f_111(t);
  {
    ATerm u_48 = t;
    int v_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_111, t);
        ;
        LocalPopChoice(v_48);
      }
    else
      {
        t = u_48;
        {
          ATerm w_48 = t;
          int x_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_111(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_48);
            }
          else
            {
              t = w_48;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm c_31 (ATerm t)
{
  t = if_verbose2_1_0(k_31, t);
  return(t);
}
ATerm h_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_31 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,t_18 = NULL;
  q_18 = t;
  t = term_p_44;
  f_18 = t;
  t = q_18;
  r_18 = t;
  t = term_y_48;
  g_18 = t;
  t = r_18;
  t_18 = t;
  t = term_c_22;
  p_18 = t;
  t = SSL_table_put(f_18, g_18, p_18);
  t = term_z_48;
  return(t);
}
ATerm j_31 (ATerm t)
{
  t = term_a_49;
  return(t);
}
ATerm k_31 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,l_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL;
  b_38 = t;
  t = term_x_45;
  w_18 = t;
  t = term_p_44;
  u_18 = t;
  t = w_18;
  x_18 = t;
  t = term_x_45;
  v_18 = t;
  t = SSL_table_get(u_18, v_18);
  {
    ATerm b_49 = t;
    int c_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_12 = NULL,e_19 = NULL,f_19 = NULL,j_19 = NULL,k_19 = NULL;
        t = eval_config_0_0(t);
        b_12 = t;
        j_19 = t;
        t = term_p_44;
        e_19 = t;
        t = j_19;
        k_19 = t;
        t = term_x_45;
        f_19 = t;
        t = SSL_table_put(e_19, f_19, b_12);
        t = b_12;
        ;
        LocalPopChoice(c_49);
      }
    else
      {
        t = b_49;
      }
    c_38 = t;
    u_19 = t;
    t = term_f_30;
    l_19 = t;
    t = u_19;
    v_19 = t;
    t = (ATerm) ATinsert(ATempty, c_38);
    t_19 = t;
    t = SSL_printnl(l_19, t_19);
    t = b_38;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm t)
{
  ATerm b_31 (ATerm t)
  {
    ATerm d_49 = t;
    int e_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_110(t);
        ;
        LocalPopChoice(e_49);
      }
    else
      {
        t = d_49;
        {
          ATerm f_49 = t;
          int g_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(g_49);
            }
          else
            {
              t = f_49;
              {
                ATerm h_49 = t;
                int i_49 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(i_49);
                  }
                else
                  {
                    t = h_49;
                    {
                      ATerm j_49 = t;
                      int k_49 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(h_31, i_31, j_31, t);
                          ;
                          LocalPopChoice(k_49);
                        }
                      else
                        {
                          t = j_49;
                          {
                            ATerm l_49 = t;
                            int m_49 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(m_49);
                              }
                            else
                              {
                                t = l_49;
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
  ATerm g_31 (ATerm t)
  {
    ATerm d_38 = NULL,e_38 = NULL,f_12 = NULL;
    d_38 = t;
    {
      ATerm n_49 = t;
      int o_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_31 (ATerm t)
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
          t = fetch_1_0(l_31, t);
          ;
          LocalPopChoice(o_49);
        }
      else
        {
          t = n_49;
          t = term_p_49;
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
  t = option_wrap_4_0(b_31, o_110, c_31, g_31, t);
  return(t);
}
ATerm m_31 (ATerm t)
{
  t = _2_0(_id, n_31, t);
  return(t);
}
ATerm n_31 (ATerm t)
{
  t = Specification_1_0(o_31, t);
  return(t);
}
ATerm o_31 (ATerm t)
{
  t = Cons_2_0(q_31, r_31, t);
  return(t);
}
ATerm q_31 (ATerm t)
{
  t = Signature_1_0(_id, t);
  return(t);
}
ATerm r_31 (ATerm t)
{
  t = Cons_2_0(s_31, t_31, t);
  return(t);
}
ATerm s_31 (ATerm t)
{
  t = Strategies_1_0(v_31, t);
  return(t);
}
ATerm t_31 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm v_31 (ATerm t)
{
  t = map_1_0(w_31, t);
  return(t);
}
ATerm w_31 (ATerm t)
{
  t = scope_2_0(x_31, y_31, t);
  return(t);
}
ATerm x_31 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm y_31 (ATerm t)
{
  t = scope_2_0(z_31, cp_0_0, t);
  return(t);
}
ATerm z_31 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(m_31, _fail, default_usage_0_0, t);
  return(t);
}
