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
ATerm term_a_29;
ATerm term_j_28;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_e_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_w_18;
ATerm term_m_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_x_17;
ATerm term_u_17;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
void init_constant_terms (void)
{
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym__2, term_l_16, term_h_22);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym__2, term_o_22, term_m_18);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__2, term_a_23, term_m_18);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym__2, term_s_24, term_t_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__2, term_n_25, term_m_18);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_q_25, term_m_18);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym__2, term_e_24, term_m_18);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym__3, term_s_24, term_t_24, (ATerm) ATempty);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm r_95 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm m_104 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm e_68 (ATerm), ATerm);
ATerm mark_guardedlchoice_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm v_75 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm w_66 (ATerm), ATerm x_66 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm u_75 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm);
ATerm mark_rec_0_0 (ATerm);
ATerm PrimT_3_0 (ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm Call_2_0 (ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm o_67 (ATerm), ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm a_70 (ATerm), ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm d_70 (ATerm), ATerm);
ATerm mark_sdef_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm restore_MarkVar_0_0 (ATerm);
ATerm Let_2_0 (ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm assert_1_0 (ATerm f_76 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm b_76 (ATerm), ATerm);
ATerm scope_2_0 (ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm Build_1_0 (ATerm q_67 (ATerm), ATerm);
ATerm mark_build_0_0 (ATerm);
ATerm table_replace_0_0 (ATerm);
ATerm override_key_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm Hd_0_0 (ATerm);
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm h_76 (ATerm), ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm alltd_1_0 (ATerm b_78 (ATerm), ATerm);
ATerm mark_match_0_0 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm a_63 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm f_63 (ATerm), ATerm);
ATerm mark_bound_unbound_vars_0_0 (ATerm);
ATerm _2_0 (ATerm n_61 (ATerm), ATerm o_61 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_80 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm k_104 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm b_96 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm n_97 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm n_95 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm);
ATerm crush_2_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_104 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm l_98 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm o_101 (ATerm), ATerm);
ATerm map_1_0 (ATerm z_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm n_101 (ATerm), ATerm);
ATerm Program_1_0 (ATerm o_75 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm p_75 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm k_80 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm n_100 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm s_101 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_62 (ATerm), ATerm x_62 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm q_101 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm p_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm r_97 (ATerm), ATerm);
ATerm bound_unbound_vars_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm j_0 = NULL;
  if(((j_0 != NULL) && (j_0 != t)))
    _fail(t);
  else
    j_0 = t;
  {
    ATerm h_417 = NULL;
    ATerm m_0 = NULL;
    if(((m_0 != NULL) && (m_0 != t)))
      _fail(t);
    else
      m_0 = t;
    if(((h_417 != NULL) && (h_417 != t)))
      _fail(t);
    else
      h_417 = t;
    t = not_null(m_0);
    t = (ATerm) ATmakeAppl(sym__2, term_k_16, (ATerm) ATinsert(ATempty, not_null(h_417)));
    t = printnl_0_0(t);
    t = not_null(j_0);
  }
  return(t);
}
ATerm say_1_0 (ATerm r_95 (ATerm), ATerm t)
{
  ATerm n_0 = NULL;
  if(((n_0 != NULL) && (n_0 != t)))
    _fail(t);
  else
    n_0 = t;
  t = r_95(t);
  t = debug_0_0(t);
  t = not_null(n_0);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  ATerm v_11 (ATerm t)
  {
    ATerm o_0 = NULL;
    if(((o_0 != NULL) && (o_0 != t)))
      _fail(t);
    else
      o_0 = t;
    {
      ATerm t_559 = NULL;
      ATerm p_0 = NULL;
      if(((p_0 != NULL) && (p_0 != t)))
        _fail(t);
      else
        p_0 = t;
      t = term_l_16;
      t = get_config_0_0(t);
      if(((t_559 != NULL) && (t_559 != t)))
        _fail(t);
      else
        t_559 = t;
      t = not_null(p_0);
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_559), term_m_16);
      t = geq_0_0(t);
      t = not_null(o_0);
    }
    t = m_104(t);
    return(t);
  }
  t = try_1_0(v_11, t);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm e_68 (ATerm), ATerm t)
{
  ATerm t_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL;
  ATerm x_0 = NULL;
  if(((x_0 != NULL) && (x_0 != t)))
    _fail(t);
  else
    x_0 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      if(((q_0 != NULL) && (q_0 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_0 = ATgetArgument(t, 0);
      if(((r_0 != NULL) && (r_0 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_0 = ATgetArgument(t, 1);
      if(((s_0 != NULL) && (s_0 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        s_0 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm z_0 = NULL;
    if(((z_0 != NULL) && (z_0 != t)))
      _fail(t);
    else
      z_0 = t;
    t = SSLgetAnnotations(not_null(x_0));
    if(((t_0 != NULL) && (t_0 != t)))
      _fail(t);
    else
      t_0 = t;
    t = not_null(z_0);
  }
  t = not_null(q_0);
  t = c_68(t);
  if(((u_0 != NULL) && (u_0 != t)))
    _fail(t);
  else
    u_0 = t;
  t = not_null(r_0);
  t = d_68(t);
  if(((v_0 != NULL) && (v_0 != t)))
    _fail(t);
  else
    v_0 = t;
  t = not_null(s_0);
  t = e_68(t);
  if(((w_0 != NULL) && (w_0 != t)))
    _fail(t);
  else
    w_0 = t;
  {
    ATerm y_0 = NULL;
    ATerm a_1 = NULL;
    if(((a_1 != NULL) && (a_1 != t)))
      _fail(t);
    else
      a_1 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(u_0), not_null(v_0), not_null(w_0)), not_null(t_0));
    if(((y_0 != NULL) && (y_0 != t)))
      _fail(t);
    else
      y_0 = t;
    t = not_null(a_1);
    t = not_null(y_0);
  }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, _id, t);
  {
    ATerm w_11 (ATerm t)
    {
      t = GuardedLChoice_3_0(w_75, _id, _id, t);
      t = GuardedLChoice_3_0(_id, w_75, _id, t);
      return(t);
    }
    ATerm x_11 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, _id, w_75, t);
      return(t);
    }
    t = abstract_choice_2_0(w_11, x_11, t);
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,b_1 = NULL,c_1 = NULL,e_1 = NULL,f_1 = NULL;
  ATerm g_1 = NULL;
  if(((g_1 != NULL) && (g_1 != t)))
    _fail(t);
  else
    g_1 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      if(((b_1 != NULL) && (b_1 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_1 = ATgetArgument(t, 0);
      if(((c_1 != NULL) && (c_1 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_1 = NULL;
    if(((i_1 != NULL) && (i_1 != t)))
      _fail(t);
    else
      i_1 = t;
    t = SSLgetAnnotations(not_null(g_1));
    if(((d_1 != NULL) && (d_1 != t)))
      _fail(t);
    else
      d_1 = t;
    t = not_null(i_1);
  }
  t = not_null(b_1);
  t = y_67(t);
  if(((e_1 != NULL) && (e_1 != t)))
    _fail(t);
  else
    e_1 = t;
  t = not_null(c_1);
  t = z_67(t);
  if(((f_1 != NULL) && (f_1 != t)))
    _fail(t);
  else
    f_1 = t;
  {
    ATerm h_1 = NULL;
    ATerm j_1 = NULL;
    if(((j_1 != NULL) && (j_1 != t)))
      _fail(t);
    else
      j_1 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(e_1), not_null(f_1)), not_null(d_1));
    if(((h_1 != NULL) && (h_1 != t)))
      _fail(t);
    else
      h_1 = t;
    t = not_null(j_1);
    t = not_null(h_1);
  }
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm v_75 (ATerm), ATerm t)
{
  t = LChoice_2_0(_id, _id, t);
  {
    ATerm y_11 (ATerm t)
    {
      t = LChoice_2_0(v_75, _id, t);
      return(t);
    }
    ATerm z_11 (ATerm t)
    {
      t = LChoice_2_0(_id, v_75, t);
      return(t);
    }
    t = abstract_choice_2_0(y_11, z_11, t);
  }
  return(t);
}
ATerm Choice_2_0 (ATerm w_66 (ATerm), ATerm x_66 (ATerm), ATerm t)
{
  ATerm m_1 = NULL,k_1 = NULL,l_1 = NULL,n_1 = NULL,o_1 = NULL;
  ATerm p_1 = NULL;
  if(((p_1 != NULL) && (p_1 != t)))
    _fail(t);
  else
    p_1 = t;
  if(match_cons(t, sym_Choice_2))
    {
      if(((k_1 != NULL) && (k_1 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_1 = ATgetArgument(t, 0);
      if(((l_1 != NULL) && (l_1 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_1 = NULL;
    if(((r_1 != NULL) && (r_1 != t)))
      _fail(t);
    else
      r_1 = t;
    t = SSLgetAnnotations(not_null(p_1));
    if(((m_1 != NULL) && (m_1 != t)))
      _fail(t);
    else
      m_1 = t;
    t = not_null(r_1);
  }
  t = not_null(k_1);
  t = w_66(t);
  if(((n_1 != NULL) && (n_1 != t)))
    _fail(t);
  else
    n_1 = t;
  t = not_null(l_1);
  t = x_66(t);
  if(((o_1 != NULL) && (o_1 != t)))
    _fail(t);
  else
    o_1 = t;
  {
    ATerm q_1 = NULL;
    ATerm s_1 = NULL;
    if(((s_1 != NULL) && (s_1 != t)))
      _fail(t);
    else
      s_1 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(n_1), not_null(o_1)), not_null(m_1));
    if(((q_1 != NULL) && (q_1 != t)))
      _fail(t);
    else
      q_1 = t;
    t = not_null(s_1);
    t = not_null(q_1);
  }
  return(t);
}
ATerm abstract_choice_2_0 (ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  ATerm t_1 = NULL;
  if(((t_1 != NULL) && (t_1 != t)))
    _fail(t);
  else
    t_1 = t;
  t = save_MarkVar_0_0(t);
  if(((n_27 != NULL) && (n_27 != t)))
    _fail(t);
  else
    n_27 = t;
  t = not_null(t_1);
  t = x_75(t);
  {
    ATerm u_1 = NULL;
    if(((u_1 != NULL) && (u_1 != t)))
      _fail(t);
    else
      u_1 = t;
    t = save_MarkVar_0_0(t);
    if(((o_27 != NULL) && (o_27 != t)))
      _fail(t);
    else
      o_27 = t;
    t = not_null(n_27);
    t = restore_MarkVar_0_0(t);
    t = not_null(u_1);
    t = y_75(t);
    {
      ATerm v_1 = NULL;
      if(((v_1 != NULL) && (v_1 != t)))
        _fail(t);
      else
        v_1 = t;
      t = not_null(o_27);
      t = isect_MarkVar_0_0(t);
      t = not_null(v_1);
    }
  }
  return(t);
}
ATerm mark_choice_1_0 (ATerm u_75 (ATerm), ATerm t)
{
  t = Choice_2_0(_id, _id, t);
  {
    ATerm a_12 (ATerm t)
    {
      t = Choice_2_0(u_75, _id, t);
      return(t);
    }
    ATerm b_12 (ATerm t)
    {
      t = Choice_2_0(_id, u_75, t);
      return(t);
    }
    t = abstract_choice_2_0(a_12, b_12, t);
  }
  return(t);
}
ATerm Rec_2_0 (ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm t)
{
  ATerm y_1 = NULL,w_1 = NULL,x_1 = NULL,z_1 = NULL,a_2 = NULL;
  ATerm b_2 = NULL;
  if(((b_2 != NULL) && (b_2 != t)))
    _fail(t);
  else
    b_2 = t;
  if(match_cons(t, sym_Rec_2))
    {
      if(((w_1 != NULL) && (w_1 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_1 = ATgetArgument(t, 0);
      if(((x_1 != NULL) && (x_1 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_2 = NULL;
    if(((d_2 != NULL) && (d_2 != t)))
      _fail(t);
    else
      d_2 = t;
    t = SSLgetAnnotations(not_null(b_2));
    if(((y_1 != NULL) && (y_1 != t)))
      _fail(t);
    else
      y_1 = t;
    t = not_null(d_2);
  }
  t = not_null(w_1);
  t = f_68(t);
  if(((z_1 != NULL) && (z_1 != t)))
    _fail(t);
  else
    z_1 = t;
  t = not_null(x_1);
  t = g_68(t);
  if(((a_2 != NULL) && (a_2 != t)))
    _fail(t);
  else
    a_2 = t;
  {
    ATerm c_2 = NULL;
    ATerm e_2 = NULL;
    if(((e_2 != NULL) && (e_2 != t)))
      _fail(t);
    else
      e_2 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(z_1), not_null(a_2)), not_null(y_1));
    if(((c_2 != NULL) && (c_2 != t)))
      _fail(t);
    else
      c_2 = t;
    t = not_null(e_2);
    t = not_null(c_2);
  }
  return(t);
}
ATerm mark_rec_0_0 (ATerm t)
{
  ATerm m_27 = NULL;
  if(match_cons(t, sym_Rec_2))
    {
      ATerm n_16 = ATgetArgument(t, 0);
      ATerm o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_2 = NULL;
    if(((f_2 != NULL) && (f_2 != t)))
      _fail(t);
    else
      f_2 = t;
    t = save_MarkVar_0_0(t);
    if(((m_27 != NULL) && (m_27 != t)))
      _fail(t);
    else
      m_27 = t;
    t = not_null(f_2);
    {
      ATerm g_2 = NULL;
      if(((g_2 != NULL) && (g_2 != t)))
        _fail(t);
      else
        g_2 = t;
      t = Rec_2_0(_id, mark_buv_0_0, t);
      t = not_null(g_2);
      {
        ATerm h_2 = NULL;
        if(((h_2 != NULL) && (h_2 != t)))
          _fail(t);
        else
          h_2 = t;
        t = not_null(m_27);
        t = isect_MarkVar_0_0(t);
        t = not_null(h_2);
        t = Rec_2_0(_id, mark_buv_0_0, t);
      }
    }
  }
  return(t);
}
ATerm PrimT_3_0 (ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm t)
{
  ATerm l_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL;
  ATerm p_2 = NULL;
  if(((p_2 != NULL) && (p_2 != t)))
    _fail(t);
  else
    p_2 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      if(((i_2 != NULL) && (i_2 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_2 = ATgetArgument(t, 0);
      if(((j_2 != NULL) && (j_2 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_2 = ATgetArgument(t, 1);
      if(((k_2 != NULL) && (k_2 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        k_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm r_2 = NULL;
    if(((r_2 != NULL) && (r_2 != t)))
      _fail(t);
    else
      r_2 = t;
    t = SSLgetAnnotations(not_null(p_2));
    if(((l_2 != NULL) && (l_2 != t)))
      _fail(t);
    else
      l_2 = t;
    t = not_null(r_2);
  }
  t = not_null(i_2);
  t = o_68(t);
  if(((m_2 != NULL) && (m_2 != t)))
    _fail(t);
  else
    m_2 = t;
  t = not_null(j_2);
  t = p_68(t);
  if(((n_2 != NULL) && (n_2 != t)))
    _fail(t);
  else
    n_2 = t;
  t = not_null(k_2);
  t = q_68(t);
  if(((o_2 != NULL) && (o_2 != t)))
    _fail(t);
  else
    o_2 = t;
  {
    ATerm q_2 = NULL;
    ATerm s_2 = NULL;
    if(((s_2 != NULL) && (s_2 != t)))
      _fail(t);
    else
      s_2 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(m_2), not_null(n_2), not_null(o_2)), not_null(l_2));
    if(((q_2 != NULL) && (q_2 != t)))
      _fail(t);
    else
      q_2 = t;
    t = not_null(s_2);
    t = not_null(q_2);
  }
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm d_27 = NULL;
  t = PrimT_3_0(_id, _id, _id, t);
  {
    ATerm t_2 = NULL;
    if(((t_2 != NULL) && (t_2 != t)))
      _fail(t);
    else
      t_2 = t;
    t = save_MarkVar_0_0(t);
    if(((d_27 != NULL) && (d_27 != t)))
      _fail(t);
    else
      d_27 = t;
    t = not_null(t_2);
    {
      ATerm c_12 (ATerm t)
      {
        ATerm d_12 (ATerm t)
        {
          t = alltd_1_0(MarkVar_0_0, t);
          return(t);
        }
        t = map_1_0(d_12, t);
        return(t);
      }
      t = PrimT_3_0(_id, _id, c_12, t);
      t = PrimT_3_0(_id, mark_buv_0_0, _id, t);
      {
        ATerm u_2 = NULL;
        if(((u_2 != NULL) && (u_2 != t)))
          _fail(t);
        else
          u_2 = t;
        t = not_null(d_27);
        t = isect_MarkVar_0_0(t);
        t = not_null(u_2);
      }
    }
  }
  return(t);
}
ATerm Call_2_0 (ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm t)
{
  ATerm x_2 = NULL,v_2 = NULL,w_2 = NULL,y_2 = NULL,z_2 = NULL;
  ATerm a_3 = NULL;
  if(((a_3 != NULL) && (a_3 != t)))
    _fail(t);
  else
    a_3 = t;
  if(match_cons(t, sym_Call_2))
    {
      if(((v_2 != NULL) && (v_2 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_2 = ATgetArgument(t, 0);
      if(((w_2 != NULL) && (w_2 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_3 = NULL;
    if(((c_3 != NULL) && (c_3 != t)))
      _fail(t);
    else
      c_3 = t;
    t = SSLgetAnnotations(not_null(a_3));
    if(((x_2 != NULL) && (x_2 != t)))
      _fail(t);
    else
      x_2 = t;
    t = not_null(c_3);
  }
  t = not_null(v_2);
  t = k_67(t);
  if(((y_2 != NULL) && (y_2 != t)))
    _fail(t);
  else
    y_2 = t;
  t = not_null(w_2);
  t = l_67(t);
  if(((z_2 != NULL) && (z_2 != t)))
    _fail(t);
  else
    z_2 = t;
  {
    ATerm b_3 = NULL;
    ATerm d_3 = NULL;
    if(((d_3 != NULL) && (d_3 != t)))
      _fail(t);
    else
      d_3 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(y_2), not_null(z_2)), not_null(x_2));
    if(((b_3 != NULL) && (b_3 != t)))
      _fail(t);
    else
      b_3 = t;
    t = not_null(d_3);
    t = not_null(b_3);
  }
  return(t);
}
ATerm CallT_3_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm o_67 (ATerm), ATerm t)
{
  ATerm h_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
  ATerm l_3 = NULL;
  if(((l_3 != NULL) && (l_3 != t)))
    _fail(t);
  else
    l_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      if(((e_3 != NULL) && (e_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_3 = ATgetArgument(t, 0);
      if(((f_3 != NULL) && (f_3 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_3 = ATgetArgument(t, 1);
      if(((g_3 != NULL) && (g_3 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        g_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm n_3 = NULL;
    if(((n_3 != NULL) && (n_3 != t)))
      _fail(t);
    else
      n_3 = t;
    t = SSLgetAnnotations(not_null(l_3));
    if(((h_3 != NULL) && (h_3 != t)))
      _fail(t);
    else
      h_3 = t;
    t = not_null(n_3);
  }
  t = not_null(e_3);
  t = m_67(t);
  if(((i_3 != NULL) && (i_3 != t)))
    _fail(t);
  else
    i_3 = t;
  t = not_null(f_3);
  t = n_67(t);
  if(((j_3 != NULL) && (j_3 != t)))
    _fail(t);
  else
    j_3 = t;
  t = not_null(g_3);
  t = o_67(t);
  if(((k_3 != NULL) && (k_3 != t)))
    _fail(t);
  else
    k_3 = t;
  {
    ATerm m_3 = NULL;
    ATerm o_3 = NULL;
    if(((o_3 != NULL) && (o_3 != t)))
      _fail(t);
    else
      o_3 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(i_3), not_null(j_3), not_null(k_3)), not_null(h_3));
    if(((m_3 != NULL) && (m_3 != t)))
      _fail(t);
    else
      m_3 = t;
    t = not_null(o_3);
    t = not_null(m_3);
  }
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_27 = NULL;
      t = CallT_3_0(_id, _id, _id, t);
      {
        ATerm p_3 = NULL;
        if(((p_3 != NULL) && (p_3 != t)))
          _fail(t);
        else
          p_3 = t;
        t = save_MarkVar_0_0(t);
        if(((c_27 != NULL) && (c_27 != t)))
          _fail(t);
        else
          c_27 = t;
        t = not_null(p_3);
        {
          ATerm e_12 (ATerm t)
          {
            ATerm f_12 (ATerm t)
            {
              t = alltd_1_0(MarkVar_0_0, t);
              return(t);
            }
            t = map_1_0(f_12, t);
            return(t);
          }
          t = CallT_3_0(_id, _id, e_12, t);
          t = CallT_3_0(_id, mark_buv_0_0, _id, t);
          {
            ATerm q_3 = NULL;
            if(((q_3 != NULL) && (q_3 != t)))
              _fail(t);
            else
              q_3 = t;
            t = not_null(c_27);
            t = isect_MarkVar_0_0(t);
            t = not_null(q_3);
          }
        }
      }
      ;
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
      {
        ATerm b_27 = NULL;
        t = Call_2_0(_id, _id, t);
        {
          ATerm r_3 = NULL;
          if(((r_3 != NULL) && (r_3 != t)))
            _fail(t);
          else
            r_3 = t;
          t = save_MarkVar_0_0(t);
          if(((b_27 != NULL) && (b_27 != t)))
            _fail(t);
          else
            b_27 = t;
          t = not_null(r_3);
          t = Call_2_0(_id, mark_buv_0_0, t);
          {
            ATerm s_3 = NULL;
            if(((s_3 != NULL) && (s_3 != t)))
              _fail(t);
            else
              s_3 = t;
            t = not_null(b_27);
            t = isect_MarkVar_0_0(t);
            t = not_null(s_3);
          }
        }
      }
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm a_70 (ATerm), ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm d_70 (ATerm), ATerm t)
{
  ATerm x_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL;
  ATerm c_4 = NULL;
  if(((c_4 != NULL) && (c_4 != t)))
    _fail(t);
  else
    c_4 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      if(((t_3 != NULL) && (t_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_3 = ATgetArgument(t, 0);
      if(((u_3 != NULL) && (u_3 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_3 = ATgetArgument(t, 1);
      if(((v_3 != NULL) && (v_3 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        v_3 = ATgetArgument(t, 2);
      if(((w_3 != NULL) && (w_3 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        w_3 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm e_4 = NULL;
    if(((e_4 != NULL) && (e_4 != t)))
      _fail(t);
    else
      e_4 = t;
    t = SSLgetAnnotations(not_null(c_4));
    if(((x_3 != NULL) && (x_3 != t)))
      _fail(t);
    else
      x_3 = t;
    t = not_null(e_4);
  }
  t = not_null(t_3);
  t = a_70(t);
  if(((y_3 != NULL) && (y_3 != t)))
    _fail(t);
  else
    y_3 = t;
  t = not_null(u_3);
  t = b_70(t);
  if(((z_3 != NULL) && (z_3 != t)))
    _fail(t);
  else
    z_3 = t;
  t = not_null(v_3);
  t = c_70(t);
  if(((a_4 != NULL) && (a_4 != t)))
    _fail(t);
  else
    a_4 = t;
  t = not_null(w_3);
  t = d_70(t);
  if(((b_4 != NULL) && (b_4 != t)))
    _fail(t);
  else
    b_4 = t;
  {
    ATerm d_4 = NULL;
    ATerm f_4 = NULL;
    if(((f_4 != NULL) && (f_4 != t)))
      _fail(t);
    else
      f_4 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(y_3), not_null(z_3), not_null(a_4), not_null(b_4)), not_null(x_3));
    if(((d_4 != NULL) && (d_4 != t)))
      _fail(t);
    else
      d_4 = t;
    t = not_null(f_4);
    t = not_null(d_4);
  }
  return(t);
}
ATerm mark_sdef_0_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm r_16 = ATgetArgument(t, 0);
      ATerm s_16 = ATgetArgument(t, 1);
      if(((g_27 != NULL) && (g_27 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        g_27 = ATgetArgument(t, 2);
      {
        ATerm t_16 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm g_4 = NULL;
    if(((g_4 != NULL) && (g_4 != t)))
      _fail(t);
    else
      g_4 = t;
    t = term_u_16;
    if(((h_27 != NULL) && (h_27 != t)))
      _fail(t);
    else
      h_27 = t;
    t = not_null(g_4);
    {
      ATerm g_12 (ATerm t)
      {
        ATerm h_12 (ATerm t)
        {
          t = term_v_16;
          return(t);
        }
        ATerm i_12 (ATerm t)
        {
          ATerm h_4 = NULL;
          if(((h_4 != NULL) && (h_4 != t)))
            _fail(t);
          else
            h_4 = t;
          t = not_null(g_27);
          {
            ATerm j_12 (ATerm t)
            {
              ATerm i_27 = NULL;
              if(match_cons(t, sym_VarDec_2))
                {
                  if(((i_27 != NULL) && (i_27 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    i_27 = ATgetArgument(t, 0);
                  {
                    ATerm w_16 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              {
                ATerm i_4 = NULL;
                if(((i_4 != NULL) && (i_4 != t)))
                  _fail(t);
                else
                  i_4 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_27)), (ATerm) ATmakeAppl(sym_Defined_2, term_x_16, not_null(h_27)));
                {
                  ATerm k_12 (ATerm t)
                  {
                    t = term_v_16;
                    return(t);
                  }
                  t = assert_1_0(k_12, t);
                  t = not_null(i_4);
                }
              }
              return(t);
            }
            t = map_1_0(j_12, t);
            t = not_null(h_4);
          }
          t = mark_buv_0_0(t);
          return(t);
        }
        t = scope_2_0(h_12, i_12, t);
        return(t);
      }
      t = SDefT_4_0(_id, _id, _id, g_12, t);
    }
  }
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm a_27 = NULL;
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_All_1))
        {
          ATerm a_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      ;
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_One_1))
              {
                ATerm d_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            {
              ATerm e_17 = t;
              int f_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Some_1))
                    {
                      ATerm g_17 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  ;
                  LocalPopChoice(f_17);
                }
              else
                {
                  t = e_17;
                  if(match_cons(t, sym_Thread_1))
                    {
                      ATerm h_17 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                }
            }
          }
      }
    }
  {
    ATerm j_4 = NULL;
    if(((j_4 != NULL) && (j_4 != t)))
      _fail(t);
    else
      j_4 = t;
    t = save_MarkVar_0_0(t);
    if(((a_27 != NULL) && (a_27 != t)))
      _fail(t);
    else
      a_27 = t;
    t = not_null(j_4);
    t = SRTS_one(mark_buv_0_0, t);
    {
      ATerm k_4 = NULL;
      if(((k_4 != NULL) && (k_4 != t)))
        _fail(t);
      else
        k_4 = t;
      t = not_null(a_27);
      t = isect_MarkVar_0_0(t);
      t = not_null(k_4);
    }
  }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm w_29 = NULL;
  if(((w_29 != NULL) && (w_29 != t)))
    _fail(t);
  else
    w_29 = t;
  t = SSL_table_keys(not_null(w_29));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm b_29 = NULL;
  if(((b_29 != NULL) && (b_29 != t)))
    _fail(t);
  else
    b_29 = t;
  t = table_keys_0_0(t);
  {
    ATerm l_12 (ATerm t)
    {
      ATerm c_29 = NULL;
      if(((c_29 != NULL) && (c_29 != t)))
        _fail(t);
      else
        c_29 = t;
      {
        ATerm c_154 = NULL;
        ATerm l_4 = NULL;
        if(((l_4 != NULL) && (l_4 != t)))
          _fail(t);
        else
          l_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_29), not_null(c_29));
        t = table_get_0_0(t);
        if(((c_154 != NULL) && (c_154 != t)))
          _fail(t);
        else
          c_154 = t;
        t = not_null(l_4);
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), not_null(c_154));
      }
      return(t);
    }
    t = map_1_0(l_12, t);
  }
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_v_16;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_29 != NULL) && (e_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_29 = ATgetArgument(t, 0);
      if(((d_29 != NULL) && (d_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(d_29);
  {
    ATerm m_12 (ATerm t)
    {
      ATerm f_29 = NULL,g_29 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((f_29 != NULL) && (f_29 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            f_29 = ATgetArgument(t, 0);
          if(((g_29 != NULL) && (g_29 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            g_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(e_29), not_null(f_29), not_null(g_29));
      t = table_put_0_0(t);
      return(t);
    }
    t = map_1_0(m_12, t);
  }
  return(t);
}
ATerm restore_MarkVar_0_0 (ATerm t)
{
  ATerm j_26 = NULL;
  if(((j_26 != NULL) && (j_26 != t)))
    _fail(t);
  else
    j_26 = t;
  {
    ATerm m_4 = NULL;
    if(((m_4 != NULL) && (m_4 != t)))
      _fail(t);
    else
      m_4 = t;
    t = term_v_16;
    t = table_destroy_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, term_v_16, not_null(j_26));
    t = table_putlist_0_0(t);
    t = not_null(m_4);
  }
  return(t);
}
ATerm Let_2_0 (ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,n_4 = NULL,o_4 = NULL,q_4 = NULL,r_4 = NULL;
  ATerm s_4 = NULL;
  if(((s_4 != NULL) && (s_4 != t)))
    _fail(t);
  else
    s_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      if(((n_4 != NULL) && (n_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_4 = ATgetArgument(t, 0);
      if(((o_4 != NULL) && (o_4 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_4 = NULL;
    if(((u_4 != NULL) && (u_4 != t)))
      _fail(t);
    else
      u_4 = t;
    t = SSLgetAnnotations(not_null(s_4));
    if(((p_4 != NULL) && (p_4 != t)))
      _fail(t);
    else
      p_4 = t;
    t = not_null(u_4);
  }
  t = not_null(n_4);
  t = i_67(t);
  if(((q_4 != NULL) && (q_4 != t)))
    _fail(t);
  else
    q_4 = t;
  t = not_null(o_4);
  t = j_67(t);
  if(((r_4 != NULL) && (r_4 != t)))
    _fail(t);
  else
    r_4 = t;
  {
    ATerm t_4 = NULL;
    ATerm v_4 = NULL;
    if(((v_4 != NULL) && (v_4 != t)))
      _fail(t);
    else
      v_4 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(q_4), not_null(r_4)), not_null(p_4));
    if(((t_4 != NULL) && (t_4 != t)))
      _fail(t);
    else
      t_4 = t;
    t = not_null(v_4);
    t = not_null(t_4);
  }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm w_4 = NULL;
  if(((w_4 != NULL) && (w_4 != t)))
    _fail(t);
  else
    w_4 = t;
  t = save_MarkVar_0_0(t);
  t = not_null(w_4);
  {
    ATerm n_12 (ATerm t)
    {
      ATerm o_12 (ATerm t)
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm k_17 = ATgetArgument(t, 0);
                if(!(match_cons(k_17, sym_Scopes_0)))
                  _fail(t);
                {
                  ATerm l_17 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            ;
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            {
              ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
              if(match_cons(t, sym__2))
                {
                  if(((k_26 != NULL) && (k_26 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    k_26 = ATgetArgument(t, 0);
                  {
                    ATerm m_17 = ATgetArgument(t, 1);
                    if(((ATgetType(m_17) == AT_LIST) && !(ATisEmpty(m_17))))
                      {
                        ATerm n_17 = ATgetFirst((ATermList) m_17);
                        if(match_cons(n_17, sym_Defined_2))
                          {
                            ATerm o_17 = ATgetArgument(n_17, 0);
                            if(((m_26 != NULL) && (m_26 != ATgetArgument(n_17, 1))))
                              _fail(ATgetArgument(n_17, 1));
                            else
                              m_26 = ATgetArgument(n_17, 1);
                          }
                        else
                          _fail(t);
                        if(((l_26 != NULL) && (l_26 != (ATerm) ATgetNext((ATermList) m_17))))
                          _fail((ATerm) ATgetNext((ATermList) m_17));
                        else
                          l_26 = (ATerm) ATgetNext((ATermList) m_17);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              {
                ATerm p_17 = t;
                int q_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_4 = NULL;
                    if(((x_4 != NULL) && (x_4 != t)))
                      _fail(t);
                    else
                      x_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_v_16, not_null(k_26));
                    t = table_get_0_0(t);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm r_17 = ATgetFirst((ATermList) t);
                        if(match_cons(r_17, sym_Defined_2))
                          {
                            ATerm t_17 = ATgetArgument(r_17, 0);
                            if(((m_26 != NULL) && (m_26 != ATgetArgument(r_17, 1))))
                              _fail(ATgetArgument(r_17, 1));
                            else
                              m_26 = ATgetArgument(r_17, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm s_17 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = not_null(x_4);
                    ;
                    LocalPopChoice(q_17);
                  }
                else
                  {
                    t = p_17;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_26), (ATerm) ATinsert(CheckATermList(not_null(l_26)), term_u_17));
                  }
              }
            }
          }
        return(t);
      }
      t = try_1_0(o_12, t);
      return(t);
    }
    t = map_1_0(n_12, t);
    t = restore_MarkVar_0_0(t);
  }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL;
  t = Let_2_0(_id, _id, t);
  {
    ATerm y_4 = NULL;
    if(((y_4 != NULL) && (y_4 != t)))
      _fail(t);
    else
      y_4 = t;
    {
      ATerm z_4 = NULL;
      if(((z_4 != NULL) && (z_4 != t)))
        _fail(t);
      else
        z_4 = t;
      t = save_MarkVar_0_0(t);
      if(((e_27 != NULL) && (e_27 != t)))
        _fail(t);
      else
        e_27 = t;
      t = not_null(z_4);
      {
        ATerm p_12 (ATerm t)
        {
          ATerm r_12 (ATerm t)
          {
            t = mark_buv_0_0(t);
            {
              ATerm a_5 = NULL;
              if(((a_5 != NULL) && (a_5 != t)))
                _fail(t);
              else
                a_5 = t;
              t = not_null(e_27);
              t = isect_MarkVar_0_0(t);
              t = not_null(a_5);
            }
            return(t);
          }
          t = map_1_0(r_12, t);
          return(t);
        }
        ATerm q_12 (ATerm t)
        {
          t = mark_buv_0_0(t);
          {
            ATerm b_5 = NULL;
            if(((b_5 != NULL) && (b_5 != t)))
              _fail(t);
            else
              b_5 = t;
            t = not_null(e_27);
            t = isect_MarkVar_0_0(t);
            t = not_null(b_5);
          }
          return(t);
        }
        t = Let_2_0(p_12, q_12, t);
        t = not_null(y_4);
      }
    }
    {
      ATerm c_5 = NULL;
      if(((c_5 != NULL) && (c_5 != t)))
        _fail(t);
      else
        c_5 = t;
      t = save_MarkVar_0_0(t);
      if(((f_27 != NULL) && (f_27 != t)))
        _fail(t);
      else
        f_27 = t;
      t = not_null(c_5);
      {
        ATerm s_12 (ATerm t)
        {
          ATerm u_12 (ATerm t)
          {
            ATerm d_5 = NULL;
            if(((d_5 != NULL) && (d_5 != t)))
              _fail(t);
            else
              d_5 = t;
            t = not_null(f_27);
            t = restore_MarkVar_0_0(t);
            t = not_null(d_5);
            t = mark_buv_0_0(t);
            return(t);
          }
          t = map_1_0(u_12, t);
          return(t);
        }
        ATerm t_12 (ATerm t)
        {
          ATerm e_5 = NULL;
          if(((e_5 != NULL) && (e_5 != t)))
            _fail(t);
          else
            e_5 = t;
          t = not_null(f_27);
          t = restore_MarkVar_0_0(t);
          t = not_null(e_5);
          t = mark_buv_0_0(t);
          return(t);
        }
        t = Let_2_0(s_12, t_12, t);
        {
          ATerm f_5 = NULL;
          if(((f_5 != NULL) && (f_5 != t)))
            _fail(t);
          else
            f_5 = t;
          t = save_MarkVar_0_0(t);
          t = not_null(f_5);
        }
      }
    }
  }
  return(t);
}
ATerm assert_1_0 (ATerm f_76 (ATerm), ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_27 != NULL) && (w_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_27 = ATgetArgument(t, 0);
      if(((u_27 != NULL) && (u_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_5 = NULL;
    if(((g_5 != NULL) && (g_5 != t)))
      _fail(t);
    else
      g_5 = t;
    t = f_76(t);
    if(((v_27 != NULL) && (v_27 != t)))
      _fail(t);
    else
      v_27 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(v_27), not_null(w_27), not_null(u_27));
    t = table_push_0_0(t);
    {
      ATerm v_17 = t;
      int w_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_27), term_x_17);
          t = table_get_0_0(t);
          ;
          LocalPopChoice(w_17);
        }
      else
        {
          t = v_17;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((x_27 != NULL) && (x_27 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            x_27 = ATgetFirst((ATermList) t);
          if(((y_27 != NULL) && (y_27 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(v_27), term_x_17, (ATerm) ATinsert(CheckATermList(not_null(y_27)), (ATerm) ATinsert(CheckATermList(not_null(x_27)), not_null(w_27))));
      t = table_put_0_0(t);
      t = not_null(g_5);
    }
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm f_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_17 = ATgetFirst((ATermList) t);
      if(((f_32 != NULL) && (f_32 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        f_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(f_32);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_28 != NULL) && (g_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_28 = ATgetArgument(t, 0);
      if(((h_28 != NULL) && (h_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_5 = NULL;
    if(((h_5 != NULL) && (h_5 != t)))
      _fail(t);
    else
      h_5 = t;
    {
      ATerm u_146 = NULL;
      ATerm i_5 = NULL;
      if(((i_5 != NULL) && (i_5 != t)))
        _fail(t);
      else
        i_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_28), not_null(h_28));
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = table_get_0_0(t);
            t = Tl_0_0(t);
            ;
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
            t = (ATerm) ATempty;
          }
        if(((u_146 != NULL) && (u_146 != t)))
          _fail(t);
        else
          u_146 = t;
        t = not_null(i_5);
      }
      t = (ATerm) ATmakeAppl(sym__3, not_null(g_28), not_null(h_28), not_null(u_146));
      t = table_put_0_0(t);
      t = not_null(h_5);
    }
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,j_5 = NULL;
  if(((j_5 != NULL) && (j_5 != t)))
    _fail(t);
  else
    j_5 = t;
  t = c_76(t);
  if(((s_27 != NULL) && (s_27 != t)))
    _fail(t);
  else
    s_27 = t;
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_27), term_x_17);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((r_27 != NULL) && (r_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          r_27 = ATgetFirst((ATermList) t);
        if(((q_27 != NULL) && (q_27 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          q_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(s_27), term_x_17, not_null(q_27));
    t = table_put_0_0(t);
    t = not_null(r_27);
    {
      ATerm v_12 (ATerm t)
      {
        ATerm t_27 = NULL;
        if(((t_27 != NULL) && (t_27 != t)))
          _fail(t);
        else
          t_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_27), not_null(t_27));
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(v_12, t);
      t = not_null(j_5);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm t)
{
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_88(t);
      t = x_88(t);
      ;
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      t = x_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_76 (ATerm), ATerm t)
{
  ATerm p_27 = NULL,k_5 = NULL;
  if(((k_5 != NULL) && (k_5 != t)))
    _fail(t);
  else
    k_5 = t;
  t = b_76(t);
  if(((p_27 != NULL) && (p_27 != t)))
    _fail(t);
  else
    p_27 = t;
  {
    ATerm d_139 = NULL;
    ATerm l_5 = NULL;
    if(((l_5 != NULL) && (l_5 != t)))
      _fail(t);
    else
      l_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), term_x_17);
    {
      ATerm f_18 = t;
      int g_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = table_get_0_0(t);
          ;
          LocalPopChoice(g_18);
        }
      else
        {
          t = f_18;
          t = (ATerm) ATempty;
        }
      if(((d_139 != NULL) && (d_139 != t)))
        _fail(t);
      else
        d_139 = t;
      t = not_null(l_5);
    }
    t = (ATerm) ATmakeAppl(sym__3, not_null(p_27), term_x_17, (ATerm) ATinsert(CheckATermList(not_null(d_139)), (ATerm) ATempty));
    t = table_put_0_0(t);
    t = not_null(k_5);
  }
  return(t);
}
ATerm scope_2_0 (ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm t)
{
  t = begin_scope_1_0(d_76, t);
  {
    ATerm w_12 (ATerm t)
    {
      t = end_scope_1_0(d_76, t);
      return(t);
    }
    t = restore_always_2_0(e_76, w_12, t);
  }
  return(t);
}
ATerm Scope_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm t)
{
  ATerm o_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL,q_5 = NULL;
  ATerm r_5 = NULL;
  if(((r_5 != NULL) && (r_5 != t)))
    _fail(t);
  else
    r_5 = t;
  if(match_cons(t, sym_Scope_2))
    {
      if(((m_5 != NULL) && (m_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_5 = ATgetArgument(t, 0);
      if(((n_5 != NULL) && (n_5 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_5 = NULL;
    if(((t_5 != NULL) && (t_5 != t)))
      _fail(t);
    else
      t_5 = t;
    t = SSLgetAnnotations(not_null(r_5));
    if(((o_5 != NULL) && (o_5 != t)))
      _fail(t);
    else
      o_5 = t;
    t = not_null(t_5);
  }
  t = not_null(m_5);
  t = s_67(t);
  if(((p_5 != NULL) && (p_5 != t)))
    _fail(t);
  else
    p_5 = t;
  t = not_null(n_5);
  t = t_67(t);
  if(((q_5 != NULL) && (q_5 != t)))
    _fail(t);
  else
    q_5 = t;
  {
    ATerm s_5 = NULL;
    ATerm u_5 = NULL;
    if(((u_5 != NULL) && (u_5 != t)))
      _fail(t);
    else
      u_5 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(p_5), not_null(q_5)), not_null(o_5));
    if(((s_5 != NULL) && (s_5 != t)))
      _fail(t);
    else
      s_5 = t;
    t = not_null(u_5);
    t = not_null(s_5);
  }
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      if(((n_26 != NULL) && (n_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_26 = ATgetArgument(t, 0);
      {
        ATerm h_18 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm v_5 = NULL;
    if(((v_5 != NULL) && (v_5 != t)))
      _fail(t);
    else
      v_5 = t;
    t = term_i_18;
    if(((o_26 != NULL) && (o_26 != t)))
      _fail(t);
    else
      o_26 = t;
    t = not_null(v_5);
    {
      ATerm x_12 (ATerm t)
      {
        ATerm y_12 (ATerm t)
        {
          t = term_v_16;
          return(t);
        }
        ATerm z_12 (ATerm t)
        {
          ATerm w_5 = NULL;
          if(((w_5 != NULL) && (w_5 != t)))
            _fail(t);
          else
            w_5 = t;
          t = not_null(n_26);
          {
            ATerm a_13 (ATerm t)
            {
              ATerm p_26 = NULL;
              if(((p_26 != NULL) && (p_26 != t)))
                _fail(t);
              else
                p_26 = t;
              {
                ATerm x_5 = NULL;
                if(((x_5 != NULL) && (x_5 != t)))
                  _fail(t);
                else
                  x_5 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_26)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_18, not_null(o_26)));
                {
                  ATerm b_13 (ATerm t)
                  {
                    t = term_v_16;
                    return(t);
                  }
                  t = assert_1_0(b_13, t);
                  t = not_null(x_5);
                }
              }
              return(t);
            }
            t = map_1_0(a_13, t);
            t = not_null(w_5);
          }
          t = mark_buv_0_0(t);
          return(t);
        }
        t = scope_2_0(y_12, z_12, t);
        return(t);
      }
      t = Scope_2_0(_id, x_12, t);
    }
  }
  return(t);
}
ATerm Build_1_0 (ATerm q_67 (ATerm), ATerm t)
{
  ATerm z_5 = NULL,y_5 = NULL,a_6 = NULL;
  ATerm b_6 = NULL;
  if(((b_6 != NULL) && (b_6 != t)))
    _fail(t);
  else
    b_6 = t;
  if(match_cons(t, sym_Build_1))
    {
      if(((y_5 != NULL) && (y_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_6 = NULL;
    if(((d_6 != NULL) && (d_6 != t)))
      _fail(t);
    else
      d_6 = t;
    t = SSLgetAnnotations(not_null(b_6));
    if(((z_5 != NULL) && (z_5 != t)))
      _fail(t);
    else
      z_5 = t;
    t = not_null(d_6);
  }
  t = not_null(y_5);
  t = q_67(t);
  if(((a_6 != NULL) && (a_6 != t)))
    _fail(t);
  else
    a_6 = t;
  {
    ATerm c_6 = NULL;
    ATerm e_6 = NULL;
    if(((e_6 != NULL) && (e_6 != t)))
      _fail(t);
    else
      e_6 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(a_6)), not_null(z_5));
    if(((c_6 != NULL) && (c_6 != t)))
      _fail(t);
    else
      c_6 = t;
    t = not_null(e_6);
    t = not_null(c_6);
  }
  return(t);
}
ATerm mark_build_0_0 (ATerm t)
{
  ATerm c_13 (ATerm t)
  {
    t = alltd_1_0(MarkVar_0_0, t);
    return(t);
  }
  t = Build_1_0(c_13, t);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((o_28 != NULL) && (o_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_28 = ATgetArgument(t, 0);
      if(((p_28 != NULL) && (p_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_28 = ATgetArgument(t, 1);
      if(((q_28 != NULL) && (q_28 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        q_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm f_6 = NULL;
    if(((f_6 != NULL) && (f_6 != t)))
      _fail(t);
    else
      f_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), not_null(p_28));
    t = table_get_0_0(t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm k_18 = ATgetFirst((ATermList) t);
        if(((r_28 != NULL) && (r_28 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          r_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(o_28), not_null(p_28), (ATerm) ATinsert(CheckATermList(not_null(r_28)), not_null(q_28)));
    t = table_put_0_0(t);
    t = not_null(f_6);
  }
  return(t);
}
ATerm override_key_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_28 != NULL) && (a_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_28 = ATgetArgument(t, 0);
      if(((b_28 != NULL) && (b_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_6 = NULL;
    if(((g_6 != NULL) && (g_6 != t)))
      _fail(t);
    else
      g_6 = t;
    t = g_76(t);
    if(((z_27 != NULL) && (z_27 != t)))
      _fail(t);
    else
      z_27 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(z_27), not_null(a_28), not_null(b_28));
    t = table_replace_0_0(t);
    t = not_null(g_6);
  }
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm e_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((e_32 != NULL) && (e_32 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        e_32 = ATgetFirst((ATermList) t);
      {
        ATerm l_18 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(e_32);
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_28 != NULL) && (m_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_28 = ATgetArgument(t, 0);
      if(((n_28 != NULL) && (n_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = table_get_0_0(t);
  t = Hd_0_0(t);
  return(t);
}
ATerm rewrite_1_0 (ATerm h_76 (ATerm), ATerm t)
{
  ATerm c_28 = NULL;
  if(((c_28 != NULL) && (c_28 != t)))
    _fail(t);
  else
    c_28 = t;
  {
    ATerm e_143 = NULL;
    ATerm h_6 = NULL;
    if(((h_6 != NULL) && (h_6 != t)))
      _fail(t);
    else
      h_6 = t;
    t = term_m_18;
    t = h_76(t);
    if(((e_143 != NULL) && (e_143 != t)))
      _fail(t);
    else
      e_143 = t;
    t = not_null(h_6);
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_143), not_null(c_28));
    t = table_lookup_0_0(t);
  }
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
      if(((k_27 != NULL) && (k_27 != t)))
        _fail(t);
      else
        k_27 = t;
      if(match_cons(t, sym_Var_1))
        {
          if(((j_27 != NULL) && (j_27 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm i_6 = NULL;
        if(((i_6 != NULL) && (i_6 != t)))
          _fail(t);
        else
          i_6 = t;
        t = not_null(k_27);
        {
          ATerm d_13 (ATerm t)
          {
            t = term_v_16;
            return(t);
          }
          t = rewrite_1_0(d_13, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm p_18 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_18) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              if(((l_27 != NULL) && (l_27 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                l_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(i_6);
        }
        {
          ATerm m_136 = NULL;
          ATerm j_6 = NULL;
          if(((j_6 != NULL) && (j_6 != t)))
            _fail(t);
          else
            j_6 = t;
          {
            ATerm n_136 = NULL,o_136 = NULL;
            ATerm k_6 = NULL;
            if(((k_6 != NULL) && (k_6 != t)))
              _fail(t);
            else
              k_6 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_27));
            if(((n_136 != NULL) && (n_136 != t)))
              _fail(t);
            else
              n_136 = t;
            t = not_null(k_6);
            {
              ATerm l_6 = NULL;
              if(((l_6 != NULL) && (l_6 != t)))
                _fail(t);
              else
                l_6 = t;
              t = (ATerm) ATinsert(ATempty, not_null(l_27));
              if(((o_136 != NULL) && (o_136 != t)))
                _fail(t);
              else
                o_136 = t;
              t = not_null(l_6);
              t = SSLsetAnnotations(not_null(n_136), not_null(o_136));
            }
            if(((m_136 != NULL) && (m_136 != t)))
              _fail(t);
            else
              m_136 = t;
            t = not_null(j_6);
          }
          t = not_null(m_136);
        }
      }
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      {
        ATerm q_18 = t;
        int r_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
            if(((y_26 != NULL) && (y_26 != t)))
              _fail(t);
            else
              y_26 = t;
            if(match_cons(t, sym_Var_1))
              {
                if(((x_26 != NULL) && (x_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            {
              ATerm m_6 = NULL;
              if(((m_6 != NULL) && (m_6 != t)))
                _fail(t);
              else
                m_6 = t;
              t = not_null(y_26);
              {
                ATerm e_13 (ATerm t)
                {
                  t = term_v_16;
                  return(t);
                }
                t = rewrite_1_0(e_13, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm s_18 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) s_18) != ATmakeSymbol("f_0", 0, ATtrue)))
                      _fail(t);
                    if(((z_26 != NULL) && (z_26 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      z_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = not_null(m_6);
              }
              {
                ATerm d_130 = NULL;
                ATerm n_6 = NULL;
                if(((n_6 != NULL) && (n_6 != t)))
                  _fail(t);
                else
                  n_6 = t;
                {
                  ATerm e_130 = NULL,f_130 = NULL;
                  ATerm o_6 = NULL;
                  if(((o_6 != NULL) && (o_6 != t)))
                    _fail(t);
                  else
                    o_6 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_26));
                  if(((e_130 != NULL) && (e_130 != t)))
                    _fail(t);
                  else
                    e_130 = t;
                  t = not_null(o_6);
                  {
                    ATerm p_6 = NULL;
                    if(((p_6 != NULL) && (p_6 != t)))
                      _fail(t);
                    else
                      p_6 = t;
                    t = (ATerm) ATinsert(ATempty, not_null(z_26));
                    if(((f_130 != NULL) && (f_130 != t)))
                      _fail(t);
                    else
                      f_130 = t;
                    t = not_null(p_6);
                    t = SSLsetAnnotations(not_null(e_130), not_null(f_130));
                  }
                  if(((d_130 != NULL) && (d_130 != t)))
                    _fail(t);
                  else
                    d_130 = t;
                  t = not_null(n_6);
                }
                t = not_null(d_130);
              }
            }
            ;
            LocalPopChoice(r_18);
          }
        else
          {
            t = q_18;
            {
              ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
              if(((r_26 != NULL) && (r_26 != t)))
                _fail(t);
              else
                r_26 = t;
              if(match_cons(t, sym_Var_1))
                {
                  if(((q_26 != NULL) && (q_26 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    q_26 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              {
                ATerm q_6 = NULL;
                if(((q_6 != NULL) && (q_6 != t)))
                  _fail(t);
                else
                  q_6 = t;
                t = not_null(r_26);
                {
                  ATerm f_13 (ATerm t)
                  {
                    t = term_v_16;
                    return(t);
                  }
                  t = rewrite_1_0(f_13, t);
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm t_18 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) t_18) != ATmakeSymbol("b_0", 0, ATtrue)))
                        _fail(t);
                      if(((s_26 != NULL) && (s_26 != ATgetArgument(t, 1))))
                        _fail(ATgetArgument(t, 1));
                      else
                        s_26 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = not_null(q_6);
                }
                {
                  ATerm t_126 = NULL;
                  ATerm r_6 = NULL;
                  if(((r_6 != NULL) && (r_6 != t)))
                    _fail(t);
                  else
                    r_6 = t;
                  {
                    ATerm u_126 = NULL,v_126 = NULL;
                    ATerm s_6 = NULL;
                    if(((s_6 != NULL) && (s_6 != t)))
                      _fail(t);
                    else
                      s_6 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_26));
                    if(((u_126 != NULL) && (u_126 != t)))
                      _fail(t);
                    else
                      u_126 = t;
                    t = not_null(s_6);
                    {
                      ATerm t_6 = NULL;
                      if(((t_6 != NULL) && (t_6 != t)))
                        _fail(t);
                      else
                        t_6 = t;
                      t = (ATerm) ATinsert(ATempty, not_null(s_26));
                      if(((v_126 != NULL) && (v_126 != t)))
                        _fail(t);
                      else
                        v_126 = t;
                      t = not_null(t_6);
                      t = SSLsetAnnotations(not_null(u_126), not_null(v_126));
                    }
                    if(((t_126 != NULL) && (t_126 != t)))
                      _fail(t);
                    else
                      t_126 = t;
                    t = not_null(r_6);
                  }
                  t = not_null(t_126);
                }
              }
            }
          }
      }
    }
  return(t);
}
ATerm alltd_1_0 (ATerm b_78 (ATerm), ATerm t)
{
  ATerm c_78 (ATerm t)
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_78(t);
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = SRTS_all(c_78, t);
      }
    return(t);
  }
  t = c_78(t);
  return(t);
}
ATerm mark_match_0_0 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      if(((t_26 != NULL) && (t_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_6 = NULL;
    if(((u_6 != NULL) && (u_6 != t)))
      _fail(t);
    else
      u_6 = t;
    t = term_u_16;
    if(((u_26 != NULL) && (u_26 != t)))
      _fail(t);
    else
      u_26 = t;
    t = not_null(t_26);
    {
      ATerm g_13 (ATerm t)
      {
        t = MarkVar_0_0(t);
        {
          ATerm v_6 = NULL;
          if(((v_6 != NULL) && (v_6 != t)))
            _fail(t);
          else
            v_6 = t;
          {
            ATerm w_26 = NULL;
            if(match_cons(t, sym_Var_1))
              {
                if(((w_26 != NULL) && (w_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            {
              ATerm w_6 = NULL;
              if(((w_6 != NULL) && (w_6 != t)))
                _fail(t);
              else
                w_6 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_26)), (ATerm) ATmakeAppl(sym_Defined_2, term_w_18, not_null(u_26)));
              {
                ATerm h_13 (ATerm t)
                {
                  t = term_v_16;
                  return(t);
                }
                t = override_key_1_0(h_13, t);
                t = not_null(w_6);
              }
            }
            t = not_null(v_6);
          }
        }
        return(t);
      }
      t = alltd_1_0(g_13, t);
      if(((v_26 != NULL) && (v_26 != t)))
        _fail(t);
      else
        v_26 = t;
      t = not_null(u_6);
    }
    t = (ATerm) ATmakeAppl(sym_Match_1, not_null(v_26));
  }
  return(t);
}
ATerm mark_buv_0_0 (ATerm t)
{
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = mark_match_0_0(t);
      ;
      LocalPopChoice(y_18);
    }
  else
    {
      t = x_18;
      {
        ATerm z_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_build_0_0(t);
            ;
            LocalPopChoice(a_19);
          }
        else
          {
            t = z_18;
            {
              ATerm b_19 = t;
              int c_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_scope_0_0(t);
                  ;
                  LocalPopChoice(c_19);
                }
              else
                {
                  t = b_19;
                  {
                    ATerm d_19 = t;
                    int e_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_let_0_0(t);
                        ;
                        LocalPopChoice(e_19);
                      }
                    else
                      {
                        t = d_19;
                        {
                          ATerm f_19 = t;
                          int g_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = mark_traversal_0_0(t);
                              ;
                              LocalPopChoice(g_19);
                            }
                          else
                            {
                              t = f_19;
                              {
                                ATerm h_19 = t;
                                int i_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_sdef_0_0(t);
                                    ;
                                    LocalPopChoice(i_19);
                                  }
                                else
                                  {
                                    t = h_19;
                                    {
                                      ATerm j_19 = t;
                                      int k_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = mark_call_0_0(t);
                                          ;
                                          LocalPopChoice(k_19);
                                        }
                                      else
                                        {
                                          t = j_19;
                                          {
                                            ATerm l_19 = t;
                                            int m_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_prim_0_0(t);
                                                ;
                                                LocalPopChoice(m_19);
                                              }
                                            else
                                              {
                                                t = l_19;
                                                {
                                                  ATerm n_19 = t;
                                                  int o_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_rec_0_0(t);
                                                      ;
                                                      LocalPopChoice(o_19);
                                                    }
                                                  else
                                                    {
                                                      t = n_19;
                                                      {
                                                        ATerm p_19 = t;
                                                        int q_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = mark_choice_1_0(mark_buv_0_0, t);
                                                            ;
                                                            LocalPopChoice(q_19);
                                                          }
                                                        else
                                                          {
                                                            t = p_19;
                                                            {
                                                              ATerm r_19 = t;
                                                              int s_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(s_19);
                                                                }
                                                              else
                                                                {
                                                                  t = r_19;
                                                                  {
                                                                    ATerm t_19 = t;
                                                                    int u_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(u_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_19;
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
ATerm Strategies_1_0 (ATerm a_63 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,x_6 = NULL,z_6 = NULL;
  ATerm a_7 = NULL;
  if(((a_7 != NULL) && (a_7 != t)))
    _fail(t);
  else
    a_7 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      if(((x_6 != NULL) && (x_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_7 = NULL;
    if(((c_7 != NULL) && (c_7 != t)))
      _fail(t);
    else
      c_7 = t;
    t = SSLgetAnnotations(not_null(a_7));
    if(((y_6 != NULL) && (y_6 != t)))
      _fail(t);
    else
      y_6 = t;
    t = not_null(c_7);
  }
  t = not_null(x_6);
  t = a_63(t);
  if(((z_6 != NULL) && (z_6 != t)))
    _fail(t);
  else
    z_6 = t;
  {
    ATerm b_7 = NULL;
    ATerm d_7 = NULL;
    if(((d_7 != NULL) && (d_7 != t)))
      _fail(t);
    else
      d_7 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(z_6)), not_null(y_6));
    if(((b_7 != NULL) && (b_7 != t)))
      _fail(t);
    else
      b_7 = t;
    t = not_null(d_7);
    t = not_null(b_7);
  }
  return(t);
}
ATerm Specification_1_0 (ATerm f_63 (ATerm), ATerm t)
{
  ATerm f_7 = NULL,e_7 = NULL,g_7 = NULL;
  ATerm h_7 = NULL;
  if(((h_7 != NULL) && (h_7 != t)))
    _fail(t);
  else
    h_7 = t;
  if(match_cons(t, sym_Specification_1))
    {
      if(((e_7 != NULL) && (e_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_7 = NULL;
    if(((j_7 != NULL) && (j_7 != t)))
      _fail(t);
    else
      j_7 = t;
    t = SSLgetAnnotations(not_null(h_7));
    if(((f_7 != NULL) && (f_7 != t)))
      _fail(t);
    else
      f_7 = t;
    t = not_null(j_7);
  }
  t = not_null(e_7);
  t = f_63(t);
  if(((g_7 != NULL) && (g_7 != t)))
    _fail(t);
  else
    g_7 = t;
  {
    ATerm i_7 = NULL;
    ATerm k_7 = NULL;
    if(((k_7 != NULL) && (k_7 != t)))
      _fail(t);
    else
      k_7 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(g_7)), not_null(f_7));
    if(((i_7 != NULL) && (i_7 != t)))
      _fail(t);
    else
      i_7 = t;
    t = not_null(k_7);
    t = not_null(i_7);
  }
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm i_13 (ATerm t)
  {
    ATerm j_13 (ATerm t)
    {
      t = term_v_19;
      return(t);
    }
    t = say_1_0(j_13, t);
    return(t);
  }
  t = if_verbose4_1_0(i_13, t);
  {
    ATerm k_13 (ATerm t)
    {
      ATerm l_13 (ATerm t)
      {
        ATerm m_13 (ATerm t)
        {
          ATerm n_13 (ATerm t)
          {
            t = map_1_0(mark_buv_0_0, t);
            return(t);
          }
          t = Strategies_1_0(n_13, t);
          return(t);
        }
        t = Cons_2_0(m_13, Nil_0_0, t);
        return(t);
      }
      t = Cons_2_0(_id, l_13, t);
      return(t);
    }
    t = Specification_1_0(k_13, t);
    {
      ATerm o_13 (ATerm t)
      {
        ATerm p_13 (ATerm t)
        {
          t = term_w_19;
          return(t);
        }
        t = say_1_0(p_13, t);
        return(t);
      }
      t = if_verbose4_1_0(o_13, t);
    }
  }
  return(t);
}
ATerm _2_0 (ATerm n_61 (ATerm), ATerm o_61 (ATerm), ATerm t)
{
  ATerm n_7 = NULL,l_7 = NULL,m_7 = NULL,o_7 = NULL,p_7 = NULL;
  ATerm q_7 = NULL;
  if(((q_7 != NULL) && (q_7 != t)))
    _fail(t);
  else
    q_7 = t;
  if(match_cons(t, sym__2))
    {
      if(((l_7 != NULL) && (l_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_7 = ATgetArgument(t, 0);
      if(((m_7 != NULL) && (m_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_7 = NULL;
    if(((s_7 != NULL) && (s_7 != t)))
      _fail(t);
    else
      s_7 = t;
    t = SSLgetAnnotations(not_null(q_7));
    if(((n_7 != NULL) && (n_7 != t)))
      _fail(t);
    else
      n_7 = t;
    t = not_null(s_7);
  }
  t = not_null(l_7);
  t = n_61(t);
  if(((o_7 != NULL) && (o_7 != t)))
    _fail(t);
  else
    o_7 = t;
  t = not_null(m_7);
  t = o_61(t);
  if(((p_7 != NULL) && (p_7 != t)))
    _fail(t);
  else
    p_7 = t;
  {
    ATerm r_7 = NULL;
    ATerm t_7 = NULL;
    if(((t_7 != NULL) && (t_7 != t)))
      _fail(t);
    else
      t_7 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_7), not_null(p_7)), not_null(n_7));
    if(((r_7 != NULL) && (r_7 != t)))
      _fail(t);
    else
      r_7 = t;
    t = not_null(t_7);
    t = not_null(r_7);
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_7 = NULL;
  if(((u_7 != NULL) && (u_7 != t)))
    _fail(t);
  else
    u_7 = t;
  {
    ATerm b_456 = NULL;
    ATerm v_7 = NULL;
    if(((v_7 != NULL) && (v_7 != t)))
      _fail(t);
    else
      v_7 = t;
    t = term_m_18;
    t = whoami_0_0(t);
    if(((b_456 != NULL) && (b_456 != t)))
      _fail(t);
    else
      b_456 = t;
    t = not_null(v_7);
    t = (ATerm) ATmakeAppl(sym__2, term_k_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_19), not_null(b_456)), term_x_19));
    t = printnl_0_0(t);
    t = term_z_19;
    t = exit_0_0(t);
    t = not_null(u_7);
  }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_52 != NULL) && (l_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_52 = ATgetArgument(t, 0);
      if(((m_52 != NULL) && (m_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_7 = NULL;
    if(((w_7 != NULL) && (w_7 != t)))
      _fail(t);
    else
      w_7 = t;
    t = SSL_printnl(not_null(l_52), not_null(m_52));
    t = not_null(w_7);
  }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm v_46 = NULL;
  if(((v_46 != NULL) && (v_46 != t)))
    _fail(t);
  else
    v_46 = t;
  t = SSL_implode_string(not_null(v_46));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      {
        ATerm l_31 = NULL,m_31 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((l_31 != NULL) && (l_31 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              l_31 = ATgetFirst((ATermList) t);
            if(((m_31 != NULL) && (m_31 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              m_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(l_31);
        {
          ATerm q_13 (ATerm t)
          {
            t = not_null(m_31);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(q_13, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm k_31 = NULL;
  ATerm p_181 = NULL;
  if(((p_181 != NULL) && (p_181 != t)))
    _fail(t);
  else
    p_181 = t;
  {
    ATerm x_7 = NULL;
    if(((x_7 != NULL) && (x_7 != t)))
      _fail(t);
    else
      x_7 = t;
    t = not_null(p_181);
    {
      ATerm q_181 = NULL;
      if(((q_181 != NULL) && (q_181 != t)))
        _fail(t);
      else
        q_181 = t;
      t = SSL_explode_term(not_null(q_181));
      if(match_cons(t, sym__2))
        {
          ATerm c_20 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) c_20) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          if(((k_31 != NULL) && (k_31 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(x_7);
    }
  }
  t = not_null(k_31);
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm q_80 (ATerm), ATerm t)
{
  ATerm r_80 (ATerm t)
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_80, t);
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = Nil_0_0(t);
        t = q_80(t);
      }
    return(t);
  }
  t = r_80(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_31 != NULL) && (j_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_31 = ATgetArgument(t, 0);
      if(((i_31 != NULL) && (i_31 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(j_31);
  {
    ATerm r_13 (ATerm t)
    {
      t = not_null(i_31);
      return(t);
    }
    t = at_end_1_0(r_13, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm w_46 = NULL;
  if(((w_46 != NULL) && (w_46 != t)))
    _fail(t);
  else
    w_46 = t;
  t = SSL_explode_string(not_null(w_46));
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_13 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(s_13, t);
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            {
              ATerm l_20 = t;
              int m_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_55 = NULL;
                  if(match_cons(t, sym_Path_1))
                    {
                      if(((t_55 != NULL) && (t_55 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        t_55 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(t_55);
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
                        ATerm s_55 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            if(((s_55 != NULL) && (s_55 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              s_55 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = not_null(s_55);
                        {
                          ATerm p_20 = t;
                          int q_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0_0(t);
                              ;
                              LocalPopChoice(q_20);
                            }
                          else
                            {
                              t = p_20;
                              {
                                ATerm t_13 (ATerm t)
                                {
                                  t = term_r_20;
                                  return(t);
                                }
                                t = debug_1_0(t_13, t);
                                _fail(t);
                              }
                            }
                        }
                        ;
                        LocalPopChoice(o_20);
                      }
                    else
                      {
                        t = n_20;
                        {
                          ATerm q_55 = NULL,r_55 = NULL;
                          if(match_cons(t, sym_Prefix_2))
                            {
                              if(((q_55 != NULL) && (q_55 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                q_55 = ATgetArgument(t, 0);
                              if(((r_55 != NULL) && (r_55 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                r_55 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          {
                            ATerm n_478 = NULL;
                            ATerm y_7 = NULL;
                            if(((y_7 != NULL) && (y_7 != t)))
                              _fail(t);
                            else
                              y_7 = t;
                            t = not_null(q_55);
                            t = eval_config_0_0(t);
                            if(((n_478 != NULL) && (n_478 != t)))
                              _fail(t);
                            else
                              n_478 = t;
                            t = not_null(y_7);
                            {
                              ATerm z_478 = NULL;
                              ATerm z_7 = NULL;
                              if(((z_7 != NULL) && (z_7 != t)))
                                _fail(t);
                              else
                                z_7 = t;
                              t = not_null(r_55);
                              t = eval_config_0_0(t);
                              if(((z_478 != NULL) && (z_478 != t)))
                                _fail(t);
                              else
                                z_478 = t;
                              t = not_null(z_7);
                              t = (ATerm) ATmakeAppl(sym__2, not_null(n_478), not_null(z_478));
                            }
                            t = conc_strings_0_0(t);
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
ATerm get_config_0_0 (ATerm t)
{
  ATerm p_55 = NULL;
  if(((p_55 != NULL) && (p_55 != t)))
    _fail(t);
  else
    p_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_20, not_null(p_55));
  t = table_get_0_0(t);
  {
    ATerm u_13 (ATerm t)
    {
      t = eval_config_0_0(t);
      {
        ATerm a_8 = NULL;
        if(((a_8 != NULL) && (a_8 != t)))
          _fail(t);
        else
          a_8 = t;
        {
          ATerm o_477 = NULL;
          ATerm b_8 = NULL;
          if(((b_8 != NULL) && (b_8 != t)))
            _fail(t);
          else
            b_8 = t;
          if(((o_477 != NULL) && (o_477 != t)))
            _fail(t);
          else
            o_477 = t;
          t = not_null(b_8);
          t = (ATerm) ATmakeAppl(sym__3, term_s_20, not_null(p_55), not_null(o_477));
          t = table_put_0_0(t);
          t = not_null(a_8);
        }
      }
      return(t);
    }
    t = try_1_0(u_13, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm v_13 (ATerm t)
  {
    ATerm c_8 = NULL;
    if(((c_8 != NULL) && (c_8 != t)))
      _fail(t);
    else
      c_8 = t;
    {
      ATerm n_558 = NULL;
      ATerm d_8 = NULL;
      if(((d_8 != NULL) && (d_8 != t)))
        _fail(t);
      else
        d_8 = t;
      t = term_l_16;
      t = get_config_0_0(t);
      if(((n_558 != NULL) && (n_558 != t)))
        _fail(t);
      else
        n_558 = t;
      t = not_null(d_8);
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_558), term_t_20);
      t = geq_0_0(t);
      t = not_null(c_8);
    }
    t = k_104(t);
    return(t);
  }
  t = try_1_0(v_13, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_49 != NULL) && (d_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_49 = ATgetArgument(t, 0);
      {
        ATerm u_20 = ATgetArgument(t, 1);
        if(match_cons(u_20, sym_Stream_1))
          {
            if(((e_49 != NULL) && (e_49 != ATgetArgument(u_20, 0))))
              _fail(ATgetArgument(u_20, 0));
            else
              e_49 = ATgetArgument(u_20, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputc(not_null(d_49), not_null(e_49));
  {
    ATerm i_382 = NULL;
    ATerm e_8 = NULL;
    if(((e_8 != NULL) && (e_8 != t)))
      _fail(t);
    else
      e_8 = t;
    if(((i_382 != NULL) && (i_382 != t)))
      _fail(t);
    else
      i_382 = t;
    t = not_null(e_8);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_382));
  }
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_20 = ATgetArgument(t, 0);
      if(match_cons(v_20, sym_Stream_1))
        {
          if(((r_52 != NULL) && (r_52 != ATgetArgument(v_20, 0))))
            _fail(ATgetArgument(v_20, 0));
          else
            r_52 = ATgetArgument(v_20, 0);
        }
      else
        _fail(t);
      if(((s_52 != NULL) && (s_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(r_52), not_null(s_52));
  {
    ATerm w_424 = NULL;
    ATerm f_8 = NULL;
    if(((f_8 != NULL) && (f_8 != t)))
      _fail(t);
    else
      f_8 = t;
    if(((w_424 != NULL) && (w_424 != t)))
      _fail(t);
    else
      w_424 = t;
    t = not_null(f_8);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_424));
  }
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm w_13 (ATerm t)
  {
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm k_426 = NULL;
      ATerm g_8 = NULL;
      if(((g_8 != NULL) && (g_8 != t)))
        _fail(t);
      else
        g_8 = t;
      if(((k_426 != NULL) && (k_426 != t)))
        _fail(t);
      else
        k_426 = t;
      t = not_null(g_8);
      t = (ATerm) ATmakeAppl(sym__2, term_w_20, not_null(k_426));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(w_13, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_20 = ATgetArgument(t, 0);
      if(match_cons(x_20, sym_Stream_1))
        {
          if(((n_52 != NULL) && (n_52 != ATgetArgument(x_20, 0))))
            _fail(ATgetArgument(x_20, 0));
          else
            n_52 = ATgetArgument(x_20, 0);
        }
      else
        _fail(t);
      if(((o_52 != NULL) && (o_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(n_52), not_null(o_52));
  {
    ATerm q_423 = NULL;
    ATerm h_8 = NULL;
    if(((h_8 != NULL) && (h_8 != t)))
      _fail(t);
    else
      h_8 = t;
    if(((q_423 != NULL) && (q_423 != t)))
      _fail(t);
    else
      q_423 = t;
    t = not_null(h_8);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_423));
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm b_96 (ATerm), ATerm t)
{
  ATerm v_52 = NULL;
  ATerm v_426 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_426 != NULL) && (v_426 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_426 = ATgetArgument(t, 0);
      if(((v_52 != NULL) && (v_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(v_426);
  {
    ATerm g_427 = NULL;
    ATerm i_8 = NULL;
    if(((i_8 != NULL) && (i_8 != t)))
      _fail(t);
    else
      i_8 = t;
    if(((g_427 != NULL) && (g_427 != t)))
      _fail(t);
    else
      g_427 = t;
    t = not_null(i_8);
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_427), term_y_20);
    t = open_stream_0_0(t);
    {
      ATerm r_427 = NULL;
      ATerm j_8 = NULL;
      if(((j_8 != NULL) && (j_8 != t)))
        _fail(t);
      else
        j_8 = t;
      if(((r_427 != NULL) && (r_427 != t)))
        _fail(t);
      else
        r_427 = t;
      t = not_null(j_8);
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_427), not_null(v_52));
      t = b_96(t);
      t = fclose_0_0(t);
      t = not_null(v_52);
    }
  }
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_55 = NULL;
  ATerm k_8 = NULL;
  if(((k_8 != NULL) && (k_8 != t)))
    _fail(t);
  else
    k_8 = t;
  {
    ATerm x_13 (ATerm t)
    {
      ATerm z_20 = t;
      int a_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_13 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((a_55 != NULL) && (a_55 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_55 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(y_13, t);
          ;
          LocalPopChoice(a_21);
        }
      else
        {
          t = z_20;
          t = term_b_21;
          if(((a_55 != NULL) && (a_55 != t)))
            _fail(t);
          else
            a_55 = t;
        }
      return(t);
    }
    t = _2_0(x_13, _id, t);
    t = not_null(k_8);
  }
  {
    ATerm z_13 (ATerm t)
    {
      ATerm a_14 (ATerm t)
      {
        t = not_null(a_55);
        return(t);
      }
      t = split_2_0(a_14, _id, t);
      return(t);
    }
    t = _2_0(_id, z_13, t);
    {
      ATerm c_21 = t;
      int d_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_14 (ATerm t)
          {
            ATerm c_14 (ATerm t)
            {
              if(!(match_cons(t, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1_0(c_14, t);
            return(t);
          }
          t = _2_0(b_14, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(d_21);
        }
      else
        {
          t = c_21;
          t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm n_97 (ATerm), ATerm t)
{
  ATerm x_54 = NULL;
  ATerm l_8 = NULL;
  if(((l_8 != NULL) && (l_8 != t)))
    _fail(t);
  else
    l_8 = t;
  t = dtime_0_0(t);
  t = not_null(l_8);
  t = n_97(t);
  {
    ATerm m_8 = NULL;
    if(((m_8 != NULL) && (m_8 != t)))
      _fail(t);
    else
      m_8 = t;
    t = dtime_0_0(t);
    if(((x_54 != NULL) && (x_54 != t)))
      _fail(t);
    else
      x_54 = t;
    t = not_null(m_8);
    {
      ATerm y_54 = NULL,z_54 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((y_54 != NULL) && (y_54 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            y_54 = ATgetArgument(t, 0);
          if(((z_54 != NULL) && (z_54 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_54 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_54)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_54))), not_null(z_54));
    }
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL;
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Stream_1))
        {
          if(((h_49 != NULL) && (h_49 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            h_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_fclose(not_null(h_49));
      ;
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      if(((i_49 != NULL) && (i_49 != t)))
        _fail(t);
      else
        i_49 = t;
      t = SSL_fclose(not_null(i_49));
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm t_52 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((t_52 != NULL) && (t_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(t_52));
  return(t);
}
ATerm debug_1_0 (ATerm n_95 (ATerm), ATerm t)
{
  ATerm n_8 = NULL;
  if(((n_8 != NULL) && (n_8 != t)))
    _fail(t);
  else
    n_8 = t;
  {
    ATerm s_417 = NULL;
    ATerm o_8 = NULL;
    if(((o_8 != NULL) && (o_8 != t)))
      _fail(t);
    else
      o_8 = t;
    t = n_95(t);
    if(((s_417 != NULL) && (s_417 != t)))
      _fail(t);
    else
      s_417 = t;
    t = not_null(o_8);
    {
      ATerm z_417 = NULL;
      ATerm p_8 = NULL;
      if(((p_8 != NULL) && (p_8 != t)))
        _fail(t);
      else
        p_8 = t;
      if(((z_417 != NULL) && (z_417 != t)))
        _fail(t);
      else
        z_417 = t;
      t = not_null(p_8);
      t = (ATerm) ATmakeAppl(sym__2, term_k_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_417)), not_null(s_417)));
    }
    t = printnl_0_0(t);
    t = not_null(n_8);
  }
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_49 != NULL) && (f_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_49 = ATgetArgument(t, 0);
      if(((g_49 != NULL) && (g_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(f_49), not_null(g_49));
  {
    ATerm y_382 = NULL;
    ATerm q_8 = NULL;
    if(((q_8 != NULL) && (q_8 != t)))
      _fail(t);
    else
      q_8 = t;
    if(((y_382 != NULL) && (y_382 != t)))
      _fail(t);
    else
      y_382 = t;
    t = not_null(q_8);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_382));
  }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm u_46 = NULL;
  if(((u_46 != NULL) && (u_46 != t)))
    _fail(t);
  else
    u_46 = t;
  t = SSL_is_string(not_null(u_46));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  t = SSL_stdin_stream();
  {
    ATerm z_384 = NULL;
    ATerm r_8 = NULL;
    if(((r_8 != NULL) && (r_8 != t)))
      _fail(t);
    else
      r_8 = t;
    if(((z_384 != NULL) && (z_384 != t)))
      _fail(t);
    else
      z_384 = t;
    t = not_null(r_8);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_384));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  t = SSL_stdout_stream();
  {
    ATerm k_385 = NULL;
    ATerm s_8 = NULL;
    if(((s_8 != NULL) && (s_8 != t)))
      _fail(t);
    else
      s_8 = t;
    if(((k_385 != NULL) && (k_385 != t)))
      _fail(t);
    else
      k_385 = t;
    t = not_null(s_8);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(k_385));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  t = SSL_stderr_stream();
  {
    ATerm v_385 = NULL;
    ATerm t_8 = NULL;
    if(((t_8 != NULL) && (t_8 != t)))
      _fail(t);
    else
      t_8 = t;
    if(((v_385 != NULL) && (v_385 != t)))
      _fail(t);
    else
      v_385 = t;
    t = not_null(t_8);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_385));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_stderr_0)))
        _fail(t);
      t = stderr_stream_0_0(t);
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
            if(!(match_cons(t, sym_stdout_0)))
              _fail(t);
            t = stdout_stream_0_0(t);
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = stdin_stream_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  ATerm g_164 = NULL;
  if(((g_164 != NULL) && (g_164 != t)))
    _fail(t);
  else
    g_164 = t;
  {
    ATerm u_8 = NULL;
    if(((u_8 != NULL) && (u_8 != t)))
      _fail(t);
    else
      u_8 = t;
    t = not_null(g_164);
    {
      ATerm h_164 = NULL;
      if(((h_164 != NULL) && (h_164 != t)))
        _fail(t);
      else
        h_164 = t;
      t = SSL_explode_term(not_null(h_164));
      if(match_cons(t, sym__2))
        {
          ATerm k_21 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) k_21) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm l_21 = ATgetArgument(t, 1);
            if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
              {
                if(((o_30 != NULL) && (o_30 != ATgetFirst((ATermList) l_21))))
                  _fail(ATgetFirst((ATermList) l_21));
                else
                  o_30 = ATgetFirst((ATermList) l_21);
                if(((n_30 != NULL) && (n_30 != (ATerm) ATgetNext((ATermList) l_21))))
                  _fail((ATerm) ATgetNext((ATermList) l_21));
                else
                  n_30 = (ATerm) ATgetNext((ATermList) l_21);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = not_null(u_8);
    }
  }
  t = not_null(o_30);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_21 = ATgetArgument(t, 0);
      ATerm n_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
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
              ATerm d_14 (ATerm t)
              {
                ATerm k_376 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    if(((k_376 != NULL) && (k_376 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      k_376 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = not_null(k_376);
                return(t);
              }
              t = _2_0(d_14, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              t = _2_0(is_string_0_0, _id, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_52 = NULL;
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_425 = NULL;
      ATerm v_8 = NULL;
      if(((v_8 != NULL) && (v_8 != t)))
        _fail(t);
      else
        v_8 = t;
      if(((m_425 != NULL) && (m_425 != t)))
        _fail(t);
      else
        m_425 = t;
      t = not_null(v_8);
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_425), term_u_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm e_14 (ATerm t)
        {
          t = term_v_21;
          return(t);
        }
        t = debug_1_0(e_14, t);
        _fail(t);
      }
    }
  {
    ATerm w_8 = NULL;
    if(((w_8 != NULL) && (w_8 != t)))
      _fail(t);
    else
      w_8 = t;
    t = read_from_stream_0_0(t);
    if(((u_52 != NULL) && (u_52 != t)))
      _fail(t);
    else
      u_52 = t;
    t = not_null(w_8);
    t = fclose_0_0(t);
    t = not_null(u_52);
  }
  return(t);
}
ATerm split_2_0 (ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm t)
{
  ATerm t_167 = NULL;
  ATerm x_8 = NULL;
  if(((x_8 != NULL) && (x_8 != t)))
    _fail(t);
  else
    x_8 = t;
  t = b_79(t);
  if(((t_167 != NULL) && (t_167 != t)))
    _fail(t);
  else
    t_167 = t;
  t = not_null(x_8);
  {
    ATerm a_168 = NULL;
    ATerm y_8 = NULL;
    if(((y_8 != NULL) && (y_8 != t)))
      _fail(t);
    else
      y_8 = t;
    t = c_79(t);
    if(((a_168 != NULL) && (a_168 != t)))
      _fail(t);
    else
      a_168 = t;
    t = not_null(y_8);
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_167), not_null(a_168));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm w_54 = NULL;
  ATerm z_8 = NULL;
  if(((z_8 != NULL) && (z_8 != t)))
    _fail(t);
  else
    z_8 = t;
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_14 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((w_54 != NULL) && (w_54 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                w_54 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(f_14, t);
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = term_y_21;
        if(((w_54 != NULL) && (w_54 != t)))
          _fail(t);
        else
          w_54 = t;
      }
    t = not_null(z_8);
  }
  {
    ATerm g_14 (ATerm t)
    {
      t = not_null(w_54);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, g_14, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm h_14 (ATerm t)
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-k", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm i_14 (ATerm t)
  {
    ATerm a_9 = NULL;
    if(((a_9 != NULL) && (a_9 != t)))
      _fail(t);
    else
      a_9 = t;
    {
      ATerm m_459 = NULL;
      ATerm b_9 = NULL;
      if(((b_9 != NULL) && (b_9 != t)))
        _fail(t);
      else
        b_9 = t;
      t = string_to_int_0_0(t);
      if(((m_459 != NULL) && (m_459 != t)))
        _fail(t);
      else
        m_459 = t;
      t = not_null(b_9);
      t = (ATerm) ATmakeAppl(sym__2, term_b_22, not_null(m_459));
      t = set_config_0_0(t);
      t = not_null(a_9);
    }
    return(t);
  }
  ATerm j_14 (ATerm t)
  {
    t = term_c_22;
    return(t);
  }
  t = ArgOption_3_0(h_14, i_14, j_14, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm y_39 = NULL;
  if(((y_39 != NULL) && (y_39 != t)))
    _fail(t);
  else
    y_39 = t;
  t = SSL_string_to_int(not_null(y_39));
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_14 (ATerm t)
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-S", 0, ATtrue)))
              _fail(t);
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
          }
        return(t);
      }
      ATerm l_14 (ATerm t)
      {
        ATerm c_9 = NULL;
        if(((c_9 != NULL) && (c_9 != t)))
          _fail(t);
        else
          c_9 = t;
        t = term_i_22;
        t = set_config_0_0(t);
        t = not_null(c_9);
        t = term_j_22;
        return(t);
      }
      ATerm m_14 (ATerm t)
      {
        t = term_k_22;
        return(t);
      }
      t = Option_3_0(k_14, l_14, m_14, t);
      ;
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_14 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm o_14 (ATerm t)
            {
              ATerm d_9 = NULL;
              if(((d_9 != NULL) && (d_9 != t)))
                _fail(t);
              else
                d_9 = t;
              {
                ATerm r_464 = NULL;
                ATerm e_9 = NULL;
                if(((e_9 != NULL) && (e_9 != t)))
                  _fail(t);
                else
                  e_9 = t;
                t = string_to_int_0_0(t);
                if(((r_464 != NULL) && (r_464 != t)))
                  _fail(t);
                else
                  r_464 = t;
                t = not_null(e_9);
                t = (ATerm) ATmakeAppl(sym__2, term_l_16, not_null(r_464));
                t = set_config_0_0(t);
                t = not_null(d_9);
              }
              {
                ATerm c_465 = NULL;
                ATerm f_9 = NULL;
                if(((f_9 != NULL) && (f_9 != t)))
                  _fail(t);
                else
                  f_9 = t;
                if(((c_465 != NULL) && (c_465 != t)))
                  _fail(t);
                else
                  c_465 = t;
                t = not_null(f_9);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_465));
              }
              return(t);
            }
            ATerm p_14 (ATerm t)
            {
              t = term_n_22;
              return(t);
            }
            t = ArgOption_3_0(n_14, o_14, p_14, t);
            ;
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            {
              ATerm q_14 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm r_14 (ATerm t)
              {
                ATerm g_9 = NULL;
                if(((g_9 != NULL) && (g_9 != t)))
                  _fail(t);
                else
                  g_9 = t;
                t = term_p_22;
                t = set_config_0_0(t);
                t = not_null(g_9);
                t = term_q_22;
                return(t);
              }
              ATerm s_14 (ATerm t)
              {
                t = term_r_22;
                return(t);
              }
              t = Option_3_0(q_14, r_14, s_14, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(t_22);
    }
  else
    {
      t = s_22;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm t_14 (ATerm t)
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-o", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm u_14 (ATerm t)
  {
    ATerm h_9 = NULL;
    if(((h_9 != NULL) && (h_9 != t)))
      _fail(t);
    else
      h_9 = t;
    {
      ATerm z_461 = NULL;
      ATerm i_9 = NULL;
      if(((i_9 != NULL) && (i_9 != t)))
        _fail(t);
      else
        i_9 = t;
      if(((z_461 != NULL) && (z_461 != t)))
        _fail(t);
      else
        z_461 = t;
      t = not_null(i_9);
      t = (ATerm) ATmakeAppl(sym__2, term_w_22, not_null(z_461));
      t = set_config_0_0(t);
      t = not_null(h_9);
    }
    {
      ATerm k_462 = NULL;
      ATerm j_9 = NULL;
      if(((j_9 != NULL) && (j_9 != t)))
        _fail(t);
      else
        j_9 = t;
      if(((k_462 != NULL) && (k_462 != t)))
        _fail(t);
      else
        k_462 = t;
      t = not_null(j_9);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_462));
    }
    return(t);
  }
  ATerm v_14 (ATerm t)
  {
    t = term_x_22;
    return(t);
  }
  t = ArgOption_3_0(t_14, u_14, v_14, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      {
        ATerm w_14 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm x_14 (ATerm t)
        {
          ATerm k_9 = NULL;
          if(((k_9 != NULL) && (k_9 != t)))
            _fail(t);
          else
            k_9 = t;
          t = term_b_23;
          t = set_config_0_0(t);
          t = not_null(k_9);
          t = term_c_23;
          return(t);
        }
        ATerm y_14 (ATerm t)
        {
          t = term_d_23;
          return(t);
        }
        t = Option_3_0(w_14, x_14, y_14, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register-usage-info", 0, ATtrue)))
        _fail(t);
      t = register_usage_1_0(l_0, t);
      ;
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      {
        ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((g_58 != NULL) && (g_58 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              g_58 = ATgetFirst((ATermList) t);
            {
              ATerm g_23 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(g_23) == AT_LIST) && !(ATisEmpty(g_23))))
                {
                  if(((e_58 != NULL) && (e_58 != ATgetFirst((ATermList) g_23))))
                    _fail(ATgetFirst((ATermList) g_23));
                  else
                    e_58 = ATgetFirst((ATermList) g_23);
                  if(((f_58 != NULL) && (f_58 != (ATerm) ATgetNext((ATermList) g_23))))
                    _fail((ATerm) ATgetNext((ATermList) g_23));
                  else
                    f_58 = (ATerm) ATgetNext((ATermList) g_23);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        {
          ATerm l_9 = NULL;
          if(((l_9 != NULL) && (l_9 != t)))
            _fail(t);
          else
            l_9 = t;
          t = not_null(g_58);
          t = i_0(t);
          t = not_null(l_9);
          {
            ATerm m_522 = NULL;
            ATerm m_9 = NULL;
            if(((m_9 != NULL) && (m_9 != t)))
              _fail(t);
            else
              m_9 = t;
            t = not_null(e_58);
            t = k_0(t);
            if(((m_522 != NULL) && (m_522 != t)))
              _fail(t);
            else
              m_522 = t;
            t = not_null(m_9);
            t = (ATerm) ATinsert(CheckATermList(not_null(f_58)), not_null(m_522));
          }
        }
      }
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm z_14 (ATerm t)
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm a_15 (ATerm t)
  {
    ATerm n_9 = NULL;
    if(((n_9 != NULL) && (n_9 != t)))
      _fail(t);
    else
      n_9 = t;
    {
      ATerm p_460 = NULL;
      ATerm o_9 = NULL;
      if(((o_9 != NULL) && (o_9 != t)))
        _fail(t);
      else
        o_9 = t;
      if(((p_460 != NULL) && (p_460 != t)))
        _fail(t);
      else
        p_460 = t;
      t = not_null(o_9);
      t = (ATerm) ATmakeAppl(sym__2, term_j_23, not_null(p_460));
      t = set_config_0_0(t);
      t = not_null(n_9);
    }
    {
      ATerm a_461 = NULL;
      ATerm p_9 = NULL;
      if(((p_9 != NULL) && (p_9 != t)))
        _fail(t);
      else
        p_9 = t;
      if(((a_461 != NULL) && (a_461 != t)))
        _fail(t);
      else
        a_461 = t;
      t = not_null(p_9);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_461));
    }
    return(t);
  }
  ATerm b_15 (ATerm t)
  {
    t = term_k_23;
    return(t);
  }
  t = ArgOption_3_0(z_14, a_15, b_15, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      {
        ATerm n_23 = t;
        int o_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(o_23);
          }
        else
          {
            t = n_23;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  {
    ATerm i_457 = NULL;
    ATerm q_9 = NULL;
    if(((q_9 != NULL) && (q_9 != t)))
      _fail(t);
    else
      q_9 = t;
    t = term_m_18;
    t = whoami_0_0(t);
    if(((i_457 != NULL) && (i_457 != t)))
      _fail(t);
    else
      i_457 = t;
    t = not_null(q_9);
    t = (ATerm) ATmakeAppl(sym__2, term_k_16, (ATerm) ATinsert(ATinsert(ATempty, term_p_23), not_null(i_457)));
    t = printnl_0_0(t);
    t = term_z_19;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_23;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm v_55 = NULL;
  if(((v_55 != NULL) && (v_55 != t)))
    _fail(t);
  else
    v_55 = t;
  t = SSL_TicksToSeconds(not_null(v_55));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_40 != NULL) && (d_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_40 = ATgetArgument(t, 0);
      if(((e_40 != NULL) && (e_40 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(d_40), not_null(e_40));
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = SSL_addr(not_null(d_40), not_null(e_40));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = q_86(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      {
        ATerm y_37 = NULL,z_37 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((y_37 != NULL) && (y_37 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              y_37 = ATgetFirst((ATermList) t);
            if(((z_37 != NULL) && (z_37 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              z_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_250 = NULL;
          ATerm r_9 = NULL;
          if(((r_9 != NULL) && (r_9 != t)))
            _fail(t);
          else
            r_9 = t;
          t = not_null(z_37);
          t = foldr_2_0(q_86, r_86, t);
          if(((g_250 != NULL) && (g_250 != t)))
            _fail(t);
          else
            g_250 = t;
          t = not_null(r_9);
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_37), not_null(g_250));
          t = r_86(t);
        }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm t)
{
  ATerm w_36 = NULL;
  ATerm o_231 = NULL;
  if(((o_231 != NULL) && (o_231 != t)))
    _fail(t);
  else
    o_231 = t;
  {
    ATerm s_9 = NULL;
    if(((s_9 != NULL) && (s_9 != t)))
      _fail(t);
    else
      s_9 = t;
    t = not_null(o_231);
    {
      ATerm p_231 = NULL;
      if(((p_231 != NULL) && (p_231 != t)))
        _fail(t);
      else
        p_231 = t;
      t = SSL_explode_term(not_null(p_231));
      if(match_cons(t, sym__2))
        {
          ATerm v_23 = ATgetArgument(t, 0);
          if(((w_36 != NULL) && (w_36 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            w_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(s_9);
    }
  }
  t = not_null(w_36);
  t = foldr_2_0(o_84, p_84, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  {
    ATerm c_15 (ATerm t)
    {
      t = term_h_22;
      return(t);
    }
    t = crush_2_0(c_15, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_41 != NULL) && (d_41 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_41 = ATgetArgument(t, 0);
      if(((e_41 != NULL) && (e_41 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_9 = NULL;
    if(((t_9 != NULL) && (t_9 != t)))
      _fail(t);
    else
      t_9 = t;
    {
      ATerm w_23 = t;
      int x_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_gti(not_null(d_41), not_null(e_41));
          ;
          LocalPopChoice(x_23);
        }
      else
        {
          t = w_23;
          t = SSL_gtr(not_null(d_41), not_null(e_41));
        }
      t = not_null(t_9);
    }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_41 = NULL;
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym__2))
        {
          if(((j_41 != NULL) && (j_41 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_41 = ATgetArgument(t, 0);
          if(((j_41 != NULL) && (j_41 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_104 (ATerm), ATerm t)
{
  ATerm d_15 (ATerm t)
  {
    ATerm u_9 = NULL;
    if(((u_9 != NULL) && (u_9 != t)))
      _fail(t);
    else
      u_9 = t;
    {
      ATerm x_557 = NULL;
      ATerm v_9 = NULL;
      if(((v_9 != NULL) && (v_9 != t)))
        _fail(t);
      else
        v_9 = t;
      t = term_l_16;
      t = get_config_0_0(t);
      if(((x_557 != NULL) && (x_557 != t)))
        _fail(t);
      else
        x_557 = t;
      t = not_null(v_9);
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_557), term_z_19);
      t = geq_0_0(t);
      t = not_null(u_9);
    }
    t = j_104(t);
    return(t);
  }
  t = try_1_0(d_15, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm e_15 (ATerm t)
  {
    ATerm b_458 = NULL;
    ATerm w_9 = NULL;
    if(((w_9 != NULL) && (w_9 != t)))
      _fail(t);
    else
      w_9 = t;
    t = run_time_0_0(t);
    if(((b_458 != NULL) && (b_458 != t)))
      _fail(t);
    else
      b_458 = t;
    t = not_null(w_9);
    {
      ATerm j_458 = NULL;
      ATerm x_9 = NULL;
      if(((x_9 != NULL) && (x_9 != t)))
        _fail(t);
      else
        x_9 = t;
      t = term_m_18;
      t = whoami_0_0(t);
      if(((j_458 != NULL) && (j_458 != t)))
        _fail(t);
      else
        j_458 = t;
      t = not_null(x_9);
      t = (ATerm) ATmakeAppl(sym__2, term_k_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_24), not_null(b_458)), term_a_24), not_null(j_458)));
    }
    t = printnl_0_0(t);
    return(t);
  }
  t = if_verbose1_1_0(e_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_h_22;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      {
        ATerm f_15 (ATerm t)
        {
          ATerm f_24 = t;
          int g_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(g_24);
            }
          else
            {
              t = f_24;
              {
                ATerm h_24 = t;
                int i_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(i_24);
                  }
                else
                  {
                    t = h_24;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(f_15, t);
      }
    }
  t = l_98(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm n_29 = NULL;
  if(((n_29 != NULL) && (n_29 != t)))
    _fail(t);
  else
    n_29 = t;
  t = SSL_table_create(not_null(n_29));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm b_55 = NULL;
  if(((b_55 != NULL) && (b_55 != t)))
    _fail(t);
  else
    b_55 = t;
  {
    ATerm y_9 = NULL;
    if(((y_9 != NULL) && (y_9 != t)))
      _fail(t);
    else
      y_9 = t;
    t = term_j_24;
    t = table_create_0_0(t);
    t = (ATerm) ATmakeAppl(sym__3, term_j_24, term_k_24, not_null(b_55));
    t = table_put_0_0(t);
    t = not_null(y_9);
  }
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm o_29 = NULL;
  if(((o_29 != NULL) && (o_29 != t)))
    _fail(t);
  else
    o_29 = t;
  t = SSL_table_destroy(not_null(o_29));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm g_54 = NULL;
  if(((g_54 != NULL) && (g_54 != t)))
    _fail(t);
  else
    g_54 = t;
  t = SSL_exit(not_null(g_54));
  return(t);
}
ATerm long_description_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm a_80 (ATerm t)
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        t = Cons_2_0(z_79, a_80, t);
      }
    return(t);
  }
  t = a_80(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_32 = NULL,c_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((b_32 != NULL) && (b_32 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            b_32 = ATgetFirst((ATermList) t);
          if(((c_32 != NULL) && (c_32 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(c_32);
      {
        ATerm d_32 = NULL;
        ATerm z_9 = NULL;
        if(((z_9 != NULL) && (z_9 != t)))
          _fail(t);
        else
          z_9 = t;
        {
          ATerm v_190 = NULL;
          ATerm a_10 = NULL;
          if(((a_10 != NULL) && (a_10 != t)))
            _fail(t);
          else
            a_10 = t;
          t = g_0(t);
          if(((v_190 != NULL) && (v_190 != t)))
            _fail(t);
          else
            v_190 = t;
          t = not_null(a_10);
          {
            ATerm d_191 = NULL;
            ATerm b_10 = NULL;
            if(((b_10 != NULL) && (b_10 != t)))
              _fail(t);
            else
              b_10 = t;
            t = not_null(b_32);
            t = e_0(t);
            if(((d_191 != NULL) && (d_191 != t)))
              _fail(t);
            else
              d_191 = t;
            t = not_null(b_10);
            t = (ATerm) ATinsert(CheckATermList(not_null(v_190)), not_null(d_191));
          }
          if(((d_32 != NULL) && (d_32 != t)))
            _fail(t);
          else
            d_32 = t;
          t = not_null(z_9);
        }
        {
          ATerm g_15 (ATerm t)
          {
            t = not_null(d_32);
            return(t);
          }
          t = reverse_acc_2_0(e_0, g_15, t);
        }
      }
      ;
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_18;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm h_15 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, h_15, t);
  return(t);
}
ATerm short_description_1_0 (ATerm n_101 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm o_75 (ATerm), ATerm t)
{
  ATerm d_10 = NULL,c_10 = NULL,e_10 = NULL;
  ATerm f_10 = NULL;
  if(((f_10 != NULL) && (f_10 != t)))
    _fail(t);
  else
    f_10 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((c_10 != NULL) && (c_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_10 = NULL;
    if(((h_10 != NULL) && (h_10 != t)))
      _fail(t);
    else
      h_10 = t;
    t = SSLgetAnnotations(not_null(f_10));
    if(((d_10 != NULL) && (d_10 != t)))
      _fail(t);
    else
      d_10 = t;
    t = not_null(h_10);
  }
  t = not_null(c_10);
  t = o_75(t);
  if(((e_10 != NULL) && (e_10 != t)))
    _fail(t);
  else
    e_10 = t;
  {
    ATerm g_10 = NULL;
    ATerm i_10 = NULL;
    if(((i_10 != NULL) && (i_10 != t)))
      _fail(t);
    else
      i_10 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_10)), not_null(d_10));
    if(((g_10 != NULL) && (g_10 != t)))
      _fail(t);
    else
      g_10 = t;
    t = not_null(i_10);
    t = not_null(g_10);
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_58 = NULL;
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_23;
      t = get_config_0_0(t);
      if(((s_58 != NULL) && (s_58 != t)))
        _fail(t);
      else
        s_58 = t;
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      {
        ATerm i_15 (ATerm t)
        {
          ATerm j_15 (ATerm t)
          {
            if(((s_58 != NULL) && (s_58 != t)))
              _fail(t);
            else
              s_58 = t;
            return(t);
          }
          t = Program_1_0(j_15, t);
          return(t);
        }
        t = option_defined_1_0(i_15, t);
      }
    }
  {
    ATerm k_15 (ATerm t)
    {
      ATerm l_15 (ATerm t)
      {
        t = not_null(s_58);
        return(t);
      }
      t = short_description_1_0(l_15, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(k_15, t);
    t = term_r_24;
    t = echo_0_0(t);
    t = term_u_24;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm m_15 (ATerm t)
      {
        ATerm g_532 = NULL;
        ATerm j_10 = NULL;
        if(((j_10 != NULL) && (j_10 != t)))
          _fail(t);
        else
          j_10 = t;
        if(((g_532 != NULL) && (g_532 != t)))
          _fail(t);
        else
          g_532 = t;
        t = not_null(j_10);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_532)), term_v_24);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(m_15, t);
      {
        ATerm n_15 (ATerm t)
        {
          ATerm r_532 = NULL;
          ATerm k_10 = NULL;
          if(((k_10 != NULL) && (k_10 != t)))
            _fail(t);
          else
            k_10 = t;
          {
            ATerm o_15 (ATerm t)
            {
              t = not_null(s_58);
              return(t);
            }
            t = long_description_1_0(o_15, t);
            if(((r_532 != NULL) && (r_532 != t)))
              _fail(t);
            else
              r_532 = t;
            t = not_null(k_10);
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(r_532)), term_w_24);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(n_15, t);
      }
    }
  }
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm p_75 (ATerm), ATerm t)
{
  ATerm m_10 = NULL,l_10 = NULL,n_10 = NULL;
  ATerm o_10 = NULL;
  if(((o_10 != NULL) && (o_10 != t)))
    _fail(t);
  else
    o_10 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((l_10 != NULL) && (l_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_10 = NULL;
    if(((q_10 != NULL) && (q_10 != t)))
      _fail(t);
    else
      q_10 = t;
    t = SSLgetAnnotations(not_null(o_10));
    if(((m_10 != NULL) && (m_10 != t)))
      _fail(t);
    else
      m_10 = t;
    t = not_null(q_10);
  }
  t = not_null(l_10);
  t = p_75(t);
  if(((n_10 != NULL) && (n_10 != t)))
    _fail(t);
  else
    n_10 = t;
  {
    ATerm p_10 = NULL;
    ATerm r_10 = NULL;
    if(((r_10 != NULL) && (r_10 != t)))
      _fail(t);
    else
      r_10 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_10)), not_null(m_10));
    if(((p_10 != NULL) && (p_10 != t)))
      _fail(t);
    else
      p_10 = t;
    t = not_null(r_10);
    t = not_null(p_10);
  }
  return(t);
}
ATerm fetch_1_0 (ATerm k_80 (ATerm), ATerm t)
{
  ATerm l_80 (ATerm t)
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_80, _id, t);
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        t = Cons_2_0(_id, l_80, t);
      }
    return(t);
  }
  t = l_80(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  t = fetch_1_0(n_100, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm d_25 = ATgetFirst((ATermList) t);
          ATerm e_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  if(((s_10 != NULL) && (s_10 != t)))
    _fail(t);
  else
    s_10 = t;
  {
    ATerm t_414 = NULL;
    ATerm t_10 = NULL;
    if(((t_10 != NULL) && (t_10 != t)))
      _fail(t);
    else
      t_10 = t;
    {
      ATerm f_25 = t;
      int g_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_list_0_0(t);
          ;
          LocalPopChoice(g_25);
        }
      else
        {
          t = f_25;
          {
            ATerm v_414 = NULL;
            ATerm u_10 = NULL;
            if(((u_10 != NULL) && (u_10 != t)))
              _fail(t);
            else
              u_10 = t;
            if(((v_414 != NULL) && (v_414 != t)))
              _fail(t);
            else
              v_414 = t;
            t = not_null(u_10);
            t = (ATerm) ATinsert(ATempty, not_null(v_414));
          }
        }
      if(((t_414 != NULL) && (t_414 != t)))
        _fail(t);
      else
        t_414 = t;
      t = not_null(t_10);
    }
    t = (ATerm) ATmakeAppl(sym__2, term_b_21, not_null(t_414));
    t = printnl_0_0(t);
    t = not_null(s_10);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_23;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(i_25);
    }
  else
    {
      t = h_25;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_88(t);
      ;
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_15 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm q_15 (ATerm t)
      {
        t = term_o_25;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm r_15 (ATerm t)
      {
        t = term_p_25;
        return(t);
      }
      t = Option_3_0(p_15, q_15, r_15, t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm s_15 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm t_15 (ATerm t)
        {
          ATerm v_10 = NULL;
          if(((v_10 != NULL) && (v_10 != t)))
            _fail(t);
          else
            v_10 = t;
          t = term_o_25;
          t = set_config_0_0(t);
          t = term_r_25;
          t = set_config_0_0(t);
          t = not_null(v_10);
          t = term_s_25;
          return(t);
        }
        ATerm u_15 (ATerm t)
        {
          t = term_t_25;
          return(t);
        }
        t = Option_3_0(s_15, t_15, u_15, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_29 != NULL) && (s_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_29 = ATgetArgument(t, 0);
      if(((t_29 != NULL) && (t_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(s_29), not_null(t_29));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((e_28 != NULL) && (e_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_28 = ATgetArgument(t, 0);
      if(((f_28 != NULL) && (f_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_28 = ATgetArgument(t, 1);
      if(((d_28 != NULL) && (d_28 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        d_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm w_10 = NULL;
    if(((w_10 != NULL) && (w_10 != t)))
      _fail(t);
    else
      w_10 = t;
    {
      ATerm v_145 = NULL;
      ATerm x_10 = NULL;
      if(((x_10 != NULL) && (x_10 != t)))
        _fail(t);
      else
        x_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_28), not_null(f_28));
      {
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = table_get_0_0(t);
            ;
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
            t = (ATerm) ATempty;
          }
        if(((v_145 != NULL) && (v_145 != t)))
          _fail(t);
        else
          v_145 = t;
        t = not_null(x_10);
      }
      t = (ATerm) ATmakeAppl(sym__3, not_null(e_28), not_null(f_28), (ATerm) ATinsert(CheckATermList(not_null(v_145)), not_null(d_28)));
      t = table_put_0_0(t);
      t = not_null(w_10);
    }
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm s_101 (ATerm), ATerm t)
{
  ATerm r_530 = NULL;
  ATerm y_10 = NULL;
  if(((y_10 != NULL) && (y_10 != t)))
    _fail(t);
  else
    y_10 = t;
  t = term_m_18;
  t = s_101(t);
  if(((r_530 != NULL) && (r_530 != t)))
    _fail(t);
  else
    r_530 = t;
  t = not_null(y_10);
  t = (ATerm) ATmakeAppl(sym__3, term_s_24, term_t_24, not_null(r_530));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register-usage-info", 0, ATtrue)))
        _fail(t);
      t = register_usage_1_0(d_0, t);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
        ATerm c_58 = NULL,d_58 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((d_58 != NULL) && (d_58 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              d_58 = ATgetFirst((ATermList) t);
            if(((c_58 != NULL) && (c_58 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              c_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_10 = NULL;
          if(((z_10 != NULL) && (z_10 != t)))
            _fail(t);
          else
            z_10 = t;
          t = not_null(d_58);
          t = a_0(t);
          t = not_null(z_10);
          {
            ATerm e_521 = NULL;
            ATerm a_11 = NULL;
            if(((a_11 != NULL) && (a_11 != t)))
              _fail(t);
            else
              a_11 = t;
            t = term_m_18;
            t = c_0(t);
            if(((e_521 != NULL) && (e_521 != t)))
              _fail(t);
            else
              e_521 = t;
            t = not_null(a_11);
            t = (ATerm) ATinsert(CheckATermList(not_null(c_58)), not_null(e_521));
          }
        }
      }
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm v_15 (ATerm t)
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        {
          ATerm a_26 = t;
          int b_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-h", 0, ATtrue)))
                _fail(t);
              ;
              LocalPopChoice(b_26);
            }
          else
            {
              t = a_26;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                _fail(t);
            }
        }
      }
    return(t);
  }
  ATerm w_15 (ATerm t)
  {
    t = term_c_26;
    t = set_config_0_0(t);
    t = term_d_26;
    return(t);
  }
  ATerm x_15 (ATerm t)
  {
    t = term_e_26;
    return(t);
  }
  t = Option_3_0(v_15, w_15, x_15, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((p_58 != NULL) && (p_58 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        p_58 = ATgetFirst((ATermList) t);
      if(((q_58 != NULL) && (q_58 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        q_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(q_58)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_58)));
  return(t);
}
ATerm Cons_2_0 (ATerm w_62 (ATerm), ATerm x_62 (ATerm), ATerm t)
{
  ATerm d_11 = NULL,b_11 = NULL,c_11 = NULL,e_11 = NULL,f_11 = NULL;
  ATerm g_11 = NULL;
  if(((g_11 != NULL) && (g_11 != t)))
    _fail(t);
  else
    g_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((b_11 != NULL) && (b_11 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        b_11 = ATgetFirst((ATermList) t);
      if(((c_11 != NULL) && (c_11 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        c_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm i_11 = NULL;
    if(((i_11 != NULL) && (i_11 != t)))
      _fail(t);
    else
      i_11 = t;
    t = SSLgetAnnotations(not_null(g_11));
    if(((d_11 != NULL) && (d_11 != t)))
      _fail(t);
    else
      d_11 = t;
    t = not_null(i_11);
  }
  t = not_null(b_11);
  t = w_62(t);
  if(((e_11 != NULL) && (e_11 != t)))
    _fail(t);
  else
    e_11 = t;
  t = not_null(c_11);
  t = x_62(t);
  if(((f_11 != NULL) && (f_11 != t)))
    _fail(t);
  else
    f_11 = t;
  {
    ATerm h_11 = NULL;
    ATerm j_11 = NULL;
    if(((j_11 != NULL) && (j_11 != t)))
      _fail(t);
    else
      j_11 = t;
    t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_11)), not_null(e_11)), not_null(d_11));
    if(((h_11 != NULL) && (h_11 != t)))
      _fail(t);
    else
      h_11 = t;
    t = not_null(j_11);
    t = not_null(h_11);
  }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_55 != NULL) && (g_55 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_55 = ATgetArgument(t, 0);
      if(((h_55 != NULL) && (h_55 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_20, not_null(g_55), not_null(h_55));
  t = table_put_0_0(t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_101 (ATerm), ATerm t)
{
  ATerm k_11 = NULL;
  if(((k_11 != NULL) && (k_11 != t)))
    _fail(t);
  else
    k_11 = t;
  {
    ATerm y_15 (ATerm t)
    {
      t = term_f_26;
      t = q_101(t);
      return(t);
    }
    t = try_1_0(y_15, t);
    t = not_null(k_11);
  }
  {
    ATerm z_15 (ATerm t)
    {
      ATerm l_11 = NULL;
      if(((l_11 != NULL) && (l_11 != t)))
        _fail(t);
      else
        l_11 = t;
      {
        ATerm u_529 = NULL;
        ATerm m_11 = NULL;
        if(((m_11 != NULL) && (m_11 != t)))
          _fail(t);
        else
          m_11 = t;
        if(((u_529 != NULL) && (u_529 != t)))
          _fail(t);
        else
          u_529 = t;
        t = not_null(m_11);
        t = (ATerm) ATmakeAppl(sym__2, term_q_23, not_null(u_529));
        t = set_config_0_0(t);
        t = not_null(l_11);
      }
      {
        ATerm f_530 = NULL;
        ATerm n_11 = NULL;
        if(((n_11 != NULL) && (n_11 != t)))
          _fail(t);
        else
          n_11 = t;
        if(((f_530 != NULL) && (f_530 != t)))
          _fail(t);
        else
          f_530 = t;
        t = not_null(n_11);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_530));
      }
      return(t);
    }
    ATerm a_16 (ATerm t)
    {
      ATerm g_26 = t;
      int h_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_26 = t;
          int i_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(i_28);
            }
          else
            {
              t = i_26;
              t = q_101(t);
              t = Cons_2_0(_id, a_16, t);
            }
          ;
          LocalPopChoice(h_26);
        }
      else
        {
          t = g_26;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(z_15, a_16, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,o_11 = NULL;
  if(((o_11 != NULL) && (o_11 != t)))
    _fail(t);
  else
    o_11 = t;
  if(match_cons(t, sym__3))
    {
      if(((p_29 != NULL) && (p_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_29 = ATgetArgument(t, 0);
      if(((q_29 != NULL) && (q_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_29 = ATgetArgument(t, 1);
      if(((r_29 != NULL) && (r_29 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        r_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(p_29), not_null(q_29), not_null(r_29));
  t = not_null(o_11);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_101 (ATerm), ATerm t)
{
  ATerm r_58 = NULL;
  ATerm p_11 = NULL;
  if(((p_11 != NULL) && (p_11 != t)))
    _fail(t);
  else
    p_11 = t;
  t = term_j_28;
  t = table_put_0_0(t);
  t = not_null(p_11);
  {
    ATerm b_16 (ATerm t)
    {
      ATerm k_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_101(t);
          ;
          LocalPopChoice(l_28);
        }
      else
        {
          t = k_28;
          {
            ATerm s_28 = t;
            int t_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(t_28);
              }
            else
              {
                t = s_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_16, t);
    {
      ATerm c_16 (ATerm t)
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_11 = NULL;
            if(((q_11 != NULL) && (q_11 != t)))
              _fail(t);
            else
              q_11 = t;
            {
              ATerm w_28 = t;
              int x_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_e_24;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(x_28);
                }
              else
                {
                  t = w_28;
                  t = option_defined_1_0(Help_0_0, t);
                }
              t = not_null(q_11);
            }
            t = system_usage_0_0(t);
            t = term_h_22;
            t = exit_0_0(t);
            ;
            LocalPopChoice(v_28);
          }
        else
          {
            t = u_28;
            {
              ATerm y_28 = t;
              int z_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_11 = NULL;
                  if(((r_11 != NULL) && (r_11 != t)))
                    _fail(t);
                  else
                    r_11 = t;
                  t = term_n_25;
                  t = get_config_0_0(t);
                  t = not_null(r_11);
                  t = system_about_0_0(t);
                  t = term_h_22;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(z_28);
                }
              else
                {
                  t = y_28;
                  {
                    ATerm d_16 (ATerm t)
                    {
                      ATerm e_16 (ATerm t)
                      {
                        if(((r_58 != NULL) && (r_58 != t)))
                          _fail(t);
                        else
                          r_58 = t;
                        return(t);
                      }
                      t = Undefined_1_0(e_16, t);
                      return(t);
                    }
                    t = option_defined_1_0(d_16, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_k_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_58)), term_a_29));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_z_19;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(c_16, t);
      {
        ATerm s_11 = NULL;
        if(((s_11 != NULL) && (s_11 != t)))
          _fail(t);
        else
          s_11 = t;
        t = term_s_24;
        t = table_destroy_0_0(t);
        t = not_null(s_11);
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm t)
{
  t = parse_options_1_0(n_98, t);
  t = store_options_0_0(t);
  t = p_98(t);
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_98, t);
        ;
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        {
          ATerm j_29 = t;
          int k_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_98(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_29);
            }
          else
            {
              t = j_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm t)
{
  ATerm f_16 (ATerm t)
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_98(t);
        ;
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm g_16 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(c_98, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(f_16, e_98, f_98, g_16, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm t)
{
  ATerm h_16 (ATerm t)
  {
    ATerm i_16 (ATerm t)
    {
      ATerm t_11 = NULL;
      if(((t_11 != NULL) && (t_11 != t)))
        _fail(t);
      else
        t_11 = t;
      {
        ATerm h_455 = NULL;
        ATerm u_11 = NULL;
        if(((u_11 != NULL) && (u_11 != t)))
          _fail(t);
        else
          u_11 = t;
        t = term_q_23;
        t = get_config_0_0(t);
        if(((h_455 != NULL) && (h_455 != t)))
          _fail(t);
        else
          h_455 = t;
        t = not_null(u_11);
        t = (ATerm) ATmakeAppl(sym__2, term_k_16, (ATerm) ATinsert(ATempty, not_null(h_455)));
        t = printnl_0_0(t);
        t = not_null(t_11);
      }
      return(t);
    }
    t = if_verbose2_1_0(i_16, t);
    return(t);
  }
  t = iowrap_4_0(w_97, x_97, y_97, h_16, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm t)
{
  t = iowrap_3_0(u_97, v_97, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm r_97 (ATerm), ATerm t)
{
  ATerm j_16 (ATerm t)
  {
    t = _2_0(_id, r_97, t);
    return(t);
  }
  t = iowrap_2_0(j_16, _fail, t);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  t = iowrap_1_0(mark_bound_unbound_vars_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = bound_unbound_vars_0_0(t);
  return(t);
}
