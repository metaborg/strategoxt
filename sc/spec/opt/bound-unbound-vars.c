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
Symbol sym_Choice_2;
Symbol sym_Let_2;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_VarDec_2;
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
Symbol sym_Some_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_m_39;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_r_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_a_37;
ATerm term_v_36;
ATerm term_q_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_o_34;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_d_33;
ATerm term_a_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_q_30;
ATerm term_n_30;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_h_28;
ATerm term_u_21;
void init_constant_terms (void)
{
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Defined_2, term_l_29, term_m_29);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_Defined_2, term_e_31, term_f_31);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Defined_2, term_v_31, term_m_29);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_34);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym__3, term_w_28, term_h_37, term_u_21);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose4_1_0 (ATerm f_111 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm p_74 (ATerm), ATerm);
ATerm mark_guardedlchoice_1_0 (ATerm i_82 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm h_82 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm g_82 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm q_74 (ATerm), ATerm r_74 (ATerm), ATerm);
ATerm mark_rec_0_0 (ATerm);
ATerm PrimT_3_0 (ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm);
ATerm m_21 (ATerm);
ATerm o_21 (ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm Call_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm);
ATerm p_21 (ATerm);
ATerm s_21 (ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm);
ATerm v_21 (ATerm);
ATerm y_21 (ATerm);
ATerm c_22 (ATerm);
ATerm mark_sdef_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm f_22 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm Let_2_0 (ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm);
ATerm h_22 (ATerm);
ATerm b_13 (ATerm n_11, ATerm u_11, ATerm v_11, ATerm w_11, ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm assert_1_0 (ATerm r_82 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm o_82 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm n_82 (ATerm), ATerm);
ATerm scope_2_0 (ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm);
ATerm t_22 (ATerm);
ATerm w_22 (ATerm);
ATerm y_22 (ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm alltd_1_0 (ATerm n_84 (ATerm), ATerm);
ATerm Build_1_0 (ATerm b_74 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm z_22 (ATerm);
ATerm mark_match_0_0 (ATerm);
ATerm a_23 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm l_69 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm q_69 (ATerm), ATerm);
ATerm b_23 (ATerm);
ATerm c_23 (ATerm);
ATerm e_23 (ATerm);
ATerm g_23 (ATerm);
ATerm h_23 (ATerm);
ATerm i_23 (ATerm);
ATerm j_23 (ATerm);
ATerm mark_bound_unbound_vars_0_0 (ATerm);
ATerm _2_0 (ATerm s_64 (ATerm), ATerm t_64 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm n_102 (ATerm), ATerm);
ATerm s_23 (ATerm);
ATerm w_23 (ATerm);
ATerm x_23 (ATerm);
ATerm b_24 (ATerm);
ATerm c_24 (ATerm);
ATerm e_24 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm z_103 (ATerm), ATerm);
ATerm o_20 (ATerm i_20, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm h_24 (ATerm);
ATerm i_24 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm w_86 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm o_24 (ATerm);
ATerm p_24 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm r_24 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_111 (ATerm), ATerm);
ATerm s_24 (ATerm);
ATerm t_24 (ATerm);
ATerm z_24 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm a_25 (ATerm);
ATerm b_25 (ATerm);
ATerm d_25 (ATerm);
ATerm h_25 (ATerm);
ATerm i_25 (ATerm);
ATerm l_25 (ATerm);
ATerm m_25 (ATerm);
ATerm o_25 (ATerm);
ATerm p_25 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm r_25 (ATerm);
ATerm s_25 (ATerm);
ATerm t_25 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm u_25 (ATerm);
ATerm v_25 (ATerm);
ATerm w_25 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm x_25 (ATerm);
ATerm y_25 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_111 (ATerm), ATerm);
ATerm z_25 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm a_26 (ATerm);
ATerm need_help_1_0 (ATerm x_104 (ATerm), ATerm);
ATerm map_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm z_81 (ATerm), ATerm);
ATerm f_26 (ATerm);
ATerm h_26 (ATerm);
ATerm j_26 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm a_82 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_26 (ATerm);
ATerm o_26 (ATerm);
ATerm r_26 (ATerm);
ATerm s_26 (ATerm);
ATerm t_26 (ATerm);
ATerm a_27 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm);
ATerm b_27 (ATerm);
ATerm parse_options_p__1_0 (ATerm c_108 (ATerm), ATerm);
ATerm j_27 (ATerm);
ATerm m_27 (ATerm);
ATerm n_27 (ATerm);
ATerm o_27 (ATerm);
ATerm parse_options_1_0 (ATerm b_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm);
ATerm z_27 (ATerm);
ATerm c_28 (ATerm);
ATerm f_28 (ATerm);
ATerm g_28 (ATerm);
ATerm i_28 (ATerm);
ATerm iowrap_3_0 (ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm);
ATerm k_28 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL,j_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL,q_0 = NULL,r_0 = NULL;
  u_0 = t;
  t = term_u_21;
  t = whoami_0_0(t);
  v_0 = t;
  n_0 = t;
  t = term_h_28;
  j_0 = t;
  t = n_0;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_28), v_0), term_p_28);
  m_0 = t;
  t = SSL_printnl(j_0, m_0);
  r_0 = t;
  t = term_r_28;
  q_0 = t;
  t = SSL_exit(q_0);
  t = u_0;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm f_111 (ATerm), ATerm t)
{
  ATerm s_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 = NULL,p_1 = NULL,s_0 = NULL,t_0 = NULL,y_0 = NULL,z_0 = NULL;
      h_1 = t;
      t = term_v_28;
      y_0 = t;
      t = term_w_28;
      s_0 = t;
      t = y_0;
      z_0 = t;
      t = term_v_28;
      t_0 = t;
      t = SSL_table_get(s_0, t_0);
      {
        ATerm x_28 = t;
        int d_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 = NULL,a_1 = NULL,b_1 = NULL,d_1 = NULL,e_1 = NULL;
            t = eval_config_0_0(t);
            p_0 = t;
            d_1 = t;
            t = term_w_28;
            a_1 = t;
            t = d_1;
            e_1 = t;
            t = term_v_28;
            b_1 = t;
            t = SSL_table_put(a_1, b_1, p_0);
            t = p_0;
            ;
            LocalPopChoice(d_29);
          }
        else
          {
            t = x_28;
          }
        p_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_1, term_e_29);
        t = geq_0_0(t);
        t = h_1;
        t = f_111(t);
      }
      ;
      LocalPopChoice(u_28);
    }
  else
    {
      t = s_28;
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm p_74 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,x_1 = NULL,z_1 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_1 = NULL,g_1 = NULL;
  e_2 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      u_1 = ATgetArgument(t, 0);
      v_1 = ATgetArgument(t, 1);
      x_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_2);
  t_1 = t;
  t = u_1;
  t = n_74(t);
  z_1 = t;
  t = v_1;
  t = o_74(t);
  c_2 = t;
  t = x_1;
  t = p_74(t);
  d_2 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_1, c_2, d_2);
  f_1 = t;
  t = SSLsetAnnotations(f_1, t_1);
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, _id, t);
  {
    ATerm u_20 (ATerm t)
    {
      t = GuardedLChoice_3_0(i_82, _id, _id, t);
      t = GuardedLChoice_3_0(_id, i_82, _id, t);
      return(t);
    }
    ATerm v_20 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, _id, i_82, t);
      return(t);
    }
    t = abstract_choice_2_0(u_20, v_20, t);
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,i_1 = NULL,j_1 = NULL;
  o_2 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      j_2 = ATgetArgument(t, 0);
      k_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_2);
  i_2 = t;
  t = j_2;
  t = j_74(t);
  m_2 = t;
  t = k_2;
  t = k_74(t);
  n_2 = t;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, m_2, n_2);
  i_1 = t;
  t = SSLsetAnnotations(i_1, i_2);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm h_82 (ATerm), ATerm t)
{
  t = LChoice_2_0(_id, _id, t);
  {
    ATerm h_21 (ATerm t)
    {
      t = LChoice_2_0(h_82, _id, t);
      return(t);
    }
    ATerm j_21 (ATerm t)
    {
      t = LChoice_2_0(_id, h_82, t);
      return(t);
    }
    t = abstract_choice_2_0(h_21, j_21, t);
  }
  return(t);
}
ATerm Choice_2_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,v_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL,k_1 = NULL,l_1 = NULL;
  a_3 = t;
  if(match_cons(t, sym_Choice_2))
    {
      t_2 = ATgetArgument(t, 0);
      v_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_3);
  s_2 = t;
  t = t_2;
  t = h_73(t);
  x_2 = t;
  t = v_2;
  t = i_73(t);
  z_2 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, x_2, z_2);
  k_1 = t;
  t = SSLsetAnnotations(k_1, s_2);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL,p_3 = NULL,m_1 = NULL,n_1 = NULL;
  e_3 = t;
  t = save_MarkVar_0_0(t);
  f_3 = t;
  t = e_3;
  t = j_82(t);
  g_3 = t;
  t = save_MarkVar_0_0(t);
  i_3 = t;
  n_1 = t;
  t = term_f_29;
  m_1 = t;
  t = SSL_table_destroy(m_1);
  t = (ATerm) ATmakeAppl(sym__2, term_f_29, f_3);
  t = table_putlist_0_0(t);
  t = g_3;
  t = k_82(t);
  p_3 = t;
  t = i_3;
  t = isect_MarkVar_0_0(t);
  t = p_3;
  return(t);
}
ATerm mark_choice_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  t = Choice_2_0(_id, _id, t);
  {
    ATerm k_21 (ATerm t)
    {
      t = Choice_2_0(g_82, _id, t);
      return(t);
    }
    ATerm l_21 (ATerm t)
    {
      t = Choice_2_0(_id, g_82, t);
      return(t);
    }
    t = abstract_choice_2_0(k_21, l_21, t);
  }
  return(t);
}
ATerm Rec_2_0 (ATerm q_74 (ATerm), ATerm r_74 (ATerm), ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,b_4 = NULL,f_4 = NULL,i_4 = NULL,j_4 = NULL,o_1 = NULL,q_1 = NULL;
  j_4 = t;
  if(match_cons(t, sym_Rec_2))
    {
      w_3 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_4);
  v_3 = t;
  t = w_3;
  t = q_74(t);
  f_4 = t;
  t = b_4;
  t = r_74(t);
  i_4 = t;
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, f_4, i_4);
  o_1 = t;
  t = SSLsetAnnotations(o_1, v_3);
  return(t);
}
ATerm mark_rec_0_0 (ATerm t)
{
  ATerm n_4 = NULL,p_4 = NULL;
  if(match_cons(t, sym_Rec_2))
    {
      ATerm g_29 = ATgetArgument(t, 0);
      ATerm h_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  n_4 = t;
  t = save_MarkVar_0_0(t);
  p_4 = t;
  t = n_4;
  t = Rec_2_0(_id, mark_buv_0_0, t);
  t = p_4;
  t = isect_MarkVar_0_0(t);
  t = n_4;
  t = Rec_2_0(_id, mark_buv_0_0, t);
  return(t);
}
ATerm PrimT_3_0 (ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,r_1 = NULL,s_1 = NULL;
  y_4 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      r_4 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
      t_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_4);
  q_4 = t;
  t = r_4;
  t = z_74(t);
  v_4 = t;
  t = s_4;
  t = a_75(t);
  w_4 = t;
  t = t_4;
  t = b_75(t);
  x_4 = t;
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, v_4, w_4, x_4);
  r_1 = t;
  t = SSLsetAnnotations(r_1, q_4);
  return(t);
}
ATerm m_21 (ATerm t)
{
  t = map_1_0(o_21, t);
  return(t);
}
ATerm o_21 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm b_5 = NULL,g_5 = NULL,i_5 = NULL;
  t = PrimT_3_0(_id, _id, _id, t);
  b_5 = t;
  t = save_MarkVar_0_0(t);
  g_5 = t;
  t = b_5;
  t = PrimT_3_0(_id, _id, m_21, t);
  t = PrimT_3_0(_id, mark_buv_0_0, _id, t);
  i_5 = t;
  t = g_5;
  t = isect_MarkVar_0_0(t);
  t = i_5;
  return(t);
}
ATerm Call_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,q_5 = NULL,r_5 = NULL,w_1 = NULL,y_1 = NULL;
  r_5 = t;
  if(match_cons(t, sym_Call_2))
    {
      k_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_5);
  j_5 = t;
  t = k_5;
  t = v_73(t);
  m_5 = t;
  t = l_5;
  t = w_73(t);
  q_5 = t;
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, m_5, q_5);
  w_1 = t;
  t = SSLsetAnnotations(w_1, j_5);
  return(t);
}
ATerm CallT_3_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,w_5 = NULL,x_5 = NULL,a_6 = NULL,b_6 = NULL,f_6 = NULL,p_6 = NULL,a_7 = NULL,a_2 = NULL,b_2 = NULL;
  a_7 = t;
  if(match_cons(t, sym_CallT_3))
    {
      w_5 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
      a_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_7);
  u_5 = t;
  t = w_5;
  t = x_73(t);
  b_6 = t;
  t = x_5;
  t = y_73(t);
  f_6 = t;
  t = a_6;
  t = z_73(t);
  p_6 = t;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, b_6, f_6, p_6);
  a_2 = t;
  t = SSLsetAnnotations(a_2, u_5);
  return(t);
}
ATerm p_21 (ATerm t)
{
  t = map_1_0(s_21, t);
  return(t);
}
ATerm s_21 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_7 = NULL,k_7 = NULL,m_7 = NULL;
      t = CallT_3_0(_id, _id, _id, t);
      i_7 = t;
      t = save_MarkVar_0_0(t);
      k_7 = t;
      t = i_7;
      t = CallT_3_0(_id, _id, p_21, t);
      t = CallT_3_0(_id, mark_buv_0_0, _id, t);
      m_7 = t;
      t = k_7;
      t = isect_MarkVar_0_0(t);
      t = m_7;
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      {
        ATerm p_7 = NULL,q_7 = NULL,s_7 = NULL;
        t = Call_2_0(_id, _id, t);
        p_7 = t;
        t = save_MarkVar_0_0(t);
        q_7 = t;
        t = p_7;
        t = Call_2_0(_id, mark_buv_0_0, t);
        s_7 = t;
        t = q_7;
        t = isect_MarkVar_0_0(t);
        t = s_7;
      }
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,i_8 = NULL,j_8 = NULL,n_8 = NULL,p_8 = NULL,q_8 = NULL,s_8 = NULL,f_2 = NULL,g_2 = NULL;
  s_8 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      w_7 = ATgetArgument(t, 0);
      x_7 = ATgetArgument(t, 1);
      y_7 = ATgetArgument(t, 2);
      i_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_8);
  v_7 = t;
  t = w_7;
  t = l_76(t);
  j_8 = t;
  t = x_7;
  t = m_76(t);
  n_8 = t;
  t = y_7;
  t = n_76(t);
  p_8 = t;
  t = i_8;
  t = o_76(t);
  q_8 = t;
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, j_8, n_8, p_8, q_8);
  f_2 = t;
  t = SSLsetAnnotations(f_2, v_7);
  return(t);
}
ATerm v_21 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm y_21 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      e_9 = ATgetArgument(t, 0);
      {
        ATerm k_29 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, e_9), term_n_29);
  t = assert_1_0(c_22, t);
  t = f_9;
  return(t);
}
ATerm c_22 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm mark_sdef_0_0 (ATerm t)
{
  ATerm y_8 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm o_29 = ATgetArgument(t, 0);
      ATerm p_29 = ATgetArgument(t, 1);
      y_8 = ATgetArgument(t, 2);
      {
        ATerm q_29 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm t_21 (ATerm t)
    {
      ATerm w_21 (ATerm t)
      {
        ATerm b_9 = NULL;
        b_9 = t;
        t = y_8;
        t = map_1_0(y_21, t);
        t = b_9;
        t = mark_buv_0_0(t);
        return(t);
      }
      t = scope_2_0(v_21, w_21, t);
      return(t);
    }
    t = SDefT_4_0(_id, _id, _id, t_21, t);
  }
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,p_9 = NULL;
  p_9 = t;
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm t_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_29);
        t = p_9;
      }
    else
      {
        t = r_29;
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm w_29 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(v_29);
              t = p_9;
            }
          else
            {
              t = u_29;
              {
                ATerm x_29 = t;
                int y_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm z_29 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(y_29);
                    t = p_9;
                  }
                else
                  {
                    t = x_29;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm a_30 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = p_9;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    m_9 = t;
    t = p_9;
    t = SRTS_one(mark_buv_0_0, t);
    n_9 = t;
    t = m_9;
    t = isect_MarkVar_0_0(t);
    t = n_9;
  }
  return(t);
}
ATerm f_22 (ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL,q_2 = NULL,r_2 = NULL;
  w_0 = t;
  r_2 = t;
  t = term_f_29;
  q_2 = t;
  t = SSL_table_get(q_2, w_0);
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_0, x_0);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  ATerm l_2 = NULL,p_2 = NULL;
  t = term_f_29;
  p_2 = t;
  t = term_f_29;
  l_2 = t;
  t = SSL_table_keys(l_2);
  t = map_1_0(f_22, t);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL;
  if(match_cons(t, sym__2))
    {
      b_10 = ATgetArgument(t, 0);
      a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_10;
  {
    ATerm g_22 (ATerm t)
    {
      ATerm e_10 = NULL,f_10 = NULL;
      if(match_cons(t, sym__2))
        {
          e_10 = ATgetArgument(t, 0);
          f_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(b_10, e_10, f_10);
      t = (ATerm) ATmakeAppl(sym__3, b_10, e_10, f_10);
      return(t);
    }
    t = map_1_0(g_22, t);
  }
  return(t);
}
ATerm Let_2_0 (ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm t)
{
  ATerm h_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,q_10 = NULL,u_2 = NULL,w_2 = NULL;
  q_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_10);
  h_10 = t;
  t = k_10;
  t = t_73(t);
  m_10 = t;
  t = l_10;
  t = u_73(t);
  n_10 = t;
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, m_10, n_10);
  u_2 = t;
  t = SSLsetAnnotations(u_2, h_10);
  return(t);
}
ATerm h_22 (ATerm t)
{
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,v_12 = NULL,x_12 = NULL,a_13 = NULL;
      n_12 = t;
      if(match_cons(t, sym__2))
        {
          o_12 = ATgetArgument(t, 0);
          p_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_12 = ATgetFirst((ATermList) t);
          a_13 = (ATerm) ATgetNext((ATermList) t);
          t = v_12;
          {
            ATerm d_30 = t;
            int e_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm f_30 = ATgetArgument(t, 0);
                    x_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(e_30);
                t = o_12;
                if(match_cons(t, sym_Scopes_0))
                  {
                    ATerm g_30 = t;
                    int h_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_12;
                        ;
                        LocalPopChoice(h_30);
                      }
                    else
                      {
                        t = g_30;
                        t = b_13(o_12, x_12, a_13, n_12, t);
                      }
                  }
                else
                  {
                    t = b_13(o_12, x_12, a_13, n_12, t);
                  }
              }
            else
              {
                t = d_30;
                t = o_12;
                if(!(match_cons(t, sym_Scopes_0)))
                  _fail(t);
                t = n_12;
              }
          }
        }
      else
        {
          t = o_12;
          if(!(match_cons(t, sym_Scopes_0)))
            _fail(t);
          t = n_12;
        }
      ;
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
    }
  return(t);
}
ATerm b_13 (ATerm n_11, ATerm u_11, ATerm v_11, ATerm w_11, ATerm t)
{
  t = w_11;
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_3 = NULL,c_3 = NULL;
        t = w_11;
        c_3 = t;
        t = term_f_29;
        b_3 = t;
        t = SSL_table_get(b_3, n_11);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_30 = ATgetFirst((ATermList) t);
            if(match_cons(k_30, sym_Defined_2))
              {
                ATerm m_30 = ATgetArgument(k_30, 0);
                if((u_11 != ATgetArgument(k_30, 1)))
                  {
                    _fail(ATgetArgument(k_30, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm l_30 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = w_11;
        ;
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        t = (ATerm) ATmakeAppl(sym__2, n_11, (ATerm) ATinsert(CheckATermList(v_11), term_n_30));
      }
  }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,d_3 = NULL,h_3 = NULL;
  k_11 = t;
  t = save_MarkVar_0_0(t);
  t = k_11;
  t = map_1_0(h_22, t);
  l_11 = t;
  h_3 = t;
  t = term_f_29;
  d_3 = t;
  t = SSL_table_destroy(d_3);
  t = (ATerm) ATmakeAppl(sym__2, term_f_29, l_11);
  t = table_putlist_0_0(t);
  t = l_11;
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm d_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  t = Let_2_0(_id, _id, t);
  d_13 = t;
  t = save_MarkVar_0_0(t);
  h_13 = t;
  t = d_13;
  {
    ATerm i_22 (ATerm t)
    {
      ATerm k_22 (ATerm t)
      {
        ATerm l_13 = NULL;
        t = mark_buv_0_0(t);
        l_13 = t;
        t = h_13;
        t = isect_MarkVar_0_0(t);
        t = l_13;
        return(t);
      }
      t = map_1_0(k_22, t);
      return(t);
    }
    ATerm j_22 (ATerm t)
    {
      ATerm o_13 = NULL;
      t = mark_buv_0_0(t);
      o_13 = t;
      t = h_13;
      t = isect_MarkVar_0_0(t);
      t = o_13;
      return(t);
    }
    t = Let_2_0(i_22, j_22, t);
    t = d_13;
    t = save_MarkVar_0_0(t);
    i_13 = t;
    t = d_13;
    {
      ATerm l_22 (ATerm t)
      {
        ATerm n_22 (ATerm t)
        {
          ATerm w_13 = NULL,j_3 = NULL,k_3 = NULL;
          w_13 = t;
          k_3 = t;
          t = term_f_29;
          j_3 = t;
          t = SSL_table_destroy(j_3);
          t = (ATerm) ATmakeAppl(sym__2, term_f_29, i_13);
          t = table_putlist_0_0(t);
          t = w_13;
          t = mark_buv_0_0(t);
          return(t);
        }
        t = map_1_0(n_22, t);
        return(t);
      }
      ATerm m_22 (ATerm t)
      {
        ATerm e_14 = NULL,l_3 = NULL,m_3 = NULL;
        e_14 = t;
        m_3 = t;
        t = term_f_29;
        l_3 = t;
        t = SSL_table_destroy(l_3);
        t = (ATerm) ATmakeAppl(sym__2, term_f_29, i_13);
        t = table_putlist_0_0(t);
        t = e_14;
        t = mark_buv_0_0(t);
        return(t);
      }
      t = Let_2_0(l_22, m_22, t);
      j_13 = t;
      t = save_MarkVar_0_0(t);
      t = j_13;
    }
  }
  return(t);
}
ATerm assert_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  ATerm f_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,r_3 = NULL,s_3 = NULL,u_3 = NULL,x_3 = NULL;
  if(match_cons(t, sym__2))
    {
      f_14 = ATgetArgument(t, 0);
      m_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_82(t);
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_14, f_14, m_14);
  t = table_push_0_0(t);
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_3 = NULL,q_3 = NULL;
        q_3 = t;
        t = term_q_30;
        o_3 = t;
        t = SSL_table_get(n_14, o_3);
        ;
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_14 = ATgetFirst((ATermList) t);
        p_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    u_3 = t;
    t = term_q_30;
    r_3 = t;
    t = u_3;
    x_3 = t;
    t = (ATerm) ATinsert(CheckATermList(p_14), (ATerm) ATinsert(CheckATermList(o_14), f_14));
    s_3 = t;
    t = SSL_table_put(n_14, r_3, s_3);
    t = (ATerm) ATmakeAppl(sym__2, f_14, m_14);
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      t_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_14, u_14);
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_30 = ATgetArgument(t, 0);
            ATerm u_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_14, u_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_30 = ATgetFirst((ATermList) t);
            c_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_1;
        ;
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        t = (ATerm) ATempty;
      }
    v_14 = t;
    t = SSL_table_put(t_14, u_14, v_14);
    t = (ATerm) ATmakeAppl(sym__2, t_14, u_14);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm o_82 (ATerm), ATerm t)
{
  ATerm b_15 = NULL,d_15 = NULL,f_15 = NULL,g_15 = NULL,a_4 = NULL,c_4 = NULL;
  b_15 = t;
  t = o_82(t);
  d_15 = t;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 = NULL,z_3 = NULL;
        z_3 = t;
        t = term_q_30;
        y_3 = t;
        t = SSL_table_get(d_15, y_3);
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_15 = ATgetFirst((ATermList) t);
        f_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    c_4 = t;
    t = term_q_30;
    a_4 = t;
    t = SSL_table_put(d_15, a_4, f_15);
    t = g_15;
    {
      ATerm p_22 (ATerm t)
      {
        ATerm h_15 = NULL;
        h_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_15, h_15);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(p_22, t);
      t = b_15;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm t)
{
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_95(t);
      t = j_95(t);
      ;
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      t = j_95(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,h_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_15 = t;
  t = n_82(t);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_15, term_q_30);
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_4 = NULL,g_4 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_31 = ATgetArgument(t, 0);
            ATerm d_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        g_4 = t;
        t = term_q_30;
        e_4 = t;
        t = SSL_table_get(l_15, e_4);
        ;
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        t = (ATerm) ATempty;
      }
    m_15 = t;
    l_4 = t;
    t = term_q_30;
    h_4 = t;
    t = l_4;
    m_4 = t;
    t = (ATerm) ATinsert(CheckATermList(m_15), (ATerm) ATempty);
    k_4 = t;
    t = SSL_table_put(l_15, h_4, k_4);
    t = k_15;
  }
  return(t);
}
ATerm scope_2_0 (ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm t)
{
  t = begin_scope_1_0(p_82, t);
  {
    ATerm q_22 (ATerm t)
    {
      t = end_scope_1_0(p_82, t);
      return(t);
    }
    t = restore_always_2_0(q_82, q_22, t);
  }
  return(t);
}
ATerm Scope_2_0 (ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,u_4 = NULL,z_4 = NULL;
  w_15 = t;
  if(match_cons(t, sym_Scope_2))
    {
      s_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_15);
  r_15 = t;
  t = s_15;
  t = d_74(t);
  u_15 = t;
  t = t_15;
  t = e_74(t);
  v_15 = t;
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_15, v_15);
  u_4 = t;
  t = SSLsetAnnotations(u_4, r_15);
  return(t);
}
ATerm t_22 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm w_22 (ATerm t)
{
  ATerm c_16 = NULL;
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_16), term_g_31);
  t = assert_1_0(y_22, t);
  t = c_16;
  return(t);
}
ATerm y_22 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm z_15 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      z_15 = ATgetArgument(t, 0);
      {
        ATerm h_31 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm r_22 (ATerm t)
    {
      ATerm u_22 (ATerm t)
      {
        ATerm b_16 = NULL;
        b_16 = t;
        t = z_15;
        t = map_1_0(w_22, t);
        t = b_16;
        t = mark_buv_0_0(t);
        return(t);
      }
      t = scope_2_0(t_22, u_22, t);
      return(t);
    }
    t = Scope_2_0(_id, r_22, t);
  }
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  j_17 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_2 = NULL,y_2 = NULL,a_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,n_5 = NULL;
        t = term_f_29;
        c_5 = t;
        t = term_f_29;
        a_5 = t;
        t = SSL_table_get(a_5, j_17);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_2 = ATgetFirst((ATermList) t);
            {
              ATerm k_31 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = y_2;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm l_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_31) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            h_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        f_5 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, k_17);
        d_5 = t;
        t = f_5;
        n_5 = t;
        t = (ATerm) ATinsert(ATempty, h_2);
        e_5 = t;
        t = SSLsetAnnotations(d_5, e_5);
        ;
        LocalPopChoice(j_31);
      }
    else
      {
        t = i_31;
        {
          ATerm m_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_3 = NULL,t_3 = NULL,o_5 = NULL,p_5 = NULL,s_5 = NULL,t_5 = NULL,v_5 = NULL,y_5 = NULL;
              t = term_f_29;
              p_5 = t;
              t = term_f_29;
              o_5 = t;
              t = SSL_table_get(o_5, j_17);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_3 = ATgetFirst((ATermList) t);
                  {
                    ATerm o_31 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = t_3;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm p_31 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_31) != ATmakeSymbol("f_0", 0, ATtrue)))
                    _fail(t);
                  n_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              v_5 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, k_17);
              s_5 = t;
              t = v_5;
              y_5 = t;
              t = (ATerm) ATinsert(ATempty, n_3);
              t_5 = t;
              t = SSLsetAnnotations(s_5, t_5);
              ;
              LocalPopChoice(n_31);
            }
          else
            {
              t = m_31;
              {
                ATerm d_4 = NULL,o_4 = NULL,z_5 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,g_6 = NULL,h_6 = NULL;
                t = term_f_29;
                c_6 = t;
                t = term_f_29;
                z_5 = t;
                t = SSL_table_get(z_5, j_17);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_4 = ATgetFirst((ATermList) t);
                    {
                      ATerm q_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = o_4;
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm r_31 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) r_31) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    d_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                g_6 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, k_17);
                d_6 = t;
                t = g_6;
                h_6 = t;
                t = (ATerm) ATinsert(ATempty, d_4);
                e_6 = t;
                t = SSLsetAnnotations(d_6, e_6);
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  ATerm o_17 (ATerm t)
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_84(t);
        ;
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        t = SRTS_all(o_17, t);
      }
    return(t);
  }
  t = o_17(t);
  return(t);
}
ATerm Build_1_0 (ATerm b_74 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,u_17 = NULL,v_17 = NULL,i_6 = NULL,m_6 = NULL;
  v_17 = t;
  if(match_cons(t, sym_Build_1))
    {
      q_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_17);
  p_17 = t;
  t = q_17;
  t = b_74(t);
  u_17 = t;
  m_6 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, u_17);
  i_6 = t;
  t = SSLsetAnnotations(i_6, p_17);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,e_18 = NULL,f_18 = NULL,n_6 = NULL,o_6 = NULL;
  if(match_cons(t, sym__3))
    {
      z_17 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
      e_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(z_17, a_18);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_31 = ATgetFirst((ATermList) t);
      f_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  o_6 = t;
  t = (ATerm) ATinsert(CheckATermList(f_18), e_18);
  n_6 = t;
  t = SSL_table_put(z_17, a_18, n_6);
  t = (ATerm) ATmakeAppl(sym__3, z_17, a_18, e_18);
  return(t);
}
ATerm z_22 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  t = MarkVar_0_0(t);
  m_18 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_29, (ATerm)ATmakeAppl(sym_Var_1, n_18), term_w_31);
  t = table_replace_0_0(t);
  t = m_18;
  return(t);
}
ATerm mark_match_0_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      k_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_18;
  t = alltd_1_0(z_22, t);
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, l_18);
  return(t);
}
ATerm a_23 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_buv_0_0 (ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = mark_match_0_0(t);
      ;
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      {
        ATerm z_31 = t;
        int a_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1_0(a_23, t);
            ;
            LocalPopChoice(a_32);
          }
        else
          {
            t = z_31;
            {
              ATerm b_32 = t;
              int c_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_scope_0_0(t);
                  ;
                  LocalPopChoice(c_32);
                }
              else
                {
                  t = b_32;
                  {
                    ATerm d_32 = t;
                    int e_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_let_0_0(t);
                        ;
                        LocalPopChoice(e_32);
                      }
                    else
                      {
                        t = d_32;
                        {
                          ATerm f_32 = t;
                          int g_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = mark_traversal_0_0(t);
                              ;
                              LocalPopChoice(g_32);
                            }
                          else
                            {
                              t = f_32;
                              {
                                ATerm h_32 = t;
                                int i_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_sdef_0_0(t);
                                    ;
                                    LocalPopChoice(i_32);
                                  }
                                else
                                  {
                                    t = h_32;
                                    {
                                      ATerm j_32 = t;
                                      int k_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = mark_call_0_0(t);
                                          ;
                                          LocalPopChoice(k_32);
                                        }
                                      else
                                        {
                                          t = j_32;
                                          {
                                            ATerm l_32 = t;
                                            int m_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_prim_0_0(t);
                                                ;
                                                LocalPopChoice(m_32);
                                              }
                                            else
                                              {
                                                t = l_32;
                                                {
                                                  ATerm n_32 = t;
                                                  int o_32 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_rec_0_0(t);
                                                      ;
                                                      LocalPopChoice(o_32);
                                                    }
                                                  else
                                                    {
                                                      t = n_32;
                                                      {
                                                        ATerm p_32 = t;
                                                        int q_32 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = mark_choice_1_0(mark_buv_0_0, t);
                                                            ;
                                                            LocalPopChoice(q_32);
                                                          }
                                                        else
                                                          {
                                                            t = p_32;
                                                            {
                                                              ATerm r_32 = t;
                                                              int s_32 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(s_32);
                                                                }
                                                              else
                                                                {
                                                                  t = r_32;
                                                                  {
                                                                    ATerm t_32 = t;
                                                                    int u_32 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(u_32);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_32;
                                                                        t = SRTS_all(mark_buv_0_0, t);
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
      }
    }
  return(t);
}
ATerm Strategies_1_0 (ATerm l_69 (ATerm), ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,q_6 = NULL,t_6 = NULL;
  r_18 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      p_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_18);
  o_18 = t;
  t = p_18;
  t = l_69(t);
  q_18 = t;
  t_6 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, q_18);
  q_6 = t;
  t = SSLsetAnnotations(q_6, o_18);
  return(t);
}
ATerm Specification_1_0 (ATerm q_69 (ATerm), ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,u_6 = NULL,v_6 = NULL;
  x_18 = t;
  if(match_cons(t, sym_Specification_1))
    {
      v_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_18);
  u_18 = t;
  t = v_18;
  t = q_69(t);
  w_18 = t;
  v_6 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_18);
  u_6 = t;
  t = SSLsetAnnotations(u_6, u_18);
  return(t);
}
ATerm b_23 (ATerm t)
{
  ATerm a_19 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL;
  a_19 = t;
  y_6 = t;
  t = term_h_28;
  w_6 = t;
  t = y_6;
  z_6 = t;
  t = (ATerm) ATinsert(ATempty, term_v_32);
  x_6 = t;
  t = SSL_printnl(w_6, x_6);
  t = a_19;
  return(t);
}
ATerm c_23 (ATerm t)
{
  t = Cons_2_0(_id, e_23, t);
  return(t);
}
ATerm e_23 (ATerm t)
{
  t = Cons_2_0(g_23, h_23, t);
  return(t);
}
ATerm g_23 (ATerm t)
{
  t = Strategies_1_0(i_23, t);
  return(t);
}
ATerm h_23 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm i_23 (ATerm t)
{
  t = map_1_0(mark_buv_0_0, t);
  return(t);
}
ATerm j_23 (ATerm t)
{
  ATerm b_19 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL;
  b_19 = t;
  d_7 = t;
  t = term_h_28;
  b_7 = t;
  t = d_7;
  e_7 = t;
  t = (ATerm) ATinsert(ATempty, term_w_32);
  c_7 = t;
  t = SSL_printnl(b_7, c_7);
  t = b_19;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  t = if_verbose4_1_0(b_23, t);
  t = Specification_1_0(c_23, t);
  t = if_verbose4_1_0(j_23, t);
  return(t);
}
ATerm _2_0 (ATerm s_64 (ATerm), ATerm t_64 (ATerm), ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,f_7 = NULL,g_7 = NULL;
  h_19 = t;
  if(match_cons(t, sym__2))
    {
      d_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_19);
  c_19 = t;
  t = d_19;
  t = s_64(t);
  f_19 = t;
  t = e_19;
  t = t_64(t);
  g_19 = t;
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_19, g_19);
  f_7 = t;
  t = SSLsetAnnotations(f_7, c_19);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  if(match_cons(t, sym__2))
    {
      k_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_19, term_x_32);
  t = open_stream_0_0(t);
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_19, l_19);
  t = n_102(t);
  t = fclose_0_0(t);
  t = l_19;
  return(t);
}
ATerm s_23 (ATerm t)
{
  t = fetch_1_0(x_23, t);
  return(t);
}
ATerm w_23 (ATerm t)
{
  t = WriteToFile_1_0(b_24, t);
  return(t);
}
ATerm x_23 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm b_24 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_32 = ATgetArgument(t, 0);
      if(match_cons(y_32, sym_Stream_1))
        {
          p_19 = ATgetArgument(y_32, 0);
        }
      else
        _fail(t);
      q_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(p_19, q_19);
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_19);
  return(t);
}
ATerm c_24 (ATerm t)
{
  t = WriteToFile_1_0(e_24, t);
  return(t);
}
ATerm e_24 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,h_7 = NULL,j_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_32 = ATgetArgument(t, 0);
      if(match_cons(z_32, sym_Stream_1))
        {
          s_19 = ATgetArgument(z_32, 0);
        }
      else
        _fail(t);
      t_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(s_19, t_19);
  u_19 = t;
  j_7 = t;
  t = term_a_33;
  h_7 = t;
  t = SSL_fputc(h_7, u_19);
  v_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_19);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL;
  n_19 = t;
  {
    ATerm k_23 (ATerm t)
    {
      ATerm b_33 = t;
      int c_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_23 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((o_19 != NULL) && (o_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(m_23, t);
          ;
          LocalPopChoice(c_33);
        }
      else
        {
          t = b_33;
          t = term_d_33;
          if(((o_19 != NULL) && (o_19 != t)))
            _fail(t);
          else
            o_19 = t;
        }
      return(t);
    }
    t = _2_0(k_23, _id, t);
    t = n_19;
    {
      ATerm o_23 (ATerm t)
      {
        ATerm h_5 = NULL;
        h_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_19), h_5);
        return(t);
      }
      t = _2_0(_id, o_23, t);
      {
        ATerm e_33 = t;
        int f_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(s_23, w_23, t);
            ;
            LocalPopChoice(f_33);
          }
        else
          {
            t = e_33;
            t = _2_0(_id, c_24, t);
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
ATerm apply_strategy_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
  w_19 = t;
  t = dtime_0_0(t);
  t = w_19;
  t = z_103(t);
  x_19 = t;
  t = dtime_0_0(t);
  y_19 = t;
  t = x_19;
  if(match_cons(t, sym__2))
    {
      z_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_19), (ATerm) ATmakeAppl(sym_Runtime_1, y_19)), a_20);
  return(t);
}
ATerm o_20 (ATerm i_20, ATerm t)
{
  t = SSL_fclose(i_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL;
  m_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_20 = ATgetArgument(t, 0);
      {
        ATerm g_33 = t;
        int h_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_20);
            ;
            LocalPopChoice(h_33);
          }
        else
          {
            t = g_33;
            t = o_20(m_20, t);
          }
      }
    }
  else
    {
      t = o_20(m_20, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_20 = NULL;
  t = SSL_stdin_stream();
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_20);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_20 = NULL;
  t = SSL_stdout_stream();
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_20);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_20 = NULL;
  t = SSL_stderr_stream();
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_20);
  return(t);
}
ATerm h_24 (ATerm t)
{
  ATerm z_20 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      z_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_20;
  return(t);
}
ATerm i_24 (ATerm t)
{
  ATerm d_21 = NULL;
  d_21 = t;
  t = SSL_is_string(d_21);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_33 = ATgetArgument(t, 0);
      ATerm j_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_6 = NULL,k_6 = NULL;
        j_6 = t;
        t = SSL_explode_term(j_6);
        if(match_cons(t, sym__2))
          {
            ATerm m_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_33) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_33 = ATgetArgument(t, 1);
              if(((ATgetType(n_33) == AT_LIST) && !(ATisEmpty(n_33))))
                {
                  k_6 = ATgetFirst((ATermList) n_33);
                  {
                    ATerm o_33 = (ATerm) ATgetNext((ATermList) n_33);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = k_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = k_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = k_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
        {
          ATerm p_33 = t;
          int q_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
              t = _2_0(h_24, _id, t);
              if(match_cons(t, sym__2))
                {
                  w_20 = ATgetArgument(t, 0);
                  x_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(w_20, x_20);
              y_20 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, y_20);
              ;
              LocalPopChoice(q_33);
            }
          else
            {
              t = p_33;
              {
                ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
                t = _2_0(i_24, _id, t);
                if(match_cons(t, sym__2))
                  {
                    a_21 = ATgetArgument(t, 0);
                    b_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(a_21, b_21);
                c_21 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, c_21);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL;
      i_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_21, term_t_33);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      {
        ATerm l_6 = NULL,l_7 = NULL,n_7 = NULL,o_7 = NULL,r_7 = NULL;
        l_6 = t;
        t = term_u_33;
        o_7 = t;
        t = term_h_28;
        l_7 = t;
        t = o_7;
        r_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, l_6), term_u_33);
        n_7 = t;
        t = SSL_printnl(l_7, n_7);
        t = l_6;
        _fail(t);
      }
    }
  e_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(g_21);
  f_21 = t;
  t = e_21;
  t = fclose_0_0(t);
  t = f_21;
  return(t);
}
ATerm fetch_1_0 (ATerm w_86 (ATerm), ATerm t)
{
  ATerm n_21 (ATerm t)
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(w_86, _id, t);
        ;
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = Cons_2_0(_id, n_21, t);
      }
    return(t);
  }
  t = n_21(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
      {
        ATerm q_21 = NULL,r_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_21 = ATgetFirst((ATermList) t);
            r_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_21;
        {
          ATerm n_24 (ATerm t)
          {
            t = r_21;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(n_24, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm x_21 (ATerm t)
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, x_21, t);
        ;
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_87(t);
      }
    return(t);
  }
  t = x_21(t);
  return(t);
}
ATerm o_24 (ATerm t)
{
  ATerm a_22 = NULL;
  a_22 = t;
  t = SSL_explode_string(a_22);
  return(t);
}
ATerm p_24 (ATerm t)
{
  ATerm b_22 = NULL;
  b_22 = t;
  t = SSL_explode_string(b_22);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm z_21 = NULL;
  t = _2_0(o_24, p_24, t);
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL,e_22 = NULL;
        if(match_cons(t, sym__2))
          {
            d_22 = ATgetArgument(t, 0);
            e_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_22;
        {
          ATerm q_24 (ATerm t)
          {
            t = e_22;
            return(t);
          }
          t = at_end_1_0(q_24, t);
        }
        ;
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        {
          ATerm r_6 = NULL,s_6 = NULL;
          r_6 = t;
          t = SSL_explode_term(r_6);
          if(match_cons(t, sym__2))
            {
              ATerm d_34 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_34) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              s_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_6;
          t = concat_0_0(t);
        }
      }
    z_21 = t;
    t = SSL_implode_string(z_21);
  }
  return(t);
}
ATerm r_24 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_22 = NULL;
      o_22 = t;
      t = SSL_is_string(o_22);
      ;
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      {
        ATerm i_34 = t;
        int j_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_24, t);
            ;
            LocalPopChoice(j_34);
          }
        else
          {
            t = i_34;
            {
              ATerm s_22 = NULL,v_22 = NULL,x_22 = NULL;
              s_22 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_22 = ATgetArgument(t, 0);
                  t = v_22;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_22 = ATgetArgument(t, 0);
                      t = v_22;
                      {
                        ATerm k_34 = t;
                        int l_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_7 = NULL,z_7 = NULL;
                            z_7 = t;
                            t = term_w_28;
                            t_7 = t;
                            t = SSL_table_get(t_7, v_22);
                            {
                              ATerm m_34 = t;
                              int n_34 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm u_7 = NULL,a_8 = NULL,b_8 = NULL;
                                  t = eval_config_0_0(t);
                                  u_7 = t;
                                  b_8 = t;
                                  t = term_w_28;
                                  a_8 = t;
                                  t = SSL_table_put(a_8, v_22, u_7);
                                  t = u_7;
                                  ;
                                  LocalPopChoice(n_34);
                                }
                              else
                                {
                                  t = m_34;
                                }
                            }
                            ;
                            LocalPopChoice(l_34);
                          }
                        else
                          {
                            t = k_34;
                            {
                              ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL,g_8 = NULL;
                              t = term_o_34;
                              e_8 = t;
                              t = term_h_28;
                              c_8 = t;
                              t = e_8;
                              g_8 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, v_22), term_o_34);
                              d_8 = t;
                              t = SSL_printnl(c_8, d_8);
                              t = v_22;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm d_23 = NULL,f_23 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_22 = ATgetArgument(t, 0);
                          x_22 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_22;
                      t = eval_config_0_0(t);
                      d_23 = t;
                      t = x_22;
                      t = eval_config_0_0(t);
                      f_23 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_23, f_23);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_111 (ATerm), ATerm t)
{
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_23 = NULL,n_23 = NULL,h_8 = NULL,k_8 = NULL,r_8 = NULL,t_8 = NULL;
      l_23 = t;
      t = term_v_28;
      r_8 = t;
      t = term_w_28;
      h_8 = t;
      t = r_8;
      t_8 = t;
      t = term_v_28;
      k_8 = t;
      t = SSL_table_get(h_8, k_8);
      {
        ATerm r_34 = t;
        int s_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_8 = NULL,u_8 = NULL,v_8 = NULL,z_8 = NULL,a_9 = NULL;
            t = eval_config_0_0(t);
            f_8 = t;
            z_8 = t;
            t = term_w_28;
            u_8 = t;
            t = z_8;
            a_9 = t;
            t = term_v_28;
            v_8 = t;
            t = SSL_table_put(u_8, v_8, f_8);
            t = f_8;
            ;
            LocalPopChoice(s_34);
          }
        else
          {
            t = r_34;
          }
        n_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_23, term_t_34);
        t = geq_0_0(t);
        t = l_23;
        t = d_111(t);
      }
      ;
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
    }
  return(t);
}
ATerm s_24 (ATerm t)
{
  ATerm p_23 = NULL;
  p_23 = t;
  if(match_string(t, "-k"))
    {
      t = p_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_23;
    }
  return(t);
}
ATerm t_24 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,c_9 = NULL,d_9 = NULL,g_9 = NULL,h_9 = NULL;
  q_23 = t;
  t = SSL_string_to_int(q_23);
  r_23 = t;
  g_9 = t;
  t = term_w_28;
  c_9 = t;
  t = g_9;
  h_9 = t;
  t = term_u_34;
  d_9 = t;
  t = SSL_table_put(c_9, d_9, r_23);
  t = q_23;
  return(t);
}
ATerm z_24 (ATerm t)
{
  t = term_v_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_24, t_24, z_24, t);
  return(t);
}
ATerm a_25 (ATerm t)
{
  ATerm t_23 = NULL;
  t_23 = t;
  if(match_string(t, "-S"))
    {
      t = t_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_23;
    }
  return(t);
}
ATerm b_25 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,o_9 = NULL,q_9 = NULL;
  l_9 = t;
  t = term_w_28;
  i_9 = t;
  t = l_9;
  o_9 = t;
  t = term_v_28;
  j_9 = t;
  t = o_9;
  q_9 = t;
  t = term_w_34;
  k_9 = t;
  t = SSL_table_put(i_9, j_9, k_9);
  t = term_x_34;
  return(t);
}
ATerm d_25 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm h_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_25 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
  u_23 = t;
  t = SSL_string_to_int(u_23);
  v_23 = t;
  t_9 = t;
  t = term_w_28;
  r_9 = t;
  t = t_9;
  u_9 = t;
  t = term_v_28;
  s_9 = t;
  t = SSL_table_put(r_9, s_9, v_23);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_23);
  return(t);
}
ATerm l_25 (ATerm t)
{
  t = term_z_34;
  return(t);
}
ATerm m_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_25 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,c_10 = NULL,g_10 = NULL;
  z_9 = t;
  t = term_w_28;
  w_9 = t;
  t = z_9;
  c_10 = t;
  t = term_a_35;
  x_9 = t;
  t = c_10;
  g_10 = t;
  t = term_u_21;
  y_9 = t;
  t = SSL_table_put(w_9, x_9, y_9);
  t = term_b_35;
  return(t);
}
ATerm p_25 (ATerm t)
{
  t = term_c_35;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_25, b_25, d_25, t);
      ;
      LocalPopChoice(e_35);
    }
  else
    {
      t = d_35;
      {
        ATerm f_35 = t;
        int g_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_25, i_25, l_25, t);
            ;
            LocalPopChoice(g_35);
          }
        else
          {
            t = f_35;
            t = Option_3_0(m_25, o_25, p_25, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_24 = NULL;
      t = term_u_21;
      t = d_0(t);
      a_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_35, term_i_35, a_24);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm d_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_23 = ATgetFirst((ATermList) t);
          z_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_23;
      t = a_0(t);
      t = term_u_21;
      t = c_0(t);
      d_24 = t;
      t = (ATerm) ATinsert(CheckATermList(z_23), d_24);
    }
  return(t);
}
ATerm r_25 (ATerm t)
{
  ATerm f_24 = NULL;
  f_24 = t;
  if(match_string(t, "-o"))
    {
      t = f_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_24;
    }
  return(t);
}
ATerm s_25 (ATerm t)
{
  ATerm g_24 = NULL,i_10 = NULL,j_10 = NULL,p_10 = NULL,r_10 = NULL;
  g_24 = t;
  p_10 = t;
  t = term_w_28;
  i_10 = t;
  t = p_10;
  r_10 = t;
  t = term_j_35;
  j_10 = t;
  t = SSL_table_put(i_10, j_10, g_24);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_24);
  return(t);
}
ATerm t_25 (ATerm t)
{
  t = term_k_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_25, s_25, t_25, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,s_10 = NULL,t_10 = NULL;
  if(match_cons(t, sym__3))
    {
      j_24 = ATgetArgument(t, 0);
      k_24 = ATgetArgument(t, 1);
      l_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_24, k_24);
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_35 = ATgetArgument(t, 0);
            ATerm o_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_24, k_24);
        ;
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
        t = (ATerm) ATempty;
      }
    m_24 = t;
    t_10 = t;
    t = (ATerm) ATinsert(CheckATermList(m_24), l_24);
    s_10 = t;
    t = SSL_table_put(j_24, k_24, s_10);
    t = (ATerm) ATmakeAppl(sym__3, j_24, k_24, l_24);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_24 = NULL;
      t = term_u_21;
      t = l_0(t);
      y_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_35, term_i_35, y_24);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_24 = ATgetFirst((ATermList) t);
          v_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_24 = ATgetFirst((ATermList) t);
          x_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_24;
      t = i_0(t);
      t = w_24;
      t = k_0(t);
      c_25 = t;
      t = (ATerm) ATinsert(CheckATermList(x_24), c_25);
    }
  return(t);
}
ATerm u_25 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  if(match_string(t, "-i"))
    {
      t = e_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_25;
    }
  return(t);
}
ATerm v_25 (ATerm t)
{
  ATerm f_25 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
  f_25 = t;
  x_10 = t;
  t = term_w_28;
  v_10 = t;
  t = x_10;
  y_10 = t;
  t = term_p_35;
  w_10 = t;
  t = SSL_table_put(v_10, w_10, f_25);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_25);
  return(t);
}
ATerm w_25 (ATerm t)
{
  t = term_q_35;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_25, v_25, w_25, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_25 = NULL,d_11 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,e_11 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_21;
  t = whoami_0_0(t);
  g_25 = t;
  b_11 = t;
  t = term_h_28;
  z_10 = t;
  t = b_11;
  c_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_35), g_25);
  a_11 = t;
  t = SSL_printnl(z_10, a_11);
  e_11 = t;
  t = term_r_28;
  d_11 = t;
  t = SSL_exit(d_11);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
  t = term_s_35;
  h_11 = t;
  t = term_w_28;
  f_11 = t;
  t = h_11;
  i_11 = t;
  t = term_s_35;
  g_11 = t;
  t = SSL_table_get(f_11, g_11);
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_8 = NULL,j_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
        t = eval_config_0_0(t);
        l_8 = t;
        p_11 = t;
        t = term_w_28;
        j_11 = t;
        t = p_11;
        q_11 = t;
        t = term_s_35;
        o_11 = t;
        t = SSL_table_put(j_11, o_11, l_8);
        t = l_8;
        ;
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm t)
{
  ATerm v_35 = t;
  int w_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_93(t);
      ;
      LocalPopChoice(w_35);
    }
  else
    {
      t = v_35;
      {
        ATerm j_25 = NULL,k_25 = NULL,n_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_25 = ATgetFirst((ATermList) t);
            k_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_25;
        t = foldr_2_0(c_93, d_93, t);
        n_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_25, n_25);
        t = d_93(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm x_25 (ATerm t)
{
  t = term_w_34;
  return(t);
}
ATerm y_25 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL;
  if(match_cons(t, sym__2))
    {
      w_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(w_8, x_8);
        ;
        LocalPopChoice(y_35);
      }
    else
      {
        t = x_35;
        t = SSL_addr(w_8, x_8);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_25 = NULL,m_8 = NULL,o_8 = NULL;
  t = times_0_0(t);
  m_8 = t;
  t = SSL_explode_term(m_8);
  if(match_cons(t, sym__2))
    {
      ATerm z_35 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8;
  t = foldr_2_0(x_25, y_25, t);
  q_25 = t;
  t = SSL_TicksToSeconds(q_25);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
  b_26 = t;
  if(match_cons(t, sym__2))
    {
      c_26 = ATgetArgument(t, 0);
      d_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_26;
        if((c_26 != t))
          {
            _fail(t);
          }
        t = b_26;
        ;
        LocalPopChoice(b_36);
      }
    else
      {
        t = a_36;
        t = b_26;
        {
          ATerm c_36 = t;
          int d_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_26, d_26);
              ;
              LocalPopChoice(d_36);
            }
          else
            {
              t = c_36;
              t = SSL_gtr(c_26, d_26);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_26, d_26);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_111 (ATerm), ATerm t)
{
  ATerm e_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_26 = NULL,i_26 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,y_11 = NULL;
      g_26 = t;
      t = term_v_28;
      t_11 = t;
      t = term_w_28;
      r_11 = t;
      t = t_11;
      y_11 = t;
      t = term_v_28;
      s_11 = t;
      t = SSL_table_get(r_11, s_11);
      {
        ATerm g_36 = t;
        int h_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_9 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL;
            t = eval_config_0_0(t);
            v_9 = t;
            b_12 = t;
            t = term_w_28;
            z_11 = t;
            t = b_12;
            c_12 = t;
            t = term_v_28;
            a_12 = t;
            t = SSL_table_put(z_11, a_12, v_9);
            t = v_9;
            ;
            LocalPopChoice(h_36);
          }
        else
          {
            t = g_36;
          }
        i_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_26, term_r_28);
        t = geq_0_0(t);
        t = g_26;
        t = c_111(t);
      }
      ;
      LocalPopChoice(f_36);
    }
  else
    {
      t = e_36;
    }
  return(t);
}
ATerm z_25 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,e_12 = NULL,f_12 = NULL,h_12 = NULL,i_12 = NULL;
  t = run_time_0_0(t);
  k_26 = t;
  t = term_u_21;
  t = whoami_0_0(t);
  l_26 = t;
  h_12 = t;
  t = term_h_28;
  e_12 = t;
  t = h_12;
  i_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_36), k_26), term_i_36), l_26);
  f_12 = t;
  t = SSL_printnl(e_12, f_12);
  t = (ATerm) ATmakeAppl(sym__2, term_h_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_36), k_26), term_i_36), l_26));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_25, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL;
  t = report_run_time_0_0(t);
  k_12 = t;
  t = term_w_34;
  j_12 = t;
  t = SSL_exit(j_12);
  return(t);
}
ATerm a_26 (ATerm t)
{
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(l_36);
    }
  else
    {
      t = k_36;
      {
        ATerm m_36 = t;
        int n_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(n_36);
          }
        else
          {
            t = m_36;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_104 (ATerm), ATerm t)
{
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_12 = NULL,m_12 = NULL,q_12 = NULL,r_12 = NULL;
      t = term_q_36;
      q_12 = t;
      t = term_w_28;
      l_12 = t;
      t = q_12;
      r_12 = t;
      t = term_q_36;
      m_12 = t;
      t = SSL_table_get(l_12, m_12);
      {
        ATerm r_36 = t;
        int s_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_10 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,w_12 = NULL;
            t = eval_config_0_0(t);
            d_10 = t;
            u_12 = t;
            t = term_w_28;
            s_12 = t;
            t = u_12;
            w_12 = t;
            t = term_q_36;
            t_12 = t;
            t = SSL_table_put(s_12, t_12, d_10);
            t = d_10;
            ;
            LocalPopChoice(s_36);
          }
        else
          {
            t = r_36;
          }
      }
      ;
      LocalPopChoice(p_36);
    }
  else
    {
      t = o_36;
      t = fetch_1_0(a_26, t);
    }
  t = x_104(t);
  return(t);
}
ATerm map_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm m_26 (ATerm t)
  {
    ATerm t_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(u_36);
      }
    else
      {
        t = t_36;
        t = Cons_2_0(l_86, m_26, t);
      }
    return(t);
  }
  t = m_26(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_26 = ATgetFirst((ATermList) t);
      q_26 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_26 = NULL,v_26 = NULL;
        t = q_26;
        t = g_0(t);
        u_26 = t;
        t = p_26;
        t = e_0(t);
        v_26 = t;
        t = q_26;
        {
          ATerm e_26 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(u_26), v_26);
            return(t);
          }
          t = reverse_acc_2_0(e_0, e_26, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_21;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,y_12 = NULL,z_12 = NULL;
  z_26 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_26);
  w_26 = t;
  t = x_26;
  t = z_81(t);
  y_26 = t;
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_26);
  y_12 = t;
  t = SSLsetAnnotations(y_12, w_26);
  return(t);
}
ATerm f_26 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm h_26 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_26 (ATerm t)
{
  ATerm c_27 = NULL;
  c_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_27), term_v_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  ATerm w_36 = t;
  int x_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
      t = term_s_35;
      f_13 = t;
      t = term_w_28;
      c_13 = t;
      t = f_13;
      g_13 = t;
      t = term_s_35;
      e_13 = t;
      t = SSL_table_get(c_13, e_13);
      {
        ATerm y_36 = t;
        int z_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_10 = NULL,k_13 = NULL,m_13 = NULL,n_13 = NULL,p_13 = NULL;
            t = eval_config_0_0(t);
            o_10 = t;
            n_13 = t;
            t = term_w_28;
            k_13 = t;
            t = n_13;
            p_13 = t;
            t = term_s_35;
            m_13 = t;
            t = SSL_table_put(k_13, m_13, o_10);
            t = o_10;
            ;
            LocalPopChoice(z_36);
          }
        else
          {
            t = y_36;
          }
      }
      ;
      LocalPopChoice(x_36);
    }
  else
    {
      t = w_36;
      t = fetch_1_0(f_26, t);
    }
  t = term_a_37;
  t = echo_0_0(t);
  s_13 = t;
  t = term_h_35;
  q_13 = t;
  t = s_13;
  t_13 = t;
  t = term_i_35;
  r_13 = t;
  t = SSL_table_get(q_13, r_13);
  t = reverse_acc_2_0(_id, h_26, t);
  t = map_1_0(j_26, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm a_82 (ATerm), ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,u_13 = NULL,v_13 = NULL;
  g_27 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      e_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_27);
  d_27 = t;
  t = e_27;
  t = a_82(t);
  f_27 = t;
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, f_27);
  u_13 = t;
  t = SSLsetAnnotations(u_13, d_27);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,x_13 = NULL,y_13 = NULL;
  k_27 = t;
  {
    ATerm b_37 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_27;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_37 = ATgetFirst((ATermList) t);
                ATerm e_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_27;
          }
        ;
        LocalPopChoice(c_37);
      }
    else
      {
        t = b_37;
        t = (ATerm) ATinsert(ATempty, k_27);
      }
    l_27 = t;
    y_13 = t;
    t = term_d_33;
    x_13 = t;
    t = SSL_printnl(x_13, l_27);
    t = k_27;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
  t = term_s_35;
  b_14 = t;
  t = term_w_28;
  z_13 = t;
  t = b_14;
  c_14 = t;
  t = term_s_35;
  a_14 = t;
  t = SSL_table_get(z_13, a_14);
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_10 = NULL,d_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
        t = eval_config_0_0(t);
        u_10 = t;
        h_14 = t;
        t = term_w_28;
        d_14 = t;
        t = h_14;
        i_14 = t;
        t = term_s_35;
        g_14 = t;
        t = SSL_table_put(d_14, g_14, u_10);
        t = u_10;
        ;
        LocalPopChoice(g_37);
      }
    else
      {
        t = f_37;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm n_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_26 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
  q_14 = t;
  t = term_w_28;
  j_14 = t;
  t = q_14;
  r_14 = t;
  t = term_h_37;
  k_14 = t;
  t = r_14;
  s_14 = t;
  t = term_u_21;
  l_14 = t;
  t = SSL_table_put(j_14, k_14, l_14);
  t = term_i_37;
  return(t);
}
ATerm r_26 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm s_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_26 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,c_15 = NULL,e_15 = NULL,i_15 = NULL,j_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  z_14 = t;
  t = term_w_28;
  w_14 = t;
  t = z_14;
  a_15 = t;
  t = term_h_37;
  x_14 = t;
  t = a_15;
  c_15 = t;
  t = term_u_21;
  y_14 = t;
  t = SSL_table_put(w_14, x_14, y_14);
  n_15 = t;
  t = term_w_28;
  e_15 = t;
  t = n_15;
  o_15 = t;
  t = term_k_37;
  i_15 = t;
  t = o_15;
  p_15 = t;
  t = term_u_21;
  j_15 = t;
  t = SSL_table_put(e_15, i_15, j_15);
  t = term_l_37;
  return(t);
}
ATerm a_27 (ATerm t)
{
  t = term_m_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_26, o_26, r_26, t);
      ;
      LocalPopChoice(o_37);
    }
  else
    {
      t = n_37;
      t = Option_3_0(s_26, t_26, a_27, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,q_15 = NULL,x_15 = NULL;
  u_27 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_27 = ATgetFirst((ATermList) t);
      r_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_27);
  p_27 = t;
  t = q_27;
  t = h_69(t);
  s_27 = t;
  t = r_27;
  t = i_69(t);
  t_27 = t;
  x_15 = t;
  t = (ATerm) ATinsert(CheckATermList(t_27), s_27);
  q_15 = t;
  t = SSLsetAnnotations(q_15, p_27);
  return(t);
}
ATerm b_27 (ATerm t)
{
  ATerm b_28 = NULL,y_15 = NULL,a_16 = NULL,d_16 = NULL,e_16 = NULL;
  b_28 = t;
  d_16 = t;
  t = term_w_28;
  y_15 = t;
  t = d_16;
  e_16 = t;
  t = term_s_35;
  a_16 = t;
  t = SSL_table_put(y_15, a_16, b_28);
  t = (ATerm) ATmakeAppl(sym_Program_1, b_28);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_108 (ATerm), ATerm t)
{
  ATerm y_27 = NULL;
  y_27 = t;
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_37;
        t = c_108(t);
        ;
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
      }
    t = y_27;
    {
      ATerm h_27 (ATerm t)
      {
        ATerm s_37 = t;
        int t_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_37 = t;
            int v_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(v_37);
              }
            else
              {
                t = u_37;
                t = c_108(t);
                t = Cons_2_0(_id, h_27, t);
              }
            ;
            LocalPopChoice(t_37);
          }
        else
          {
            t = s_37;
            {
              ATerm d_28 = NULL,e_28 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_28 = ATgetFirst((ATermList) t);
                  e_28 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_28), (ATerm) ATmakeAppl(sym_Undefined_1, d_28));
            }
          }
        return(t);
      }
      t = Cons_2_0(b_27, h_27, t);
    }
  }
  return(t);
}
ATerm j_27 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  if(match_string(t, "--help"))
    {
      t = o_28;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_28;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_28;
        }
    }
  return(t);
}
ATerm m_27 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  o_16 = t;
  t = term_w_28;
  l_16 = t;
  t = o_16;
  p_16 = t;
  t = term_q_36;
  m_16 = t;
  t = p_16;
  q_16 = t;
  t = term_u_21;
  n_16 = t;
  t = SSL_table_put(l_16, m_16, n_16);
  t = term_w_37;
  return(t);
}
ATerm n_27 (ATerm t)
{
  t = term_x_37;
  return(t);
}
ATerm o_27 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_108 (ATerm), ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,y_17 = NULL,b_18 = NULL;
  l_28 = t;
  i_16 = t;
  t = term_h_35;
  f_16 = t;
  t = i_16;
  j_16 = t;
  t = term_i_35;
  g_16 = t;
  t = j_16;
  k_16 = t;
  t = (ATerm) ATempty;
  h_16 = t;
  t = SSL_table_put(f_16, g_16, h_16);
  t = l_28;
  {
    ATerm i_27 (ATerm t)
    {
      ATerm y_37 = t;
      int z_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_108(t);
          ;
          LocalPopChoice(z_37);
        }
      else
        {
          t = y_37;
          {
            ATerm a_38 = t;
            int b_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_27, m_27, n_27, t);
                ;
                LocalPopChoice(b_38);
              }
            else
              {
                t = a_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_27, t);
    {
      ATerm c_38 = t;
      int d_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_28 = NULL;
          t_28 = t;
          {
            ATerm e_38 = t;
            int f_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_16 = NULL,a_17 = NULL;
                t = t_28;
                {
                  ATerm g_38 = t;
                  int h_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
                      t = term_q_36;
                      t_16 = t;
                      t = term_w_28;
                      r_16 = t;
                      t = t_16;
                      u_16 = t;
                      t = term_q_36;
                      s_16 = t;
                      t = SSL_table_get(r_16, s_16);
                      {
                        ATerm i_38 = t;
                        int j_38 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm m_11 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
                            t = eval_config_0_0(t);
                            m_11 = t;
                            x_16 = t;
                            t = term_w_28;
                            v_16 = t;
                            t = x_16;
                            y_16 = t;
                            t = term_q_36;
                            w_16 = t;
                            t = SSL_table_put(v_16, w_16, m_11);
                            t = m_11;
                            ;
                            LocalPopChoice(j_38);
                          }
                        else
                          {
                            t = i_38;
                          }
                      }
                      ;
                      LocalPopChoice(h_38);
                    }
                  else
                    {
                      t = g_38;
                      t = fetch_1_0(o_27, t);
                    }
                  t = t_28;
                  t = default_system_usage_0_0(t);
                  a_17 = t;
                  t = term_w_34;
                  z_16 = t;
                  t = SSL_exit(z_16);
                }
                ;
                LocalPopChoice(f_38);
              }
            else
              {
                t = e_38;
                {
                  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,l_17 = NULL,m_17 = NULL;
                  t = term_h_37;
                  d_17 = t;
                  t = term_w_28;
                  b_17 = t;
                  t = d_17;
                  e_17 = t;
                  t = term_h_37;
                  c_17 = t;
                  t = SSL_table_get(b_17, c_17);
                  {
                    ATerm k_38 = t;
                    int l_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_11 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
                        t = eval_config_0_0(t);
                        x_11 = t;
                        h_17 = t;
                        t = term_w_28;
                        f_17 = t;
                        t = h_17;
                        i_17 = t;
                        t = term_h_37;
                        g_17 = t;
                        t = SSL_table_put(f_17, g_17, x_11);
                        t = x_11;
                        ;
                        LocalPopChoice(l_38);
                      }
                    else
                      {
                        t = k_38;
                      }
                    t = t_28;
                    t = default_system_about_0_0(t);
                    m_17 = t;
                    t = term_w_34;
                    l_17 = t;
                    t = SSL_exit(l_17);
                  }
                }
              }
          }
          ;
          LocalPopChoice(d_38);
        }
      else
        {
          t = c_38;
          {
            ATerm m_38 = t;
            int n_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,w_17 = NULL,x_17 = NULL;
                ATerm v_27 (ATerm t)
                {
                  ATerm w_27 (ATerm t)
                  {
                    if(((m_28 != NULL) && (m_28 != t)))
                      _fail(t);
                    else
                      m_28 = t;
                    return(t);
                  }
                  t = Undefined_1_0(w_27, t);
                  return(t);
                }
                t = fetch_1_0(v_27, t);
                s_17 = t;
                t = term_h_28;
                n_17 = t;
                t = s_17;
                t_17 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_28)), term_o_38);
                r_17 = t;
                t = SSL_printnl(n_17, r_17);
                t = (ATerm) ATmakeAppl(sym__2, term_h_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_28)), term_o_38));
                t = default_system_usage_0_0(t);
                x_17 = t;
                t = term_r_28;
                w_17 = t;
                t = SSL_exit(w_17);
                ;
                LocalPopChoice(n_38);
              }
            else
              {
                t = m_38;
              }
          }
        }
      n_28 = t;
      b_18 = t;
      t = term_h_35;
      y_17 = t;
      t = SSL_table_destroy(y_17);
      t = n_28;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm t)
{
  ATerm y_28 = NULL,c_18 = NULL,d_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  t = parse_options_1_0(z_104, t);
  y_28 = t;
  d_18 = t;
  t = term_p_38;
  c_18 = t;
  t = SSL_table_create(c_18);
  i_18 = t;
  t = term_p_38;
  g_18 = t;
  t = i_18;
  j_18 = t;
  t = term_q_38;
  h_18 = t;
  t = SSL_table_put(g_18, h_18, y_28);
  t = y_28;
  t = b_105(t);
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_105, t);
        ;
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
        {
          ATerm t_38 = t;
          int u_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_105(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_38);
            }
          else
            {
              t = t_38;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm z_27 (ATerm t)
{
  t = if_verbose2_1_0(i_28, t);
  return(t);
}
ATerm c_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_28 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,y_18 = NULL,z_18 = NULL,i_19 = NULL,j_19 = NULL;
  z_18 = t;
  t = term_w_28;
  s_18 = t;
  t = z_18;
  i_19 = t;
  t = term_v_38;
  t_18 = t;
  t = i_19;
  j_19 = t;
  t = term_u_21;
  y_18 = t;
  t = SSL_table_put(s_18, t_18, y_18);
  t = term_w_38;
  return(t);
}
ATerm g_28 (ATerm t)
{
  t = term_x_38;
  return(t);
}
ATerm i_28 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,k_20 = NULL,n_20 = NULL,s_20 = NULL,t_20 = NULL;
  z_28 = t;
  t = term_s_35;
  d_20 = t;
  t = term_w_28;
  b_20 = t;
  t = d_20;
  e_20 = t;
  t = term_s_35;
  c_20 = t;
  t = SSL_table_get(b_20, c_20);
  {
    ATerm y_38 = t;
    int z_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_12 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,j_20 = NULL;
        t = eval_config_0_0(t);
        d_12 = t;
        h_20 = t;
        t = term_w_28;
        f_20 = t;
        t = h_20;
        j_20 = t;
        t = term_s_35;
        g_20 = t;
        t = SSL_table_put(f_20, g_20, d_12);
        t = d_12;
        ;
        LocalPopChoice(z_38);
      }
    else
      {
        t = y_38;
      }
    a_29 = t;
    s_20 = t;
    t = term_h_28;
    k_20 = t;
    t = s_20;
    t_20 = t;
    t = (ATerm) ATinsert(ATempty, a_29);
    n_20 = t;
    t = SSL_printnl(k_20, n_20);
    t = z_28;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm t)
{
  ATerm x_27 (ATerm t)
  {
    ATerm a_39 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_104(t);
        ;
        LocalPopChoice(b_39);
      }
    else
      {
        t = a_39;
        {
          ATerm c_39 = t;
          int d_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(d_39);
            }
          else
            {
              t = c_39;
              {
                ATerm e_39 = t;
                int f_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(f_39);
                  }
                else
                  {
                    t = e_39;
                    {
                      ATerm g_39 = t;
                      int h_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(c_28, f_28, g_28, t);
                          ;
                          LocalPopChoice(h_39);
                        }
                      else
                        {
                          t = g_39;
                          {
                            ATerm i_39 = t;
                            int j_39 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(j_39);
                              }
                            else
                              {
                                t = i_39;
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
  ATerm a_28 (ATerm t)
  {
    ATerm b_29 = NULL,c_29 = NULL,g_12 = NULL;
    b_29 = t;
    {
      ATerm k_39 = t;
      int l_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_28 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_29 != NULL) && (c_29 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_28, t);
          ;
          LocalPopChoice(l_39);
        }
      else
        {
          t = k_39;
          t = term_m_39;
          c_29 = t;
        }
      t = not_null(c_29);
      t = ReadFromFile_0_0(t);
      g_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_29, g_12);
      t = apply_strategy_1_0(i_104, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(x_27, k_104, z_27, a_28, t);
  return(t);
}
ATerm k_28 (ATerm t)
{
  t = _2_0(_id, mark_bound_unbound_vars_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(k_28, _fail, default_usage_0_0, t);
  return(t);
}
