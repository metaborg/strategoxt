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
ATerm term_o_27;
ATerm term_d_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_y_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_x_6;
ATerm term_n_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_y_5;
ATerm term_t_5;
ATerm term_n_5;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_a_5;
void init_constant_terms (void)
{
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_b_5, term_w_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_n_6);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_n_6);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym__2, term_g_17, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_m_26, term_n_6);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_n_6);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym__2, term_m_11, term_n_6);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__3, term_g_17, term_h_17, (ATerm) ATempty);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
  if(((v_11 != NULL) && (v_11 != t)))
    _fail(t);
  else
    v_11 = t;
  if(((w_11 != NULL) && (w_11 != t)))
    _fail(t);
  else
    w_11 = t;
  if(((x_11 != NULL) && (x_11 != t)))
    _fail(t);
  else
    x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_5, (ATerm) ATinsert(ATempty, not_null(x_11)));
  t = printnl_0_0(t);
  t = not_null(v_11);
  return(t);
}
ATerm say_1_0 (ATerm r_95 (ATerm), ATerm t)
{
  ATerm y_11 = NULL;
  if(((y_11 != NULL) && (y_11 != t)))
    _fail(t);
  else
    y_11 = t;
  t = r_95(t);
  t = debug_0_0(t);
  t = not_null(y_11);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  ATerm j_0 (ATerm t)
  {
    ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
    if(((z_11 != NULL) && (z_11 != t)))
      _fail(t);
    else
      z_11 = t;
    if(((a_12 != NULL) && (a_12 != t)))
      _fail(t);
    else
      a_12 = t;
    t = term_b_5;
    t = get_config_0_0(t);
    if(((b_12 != NULL) && (b_12 != t)))
      _fail(t);
    else
      b_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_12), term_c_5);
    t = geq_0_0(t);
    t = not_null(z_11);
    t = m_104(t);
    return(t);
  }
  t = try_1_0(j_0, t);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm c_68 (ATerm), ATerm d_68 (ATerm), ATerm e_68 (ATerm), ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
  if(((j_12 != NULL) && (j_12 != t)))
    _fail(t);
  else
    j_12 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      if(((d_12 != NULL) && (d_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_12 = ATgetArgument(t, 0);
      if(((e_12 != NULL) && (e_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_12 = ATgetArgument(t, 1);
      if(((f_12 != NULL) && (f_12 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        f_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((k_12 != NULL) && (k_12 != t)))
    _fail(t);
  else
    k_12 = t;
  t = SSLgetAnnotations(not_null(j_12));
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  t = not_null(d_12);
  t = c_68(t);
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  t = not_null(e_12);
  t = d_68(t);
  if(((h_12 != NULL) && (h_12 != t)))
    _fail(t);
  else
    h_12 = t;
  t = not_null(f_12);
  t = e_68(t);
  if(((i_12 != NULL) && (i_12 != t)))
    _fail(t);
  else
    i_12 = t;
  if(((m_12 != NULL) && (m_12 != t)))
    _fail(t);
  else
    m_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(g_12), not_null(h_12), not_null(i_12)), not_null(c_12));
  if(((l_12 != NULL) && (l_12 != t)))
    _fail(t);
  else
    l_12 = t;
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, _id, t);
  {
    ATerm m_0 (ATerm t)
    {
      t = GuardedLChoice_3_0(w_75, _id, _id, t);
      t = GuardedLChoice_3_0(_id, w_75, _id, t);
      return(t);
    }
    ATerm n_0 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, _id, w_75, t);
      return(t);
    }
    t = abstract_choice_2_0(m_0, n_0, t);
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
  if(((s_12 != NULL) && (s_12 != t)))
    _fail(t);
  else
    s_12 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      if(((o_12 != NULL) && (o_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_12 = ATgetArgument(t, 0);
      if(((p_12 != NULL) && (p_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((t_12 != NULL) && (t_12 != t)))
    _fail(t);
  else
    t_12 = t;
  t = SSLgetAnnotations(not_null(s_12));
  if(((n_12 != NULL) && (n_12 != t)))
    _fail(t);
  else
    n_12 = t;
  t = not_null(o_12);
  t = y_67(t);
  if(((q_12 != NULL) && (q_12 != t)))
    _fail(t);
  else
    q_12 = t;
  t = not_null(p_12);
  t = z_67(t);
  if(((r_12 != NULL) && (r_12 != t)))
    _fail(t);
  else
    r_12 = t;
  if(((v_12 != NULL) && (v_12 != t)))
    _fail(t);
  else
    v_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(q_12), not_null(r_12)), not_null(n_12));
  if(((u_12 != NULL) && (u_12 != t)))
    _fail(t);
  else
    u_12 = t;
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm v_75 (ATerm), ATerm t)
{
  t = LChoice_2_0(_id, _id, t);
  {
    ATerm o_0 (ATerm t)
    {
      t = LChoice_2_0(v_75, _id, t);
      return(t);
    }
    ATerm p_0 (ATerm t)
    {
      t = LChoice_2_0(_id, v_75, t);
      return(t);
    }
    t = abstract_choice_2_0(o_0, p_0, t);
  }
  return(t);
}
ATerm Choice_2_0 (ATerm w_66 (ATerm), ATerm x_66 (ATerm), ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
  if(((b_13 != NULL) && (b_13 != t)))
    _fail(t);
  else
    b_13 = t;
  if(match_cons(t, sym_Choice_2))
    {
      if(((x_12 != NULL) && (x_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_12 = ATgetArgument(t, 0);
      if(((y_12 != NULL) && (y_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((c_13 != NULL) && (c_13 != t)))
    _fail(t);
  else
    c_13 = t;
  t = SSLgetAnnotations(not_null(b_13));
  if(((w_12 != NULL) && (w_12 != t)))
    _fail(t);
  else
    w_12 = t;
  t = not_null(x_12);
  t = w_66(t);
  if(((z_12 != NULL) && (z_12 != t)))
    _fail(t);
  else
    z_12 = t;
  t = not_null(y_12);
  t = x_66(t);
  if(((a_13 != NULL) && (a_13 != t)))
    _fail(t);
  else
    a_13 = t;
  if(((e_13 != NULL) && (e_13 != t)))
    _fail(t);
  else
    e_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(z_12), not_null(a_13)), not_null(w_12));
  if(((d_13 != NULL) && (d_13 != t)))
    _fail(t);
  else
    d_13 = t;
  return(t);
}
ATerm abstract_choice_2_0 (ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  if(((f_13 != NULL) && (f_13 != t)))
    _fail(t);
  else
    f_13 = t;
  t = save_MarkVar_0_0(t);
  if(((g_13 != NULL) && (g_13 != t)))
    _fail(t);
  else
    g_13 = t;
  t = not_null(f_13);
  t = x_75(t);
  if(((h_13 != NULL) && (h_13 != t)))
    _fail(t);
  else
    h_13 = t;
  t = save_MarkVar_0_0(t);
  if(((i_13 != NULL) && (i_13 != t)))
    _fail(t);
  else
    i_13 = t;
  t = not_null(g_13);
  t = restore_MarkVar_0_0(t);
  t = not_null(h_13);
  t = y_75(t);
  if(((j_13 != NULL) && (j_13 != t)))
    _fail(t);
  else
    j_13 = t;
  t = not_null(i_13);
  t = isect_MarkVar_0_0(t);
  t = not_null(j_13);
  return(t);
}
ATerm mark_choice_1_0 (ATerm u_75 (ATerm), ATerm t)
{
  t = Choice_2_0(_id, _id, t);
  {
    ATerm q_0 (ATerm t)
    {
      t = Choice_2_0(u_75, _id, t);
      return(t);
    }
    ATerm r_0 (ATerm t)
    {
      t = Choice_2_0(_id, u_75, t);
      return(t);
    }
    t = abstract_choice_2_0(q_0, r_0, t);
  }
  return(t);
}
ATerm Rec_2_0 (ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
  if(((p_13 != NULL) && (p_13 != t)))
    _fail(t);
  else
    p_13 = t;
  if(match_cons(t, sym_Rec_2))
    {
      if(((l_13 != NULL) && (l_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_13 = ATgetArgument(t, 0);
      if(((m_13 != NULL) && (m_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((q_13 != NULL) && (q_13 != t)))
    _fail(t);
  else
    q_13 = t;
  t = SSLgetAnnotations(not_null(p_13));
  if(((k_13 != NULL) && (k_13 != t)))
    _fail(t);
  else
    k_13 = t;
  t = not_null(l_13);
  t = f_68(t);
  if(((n_13 != NULL) && (n_13 != t)))
    _fail(t);
  else
    n_13 = t;
  t = not_null(m_13);
  t = g_68(t);
  if(((o_13 != NULL) && (o_13 != t)))
    _fail(t);
  else
    o_13 = t;
  if(((s_13 != NULL) && (s_13 != t)))
    _fail(t);
  else
    s_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(n_13), not_null(o_13)), not_null(k_13));
  if(((r_13 != NULL) && (r_13 != t)))
    _fail(t);
  else
    r_13 = t;
  return(t);
}
ATerm mark_rec_0_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
  if(match_cons(t, sym_Rec_2))
    {
      ATerm d_5 = ATgetArgument(t, 0);
      ATerm e_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((t_13 != NULL) && (t_13 != t)))
    _fail(t);
  else
    t_13 = t;
  t = save_MarkVar_0_0(t);
  if(((u_13 != NULL) && (u_13 != t)))
    _fail(t);
  else
    u_13 = t;
  t = not_null(t_13);
  if(((v_13 != NULL) && (v_13 != t)))
    _fail(t);
  else
    v_13 = t;
  t = Rec_2_0(_id, mark_buv_0_0, t);
  t = not_null(v_13);
  if(((w_13 != NULL) && (w_13 != t)))
    _fail(t);
  else
    w_13 = t;
  t = not_null(u_13);
  t = isect_MarkVar_0_0(t);
  t = not_null(w_13);
  t = Rec_2_0(_id, mark_buv_0_0, t);
  return(t);
}
ATerm PrimT_3_0 (ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
  if(((e_14 != NULL) && (e_14 != t)))
    _fail(t);
  else
    e_14 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      if(((y_13 != NULL) && (y_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_13 = ATgetArgument(t, 0);
      if(((z_13 != NULL) && (z_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_13 = ATgetArgument(t, 1);
      if(((a_14 != NULL) && (a_14 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        a_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((f_14 != NULL) && (f_14 != t)))
    _fail(t);
  else
    f_14 = t;
  t = SSLgetAnnotations(not_null(e_14));
  if(((x_13 != NULL) && (x_13 != t)))
    _fail(t);
  else
    x_13 = t;
  t = not_null(y_13);
  t = o_68(t);
  if(((b_14 != NULL) && (b_14 != t)))
    _fail(t);
  else
    b_14 = t;
  t = not_null(z_13);
  t = p_68(t);
  if(((c_14 != NULL) && (c_14 != t)))
    _fail(t);
  else
    c_14 = t;
  t = not_null(a_14);
  t = q_68(t);
  if(((d_14 != NULL) && (d_14 != t)))
    _fail(t);
  else
    d_14 = t;
  if(((h_14 != NULL) && (h_14 != t)))
    _fail(t);
  else
    h_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(b_14), not_null(c_14), not_null(d_14)), not_null(x_13));
  if(((g_14 != NULL) && (g_14 != t)))
    _fail(t);
  else
    g_14 = t;
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  t = PrimT_3_0(_id, _id, _id, t);
  if(((i_14 != NULL) && (i_14 != t)))
    _fail(t);
  else
    i_14 = t;
  t = save_MarkVar_0_0(t);
  if(((j_14 != NULL) && (j_14 != t)))
    _fail(t);
  else
    j_14 = t;
  t = not_null(i_14);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm t_0 (ATerm t)
      {
        t = alltd_1_0(MarkVar_0_0, t);
        return(t);
      }
      t = map_1_0(t_0, t);
      return(t);
    }
    t = PrimT_3_0(_id, _id, s_0, t);
    t = PrimT_3_0(_id, mark_buv_0_0, _id, t);
    if(((k_14 != NULL) && (k_14 != t)))
      _fail(t);
    else
      k_14 = t;
    t = not_null(j_14);
    t = isect_MarkVar_0_0(t);
    t = not_null(k_14);
  }
  return(t);
}
ATerm Call_2_0 (ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
  if(((q_14 != NULL) && (q_14 != t)))
    _fail(t);
  else
    q_14 = t;
  if(match_cons(t, sym_Call_2))
    {
      if(((m_14 != NULL) && (m_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_14 = ATgetArgument(t, 0);
      if(((n_14 != NULL) && (n_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_14 != NULL) && (r_14 != t)))
    _fail(t);
  else
    r_14 = t;
  t = SSLgetAnnotations(not_null(q_14));
  if(((l_14 != NULL) && (l_14 != t)))
    _fail(t);
  else
    l_14 = t;
  t = not_null(m_14);
  t = k_67(t);
  if(((o_14 != NULL) && (o_14 != t)))
    _fail(t);
  else
    o_14 = t;
  t = not_null(n_14);
  t = l_67(t);
  if(((p_14 != NULL) && (p_14 != t)))
    _fail(t);
  else
    p_14 = t;
  if(((t_14 != NULL) && (t_14 != t)))
    _fail(t);
  else
    t_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(o_14), not_null(p_14)), not_null(l_14));
  if(((s_14 != NULL) && (s_14 != t)))
    _fail(t);
  else
    s_14 = t;
  return(t);
}
ATerm CallT_3_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm o_67 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  if(((b_15 != NULL) && (b_15 != t)))
    _fail(t);
  else
    b_15 = t;
  if(match_cons(t, sym_CallT_3))
    {
      if(((v_14 != NULL) && (v_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_14 = ATgetArgument(t, 0);
      if(((w_14 != NULL) && (w_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_14 = ATgetArgument(t, 1);
      if(((x_14 != NULL) && (x_14 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        x_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((c_15 != NULL) && (c_15 != t)))
    _fail(t);
  else
    c_15 = t;
  t = SSLgetAnnotations(not_null(b_15));
  if(((u_14 != NULL) && (u_14 != t)))
    _fail(t);
  else
    u_14 = t;
  t = not_null(v_14);
  t = m_67(t);
  if(((y_14 != NULL) && (y_14 != t)))
    _fail(t);
  else
    y_14 = t;
  t = not_null(w_14);
  t = n_67(t);
  if(((z_14 != NULL) && (z_14 != t)))
    _fail(t);
  else
    z_14 = t;
  t = not_null(x_14);
  t = o_67(t);
  if(((a_15 != NULL) && (a_15 != t)))
    _fail(t);
  else
    a_15 = t;
  if(((e_15 != NULL) && (e_15 != t)))
    _fail(t);
  else
    e_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(y_14), not_null(z_14), not_null(a_15)), not_null(u_14));
  if(((d_15 != NULL) && (d_15 != t)))
    _fail(t);
  else
    d_15 = t;
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm f_5 = t;
  int g_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
      t = CallT_3_0(_id, _id, _id, t);
      if(((f_15 != NULL) && (f_15 != t)))
        _fail(t);
      else
        f_15 = t;
      t = save_MarkVar_0_0(t);
      if(((g_15 != NULL) && (g_15 != t)))
        _fail(t);
      else
        g_15 = t;
      t = not_null(f_15);
      {
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = alltd_1_0(MarkVar_0_0, t);
            return(t);
          }
          t = map_1_0(v_0, t);
          return(t);
        }
        t = CallT_3_0(_id, _id, u_0, t);
        t = CallT_3_0(_id, mark_buv_0_0, _id, t);
        if(((h_15 != NULL) && (h_15 != t)))
          _fail(t);
        else
          h_15 = t;
        t = not_null(g_15);
        t = isect_MarkVar_0_0(t);
        t = not_null(h_15);
      }
      ;
      LocalPopChoice(g_5);
    }
  else
    {
      t = f_5;
      {
        ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
        t = Call_2_0(_id, _id, t);
        if(((i_15 != NULL) && (i_15 != t)))
          _fail(t);
        else
          i_15 = t;
        t = save_MarkVar_0_0(t);
        if(((j_15 != NULL) && (j_15 != t)))
          _fail(t);
        else
          j_15 = t;
        t = not_null(i_15);
        t = Call_2_0(_id, mark_buv_0_0, t);
        if(((k_15 != NULL) && (k_15 != t)))
          _fail(t);
        else
          k_15 = t;
        t = not_null(j_15);
        t = isect_MarkVar_0_0(t);
        t = not_null(k_15);
      }
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm a_70 (ATerm), ATerm b_70 (ATerm), ATerm c_70 (ATerm), ATerm d_70 (ATerm), ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  if(((u_15 != NULL) && (u_15 != t)))
    _fail(t);
  else
    u_15 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      if(((m_15 != NULL) && (m_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_15 = ATgetArgument(t, 0);
      if(((n_15 != NULL) && (n_15 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_15 = ATgetArgument(t, 1);
      if(((o_15 != NULL) && (o_15 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        o_15 = ATgetArgument(t, 2);
      if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        p_15 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((v_15 != NULL) && (v_15 != t)))
    _fail(t);
  else
    v_15 = t;
  t = SSLgetAnnotations(not_null(u_15));
  if(((l_15 != NULL) && (l_15 != t)))
    _fail(t);
  else
    l_15 = t;
  t = not_null(m_15);
  t = a_70(t);
  if(((q_15 != NULL) && (q_15 != t)))
    _fail(t);
  else
    q_15 = t;
  t = not_null(n_15);
  t = b_70(t);
  if(((r_15 != NULL) && (r_15 != t)))
    _fail(t);
  else
    r_15 = t;
  t = not_null(o_15);
  t = c_70(t);
  if(((s_15 != NULL) && (s_15 != t)))
    _fail(t);
  else
    s_15 = t;
  t = not_null(p_15);
  t = d_70(t);
  if(((t_15 != NULL) && (t_15 != t)))
    _fail(t);
  else
    t_15 = t;
  if(((x_15 != NULL) && (x_15 != t)))
    _fail(t);
  else
    x_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(q_15), not_null(r_15), not_null(s_15), not_null(t_15)), not_null(l_15));
  if(((w_15 != NULL) && (w_15 != t)))
    _fail(t);
  else
    w_15 = t;
  return(t);
}
ATerm mark_sdef_0_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm h_5 = ATgetArgument(t, 0);
      ATerm i_5 = ATgetArgument(t, 1);
      if(((y_15 != NULL) && (y_15 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        y_15 = ATgetArgument(t, 2);
      {
        ATerm j_5 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  if(((z_15 != NULL) && (z_15 != t)))
    _fail(t);
  else
    z_15 = t;
  t = term_k_5;
  if(((a_16 != NULL) && (a_16 != t)))
    _fail(t);
  else
    a_16 = t;
  t = not_null(z_15);
  {
    ATerm w_0 (ATerm t)
    {
      ATerm x_0 (ATerm t)
      {
        t = term_l_5;
        return(t);
      }
      ATerm y_0 (ATerm t)
      {
        ATerm b_16 = NULL;
        if(((b_16 != NULL) && (b_16 != t)))
          _fail(t);
        else
          b_16 = t;
        t = not_null(y_15);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm c_16 = NULL,d_16 = NULL;
            if(match_cons(t, sym_VarDec_2))
              {
                if(((c_16 != NULL) && (c_16 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_16 = ATgetArgument(t, 0);
                {
                  ATerm m_5 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            if(((d_16 != NULL) && (d_16 != t)))
              _fail(t);
            else
              d_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_16)), (ATerm) ATmakeAppl(sym_Defined_2, term_n_5, not_null(a_16)));
            {
              ATerm a_1 (ATerm t)
              {
                t = term_l_5;
                return(t);
              }
              t = assert_1_0(a_1, t);
              t = not_null(d_16);
            }
            return(t);
          }
          t = map_1_0(z_0, t);
          t = not_null(b_16);
          t = mark_buv_0_0(t);
        }
        return(t);
      }
      t = scope_2_0(x_0, y_0, t);
      return(t);
    }
    t = SDefT_4_0(_id, _id, _id, w_0, t);
  }
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm h_16 = NULL,f_16 = NULL,g_16 = NULL,i_16 = NULL,j_16 = NULL;
  if(((f_16 != NULL) && (f_16 != t)))
    _fail(t);
  else
    f_16 = t;
  if(match_cons(t, sym_All_1))
    {
      g_16 = ATgetArgument(t, 0);
      t = not_null(f_16);
    }
  else
    {
      if(match_cons(t, sym_One_1))
        {
          g_16 = ATgetArgument(t, 0);
          t = not_null(f_16);
        }
      else
        {
          if(match_cons(t, sym_Some_1))
            {
              g_16 = ATgetArgument(t, 0);
              t = not_null(f_16);
            }
          else
            {
              if(match_cons(t, sym_Thread_1))
                {
                  if(((g_16 != NULL) && (g_16 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    g_16 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = not_null(f_16);
            }
        }
    }
  if(((h_16 != NULL) && (h_16 != t)))
    _fail(t);
  else
    h_16 = t;
  t = save_MarkVar_0_0(t);
  if(((i_16 != NULL) && (i_16 != t)))
    _fail(t);
  else
    i_16 = t;
  t = not_null(h_16);
  t = SRTS_one(mark_buv_0_0, t);
  if(((j_16 != NULL) && (j_16 != t)))
    _fail(t);
  else
    j_16 = t;
  t = not_null(i_16);
  t = isect_MarkVar_0_0(t);
  t = not_null(j_16);
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm k_16 = NULL;
  if(((k_16 != NULL) && (k_16 != t)))
    _fail(t);
  else
    k_16 = t;
  t = SSL_table_keys(not_null(k_16));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm l_16 = NULL;
  if(((l_16 != NULL) && (l_16 != t)))
    _fail(t);
  else
    l_16 = t;
  t = table_keys_0_0(t);
  {
    ATerm b_1 (ATerm t)
    {
      ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
      if(((m_16 != NULL) && (m_16 != t)))
        _fail(t);
      else
        m_16 = t;
      if(((n_16 != NULL) && (n_16 != t)))
        _fail(t);
      else
        n_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), not_null(m_16));
      t = table_get_0_0(t);
      if(((o_16 != NULL) && (o_16 != t)))
        _fail(t);
      else
        o_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), not_null(o_16));
      return(t);
    }
    t = map_1_0(b_1, t);
  }
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_l_5;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_16 != NULL) && (q_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_16 = ATgetArgument(t, 0);
      if(((p_16 != NULL) && (p_16 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(p_16);
  {
    ATerm c_1 (ATerm t)
    {
      ATerm r_16 = NULL,s_16 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((r_16 != NULL) && (r_16 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            r_16 = ATgetArgument(t, 0);
          if(((s_16 != NULL) && (s_16 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            s_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(q_16), not_null(r_16), not_null(s_16));
      t = table_put_0_0(t);
      return(t);
    }
    t = map_1_0(c_1, t);
  }
  return(t);
}
ATerm restore_MarkVar_0_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL;
  if(((t_16 != NULL) && (t_16 != t)))
    _fail(t);
  else
    t_16 = t;
  if(((u_16 != NULL) && (u_16 != t)))
    _fail(t);
  else
    u_16 = t;
  t = term_l_5;
  t = table_destroy_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_5, not_null(t_16));
  t = table_putlist_0_0(t);
  t = not_null(u_16);
  return(t);
}
ATerm Let_2_0 (ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  if(((a_17 != NULL) && (a_17 != t)))
    _fail(t);
  else
    a_17 = t;
  if(match_cons(t, sym_Let_2))
    {
      if(((w_16 != NULL) && (w_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_16 = ATgetArgument(t, 0);
      if(((x_16 != NULL) && (x_16 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((b_17 != NULL) && (b_17 != t)))
    _fail(t);
  else
    b_17 = t;
  t = SSLgetAnnotations(not_null(a_17));
  if(((v_16 != NULL) && (v_16 != t)))
    _fail(t);
  else
    v_16 = t;
  t = not_null(w_16);
  t = i_67(t);
  if(((y_16 != NULL) && (y_16 != t)))
    _fail(t);
  else
    y_16 = t;
  t = not_null(x_16);
  t = j_67(t);
  if(((z_16 != NULL) && (z_16 != t)))
    _fail(t);
  else
    z_16 = t;
  if(((d_17 != NULL) && (d_17 != t)))
    _fail(t);
  else
    d_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(y_16), not_null(z_16)), not_null(v_16));
  if(((c_17 != NULL) && (c_17 != t)))
    _fail(t);
  else
    c_17 = t;
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm m_17 = NULL;
  if(((m_17 != NULL) && (m_17 != t)))
    _fail(t);
  else
    m_17 = t;
  t = save_MarkVar_0_0(t);
  t = not_null(m_17);
  {
    ATerm d_1 (ATerm t)
    {
      ATerm e_1 (ATerm t)
      {
        ATerm e_18 (ATerm n_17, ATerm o_17, ATerm p_17, ATerm q_17, ATerm t)
        {
          ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
          t = not_null(n_17);
          if(((r_17 != NULL) && (r_17 != t)))
            _fail(t);
          else
            r_17 = t;
          t = not_null(o_17);
          if(((t_17 != NULL) && (t_17 != t)))
            _fail(t);
          else
            t_17 = t;
          t = not_null(p_17);
          if(((s_17 != NULL) && (s_17 != t)))
            _fail(t);
          else
            s_17 = t;
          t = not_null(q_17);
          {
            ATerm o_5 = t;
            int p_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_18 (ATerm u_17, ATerm t)
                {
                  ATerm v_17 = NULL;
                  t = not_null(u_17);
                  if(((v_17 != NULL) && (v_17 != t)))
                    _fail(t);
                  else
                    v_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_l_5, not_null(r_17));
                  t = table_get_0_0(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm q_5 = ATgetFirst((ATermList) t);
                      if(match_cons(q_5, sym_Defined_2))
                        {
                          ATerm s_5 = ATgetArgument(q_5, 0);
                          if(((t_17 != NULL) && (t_17 != ATgetArgument(q_5, 1))))
                            _fail(ATgetArgument(q_5, 1));
                          else
                            t_17 = ATgetArgument(q_5, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm r_5 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = not_null(v_17);
                  return(t);
                }
                ATerm w_17 = NULL;
                if(((w_17 != NULL) && (w_17 != t)))
                  _fail(t);
                else
                  w_17 = t;
                t = f_18(not_null(w_17), t);
                ;
                LocalPopChoice(p_5);
              }
            else
              {
                t = o_5;
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_17), (ATerm) ATinsert(CheckATermList(not_null(s_17)), term_t_5));
              }
          }
          return(t);
        }
        ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
        if(((x_17 != NULL) && (x_17 != t)))
          _fail(t);
        else
          x_17 = t;
        if(match_cons(t, sym__2))
          {
            if(((y_17 != NULL) && (y_17 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              y_17 = ATgetArgument(t, 0);
            if(((z_17 != NULL) && (z_17 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              z_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(z_17);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_18 = ATgetFirst((ATermList) t);
            d_18 = (ATerm) ATgetNext((ATermList) t);
            t = not_null(a_18);
            if(match_cons(t, sym_Defined_2))
              {
                b_18 = ATgetArgument(t, 0);
                c_18 = ATgetArgument(t, 1);
                t = not_null(y_17);
                if(match_cons(t, sym_Scopes_0))
                  {
                    ATerm u_5 = t;
                    int v_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = not_null(x_17);
                        ;
                        LocalPopChoice(v_5);
                      }
                    else
                      {
                        t = u_5;
                        t = e_18(not_null(y_17), not_null(c_18), not_null(d_18), not_null(x_17), t);
                      }
                  }
                else
                  {
                    t = e_18(not_null(y_17), not_null(c_18), not_null(d_18), not_null(x_17), t);
                  }
              }
            else
              {
                t = not_null(y_17);
                if(!(match_cons(t, sym_Scopes_0)))
                  _fail(t);
                t = not_null(x_17);
              }
          }
        else
          {
            t = not_null(y_17);
            if(!(match_cons(t, sym_Scopes_0)))
              _fail(t);
            t = not_null(x_17);
          }
        return(t);
      }
      t = try_1_0(e_1, t);
      return(t);
    }
    t = map_1_0(d_1, t);
    t = restore_MarkVar_0_0(t);
  }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,l_18 = NULL,m_18 = NULL,p_18 = NULL;
  t = Let_2_0(_id, _id, t);
  if(((g_18 != NULL) && (g_18 != t)))
    _fail(t);
  else
    g_18 = t;
  if(((h_18 != NULL) && (h_18 != t)))
    _fail(t);
  else
    h_18 = t;
  t = save_MarkVar_0_0(t);
  if(((i_18 != NULL) && (i_18 != t)))
    _fail(t);
  else
    i_18 = t;
  t = not_null(h_18);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm h_1 (ATerm t)
      {
        ATerm j_18 = NULL;
        t = mark_buv_0_0(t);
        if(((j_18 != NULL) && (j_18 != t)))
          _fail(t);
        else
          j_18 = t;
        t = not_null(i_18);
        t = isect_MarkVar_0_0(t);
        t = not_null(j_18);
        return(t);
      }
      t = map_1_0(h_1, t);
      return(t);
    }
    ATerm g_1 (ATerm t)
    {
      ATerm k_18 = NULL;
      t = mark_buv_0_0(t);
      if(((k_18 != NULL) && (k_18 != t)))
        _fail(t);
      else
        k_18 = t;
      t = not_null(i_18);
      t = isect_MarkVar_0_0(t);
      t = not_null(k_18);
      return(t);
    }
    t = Let_2_0(f_1, g_1, t);
    t = not_null(g_18);
    if(((l_18 != NULL) && (l_18 != t)))
      _fail(t);
    else
      l_18 = t;
    t = save_MarkVar_0_0(t);
    if(((m_18 != NULL) && (m_18 != t)))
      _fail(t);
    else
      m_18 = t;
    t = not_null(l_18);
    {
      ATerm i_1 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          ATerm n_18 = NULL;
          if(((n_18 != NULL) && (n_18 != t)))
            _fail(t);
          else
            n_18 = t;
          t = not_null(m_18);
          t = restore_MarkVar_0_0(t);
          t = not_null(n_18);
          t = mark_buv_0_0(t);
          return(t);
        }
        t = map_1_0(k_1, t);
        return(t);
      }
      ATerm j_1 (ATerm t)
      {
        ATerm o_18 = NULL;
        if(((o_18 != NULL) && (o_18 != t)))
          _fail(t);
        else
          o_18 = t;
        t = not_null(m_18);
        t = restore_MarkVar_0_0(t);
        t = not_null(o_18);
        t = mark_buv_0_0(t);
        return(t);
      }
      t = Let_2_0(i_1, j_1, t);
      if(((p_18 != NULL) && (p_18 != t)))
        _fail(t);
      else
        p_18 = t;
      t = save_MarkVar_0_0(t);
      t = not_null(p_18);
    }
  }
  return(t);
}
ATerm assert_1_0 (ATerm f_76 (ATerm), ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_18 != NULL) && (q_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_18 = ATgetArgument(t, 0);
      if(((r_18 != NULL) && (r_18 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((s_18 != NULL) && (s_18 != t)))
    _fail(t);
  else
    s_18 = t;
  t = f_76(t);
  if(((t_18 != NULL) && (t_18 != t)))
    _fail(t);
  else
    t_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(t_18), not_null(q_18), not_null(r_18));
  t = table_push_0_0(t);
  {
    ATerm w_5 = t;
    int x_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_18), term_y_5);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(x_5);
      }
    else
      {
        t = w_5;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((u_18 != NULL) && (u_18 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          u_18 = ATgetFirst((ATermList) t);
        if(((v_18 != NULL) && (v_18 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          v_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(t_18), term_y_5, (ATerm) ATinsert(CheckATermList(not_null(v_18)), (ATerm) ATinsert(CheckATermList(not_null(u_18)), not_null(q_18))));
    t = table_put_0_0(t);
    t = not_null(s_18);
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm w_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_5 = ATgetFirst((ATermList) t);
      if(((w_18 != NULL) && (w_18 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        w_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(w_18);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_18 != NULL) && (x_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_18 = ATgetArgument(t, 0);
      if(((y_18 != NULL) && (y_18 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((z_18 != NULL) && (z_18 != t)))
    _fail(t);
  else
    z_18 = t;
  if(((a_19 != NULL) && (a_19 != t)))
    _fail(t);
  else
    a_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_18), not_null(y_18));
  {
    ATerm a_6 = t;
    int b_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        t = Tl_0_0(t);
        ;
        LocalPopChoice(b_6);
      }
    else
      {
        t = a_6;
        t = (ATerm) ATempty;
      }
    if(((b_19 != NULL) && (b_19 != t)))
      _fail(t);
    else
      b_19 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(x_18), not_null(y_18), not_null(b_19));
    t = table_put_0_0(t);
    t = not_null(z_18);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  if(((c_19 != NULL) && (c_19 != t)))
    _fail(t);
  else
    c_19 = t;
  t = c_76(t);
  if(((d_19 != NULL) && (d_19 != t)))
    _fail(t);
  else
    d_19 = t;
  {
    ATerm c_6 = t;
    int d_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_19), term_y_5);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(d_6);
      }
    else
      {
        t = c_6;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_19 != NULL) && (f_19 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_19 = ATgetFirst((ATermList) t);
        if(((e_19 != NULL) && (e_19 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          e_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(d_19), term_y_5, not_null(e_19));
    t = table_put_0_0(t);
    t = not_null(f_19);
    {
      ATerm l_1 (ATerm t)
      {
        ATerm g_19 = NULL;
        if(((g_19 != NULL) && (g_19 != t)))
          _fail(t);
        else
          g_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_19), not_null(g_19));
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(l_1, t);
      t = not_null(c_19);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm t)
{
  ATerm e_6 = t;
  int f_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_88(t);
      t = x_88(t);
      ;
      LocalPopChoice(f_6);
    }
  else
    {
      t = e_6;
      t = x_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_76 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  if(((h_19 != NULL) && (h_19 != t)))
    _fail(t);
  else
    h_19 = t;
  t = b_76(t);
  if(((i_19 != NULL) && (i_19 != t)))
    _fail(t);
  else
    i_19 = t;
  if(((j_19 != NULL) && (j_19 != t)))
    _fail(t);
  else
    j_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), term_y_5);
  {
    ATerm g_6 = t;
    int h_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(h_6);
      }
    else
      {
        t = g_6;
        t = (ATerm) ATempty;
      }
    if(((k_19 != NULL) && (k_19 != t)))
      _fail(t);
    else
      k_19 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(i_19), term_y_5, (ATerm) ATinsert(CheckATermList(not_null(k_19)), (ATerm) ATempty));
    t = table_put_0_0(t);
    t = not_null(h_19);
  }
  return(t);
}
ATerm scope_2_0 (ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm t)
{
  t = begin_scope_1_0(d_76, t);
  {
    ATerm m_1 (ATerm t)
    {
      t = end_scope_1_0(d_76, t);
      return(t);
    }
    t = restore_always_2_0(e_76, m_1, t);
  }
  return(t);
}
ATerm Scope_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  if(((q_19 != NULL) && (q_19 != t)))
    _fail(t);
  else
    q_19 = t;
  if(match_cons(t, sym_Scope_2))
    {
      if(((m_19 != NULL) && (m_19 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_19 = ATgetArgument(t, 0);
      if(((n_19 != NULL) && (n_19 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_19 != NULL) && (r_19 != t)))
    _fail(t);
  else
    r_19 = t;
  t = SSLgetAnnotations(not_null(q_19));
  if(((l_19 != NULL) && (l_19 != t)))
    _fail(t);
  else
    l_19 = t;
  t = not_null(m_19);
  t = s_67(t);
  if(((o_19 != NULL) && (o_19 != t)))
    _fail(t);
  else
    o_19 = t;
  t = not_null(n_19);
  t = t_67(t);
  if(((p_19 != NULL) && (p_19 != t)))
    _fail(t);
  else
    p_19 = t;
  if(((t_19 != NULL) && (t_19 != t)))
    _fail(t);
  else
    t_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(o_19), not_null(p_19)), not_null(l_19));
  if(((s_19 != NULL) && (s_19 != t)))
    _fail(t);
  else
    s_19 = t;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      if(((u_19 != NULL) && (u_19 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_19 = ATgetArgument(t, 0);
      {
        ATerm i_6 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  if(((v_19 != NULL) && (v_19 != t)))
    _fail(t);
  else
    v_19 = t;
  t = term_j_6;
  if(((w_19 != NULL) && (w_19 != t)))
    _fail(t);
  else
    w_19 = t;
  t = not_null(v_19);
  {
    ATerm n_1 (ATerm t)
    {
      ATerm o_1 (ATerm t)
      {
        t = term_l_5;
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        ATerm x_19 = NULL;
        if(((x_19 != NULL) && (x_19 != t)))
          _fail(t);
        else
          x_19 = t;
        t = not_null(u_19);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm y_19 = NULL,z_19 = NULL;
            if(((y_19 != NULL) && (y_19 != t)))
              _fail(t);
            else
              y_19 = t;
            if(((z_19 != NULL) && (z_19 != t)))
              _fail(t);
            else
              z_19 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_19)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_6, not_null(w_19)));
            {
              ATerm r_1 (ATerm t)
              {
                t = term_l_5;
                return(t);
              }
              t = assert_1_0(r_1, t);
              t = not_null(z_19);
            }
            return(t);
          }
          t = map_1_0(q_1, t);
          t = not_null(x_19);
          t = mark_buv_0_0(t);
        }
        return(t);
      }
      t = scope_2_0(o_1, p_1, t);
      return(t);
    }
    t = Scope_2_0(_id, n_1, t);
  }
  return(t);
}
ATerm Build_1_0 (ATerm q_67 (ATerm), ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
  if(((d_20 != NULL) && (d_20 != t)))
    _fail(t);
  else
    d_20 = t;
  if(match_cons(t, sym_Build_1))
    {
      if(((b_20 != NULL) && (b_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((e_20 != NULL) && (e_20 != t)))
    _fail(t);
  else
    e_20 = t;
  t = SSLgetAnnotations(not_null(d_20));
  if(((a_20 != NULL) && (a_20 != t)))
    _fail(t);
  else
    a_20 = t;
  t = not_null(b_20);
  t = q_67(t);
  if(((c_20 != NULL) && (c_20 != t)))
    _fail(t);
  else
    c_20 = t;
  if(((g_20 != NULL) && (g_20 != t)))
    _fail(t);
  else
    g_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(c_20)), not_null(a_20));
  if(((f_20 != NULL) && (f_20 != t)))
    _fail(t);
  else
    f_20 = t;
  return(t);
}
ATerm mark_build_0_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    t = alltd_1_0(MarkVar_0_0, t);
    return(t);
  }
  t = Build_1_0(s_1, t);
  return(t);
}
ATerm table_replace_0_0 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((h_20 != NULL) && (h_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_20 = ATgetArgument(t, 0);
      if(((i_20 != NULL) && (i_20 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_20 = ATgetArgument(t, 1);
      if(((j_20 != NULL) && (j_20 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        j_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((k_20 != NULL) && (k_20 != t)))
    _fail(t);
  else
    k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_20), not_null(i_20));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_6 = ATgetFirst((ATermList) t);
      if(((l_20 != NULL) && (l_20 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        l_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, not_null(h_20), not_null(i_20), (ATerm) ATinsert(CheckATermList(not_null(l_20)), not_null(j_20)));
  t = table_put_0_0(t);
  t = not_null(k_20);
  return(t);
}
ATerm override_key_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_20 != NULL) && (m_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_20 = ATgetArgument(t, 0);
      if(((n_20 != NULL) && (n_20 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((o_20 != NULL) && (o_20 != t)))
    _fail(t);
  else
    o_20 = t;
  t = g_76(t);
  if(((p_20 != NULL) && (p_20 != t)))
    _fail(t);
  else
    p_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(p_20), not_null(m_20), not_null(n_20));
  t = table_replace_0_0(t);
  t = not_null(o_20);
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm q_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((q_20 != NULL) && (q_20 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        q_20 = ATgetFirst((ATermList) t);
      {
        ATerm m_6 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(q_20);
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_20 != NULL) && (r_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_20 = ATgetArgument(t, 0);
      if(((s_20 != NULL) && (s_20 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = table_get_0_0(t);
  t = Hd_0_0(t);
  return(t);
}
ATerm rewrite_1_0 (ATerm h_76 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  if(((t_20 != NULL) && (t_20 != t)))
    _fail(t);
  else
    t_20 = t;
  if(((u_20 != NULL) && (u_20 != t)))
    _fail(t);
  else
    u_20 = t;
  t = term_n_6;
  t = h_76(t);
  if(((v_20 != NULL) && (v_20 != t)))
    _fail(t);
  else
    v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_20), not_null(t_20));
  t = table_lookup_0_0(t);
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm m_22 (ATerm a_21, ATerm b_21, ATerm t)
  {
    ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
    t = not_null(b_21);
    if(((c_21 != NULL) && (c_21 != t)))
      _fail(t);
    else
      c_21 = t;
    t = not_null(a_21);
    if(((d_21 != NULL) && (d_21 != t)))
      _fail(t);
    else
      d_21 = t;
    t = not_null(b_21);
    if(((e_21 != NULL) && (e_21 != t)))
      _fail(t);
    else
      e_21 = t;
    t = not_null(c_21);
    {
      ATerm t_1 (ATerm t)
      {
        t = term_l_5;
        return(t);
      }
      t = rewrite_1_0(t_1, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm o_6 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) o_6) != ATmakeSymbol("h_0", 0, ATtrue)))
            _fail(t);
          if(((f_21 != NULL) && (f_21 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(e_21);
      if(((g_21 != NULL) && (g_21 != t)))
        _fail(t);
      else
        g_21 = t;
      if(((h_21 != NULL) && (h_21 != t)))
        _fail(t);
      else
        h_21 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_21));
      if(((i_21 != NULL) && (i_21 != t)))
        _fail(t);
      else
        i_21 = t;
      t = not_null(h_21);
      if(((j_21 != NULL) && (j_21 != t)))
        _fail(t);
      else
        j_21 = t;
      t = (ATerm) ATinsert(ATempty, not_null(f_21));
      if(((k_21 != NULL) && (k_21 != t)))
        _fail(t);
      else
        k_21 = t;
      t = SSLsetAnnotations(not_null(i_21), not_null(k_21));
      if(((l_21 != NULL) && (l_21 != t)))
        _fail(t);
      else
        l_21 = t;
    }
    return(t);
  }
  ATerm n_22 (ATerm m_21, ATerm n_21, ATerm t)
  {
    ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
    t = not_null(n_21);
    if(((o_21 != NULL) && (o_21 != t)))
      _fail(t);
    else
      o_21 = t;
    t = not_null(m_21);
    if(((p_21 != NULL) && (p_21 != t)))
      _fail(t);
    else
      p_21 = t;
    t = not_null(n_21);
    if(((q_21 != NULL) && (q_21 != t)))
      _fail(t);
    else
      q_21 = t;
    t = not_null(o_21);
    {
      ATerm u_1 (ATerm t)
      {
        t = term_l_5;
        return(t);
      }
      t = rewrite_1_0(u_1, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm p_6 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) p_6) != ATmakeSymbol("f_0", 0, ATtrue)))
            _fail(t);
          if(((r_21 != NULL) && (r_21 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            r_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(q_21);
      if(((s_21 != NULL) && (s_21 != t)))
        _fail(t);
      else
        s_21 = t;
      if(((t_21 != NULL) && (t_21 != t)))
        _fail(t);
      else
        t_21 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_21));
      if(((u_21 != NULL) && (u_21 != t)))
        _fail(t);
      else
        u_21 = t;
      t = not_null(t_21);
      if(((v_21 != NULL) && (v_21 != t)))
        _fail(t);
      else
        v_21 = t;
      t = (ATerm) ATinsert(ATempty, not_null(r_21));
      if(((w_21 != NULL) && (w_21 != t)))
        _fail(t);
      else
        w_21 = t;
      t = SSLsetAnnotations(not_null(u_21), not_null(w_21));
      if(((x_21 != NULL) && (x_21 != t)))
        _fail(t);
      else
        x_21 = t;
    }
    return(t);
  }
  ATerm o_22 (ATerm y_21, ATerm z_21, ATerm t)
  {
    ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
    t = not_null(z_21);
    if(((a_22 != NULL) && (a_22 != t)))
      _fail(t);
    else
      a_22 = t;
    t = not_null(y_21);
    if(((b_22 != NULL) && (b_22 != t)))
      _fail(t);
    else
      b_22 = t;
    t = not_null(z_21);
    if(((c_22 != NULL) && (c_22 != t)))
      _fail(t);
    else
      c_22 = t;
    t = not_null(a_22);
    {
      ATerm v_1 (ATerm t)
      {
        t = term_l_5;
        return(t);
      }
      t = rewrite_1_0(v_1, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm q_6 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) q_6) != ATmakeSymbol("b_0", 0, ATtrue)))
            _fail(t);
          if(((d_22 != NULL) && (d_22 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(c_22);
      if(((e_22 != NULL) && (e_22 != t)))
        _fail(t);
      else
        e_22 = t;
      if(((f_22 != NULL) && (f_22 != t)))
        _fail(t);
      else
        f_22 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_22));
      if(((g_22 != NULL) && (g_22 != t)))
        _fail(t);
      else
        g_22 = t;
      t = not_null(f_22);
      if(((h_22 != NULL) && (h_22 != t)))
        _fail(t);
      else
        h_22 = t;
      t = (ATerm) ATinsert(ATempty, not_null(d_22));
      if(((i_22 != NULL) && (i_22 != t)))
        _fail(t);
      else
        i_22 = t;
      t = SSLsetAnnotations(not_null(g_22), not_null(i_22));
      if(((j_22 != NULL) && (j_22 != t)))
        _fail(t);
      else
        j_22 = t;
    }
    return(t);
  }
  ATerm k_22 = NULL,l_22 = NULL;
  if(((k_22 != NULL) && (k_22 != t)))
    _fail(t);
  else
    k_22 = t;
  if(match_cons(t, sym_Var_1))
    {
      if(((l_22 != NULL) && (l_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_6 = t;
    int s_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_22(not_null(l_22), not_null(k_22), t);
        ;
        LocalPopChoice(s_6);
      }
    else
      {
        t = r_6;
        {
          ATerm t_6 = t;
          int u_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_22(not_null(l_22), not_null(k_22), t);
              ;
              LocalPopChoice(u_6);
            }
          else
            {
              t = t_6;
              t = o_22(not_null(l_22), not_null(k_22), t);
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm b_78 (ATerm), ATerm t)
{
  ATerm p_22 (ATerm t)
  {
    ATerm v_6 = t;
    int w_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_78(t);
        ;
        LocalPopChoice(w_6);
      }
    else
      {
        t = v_6;
        t = SRTS_all(p_22, t);
      }
    return(t);
  }
  t = p_22(t);
  return(t);
}
ATerm mark_match_0_0 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,w_22 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      if(((q_22 != NULL) && (q_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((r_22 != NULL) && (r_22 != t)))
    _fail(t);
  else
    r_22 = t;
  t = term_k_5;
  if(((s_22 != NULL) && (s_22 != t)))
    _fail(t);
  else
    s_22 = t;
  t = not_null(q_22);
  {
    ATerm w_1 (ATerm t)
    {
      ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
      t = MarkVar_0_0(t);
      if(((t_22 != NULL) && (t_22 != t)))
        _fail(t);
      else
        t_22 = t;
      if(match_cons(t, sym_Var_1))
        {
          if(((u_22 != NULL) && (u_22 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            u_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      if(((v_22 != NULL) && (v_22 != t)))
        _fail(t);
      else
        v_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_22)), (ATerm) ATmakeAppl(sym_Defined_2, term_x_6, not_null(s_22)));
      {
        ATerm x_1 (ATerm t)
        {
          t = term_l_5;
          return(t);
        }
        t = override_key_1_0(x_1, t);
        t = not_null(t_22);
      }
      return(t);
    }
    t = alltd_1_0(w_1, t);
    if(((w_22 != NULL) && (w_22 != t)))
      _fail(t);
    else
      w_22 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, not_null(w_22));
  }
  return(t);
}
ATerm mark_buv_0_0 (ATerm t)
{
  ATerm y_6 = t;
  int z_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = mark_match_0_0(t);
      ;
      LocalPopChoice(z_6);
    }
  else
    {
      t = y_6;
      {
        ATerm a_7 = t;
        int b_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_build_0_0(t);
            ;
            LocalPopChoice(b_7);
          }
        else
          {
            t = a_7;
            {
              ATerm c_7 = t;
              int d_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_scope_0_0(t);
                  ;
                  LocalPopChoice(d_7);
                }
              else
                {
                  t = c_7;
                  {
                    ATerm e_7 = t;
                    int f_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_let_0_0(t);
                        ;
                        LocalPopChoice(f_7);
                      }
                    else
                      {
                        t = e_7;
                        {
                          ATerm g_7 = t;
                          int h_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = mark_traversal_0_0(t);
                              ;
                              LocalPopChoice(h_7);
                            }
                          else
                            {
                              t = g_7;
                              {
                                ATerm i_7 = t;
                                int j_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_sdef_0_0(t);
                                    ;
                                    LocalPopChoice(j_7);
                                  }
                                else
                                  {
                                    t = i_7;
                                    {
                                      ATerm k_7 = t;
                                      int l_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = mark_call_0_0(t);
                                          ;
                                          LocalPopChoice(l_7);
                                        }
                                      else
                                        {
                                          t = k_7;
                                          {
                                            ATerm m_7 = t;
                                            int n_7 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_prim_0_0(t);
                                                ;
                                                LocalPopChoice(n_7);
                                              }
                                            else
                                              {
                                                t = m_7;
                                                {
                                                  ATerm o_7 = t;
                                                  int p_7 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_rec_0_0(t);
                                                      ;
                                                      LocalPopChoice(p_7);
                                                    }
                                                  else
                                                    {
                                                      t = o_7;
                                                      {
                                                        ATerm q_7 = t;
                                                        int r_7 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = mark_choice_1_0(mark_buv_0_0, t);
                                                            ;
                                                            LocalPopChoice(r_7);
                                                          }
                                                        else
                                                          {
                                                            t = q_7;
                                                            {
                                                              ATerm s_7 = t;
                                                              int t_7 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(t_7);
                                                                }
                                                              else
                                                                {
                                                                  t = s_7;
                                                                  {
                                                                    ATerm u_7 = t;
                                                                    int v_7 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(v_7);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_7;
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
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL;
  if(((a_23 != NULL) && (a_23 != t)))
    _fail(t);
  else
    a_23 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      if(((y_22 != NULL) && (y_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((b_23 != NULL) && (b_23 != t)))
    _fail(t);
  else
    b_23 = t;
  t = SSLgetAnnotations(not_null(a_23));
  if(((x_22 != NULL) && (x_22 != t)))
    _fail(t);
  else
    x_22 = t;
  t = not_null(y_22);
  t = a_63(t);
  if(((z_22 != NULL) && (z_22 != t)))
    _fail(t);
  else
    z_22 = t;
  if(((d_23 != NULL) && (d_23 != t)))
    _fail(t);
  else
    d_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(z_22)), not_null(x_22));
  if(((c_23 != NULL) && (c_23 != t)))
    _fail(t);
  else
    c_23 = t;
  return(t);
}
ATerm Specification_1_0 (ATerm f_63 (ATerm), ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
  if(((h_23 != NULL) && (h_23 != t)))
    _fail(t);
  else
    h_23 = t;
  if(match_cons(t, sym_Specification_1))
    {
      if(((f_23 != NULL) && (f_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((i_23 != NULL) && (i_23 != t)))
    _fail(t);
  else
    i_23 = t;
  t = SSLgetAnnotations(not_null(h_23));
  if(((e_23 != NULL) && (e_23 != t)))
    _fail(t);
  else
    e_23 = t;
  t = not_null(f_23);
  t = f_63(t);
  if(((g_23 != NULL) && (g_23 != t)))
    _fail(t);
  else
    g_23 = t;
  if(((k_23 != NULL) && (k_23 != t)))
    _fail(t);
  else
    k_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(g_23)), not_null(e_23));
  if(((j_23 != NULL) && (j_23 != t)))
    _fail(t);
  else
    j_23 = t;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm z_1 (ATerm t)
    {
      t = term_w_7;
      return(t);
    }
    t = say_1_0(z_1, t);
    return(t);
  }
  t = if_verbose4_1_0(y_1, t);
  {
    ATerm a_2 (ATerm t)
    {
      ATerm b_2 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          ATerm d_2 (ATerm t)
          {
            t = map_1_0(mark_buv_0_0, t);
            return(t);
          }
          t = Strategies_1_0(d_2, t);
          return(t);
        }
        t = Cons_2_0(c_2, Nil_0_0, t);
        return(t);
      }
      t = Cons_2_0(_id, b_2, t);
      return(t);
    }
    t = Specification_1_0(a_2, t);
    {
      ATerm e_2 (ATerm t)
      {
        ATerm f_2 (ATerm t)
        {
          t = term_x_7;
          return(t);
        }
        t = say_1_0(f_2, t);
        return(t);
      }
      t = if_verbose4_1_0(e_2, t);
    }
  }
  return(t);
}
ATerm _2_0 (ATerm n_61 (ATerm), ATerm o_61 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  if(((q_23 != NULL) && (q_23 != t)))
    _fail(t);
  else
    q_23 = t;
  if(match_cons(t, sym__2))
    {
      if(((m_23 != NULL) && (m_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_23 = ATgetArgument(t, 0);
      if(((n_23 != NULL) && (n_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_23 != NULL) && (r_23 != t)))
    _fail(t);
  else
    r_23 = t;
  t = SSLgetAnnotations(not_null(q_23));
  if(((l_23 != NULL) && (l_23 != t)))
    _fail(t);
  else
    l_23 = t;
  t = not_null(m_23);
  t = n_61(t);
  if(((o_23 != NULL) && (o_23 != t)))
    _fail(t);
  else
    o_23 = t;
  t = not_null(n_23);
  t = o_61(t);
  if(((p_23 != NULL) && (p_23 != t)))
    _fail(t);
  else
    p_23 = t;
  if(((t_23 != NULL) && (t_23 != t)))
    _fail(t);
  else
    t_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_23), not_null(p_23)), not_null(l_23));
  if(((s_23 != NULL) && (s_23 != t)))
    _fail(t);
  else
    s_23 = t;
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
  if(((u_23 != NULL) && (u_23 != t)))
    _fail(t);
  else
    u_23 = t;
  if(((v_23 != NULL) && (v_23 != t)))
    _fail(t);
  else
    v_23 = t;
  t = term_n_6;
  t = whoami_0_0(t);
  if(((w_23 != NULL) && (w_23 != t)))
    _fail(t);
  else
    w_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_7), not_null(w_23)), term_y_7));
  t = printnl_0_0(t);
  t = term_a_8;
  t = exit_0_0(t);
  t = not_null(u_23);
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_23 != NULL) && (x_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_23 = ATgetArgument(t, 0);
      if(((y_23 != NULL) && (y_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((z_23 != NULL) && (z_23 != t)))
    _fail(t);
  else
    z_23 = t;
  t = SSL_printnl(not_null(x_23), not_null(y_23));
  t = not_null(z_23);
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm a_24 = NULL;
  if(((a_24 != NULL) && (a_24 != t)))
    _fail(t);
  else
    a_24 = t;
  t = SSL_implode_string(not_null(a_24));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
        ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
        if(((c_24 != NULL) && (c_24 != t)))
          _fail(t);
        else
          c_24 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((d_24 != NULL) && (d_24 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              d_24 = ATgetFirst((ATermList) t);
            if(((e_24 != NULL) && (e_24 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              e_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(d_24);
        if(((f_24 != NULL) && (f_24 != t)))
          _fail(t);
        else
          f_24 = t;
        t = not_null(e_24);
        if(((g_24 != NULL) && (g_24 != t)))
          _fail(t);
        else
          g_24 = t;
        t = not_null(f_24);
        {
          ATerm g_2 (ATerm t)
          {
            t = not_null(g_24);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(g_2, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  if(((i_24 != NULL) && (i_24 != t)))
    _fail(t);
  else
    i_24 = t;
  if(((j_24 != NULL) && (j_24 != t)))
    _fail(t);
  else
    j_24 = t;
  t = not_null(i_24);
  if(((k_24 != NULL) && (k_24 != t)))
    _fail(t);
  else
    k_24 = t;
  t = SSL_explode_term(not_null(k_24));
  if(match_cons(t, sym__2))
    {
      ATerm d_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((l_24 != NULL) && (l_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_24);
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm q_80 (ATerm), ATerm t)
{
  ATerm m_24 (ATerm t)
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, m_24, t);
        ;
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        t = Nil_0_0(t);
        t = q_80(t);
      }
    return(t);
  }
  t = m_24(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_24 != NULL) && (o_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_24 = ATgetArgument(t, 0);
      if(((n_24 != NULL) && (n_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(o_24);
  {
    ATerm h_2 (ATerm t)
    {
      t = not_null(n_24);
      return(t);
    }
    t = at_end_1_0(h_2, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm p_24 = NULL;
  if(((p_24 != NULL) && (p_24 != t)))
    _fail(t);
  else
    p_24 = t;
  t = SSL_explode_string(not_null(p_24));
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
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      {
        ATerm k_8 = t;
        int l_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_2 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(i_2, t);
            ;
            LocalPopChoice(l_8);
          }
        else
          {
            t = k_8;
            {
              ATerm f_25 (ATerm s_24, ATerm t_24, ATerm t)
              {
                ATerm u_24 = NULL;
                t = not_null(s_24);
                if(((u_24 != NULL) && (u_24 != t)))
                  _fail(t);
                else
                  u_24 = t;
                {
                  ATerm m_8 = t;
                  int n_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(n_8);
                    }
                  else
                    {
                      t = m_8;
                      {
                        ATerm j_2 (ATerm t)
                        {
                          t = term_o_8;
                          return(t);
                        }
                        t = debug_1_0(j_2, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
              if(((v_24 != NULL) && (v_24 != t)))
                _fail(t);
              else
                v_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_24 = ATgetArgument(t, 0);
                  {
                    ATerm y_24 = NULL;
                    t = not_null(w_24);
                    if(((y_24 != NULL) && (y_24 != t)))
                      _fail(t);
                    else
                      y_24 = t;
                  }
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_24 = ATgetArgument(t, 0);
                      t = f_25(not_null(w_24), not_null(v_24), t);
                    }
                  else
                    {
                      ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          if(((w_24 != NULL) && (w_24 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            w_24 = ATgetArgument(t, 0);
                          if(((x_24 != NULL) && (x_24 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            x_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = not_null(w_24);
                      if(((z_24 != NULL) && (z_24 != t)))
                        _fail(t);
                      else
                        z_24 = t;
                      t = not_null(x_24);
                      if(((a_25 != NULL) && (a_25 != t)))
                        _fail(t);
                      else
                        a_25 = t;
                      t = not_null(v_24);
                      if(((b_25 != NULL) && (b_25 != t)))
                        _fail(t);
                      else
                        b_25 = t;
                      t = not_null(z_24);
                      t = eval_config_0_0(t);
                      if(((c_25 != NULL) && (c_25 != t)))
                        _fail(t);
                      else
                        c_25 = t;
                      t = not_null(b_25);
                      if(((d_25 != NULL) && (d_25 != t)))
                        _fail(t);
                      else
                        d_25 = t;
                      t = not_null(a_25);
                      t = eval_config_0_0(t);
                      if(((e_25 != NULL) && (e_25 != t)))
                        _fail(t);
                      else
                        e_25 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_25), not_null(e_25));
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
  ATerm g_25 = NULL;
  if(((g_25 != NULL) && (g_25 != t)))
    _fail(t);
  else
    g_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_8, not_null(g_25));
  t = table_get_0_0(t);
  {
    ATerm k_2 (ATerm t)
    {
      ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
      t = eval_config_0_0(t);
      if(((h_25 != NULL) && (h_25 != t)))
        _fail(t);
      else
        h_25 = t;
      if(((i_25 != NULL) && (i_25 != t)))
        _fail(t);
      else
        i_25 = t;
      if(((j_25 != NULL) && (j_25 != t)))
        _fail(t);
      else
        j_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(g_25), not_null(j_25));
      t = table_put_0_0(t);
      t = not_null(h_25);
      return(t);
    }
    t = try_1_0(k_2, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
    if(((k_25 != NULL) && (k_25 != t)))
      _fail(t);
    else
      k_25 = t;
    if(((l_25 != NULL) && (l_25 != t)))
      _fail(t);
    else
      l_25 = t;
    t = term_b_5;
    t = get_config_0_0(t);
    if(((m_25 != NULL) && (m_25 != t)))
      _fail(t);
    else
      m_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_25), term_q_8);
    t = geq_0_0(t);
    t = not_null(k_25);
    t = k_104(t);
    return(t);
  }
  t = try_1_0(l_2, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_25 != NULL) && (n_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_25 = ATgetArgument(t, 0);
      {
        ATerm r_8 = ATgetArgument(t, 1);
        if(match_cons(r_8, sym_Stream_1))
          {
            if(((o_25 != NULL) && (o_25 != ATgetArgument(r_8, 0))))
              _fail(ATgetArgument(r_8, 0));
            else
              o_25 = ATgetArgument(r_8, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputc(not_null(n_25), not_null(o_25));
  if(((p_25 != NULL) && (p_25 != t)))
    _fail(t);
  else
    p_25 = t;
  if(((q_25 != NULL) && (q_25 != t)))
    _fail(t);
  else
    q_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_25));
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_8 = ATgetArgument(t, 0);
      if(match_cons(s_8, sym_Stream_1))
        {
          if(((r_25 != NULL) && (r_25 != ATgetArgument(s_8, 0))))
            _fail(ATgetArgument(s_8, 0));
          else
            r_25 = ATgetArgument(s_8, 0);
        }
      else
        _fail(t);
      if(((s_25 != NULL) && (s_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(r_25), not_null(s_25));
  if(((t_25 != NULL) && (t_25 != t)))
    _fail(t);
  else
    t_25 = t;
  if(((u_25 != NULL) && (u_25 != t)))
    _fail(t);
  else
    u_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_25));
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm v_25 = NULL,w_25 = NULL;
    t = write_in_text_to_stream_0_0(t);
    if(((v_25 != NULL) && (v_25 != t)))
      _fail(t);
    else
      v_25 = t;
    if(((w_25 != NULL) && (w_25 != t)))
      _fail(t);
    else
      w_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_8, not_null(w_25));
    t = fputc_0_0(t);
    return(t);
  }
  t = WriteToFile_1_0(m_2, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_8 = ATgetArgument(t, 0);
      if(match_cons(u_8, sym_Stream_1))
        {
          if(((x_25 != NULL) && (x_25 != ATgetArgument(u_8, 0))))
            _fail(ATgetArgument(u_8, 0));
          else
            x_25 = ATgetArgument(u_8, 0);
        }
      else
        _fail(t);
      if(((y_25 != NULL) && (y_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(x_25), not_null(y_25));
  if(((z_25 != NULL) && (z_25 != t)))
    _fail(t);
  else
    z_25 = t;
  if(((a_26 != NULL) && (a_26 != t)))
    _fail(t);
  else
    a_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_26));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm b_96 (ATerm), ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_26 != NULL) && (b_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_26 = ATgetArgument(t, 0);
      if(((c_26 != NULL) && (c_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(b_26);
  if(((d_26 != NULL) && (d_26 != t)))
    _fail(t);
  else
    d_26 = t;
  if(((e_26 != NULL) && (e_26 != t)))
    _fail(t);
  else
    e_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_26), term_v_8);
  t = open_stream_0_0(t);
  if(((f_26 != NULL) && (f_26 != t)))
    _fail(t);
  else
    f_26 = t;
  if(((g_26 != NULL) && (g_26 != t)))
    _fail(t);
  else
    g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(g_26), not_null(c_26));
  t = b_96(t);
  t = fclose_0_0(t);
  t = not_null(c_26);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL;
  if(((h_26 != NULL) && (h_26 != t)))
    _fail(t);
  else
    h_26 = t;
  {
    ATerm n_2 (ATerm t)
    {
      ATerm w_8 = t;
      int x_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((i_26 != NULL) && (i_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(o_2, t);
          ;
          LocalPopChoice(x_8);
        }
      else
        {
          t = w_8;
          t = term_y_8;
          if(((i_26 != NULL) && (i_26 != t)))
            _fail(t);
          else
            i_26 = t;
        }
      return(t);
    }
    t = _2_0(n_2, _id, t);
    t = not_null(h_26);
    {
      ATerm p_2 (ATerm t)
      {
        ATerm q_2 (ATerm t)
        {
          t = not_null(i_26);
          return(t);
        }
        t = split_2_0(q_2, _id, t);
        return(t);
      }
      t = _2_0(_id, p_2, t);
      {
        ATerm z_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              ATerm s_2 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(s_2, t);
              return(t);
            }
            t = _2_0(r_2, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(a_9);
          }
        else
          {
            t = z_8;
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
ATerm apply_strategy_1_0 (ATerm n_97 (ATerm), ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,s_28 = NULL;
  if(((i_28 != NULL) && (i_28 != t)))
    _fail(t);
  else
    i_28 = t;
  t = dtime_0_0(t);
  t = not_null(i_28);
  t = n_97(t);
  if(((j_28 != NULL) && (j_28 != t)))
    _fail(t);
  else
    j_28 = t;
  t = dtime_0_0(t);
  if(((k_28 != NULL) && (k_28 != t)))
    _fail(t);
  else
    k_28 = t;
  t = not_null(j_28);
  if(match_cons(t, sym__2))
    {
      if(((l_28 != NULL) && (l_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_28 = ATgetArgument(t, 0);
      if(((s_28 != NULL) && (s_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_28)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_28))), not_null(s_28));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_29 (ATerm w_28, ATerm x_28, ATerm t)
  {
    ATerm y_28 = NULL;
    t = not_null(w_28);
    if(((y_28 != NULL) && (y_28 != t)))
      _fail(t);
    else
      y_28 = t;
    t = SSL_fclose(not_null(y_28));
    return(t);
  }
  ATerm m_29 (ATerm a_29, ATerm t)
  {
    ATerm i_29 = NULL;
    t = not_null(a_29);
    if(((i_29 != NULL) && (i_29 != t)))
      _fail(t);
    else
      i_29 = t;
    t = SSL_fclose(not_null(i_29));
    return(t);
  }
  ATerm j_29 = NULL,k_29 = NULL;
  if(((k_29 != NULL) && (k_29 != t)))
    _fail(t);
  else
    k_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_29 = ATgetArgument(t, 0);
      {
        ATerm b_9 = t;
        int c_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_29(not_null(j_29), not_null(k_29), t);
            ;
            LocalPopChoice(c_9);
          }
        else
          {
            t = b_9;
            t = m_29(not_null(k_29), t);
          }
      }
    }
  else
    {
      t = m_29(not_null(k_29), t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm u_29 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((u_29 != NULL) && (u_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(u_29));
  return(t);
}
ATerm debug_1_0 (ATerm n_95 (ATerm), ATerm t)
{
  ATerm v_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL;
  if(((v_29 != NULL) && (v_29 != t)))
    _fail(t);
  else
    v_29 = t;
  if(((x_29 != NULL) && (x_29 != t)))
    _fail(t);
  else
    x_29 = t;
  t = n_95(t);
  if(((y_29 != NULL) && (y_29 != t)))
    _fail(t);
  else
    y_29 = t;
  t = not_null(x_29);
  if(((z_29 != NULL) && (z_29 != t)))
    _fail(t);
  else
    z_29 = t;
  if(((a_30 != NULL) && (a_30 != t)))
    _fail(t);
  else
    a_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_30)), not_null(y_29)));
  t = printnl_0_0(t);
  t = not_null(v_29);
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_30 != NULL) && (b_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_30 = ATgetArgument(t, 0);
      if(((c_30 != NULL) && (c_30 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(b_30), not_null(c_30));
  if(((d_30 != NULL) && (d_30 != t)))
    _fail(t);
  else
    d_30 = t;
  if(((e_30 != NULL) && (e_30 != t)))
    _fail(t);
  else
    e_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_30));
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm f_30 = NULL;
  if(((f_30 != NULL) && (f_30 != t)))
    _fail(t);
  else
    f_30 = t;
  t = SSL_is_string(not_null(f_30));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL;
  t = SSL_stdin_stream();
  if(((g_30 != NULL) && (g_30 != t)))
    _fail(t);
  else
    g_30 = t;
  if(((h_30 != NULL) && (h_30 != t)))
    _fail(t);
  else
    h_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_30));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  t = SSL_stdout_stream();
  if(((i_30 != NULL) && (i_30 != t)))
    _fail(t);
  else
    i_30 = t;
  if(((j_30 != NULL) && (j_30 != t)))
    _fail(t);
  else
    j_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_30));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL;
  t = SSL_stderr_stream();
  if(((k_30 != NULL) && (k_30 != t)))
    _fail(t);
  else
    k_30 = t;
  if(((l_30 != NULL) && (l_30 != t)))
    _fail(t);
  else
    l_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_30));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm p_30 = NULL;
  if(((p_30 != NULL) && (p_30 != t)))
    _fail(t);
  else
    p_30 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(p_30);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(p_30);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(p_30);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
  if(((q_30 != NULL) && (q_30 != t)))
    _fail(t);
  else
    q_30 = t;
  if(((r_30 != NULL) && (r_30 != t)))
    _fail(t);
  else
    r_30 = t;
  t = not_null(q_30);
  if(((s_30 != NULL) && (s_30 != t)))
    _fail(t);
  else
    s_30 = t;
  t = SSL_explode_term(not_null(s_30));
  if(match_cons(t, sym__2))
    {
      ATerm d_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_9 = ATgetArgument(t, 1);
        if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
          {
            if(((u_30 != NULL) && (u_30 != ATgetFirst((ATermList) e_9))))
              _fail(ATgetFirst((ATermList) e_9));
            else
              u_30 = ATgetFirst((ATermList) e_9);
            if(((t_30 != NULL) && (t_30 != (ATerm) ATgetNext((ATermList) e_9))))
              _fail((ATerm) ATgetNext((ATermList) e_9));
            else
              t_30 = (ATerm) ATgetNext((ATermList) e_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(u_30);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_9 = ATgetArgument(t, 0);
      ATerm g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        {
          ATerm j_9 = t;
          int k_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_2 (ATerm t)
              {
                ATerm v_30 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    if(((v_30 != NULL) && (v_30 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      v_30 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = not_null(v_30);
                return(t);
              }
              t = _2_0(t_2, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(k_9);
            }
          else
            {
              t = j_9;
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
  ATerm z_30 = NULL,a_31 = NULL;
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
      if(((w_30 != NULL) && (w_30 != t)))
        _fail(t);
      else
        w_30 = t;
      if(((x_30 != NULL) && (x_30 != t)))
        _fail(t);
      else
        x_30 = t;
      t = not_null(w_30);
      if(((y_30 != NULL) && (y_30 != t)))
        _fail(t);
      else
        y_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_30), term_n_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      {
        ATerm u_2 (ATerm t)
        {
          t = term_o_9;
          return(t);
        }
        t = debug_1_0(u_2, t);
        _fail(t);
      }
    }
  if(((z_30 != NULL) && (z_30 != t)))
    _fail(t);
  else
    z_30 = t;
  t = read_from_stream_0_0(t);
  if(((a_31 != NULL) && (a_31 != t)))
    _fail(t);
  else
    a_31 = t;
  t = not_null(z_30);
  t = fclose_0_0(t);
  t = not_null(a_31);
  return(t);
}
ATerm split_2_0 (ATerm b_79 (ATerm), ATerm c_79 (ATerm), ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
  if(((b_31 != NULL) && (b_31 != t)))
    _fail(t);
  else
    b_31 = t;
  t = b_79(t);
  if(((c_31 != NULL) && (c_31 != t)))
    _fail(t);
  else
    c_31 = t;
  t = not_null(b_31);
  if(((d_31 != NULL) && (d_31 != t)))
    _fail(t);
  else
    d_31 = t;
  t = c_79(t);
  if(((e_31 != NULL) && (e_31 != t)))
    _fail(t);
  else
    e_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_31), not_null(e_31));
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL;
  if(((f_31 != NULL) && (f_31 != t)))
    _fail(t);
  else
    f_31 = t;
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_2 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((g_31 != NULL) && (g_31 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(v_2, t);
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        t = term_r_9;
        if(((g_31 != NULL) && (g_31 != t)))
          _fail(t);
        else
          g_31 = t;
      }
    t = not_null(f_31);
    {
      ATerm w_2 (ATerm t)
      {
        t = not_null(g_31);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, w_2, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm n_31 = NULL;
    if(((n_31 != NULL) && (n_31 != t)))
      _fail(t);
    else
      n_31 = t;
    if(match_string(t, "-k"))
      {
        t = not_null(n_31);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = not_null(n_31);
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
    if(((o_31 != NULL) && (o_31 != t)))
      _fail(t);
    else
      o_31 = t;
    if(((p_31 != NULL) && (p_31 != t)))
      _fail(t);
    else
      p_31 = t;
    t = string_to_int_0_0(t);
    if(((q_31 != NULL) && (q_31 != t)))
      _fail(t);
    else
      q_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(q_31));
    t = set_config_0_0(t);
    t = not_null(o_31);
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_t_9;
    return(t);
  }
  t = ArgOption_3_0(x_2, y_2, z_2, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm r_31 = NULL;
  if(((r_31 != NULL) && (r_31 != t)))
    _fail(t);
  else
    r_31 = t;
  t = SSL_string_to_int(not_null(r_31));
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_3 (ATerm t)
      {
        ATerm t_31 = NULL;
        if(((t_31 != NULL) && (t_31 != t)))
          _fail(t);
        else
          t_31 = t;
        if(match_string(t, "-S"))
          {
            t = not_null(t_31);
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = not_null(t_31);
          }
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        ATerm u_31 = NULL;
        if(((u_31 != NULL) && (u_31 != t)))
          _fail(t);
        else
          u_31 = t;
        t = term_x_9;
        t = set_config_0_0(t);
        t = term_y_9;
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = term_z_9;
        return(t);
      }
      t = Option_3_0(a_3, b_3, c_3, t);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm e_3 (ATerm t)
            {
              ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL;
              if(((v_31 != NULL) && (v_31 != t)))
                _fail(t);
              else
                v_31 = t;
              if(((w_31 != NULL) && (w_31 != t)))
                _fail(t);
              else
                w_31 = t;
              t = string_to_int_0_0(t);
              if(((x_31 != NULL) && (x_31 != t)))
                _fail(t);
              else
                x_31 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_b_5, not_null(x_31));
              t = set_config_0_0(t);
              t = not_null(v_31);
              if(((y_31 != NULL) && (y_31 != t)))
                _fail(t);
              else
                y_31 = t;
              if(((z_31 != NULL) && (z_31 != t)))
                _fail(t);
              else
                z_31 = t;
              t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(z_31));
              return(t);
            }
            ATerm f_3 (ATerm t)
            {
              t = term_c_10;
              return(t);
            }
            t = ArgOption_3_0(d_3, e_3, f_3, t);
            ;
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            {
              ATerm g_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm h_3 (ATerm t)
              {
                ATerm a_32 = NULL;
                if(((a_32 != NULL) && (a_32 != t)))
                  _fail(t);
                else
                  a_32 = t;
                t = term_e_10;
                t = set_config_0_0(t);
                t = term_f_10;
                return(t);
              }
              ATerm i_3 (ATerm t)
              {
                t = term_g_10;
                return(t);
              }
              t = Option_3_0(g_3, h_3, i_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm h_32 = NULL;
    if(((h_32 != NULL) && (h_32 != t)))
      _fail(t);
    else
      h_32 = t;
    if(match_string(t, "-o"))
      {
        t = not_null(h_32);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = not_null(h_32);
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
    if(((i_32 != NULL) && (i_32 != t)))
      _fail(t);
    else
      i_32 = t;
    if(((j_32 != NULL) && (j_32 != t)))
      _fail(t);
    else
      j_32 = t;
    if(((k_32 != NULL) && (k_32 != t)))
      _fail(t);
    else
      k_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_10, not_null(k_32));
    t = set_config_0_0(t);
    t = not_null(i_32);
    if(((l_32 != NULL) && (l_32 != t)))
      _fail(t);
    else
      l_32 = t;
    if(((m_32 != NULL) && (m_32 != t)))
      _fail(t);
    else
      m_32 = t;
    t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_32));
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_k_10;
    return(t);
  }
  t = ArgOption_3_0(j_3, k_3, l_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm m_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm n_3 (ATerm t)
        {
          ATerm n_32 = NULL;
          if(((n_32 != NULL) && (n_32 != t)))
            _fail(t);
          else
            n_32 = t;
          t = term_o_10;
          t = set_config_0_0(t);
          t = term_p_10;
          return(t);
        }
        ATerm o_3 (ATerm t)
        {
          t = term_q_10;
          return(t);
        }
        t = Option_3_0(m_3, n_3, o_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL;
  if(((q_32 != NULL) && (q_32 != t)))
    _fail(t);
  else
    q_32 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(q_32);
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((r_32 != NULL) && (r_32 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            r_32 = ATgetFirst((ATermList) t);
          if(((s_32 != NULL) && (s_32 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(s_32);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((t_32 != NULL) && (t_32 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            t_32 = ATgetFirst((ATermList) t);
          if(((u_32 != NULL) && (u_32 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(r_32);
      if(((v_32 != NULL) && (v_32 != t)))
        _fail(t);
      else
        v_32 = t;
      t = not_null(t_32);
      if(((w_32 != NULL) && (w_32 != t)))
        _fail(t);
      else
        w_32 = t;
      t = not_null(u_32);
      if(((x_32 != NULL) && (x_32 != t)))
        _fail(t);
      else
        x_32 = t;
      t = not_null(q_32);
      if(((y_32 != NULL) && (y_32 != t)))
        _fail(t);
      else
        y_32 = t;
      t = not_null(v_32);
      t = i_0(t);
      t = not_null(y_32);
      if(((z_32 != NULL) && (z_32 != t)))
        _fail(t);
      else
        z_32 = t;
      t = not_null(w_32);
      t = k_0(t);
      if(((a_33 != NULL) && (a_33 != t)))
        _fail(t);
      else
        a_33 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(x_32)), not_null(a_33));
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm c_33 = NULL;
    if(((c_33 != NULL) && (c_33 != t)))
      _fail(t);
    else
      c_33 = t;
    if(match_string(t, "-i"))
      {
        t = not_null(c_33);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = not_null(c_33);
      }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
    if(((d_33 != NULL) && (d_33 != t)))
      _fail(t);
    else
      d_33 = t;
    if(((e_33 != NULL) && (e_33 != t)))
      _fail(t);
    else
      e_33 = t;
    if(((f_33 != NULL) && (f_33 != t)))
      _fail(t);
    else
      f_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_10, not_null(f_33));
    t = set_config_0_0(t);
    t = not_null(d_33);
    if(((g_33 != NULL) && (g_33 != t)))
      _fail(t);
    else
      g_33 = t;
    if(((h_33 != NULL) && (h_33 != t)))
      _fail(t);
    else
      h_33 = t;
    t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_33));
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_s_10;
    return(t);
  }
  t = ArgOption_3_0(p_3, q_3, r_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(u_10);
    }
  else
    {
      t = t_10;
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL;
  t = report_run_time_0_0(t);
  if(((i_33 != NULL) && (i_33 != t)))
    _fail(t);
  else
    i_33 = t;
  t = term_n_6;
  t = whoami_0_0(t);
  if(((j_33 != NULL) && (j_33 != t)))
    _fail(t);
  else
    j_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_5, (ATerm) ATinsert(ATinsert(ATempty, term_x_10), not_null(j_33)));
  t = printnl_0_0(t);
  t = term_a_8;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_10;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm k_33 = NULL;
  if(((k_33 != NULL) && (k_33 != t)))
    _fail(t);
  else
    k_33 = t;
  t = SSL_TicksToSeconds(not_null(k_33));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_33 != NULL) && (l_33 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_33 = ATgetArgument(t, 0);
      if(((m_33 != NULL) && (m_33 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(l_33), not_null(m_33));
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        t = SSL_addr(not_null(l_33), not_null(m_33));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = q_86(t);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      {
        ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL;
        if(((o_33 != NULL) && (o_33 != t)))
          _fail(t);
        else
          o_33 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((p_33 != NULL) && (p_33 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              p_33 = ATgetFirst((ATermList) t);
            if(((q_33 != NULL) && (q_33 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              q_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(p_33);
        if(((r_33 != NULL) && (r_33 != t)))
          _fail(t);
        else
          r_33 = t;
        t = not_null(q_33);
        if(((s_33 != NULL) && (s_33 != t)))
          _fail(t);
        else
          s_33 = t;
        t = not_null(o_33);
        if(((t_33 != NULL) && (t_33 != t)))
          _fail(t);
        else
          t_33 = t;
        t = not_null(s_33);
        t = foldr_2_0(q_86, r_86, t);
        if(((u_33 != NULL) && (u_33 != t)))
          _fail(t);
        else
          u_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_33), not_null(u_33));
        t = r_86(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL;
  if(((v_33 != NULL) && (v_33 != t)))
    _fail(t);
  else
    v_33 = t;
  if(((w_33 != NULL) && (w_33 != t)))
    _fail(t);
  else
    w_33 = t;
  t = not_null(v_33);
  if(((x_33 != NULL) && (x_33 != t)))
    _fail(t);
  else
    x_33 = t;
  t = SSL_explode_term(not_null(x_33));
  if(match_cons(t, sym__2))
    {
      ATerm d_11 = ATgetArgument(t, 0);
      if(((y_33 != NULL) && (y_33 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(y_33);
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
    ATerm s_3 (ATerm t)
    {
      t = term_w_9;
      return(t);
    }
    t = crush_2_0(s_3, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_33 != NULL) && (z_33 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_33 = ATgetArgument(t, 0);
      if(((a_34 != NULL) && (a_34 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((b_34 != NULL) && (b_34 != t)))
    _fail(t);
  else
    b_34 = t;
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(z_33), not_null(a_34));
        ;
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        t = SSL_gtr(not_null(z_33), not_null(a_34));
      }
    t = not_null(b_34);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_34 = NULL;
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
      if(((e_34 != NULL) && (e_34 != t)))
        _fail(t);
      else
        e_34 = t;
      if(match_cons(t, sym__2))
        {
          if(((f_34 != NULL) && (f_34 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            f_34 = ATgetArgument(t, 0);
          if(((g_34 != NULL) && (g_34 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            g_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(f_34);
      if(((d_34 != NULL) && (d_34 != t)))
        _fail(t);
      else
        d_34 = t;
      t = not_null(g_34);
      if(((d_34 != NULL) && (d_34 != t)))
        _fail(t);
      else
        d_34 = t;
      t = not_null(e_34);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_104 (ATerm), ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
    if(((h_34 != NULL) && (h_34 != t)))
      _fail(t);
    else
      h_34 = t;
    if(((i_34 != NULL) && (i_34 != t)))
      _fail(t);
    else
      i_34 = t;
    t = term_b_5;
    t = get_config_0_0(t);
    if(((j_34 != NULL) && (j_34 != t)))
      _fail(t);
    else
      j_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_34), term_a_8);
    t = geq_0_0(t);
    t = not_null(h_34);
    t = j_104(t);
    return(t);
  }
  t = try_1_0(t_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
    if(((k_34 != NULL) && (k_34 != t)))
      _fail(t);
    else
      k_34 = t;
    t = run_time_0_0(t);
    if(((l_34 != NULL) && (l_34 != t)))
      _fail(t);
    else
      l_34 = t;
    t = not_null(k_34);
    if(((m_34 != NULL) && (m_34 != t)))
      _fail(t);
    else
      m_34 = t;
    t = term_n_6;
    t = whoami_0_0(t);
    if(((n_34 != NULL) && (n_34 != t)))
      _fail(t);
    else
      n_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_11), not_null(l_34)), term_i_11), not_null(n_34)));
    t = printnl_0_0(t);
    return(t);
  }
  t = if_verbose1_1_0(u_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_w_9;
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
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
        ATerm v_3 (ATerm t)
        {
          ATerm n_11 = t;
          int o_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(o_11);
            }
          else
            {
              t = n_11;
              {
                ATerm p_11 = t;
                int q_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(q_11);
                  }
                else
                  {
                    t = p_11;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(v_3, t);
      }
    }
  t = l_98(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_34 = NULL;
  if(((o_34 != NULL) && (o_34 != t)))
    _fail(t);
  else
    o_34 = t;
  t = SSL_table_create(not_null(o_34));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL;
  if(((p_34 != NULL) && (p_34 != t)))
    _fail(t);
  else
    p_34 = t;
  if(((q_34 != NULL) && (q_34 != t)))
    _fail(t);
  else
    q_34 = t;
  t = term_r_11;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_11, term_s_11, not_null(p_34));
  t = table_put_0_0(t);
  t = not_null(q_34);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm r_34 = NULL;
  if(((r_34 != NULL) && (r_34 != t)))
    _fail(t);
  else
    r_34 = t;
  t = SSL_table_destroy(not_null(r_34));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm s_34 = NULL;
  if(((s_34 != NULL) && (s_34 != t)))
    _fail(t);
  else
    s_34 = t;
  t = SSL_exit(not_null(s_34));
  return(t);
}
ATerm long_description_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm t_34 (ATerm t)
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        t = Cons_2_0(z_79, t_34, t);
      }
    return(t);
  }
  t = t_34(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  if(((x_34 != NULL) && (x_34 != t)))
    _fail(t);
  else
    x_34 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_34 = ATgetFirst((ATermList) t);
      w_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
        t = not_null(v_34);
        if(((y_34 != NULL) && (y_34 != t)))
          _fail(t);
        else
          y_34 = t;
        t = not_null(w_34);
        if(((z_34 != NULL) && (z_34 != t)))
          _fail(t);
        else
          z_34 = t;
        if(((a_35 != NULL) && (a_35 != t)))
          _fail(t);
        else
          a_35 = t;
        if(((b_35 != NULL) && (b_35 != t)))
          _fail(t);
        else
          b_35 = t;
        t = g_0(t);
        if(((c_35 != NULL) && (c_35 != t)))
          _fail(t);
        else
          c_35 = t;
        t = not_null(b_35);
        if(((d_35 != NULL) && (d_35 != t)))
          _fail(t);
        else
          d_35 = t;
        t = not_null(y_34);
        t = e_0(t);
        if(((e_35 != NULL) && (e_35 != t)))
          _fail(t);
        else
          e_35 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(c_35)), not_null(e_35));
        if(((f_35 != NULL) && (f_35 != t)))
          _fail(t);
        else
          f_35 = t;
        t = not_null(a_35);
        {
          ATerm w_3 (ATerm t)
          {
            t = not_null(f_35);
            return(t);
          }
          t = reverse_acc_2_0(e_0, w_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_6;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, x_3, t);
  return(t);
}
ATerm short_description_1_0 (ATerm n_101 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm o_75 (ATerm), ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL;
  if(((j_35 != NULL) && (j_35 != t)))
    _fail(t);
  else
    j_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((h_35 != NULL) && (h_35 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((k_35 != NULL) && (k_35 != t)))
    _fail(t);
  else
    k_35 = t;
  t = SSLgetAnnotations(not_null(j_35));
  if(((g_35 != NULL) && (g_35 != t)))
    _fail(t);
  else
    g_35 = t;
  t = not_null(h_35);
  t = o_75(t);
  if(((i_35 != NULL) && (i_35 != t)))
    _fail(t);
  else
    i_35 = t;
  if(((m_35 != NULL) && (m_35 != t)))
    _fail(t);
  else
    m_35 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_35)), not_null(g_35));
  if(((l_35 != NULL) && (l_35 != t)))
    _fail(t);
  else
    l_35 = t;
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_35 = NULL;
  ATerm e_16 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_10;
      t = get_config_0_0(t);
      if(((n_35 != NULL) && (n_35 != t)))
        _fail(t);
      else
        n_35 = t;
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = e_16;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm z_3 (ATerm t)
          {
            if(((n_35 != NULL) && (n_35 != t)))
              _fail(t);
            else
              n_35 = t;
            return(t);
          }
          t = Program_1_0(z_3, t);
          return(t);
        }
        t = option_defined_1_0(y_3, t);
      }
    }
  {
    ATerm a_4 (ATerm t)
    {
      ATerm b_4 (ATerm t)
      {
        t = not_null(n_35);
        return(t);
      }
      t = short_description_1_0(b_4, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(a_4, t);
    t = term_f_17;
    t = echo_0_0(t);
    t = term_i_17;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm c_4 (ATerm t)
      {
        ATerm o_35 = NULL,p_35 = NULL;
        if(((o_35 != NULL) && (o_35 != t)))
          _fail(t);
        else
          o_35 = t;
        if(((p_35 != NULL) && (p_35 != t)))
          _fail(t);
        else
          p_35 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_35)), term_j_17);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(c_4, t);
      {
        ATerm d_4 (ATerm t)
        {
          ATerm q_35 = NULL,r_35 = NULL;
          if(((q_35 != NULL) && (q_35 != t)))
            _fail(t);
          else
            q_35 = t;
          {
            ATerm e_4 (ATerm t)
            {
              t = not_null(n_35);
              return(t);
            }
            t = long_description_1_0(e_4, t);
            if(((r_35 != NULL) && (r_35 != t)))
              _fail(t);
            else
              r_35 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(r_35)), term_k_17);
            t = echo_0_0(t);
          }
          return(t);
        }
        t = try_1_0(d_4, t);
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
  ATerm l_17 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(w_20);
    }
  else
    {
      t = l_17;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm p_75 (ATerm), ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL;
  if(((v_35 != NULL) && (v_35 != t)))
    _fail(t);
  else
    v_35 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((t_35 != NULL) && (t_35 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((w_35 != NULL) && (w_35 != t)))
    _fail(t);
  else
    w_35 = t;
  t = SSLgetAnnotations(not_null(v_35));
  if(((s_35 != NULL) && (s_35 != t)))
    _fail(t);
  else
    s_35 = t;
  t = not_null(t_35);
  t = p_75(t);
  if(((u_35 != NULL) && (u_35 != t)))
    _fail(t);
  else
    u_35 = t;
  if(((y_35 != NULL) && (y_35 != t)))
    _fail(t);
  else
    y_35 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_35)), not_null(s_35));
  if(((x_35 != NULL) && (x_35 != t)))
    _fail(t);
  else
    x_35 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm k_80 (ATerm), ATerm t)
{
  ATerm z_35 (ATerm t)
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_80, _id, t);
        ;
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        t = Cons_2_0(_id, z_35, t);
      }
    return(t);
  }
  t = z_35(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  t = fetch_1_0(n_100, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
  if(((b_36 != NULL) && (b_36 != t)))
    _fail(t);
  else
    b_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(b_36);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((c_36 != NULL) && (c_36 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            c_36 = ATgetFirst((ATermList) t);
          if(((d_36 != NULL) && (d_36 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(b_36);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,j_36 = NULL;
  if(((e_36 != NULL) && (e_36 != t)))
    _fail(t);
  else
    e_36 = t;
  if(((f_36 != NULL) && (f_36 != t)))
    _fail(t);
  else
    f_36 = t;
  {
    ATerm z_20 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = z_20;
        {
          ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
          if(((g_36 != NULL) && (g_36 != t)))
            _fail(t);
          else
            g_36 = t;
          if(((h_36 != NULL) && (h_36 != t)))
            _fail(t);
          else
            h_36 = t;
          t = not_null(g_36);
          if(((i_36 != NULL) && (i_36 != t)))
            _fail(t);
          else
            i_36 = t;
          t = (ATerm) ATinsert(ATempty, not_null(i_36));
        }
      }
    if(((j_36 != NULL) && (j_36 != t)))
      _fail(t);
    else
      j_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(j_36));
    t = printnl_0_0(t);
    t = not_null(e_36);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_10;
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
  ATerm h_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = h_24;
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
  ATerm r_24 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_88(t);
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = r_24;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm g_4 (ATerm t)
      {
        t = term_n_26;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        t = term_o_26;
        return(t);
      }
      t = Option_3_0(f_4, g_4, h_4, t);
      ;
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      {
        ATerm i_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm j_4 (ATerm t)
        {
          ATerm k_36 = NULL;
          if(((k_36 != NULL) && (k_36 != t)))
            _fail(t);
          else
            k_36 = t;
          t = term_n_26;
          t = set_config_0_0(t);
          t = term_q_26;
          t = set_config_0_0(t);
          t = term_r_26;
          return(t);
        }
        ATerm k_4 (ATerm t)
        {
          t = term_s_26;
          return(t);
        }
        t = Option_3_0(i_4, j_4, k_4, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_36 != NULL) && (l_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_36 = ATgetArgument(t, 0);
      if(((m_36 != NULL) && (m_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(l_36), not_null(m_36));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((n_36 != NULL) && (n_36 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_36 = ATgetArgument(t, 0);
      if(((o_36 != NULL) && (o_36 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_36 = ATgetArgument(t, 1);
      if(((p_36 != NULL) && (p_36 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        p_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((q_36 != NULL) && (q_36 != t)))
    _fail(t);
  else
    q_36 = t;
  if(((r_36 != NULL) && (r_36 != t)))
    _fail(t);
  else
    r_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_36), not_null(o_36));
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(u_26);
      }
    else
      {
        t = t_26;
        t = (ATerm) ATempty;
      }
    if(((s_36 != NULL) && (s_36 != t)))
      _fail(t);
    else
      s_36 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(n_36), not_null(o_36), (ATerm) ATinsert(CheckATermList(not_null(s_36)), not_null(p_36)));
    t = table_put_0_0(t);
    t = not_null(q_36);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm s_101 (ATerm), ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL;
  if(((t_36 != NULL) && (t_36 != t)))
    _fail(t);
  else
    t_36 = t;
  t = term_n_6;
  t = s_101(t);
  if(((u_36 != NULL) && (u_36 != t)))
    _fail(t);
  else
    u_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_17, term_h_17, not_null(u_36));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
  if(((x_36 != NULL) && (x_36 != t)))
    _fail(t);
  else
    x_36 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(x_36);
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((y_36 != NULL) && (y_36 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            y_36 = ATgetFirst((ATermList) t);
          if(((z_36 != NULL) && (z_36 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(y_36);
      if(((a_37 != NULL) && (a_37 != t)))
        _fail(t);
      else
        a_37 = t;
      t = not_null(z_36);
      if(((b_37 != NULL) && (b_37 != t)))
        _fail(t);
      else
        b_37 = t;
      t = not_null(x_36);
      if(((c_37 != NULL) && (c_37 != t)))
        _fail(t);
      else
        c_37 = t;
      t = not_null(a_37);
      t = a_0(t);
      t = not_null(c_37);
      if(((d_37 != NULL) && (d_37 != t)))
        _fail(t);
      else
        d_37 = t;
      t = term_n_6;
      t = c_0(t);
      if(((e_37 != NULL) && (e_37 != t)))
        _fail(t);
      else
        e_37 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(b_37)), not_null(e_37));
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm g_37 = NULL;
    if(((g_37 != NULL) && (g_37 != t)))
      _fail(t);
    else
      g_37 = t;
    if(match_string(t, "--help"))
      {
        t = not_null(g_37);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(g_37);
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = not_null(g_37);
          }
      }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_v_26;
    t = set_config_0_0(t);
    t = term_w_26;
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    t = term_x_26;
    return(t);
  }
  t = Option_3_0(l_4, m_4, n_4, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((h_37 != NULL) && (h_37 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        h_37 = ATgetFirst((ATermList) t);
      if(((i_37 != NULL) && (i_37 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        i_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(i_37)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_37)));
  return(t);
}
ATerm Cons_2_0 (ATerm w_62 (ATerm), ATerm x_62 (ATerm), ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
  if(((o_37 != NULL) && (o_37 != t)))
    _fail(t);
  else
    o_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((k_37 != NULL) && (k_37 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        k_37 = ATgetFirst((ATermList) t);
      if(((l_37 != NULL) && (l_37 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        l_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((p_37 != NULL) && (p_37 != t)))
    _fail(t);
  else
    p_37 = t;
  t = SSLgetAnnotations(not_null(o_37));
  if(((j_37 != NULL) && (j_37 != t)))
    _fail(t);
  else
    j_37 = t;
  t = not_null(k_37);
  t = w_62(t);
  if(((m_37 != NULL) && (m_37 != t)))
    _fail(t);
  else
    m_37 = t;
  t = not_null(l_37);
  t = x_62(t);
  if(((n_37 != NULL) && (n_37 != t)))
    _fail(t);
  else
    n_37 = t;
  if(((r_37 != NULL) && (r_37 != t)))
    _fail(t);
  else
    r_37 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_37)), not_null(m_37)), not_null(j_37));
  if(((q_37 != NULL) && (q_37 != t)))
    _fail(t);
  else
    q_37 = t;
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
  ATerm s_37 = NULL,t_37 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_37 != NULL) && (s_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_37 = ATgetArgument(t, 0);
      if(((t_37 != NULL) && (t_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_8, not_null(s_37), not_null(t_37));
  t = table_put_0_0(t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_101 (ATerm), ATerm t)
{
  ATerm u_37 = NULL;
  if(((u_37 != NULL) && (u_37 != t)))
    _fail(t);
  else
    u_37 = t;
  {
    ATerm o_4 (ATerm t)
    {
      t = term_y_26;
      t = q_101(t);
      return(t);
    }
    t = try_1_0(o_4, t);
    t = not_null(u_37);
    {
      ATerm p_4 (ATerm t)
      {
        ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL,a_38 = NULL,b_38 = NULL;
        if(((v_37 != NULL) && (v_37 != t)))
          _fail(t);
        else
          v_37 = t;
        if(((w_37 != NULL) && (w_37 != t)))
          _fail(t);
        else
          w_37 = t;
        if(((x_37 != NULL) && (x_37 != t)))
          _fail(t);
        else
          x_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_10, not_null(x_37));
        t = set_config_0_0(t);
        t = not_null(v_37);
        if(((a_38 != NULL) && (a_38 != t)))
          _fail(t);
        else
          a_38 = t;
        if(((b_38 != NULL) && (b_38 != t)))
          _fail(t);
        else
          b_38 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_38));
        return(t);
      }
      ATerm q_4 (ATerm t)
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_27 = t;
            int c_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(c_27);
              }
            else
              {
                t = b_27;
                t = q_101(t);
                t = Cons_2_0(_id, q_4, t);
              }
            ;
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            t = UndefinedOption_0_0(t);
          }
        return(t);
      }
      t = Cons_2_0(p_4, q_4, t);
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
  if(((d_38 != NULL) && (d_38 != t)))
    _fail(t);
  else
    d_38 = t;
  if(match_cons(t, sym__3))
    {
      if(((e_38 != NULL) && (e_38 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_38 = ATgetArgument(t, 0);
      if(((f_38 != NULL) && (f_38 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_38 = ATgetArgument(t, 1);
      if(((g_38 != NULL) && (g_38 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        g_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(e_38), not_null(f_38), not_null(g_38));
  t = not_null(d_38);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_101 (ATerm), ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,o_38 = NULL;
  if(((i_38 != NULL) && (i_38 != t)))
    _fail(t);
  else
    i_38 = t;
  t = term_d_27;
  t = table_put_0_0(t);
  t = not_null(i_38);
  {
    ATerm r_4 (ATerm t)
    {
      ATerm e_27 = t;
      int f_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_101(t);
          ;
          LocalPopChoice(f_27);
        }
      else
        {
          t = e_27;
          {
            ATerm g_27 = t;
            int h_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(h_27);
              }
            else
              {
                t = g_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_4, t);
    {
      ATerm s_4 (ATerm t)
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_38 (ATerm k_38, ATerm t)
            {
              ATerm l_38 = NULL;
              t = not_null(k_38);
              if(((l_38 != NULL) && (l_38 != t)))
                _fail(t);
              else
                l_38 = t;
              t = not_null(k_38);
              {
                ATerm k_27 = t;
                int l_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_11;
                    t = get_config_0_0(t);
                    ;
                    LocalPopChoice(l_27);
                  }
                else
                  {
                    t = k_27;
                    t = option_defined_1_0(Help_0_0, t);
                  }
                t = not_null(l_38);
                t = system_usage_0_0(t);
                t = term_w_9;
                t = exit_0_0(t);
              }
              return(t);
            }
            ATerm m_38 = NULL;
            if(((m_38 != NULL) && (m_38 != t)))
              _fail(t);
            else
              m_38 = t;
            {
              ATerm m_27 = t;
              int n_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_38(not_null(m_38), t);
                  ;
                  LocalPopChoice(n_27);
                }
              else
                {
                  t = m_27;
                  {
                    ATerm n_38 = NULL;
                    t = not_null(m_38);
                    if(((n_38 != NULL) && (n_38 != t)))
                      _fail(t);
                    else
                      n_38 = t;
                    t = term_m_26;
                    t = get_config_0_0(t);
                    t = not_null(n_38);
                    t = system_about_0_0(t);
                    t = term_w_9;
                    t = exit_0_0(t);
                  }
                }
            }
            ;
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            {
              ATerm t_4 (ATerm t)
              {
                ATerm u_4 (ATerm t)
                {
                  if(((j_38 != NULL) && (j_38 != t)))
                    _fail(t);
                  else
                    j_38 = t;
                  return(t);
                }
                t = Undefined_1_0(u_4, t);
                return(t);
              }
              t = option_defined_1_0(t_4, t);
              t = (ATerm) ATmakeAppl(sym__2, term_a_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_38)), term_o_27));
              t = printnl_0_0(t);
              t = system_usage_0_0(t);
              t = term_a_8;
              t = exit_0_0(t);
            }
          }
        return(t);
      }
      t = try_1_0(s_4, t);
      if(((o_38 != NULL) && (o_38 != t)))
        _fail(t);
      else
        o_38 = t;
      t = term_g_17;
      t = table_destroy_0_0(t);
      t = not_null(o_38);
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
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_98, t);
        ;
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        {
          ATerm r_27 = t;
          int s_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_98(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_27);
            }
          else
            {
              t = r_27;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_98(t);
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(c_98, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(v_4, e_98, f_98, w_4, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm y_4 (ATerm t)
    {
      ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
      if(((q_38 != NULL) && (q_38 != t)))
        _fail(t);
      else
        q_38 = t;
      if(((r_38 != NULL) && (r_38 != t)))
        _fail(t);
      else
        r_38 = t;
      t = term_y_10;
      t = get_config_0_0(t);
      if(((s_38 != NULL) && (s_38 != t)))
        _fail(t);
      else
        s_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_5, (ATerm) ATinsert(ATempty, not_null(s_38)));
      t = printnl_0_0(t);
      t = not_null(q_38);
      return(t);
    }
    t = if_verbose2_1_0(y_4, t);
    return(t);
  }
  t = iowrap_4_0(w_97, x_97, y_97, x_4, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm t)
{
  t = iowrap_3_0(u_97, v_97, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm r_97 (ATerm), ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    t = _2_0(_id, r_97, t);
    return(t);
  }
  t = iowrap_2_0(z_4, _fail, t);
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
