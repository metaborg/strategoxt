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
ATerm term_q_24;
ATerm term_n_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_z_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_s_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_t_17;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_u_16;
ATerm term_n_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
void init_constant_terms (void)
{
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Defined_2, term_k_11, term_l_11);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Defined_2, term_w_13, term_x_13);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Defined_2, term_u_14, term_l_11);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__3, term_d_18, term_p_20, term_u_10);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose4_1_0 (ATerm r_111 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm y_74 (ATerm), ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm);
ATerm mark_guardedlchoice_1_0 (ATerm t_82 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm u_74 (ATerm), ATerm v_74 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm s_82 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm r_82 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm);
ATerm mark_rec_0_0 (ATerm);
ATerm PrimT_3_0 (ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm Call_2_0 (ATerm g_74 (ATerm), ATerm h_74 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm w_76 (ATerm), ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm c_4 (ATerm);
ATerm mark_sdef_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm Let_2_0 (ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm c_13 (ATerm p_11, ATerm t_11, ATerm v_11, ATerm x_11, ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm assert_1_0 (ATerm c_83 (ATerm), ATerm);
ATerm table_pop_rm_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm z_82 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm y_82 (ATerm), ATerm);
ATerm scope_2_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm o_74 (ATerm), ATerm p_74 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm alltd_1_0 (ATerm y_84 (ATerm), ATerm);
ATerm Build_1_0 (ATerm m_74 (ATerm), ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm y_5 (ATerm);
ATerm mark_match_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm r_69 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm w_69 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm mark_bound_unbound_vars_0_0 (ATerm);
ATerm _2_0 (ATerm y_64 (ATerm), ATerm z_64 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm z_102 (ATerm), ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm u_6 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_104 (ATerm), ATerm);
ATerm z_24 (ATerm t_24, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm d_7 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm g_87 (ATerm), ATerm);
ATerm debug_1_0 (ATerm x_102 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_111 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm p_7 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm s_7 (ATerm);
ATerm y_7 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm p_8 (ATerm);
ATerm r_8 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_111 (ATerm), ATerm);
ATerm d_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm e_9 (ATerm);
ATerm need_help_1_0 (ATerm j_105 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_86 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm k_82 (ATerm), ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm n_9 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm l_82 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm v_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm b_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm);
ATerm c_10 (ATerm);
ATerm parse_options_p__1_0 (ATerm o_108 (ATerm), ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm parse_options_1_0 (ATerm n_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm);
ATerm m_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm iowrap_3_0 (ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm);
ATerm t_10 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL,h_1 = NULL,m_1 = NULL,p_1 = NULL;
  u_0 = t;
  t = term_u_10;
  t = whoami_0_0(t);
  v_0 = t;
  t = term_v_10;
  h_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_10), v_0), term_w_10);
  m_1 = t;
  t = SSL_printnl(h_1, m_1);
  t = term_y_10;
  p_1 = t;
  t = SSL_exit(p_1);
  t = u_0;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm r_111 (ATerm), ATerm t)
{
  ATerm z_10 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 = NULL,x_1 = NULL;
      t_1 = t;
      t = term_c_11;
      t = get_config_0_0(t);
      x_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_1, term_d_11);
      t = geq_0_0(t);
      t = t_1;
      t = r_111(t);
      ;
      LocalPopChoice(b_11);
    }
  else
    {
      t = z_10;
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm y_74 (ATerm), ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,i_2 = NULL,j_2 = NULL,n_0 = NULL,p_0 = NULL;
  j_2 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      c_2 = ATgetArgument(t, 0);
      d_2 = ATgetArgument(t, 1);
      e_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_2);
  z_1 = t;
  t = c_2;
  t = y_74(t);
  f_2 = t;
  t = d_2;
  t = z_74(t);
  g_2 = t;
  t = e_2;
  t = a_75(t);
  i_2 = t;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, f_2, g_2, i_2);
  n_0 = t;
  t = SSLsetAnnotations(n_0, z_1);
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, _id, t);
  {
    ATerm y_2 (ATerm t)
    {
      t = GuardedLChoice_3_0(t_82, _id, _id, t);
      t = GuardedLChoice_3_0(_id, t_82, _id, t);
      return(t);
    }
    ATerm d_3 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, _id, t_82, t);
      return(t);
    }
    t = abstract_choice_2_0(y_2, d_3, t);
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm u_74 (ATerm), ATerm v_74 (ATerm), ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,q_0 = NULL,s_0 = NULL;
  t_2 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      o_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_2);
  n_2 = t;
  t = o_2;
  t = u_74(t);
  r_2 = t;
  t = q_2;
  t = v_74(t);
  s_2 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, r_2, s_2);
  q_0 = t;
  t = SSLsetAnnotations(q_0, n_2);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm s_82 (ATerm), ATerm t)
{
  t = LChoice_2_0(_id, _id, t);
  {
    ATerm f_3 (ATerm t)
    {
      t = LChoice_2_0(s_82, _id, t);
      return(t);
    }
    ATerm j_3 (ATerm t)
    {
      t = LChoice_2_0(_id, s_82, t);
      return(t);
    }
    t = abstract_choice_2_0(f_3, j_3, t);
  }
  return(t);
}
ATerm Choice_2_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,e_3 = NULL,l_3 = NULL,t_0 = NULL,x_0 = NULL;
  l_3 = t;
  if(match_cons(t, sym_Choice_2))
    {
      a_3 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_3);
  z_2 = t;
  t = a_3;
  t = s_73(t);
  c_3 = t;
  t = b_3;
  t = t_73(t);
  e_3 = t;
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, c_3, e_3);
  t_0 = t;
  t = SSLsetAnnotations(t_0, z_2);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t)
{
  ATerm x_3 = NULL,b_4 = NULL,e_4 = NULL,f_4 = NULL,h_4 = NULL,i_4 = NULL;
  x_3 = t;
  t = save_MarkVar_0_0(t);
  b_4 = t;
  t = x_3;
  t = u_82(t);
  e_4 = t;
  t = save_MarkVar_0_0(t);
  f_4 = t;
  t = term_e_11;
  h_4 = t;
  t = SSL_table_destroy(h_4);
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, b_4);
  t = table_putlist_0_0(t);
  t = e_4;
  t = v_82(t);
  i_4 = t;
  t = f_4;
  t = isect_MarkVar_0_0(t);
  t = i_4;
  return(t);
}
ATerm mark_choice_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  t = Choice_2_0(_id, _id, t);
  {
    ATerm k_3 (ATerm t)
    {
      t = Choice_2_0(r_82, _id, t);
      return(t);
    }
    ATerm m_3 (ATerm t)
    {
      t = Choice_2_0(_id, r_82, t);
      return(t);
    }
    t = abstract_choice_2_0(k_3, m_3, t);
  }
  return(t);
}
ATerm Rec_2_0 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,y_0 = NULL,z_0 = NULL;
  p_4 = t;
  if(match_cons(t, sym_Rec_2))
    {
      l_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_4);
  j_4 = t;
  t = l_4;
  t = b_75(t);
  n_4 = t;
  t = m_4;
  t = c_75(t);
  o_4 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, n_4, o_4);
  y_0 = t;
  t = SSLsetAnnotations(y_0, j_4);
  return(t);
}
ATerm mark_rec_0_0 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL;
  if(match_cons(t, sym_Rec_2))
    {
      ATerm f_11 = ATgetArgument(t, 0);
      ATerm g_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t_4 = t;
  t = save_MarkVar_0_0(t);
  u_4 = t;
  t = t_4;
  t = Rec_2_0(_id, mark_buv_0_0, t);
  t = u_4;
  t = isect_MarkVar_0_0(t);
  t = t_4;
  t = Rec_2_0(_id, mark_buv_0_0, t);
  return(t);
}
ATerm PrimT_3_0 (ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,c_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,a_1 = NULL,b_1 = NULL;
  h_5 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      w_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
      c_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_5);
  v_4 = t;
  t = w_4;
  t = k_75(t);
  e_5 = t;
  t = x_4;
  t = l_75(t);
  f_5 = t;
  t = c_5;
  t = m_75(t);
  g_5 = t;
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, e_5, f_5, g_5);
  a_1 = t;
  t = SSLsetAnnotations(a_1, v_4);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = map_1_0(q_3, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL;
  t = PrimT_3_0(_id, _id, _id, t);
  n_5 = t;
  t = save_MarkVar_0_0(t);
  o_5 = t;
  t = n_5;
  t = PrimT_3_0(_id, _id, p_3, t);
  t = PrimT_3_0(_id, mark_buv_0_0, _id, t);
  p_5 = t;
  t = o_5;
  t = isect_MarkVar_0_0(t);
  t = p_5;
  return(t);
}
ATerm Call_2_0 (ATerm g_74 (ATerm), ATerm h_74 (ATerm), ATerm t)
{
  ATerm q_5 = NULL,s_5 = NULL,t_5 = NULL,w_5 = NULL,x_5 = NULL,b_6 = NULL,c_1 = NULL,d_1 = NULL;
  b_6 = t;
  if(match_cons(t, sym_Call_2))
    {
      s_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_6);
  q_5 = t;
  t = s_5;
  t = g_74(t);
  w_5 = t;
  t = t_5;
  t = h_74(t);
  x_5 = t;
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, w_5, x_5);
  c_1 = t;
  t = SSLsetAnnotations(c_1, q_5);
  return(t);
}
ATerm CallT_3_0 (ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,e_1 = NULL,f_1 = NULL;
  a_7 = t;
  if(match_cons(t, sym_CallT_3))
    {
      t_6 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
      w_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_7);
  s_6 = t;
  t = t_6;
  t = i_74(t);
  x_6 = t;
  t = v_6;
  t = j_74(t);
  y_6 = t;
  t = w_6;
  t = k_74(t);
  z_6 = t;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, x_6, y_6, z_6);
  e_1 = t;
  t = SSLsetAnnotations(e_1, s_6);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = map_1_0(s_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_7 = NULL,n_7 = NULL,o_7 = NULL;
      t = CallT_3_0(_id, _id, _id, t);
      l_7 = t;
      t = save_MarkVar_0_0(t);
      n_7 = t;
      t = l_7;
      t = CallT_3_0(_id, _id, r_3, t);
      t = CallT_3_0(_id, mark_buv_0_0, _id, t);
      o_7 = t;
      t = n_7;
      t = isect_MarkVar_0_0(t);
      t = o_7;
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm q_7 = NULL,r_7 = NULL,t_7 = NULL;
        t = Call_2_0(_id, _id, t);
        q_7 = t;
        t = save_MarkVar_0_0(t);
        r_7 = t;
        t = q_7;
        t = Call_2_0(_id, mark_buv_0_0, t);
        t_7 = t;
        t = r_7;
        t = isect_MarkVar_0_0(t);
        t = t_7;
      }
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm w_76 (ATerm), ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,g_1 = NULL,i_1 = NULL;
  g_8 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      w_7 = ATgetArgument(t, 0);
      z_7 = ATgetArgument(t, 1);
      a_8 = ATgetArgument(t, 2);
      b_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_8);
  v_7 = t;
  t = w_7;
  t = w_76(t);
  c_8 = t;
  t = z_7;
  t = x_76(t);
  d_8 = t;
  t = a_8;
  t = y_76(t);
  e_8 = t;
  t = b_8;
  t = z_76(t);
  f_8 = t;
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, c_8, d_8, e_8, f_8);
  g_1 = t;
  t = SSLsetAnnotations(g_1, v_7);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm o_8 = NULL,q_8 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      o_8 = ATgetArgument(t, 0);
      {
        ATerm j_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_8), term_m_11);
  t = assert_1_0(c_4, t);
  t = q_8;
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm mark_sdef_0_0 (ATerm t)
{
  ATerm k_8 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm q_11 = ATgetArgument(t, 0);
      ATerm r_11 = ATgetArgument(t, 1);
      k_8 = ATgetArgument(t, 2);
      {
        ATerm s_11 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm t_3 (ATerm t)
    {
      ATerm v_3 (ATerm t)
      {
        ATerm n_8 = NULL;
        n_8 = t;
        t = k_8;
        t = map_1_0(w_3, t);
        t = n_8;
        t = mark_buv_0_0(t);
        return(t);
      }
      t = scope_2_0(u_3, v_3, t);
      return(t);
    }
    t = SDefT_4_0(_id, _id, _id, t_3, t);
  }
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
  x_8 = t;
  {
    ATerm u_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm y_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_11);
        t = x_8;
      }
    else
      {
        t = u_11;
        {
          ATerm z_11 = t;
          int a_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm b_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(a_12);
              t = x_8;
            }
          else
            {
              t = z_11;
              {
                ATerm c_12 = t;
                int d_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm e_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(d_12);
                    t = x_8;
                  }
                else
                  {
                    t = c_12;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm f_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = x_8;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    v_8 = t;
    t = x_8;
    t = SRTS_one(mark_buv_0_0, t);
    w_8 = t;
    t = v_8;
    t = isect_MarkVar_0_0(t);
    t = w_8;
  }
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  ATerm j_0 = NULL;
  t = term_e_11;
  j_0 = t;
  t = SSL_table_keys(j_0);
  {
    ATerm d_4 (ATerm t)
    {
      ATerm l_0 = NULL,o_0 = NULL;
      l_0 = t;
      t = SSL_table_get(j_0, l_0);
      o_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_0, o_0);
      return(t);
    }
    t = map_1_0(d_4, t);
  }
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm g_9 = NULL,k_9 = NULL;
  if(match_cons(t, sym__2))
    {
      k_9 = ATgetArgument(t, 0);
      g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_9;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm l_9 = NULL,m_9 = NULL;
      if(match_cons(t, sym__2))
        {
          l_9 = ATgetArgument(t, 0);
          m_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_table_put(k_9, l_9, m_9);
      t = (ATerm) ATmakeAppl(sym__3, k_9, l_9, m_9);
      return(t);
    }
    t = map_1_0(g_4, t);
  }
  return(t);
}
ATerm Let_2_0 (ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm t)
{
  ATerm p_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,x_9 = NULL,a_10 = NULL,j_1 = NULL,k_1 = NULL;
  a_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_10);
  p_9 = t;
  t = s_9;
  t = e_74(t);
  u_9 = t;
  t = t_9;
  t = f_74(t);
  x_9 = t;
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, u_9, x_9);
  j_1 = t;
  t = SSLsetAnnotations(j_1, p_9);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,a_13 = NULL,b_13 = NULL;
      s_12 = t;
      if(match_cons(t, sym__2))
        {
          t_12 = ATgetArgument(t, 0);
          u_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_12 = ATgetFirst((ATermList) t);
          b_13 = (ATerm) ATgetNext((ATermList) t);
          t = v_12;
          {
            ATerm i_12 = t;
            int j_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm k_12 = ATgetArgument(t, 0);
                    a_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(j_12);
                t = t_12;
                if(match_cons(t, sym_Scopes_0))
                  {
                    ATerm l_12 = t;
                    int m_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = s_12;
                        ;
                        LocalPopChoice(m_12);
                      }
                    else
                      {
                        t = l_12;
                        t = c_13(t_12, a_13, b_13, s_12, t);
                      }
                  }
                else
                  {
                    t = c_13(t_12, a_13, b_13, s_12, t);
                  }
              }
            else
              {
                t = i_12;
                t = t_12;
                if(!(match_cons(t, sym_Scopes_0)))
                  _fail(t);
                t = s_12;
              }
          }
        }
      else
        {
          t = t_12;
          if(!(match_cons(t, sym_Scopes_0)))
            _fail(t);
          t = s_12;
        }
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
    }
  return(t);
}
ATerm c_13 (ATerm p_11, ATerm t_11, ATerm v_11, ATerm x_11, ATerm t)
{
  t = x_11;
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_0 = NULL;
        t = term_e_11;
        r_0 = t;
        t = SSL_table_get(r_0, p_11);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_12 = ATgetFirst((ATermList) t);
            if(match_cons(p_12, sym_Defined_2))
              {
                ATerm r_12 = ATgetArgument(p_12, 0);
                if((t_11 != ATgetArgument(p_12, 1)))
                  {
                    _fail(ATgetArgument(p_12, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm q_12 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = x_11;
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        t = (ATerm) ATmakeAppl(sym__2, p_11, (ATerm) ATinsert(CheckATermList(v_11), term_w_12));
      }
  }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm a_11 = NULL,n_11 = NULL,o_11 = NULL;
  a_11 = t;
  t = save_MarkVar_0_0(t);
  t = a_11;
  t = map_1_0(r_4, t);
  n_11 = t;
  t = term_e_11;
  o_11 = t;
  t = SSL_table_destroy(o_11);
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, n_11);
  t = table_putlist_0_0(t);
  t = n_11;
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,m_13 = NULL;
  t = Let_2_0(_id, _id, t);
  g_13 = t;
  t = save_MarkVar_0_0(t);
  h_13 = t;
  t = g_13;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm z_4 (ATerm t)
      {
        ATerm n_13 = NULL;
        t = mark_buv_0_0(t);
        n_13 = t;
        t = h_13;
        t = isect_MarkVar_0_0(t);
        t = n_13;
        return(t);
      }
      t = map_1_0(z_4, t);
      return(t);
    }
    ATerm y_4 (ATerm t)
    {
      ATerm o_13 = NULL;
      t = mark_buv_0_0(t);
      o_13 = t;
      t = h_13;
      t = isect_MarkVar_0_0(t);
      t = o_13;
      return(t);
    }
    t = Let_2_0(s_4, y_4, t);
    t = g_13;
    t = save_MarkVar_0_0(t);
    i_13 = t;
    t = g_13;
    {
      ATerm a_5 (ATerm t)
      {
        ATerm d_5 (ATerm t)
        {
          ATerm r_13 = NULL,s_13 = NULL;
          r_13 = t;
          t = term_e_11;
          s_13 = t;
          t = SSL_table_destroy(s_13);
          t = (ATerm) ATmakeAppl(sym__2, term_e_11, i_13);
          t = table_putlist_0_0(t);
          t = r_13;
          t = mark_buv_0_0(t);
          return(t);
        }
        t = map_1_0(d_5, t);
        return(t);
      }
      ATerm b_5 (ATerm t)
      {
        ATerm y_13 = NULL,b_14 = NULL;
        y_13 = t;
        t = term_e_11;
        b_14 = t;
        t = SSL_table_destroy(b_14);
        t = (ATerm) ATmakeAppl(sym__2, term_e_11, i_13);
        t = table_putlist_0_0(t);
        t = y_13;
        t = mark_buv_0_0(t);
        return(t);
      }
      t = Let_2_0(a_5, b_5, t);
      m_13 = t;
      t = save_MarkVar_0_0(t);
      t = m_13;
    }
  }
  return(t);
}
ATerm assert_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,g_14 = NULL,n_14 = NULL,q_14 = NULL,x_14 = NULL,a_15 = NULL;
  if(match_cons(t, sym__2))
    {
      c_14 = ATgetArgument(t, 0);
      d_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_83(t);
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_14, c_14, d_14);
  t = table_push_0_0(t);
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_15 = NULL;
        t = term_z_12;
        e_15 = t;
        t = SSL_table_get(g_14, e_15);
        ;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_14 = ATgetFirst((ATermList) t);
        q_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_z_12;
    x_14 = t;
    t = (ATerm) ATinsert(CheckATermList(q_14), (ATerm) ATinsert(CheckATermList(n_14), c_14));
    a_15 = t;
    t = SSL_table_put(g_14, x_14, a_15);
    t = (ATerm) ATmakeAppl(sym__2, c_14, d_14);
  }
  return(t);
}
ATerm table_pop_rm_0_0 (ATerm t)
{
  ATerm n_15 = NULL,s_15 = NULL,w_15 = NULL;
  if(match_cons(t, sym__2))
    {
      n_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_15, s_15);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_13 = ATgetFirst((ATermList) t);
            w_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(e_13);
        t = SSL_table_put(n_15, s_15, w_15);
        t = (ATerm) ATmakeAppl(sym__3, n_15, s_15, w_15);
      }
    else
      {
        t = d_13;
        t = SSL_table_remove(n_15, s_15);
        t = (ATerm) ATmakeAppl(sym__2, n_15, s_15);
      }
    t = (ATerm) ATmakeAppl(sym__2, n_15, s_15);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,e_16 = NULL;
  x_15 = t;
  t = z_82(t);
  y_15 = t;
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_16 = NULL;
        t = term_z_12;
        f_16 = t;
        t = SSL_table_get(y_15, f_16);
        ;
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_16 = ATgetFirst((ATermList) t);
        z_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_z_12;
    e_16 = t;
    t = SSL_table_put(y_15, e_16, z_15);
    t = a_16;
    {
      ATerm i_5 (ATerm t)
      {
        ATerm g_16 = NULL;
        g_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_15, g_16);
        t = table_pop_rm_0_0(t);
        return(t);
      }
      t = map_1_0(i_5, t);
      t = x_15;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm t)
{
  ATerm l_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_95(t);
      t = v_95(t);
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = l_13;
      t = v_95(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm m_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
  m_16 = t;
  t = y_82(t);
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_16, term_z_12);
  {
    ATerm q_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_0 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_13 = ATgetArgument(t, 0);
            ATerm v_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_z_12;
        w_0 = t;
        t = SSL_table_get(q_16, w_0);
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = q_13;
        t = (ATerm) ATempty;
      }
    r_16 = t;
    t = term_z_12;
    s_16 = t;
    t = (ATerm) ATinsert(CheckATermList(r_16), (ATerm) ATempty);
    t_16 = t;
    t = SSL_table_put(q_16, s_16, t_16);
    t = m_16;
  }
  return(t);
}
ATerm scope_2_0 (ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm t)
{
  t = begin_scope_1_0(a_83, t);
  {
    ATerm k_5 (ATerm t)
    {
      t = end_scope_1_0(a_83, t);
      return(t);
    }
    t = restore_always_2_0(b_83, k_5, t);
  }
  return(t);
}
ATerm Scope_2_0 (ATerm o_74 (ATerm), ATerm p_74 (ATerm), ATerm t)
{
  ATerm m_17 = NULL,p_17 = NULL,s_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,l_1 = NULL,n_1 = NULL;
  y_17 = t;
  if(match_cons(t, sym_Scope_2))
    {
      p_17 = ATgetArgument(t, 0);
      s_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_17);
  m_17 = t;
  t = p_17;
  t = o_74(t);
  w_17 = t;
  t = s_17;
  t = p_74(t);
  x_17 = t;
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, w_17, x_17);
  l_1 = t;
  t = SSLsetAnnotations(l_1, m_17);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm f_19 = NULL;
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, f_19), term_z_13);
  t = assert_1_0(v_5, t);
  t = f_19;
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm r_18 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      r_18 = ATgetArgument(t, 0);
      {
        ATerm a_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm l_5 (ATerm t)
    {
      ATerm r_5 (ATerm t)
      {
        ATerm y_18 = NULL;
        y_18 = t;
        t = r_18;
        t = map_1_0(u_5, t);
        t = y_18;
        t = mark_buv_0_0(t);
        return(t);
      }
      t = scope_2_0(m_5, r_5, t);
      return(t);
    }
    t = Scope_2_0(_id, l_5, t);
  }
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL;
  w_21 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 = NULL,u_1 = NULL,w_1 = NULL,h_2 = NULL,l_2 = NULL;
        t = term_e_11;
        h_2 = t;
        t = SSL_table_get(h_2, w_21);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_2 = ATgetFirst((ATermList) t);
            {
              ATerm h_14 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = l_2;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm i_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_14) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            s_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, x_21);
        u_1 = t;
        t = (ATerm) ATinsert(ATempty, s_1);
        w_1 = t;
        t = SSLsetAnnotations(u_1, w_1);
        ;
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        {
          ATerm j_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL,n_3 = NULL,o_3 = NULL;
              t = term_e_11;
              n_3 = t;
              t = SSL_table_get(n_3, w_21);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_3 = ATgetFirst((ATermList) t);
                  {
                    ATerm l_14 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = o_3;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm m_14 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) m_14) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                  g_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, x_21);
              h_3 = t;
              t = (ATerm) ATinsert(ATempty, g_3);
              i_3 = t;
              t = SSLsetAnnotations(h_3, i_3);
              ;
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
              {
                ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,k_4 = NULL,q_4 = NULL;
                t = term_e_11;
                k_4 = t;
                t = SSL_table_get(k_4, w_21);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    q_4 = ATgetFirst((ATermList) t);
                    {
                      ATerm o_14 = (ATerm) ATgetNext((ATermList) t);
                    }
                  }
                else
                  _fail(t);
                t = q_4;
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm p_14 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) p_14) != ATmakeSymbol("c_0", 0, ATtrue)))
                      _fail(t);
                    y_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, x_21);
                z_3 = t;
                t = (ATerm) ATinsert(ATempty, y_3);
                a_4 = t;
                t = SSLsetAnnotations(z_3, a_4);
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm y_84 (ATerm), ATerm t)
{
  ATerm b_22 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_84(t);
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        t = SRTS_all(b_22, t);
      }
    return(t);
  }
  t = b_22(t);
  return(t);
}
ATerm Build_1_0 (ATerm m_74 (ATerm), ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,o_1 = NULL,q_1 = NULL;
  f_22 = t;
  if(match_cons(t, sym_Build_1))
    {
      d_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_22);
  c_22 = t;
  t = d_22;
  t = m_74(t);
  e_22 = t;
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, e_22);
  o_1 = t;
  t = SSLsetAnnotations(o_1, c_22);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  if(match_cons(t, sym__3))
    {
      i_22 = ATgetArgument(t, 0);
      j_22 = ATgetArgument(t, 1);
      k_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get(i_22, j_22);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_14 = ATgetFirst((ATermList) t);
      l_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_22), k_22);
  m_22 = t;
  t = SSL_table_put(i_22, j_22, m_22);
  t = (ATerm) ATmakeAppl(sym__3, i_22, j_22, k_22);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  t = MarkVar_0_0(t);
  s_22 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_e_11, (ATerm)ATmakeAppl(sym_Var_1, t_22), term_v_14);
  t = table_replace_0_0(t);
  t = s_22;
  return(t);
}
ATerm mark_match_0_0 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      q_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_22;
  t = alltd_1_0(y_5, t);
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, r_22);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_buv_0_0 (ATerm t)
{
  ATerm w_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = mark_match_0_0(t);
      ;
      LocalPopChoice(y_14);
    }
  else
    {
      t = w_14;
      {
        ATerm z_14 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1_0(z_5, t);
            ;
            LocalPopChoice(b_15);
          }
        else
          {
            t = z_14;
            {
              ATerm c_15 = t;
              int d_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_scope_0_0(t);
                  ;
                  LocalPopChoice(d_15);
                }
              else
                {
                  t = c_15;
                  {
                    ATerm f_15 = t;
                    int g_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_let_0_0(t);
                        ;
                        LocalPopChoice(g_15);
                      }
                    else
                      {
                        t = f_15;
                        {
                          ATerm h_15 = t;
                          int i_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = mark_traversal_0_0(t);
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
                                    t = mark_sdef_0_0(t);
                                    ;
                                    LocalPopChoice(k_15);
                                  }
                                else
                                  {
                                    t = j_15;
                                    {
                                      ATerm l_15 = t;
                                      int m_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = mark_call_0_0(t);
                                          ;
                                          LocalPopChoice(m_15);
                                        }
                                      else
                                        {
                                          t = l_15;
                                          {
                                            ATerm o_15 = t;
                                            int p_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_prim_0_0(t);
                                                ;
                                                LocalPopChoice(p_15);
                                              }
                                            else
                                              {
                                                t = o_15;
                                                {
                                                  ATerm q_15 = t;
                                                  int r_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_rec_0_0(t);
                                                      ;
                                                      LocalPopChoice(r_15);
                                                    }
                                                  else
                                                    {
                                                      t = q_15;
                                                      {
                                                        ATerm t_15 = t;
                                                        int u_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = mark_choice_1_0(mark_buv_0_0, t);
                                                            ;
                                                            LocalPopChoice(u_15);
                                                          }
                                                        else
                                                          {
                                                            t = t_15;
                                                            {
                                                              ATerm v_15 = t;
                                                              int b_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(b_16);
                                                                }
                                                              else
                                                                {
                                                                  t = v_15;
                                                                  {
                                                                    ATerm c_16 = t;
                                                                    int d_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(d_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_16;
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
ATerm Strategies_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,r_1 = NULL,v_1 = NULL;
  x_22 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_22);
  u_22 = t;
  t = v_22;
  t = r_69(t);
  w_22 = t;
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_22);
  r_1 = t;
  t = SSLsetAnnotations(r_1, u_22);
  return(t);
}
ATerm Specification_1_0 (ATerm w_69 (ATerm), ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,y_1 = NULL,a_2 = NULL;
  d_23 = t;
  if(match_cons(t, sym_Specification_1))
    {
      b_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_23);
  a_23 = t;
  t = b_23;
  t = w_69(t);
  c_23 = t;
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, c_23);
  y_1 = t;
  t = SSLsetAnnotations(y_1, a_23);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  g_23 = t;
  t = term_v_10;
  h_23 = t;
  t = (ATerm) ATinsert(ATempty, term_h_16);
  i_23 = t;
  t = SSL_printnl(h_23, i_23);
  t = g_23;
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = Cons_2_0(_id, d_6, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = Cons_2_0(g_6, h_6, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = Strategies_1_0(i_6, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = map_1_0(mark_buv_0_0, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
  j_23 = t;
  t = term_v_10;
  k_23 = t;
  t = (ATerm) ATinsert(ATempty, term_i_16);
  l_23 = t;
  t = SSL_printnl(k_23, l_23);
  t = j_23;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  t = if_verbose4_1_0(a_6, t);
  t = Specification_1_0(c_6, t);
  t = if_verbose4_1_0(j_6, t);
  return(t);
}
ATerm _2_0 (ATerm y_64 (ATerm), ATerm z_64 (ATerm), ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,b_2 = NULL,k_2 = NULL;
  r_23 = t;
  if(match_cons(t, sym__2))
    {
      n_23 = ATgetArgument(t, 0);
      o_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_23);
  m_23 = t;
  t = n_23;
  t = y_64(t);
  p_23 = t;
  t = o_23;
  t = z_64(t);
  q_23 = t;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_23, q_23);
  b_2 = t;
  t = SSLsetAnnotations(b_2, m_23);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm z_102 (ATerm), ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
  if(match_cons(t, sym__2))
    {
      u_23 = ATgetArgument(t, 0);
      v_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_23, term_j_16);
  t = open_stream_0_0(t);
  w_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_23, v_23);
  t = z_102(t);
  t = fclose_0_0(t);
  t = v_23;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = fetch_1_0(p_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = WriteToFile_1_0(q_6, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_16 = ATgetArgument(t, 0);
      if(match_cons(k_16, sym_Stream_1))
        {
          z_23 = ATgetArgument(k_16, 0);
        }
      else
        _fail(t);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(z_23, a_24);
  b_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_24);
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = WriteToFile_1_0(u_6, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_16 = ATgetArgument(t, 0);
      if(match_cons(l_16, sym_Stream_1))
        {
          c_24 = ATgetArgument(l_16, 0);
        }
      else
        _fail(t);
      d_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(c_24, d_24);
  e_24 = t;
  t = term_n_16;
  f_24 = t;
  t = SSL_fputc(f_24, e_24);
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_24);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  x_23 = t;
  {
    ATerm k_6 (ATerm t)
    {
      ATerm o_16 = t;
      int p_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_6 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((y_23 != NULL) && (y_23 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_6, t);
          ;
          LocalPopChoice(p_16);
        }
      else
        {
          t = o_16;
          t = term_u_16;
          if(((y_23 != NULL) && (y_23 != t)))
            _fail(t);
          else
            y_23 = t;
        }
      return(t);
    }
    t = _2_0(k_6, _id, t);
    t = x_23;
    {
      ATerm m_6 (ATerm t)
      {
        ATerm j_5 = NULL;
        j_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_23), j_5);
        return(t);
      }
      t = _2_0(_id, m_6, t);
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(n_6, o_6, t);
            ;
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            t = _2_0(_id, r_6, t);
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
ATerm apply_strategy_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  h_24 = t;
  t = dtime_0_0(t);
  t = h_24;
  t = l_104(t);
  i_24 = t;
  t = dtime_0_0(t);
  j_24 = t;
  t = i_24;
  if(match_cons(t, sym__2))
    {
      k_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_24), (ATerm) ATmakeAppl(sym_Runtime_1, j_24)), l_24);
  return(t);
}
ATerm z_24 (ATerm t_24, ATerm t)
{
  t = SSL_fclose(t_24);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL;
  x_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_24 = ATgetArgument(t, 0);
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_24);
            ;
            LocalPopChoice(y_16);
          }
        else
          {
            t = x_16;
            t = z_24(x_24, t);
          }
      }
    }
  else
    {
      t = z_24(x_24, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_25 = NULL;
  t = SSL_stdin_stream();
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_25);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_25 = NULL;
  t = SSL_stdout_stream();
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_25);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_25 = NULL;
  t = SSL_stderr_stream();
  c_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_25);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm k_25 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      k_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_25;
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  t = SSL_is_string(o_25);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_16 = ATgetArgument(t, 0);
      ATerm a_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_6 = NULL,f_6 = NULL;
        e_6 = t;
        t = SSL_explode_term(e_6);
        if(match_cons(t, sym__2))
          {
            ATerm d_17 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_17) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_17 = ATgetArgument(t, 1);
              if(((ATgetType(e_17) == AT_LIST) && !(ATisEmpty(e_17))))
                {
                  f_6 = ATgetFirst((ATermList) e_17);
                  {
                    ATerm f_17 = (ATerm) ATgetNext((ATermList) e_17);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = f_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = f_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = f_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = f_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        {
          ATerm g_17 = t;
          int h_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
              t = _2_0(b_7, _id, t);
              if(match_cons(t, sym__2))
                {
                  h_25 = ATgetArgument(t, 0);
                  i_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(h_25, i_25);
              j_25 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, j_25);
              ;
              LocalPopChoice(h_17);
            }
          else
            {
              t = g_17;
              {
                ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
                t = _2_0(c_7, _id, t);
                if(match_cons(t, sym__2))
                  {
                    l_25 = ATgetArgument(t, 0);
                    m_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(l_25, m_25);
                n_25 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, n_25);
              }
            }
        }
      }
  }
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_25 = NULL;
      s_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_25, term_l_17);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      t = debug_1_0(d_7, t);
      _fail(t);
    }
  p_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(r_25);
  q_25 = t;
  t = p_25;
  t = fclose_0_0(t);
  t = q_25;
  return(t);
}
ATerm fetch_1_0 (ATerm g_87 (ATerm), ATerm t)
{
  ATerm x_25 (ATerm t)
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_87, _id, t);
        ;
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        t = Cons_2_0(_id, x_25, t);
      }
    return(t);
  }
  t = x_25(t);
  return(t);
}
ATerm debug_1_0 (ATerm x_102 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
  y_25 = t;
  t = x_102(t);
  z_25 = t;
  t = term_v_10;
  a_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_25), z_25);
  b_26 = t;
  t = SSL_printnl(a_26, b_26);
  t = y_25;
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
    }
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_26 = NULL;
      i_26 = t;
      t = SSL_is_string(i_26);
      ;
      LocalPopChoice(v_17);
    }
  else
    {
      t = u_17;
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_7, t);
            ;
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
            {
              ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
              t_26 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_26 = ATgetArgument(t, 0);
                  t = u_26;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_26 = ATgetArgument(t, 0);
                      t = u_26;
                      {
                        ATerm b_18 = t;
                        int c_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_18);
                          }
                        else
                          {
                            t = b_18;
                            t = debug_1_0(h_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_7 = NULL,f_7 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_26 = ATgetArgument(t, 0);
                          v_26 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_26;
                      t = eval_config_0_0(t);
                      e_7 = t;
                      t = v_26;
                      t = eval_config_0_0(t);
                      f_7 = t;
                      t = SSL_strcat(e_7, f_7);
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
  ATerm a_27 = NULL,b_27 = NULL;
  a_27 = t;
  t = term_d_18;
  b_27 = t;
  t = SSL_table_get(b_27, a_27);
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_27 = NULL,d_27 = NULL;
        t = eval_config_0_0(t);
        c_27 = t;
        t = term_d_18;
        d_27 = t;
        t = SSL_table_put(d_27, a_27, c_27);
        t = c_27;
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_111 (ATerm), ATerm t)
{
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_27 = NULL,g_27 = NULL;
      e_27 = t;
      t = term_c_11;
      t = get_config_0_0(t);
      g_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_27, term_i_18);
      t = geq_0_0(t);
      t = e_27;
      t = p_111(t);
      ;
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  if(match_string(t, "-k"))
    {
      t = i_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_27;
    }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL;
  j_27 = t;
  t = SSL_string_to_int(j_27);
  k_27 = t;
  t = term_d_18;
  l_27 = t;
  t = term_j_18;
  m_27 = t;
  t = SSL_table_put(l_27, m_27, k_27);
  t = j_27;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_7, j_7, p_7, t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm o_27 = NULL;
  o_27 = t;
  if(match_string(t, "-S"))
    {
      t = o_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_27;
    }
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
  t = term_d_18;
  p_27 = t;
  t = term_c_11;
  q_27 = t;
  t = term_l_18;
  r_27 = t;
  t = SSL_table_put(p_27, q_27, r_27);
  t = term_m_18;
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_n_18;
  return(t);
}
ATerm i_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  s_27 = t;
  t = SSL_string_to_int(s_27);
  t_27 = t;
  t = term_d_18;
  u_27 = t;
  t = term_c_11;
  v_27 = t;
  t = SSL_table_put(u_27, v_27, t_27);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_27);
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = term_o_18;
  return(t);
}
ATerm m_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  t = term_d_18;
  w_27 = t;
  t = term_p_18;
  x_27 = t;
  t = term_u_10;
  y_27 = t;
  t = SSL_table_put(w_27, x_27, y_27);
  t = term_q_18;
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_s_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_7, y_7, h_8, t);
      ;
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_8, j_8, l_8, t);
            ;
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            t = Option_3_0(m_8, p_8, r_8, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_28 = NULL;
      t = term_u_10;
      t = d_0(t);
      d_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_18, term_z_18, d_28);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_28 = ATgetFirst((ATermList) t);
          c_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_28;
      t = a_0(t);
      t = term_u_10;
      t = b_0(t);
      g_28 = t;
      t = (ATerm) ATinsert(CheckATermList(c_28), g_28);
    }
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  if(match_string(t, "-o"))
    {
      t = i_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_28;
    }
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
  j_28 = t;
  t = term_d_18;
  k_28 = t;
  t = term_a_19;
  l_28 = t;
  t = SSL_table_put(k_28, l_28, j_28);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_28);
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_8, t_8, u_8, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
  if(match_cons(t, sym__3))
    {
      o_28 = ATgetArgument(t, 0);
      p_28 = ATgetArgument(t, 1);
      q_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_28, p_28);
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_19 = ATgetArgument(t, 0);
            ATerm g_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(o_28, p_28);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        t = (ATerm) ATempty;
      }
    r_28 = t;
    t = (ATerm) ATinsert(CheckATermList(r_28), q_28);
    s_28 = t;
    t = SSL_table_put(o_28, p_28, s_28);
    t = (ATerm) ATmakeAppl(sym__3, o_28, p_28, q_28);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_29 = NULL;
      t = term_u_10;
      t = m_0(t);
      e_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_18, term_z_18, e_29);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm i_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_29 = ATgetFirst((ATermList) t);
          b_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_29 = ATgetFirst((ATermList) t);
          d_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_29;
      t = i_0(t);
      t = c_29;
      t = k_0(t);
      i_29 = t;
      t = (ATerm) ATinsert(CheckATermList(d_29), i_29);
    }
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  if(match_string(t, "-i"))
    {
      t = k_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_29;
    }
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  l_29 = t;
  t = term_d_18;
  m_29 = t;
  t = term_h_19;
  n_29 = t;
  t = SSL_table_put(m_29, n_29, l_29);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_29);
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_i_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_8, z_8, a_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_10;
  t = whoami_0_0(t);
  o_29 = t;
  t = term_v_10;
  p_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_19), o_29);
  q_29 = t;
  t = SSL_printnl(p_29, q_29);
  t = term_y_10;
  r_29 = t;
  t = SSL_exit(r_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_19;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_93(t);
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      {
        ATerm u_29 = NULL,v_29 = NULL,z_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_29 = ATgetFirst((ATermList) t);
            v_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_29;
        t = foldr_2_0(o_93, p_93, t);
        z_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_29, z_29);
        t = p_93(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm u_7 = NULL,x_7 = NULL;
  if(match_cons(t, sym__2))
    {
      u_7 = ATgetArgument(t, 0);
      x_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(u_7, x_7);
        ;
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = SSL_addr(u_7, x_7);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_31 = NULL,k_7 = NULL,m_7 = NULL;
  t = times_0_0(t);
  k_7 = t;
  t = SSL_explode_term(k_7);
  if(match_cons(t, sym__2))
    {
      ATerm p_19 = ATgetArgument(t, 0);
      m_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7;
  t = foldr_2_0(b_9, c_9, t);
  r_31 = t;
  t = SSL_TicksToSeconds(r_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
  j_32 = t;
  if(match_cons(t, sym__2))
    {
      k_32 = ATgetArgument(t, 0);
      l_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_32;
        if((k_32 != t))
          {
            _fail(t);
          }
        t = j_32;
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = j_32;
        {
          ATerm s_19 = t;
          int t_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_32, l_32);
              ;
              LocalPopChoice(t_19);
            }
          else
            {
              t = s_19;
              t = SSL_gtr(k_32, l_32);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_32, l_32);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_111 (ATerm), ATerm t)
{
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_32 = NULL,w_32 = NULL;
      o_32 = t;
      t = term_c_11;
      t = get_config_0_0(t);
      w_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_32, term_y_10);
      t = geq_0_0(t);
      t = o_32;
      t = o_111(t);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
    }
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL;
  t = run_time_0_0(t);
  y_32 = t;
  t = term_u_10;
  t = whoami_0_0(t);
  z_32 = t;
  t = term_v_10;
  a_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_19), y_32), term_w_19), z_32);
  b_33 = t;
  t = SSL_printnl(a_33, b_33);
  t = (ATerm) ATmakeAppl(sym__2, term_v_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_19), y_32), term_w_19), z_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_18;
  c_33 = t;
  t = SSL_exit(c_33);
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm a_20 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_105 (ATerm), ATerm t)
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
      t = fetch_1_0(e_9, t);
    }
  t = j_105(t);
  return(t);
}
ATerm map_1_0 (ATerm w_86 (ATerm), ATerm t)
{
  ATerm d_33 (ATerm t)
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
        t = Cons_2_0(w_86, d_33, t);
      }
    return(t);
  }
  t = d_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_33 = ATgetFirst((ATermList) t);
      g_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_33 = NULL,l_33 = NULL;
        t = g_33;
        t = g_0(t);
        k_33 = t;
        t = f_33;
        t = f_0(t);
        l_33 = t;
        t = g_33;
        {
          ATerm f_9 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(k_33), l_33);
            return(t);
          }
          t = reverse_acc_2_0(f_0, f_9, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_10;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm k_82 (ATerm), ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,m_2 = NULL,p_2 = NULL;
  p_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_33);
  m_33 = t;
  t = n_33;
  t = k_82(t);
  o_33 = t;
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_33);
  m_2 = t;
  t = SSLsetAnnotations(m_2, m_33);
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm u_33 = NULL;
  u_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_33), term_h_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL;
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      t = fetch_1_0(i_9, t);
    }
  t = term_k_20;
  t = echo_0_0(t);
  t = term_x_18;
  s_33 = t;
  t = term_z_18;
  t_33 = t;
  t = SSL_table_get(s_33, t_33);
  t = reverse_acc_2_0(_id, j_9, t);
  t = map_1_0(n_9, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm l_82 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,u_2 = NULL,v_2 = NULL;
  y_33 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      w_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_33);
  v_33 = t;
  t = w_33;
  t = l_82(t);
  x_33 = t;
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, x_33);
  u_2 = t;
  t = SSLsetAnnotations(u_2, v_33);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL;
  d_34 = t;
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_20 = ATgetFirst((ATermList) t);
                ATerm o_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_34;
          }
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = (ATerm) ATinsert(ATempty, d_34);
      }
    e_34 = t;
    t = term_u_16;
    f_34 = t;
    t = SSL_printnl(f_34, e_34);
    t = d_34;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_19;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm q_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  t = term_d_18;
  j_34 = t;
  t = term_p_20;
  k_34 = t;
  t = term_u_10;
  l_34 = t;
  t = SSL_table_put(j_34, k_34, l_34);
  t = term_q_20;
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = term_r_20;
  return(t);
}
ATerm y_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
  t = term_d_18;
  m_34 = t;
  t = term_p_20;
  n_34 = t;
  t = term_u_10;
  o_34 = t;
  t = SSL_table_put(m_34, n_34, o_34);
  t = term_d_18;
  p_34 = t;
  t = term_s_20;
  q_34 = t;
  t = term_u_10;
  r_34 = t;
  t = SSL_table_put(p_34, q_34, r_34);
  t = term_t_20;
  return(t);
}
ATerm b_10 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_9, r_9, v_9, t);
      ;
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      t = Option_3_0(y_9, z_9, b_10, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,w_2 = NULL,x_2 = NULL;
  x_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_34 = ATgetFirst((ATermList) t);
      u_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_34);
  s_34 = t;
  t = t_34;
  t = n_69(t);
  v_34 = t;
  t = u_34;
  t = o_69(t);
  w_34 = t;
  x_2 = t;
  t = (ATerm) ATinsert(CheckATermList(w_34), v_34);
  w_2 = t;
  t = SSLsetAnnotations(w_2, s_34);
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
  c_35 = t;
  t = term_d_18;
  d_35 = t;
  t = term_k_19;
  e_35 = t;
  t = SSL_table_put(d_35, e_35, c_35);
  t = (ATerm) ATmakeAppl(sym_Program_1, c_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_108 (ATerm), ATerm t)
{
  ATerm b_35 = NULL;
  b_35 = t;
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_20;
        t = o_108(t);
        ;
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
      }
    t = b_35;
    {
      ATerm d_10 (ATerm t)
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_21 = t;
            int d_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_21);
              }
            else
              {
                t = c_21;
                t = o_108(t);
                t = Cons_2_0(_id, d_10, t);
              }
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            {
              ATerm g_35 = NULL,h_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_35 = ATgetFirst((ATermList) t);
                  h_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_35), (ATerm) ATmakeAppl(sym_Undefined_1, g_35));
            }
          }
        return(t);
      }
      t = Cons_2_0(c_10, d_10, t);
    }
  }
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm x_35 = NULL;
  x_35 = t;
  if(match_string(t, "--help"))
    {
      t = x_35;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_35;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_35;
        }
    }
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
  t = term_d_18;
  y_35 = t;
  t = term_e_20;
  z_35 = t;
  t = term_u_10;
  a_36 = t;
  t = SSL_table_put(y_35, z_35, a_36);
  t = term_e_21;
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm i_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_108 (ATerm), ATerm t)
{
  ATerm o_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
  o_35 = t;
  t = term_x_18;
  r_35 = t;
  t = term_z_18;
  s_35 = t;
  t = (ATerm) ATempty;
  t_35 = t;
  t = SSL_table_put(r_35, s_35, t_35);
  t = o_35;
  {
    ATerm e_10 (ATerm t)
    {
      ATerm g_21 = t;
      int h_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_108(t);
          ;
          LocalPopChoice(h_21);
        }
      else
        {
          t = g_21;
          {
            ATerm i_21 = t;
            int j_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_10, g_10, h_10, t);
                ;
                LocalPopChoice(j_21);
              }
            else
              {
                t = i_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_10, t);
    {
      ATerm k_21 = t;
      int l_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_36 = NULL;
          h_36 = t;
          {
            ATerm m_21 = t;
            int n_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_9 = NULL;
                t = h_36;
                {
                  ATerm o_21 = t;
                  int p_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_e_20;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(p_21);
                    }
                  else
                    {
                      t = o_21;
                      t = fetch_1_0(i_10, t);
                    }
                  t = h_36;
                  t = default_system_usage_0_0(t);
                  t = term_l_18;
                  h_9 = t;
                  t = SSL_exit(h_9);
                }
                ;
                LocalPopChoice(n_21);
              }
            else
              {
                t = m_21;
                {
                  ATerm o_9 = NULL;
                  t = term_p_20;
                  t = get_config_0_0(t);
                  t = h_36;
                  t = default_system_about_0_0(t);
                  t = term_l_18;
                  o_9 = t;
                  t = SSL_exit(o_9);
                }
              }
          }
          ;
          LocalPopChoice(l_21);
        }
      else
        {
          t = k_21;
          {
            ATerm q_21 = t;
            int r_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
                ATerm j_10 (ATerm t)
                {
                  ATerm k_10 (ATerm t)
                  {
                    if(((u_35 != NULL) && (u_35 != t)))
                      _fail(t);
                    else
                      u_35 = t;
                    return(t);
                  }
                  t = Undefined_1_0(k_10, t);
                  return(t);
                }
                t = fetch_1_0(j_10, t);
                t = term_v_10;
                i_36 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_35)), term_s_21);
                j_36 = t;
                t = SSL_printnl(i_36, j_36);
                t = (ATerm) ATmakeAppl(sym__2, term_v_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_35)), term_s_21));
                t = default_system_usage_0_0(t);
                t = term_y_10;
                k_36 = t;
                t = SSL_exit(k_36);
                ;
                LocalPopChoice(r_21);
              }
            else
              {
                t = q_21;
              }
          }
        }
      v_35 = t;
      t = term_x_18;
      w_35 = t;
      t = SSL_table_destroy(w_35);
      t = v_35;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
  t = parse_options_1_0(l_105, t);
  n_36 = t;
  t = term_t_21;
  o_36 = t;
  t = SSL_table_create(o_36);
  t = term_t_21;
  p_36 = t;
  t = term_u_21;
  q_36 = t;
  t = SSL_table_put(p_36, q_36, n_36);
  t = n_36;
  t = n_105(t);
  {
    ATerm v_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_105, t);
        ;
        LocalPopChoice(y_21);
      }
    else
      {
        t = v_21;
        {
          ATerm z_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_105(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_22);
            }
          else
            {
              t = z_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm m_10 (ATerm t)
{
  t = if_verbose2_1_0(r_10, t);
  return(t);
}
ATerm o_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
  t = term_d_18;
  r_36 = t;
  t = term_g_22;
  s_36 = t;
  t = term_u_10;
  t_36 = t;
  t = SSL_table_put(r_36, s_36, t_36);
  t = term_h_22;
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
  u_36 = t;
  t = term_k_19;
  t = get_config_0_0(t);
  v_36 = t;
  t = term_v_10;
  w_36 = t;
  t = (ATerm) ATinsert(ATempty, v_36);
  x_36 = t;
  t = SSL_printnl(w_36, x_36);
  t = u_36;
  return(t);
}
ATerm iowrap_3_0 (ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm t)
{
  ATerm l_10 (ATerm t)
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_104(t);
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        {
          ATerm y_22 = t;
          int z_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(z_22);
            }
          else
            {
              t = y_22;
              {
                ATerm e_23 = t;
                int f_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(f_23);
                  }
                else
                  {
                    t = e_23;
                    {
                      ATerm s_23 = t;
                      int t_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(o_10, p_10, q_10, t);
                          ;
                          LocalPopChoice(t_23);
                        }
                      else
                        {
                          t = s_23;
                          {
                            ATerm m_24 = t;
                            int n_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(n_24);
                              }
                            else
                              {
                                t = m_24;
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
  ATerm n_10 (ATerm t)
  {
    ATerm y_36 = NULL,z_36 = NULL,w_9 = NULL;
    y_36 = t;
    {
      ATerm o_24 = t;
      int p_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_10 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((z_36 != NULL) && (z_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_36 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_10, t);
          ;
          LocalPopChoice(p_24);
        }
      else
        {
          t = o_24;
          t = term_q_24;
          z_36 = t;
        }
      t = not_null(z_36);
      t = ReadFromFile_0_0(t);
      w_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_36, w_9);
      t = apply_strategy_1_0(u_104, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(l_10, w_104, m_10, n_10, t);
  return(t);
}
ATerm t_10 (ATerm t)
{
  t = _2_0(_id, mark_bound_unbound_vars_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(t_10, _fail, default_usage_0_0, t);
  return(t);
}
