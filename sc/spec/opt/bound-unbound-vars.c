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
ATerm term_v_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_q_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_m_20;
ATerm term_e_20;
ATerm term_y_19;
ATerm term_p_19;
ATerm term_a_18;
ATerm term_p_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_a_14;
ATerm term_u_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_u_11;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_b_11;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_n_10;
void init_constant_terms (void)
{
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Defined_2, term_u_11, term_y_11);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Defined_2, term_o_14, term_p_14);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Defined_2, term_o_15, term_y_11);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_y_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_d_21, term_n_10);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym__2, term_w_21, term_x_21);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__2, term_f_23, term_n_10);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym__2, term_i_23, term_n_10);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_v_22, term_n_10);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym__2, term_d_25, term_n_10);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose4_1_0 (ATerm v_111 (ATerm), ATerm);
ATerm mark_guardedlchoice_1_0 (ATerm x_82 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm v_82 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm u_1 (ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm v_1 (ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm z_1 (ATerm);
ATerm c_2 (ATerm);
ATerm b_6 (ATerm v_30, ATerm);
ATerm g_2 (ATerm);
ATerm q_14 (ATerm v_12, ATerm x_12, ATerm y_12, ATerm z_12, ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm c_6 (ATerm w_32, ATerm v_32, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm undefine_unbound_MarkVar_0_0 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm d_6 (ATerm g_83 (ATerm), ATerm l_31, ATerm j_31, ATerm);
ATerm e_6 (ATerm y_31, ATerm z_31, ATerm);
ATerm end_scope_1_0 (ATerm d_83 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm c_83 (ATerm), ATerm);
ATerm scope_2_0 (ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm f_6 (ATerm b_30, ATerm);
ATerm j_6 (ATerm e_32, ATerm f_32, ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm alltd_1_0 (ATerm c_85 (ATerm), ATerm);
ATerm g_6 (ATerm g_32, ATerm h_32, ATerm i_32, ATerm);
ATerm r_3 (ATerm);
ATerm k_6 (ATerm h_30, ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm c_4 (ATerm);
ATerm g_4 (ATerm);
ATerm mark_bound_unbound_vars_0_0 (ATerm);
ATerm n_6 (ATerm u_52, ATerm v_52, ATerm);
ATerm o_6 (ATerm i_56, ATerm j_56, ATerm);
ATerm q_6 (ATerm d_103 (ATerm), ATerm h_458, ATerm m_56, ATerm);
ATerm p_6 (ATerm e_56, ATerm f_56, ATerm);
ATerm t_4 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm p_104 (ATerm), ATerm);
ATerm c_35 (ATerm u_34, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm r_6 (ATerm k_56, ATerm);
ATerm s_6 (ATerm w_52, ATerm x_52, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm j_37 (ATerm a_36, ATerm);
ATerm k_37 (ATerm e_36, ATerm h_36, ATerm j_36, ATerm);
ATerm l_37 (ATerm w_36, ATerm x_36, ATerm y_36, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm i_5 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_87 (ATerm), ATerm);
ATerm m_6 (ATerm m_50, ATerm n_50, ATerm);
ATerm debug_1_0 (ATerm b_103 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm r_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm t_111 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm j_7 (ATerm);
ATerm l_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm v_7 (ATerm);
ATerm z_7 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm y_6 (ATerm v_58, ATerm w_58, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm a_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm w_6 (ATerm t_31, ATerm u_31, ATerm s_31, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm t_6 (ATerm u_43, ATerm v_43, ATerm);
ATerm foldr_2_0 (ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_111 (ATerm), ATerm);
ATerm r_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_8 (ATerm);
ATerm need_help_1_0 (ATerm n_105 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_87 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm v_6 (ATerm k_33, ATerm l_33, ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm z_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm g_9 (ATerm);
ATerm i_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_69 (ATerm), ATerm s_69 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm s_108 (ATerm), ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm r_9 (ATerm);
ATerm parse_options_1_0 (ATerm r_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm);
ATerm y_9 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm iowrap_3_0 (ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm);
ATerm m_10 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_0 = NULL,l_0 = NULL,n_0 = NULL,u_0 = NULL,v_0 = NULL;
  j_0 = t;
  t = term_n_10;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_p_10;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_10), l_0), term_s_10);
  v_0 = t;
  t = SSL_printnl(u_0, v_0);
  t = term_v_10;
  n_0 = t;
  t = SSL_exit(n_0);
  t = j_0;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm v_111 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm y_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL;
        t = term_b_11;
        t = get_config_0_0(t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, term_m_11);
        t = geq_0_0(t);
        t = x_0;
        t = v_111(t);
        ;
        LocalPopChoice(z_10);
      }
    else
      {
        t = y_10;
        t = x_0;
      }
  }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,i_1 = NULL,j_1 = NULL,l_1 = NULL,m_1 = NULL,v_3 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm p_1 = NULL,r_1 = NULL,t_1 = NULL,a_2 = NULL,b_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,l_2 = NULL,x_3 = NULL,w_3 = NULL;
    l_2 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        e_2 = ATgetArgument(t, 0);
        f_2 = ATgetArgument(t, 1);
        h_2 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_2);
    d_2 = t;
    t = e_2;
    t = x_82(t);
    i_2 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, i_2, f_2, h_2);
    w_3 = t;
    t = SSLsetAnnotations(w_3, d_2);
    j_2 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        r_1 = ATgetArgument(t, 0);
        t_1 = ATgetArgument(t, 1);
        a_2 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_2);
    p_1 = t;
    t = t_1;
    t = x_82(t);
    b_2 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, r_1, b_2, a_2);
    x_3 = t;
    t = SSLsetAnnotations(x_3, p_1);
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,q_2 = NULL,r_2 = NULL,u_2 = NULL,z_3 = NULL;
    u_2 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        n_2 = ATgetArgument(t, 0);
        o_2 = ATgetArgument(t, 1);
        q_2 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_2);
    m_2 = t;
    t = q_2;
    t = x_82(t);
    r_2 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, n_2, o_2, r_2);
    z_3 = t;
    t = SSLsetAnnotations(z_3, m_2);
    return(t);
  }
  if(((m_1 != NULL) && (m_1 != t)))
    _fail(t);
  else
    m_1 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      if(((i_1 != NULL) && (i_1 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_1 = ATgetArgument(t, 0);
      if(((j_1 != NULL) && (j_1 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_1 = ATgetArgument(t, 1);
      if(((l_1 != NULL) && (l_1 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        l_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(m_1));
  if(((b_1 != NULL) && (b_1 != t)))
    _fail(t);
  else
    b_1 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, not_null(i_1), not_null(j_1), not_null(l_1));
  if(((v_3 != NULL) && (v_3 != t)))
    _fail(t);
  else
    v_3 = t;
  t = SSLsetAnnotations(not_null(v_3), not_null(b_1));
  t = abstract_choice_2_0(o_0, p_0, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,z_2 = NULL,w_4 = NULL;
  ATerm q_0 (ATerm t)
  {
    ATerm a_3 = NULL,g_3 = NULL,l_3 = NULL,m_3 = NULL,y_3 = NULL,e_7 = NULL;
    y_3 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        g_3 = ATgetArgument(t, 0);
        l_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_3);
    a_3 = t;
    t = g_3;
    t = w_82(t);
    m_3 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, m_3, l_3);
    e_7 = t;
    t = SSLsetAnnotations(e_7, a_3);
    return(t);
  }
  ATerm r_0 (ATerm t)
  {
    ATerm a_4 = NULL,b_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,x_7 = NULL;
    f_4 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        b_4 = ATgetArgument(t, 0);
        d_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_4);
    a_4 = t;
    t = d_4;
    t = w_82(t);
    e_4 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, b_4, e_4);
    x_7 = t;
    t = SSLsetAnnotations(x_7, a_4);
    return(t);
  }
  if(((z_2 != NULL) && (z_2 != t)))
    _fail(t);
  else
    z_2 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      if(((w_2 != NULL) && (w_2 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_2 = ATgetArgument(t, 0);
      if(((x_2 != NULL) && (x_2 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(z_2));
  if(((v_2 != NULL) && (v_2 != t)))
    _fail(t);
  else
    v_2 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(w_2), not_null(x_2));
  if(((w_4 != NULL) && (w_4 != t)))
    _fail(t);
  else
    w_4 = t;
  t = SSLsetAnnotations(not_null(w_4), not_null(v_2));
  t = abstract_choice_2_0(q_0, r_0, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,n_4 = NULL,o_4 = NULL;
  l_4 = t;
  t = save_MarkVar_0_0(t);
  h_4 = t;
  t = l_4;
  t = y_82(t);
  k_4 = t;
  t = save_MarkVar_0_0(t);
  i_4 = t;
  t = term_p_11;
  o_4 = t;
  t = SSL_table_destroy(o_4);
  t = term_p_11;
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_11, h_4);
  t = c_6(n_4, h_4, t);
  t = k_4;
  t = z_82(t);
  j_4 = t;
  t = i_4;
  t = isect_MarkVar_0_0(t);
  t = j_4;
  return(t);
}
ATerm mark_choice_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,k_8 = NULL;
  ATerm y_0 (ATerm t)
  {
    ATerm u_4 = NULL,v_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,m_8 = NULL;
    z_4 = t;
    if(match_cons(t, sym_Choice_2))
      {
        v_4 = ATgetArgument(t, 0);
        x_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_4);
    u_4 = t;
    t = v_4;
    t = v_82(t);
    y_4 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, y_4, x_4);
    m_8 = t;
    t = SSLsetAnnotations(m_8, u_4);
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,g_5 = NULL,n_8 = NULL;
    g_5 = t;
    if(match_cons(t, sym_Choice_2))
      {
        b_5 = ATgetArgument(t, 0);
        c_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_5);
    a_5 = t;
    t = c_5;
    t = v_82(t);
    d_5 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, b_5, d_5);
    n_8 = t;
    t = SSLsetAnnotations(n_8, a_5);
    return(t);
  }
  if(((s_4 != NULL) && (s_4 != t)))
    _fail(t);
  else
    s_4 = t;
  if(match_cons(t, sym_Choice_2))
    {
      if(((q_4 != NULL) && (q_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_4 = ATgetArgument(t, 0);
      if(((r_4 != NULL) && (r_4 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(s_4));
  if(((p_4 != NULL) && (p_4 != t)))
    _fail(t);
  else
    p_4 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_4), not_null(r_4));
  if(((k_8 != NULL) && (k_8 != t)))
    _fail(t);
  else
    k_8 = t;
  t = SSLsetAnnotations(not_null(k_8), not_null(p_4));
  t = abstract_choice_2_0(y_0, a_1, t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm h_5 = NULL,j_5 = NULL,k_5 = NULL,n_5 = NULL,o_5 = NULL,s_5 = NULL,t_5 = NULL,y_5 = NULL,z_5 = NULL,h_6 = NULL,y_8 = NULL,w_8 = NULL;
  j_5 = t;
  t = save_MarkVar_0_0(t);
  h_5 = t;
  t = j_5;
  if(match_cons(t, sym_Rec_2))
    {
      y_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_5);
  t_5 = t;
  t = z_5;
  t = mark_buv_0_0(t);
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, y_5, h_6);
  w_8 = t;
  t = SSLsetAnnotations(w_8, t_5);
  t = h_5;
  t = isect_MarkVar_0_0(t);
  t = j_5;
  if(match_cons(t, sym_Rec_2))
    {
      n_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_5);
  k_5 = t;
  t = o_5;
  t = mark_buv_0_0(t);
  s_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, n_5, s_5);
  y_8 = t;
  t = SSLsetAnnotations(y_8, k_5);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm i_6 = NULL,l_6 = NULL,u_6 = NULL,x_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,h_7 = NULL,i_7 = NULL,k_7 = NULL,p_7 = NULL,t_7 = NULL,u_7 = NULL,y_7 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,l_9 = NULL,k_9 = NULL,h_9 = NULL;
  d_8 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      u_7 = ATgetArgument(t, 0);
      y_7 = ATgetArgument(t, 1);
      b_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_8);
  t_7 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, u_7, y_7, b_8);
  h_9 = t;
  t = SSLsetAnnotations(h_9, t_7);
  c_8 = t;
  t = save_MarkVar_0_0(t);
  i_6 = t;
  t = c_8;
  if(match_cons(t, sym_PrimT_3))
    {
      d_7 = ATgetArgument(t, 0);
      h_7 = ATgetArgument(t, 1);
      i_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_8);
  c_7 = t;
  t = i_7;
  t = map_1_0(u_1, t);
  k_7 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, d_7, h_7, k_7);
  k_9 = t;
  t = SSLsetAnnotations(k_9, c_7);
  p_7 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      u_6 = ATgetArgument(t, 0);
      x_6 = ATgetArgument(t, 1);
      z_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_7);
  l_6 = t;
  t = x_6;
  t = mark_buv_0_0(t);
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, u_6, a_7, z_6);
  l_9 = t;
  t = SSLsetAnnotations(l_9, l_6);
  b_7 = t;
  t = i_6;
  t = isect_MarkVar_0_0(t);
  t = b_7;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm d_11 = NULL,h_11 = NULL,k_11 = NULL,l_11 = NULL;
  h_11 = t;
  if(match_cons(t, sym_CallT_3))
    {
      k_11 = ATgetArgument(t, 0);
      l_11 = ATgetArgument(t, 1);
      d_11 = ATgetArgument(t, 2);
      {
        ATerm s_0 = NULL,t_0 = NULL,w_0 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL,k_1 = NULL,n_1 = NULL,o_1 = NULL,q_1 = NULL,s_1 = NULL,x_1 = NULL,u_9 = NULL,q_9 = NULL,p_9 = NULL;
        t = SSLgetAnnotations(h_11);
        s_1 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, k_11, l_11, d_11);
        p_9 = t;
        t = SSLsetAnnotations(p_9, s_1);
        x_1 = t;
        t = save_MarkVar_0_0(t);
        s_0 = t;
        t = x_1;
        if(match_cons(t, sym_CallT_3))
          {
            h_1 = ATgetArgument(t, 0);
            k_1 = ATgetArgument(t, 1);
            n_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_1);
        g_1 = t;
        t = n_1;
        t = map_1_0(v_1, t);
        o_1 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, h_1, k_1, o_1);
        q_9 = t;
        t = SSLsetAnnotations(q_9, g_1);
        q_1 = t;
        if(match_cons(t, sym_CallT_3))
          {
            w_0 = ATgetArgument(t, 0);
            c_1 = ATgetArgument(t, 1);
            d_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_1);
        t_0 = t;
        t = c_1;
        t = mark_buv_0_0(t);
        e_1 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, w_0, e_1, d_1);
        u_9 = t;
        t = SSLsetAnnotations(u_9, t_0);
        f_1 = t;
        t = s_0;
        t = isect_MarkVar_0_0(t);
        t = f_1;
      }
    }
  else
    {
      ATerm y_2 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,h_3 = NULL,k_3 = NULL,x_9 = NULL,w_9 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          k_11 = ATgetArgument(t, 0);
          l_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_11);
      h_3 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, k_11, l_11);
      w_9 = t;
      t = SSLsetAnnotations(w_9, h_3);
      k_3 = t;
      t = save_MarkVar_0_0(t);
      y_2 = t;
      t = k_3;
      if(match_cons(t, sym_Call_2))
        {
          c_3 = ATgetArgument(t, 0);
          d_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_3);
      b_3 = t;
      t = d_3;
      t = mark_buv_0_0(t);
      e_3 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, c_3, e_3);
      x_9 = t;
      t = SSLsetAnnotations(x_9, b_3);
      f_3 = t;
      t = y_2;
      t = isect_MarkVar_0_0(t);
      t = f_3;
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_p_11;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      b_12 = ATgetArgument(t, 0);
      {
        ATerm t_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  c_12 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_12);
  d_12 = t;
  t = term_z_11;
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, b_12), term_z_11);
  t = d_6(c_2, d_12, e_12, t);
  t = c_12;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_p_11;
  return(t);
}
ATerm b_6 (ATerm v_30, ATerm t)
{
  ATerm o_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,u_10 = NULL;
  if(((o_11 != NULL) && (o_11 != t)))
    _fail(t);
  else
    o_11 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      if(((r_11 != NULL) && (r_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_11 = ATgetArgument(t, 0);
      if(((s_11 != NULL) && (s_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_11 = ATgetArgument(t, 1);
      if(((v_11 != NULL) && (v_11 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        v_11 = ATgetArgument(t, 2);
      if(((w_11 != NULL) && (w_11 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        w_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(o_11));
  if(((q_11 != NULL) && (q_11 != t)))
    _fail(t);
  else
    q_11 = t;
  t = not_null(w_11);
  {
    ATerm y_1 (ATerm t)
    {
      ATerm a_12 = NULL;
      a_12 = t;
      t = not_null(v_30);
      t = map_1_0(z_1, t);
      t = a_12;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(w_1, y_1, t);
    if(((x_11 != NULL) && (x_11 != t)))
      _fail(t);
    else
      x_11 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(r_11), not_null(s_11), not_null(v_11), not_null(x_11));
    if(((u_10 != NULL) && (u_10 != t)))
      _fail(t);
    else
      u_10 = t;
    t = SSLsetAnnotations(not_null(u_10), not_null(q_11));
  }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
  z_13 = t;
  if(match_cons(t, sym__2))
    {
      r_13 = ATgetArgument(t, 0);
      s_13 = ATgetArgument(t, 1);
      t = s_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_13 = ATgetFirst((ATermList) t);
          y_13 = (ATerm) ATgetNext((ATermList) t);
          t = t_13;
          {
            ATerm f_12 = t;
            int g_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm h_12 = ATgetArgument(t, 0);
                    x_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(g_12);
                t = r_13;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = z_13;
                  }
                else
                  {
                    ATerm i_12 = t;
                    int j_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = q_14(r_13, x_13, y_13, z_13, t);
                        ;
                        LocalPopChoice(j_12);
                      }
                    else
                      {
                        t = i_12;
                        t = z_13;
                      }
                  }
              }
            else
              {
                t = f_12;
                t = r_13;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = z_13;
                  }
                else
                  {
                    t = z_13;
                  }
              }
          }
        }
      else
        {
          t = r_13;
          if(match_cons(t, sym_Scopes_0))
            {
              t = z_13;
            }
          else
            {
              t = z_13;
            }
        }
    }
  else
    {
      t = z_13;
    }
  return(t);
}
ATerm q_14 (ATerm v_12, ATerm x_12, ATerm y_12, ATerm z_12, ATerm t)
{
  t = z_12;
  {
    ATerm k_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_3 = NULL;
        t = term_p_11;
        t_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_11, v_12);
        t = v_6(t_3, v_12, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_12 = ATgetFirst((ATermList) t);
            if(match_cons(n_12, sym_Defined_2))
              {
                ATerm q_12 = ATgetArgument(n_12, 0);
                if((x_12 != ATgetArgument(n_12, 1)))
                  {
                    _fail(ATgetArgument(n_12, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm p_12 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = z_12;
        ;
        LocalPopChoice(m_12);
      }
    else
      {
        t = k_12;
        t = (ATerm) ATmakeAppl(sym__2, v_12, (ATerm) ATinsert(CheckATermList(y_12), term_u_12));
      }
  }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  t = map_1_0(g_2, t);
  r_12 = t;
  t = term_p_11;
  t_12 = t;
  t = SSL_table_destroy(t_12);
  t = term_p_11;
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_11, r_12);
  t = c_6(s_12, r_12, t);
  t = r_12;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm t_14 = NULL,v_14 = NULL,x_14 = NULL;
  x_14 = t;
  {
    ATerm w_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm b_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_13);
        t = x_14;
      }
    else
      {
        t = w_12;
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
              t = x_14;
            }
          else
            {
              t = c_13;
              {
                ATerm f_13 = t;
                int j_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm k_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(j_13);
                    t = x_14;
                  }
                else
                  {
                    t = f_13;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm l_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = x_14;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    t_14 = t;
    t = x_14;
    t = SRTS_one(mark_buv_0_0, t);
    v_14 = t;
    t = t_14;
    t = isect_MarkVar_0_0(t);
    t = v_14;
  }
  return(t);
}
ATerm c_6 (ATerm w_32, ATerm v_32, ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm a_15 = NULL,b_15 = NULL;
    if(match_cons(t, sym__2))
      {
        a_15 = ATgetArgument(t, 0);
        b_15 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(not_null(w_32), a_15, b_15);
    t = (ATerm) ATmakeAppl(sym__3, not_null(w_32), a_15, b_15);
    return(t);
  }
  t = not_null(v_32);
  t = map_1_0(k_2, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm l_15 = NULL;
  ATerm p_2 (ATerm t)
  {
    ATerm m_15 = NULL,n_15 = NULL;
    m_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_15), m_15);
    t = v_6(not_null(l_15), m_15, t);
    n_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_15, n_15);
    return(t);
  }
  if(((l_15 != NULL) && (l_15 != t)))
    _fail(t);
  else
    l_15 = t;
  t = SSL_table_keys(not_null(l_15));
  t = map_1_0(p_2, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_p_11;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,m_16 = NULL,p_16 = NULL,q_16 = NULL;
  q_16 = t;
  if(match_cons(t, sym__2))
    {
      i_16 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
      t = j_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_16 = ATgetFirst((ATermList) t);
          p_16 = (ATerm) ATgetNext((ATermList) t);
          t = k_16;
          {
            ATerm n_13 = t;
            int o_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm p_13 = ATgetArgument(t, 0);
                    m_16 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(o_13);
                t = m_16;
                if(match_string(t, "unbound"))
                  {
                    t = i_16;
                    if(match_cons(t, sym_Scopes_0))
                      {
                        t = q_16;
                      }
                    else
                      {
                        ATerm q_13 = t;
                        int u_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = (ATerm) ATmakeAppl(sym__2, i_16, (ATerm) ATinsert(CheckATermList(p_16), term_u_12));
                            ;
                            LocalPopChoice(u_13);
                          }
                        else
                          {
                            t = q_13;
                            t = q_16;
                          }
                      }
                  }
                else
                  {
                    t = i_16;
                    if(match_cons(t, sym_Scopes_0))
                      {
                        t = q_16;
                      }
                    else
                      {
                        t = q_16;
                      }
                  }
              }
            else
              {
                t = n_13;
                t = i_16;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = q_16;
                  }
                else
                  {
                    t = q_16;
                  }
              }
          }
        }
      else
        {
          t = i_16;
          if(match_cons(t, sym_Scopes_0))
            {
              t = q_16;
            }
          else
            {
              t = q_16;
            }
        }
    }
  else
    {
      t = q_16;
    }
  return(t);
}
ATerm undefine_unbound_MarkVar_0_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  c_16 = t;
  t = save_MarkVar_0_0(t);
  t = map_1_0(s_2, t);
  d_16 = t;
  t = term_p_11;
  f_16 = t;
  t = SSL_table_destroy(f_16);
  t = term_p_11;
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_11, d_16);
  t = c_6(e_16, d_16, t);
  t = c_16;
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,r_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,e_18 = NULL,f_18 = NULL,h_18 = NULL,l_18 = NULL,x_10 = NULL,w_10 = NULL;
  if(((l_18 != NULL) && (l_18 != t)))
    _fail(t);
  else
    l_18 = t;
  if(match_cons(t, sym_Let_2))
    {
      if(((e_18 != NULL) && (e_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_18 = ATgetArgument(t, 0);
      if(((f_18 != NULL) && (f_18 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(l_18));
  if(((x_17 != NULL) && (x_17 != t)))
    _fail(t);
  else
    x_17 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(e_18), not_null(f_18));
  if(((w_10 != NULL) && (w_10 != t)))
    _fail(t);
  else
    w_10 = t;
  t = SSLsetAnnotations(not_null(w_10), not_null(x_17));
  if(((h_18 != NULL) && (h_18 != t)))
    _fail(t);
  else
    h_18 = t;
  t = undefine_unbound_MarkVar_0_0(t);
  if(((i_17 != NULL) && (i_17 != t)))
    _fail(t);
  else
    i_17 = t;
  t = not_null(h_18);
  if(match_cons(t, sym_Let_2))
    {
      if(((l_17 != NULL) && (l_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_17 = ATgetArgument(t, 0);
      if(((m_17 != NULL) && (m_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(h_18));
  if(((j_17 != NULL) && (j_17 != t)))
    _fail(t);
  else
    j_17 = t;
  t = not_null(l_17);
  {
    ATerm t_2 (ATerm t)
    {
      ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
      m_18 = t;
      t = term_p_11;
      o_18 = t;
      t = SSL_table_destroy(o_18);
      t = term_p_11;
      n_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_p_11, not_null(i_17));
      t = c_6(n_18, not_null(i_17), t);
      t = m_18;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(t_2, t);
    if(((n_17 != NULL) && (n_17 != t)))
      _fail(t);
    else
      n_17 = t;
    t = term_p_11;
    if(((w_17 != NULL) && (w_17 != t)))
      _fail(t);
    else
      w_17 = t;
    t = SSL_table_destroy(not_null(w_17));
    t = term_p_11;
    if(((v_17 != NULL) && (v_17 != t)))
      _fail(t);
    else
      v_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_11, not_null(i_17));
    t = c_6(not_null(v_17), not_null(i_17), t);
    t = not_null(m_17);
    t = mark_buv_0_0(t);
    if(((r_17 != NULL) && (r_17 != t)))
      _fail(t);
    else
      r_17 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(n_17), not_null(r_17));
    if(((x_10 != NULL) && (x_10 != t)))
      _fail(t);
    else
      x_10 = t;
    t = SSLsetAnnotations(not_null(x_10), not_null(j_17));
  }
  return(t);
}
ATerm d_6 (ATerm g_83 (ATerm), ATerm l_31, ATerm j_31, ATerm t)
{
  ATerm r_18 = NULL,t_18 = NULL,w_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  a_19 = t;
  t = g_83(t);
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_18, l_31, j_31);
  t = w_6(r_18, l_31, j_31, t);
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_19 = NULL;
        t = term_a_14;
        g_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_18, term_a_14);
        t = v_6(r_18, g_19, t);
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_18 = ATgetFirst((ATermList) t);
        w_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_a_14;
    b_19 = t;
    t = (ATerm) ATinsert(CheckATermList(w_18), (ATerm) ATinsert(CheckATermList(t_18), l_31));
    c_19 = t;
    t = SSL_table_put(r_18, b_19, c_19);
    t = a_19;
  }
  return(t);
}
ATerm e_6 (ATerm y_31, ATerm z_31, ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL;
  n_19 = t;
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_31, z_31);
        t = v_6(y_31, z_31, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_14 = ATgetFirst((ATermList) t);
            m_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_14);
        t = SSL_table_put(y_31, z_31, m_19);
        t = (ATerm) ATmakeAppl(sym__3, y_31, z_31, m_19);
      }
    else
      {
        t = b_14;
        t = SSL_table_remove(y_31, z_31);
        t = (ATerm) ATmakeAppl(sym__2, y_31, z_31);
      }
    t = n_19;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,w_19 = NULL;
  if(((t_19 != NULL) && (t_19 != t)))
    _fail(t);
  else
    t_19 = t;
  t = d_83(t);
  if(((s_19 != NULL) && (s_19 != t)))
    _fail(t);
  else
    s_19 = t;
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_19 = NULL;
        t = term_a_14;
        x_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_19), term_a_14);
        t = v_6(not_null(s_19), x_19, t);
        ;
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((r_19 != NULL) && (r_19 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          r_19 = ATgetFirst((ATermList) t);
        if(((q_19 != NULL) && (q_19 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          q_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_a_14;
    if(((w_19 != NULL) && (w_19 != t)))
      _fail(t);
    else
      w_19 = t;
    t = SSL_table_put(not_null(s_19), not_null(w_19), not_null(q_19));
    t = not_null(r_19);
    {
      ATerm i_3 (ATerm t)
      {
        ATerm d_20 = NULL;
        d_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_19), d_20);
        t = e_6(not_null(s_19), d_20, t);
        return(t);
      }
      t = map_1_0(i_3, t);
      t = not_null(t_19);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm t)
{
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_95(t);
      t = z_95(t);
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
      t = z_95(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  ATerm f_20 = NULL,o_20 = NULL,q_20 = NULL,s_20 = NULL,v_20 = NULL;
  o_20 = t;
  t = c_83(t);
  f_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_20, term_a_14);
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_21 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_14 = ATgetArgument(t, 0);
            ATerm m_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_a_14;
        f_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_20, term_a_14);
        t = v_6(f_20, f_21, t);
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        t = (ATerm) ATempty;
      }
    q_20 = t;
    t = term_a_14;
    s_20 = t;
    t = (ATerm) ATinsert(CheckATermList(q_20), (ATerm) ATempty);
    v_20 = t;
    t = SSL_table_put(f_20, s_20, v_20);
    t = o_20;
  }
  return(t);
}
ATerm scope_2_0 (ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    t = end_scope_1_0(e_83, t);
    return(t);
  }
  t = begin_scope_1_0(e_83, t);
  t = restore_always_2_0(f_83, j_3, t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_p_11;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,t_21 = NULL;
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_21);
  q_21 = t;
  t = term_r_14;
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_21), term_r_14);
  t = d_6(q_3, q_21, t_21, t);
  t = p_21;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_p_11;
  return(t);
}
ATerm f_6 (ATerm b_30, ATerm t)
{
  ATerm g_21 = NULL,j_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,a_11 = NULL;
  if(((g_21 != NULL) && (g_21 != t)))
    _fail(t);
  else
    g_21 = t;
  if(match_cons(t, sym_Scope_2))
    {
      if(((l_21 != NULL) && (l_21 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_21 = ATgetArgument(t, 0);
      if(((m_21 != NULL) && (m_21 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(g_21));
  if(((j_21 != NULL) && (j_21 != t)))
    _fail(t);
  else
    j_21 = t;
  t = not_null(m_21);
  {
    ATerm o_3 (ATerm t)
    {
      ATerm o_21 = NULL;
      o_21 = t;
      t = not_null(b_30);
      t = map_1_0(p_3, t);
      t = o_21;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(n_3, o_3, t);
    if(((n_21 != NULL) && (n_21 != t)))
      _fail(t);
    else
      n_21 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_21), not_null(n_21));
    if(((a_11 != NULL) && (a_11 != t)))
      _fail(t);
    else
      a_11 = t;
    t = SSLsetAnnotations(not_null(a_11), not_null(j_21));
  }
  return(t);
}
ATerm j_6 (ATerm e_32, ATerm f_32, ATerm t)
{
  ATerm u_21 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_32, f_32);
  t = v_6(e_32, f_32, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_21 = ATgetFirst((ATermList) t);
      {
        ATerm s_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_21;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL;
  v_23 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_5 = NULL,p_5 = NULL,q_5 = NULL,x_5 = NULL;
        t = term_p_11;
        x_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_11, v_23);
        t = j_6(x_5, v_23, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm d_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_15) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            m_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, w_23);
        p_5 = t;
        t = (ATerm) ATinsert(ATempty, m_5);
        q_5 = t;
        t = SSLsetAnnotations(p_5, q_5);
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = w_14;
        {
          ATerm e_15 = t;
          int f_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,w_7 = NULL;
              t = term_p_11;
              w_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_p_11, v_23);
              t = j_6(w_7, v_23, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm g_15 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) g_15) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                  m_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, w_23);
              n_7 = t;
              t = (ATerm) ATinsert(ATempty, m_7);
              o_7 = t;
              t = SSLsetAnnotations(n_7, o_7);
              ;
              LocalPopChoice(f_15);
            }
          else
            {
              t = e_15;
              {
                ATerm g_8 = NULL,l_8 = NULL,o_8 = NULL,x_8 = NULL;
                t = term_p_11;
                x_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_11, v_23);
                t = j_6(x_8, v_23, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm h_15 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) h_15) != ATmakeSymbol("c_0", 0, ATtrue)))
                      _fail(t);
                    g_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, w_23);
                l_8 = t;
                t = (ATerm) ATinsert(ATempty, g_8);
                o_8 = t;
                t = SSLsetAnnotations(l_8, o_8);
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm c_85 (ATerm), ATerm t)
{
  ATerm b_24 (ATerm t)
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_85(t);
        ;
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        t = SRTS_all(b_24, t);
      }
    return(t);
  }
  t = b_24(t);
  return(t);
}
ATerm g_6 (ATerm g_32, ATerm h_32, ATerm i_32, ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_32, h_32);
  t = v_6(g_32, h_32, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_15 = ATgetFirst((ATermList) t);
      i_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_24), i_32);
  k_24 = t;
  t = SSL_table_put(g_32, h_32, k_24);
  t = j_24;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,s_24 = NULL,w_24 = NULL;
  t = MarkVar_0_0(t);
  n_24 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_p_11;
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_24);
  s_24 = t;
  t = term_p_15;
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_11, (ATerm)ATmakeAppl(sym_Var_1, o_24), term_p_15);
  t = g_6(p_24, s_24, w_24, t);
  t = n_24;
  return(t);
}
ATerm k_6 (ATerm h_30, ATerm t)
{
  ATerm l_24 = NULL;
  t = h_30;
  t = alltd_1_0(r_3, t);
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, l_24);
  return(t);
}
ATerm mark_buv_0_0 (ATerm t)
{
  ATerm q_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_25 = NULL,o_25 = NULL;
      n_25 = t;
      if(match_cons(t, sym_Match_1))
        {
          o_25 = ATgetArgument(t, 0);
          t = n_25;
          t = k_6(o_25, t);
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              o_25 = ATgetArgument(t, 0);
              {
                ATerm c_9 = NULL,f_9 = NULL,c_11 = NULL;
                t = SSLgetAnnotations(n_25);
                c_9 = t;
                t = o_25;
                t = alltd_1_0(MarkVar_0_0, t);
                f_9 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, f_9);
                c_11 = t;
                t = SSLsetAnnotations(c_11, c_9);
              }
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  o_25 = ATgetArgument(t, 0);
                  {
                    ATerm t_15 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = n_25;
              t = f_6(o_25, t);
            }
        }
      ;
      LocalPopChoice(s_15);
    }
  else
    {
      t = q_15;
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_let_0_0(t);
            ;
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
            {
              ATerm w_15 = t;
              int x_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_traversal_0_0(t);
                  ;
                  LocalPopChoice(x_15);
                }
              else
                {
                  t = w_15;
                  {
                    ATerm y_15 = t;
                    int a_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_25 = NULL,e_26 = NULL;
                        w_25 = t;
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm b_16 = ATgetArgument(t, 0);
                            ATerm l_16 = ATgetArgument(t, 1);
                            e_26 = ATgetArgument(t, 2);
                            {
                              ATerm n_16 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = w_25;
                        t = b_6(e_26, t);
                        ;
                        LocalPopChoice(a_16);
                      }
                    else
                      {
                        t = y_15;
                        {
                          ATerm o_16 = t;
                          int r_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = mark_call_0_0(t);
                              ;
                              LocalPopChoice(r_16);
                            }
                          else
                            {
                              t = o_16;
                              {
                                ATerm s_16 = t;
                                int t_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_prim_0_0(t);
                                    ;
                                    LocalPopChoice(t_16);
                                  }
                                else
                                  {
                                    t = s_16;
                                    {
                                      ATerm u_16 = t;
                                      int v_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm n_26 = NULL;
                                          n_26 = t;
                                          if(match_cons(t, sym_Rec_2))
                                            {
                                              ATerm w_16 = ATgetArgument(t, 0);
                                              ATerm x_16 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = n_26;
                                          t = a_6(t);
                                          ;
                                          LocalPopChoice(v_16);
                                        }
                                      else
                                        {
                                          t = u_16;
                                          {
                                            ATerm y_16 = t;
                                            int z_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_choice_1_0(mark_buv_0_0, t);
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
                                                      t = mark_lchoice_1_0(mark_buv_0_0, t);
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
                                                            t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                            ;
                                                            LocalPopChoice(d_17);
                                                          }
                                                        else
                                                          {
                                                            t = c_17;
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
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
  n_27 = t;
  t = term_p_10;
  o_27 = t;
  t = (ATerm) ATinsert(ATempty, term_e_17);
  p_27 = t;
  t = SSL_printnl(o_27, p_27);
  t = n_27;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,y_27 = NULL,z_27 = NULL,n_11 = NULL;
  z_27 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_27);
  u_27 = t;
  t = v_27;
  t = map_1_0(mark_buv_0_0, t);
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, y_27);
  n_11 = t;
  t = SSLsetAnnotations(n_11, u_27);
  return(t);
}
ATerm c_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
  c_28 = t;
  t = term_p_10;
  d_28 = t;
  t = (ATerm) ATinsert(ATempty, term_f_17);
  e_28 = t;
  t = SSL_printnl(d_28, e_28);
  t = c_28;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm w_26 = NULL,a_27 = NULL,b_27 = NULL,d_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,h_13 = NULL,g_13 = NULL;
  t = if_verbose4_1_0(s_3, t);
  i_27 = t;
  if(match_cons(t, sym_Specification_1))
    {
      a_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_27);
  w_26 = t;
  t = a_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_27 = ATgetFirst((ATermList) t);
      f_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_27);
  b_27 = t;
  t = f_27;
  t = Cons_2_0(u_3, c_4, t);
  g_27 = t;
  t = (ATerm) ATinsert(CheckATermList(g_27), d_27);
  g_13 = t;
  t = SSLsetAnnotations(g_13, b_27);
  h_27 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_27);
  h_13 = t;
  t = SSLsetAnnotations(h_13, w_26);
  t = if_verbose4_1_0(g_4, t);
  return(t);
}
ATerm n_6 (ATerm u_52, ATerm v_52, ATerm t)
{
  ATerm i_28 = NULL;
  t = SSL_fputc(u_52, v_52);
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_28);
  return(t);
}
ATerm o_6 (ATerm i_56, ATerm j_56, ATerm t)
{
  ATerm k_28 = NULL;
  t = SSL_write_term_to_stream_text(i_56, j_56);
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_28);
  return(t);
}
ATerm q_6 (ATerm d_103 (ATerm), ATerm h_458, ATerm m_56, ATerm t)
{
  ATerm l_28 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_458, term_g_17);
  t = open_stream_0_0(t);
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_28, m_56);
  t = d_103(t);
  t = fclose_0_0(t);
  t = m_56;
  return(t);
}
ATerm p_6 (ATerm e_56, ATerm f_56, ATerm t)
{
  ATerm n_28 = NULL;
  t = SSL_write_term_to_stream_baf(e_56, f_56);
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_28);
  return(t);
}
ATerm t_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_17 = ATgetArgument(t, 0);
      if(match_cons(h_17, sym_Stream_1))
        {
          d_10 = ATgetArgument(h_17, 0);
        }
      else
        _fail(t);
      e_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(d_10, e_10, t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,i_11 = NULL,j_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_17 = ATgetArgument(t, 0);
      if(match_cons(o_17, sym_Stream_1))
        {
          i_11 = ATgetArgument(o_17, 0);
        }
      else
        _fail(t);
      j_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(i_11, j_11, t);
  e_11 = t;
  t = term_p_17;
  f_11 = t;
  t = e_11;
  if(match_cons(t, sym_Stream_1))
    {
      g_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_17, e_11);
  t = n_6(f_11, g_11, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,f_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,q_29 = NULL,j_33 = NULL,q_33 = NULL,u_17 = NULL,u_14 = NULL;
  if(((a_29 != NULL) && (a_29 != t)))
    _fail(t);
  else
    a_29 = t;
  if(match_cons(t, sym__2))
    {
      if(((l_29 != NULL) && (l_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_29 = ATgetArgument(t, 0);
      if(((m_29 != NULL) && (m_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(a_29));
  if(((k_29 != NULL) && (k_29 != t)))
    _fail(t);
  else
    k_29 = t;
  t = not_null(l_29);
  {
    ATerm q_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_4 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((z_28 != NULL) && (z_28 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(m_4, t);
        ;
        LocalPopChoice(t_17);
      }
    else
      {
        t = q_17;
        t = term_a_18;
        if(((z_28 != NULL) && (z_28 != t)))
          _fail(t);
        else
          z_28 = t;
      }
    if(((q_29 != NULL) && (q_29 != t)))
      _fail(t);
    else
      q_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_29), not_null(m_29));
    if(((u_14 != NULL) && (u_14 != t)))
      _fail(t);
    else
      u_14 = t;
    t = SSLsetAnnotations(not_null(u_14), not_null(k_29));
    t = not_null(a_29);
    if(match_cons(t, sym__2))
      {
        if(((c_29 != NULL) && (c_29 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          c_29 = ATgetArgument(t, 0);
        if(((d_29 != NULL) && (d_29 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          d_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(a_29));
    if(((b_29 != NULL) && (b_29 != t)))
      _fail(t);
    else
      b_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), (ATerm) ATmakeAppl(sym__2, not_null(z_28), not_null(d_29)));
    if(((u_17 != NULL) && (u_17 != t)))
      _fail(t);
    else
      u_17 = t;
    t = SSLsetAnnotations(not_null(u_17), not_null(b_29));
    if(((f_29 != NULL) && (f_29 != t)))
      _fail(t);
    else
      f_29 = t;
    if(match_cons(t, sym__2))
      {
        if(((j_33 != NULL) && (j_33 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          j_33 = ATgetArgument(t, 0);
        if(((q_33 != NULL) && (q_33 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          q_33 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm b_18 = t;
      int c_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,y_17 = NULL;
          t = SSLgetAnnotations(not_null(f_29));
          t_9 = t;
          t = not_null(j_33);
          t = fetch_1_0(t_4, t);
          z_9 = t;
          t = not_null(q_33);
          if(match_cons(t, sym__2))
            {
              b_10 = ATgetArgument(t, 0);
              c_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_6(e_5, b_10, c_10, t);
          a_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_9, a_10);
          y_17 = t;
          t = SSLsetAnnotations(y_17, t_9);
          ;
          LocalPopChoice(c_18);
        }
      else
        {
          t = b_18;
          {
            ATerm k_10 = NULL,o_10 = NULL,q_10 = NULL,r_10 = NULL,z_17 = NULL;
            t = SSLgetAnnotations(not_null(f_29));
            k_10 = t;
            t = not_null(q_33);
            if(match_cons(t, sym__2))
              {
                q_10 = ATgetArgument(t, 0);
                r_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_6(f_5, q_10, r_10, t);
            o_10 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_33), o_10);
            z_17 = t;
            t = SSLsetAnnotations(z_17, k_10);
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
ATerm apply_strategy_1_0 (ATerm p_104 (ATerm), ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL;
  d_34 = t;
  t = dtime_0_0(t);
  t = d_34;
  t = p_104(t);
  c_34 = t;
  t = dtime_0_0(t);
  z_33 = t;
  t = c_34;
  if(match_cons(t, sym__2))
    {
      a_34 = ATgetArgument(t, 0);
      b_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_34), (ATerm) ATmakeAppl(sym_Runtime_1, z_33)), b_34);
  return(t);
}
ATerm c_35 (ATerm u_34, ATerm t)
{
  t = SSL_fclose(u_34);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  y_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_34 = ATgetArgument(t, 0);
      {
        ATerm d_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_34);
            ;
            LocalPopChoice(j_18);
          }
        else
          {
            t = d_18;
            t = c_35(y_34, t);
          }
      }
    }
  else
    {
      t = c_35(y_34, t);
    }
  return(t);
}
ATerm r_6 (ATerm k_56, ATerm t)
{
  t = SSL_read_term_from_stream(k_56);
  return(t);
}
ATerm s_6 (ATerm w_52, ATerm x_52, ATerm t)
{
  ATerm e_35 = NULL;
  t = SSL_fopen(w_52, x_52);
  e_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_35);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_35 = NULL;
  t = SSL_stdin_stream();
  f_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_35);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_35 = NULL;
  t = SSL_stdout_stream();
  g_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_35);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_35 = NULL;
  t = SSL_stderr_stream();
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_35);
  return(t);
}
ATerm j_37 (ATerm a_36, ATerm t)
{
  ATerm b_36 = NULL;
  t = SSL_explode_term(a_36);
  if(match_cons(t, sym__2))
    {
      ATerm k_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_18 = ATgetArgument(t, 1);
        if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
          {
            b_36 = ATgetFirst((ATermList) s_18);
            {
              ATerm u_18 = (ATerm) ATgetNext((ATermList) s_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_36;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_36;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_36;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_36;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm k_37 (ATerm e_36, ATerm h_36, ATerm j_36, ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,p_36 = NULL,u_36 = NULL,g_18 = NULL;
  t = SSLgetAnnotations(j_36);
  p_36 = t;
  t = e_36;
  if(match_cons(t, sym_Path_1))
    {
      u_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_36, h_36);
  g_18 = t;
  t = SSLsetAnnotations(g_18, p_36);
  if(match_cons(t, sym__2))
    {
      k_36 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(k_36, l_36, t);
  return(t);
}
ATerm l_37 (ATerm w_36, ATerm x_36, ATerm y_36, ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,e_37 = NULL,i_18 = NULL;
  t = SSLgetAnnotations(y_36);
  b_37 = t;
  t = SSL_is_string(w_36);
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_37, x_36);
  i_18 = t;
  t = SSLsetAnnotations(i_18, b_37);
  if(match_cons(t, sym__2))
    {
      z_36 = ATgetArgument(t, 0);
      a_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(z_36, a_37, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_18 = ATgetArgument(t, 0);
      ATerm z_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  g_37 = t;
  if(match_cons(t, sym__2))
    {
      h_37 = ATgetArgument(t, 0);
      i_37 = ATgetArgument(t, 1);
      {
        ATerm e_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_37(g_37, t);
            ;
            LocalPopChoice(h_19);
          }
        else
          {
            t = e_19;
            {
              ATerm j_19 = t;
              int l_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_37(h_37, i_37, g_37, t);
                  ;
                  LocalPopChoice(l_19);
                }
              else
                {
                  t = j_19;
                  t = l_37(h_37, i_37, g_37, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_37(g_37, t);
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_37 = NULL;
      p_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_37, term_y_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      t = debug_1_0(i_5, t);
      _fail(t);
    }
  n_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(o_37, t);
  m_37 = t;
  t = n_37;
  t = fclose_0_0(t);
  t = m_37;
  return(t);
}
ATerm fetch_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  ATerm n_38 (ATerm t)
  {
    ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
    k_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_38 = ATgetFirst((ATermList) t);
        m_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_12 = NULL,o_12 = NULL,p_18 = NULL;
          t = SSLgetAnnotations(k_38);
          l_12 = t;
          t = l_38;
          t = k_87(t);
          o_12 = t;
          t = (ATerm) ATinsert(CheckATermList(m_38), o_12);
          p_18 = t;
          t = SSLsetAnnotations(p_18, l_12);
          ;
          LocalPopChoice(a_20);
        }
      else
        {
          t = z_19;
          {
            ATerm i_13 = NULL,m_13 = NULL,q_18 = NULL;
            t = SSLgetAnnotations(k_38);
            i_13 = t;
            t = m_38;
            t = n_38(t);
            m_13 = t;
            t = (ATerm) ATinsert(CheckATermList(m_13), l_38);
            q_18 = t;
            t = SSLsetAnnotations(q_18, i_13);
          }
        }
    }
    return(t);
  }
  t = n_38(t);
  return(t);
}
ATerm m_6 (ATerm m_50, ATerm n_50, ATerm t)
{
  t = SSL_strcat(m_50, n_50);
  return(t);
}
ATerm debug_1_0 (ATerm b_103 (ATerm), ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
  q_38 = t;
  t = b_103(t);
  r_38 = t;
  t = term_p_10;
  s_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_38), r_38);
  t_38 = t;
  t = SSL_printnl(s_38, t_38);
  t = q_38;
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_e_20;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_39 = NULL;
      a_39 = t;
      t = SSL_is_string(a_39);
      ;
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_5, t);
            ;
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            {
              ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
              g_39 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_39 = ATgetArgument(t, 0);
                  t = h_39;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_39 = ATgetArgument(t, 0);
                      t = h_39;
                      {
                        ATerm k_20 = t;
                        int l_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_20);
                          }
                        else
                          {
                            t = k_20;
                            t = debug_1_0(r_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_39 = NULL,n_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_39 = ATgetArgument(t, 0);
                          i_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_39;
                      t = eval_config_0_0(t);
                      m_39 = t;
                      t = i_39;
                      t = eval_config_0_0(t);
                      n_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_39, n_39);
                      t = m_6(m_39, n_39, t);
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
  ATerm r_39 = NULL,s_39 = NULL;
  r_39 = t;
  t = term_m_20;
  s_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_20, r_39);
  t = v_6(s_39, r_39, t);
  {
    ATerm n_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_39 = NULL,u_39 = NULL;
        t = eval_config_0_0(t);
        t_39 = t;
        t = term_m_20;
        u_39 = t;
        t = SSL_table_put(u_39, r_39, t_39);
        t = t_39;
        ;
        LocalPopChoice(p_20);
      }
    else
      {
        t = n_20;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_111 (ATerm), ATerm t)
{
  ATerm y_39 = NULL;
  y_39 = t;
  {
    ATerm r_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_40 = NULL;
        t = term_b_11;
        t = get_config_0_0(t);
        a_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_40, term_u_20);
        t = geq_0_0(t);
        t = y_39;
        t = t_111(t);
        ;
        LocalPopChoice(t_20);
      }
    else
      {
        t = r_20;
        t = y_39;
      }
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm d_40 = NULL;
  d_40 = t;
  if(match_string(t, "-k"))
    {
      t = d_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_40;
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
  e_40 = t;
  t = SSL_string_to_int(e_40);
  f_40 = t;
  t = term_w_20;
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, f_40);
  t = y_6(g_40, f_40, t);
  t = e_40;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_x_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_5, v_5, w_5, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm i_40 = NULL;
  i_40 = t;
  if(match_string(t, "-S"))
    {
      t = i_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_40;
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL;
  t = term_b_11;
  j_40 = t;
  t = term_y_20;
  k_40 = t;
  t = term_z_20;
  t = y_6(j_40, k_40, t);
  t = term_a_21;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm l_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  l_40 = t;
  t = SSL_string_to_int(l_40);
  m_40 = t;
  t = term_b_11;
  n_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_11, m_40);
  t = y_6(n_40, m_40, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_40);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_c_21;
  return(t);
}
ATerm s_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL;
  t = term_d_21;
  p_40 = t;
  t = term_n_10;
  q_40 = t;
  t = term_e_21;
  t = y_6(p_40, q_40, t);
  t = term_h_21;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_i_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_7, g_7, j_7, t);
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = k_21;
      {
        ATerm s_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_7, q_7, r_7, t);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = s_21;
            t = Option_3_0(s_7, v_7, z_7, t);
          }
      }
    }
  return(t);
}
ATerm y_6 (ATerm v_58, ATerm w_58, ATerm t)
{
  ATerm r_40 = NULL;
  t = term_m_20;
  r_40 = t;
  t = SSL_table_put(r_40, v_58, w_58);
  t = (ATerm) ATmakeAppl(sym__3, term_m_20, v_58, w_58);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
      t = term_n_10;
      t = d_0(t);
      w_40 = t;
      t = term_w_21;
      x_40 = t;
      t = term_x_21;
      y_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_21, term_x_21, w_40);
      t = w_6(x_40, y_40, w_40, t);
      _fail(t);
    }
  else
    {
      ATerm b_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_40 = ATgetFirst((ATermList) t);
          v_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_40;
      t = a_0(t);
      t = term_n_10;
      t = b_0(t);
      b_41 = t;
      t = (ATerm) ATinsert(CheckATermList(v_40), b_41);
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm d_41 = NULL;
  d_41 = t;
  if(match_string(t, "-o"))
    {
      t = d_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_41;
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL;
  e_41 = t;
  t = term_y_21;
  f_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_21, e_41);
  t = y_6(f_41, e_41, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_41);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_8, e_8, f_8, t);
  return(t);
}
ATerm w_6 (ATerm t_31, ATerm u_31, ATerm s_31, ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL;
  h_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_31, u_31);
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_22 = ATgetArgument(t, 0);
            ATerm d_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_31, u_31);
        t = v_6(t_31, u_31, t);
        ;
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        t = (ATerm) ATempty;
      }
    i_41 = t;
    t = (ATerm) ATinsert(CheckATermList(i_41), s_31);
    j_41 = t;
    t = SSL_table_put(t_31, u_31, j_41);
    t = h_41;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
      t = term_n_10;
      t = m_0(t);
      w_41 = t;
      t = term_w_21;
      x_41 = t;
      t = term_x_21;
      y_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_21, term_x_21, w_41);
      t = w_6(x_41, y_41, w_41, t);
      _fail(t);
    }
  else
    {
      ATerm c_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_41 = ATgetFirst((ATermList) t);
          t_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_41 = ATgetFirst((ATermList) t);
          v_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_41;
      t = i_0(t);
      t = u_41;
      t = k_0(t);
      c_42 = t;
      t = (ATerm) ATinsert(CheckATermList(v_41), c_42);
    }
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm e_42 = NULL;
  e_42 = t;
  if(match_string(t, "-i"))
    {
      t = e_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_42;
    }
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL;
  f_42 = t;
  t = term_e_22;
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_22, f_42);
  t = y_6(g_42, f_42, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_42);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_f_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_8, i_8, j_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_10;
  t = whoami_0_0(t);
  h_42 = t;
  t = term_p_10;
  j_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_22), h_42);
  k_42 = t;
  t = SSL_printnl(j_42, k_42);
  t = term_v_10;
  i_42 = t;
  t = SSL_exit(i_42);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_22;
  t = get_config_0_0(t);
  return(t);
}
ATerm t_6 (ATerm u_43, ATerm v_43, ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_43, v_43);
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      t = SSL_addr(u_43, v_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
  m_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_42;
      t = s_93(t);
    }
  else
    {
      ATerm r_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_42 = ATgetFirst((ATermList) t);
          o_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_42;
      t = foldr_2_0(s_93, t_93, t);
      r_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_42, r_42);
      t = t_93(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_y_20;
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm z_14 = NULL,c_15 = NULL;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      c_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(z_14, c_15, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_42 = NULL,k_14 = NULL,n_14 = NULL;
  t = times_0_0(t);
  n_14 = t;
  t = SSL_explode_term(n_14);
  if(match_cons(t, sym__2))
    {
      ATerm k_22 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_14;
  t = foldr_2_0(p_8, q_8, t);
  u_42 = t;
  t = SSL_TicksToSeconds(u_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
  f_43 = t;
  if(match_cons(t, sym__2))
    {
      g_43 = ATgetArgument(t, 0);
      h_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_43;
        if((g_43 != t))
          {
            _fail(t);
          }
        t = f_43;
        ;
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        t = (ATerm) ATmakeAppl(sym__2, g_43, h_43);
        {
          ATerm n_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_43, h_43);
              ;
              LocalPopChoice(o_22);
            }
          else
            {
              t = n_22;
              t = SSL_gtr(g_43, h_43);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_43, h_43);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_111 (ATerm), ATerm t)
{
  ATerm l_43 = NULL;
  l_43 = t;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_43 = NULL;
        t = term_b_11;
        t = get_config_0_0(t);
        n_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_43, term_v_10);
        t = geq_0_0(t);
        t = l_43;
        t = s_111(t);
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = l_43;
      }
  }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,s_43 = NULL,t_43 = NULL;
  t = run_time_0_0(t);
  p_43 = t;
  t = term_n_10;
  t = whoami_0_0(t);
  q_43 = t;
  t = term_p_10;
  s_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_22), p_43), term_r_22), q_43);
  t_43 = t;
  t = SSL_printnl(s_43, t_43);
  t = (ATerm) ATmakeAppl(sym__2, term_p_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_22), p_43), term_r_22), q_43));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_20;
  w_43 = t;
  t = SSL_exit(w_43);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL;
  f_44 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_44;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_44 = ATgetArgument(t, 0);
          {
            ATerm r_15 = NULL,v_18 = NULL;
            t = SSLgetAnnotations(f_44);
            r_15 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_44);
            v_18 = t;
            t = SSLsetAnnotations(v_18, r_15);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_44;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_105 (ATerm), ATerm t)
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      t = fetch_1_0(s_8, t);
    }
  t = n_105(t);
  return(t);
}
ATerm map_1_0 (ATerm a_87 (ATerm), ATerm t)
{
  ATerm v_44 (ATerm t)
  {
    ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
    s_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_44;
      }
    else
      {
        ATerm z_15 = NULL,g_16 = NULL,h_16 = NULL,y_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_44 = ATgetFirst((ATermList) t);
            u_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_44);
        z_15 = t;
        t = t_44;
        t = a_87(t);
        g_16 = t;
        t = u_44;
        t = v_44(t);
        h_16 = t;
        t = (ATerm) ATinsert(CheckATermList(h_16), g_16);
        y_18 = t;
        t = SSLsetAnnotations(y_18, z_15);
      }
    return(t);
  }
  t = v_44(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_44 = ATgetFirst((ATermList) t);
      z_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_45 = NULL,f_45 = NULL;
        ATerm t_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_45)), not_null(f_45));
          return(t);
        }
        t = not_null(z_44);
        t = g_0(t);
        if(((e_45 != NULL) && (e_45 != t)))
          _fail(t);
        else
          e_45 = t;
        t = not_null(y_44);
        t = f_0(t);
        if(((f_45 != NULL) && (f_45 != t)))
          _fail(t);
        else
          f_45 = t;
        t = not_null(z_44);
        t = reverse_acc_2_0(f_0, t_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_10;
      t = g_0(t);
    }
  return(t);
}
ATerm v_6 (ATerm k_33, ATerm l_33, ATerm t)
{
  t = SSL_table_get(k_33, l_33);
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL,d_19 = NULL;
  l_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_45);
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_45);
  d_19 = t;
  t = SSLsetAnnotations(d_19, j_45);
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm n_45 = NULL;
  n_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_45), term_w_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL;
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      t = fetch_1_0(u_8, t);
    }
  t = term_z_22;
  t = echo_0_0(t);
  t = term_w_21;
  h_45 = t;
  t = term_x_21;
  i_45 = t;
  t = term_a_23;
  t = v_6(h_45, i_45, t);
  t = reverse_acc_2_0(_id, v_8, t);
  t = map_1_0(z_8, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
  p_45 = t;
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_45;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_23 = ATgetFirst((ATermList) t);
                ATerm e_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_45;
          }
        ;
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        t = (ATerm) ATinsert(ATempty, p_45);
      }
    q_45 = t;
    t = term_a_18;
    r_45 = t;
    t = SSL_printnl(r_45, q_45);
    t = p_45;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_22;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm a_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL;
  t = term_f_23;
  v_45 = t;
  t = term_n_10;
  w_45 = t;
  t = term_g_23;
  t = y_6(v_45, w_45, t);
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm e_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL;
  t = term_f_23;
  z_45 = t;
  t = term_n_10;
  a_46 = t;
  t = term_g_23;
  t = y_6(z_45, a_46, t);
  t = term_i_23;
  x_45 = t;
  t = term_n_10;
  y_45 = t;
  t = term_j_23;
  t = y_6(x_45, y_45, t);
  t = term_k_23;
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_9, b_9, d_9, t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      t = Option_3_0(e_9, g_9, i_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_69 (ATerm), ATerm s_69 (ATerm), ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,f_19 = NULL;
  g_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_46 = ATgetFirst((ATermList) t);
      d_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_46);
  b_46 = t;
  t = c_46;
  t = r_69(t);
  e_46 = t;
  t = d_46;
  t = s_69(t);
  f_46 = t;
  t = (ATerm) ATinsert(CheckATermList(f_46), e_46);
  f_19 = t;
  t = SSLsetAnnotations(f_19, b_46);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_108 (ATerm), ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,q_46 = NULL,r_46 = NULL,i_19 = NULL;
  if(((l_46 != NULL) && (l_46 != t)))
    _fail(t);
  else
    l_46 = t;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_23;
        t = s_108(t);
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
      }
    t = not_null(l_46);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((n_46 != NULL) && (n_46 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          n_46 = ATgetFirst((ATermList) t);
        if(((o_46 != NULL) && (o_46 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          o_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(l_46));
    if(((m_46 != NULL) && (m_46 != t)))
      _fail(t);
    else
      m_46 = t;
    t = term_h_22;
    if(((r_46 != NULL) && (r_46 != t)))
      _fail(t);
    else
      r_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_22, not_null(n_46));
    t = y_6(not_null(r_46), not_null(n_46), t);
    t = not_null(o_46);
    {
      ATerm b_47 (ATerm t)
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_23 = t;
            int u_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_46 = NULL;
                u_46 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = u_46;
                ;
                LocalPopChoice(u_23);
              }
            else
              {
                t = t_23;
                t = s_108(t);
                t = Cons_2_0(_id, b_47, t);
              }
            ;
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            {
              ATerm x_46 = NULL,y_46 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_46 = ATgetFirst((ATermList) t);
                  y_46 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_46), (ATerm) ATmakeAppl(sym_Undefined_1, x_46));
            }
          }
        return(t);
      }
      t = b_47(t);
      if(((q_46 != NULL) && (q_46 != t)))
        _fail(t);
      else
        q_46 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(q_46)), (ATerm) ATmakeAppl(sym_Program_1, not_null(n_46)));
      if(((i_19 != NULL) && (i_19 != t)))
        _fail(t);
      else
        i_19 = t;
      t = SSLsetAnnotations(not_null(i_19), not_null(m_46));
    }
  }
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm n_47 = NULL;
  n_47 = t;
  if(match_string(t, "--help"))
    {
      t = n_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_47;
        }
    }
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL;
  t = term_v_22;
  o_47 = t;
  t = term_n_10;
  p_47 = t;
  t = term_x_23;
  t = y_6(o_47, p_47, t);
  t = term_y_23;
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm r_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_108 (ATerm), ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL;
  if(((i_47 != NULL) && (i_47 != t)))
    _fail(t);
  else
    i_47 = t;
  t = term_w_21;
  if(((k_47 != NULL) && (k_47 != t)))
    _fail(t);
  else
    k_47 = t;
  t = term_x_21;
  if(((l_47 != NULL) && (l_47 != t)))
    _fail(t);
  else
    l_47 = t;
  t = (ATerm) ATempty;
  if(((m_47 != NULL) && (m_47 != t)))
    _fail(t);
  else
    m_47 = t;
  t = SSL_table_put(not_null(k_47), not_null(l_47), not_null(m_47));
  t = not_null(i_47);
  {
    ATerm j_9 (ATerm t)
    {
      ATerm a_24 = t;
      int c_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_108(t);
          ;
          LocalPopChoice(c_24);
        }
      else
        {
          t = a_24;
          {
            ATerm d_24 = t;
            int e_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_9, n_9, o_9, t);
                ;
                LocalPopChoice(e_24);
              }
            else
              {
                t = d_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_9, t);
    {
      ATerm f_24 = t;
      int g_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_47 = NULL;
          w_47 = t;
          {
            ATerm h_24 = t;
            int m_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_17 = NULL;
                t = w_47;
                {
                  ATerm q_24 = t;
                  int r_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_v_22;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(r_24);
                    }
                  else
                    {
                      t = q_24;
                      t = fetch_1_0(r_9, t);
                    }
                  t = w_47;
                  t = default_system_usage_0_0(t);
                  t = term_y_20;
                  k_17 = t;
                  t = SSL_exit(k_17);
                }
                ;
                LocalPopChoice(m_24);
              }
            else
              {
                t = h_24;
                {
                  ATerm s_17 = NULL;
                  t = term_f_23;
                  t = get_config_0_0(t);
                  t = w_47;
                  t = default_system_about_0_0(t);
                  t = term_y_20;
                  s_17 = t;
                  t = SSL_exit(s_17);
                }
              }
          }
          ;
          LocalPopChoice(g_24);
        }
      else
        {
          t = f_24;
          {
            ATerm t_24 = t;
            int u_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
                ATerm s_9 (ATerm t)
                {
                  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL,k_19 = NULL;
                  c_48 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      b_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(c_48);
                  a_48 = t;
                  t = b_48;
                  if(((g_47 != NULL) && (g_47 != t)))
                    _fail(t);
                  else
                    g_47 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, b_48);
                  k_19 = t;
                  t = SSLsetAnnotations(k_19, a_48);
                  return(t);
                }
                t = fetch_1_0(s_9, t);
                t = term_p_10;
                if(((y_47 != NULL) && (y_47 != t)))
                  _fail(t);
                else
                  y_47 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_47)), term_v_24);
                if(((z_47 != NULL) && (z_47 != t)))
                  _fail(t);
                else
                  z_47 = t;
                t = SSL_printnl(not_null(y_47), not_null(z_47));
                t = (ATerm) ATmakeAppl(sym__2, term_p_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_47)), term_v_24));
                t = default_system_usage_0_0(t);
                t = term_v_10;
                if(((x_47 != NULL) && (x_47 != t)))
                  _fail(t);
                else
                  x_47 = t;
                t = SSL_exit(not_null(x_47));
                ;
                LocalPopChoice(u_24);
              }
            else
              {
                t = t_24;
              }
          }
        }
      if(((h_47 != NULL) && (h_47 != t)))
        _fail(t);
      else
        h_47 = t;
      t = term_w_21;
      if(((j_47 != NULL) && (j_47 != t)))
        _fail(t);
      else
        j_47 = t;
      t = SSL_table_destroy(not_null(j_47));
      t = not_null(h_47);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
  t = parse_options_1_0(p_105, t);
  h_48 = t;
  t = term_x_24;
  k_48 = t;
  t = SSL_table_create(k_48);
  t = term_x_24;
  i_48 = t;
  t = term_y_24;
  j_48 = t;
  t = SSL_table_put(i_48, j_48, h_48);
  t = h_48;
  t = r_105(t);
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_105, t);
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        {
          ATerm b_25 = t;
          int c_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_105(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_25);
            }
          else
            {
              t = b_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = if_verbose2_1_0(j_10, t);
  return(t);
}
ATerm g_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL;
  t = term_d_25;
  l_48 = t;
  t = term_n_10;
  m_48 = t;
  t = term_e_25;
  t = y_6(l_48, m_48, t);
  t = term_f_25;
  return(t);
}
ATerm i_10 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
  n_48 = t;
  t = term_h_22;
  t = get_config_0_0(t);
  o_48 = t;
  t = term_p_10;
  p_48 = t;
  t = (ATerm) ATinsert(ATempty, o_48);
  q_48 = t;
  t = SSL_printnl(p_48, q_48);
  t = n_48;
  return(t);
}
ATerm iowrap_3_0 (ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm t)
{
  ATerm v_9 (ATerm t)
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_104(t);
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        {
          ATerm j_25 = t;
          int k_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(k_25);
            }
          else
            {
              t = j_25;
              {
                ATerm l_25 = t;
                int m_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(m_25);
                  }
                else
                  {
                    t = l_25;
                    {
                      ATerm p_25 = t;
                      int q_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(g_10, h_10, i_10, t);
                          ;
                          LocalPopChoice(q_25);
                        }
                      else
                        {
                          t = p_25;
                          {
                            ATerm r_25 = t;
                            int s_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(s_25);
                              }
                            else
                              {
                                t = r_25;
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
  ATerm f_10 (ATerm t)
  {
    ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
    if(((s_48 != NULL) && (s_48 != t)))
      _fail(t);
    else
      s_48 = t;
    {
      ATerm t_25 = t;
      int u_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_10 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_48 != NULL) && (r_48 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_48 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_10, t);
          ;
          LocalPopChoice(u_25);
        }
      else
        {
          t = t_25;
          t = term_v_25;
          if(((r_48 != NULL) && (r_48 != t)))
            _fail(t);
          else
            r_48 = t;
        }
      t = not_null(r_48);
      t = ReadFromFile_0_0(t);
      if(((t_48 != NULL) && (t_48 != t)))
        _fail(t);
      else
        t_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_48), not_null(t_48));
      t = apply_strategy_1_0(y_104, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(v_9, a_105, y_9, f_10, t);
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,o_19 = NULL;
  y_48 = t;
  if(match_cons(t, sym__2))
    {
      v_48 = ATgetArgument(t, 0);
      w_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_48);
  u_48 = t;
  t = w_48;
  t = mark_bound_unbound_vars_0_0(t);
  x_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_48, x_48);
  o_19 = t;
  t = SSLsetAnnotations(o_19, u_48);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(m_10, _fail, default_usage_0_0, t);
  return(t);
}
