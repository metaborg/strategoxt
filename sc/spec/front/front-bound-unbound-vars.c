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
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_LRule_1;
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
Symbol sym_DefaultVarDec_1;
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
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
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
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
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
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_g_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_m_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_d_24;
ATerm term_q_23;
ATerm term_w_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_z_15;
ATerm term_v_15;
ATerm term_z_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_z_12;
void init_constant_terms (void)
{
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Defined_2, term_c_13, term_e_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("mark-sdef failed: ", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Defined_2, term_v_15, term_e_13);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Defined_2, term_u_17, term_v_17);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_q_24, term_r_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_24);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym__2, term_w_24, term_i_24);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_j_25);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym__2, term_v_27, term_i_24);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, term_y_27, term_i_24);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym__2, term_n_26, term_i_24);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_w_22, term_i_24);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm mark_guardedlchoice_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm w_86 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm t_6 (ATerm);
ATerm c_3 (ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm u_6 (ATerm s_32, ATerm);
ATerm CompareEntries_0_0 (ATerm);
ATerm v_6 (ATerm i_31, ATerm j_31, ATerm h_31, ATerm);
ATerm r_3 (ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm w_6 (ATerm t_34, ATerm s_34, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm undefine_unbound_MarkVar_0_0 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm a_7 (ATerm b_34, ATerm c_34, ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm alltd_1_0 (ATerm c_89 (ATerm), ATerm);
ATerm x_6 (ATerm d_34, ATerm e_34, ATerm f_34, ATerm);
ATerm i_4 (ATerm);
ATerm b_7 (ATerm e_32, ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm c_7 (ATerm g_87 (ATerm), ATerm i_33, ATerm g_33, ATerm);
ATerm l_4 (ATerm);
ATerm r_4 (ATerm);
ATerm v_4 (ATerm);
ATerm d_7 (ATerm y_31, ATerm);
ATerm tboundin_3_0 (ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm j_5 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm u_5 (ATerm);
ATerm x_5 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm i_7 (ATerm e_95 (ATerm), ATerm e_42, ATerm d_42, ATerm);
ATerm foldr_3_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm);
ATerm j_7 (ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm i_42, ATerm h_42, ATerm);
ATerm k_7 (ATerm z_94 (ATerm), ATerm c_42, ATerm b_42, ATerm);
ATerm at_end_1_0 (ATerm q_91 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm o_44 (ATerm w_43, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm g_93 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm o_7 (ATerm p_599, ATerm u_599, ATerm v_66, ATerm);
ATerm while_not_2_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm);
ATerm for_3_0 (ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm a_48 (ATerm t_46, ATerm u_46, ATerm v_46, ATerm);
ATerm z_6 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm l_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm d_8 (ATerm);
ATerm k_8 (ATerm);
ATerm free_vars_3_0 (ATerm h_115 (ATerm), ATerm i_115 (ATerm), ATerm j_115 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm q_7 (ATerm v_33, ATerm w_33, ATerm);
ATerm end_scope_1_0 (ATerm d_87 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm scope_2_0 (ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm mark_buv_defs_use_def_0_0 (ATerm);
ATerm map_1_0 (ATerm a_91 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm);
ATerm r_7 (ATerm t_54, ATerm u_54, ATerm);
ATerm s_7 (ATerm h_58, ATerm i_58, ATerm);
ATerm u_7 (ATerm i_107 (ATerm), ATerm w_469, ATerm l_58, ATerm);
ATerm t_7 (ATerm d_58, ATerm e_58, ATerm);
ATerm x_8 (ATerm);
ATerm z_8 (ATerm);
ATerm output_1_0 (ATerm b_110 (ATerm), ATerm);
ATerm j_52 (ATerm d_52, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm v_7 (ATerm j_58, ATerm);
ATerm w_7 (ATerm v_54, ATerm w_54, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm w_53 (ATerm v_52, ATerm);
ATerm x_53 (ATerm z_52, ATerm a_53, ATerm b_53, ATerm);
ATerm y_53 (ATerm j_53, ATerm k_53, ATerm l_53, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm a_9 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm c_110 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm g_9 (ATerm);
ATerm j_9 (ATerm);
ATerm l_9 (ATerm);
ATerm n_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm y_9 (ATerm);
ATerm a_10 (ATerm);
ATerm d_10 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm e_8 (ATerm u_60, ATerm v_60, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm f_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_8 (ATerm q_33, ATerm r_33, ATerm p_33, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm x_7 (ATerm r_45, ATerm s_45, ATerm);
ATerm foldr_2_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_10 (ATerm);
ATerm s_10 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_115 (ATerm), ATerm);
ATerm t_10 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm w_10 (ATerm);
ATerm need_help_1_0 (ATerm s_109 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm y_10 (ATerm);
ATerm e_11 (ATerm);
ATerm j_11 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_91 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm a_8 (ATerm l_52, ATerm m_52, ATerm);
ATerm debug_1_0 (ATerm g_107 (ATerm), ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm b_8 (ATerm h_35, ATerm i_35, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm m_11 (ATerm);
ATerm o_11 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm x_112 (ATerm), ATerm);
ATerm w_11 (ATerm);
ATerm y_11 (ATerm);
ATerm z_11 (ATerm);
ATerm a_12 (ATerm);
ATerm parse_options_1_0 (ATerm w_112 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm);
ATerm d_12 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm l_12 (ATerm);
ATerm n_12 (ATerm);
ATerm q_12 (ATerm);
ATerm t_12 (ATerm);
ATerm u_12 (ATerm);
ATerm y_12 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm q_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL,n_0 = NULL;
  ATerm m_0 (ATerm t)
  {
    ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,g_1 = NULL,h_1 = NULL,m_1 = NULL,n_1 = NULL,p_1 = NULL,b_6 = NULL,a_6 = NULL;
    p_1 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        c_1 = ATgetArgument(t, 0);
        g_1 = ATgetArgument(t, 1);
        h_1 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_1);
    b_1 = t;
    t = c_1;
    t = x_86(t);
    m_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, m_1, g_1, h_1);
    a_6 = t;
    t = SSLsetAnnotations(a_6, b_1);
    n_1 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        w_0 = ATgetArgument(t, 0);
        x_0 = ATgetArgument(t, 1);
        z_0 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_1);
    v_0 = t;
    t = x_0;
    t = x_86(t);
    a_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_0, a_1, z_0);
    b_6 = t;
    t = SSLsetAnnotations(b_6, v_0);
    return(t);
  }
  ATerm o_0 (ATerm t)
  {
    ATerm q_1 = NULL,r_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,x_1 = NULL,c_6 = NULL;
    x_1 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        r_1 = ATgetArgument(t, 0);
        t_1 = ATgetArgument(t, 1);
        u_1 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_1);
    q_1 = t;
    t = u_1;
    t = x_86(t);
    v_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, r_1, t_1, v_1);
    c_6 = t;
    t = SSLsetAnnotations(c_6, q_1);
    return(t);
  }
  if(((u_0 != NULL) && (u_0 != t)))
    _fail(t);
  else
    u_0 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      if(((r_0 != NULL) && (r_0 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_0 = ATgetArgument(t, 0);
      if(((s_0 != NULL) && (s_0 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_0 = ATgetArgument(t, 1);
      if(((t_0 != NULL) && (t_0 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        t_0 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(u_0));
  if(((q_0 != NULL) && (q_0 != t)))
    _fail(t);
  else
    q_0 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, not_null(r_0), not_null(s_0), not_null(t_0));
  if(((n_0 != NULL) && (n_0 != t)))
    _fail(t);
  else
    n_0 = t;
  t = SSLsetAnnotations(not_null(n_0), not_null(q_0));
  t = abstract_choice_2_0(m_0, o_0, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm w_86 (ATerm), ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,b_2 = NULL,c_2 = NULL,h_6 = NULL;
  ATerm p_0 (ATerm t)
  {
    ATerm d_2 = NULL,e_2 = NULL,g_2 = NULL,k_2 = NULL,l_2 = NULL,i_6 = NULL;
    l_2 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        e_2 = ATgetArgument(t, 0);
        g_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_2);
    d_2 = t;
    t = e_2;
    t = w_86(t);
    k_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, k_2, g_2);
    i_6 = t;
    t = SSLsetAnnotations(i_6, d_2);
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm m_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,j_6 = NULL;
    r_2 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        o_2 = ATgetArgument(t, 0);
        p_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_2);
    m_2 = t;
    t = p_2;
    t = w_86(t);
    q_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, o_2, q_2);
    j_6 = t;
    t = SSLsetAnnotations(j_6, m_2);
    return(t);
  }
  if(((c_2 != NULL) && (c_2 != t)))
    _fail(t);
  else
    c_2 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      if(((z_1 != NULL) && (z_1 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_1 = ATgetArgument(t, 0);
      if(((b_2 != NULL) && (b_2 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(c_2));
  if(((y_1 != NULL) && (y_1 != t)))
    _fail(t);
  else
    y_1 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(z_1), not_null(b_2));
  if(((h_6 != NULL) && (h_6 != t)))
    _fail(t);
  else
    h_6 = t;
  t = SSLsetAnnotations(not_null(h_6), not_null(y_1));
  t = abstract_choice_2_0(p_0, y_0, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
  w_2 = t;
  t = save_MarkVar_0_0(t);
  s_2 = t;
  t = w_2;
  t = y_86(t);
  v_2 = t;
  t = save_MarkVar_0_0(t);
  t_2 = t;
  t = term_z_12;
  y_2 = t;
  t = SSL_table_destroy(y_2);
  t = term_z_12;
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_12, s_2);
  t = w_6(x_2, s_2, t);
  t = v_2;
  t = z_86(t);
  u_2 = t;
  t = t_2;
  t = isect_MarkVar_0_0(t);
  t = u_2;
  return(t);
}
ATerm mark_choice_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,d_3 = NULL,n_6 = NULL;
  ATerm j_2 (ATerm t)
  {
    ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,l_3 = NULL,n_3 = NULL,o_6 = NULL;
    n_3 = t;
    if(match_cons(t, sym_Choice_2))
      {
        f_3 = ATgetArgument(t, 0);
        g_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_3);
    e_3 = t;
    t = f_3;
    t = v_86(t);
    l_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, l_3, g_3);
    o_6 = t;
    t = SSLsetAnnotations(o_6, e_3);
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm q_3 = NULL,v_3 = NULL,y_3 = NULL,z_3 = NULL,h_4 = NULL,p_6 = NULL;
    h_4 = t;
    if(match_cons(t, sym_Choice_2))
      {
        v_3 = ATgetArgument(t, 0);
        y_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_4);
    q_3 = t;
    t = y_3;
    t = v_86(t);
    z_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, v_3, z_3);
    p_6 = t;
    t = SSLsetAnnotations(p_6, q_3);
    return(t);
  }
  if(((d_3 != NULL) && (d_3 != t)))
    _fail(t);
  else
    d_3 = t;
  if(match_cons(t, sym_Choice_2))
    {
      if(((a_3 != NULL) && (a_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_3 = ATgetArgument(t, 0);
      if(((b_3 != NULL) && (b_3 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(d_3));
  if(((z_2 != NULL) && (z_2 != t)))
    _fail(t);
  else
    z_2 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_3), not_null(b_3));
  if(((n_6 != NULL) && (n_6 != t)))
    _fail(t);
  else
    n_6 = t;
  t = SSLsetAnnotations(not_null(n_6), not_null(z_2));
  t = abstract_choice_2_0(j_2, n_2, t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,q_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,w_4 = NULL,e_7 = NULL,y_6 = NULL;
  k_4 = t;
  t = save_MarkVar_0_0(t);
  j_4 = t;
  t = k_4;
  if(match_cons(t, sym_Rec_2))
    {
      t_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_4);
  s_4 = t;
  t = u_4;
  t = mark_buv_0_0(t);
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, t_4, w_4);
  y_6 = t;
  t = SSLsetAnnotations(y_6, s_4);
  t = j_4;
  t = isect_MarkVar_0_0(t);
  t = k_4;
  if(match_cons(t, sym_Rec_2))
    {
      n_4 = ATgetArgument(t, 0);
      o_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_4);
  m_4 = t;
  t = o_4;
  t = mark_buv_0_0(t);
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, n_4, q_4);
  e_7 = t;
  t = SSLsetAnnotations(e_7, m_4);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm x_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,i_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,s_5 = NULL,t_5 = NULL,v_5 = NULL,w_5 = NULL,y_5 = NULL,p_7 = NULL,n_7 = NULL,m_7 = NULL;
  y_5 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      s_5 = ATgetArgument(t, 0);
      t_5 = ATgetArgument(t, 1);
      v_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_5);
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, s_5, t_5, v_5);
  m_7 = t;
  t = SSLsetAnnotations(m_7, o_5);
  w_5 = t;
  t = save_MarkVar_0_0(t);
  x_4 = t;
  t = w_5;
  if(match_cons(t, sym_PrimT_3))
    {
      i_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
      l_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_5);
  f_5 = t;
  t = l_5;
  t = map_1_0(c_3, t);
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, i_5, k_5, m_5);
  n_7 = t;
  t = SSLsetAnnotations(n_7, f_5);
  n_5 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      a_5 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
      c_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_5);
  z_4 = t;
  t = b_5;
  t = mark_buv_0_0(t);
  d_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, a_5, d_5, c_5);
  p_7 = t;
  t = SSLsetAnnotations(p_7, z_4);
  e_5 = t;
  t = x_4;
  t = isect_MarkVar_0_0(t);
  t = e_5;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL;
  q_9 = t;
  if(match_cons(t, sym_CallT_3))
    {
      r_9 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
      p_9 = ATgetArgument(t, 2);
      {
        ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,o_1 = NULL,s_1 = NULL,w_1 = NULL,a_2 = NULL,f_2 = NULL,h_2 = NULL,i_2 = NULL,h_3 = NULL,h_8 = NULL,g_8 = NULL,f_8 = NULL;
        t = SSLgetAnnotations(q_9);
        i_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, r_9, s_9, p_9);
        f_8 = t;
        t = SSLsetAnnotations(f_8, i_2);
        h_3 = t;
        t = save_MarkVar_0_0(t);
        d_1 = t;
        t = h_3;
        if(match_cons(t, sym_CallT_3))
          {
            s_1 = ATgetArgument(t, 0);
            w_1 = ATgetArgument(t, 1);
            a_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_3);
        o_1 = t;
        t = a_2;
        t = map_1_0(i_3, t);
        f_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, s_1, w_1, f_2);
        g_8 = t;
        t = SSLsetAnnotations(g_8, o_1);
        h_2 = t;
        if(match_cons(t, sym_CallT_3))
          {
            f_1 = ATgetArgument(t, 0);
            i_1 = ATgetArgument(t, 1);
            j_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_2);
        e_1 = t;
        t = i_1;
        t = mark_buv_0_0(t);
        k_1 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, f_1, k_1, j_1);
        h_8 = t;
        t = SSLsetAnnotations(h_8, e_1);
        l_1 = t;
        t = d_1;
        t = isect_MarkVar_0_0(t);
        t = l_1;
      }
    }
  else
    {
      ATerm t_3 = NULL,u_3 = NULL,w_3 = NULL,x_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,f_4 = NULL,j_8 = NULL,i_8 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          r_9 = ATgetArgument(t, 0);
          s_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_9);
      c_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, r_9, s_9);
      i_8 = t;
      t = SSLsetAnnotations(i_8, c_4);
      f_4 = t;
      t = save_MarkVar_0_0(t);
      t_3 = t;
      t = f_4;
      if(match_cons(t, sym_Call_2))
        {
          w_3 = ATgetArgument(t, 0);
          x_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_4);
      u_3 = t;
      t = x_3;
      t = mark_buv_0_0(t);
      a_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, w_3, a_4);
      j_8 = t;
      t = SSLsetAnnotations(j_8, u_3);
      b_4 = t;
      t = t_3;
      t = isect_MarkVar_0_0(t);
      t = b_4;
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_z_12;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      f_11 = ATgetArgument(t, 0);
      {
        ATerm a_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  g_11 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_11);
  h_11 = t;
  t = term_f_13;
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, f_11), term_f_13);
  t = c_7(o_3, h_11, i_11, t);
  t = g_11;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_z_12;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_g_13;
  return(t);
}
ATerm u_6 (ATerm s_32, ATerm t)
{
  ATerm z_9 = NULL,e_10 = NULL,g_10 = NULL,k_10 = NULL,u_10 = NULL,v_10 = NULL,a_11 = NULL,y_8 = NULL;
  if(((z_9 != NULL) && (z_9 != t)))
    _fail(t);
  else
    z_9 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      if(((g_10 != NULL) && (g_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_10 = ATgetArgument(t, 0);
      if(((k_10 != NULL) && (k_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_10 = ATgetArgument(t, 1);
      if(((u_10 != NULL) && (u_10 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        u_10 = ATgetArgument(t, 2);
      if(((v_10 != NULL) && (v_10 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        v_10 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(z_9));
  if(((e_10 != NULL) && (e_10 != t)))
    _fail(t);
  else
    e_10 = t;
  t = not_null(v_10);
  {
    ATerm k_3 (ATerm t)
    {
      ATerm h_13 = t;
      int i_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_11 = NULL;
          d_11 = t;
          t = not_null(s_32);
          t = map_1_0(m_3, t);
          t = d_11;
          t = mark_buv_0_0(t);
          ;
          LocalPopChoice(i_13);
        }
      else
        {
          t = h_13;
          t = debug_1_0(p_3, t);
        }
      return(t);
    }
    t = scope_2_0(j_3, k_3, t);
    if(((a_11 != NULL) && (a_11 != t)))
      _fail(t);
    else
      a_11 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(g_10), not_null(k_10), not_null(u_10), not_null(a_11));
    if(((y_8 != NULL) && (y_8 != t)))
      _fail(t);
    else
      y_8 = t;
    t = SSLsetAnnotations(not_null(y_8), not_null(e_10));
  }
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,m_12 = NULL,o_12 = NULL,p_12 = NULL,r_12 = NULL;
  i_12 = t;
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      p_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_12;
  if(match_cons(t, sym_Undefined_0))
    {
      t = j_12;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_k_13;
        }
      else
        {
          t = term_k_13;
        }
    }
  else
    {
      ATerm l_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm t_13 = ATgetArgument(t, 0);
              r_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(s_13);
          t = j_12;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_k_13;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  m_12 = ATgetArgument(t, 0);
                  o_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm w_13 = t;
                int x_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, o_12, r_12);
                    {
                      ATerm y_13 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm q_5 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              q_5 = ATgetArgument(t, 0);
                              if((q_5 != ATgetArgument(t, 1)))
                                {
                                  _fail(ATgetArgument(t, 1));
                                }
                            }
                          else
                            _fail(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = y_13;
                        }
                      t = (ATerm) ATmakeAppl(sym_Defined_2, m_12, term_z_13);
                    }
                    ;
                    LocalPopChoice(x_13);
                  }
                else
                  {
                    t = w_13;
                    t = r_12;
                    if((o_12 != t))
                      {
                        _fail(t);
                      }
                    t = j_12;
                  }
              }
            }
        }
      else
        {
          t = l_13;
          t = j_12;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_k_13;
        }
    }
  return(t);
}
ATerm v_6 (ATerm i_31, ATerm j_31, ATerm h_31, ATerm t)
{
  ATerm x_12 = NULL,b_13 = NULL,d_13 = NULL;
  t = term_z_12;
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_12, i_31);
  t = b_8(d_13, i_31, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_12 = ATgetFirst((ATermList) t);
      {
        ATerm a_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_31, x_12);
  t = CompareEntries_0_0(t);
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_31, (ATerm) ATinsert(CheckATermList(h_31), b_13));
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,u_13 = NULL,v_13 = NULL;
  v_13 = t;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      q_13 = ATgetArgument(t, 1);
      t = q_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_13 = ATgetFirst((ATermList) t);
          u_13 = (ATerm) ATgetNext((ATermList) t);
          t = r_13;
          {
            ATerm b_14 = t;
            int e_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm h_14 = ATgetArgument(t, 0);
                    ATerm i_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(e_14);
                t = p_13;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = v_13;
                  }
                else
                  {
                    ATerm j_14 = t;
                    int k_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = v_13;
                        t = v_6(p_13, r_13, u_13, t);
                        ;
                        LocalPopChoice(k_14);
                      }
                    else
                      {
                        t = j_14;
                        t = v_13;
                      }
                  }
              }
            else
              {
                t = b_14;
                t = p_13;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = v_13;
                  }
                else
                  {
                    t = v_13;
                  }
              }
          }
        }
      else
        {
          t = p_13;
          if(match_cons(t, sym_Scopes_0))
            {
              t = v_13;
            }
          else
            {
              t = v_13;
            }
        }
    }
  else
    {
      t = v_13;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  t = map_1_0(r_3, t);
  m_13 = t;
  t = term_z_12;
  o_13 = t;
  t = SSL_table_destroy(o_13);
  t = term_z_12;
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_12, m_13);
  t = w_6(n_13, m_13, t);
  t = m_13;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm b_15 = NULL,i_15 = NULL,l_15 = NULL;
  l_15 = t;
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm n_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_14);
        t = l_15;
      }
    else
      {
        t = l_14;
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm q_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(p_14);
              t = l_15;
            }
          else
            {
              t = o_14;
              {
                ATerm r_14 = t;
                int s_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm t_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(s_14);
                    t = l_15;
                  }
                else
                  {
                    t = r_14;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm u_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = l_15;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    b_15 = t;
    t = l_15;
    t = SRTS_one(mark_buv_0_0, t);
    i_15 = t;
    t = b_15;
    t = isect_MarkVar_0_0(t);
    t = i_15;
  }
  return(t);
}
ATerm w_6 (ATerm t_34, ATerm s_34, ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm t_15 = NULL,u_15 = NULL;
    if(match_cons(t, sym__2))
      {
        t_15 = ATgetArgument(t, 0);
        u_15 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(not_null(t_34), t_15, u_15);
    t = (ATerm) ATmakeAppl(sym__3, not_null(t_34), t_15, u_15);
    return(t);
  }
  t = not_null(s_34);
  t = map_1_0(s_3, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm w_15 = NULL;
  ATerm d_4 (ATerm t)
  {
    ATerm x_15 = NULL,y_15 = NULL;
    x_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_15), x_15);
    t = b_8(not_null(w_15), x_15, t);
    y_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_15, y_15);
    return(t);
  }
  if(((w_15 != NULL) && (w_15 != t)))
    _fail(t);
  else
    w_15 = t;
  t = SSL_table_keys(not_null(w_15));
  t = map_1_0(d_4, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_z_12;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm b_17 = NULL,d_17 = NULL,e_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,m_17 = NULL;
  m_17 = t;
  if(match_cons(t, sym__2))
    {
      b_17 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
      t = d_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_17 = ATgetFirst((ATermList) t);
          i_17 = (ATerm) ATgetNext((ATermList) t);
          t = e_17;
          if(match_cons(t, sym_Defined_2))
            {
              g_17 = ATgetArgument(t, 0);
              h_17 = ATgetArgument(t, 1);
              t = h_17;
              if(match_string(t, "unbound"))
                {
                  t = b_17;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = m_17;
                    }
                  else
                    {
                      ATerm v_14 = t;
                      int w_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, b_17, (ATerm) ATinsert(CheckATermList(i_17), (ATerm) ATmakeAppl(sym_Defined_2, g_17, term_z_13)));
                          ;
                          LocalPopChoice(w_14);
                        }
                      else
                        {
                          t = v_14;
                          t = m_17;
                        }
                    }
                }
              else
                {
                  t = b_17;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = m_17;
                    }
                  else
                    {
                      t = m_17;
                    }
                }
            }
          else
            {
              t = b_17;
              if(match_cons(t, sym_Scopes_0))
                {
                  t = m_17;
                }
              else
                {
                  t = m_17;
                }
            }
        }
      else
        {
          t = b_17;
          if(match_cons(t, sym_Scopes_0))
            {
              t = m_17;
            }
          else
            {
              t = m_17;
            }
        }
    }
  else
    {
      t = m_17;
    }
  return(t);
}
ATerm undefine_unbound_MarkVar_0_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,v_16 = NULL;
  t = save_MarkVar_0_0(t);
  t = map_1_0(e_4, t);
  s_16 = t;
  t = term_z_12;
  v_16 = t;
  t = SSL_table_destroy(v_16);
  t = term_z_12;
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_12, s_16);
  t = w_6(t_16, s_16, t);
  t = s_16;
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm o_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,a_19 = NULL,b_19 = NULL,j_19 = NULL,k_19 = NULL,m_19 = NULL,c_9 = NULL,b_9 = NULL;
  if(((m_19 != NULL) && (m_19 != t)))
    _fail(t);
  else
    m_19 = t;
  if(match_cons(t, sym_Let_2))
    {
      if(((b_19 != NULL) && (b_19 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_19 = ATgetArgument(t, 0);
      if(((j_19 != NULL) && (j_19 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(m_19));
  if(((a_19 != NULL) && (a_19 != t)))
    _fail(t);
  else
    a_19 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(b_19), not_null(j_19));
  if(((b_9 != NULL) && (b_9 != t)))
    _fail(t);
  else
    b_9 = t;
  t = SSLsetAnnotations(not_null(b_9), not_null(a_19));
  if(((k_19 != NULL) && (k_19 != t)))
    _fail(t);
  else
    k_19 = t;
  t = undefine_unbound_MarkVar_0_0(t);
  if(((o_18 != NULL) && (o_18 != t)))
    _fail(t);
  else
    o_18 = t;
  t = not_null(k_19);
  if(match_cons(t, sym_Let_2))
    {
      if(((r_18 != NULL) && (r_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_18 = ATgetArgument(t, 0);
      if(((s_18 != NULL) && (s_18 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(k_19));
  if(((q_18 != NULL) && (q_18 != t)))
    _fail(t);
  else
    q_18 = t;
  t = not_null(r_18);
  {
    ATerm g_4 (ATerm t)
    {
      ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
      n_19 = t;
      t = term_z_12;
      p_19 = t;
      t = SSL_table_destroy(p_19);
      t = term_z_12;
      o_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_z_12, not_null(o_18));
      t = w_6(o_19, not_null(o_18), t);
      t = n_19;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(g_4, t);
    if(((t_18 != NULL) && (t_18 != t)))
      _fail(t);
    else
      t_18 = t;
    t = term_z_12;
    if(((w_18 != NULL) && (w_18 != t)))
      _fail(t);
    else
      w_18 = t;
    t = SSL_table_destroy(not_null(w_18));
    t = term_z_12;
    if(((v_18 != NULL) && (v_18 != t)))
      _fail(t);
    else
      v_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_12, not_null(o_18));
    t = w_6(not_null(v_18), not_null(o_18), t);
    t = not_null(s_18);
    t = mark_buv_0_0(t);
    if(((u_18 != NULL) && (u_18 != t)))
      _fail(t);
    else
      u_18 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_18), not_null(u_18));
    if(((c_9 != NULL) && (c_9 != t)))
      _fail(t);
    else
      c_9 = t;
    t = SSLsetAnnotations(not_null(c_9), not_null(q_18));
  }
  return(t);
}
ATerm a_7 (ATerm b_34, ATerm c_34, ATerm t)
{
  ATerm u_19 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_34, c_34);
  t = b_8(b_34, c_34, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_19 = ATgetFirst((ATermList) t);
      {
        ATerm x_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_19;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL;
  k_23 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_8 = NULL,m_8 = NULL,p_8 = NULL,w_8 = NULL;
        t = term_z_12;
        w_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_12, k_23);
        t = a_7(w_8, k_23, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm c_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_15) != ATmakeSymbol("j_0", 0, ATtrue)))
              _fail(t);
            l_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, l_23);
        m_8 = t;
        t = (ATerm) ATinsert(ATempty, l_8);
        p_8 = t;
        t = SSLsetAnnotations(m_8, p_8);
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        {
          ATerm d_15 = t;
          int e_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_9 = NULL,i_9 = NULL,t_9 = NULL,b_10 = NULL;
              t = term_z_12;
              b_10 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_z_12, k_23);
              t = a_7(b_10, k_23, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm f_15 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) f_15) != ATmakeSymbol("h_0", 0, ATtrue)))
                    _fail(t);
                  h_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, l_23);
              i_9 = t;
              t = (ATerm) ATinsert(ATempty, h_9);
              t_9 = t;
              t = SSLsetAnnotations(i_9, t_9);
              ;
              LocalPopChoice(e_15);
            }
          else
            {
              t = d_15;
              {
                ATerm j_15 = t;
                int n_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_10 = NULL,l_10 = NULL,m_10 = NULL,r_10 = NULL;
                    t = term_z_12;
                    r_10 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_z_12, k_23);
                    t = a_7(r_10, k_23, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm o_15 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) o_15) != ATmakeSymbol("f_0", 0, ATtrue)))
                          _fail(t);
                        j_10 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, l_23);
                    l_10 = t;
                    t = (ATerm) ATinsert(ATempty, j_10);
                    m_10 = t;
                    t = SSLsetAnnotations(l_10, m_10);
                    ;
                    LocalPopChoice(n_15);
                  }
                else
                  {
                    t = j_15;
                    {
                      ATerm z_10 = NULL,b_11 = NULL,c_11 = NULL,n_11 = NULL;
                      t = term_z_12;
                      n_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_z_12, k_23);
                      t = a_7(n_11, k_23, t);
                      if(match_cons(t, sym_Defined_2))
                        {
                          ATerm p_15 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) p_15) != ATmakeSymbol("b_0", 0, ATtrue)))
                            _fail(t);
                          z_10 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Var_1, l_23);
                      b_11 = t;
                      t = (ATerm) ATinsert(ATempty, z_10);
                      c_11 = t;
                      t = SSLsetAnnotations(b_11, c_11);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm c_89 (ATerm), ATerm t)
{
  ATerm s_23 (ATerm t)
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_89(t);
        ;
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
        t = SRTS_all(s_23, t);
      }
    return(t);
  }
  t = s_23(t);
  return(t);
}
ATerm x_6 (ATerm d_34, ATerm e_34, ATerm f_34, ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,w_23 = NULL;
  u_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_34, e_34);
  t = b_8(d_34, e_34, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_15 = ATgetFirst((ATermList) t);
      t_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_23), f_34);
  w_23 = t;
  t = SSL_table_put(d_34, e_34, w_23);
  t = u_23;
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  t = MarkVar_0_0(t);
  y_23 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_z_12;
  a_24 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_23);
  b_24 = t;
  t = term_z_15;
  c_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_12, (ATerm)ATmakeAppl(sym_Var_1, z_23), term_z_15);
  t = x_6(a_24, b_24, c_24, t);
  t = y_23;
  return(t);
}
ATerm b_7 (ATerm e_32, ATerm t)
{
  ATerm x_23 = NULL;
  t = e_32;
  t = alltd_1_0(i_4, t);
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, x_23);
  return(t);
}
ATerm mark_buv_0_0 (ATerm t)
{
  ATerm a_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_24 = NULL,a_25 = NULL;
      x_24 = t;
      if(match_cons(t, sym_Match_1))
        {
          a_25 = ATgetArgument(t, 0);
          t = x_24;
          t = b_7(a_25, t);
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              a_25 = ATgetArgument(t, 0);
              {
                ATerm r_11 = NULL,u_11 = NULL,k_9 = NULL;
                t = SSLgetAnnotations(x_24);
                r_11 = t;
                t = a_25;
                t = alltd_1_0(MarkVar_0_0, t);
                u_11 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, u_11);
                k_9 = t;
                t = SSLsetAnnotations(k_9, r_11);
              }
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  a_25 = ATgetArgument(t, 0);
                  {
                    ATerm e_16 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = x_24;
              t = d_7(a_25, t);
            }
        }
      ;
      LocalPopChoice(c_16);
    }
  else
    {
      t = a_16;
      {
        ATerm f_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_let_0_0(t);
            ;
            LocalPopChoice(g_16);
          }
        else
          {
            t = f_16;
            {
              ATerm h_16 = t;
              int i_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_traversal_0_0(t);
                  ;
                  LocalPopChoice(i_16);
                }
              else
                {
                  t = h_16;
                  {
                    ATerm j_16 = t;
                    int l_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_25 = NULL,t_25 = NULL;
                        p_25 = t;
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm m_16 = ATgetArgument(t, 0);
                            ATerm o_16 = ATgetArgument(t, 1);
                            t_25 = ATgetArgument(t, 2);
                            {
                              ATerm p_16 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = p_25;
                        t = u_6(t_25, t);
                        ;
                        LocalPopChoice(l_16);
                      }
                    else
                      {
                        t = j_16;
                        {
                          ATerm q_16 = t;
                          int r_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = mark_call_0_0(t);
                              ;
                              LocalPopChoice(r_16);
                            }
                          else
                            {
                              t = q_16;
                              {
                                ATerm u_16 = t;
                                int w_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_prim_0_0(t);
                                    ;
                                    LocalPopChoice(w_16);
                                  }
                                else
                                  {
                                    t = u_16;
                                    {
                                      ATerm x_16 = t;
                                      int z_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm a_26 = NULL;
                                          a_26 = t;
                                          if(match_cons(t, sym_Rec_2))
                                            {
                                              ATerm a_17 = ATgetArgument(t, 0);
                                              ATerm f_17 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = a_26;
                                          t = t_6(t);
                                          ;
                                          LocalPopChoice(z_16);
                                        }
                                      else
                                        {
                                          t = x_16;
                                          {
                                            ATerm j_17 = t;
                                            int k_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_choice_1_0(mark_buv_0_0, t);
                                                ;
                                                LocalPopChoice(k_17);
                                              }
                                            else
                                              {
                                                t = j_17;
                                                {
                                                  ATerm l_17 = t;
                                                  int n_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                      ;
                                                      LocalPopChoice(n_17);
                                                    }
                                                  else
                                                    {
                                                      t = l_17;
                                                      {
                                                        ATerm o_17 = t;
                                                        int p_17 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                            ;
                                                            LocalPopChoice(p_17);
                                                          }
                                                        else
                                                          {
                                                            t = o_17;
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
ATerm c_7 (ATerm g_87 (ATerm), ATerm i_33, ATerm g_33, ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,p_26 = NULL;
  h_26 = t;
  t = g_87(t);
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_26, i_33, g_33);
  t = c_8(e_26, i_33, g_33, t);
  {
    ATerm q_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_26 = NULL;
        t = term_t_17;
        q_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_26, term_t_17);
        t = b_8(e_26, q_26, t);
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = q_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_26 = ATgetFirst((ATermList) t);
        g_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_t_17;
    i_26 = t;
    t = (ATerm) ATinsert(CheckATermList(g_26), (ATerm) ATinsert(CheckATermList(f_26), i_33));
    p_26 = t;
    t = SSL_table_put(e_26, i_26, p_26);
    t = h_26;
  }
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_z_12;
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,b_27 = NULL;
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_26);
  y_26 = t;
  t = term_x_17;
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_26), term_x_17);
  t = c_7(v_4, y_26, b_27, t);
  t = x_26;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_z_12;
  return(t);
}
ATerm d_7 (ATerm y_31, ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,m_9 = NULL;
  if(((r_26 != NULL) && (r_26 != t)))
    _fail(t);
  else
    r_26 = t;
  if(match_cons(t, sym_Scope_2))
    {
      if(((t_26 != NULL) && (t_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_26 = ATgetArgument(t, 0);
      if(((u_26 != NULL) && (u_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(r_26));
  if(((s_26 != NULL) && (s_26 != t)))
    _fail(t);
  else
    s_26 = t;
  t = not_null(u_26);
  {
    ATerm p_4 (ATerm t)
    {
      ATerm w_26 = NULL;
      w_26 = t;
      t = not_null(y_31);
      t = map_1_0(r_4, t);
      t = w_26;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(l_4, p_4, t);
    if(((v_26 != NULL) && (v_26 != t)))
      _fail(t);
    else
      v_26 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_26), not_null(v_26));
    if(((m_9 != NULL) && (m_9 != t)))
      _fail(t);
    else
      m_9 = t;
    t = SSLsetAnnotations(not_null(m_9), not_null(s_26));
  }
  return(t);
}
ATerm tboundin_3_0 (ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
  g_30 = t;
  if(match_cons(t, sym_Scope_2))
    {
      h_30 = ATgetArgument(t, 0);
      a_30 = ATgetArgument(t, 1);
      {
        ATerm k_12 = NULL,s_12 = NULL,v_12 = NULL,o_9 = NULL;
        t = SSLgetAnnotations(g_30);
        k_12 = t;
        t = h_30;
        t = z_116(t);
        s_12 = t;
        t = a_30;
        t = x_116(t);
        v_12 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, s_12, v_12);
        o_9 = t;
        t = SSLsetAnnotations(o_9, k_12);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          h_30 = ATgetArgument(t, 0);
          a_30 = ATgetArgument(t, 1);
          b_30 = ATgetArgument(t, 2);
          f_30 = ATgetArgument(t, 3);
          {
            ATerm j_13 = NULL,c_14 = NULL,d_14 = NULL,f_14 = NULL,g_14 = NULL,w_9 = NULL;
            t = SSLgetAnnotations(g_30);
            j_13 = t;
            t = h_30;
            t = z_116(t);
            c_14 = t;
            t = a_30;
            t = z_116(t);
            d_14 = t;
            t = b_30;
            t = z_116(t);
            f_14 = t;
            t = f_30;
            t = x_116(t);
            g_14 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, c_14, d_14, f_14, g_14);
            w_9 = t;
            t = SSLsetAnnotations(w_9, j_13);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              h_30 = ATgetArgument(t, 0);
              a_30 = ATgetArgument(t, 1);
              b_30 = ATgetArgument(t, 2);
              f_30 = ATgetArgument(t, 3);
              {
                ATerm a_15 = NULL,g_15 = NULL,h_15 = NULL,k_15 = NULL,m_15 = NULL,x_9 = NULL;
                t = SSLgetAnnotations(g_30);
                a_15 = t;
                t = h_30;
                t = z_116(t);
                g_15 = t;
                t = a_30;
                t = z_116(t);
                h_15 = t;
                t = b_30;
                t = z_116(t);
                k_15 = t;
                t = f_30;
                t = x_116(t);
                m_15 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, g_15, h_15, k_15, m_15);
                x_9 = t;
                t = SSLsetAnnotations(x_9, a_15);
              }
            }
          else
            {
              ATerm b_16 = NULL,d_16 = NULL,c_10 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  h_30 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_30);
              b_16 = t;
              t = h_30;
              t = x_116(t);
              d_16 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, d_16);
              c_10 = t;
              t = SSLsetAnnotations(c_10, b_16);
            }
        }
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm a_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_31);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
      {
        ATerm m_31 = NULL,n_31 = NULL,q_31 = NULL,r_31 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_31 = ATgetArgument(t, 0);
            t = m_31;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_31 = ATgetArgument(t, 0);
                n_31 = ATgetArgument(t, 1);
                q_31 = ATgetArgument(t, 2);
                r_31 = ATgetArgument(t, 3);
                t = q_31;
                t = map_1_0(h_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_31 = ATgetArgument(t, 0);
                    n_31 = ATgetArgument(t, 1);
                    q_31 = ATgetArgument(t, 2);
                    r_31 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_31;
                t = map_1_0(j_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm t_33 = NULL;
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_33 = ATgetArgument(t, 0);
          {
            ATerm c_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_18);
      t = t_33;
    }
  else
    {
      t = a_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_33;
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm f_35 = NULL;
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_35 = ATgetArgument(t, 0);
          {
            ATerm f_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_18);
      t = f_35;
    }
  else
    {
      t = d_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_35;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(y_4, g_5, tboundin_3_0, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm k_36 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_36);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
      {
        ATerm m_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_36 = ATgetArgument(t, 0);
            t = m_36;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_36 = ATgetArgument(t, 0);
                r_36 = ATgetArgument(t, 1);
                s_36 = ATgetArgument(t, 2);
                t_36 = ATgetArgument(t, 3);
                t = s_36;
                t = map_1_0(u_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_36 = ATgetArgument(t, 0);
                    r_36 = ATgetArgument(t, 1);
                    s_36 = ATgetArgument(t, 2);
                    t_36 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = s_36;
                t = map_1_0(x_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm n_37 = NULL;
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_37 = ATgetArgument(t, 0);
          {
            ATerm k_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_18);
      t = n_37;
    }
  else
    {
      t = i_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_37;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm m_38 = NULL;
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_38 = ATgetArgument(t, 0);
          {
            ATerm x_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_18);
      t = m_38;
    }
  else
    {
      t = m_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_38;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm a_36 = NULL,e_36 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      e_36 = ATgetArgument(t, 0);
      t = e_36;
      if(match_cons(t, sym_Rule_3))
        {
          a_36 = ATgetArgument(t, 0);
          {
            ATerm f_19 = ATgetArgument(t, 1);
          }
          {
            ATerm i_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = a_36;
      t = free_vars_3_0(p_5, r_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          e_36 = ATgetArgument(t, 0);
          {
            ATerm l_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_36;
    }
  return(t);
}
ATerm i_7 (ATerm e_95 (ATerm), ATerm e_42, ATerm d_42, ATerm t)
{
  ATerm s_39 (ATerm t)
  {
    ATerm i_39 = NULL,l_39 = NULL,m_39 = NULL;
    i_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(d_42);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_39 = ATgetFirst((ATermList) t);
            m_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_19 = t;
          int x_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_39;
              {
                ATerm z_5 (ATerm t)
                {
                  t = not_null(d_42);
                  return(t);
                }
                t = j_7(e_95, z_5, not_null(l_39), not_null(m_39), t);
                t = s_39(t);
              }
              ;
              LocalPopChoice(x_19);
            }
          else
            {
              t = v_19;
              {
                ATerm k_16 = NULL,n_16 = NULL,x_11 = NULL;
                t = SSLgetAnnotations(i_39);
                k_16 = t;
                t = m_39;
                t = s_39(t);
                n_16 = t;
                t = (ATerm) ATinsert(CheckATermList(n_16), l_39);
                x_11 = t;
                t = SSLsetAnnotations(x_11, k_16);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(e_42);
  t = s_39(t);
  return(t);
}
ATerm foldr_3_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
  v_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_39;
      t = u_97(t);
    }
  else
    {
      ATerm c_40 = NULL,d_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_39 = ATgetFirst((ATermList) t);
          x_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_39;
      t = w_97(t);
      c_40 = t;
      t = x_39;
      t = foldr_3_0(u_97, v_97, w_97, t);
      d_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_40, d_40);
      t = v_97(t);
    }
  return(t);
}
ATerm j_7 (ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm i_42, ATerm h_42, ATerm t)
{
  t = i_95(t);
  {
    ATerm d_6 (ATerm t)
    {
      ATerm h_40 = NULL;
      h_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_42), h_40);
      t = h_95(t);
      return(t);
    }
    t = fetch_1_0(d_6, t);
    t = not_null(h_42);
  }
  return(t);
}
ATerm k_7 (ATerm z_94 (ATerm), ATerm c_42, ATerm b_42, ATerm t)
{
  ATerm k_41 (ATerm t)
  {
    ATerm e_41 = NULL,g_41 = NULL,h_41 = NULL;
    e_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_41;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_41 = ATgetFirst((ATermList) t);
            h_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_19 = t;
          int z_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_41;
              {
                ATerm e_6 (ATerm t)
                {
                  t = not_null(b_42);
                  return(t);
                }
                t = j_7(z_94, e_6, not_null(g_41), not_null(h_41), t);
                t = k_41(t);
              }
              ;
              LocalPopChoice(z_19);
            }
          else
            {
              t = y_19;
              {
                ATerm y_16 = NULL,c_17 = NULL,c_12 = NULL;
                t = SSLgetAnnotations(e_41);
                y_16 = t;
                t = h_41;
                t = k_41(t);
                c_17 = t;
                t = (ATerm) ATinsert(CheckATermList(c_17), g_41);
                c_12 = t;
                t = SSLsetAnnotations(c_12, y_16);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(c_42);
  t = k_41(t);
  return(t);
}
ATerm at_end_1_0 (ATerm q_91 (ATerm), ATerm t)
{
  ATerm i_43 (ATerm t)
  {
    ATerm d_43 = NULL,e_43 = NULL,h_43 = NULL;
    h_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_43 = ATgetFirst((ATermList) t);
        e_43 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_17 = NULL,w_17 = NULL,e_12 = NULL;
          t = SSLgetAnnotations(h_43);
          r_17 = t;
          t = e_43;
          t = i_43(t);
          w_17 = t;
          t = (ATerm) ATinsert(CheckATermList(w_17), d_43);
          e_12 = t;
          t = SSLsetAnnotations(e_12, r_17);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_43;
        t = q_91(t);
      }
    return(t);
  }
  t = i_43(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,s_41 = NULL;
  o_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_41;
    }
  else
    {
      ATerm f_6 (ATerm t)
      {
        t = not_null(s_41);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((p_41 != NULL) && (p_41 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            p_41 = ATgetFirst((ATermList) t);
          if(((s_41 != NULL) && (s_41 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(p_41);
      t = at_end_1_0(f_6, t);
    }
  return(t);
}
ATerm o_44 (ATerm w_43, ATerm t)
{
  ATerm x_43 = NULL;
  t = SSL_explode_term(w_43);
  if(match_cons(t, sym__2))
    {
      ATerm b_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_43;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_44 = NULL,i_44 = NULL,l_44 = NULL;
  if(((l_44 != NULL) && (l_44 != t)))
    _fail(t);
  else
    l_44 = t;
  if(match_cons(t, sym__2))
    {
      e_44 = ATgetArgument(t, 0);
      i_44 = ATgetArgument(t, 1);
      {
        ATerm c_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_6 (ATerm t)
            {
              t = not_null(i_44);
              return(t);
            }
            t = not_null(e_44);
            t = at_end_1_0(g_6, t);
            ;
            LocalPopChoice(e_20);
          }
        else
          {
            t = c_20;
            t = o_44(not_null(l_44), t);
          }
      }
    }
  else
    {
      t = o_44(not_null(l_44), t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm g_93 (ATerm), ATerm t)
{
  ATerm a_45 (ATerm t)
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_93(t);
        ;
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        {
          ATerm p_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,w_12 = NULL;
          t = e_93(t);
          z_44 = t;
          if(match_cons(t, sym__2))
            {
              v_44 = ATgetArgument(t, 0);
              w_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_44);
          p_44 = t;
          t = v_44;
          t = g_93(t);
          x_44 = t;
          t = w_44;
          t = a_45(t);
          y_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_44, y_44);
          w_12 = t;
          t = SSLsetAnnotations(w_12, p_44);
          t = f_93(t);
        }
      }
    return(t);
  }
  t = a_45(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_20 = ATgetArgument(t, 0);
      if(((ATgetType(j_20) != AT_LIST) || !(ATisEmpty(j_20))))
        _fail(t);
      {
        ATerm l_20 = ATgetArgument(t, 1);
        if(((ATgetType(l_20) != AT_LIST) || !(ATisEmpty(l_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm q_45 = NULL,w_45 = NULL,y_45 = NULL,c_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_20 = ATgetArgument(t, 0);
      if(((ATgetType(m_20) == AT_LIST) && !(ATisEmpty(m_20))))
        {
          q_45 = ATgetFirst((ATermList) m_20);
          w_45 = (ATerm) ATgetNext((ATermList) m_20);
        }
      else
        _fail(t);
      {
        ATerm o_20 = ATgetArgument(t, 1);
        if(((ATgetType(o_20) == AT_LIST) && !(ATisEmpty(o_20))))
          {
            y_45 = ATgetFirst((ATermList) o_20);
            c_46 = (ATerm) ATgetNext((ATermList) o_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_45, y_45), (ATerm) ATmakeAppl(sym__2, w_45, c_46));
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL;
  if(match_cons(t, sym__2))
    {
      e_46 = ATgetArgument(t, 0);
      f_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_46), e_46);
  return(t);
}
ATerm o_7 (ATerm p_599, ATerm u_599, ATerm v_66, ATerm t)
{
  ATerm d_45 = NULL,h_45 = NULL,j_45 = NULL,k_45 = NULL;
  t = SSL_explode_term(u_599);
  if(match_cons(t, sym__2))
    {
      d_45 = ATgetArgument(t, 0);
      j_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_599);
  if(match_cons(t, sym__2))
    {
      if((d_45 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      h_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_45, j_45);
  t = genzip_4_0(k_6, l_6, m_6, _id, t);
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_45, v_66);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm t)
{
  ATerm h_46 (ATerm t)
  {
    ATerm q_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_100(t);
        ;
        LocalPopChoice(t_20);
      }
    else
      {
        t = q_20;
        t = w_100(t);
        t = h_46(t);
      }
    return(t);
  }
  t = h_46(t);
  return(t);
}
ATerm for_3_0 (ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm t)
{
  t = y_100(t);
  t = while_not_2_0(z_100, a_101, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm o_46 = NULL;
  o_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_46);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,y_18 = NULL;
  s_46 = t;
  if(match_cons(t, sym__2))
    {
      q_46 = ATgetArgument(t, 0);
      r_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_46);
  p_46 = t;
  t = r_46;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_46, r_46);
  y_18 = t;
  t = SSLsetAnnotations(y_18, p_46);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL;
  m_47 = t;
  if(match_cons(t, sym__2))
    {
      n_47 = ATgetArgument(t, 0);
      o_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_47 = ATgetFirst((ATermList) t);
      q_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_48(n_47, o_47, m_47, t);
            ;
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_47), p_47), q_47);
          }
      }
    }
  else
    {
      t = a_48(n_47, o_47, m_47, t);
    }
  return(t);
}
ATerm a_48 (ATerm t_46, ATerm u_46, ATerm v_46, ATerm t)
{
  ATerm w_46 = NULL,a_47 = NULL,z_18 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  t = SSLgetAnnotations(v_46);
  w_46 = t;
  t = u_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_47 = ATgetFirst((ATermList) t);
      g_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_47;
  if(match_cons(t, sym__2))
    {
      e_47 = ATgetArgument(t, 0);
      f_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_47;
        if((e_47 != t))
          {
            _fail(t);
          }
        t = g_47;
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        t = u_46;
        t = o_7(e_47, f_47, g_47, t);
      }
    a_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_46, a_47);
    z_18 = t;
    t = SSLsetAnnotations(z_18, w_46);
  }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm z_47 = NULL;
  if(match_cons(t, sym__2))
    {
      z_47 = ATgetArgument(t, 0);
      if((z_47 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(q_6, r_6, s_6, t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL;
        u_47 = t;
        if(match_cons(t, sym__2))
          {
            v_47 = ATgetArgument(t, 0);
            w_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_47;
        t = k_7(z_6, v_47, w_47, t);
      }
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(y_7, c_19, d_19, t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm e_19 = NULL;
  if(match_cons(t, sym__2))
    {
      e_19 = ATgetArgument(t, 0);
      if((e_19 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL;
  if(match_cons(t, sym__2))
    {
      r_19 = ATgetArgument(t, 0);
      s_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(k_8, r_19, s_19, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm t_19 = NULL;
  if(match_cons(t, sym__2))
    {
      t_19 = ATgetArgument(t, 0);
      if((t_19 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm h_115 (ATerm), ATerm i_115 (ATerm), ATerm j_115 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_48 (ATerm t)
  {
    ATerm b_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_115(t);
        ;
        LocalPopChoice(d_21);
      }
    else
      {
        t = b_21;
        {
          ATerm f_21 = t;
          int g_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_48 = NULL,d_48 = NULL,l_18 = NULL,p_18 = NULL;
              if(((c_48 != NULL) && (c_48 != t)))
                _fail(t);
              else
                c_48 = t;
              t = i_115(t);
              if(((d_48 != NULL) && (d_48 != t)))
                _fail(t);
              else
                d_48 = t;
              t = not_null(c_48);
              {
                ATerm f_7 (ATerm t)
                {
                  ATerm f_48 = NULL;
                  t = o_48(t);
                  f_48 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_48, not_null(d_48));
                  t = diff_0_0(t);
                  return(t);
                }
                t = j_115(f_7, o_48, g_7, t);
                if(((p_18 != NULL) && (p_18 != t)))
                  _fail(t);
                else
                  p_18 = t;
                t = SSL_explode_term(not_null(p_18));
                if(match_cons(t, sym__2))
                  {
                    ATerm l_21 = ATgetArgument(t, 0);
                    if(((l_18 != NULL) && (l_18 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      l_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = not_null(l_18);
                t = foldr_3_0(h_7, l_7, _id, t);
              }
              ;
              LocalPopChoice(g_21);
            }
          else
            {
              t = f_21;
              {
                ATerm g_19 = NULL,h_19 = NULL;
                h_19 = t;
                t = SSL_explode_term(h_19);
                if(match_cons(t, sym__2))
                  {
                    ATerm m_21 = ATgetArgument(t, 0);
                    g_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_19;
                t = foldr_3_0(z_7, d_8, o_48, t);
              }
            }
        }
      }
    return(t);
  }
  t = o_48(t);
  return(t);
}
ATerm q_7 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL;
  q_48 = t;
  {
    ATerm n_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_33, w_33);
        t = b_8(v_33, w_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_21 = ATgetFirst((ATermList) t);
            p_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_21);
        t = SSL_table_put(v_33, w_33, p_48);
        t = (ATerm) ATmakeAppl(sym__3, v_33, w_33, p_48);
      }
    else
      {
        t = n_21;
        t = SSL_table_remove(v_33, w_33);
        t = (ATerm) ATmakeAppl(sym__2, v_33, w_33);
      }
    t = q_48;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
  if(((u_48 != NULL) && (u_48 != t)))
    _fail(t);
  else
    u_48 = t;
  t = d_87(t);
  if(((t_48 != NULL) && (t_48 != t)))
    _fail(t);
  else
    t_48 = t;
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_48 = NULL;
        t = term_t_17;
        w_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_48), term_t_17);
        t = b_8(not_null(t_48), w_48, t);
        ;
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_48 != NULL) && (s_48 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_48 = ATgetFirst((ATermList) t);
        if(((r_48 != NULL) && (r_48 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          r_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_t_17;
    if(((v_48 != NULL) && (v_48 != t)))
      _fail(t);
    else
      v_48 = t;
    t = SSL_table_put(not_null(t_48), not_null(v_48), not_null(r_48));
    t = not_null(s_48);
    {
      ATerm n_8 (ATerm t)
      {
        ATerm x_48 = NULL;
        x_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_48), x_48);
        t = q_7(not_null(t_48), x_48, t);
        return(t);
      }
      t = map_1_0(n_8, t);
      t = not_null(u_48);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm y_99 (ATerm), ATerm z_99 (ATerm), ATerm t)
{
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_99(t);
      t = z_99(t);
      ;
      LocalPopChoice(v_21);
    }
  else
    {
      t = u_21;
      t = z_99(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL;
  a_49 = t;
  t = c_87(t);
  z_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_48, term_t_17);
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_49 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_21 = ATgetArgument(t, 0);
            ATerm z_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_t_17;
        h_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_48, term_t_17);
        t = b_8(z_48, h_49, t);
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = (ATerm) ATempty;
      }
    b_49 = t;
    t = term_t_17;
    c_49 = t;
    t = (ATerm) ATinsert(CheckATermList(b_49), (ATerm) ATempty);
    d_49 = t;
    t = SSL_table_put(z_48, c_49, d_49);
    t = a_49;
  }
  return(t);
}
ATerm scope_2_0 (ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm t)
{
  ATerm o_8 (ATerm t)
  {
    t = end_scope_1_0(e_87, t);
    return(t);
  }
  t = begin_scope_1_0(e_87, t);
  t = restore_always_2_0(f_87, o_8, t);
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_z_12;
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
  n_49 = t;
  t = free_vars_3_0(s_8, t_8, tboundin_3_0, t);
  m_49 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, m_49, n_49);
  t = d_7(m_49, t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm a_22 = ATgetArgument(t, 0);
      l_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_49;
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm o_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_49);
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
        ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            q_49 = ATgetArgument(t, 0);
            t = q_49;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                q_49 = ATgetArgument(t, 0);
                r_49 = ATgetArgument(t, 1);
                s_49 = ATgetArgument(t, 2);
                t_49 = ATgetArgument(t, 3);
                t = s_49;
                t = map_1_0(u_8, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    q_49 = ATgetArgument(t, 0);
                    r_49 = ATgetArgument(t, 1);
                    s_49 = ATgetArgument(t, 2);
                    t_49 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = s_49;
                t = map_1_0(v_8, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm b_50 = NULL;
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_50 = ATgetArgument(t, 0);
          {
            ATerm f_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_22);
      t = b_50;
    }
  else
    {
      t = d_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_50;
    }
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm k_50 = NULL;
  ATerm g_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_50 = ATgetArgument(t, 0);
          {
            ATerm j_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_22);
      t = k_50;
    }
  else
    {
      t = g_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_50;
    }
  return(t);
}
ATerm mark_buv_defs_use_def_0_0 (ATerm t)
{
  t = scope_2_0(q_8, r_8, t);
  return(t);
}
ATerm map_1_0 (ATerm a_91 (ATerm), ATerm t)
{
  ATerm b_51 (ATerm t)
  {
    ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL;
    y_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_50;
      }
    else
      {
        ATerm a_20 = NULL,f_20 = NULL,g_20 = NULL,q_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_50 = ATgetFirst((ATermList) t);
            a_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_50);
        a_20 = t;
        t = z_50;
        t = a_91(t);
        f_20 = t;
        t = a_51;
        t = b_51(t);
        g_20 = t;
        t = (ATerm) ATinsert(CheckATermList(g_20), f_20);
        q_19 = t;
        t = SSLsetAnnotations(q_19, a_20);
      }
    return(t);
  }
  t = b_51(t);
  return(t);
}
ATerm Cons_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,w_19 = NULL;
  i_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_51 = ATgetFirst((ATermList) t);
      f_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_51);
  d_51 = t;
  t = e_51;
  t = r_73(t);
  g_51 = t;
  t = f_51;
  t = s_73(t);
  h_51 = t;
  t = (ATerm) ATinsert(CheckATermList(h_51), g_51);
  w_19 = t;
  t = SSLsetAnnotations(w_19, d_51);
  return(t);
}
ATerm r_7 (ATerm t_54, ATerm u_54, ATerm t)
{
  ATerm j_51 = NULL;
  t = SSL_fputc(t_54, u_54);
  j_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_51);
  return(t);
}
ATerm s_7 (ATerm h_58, ATerm i_58, ATerm t)
{
  ATerm k_51 = NULL;
  t = SSL_write_term_to_stream_text(h_58, i_58);
  k_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_51);
  return(t);
}
ATerm u_7 (ATerm i_107 (ATerm), ATerm w_469, ATerm l_58, ATerm t)
{
  ATerm l_51 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_469, term_k_22);
  t = open_stream_0_0(t);
  l_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_51, l_58);
  t = i_107(t);
  t = fclose_0_0(t);
  t = l_58;
  return(t);
}
ATerm t_7 (ATerm d_58, ATerm e_58, ATerm t)
{
  ATerm m_51 = NULL;
  t = SSL_write_term_to_stream_baf(d_58, e_58);
  m_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_51);
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_22 = ATgetArgument(t, 0);
      if(match_cons(l_22, sym_Stream_1))
        {
          p_51 = ATgetArgument(l_22, 0);
        }
      else
        _fail(t);
      q_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(p_51, q_51, t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_22 = ATgetArgument(t, 0);
      if(match_cons(m_22, sym_Stream_1))
        {
          u_51 = ATgetArgument(m_22, 0);
        }
      else
        _fail(t);
      v_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(u_51, v_51, t);
  r_51 = t;
  t = term_n_22;
  s_51 = t;
  t = r_51;
  if(match_cons(t, sym_Stream_1))
    {
      t_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_22, r_51);
  t = r_7(s_51, t_51, t);
  return(t);
}
ATerm output_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL;
  t = b_110(t);
  o_51 = t;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_22;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        t = term_s_22;
      }
    n_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_51, o_51);
    {
      ATerm u_22 = t;
      int v_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_w_22;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, n_51, o_51);
          LocalPopChoice(v_22);
          if(match_cons(t, sym__2))
            {
              ATerm x_22 = ATgetArgument(t, 0);
              ATerm y_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_7(x_8, n_51, o_51, t);
        }
      else
        {
          t = u_22;
          if(match_cons(t, sym__2))
            {
              ATerm z_22 = ATgetArgument(t, 0);
              ATerm a_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_7(z_8, n_51, o_51, t);
        }
    }
  }
  return(t);
}
ATerm j_52 (ATerm d_52, ATerm t)
{
  t = SSL_fclose(d_52);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL;
  h_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_52 = ATgetArgument(t, 0);
      {
        ATerm b_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_52);
            ;
            LocalPopChoice(d_23);
          }
        else
          {
            t = b_23;
            t = j_52(h_52, t);
          }
      }
    }
  else
    {
      t = j_52(h_52, t);
    }
  return(t);
}
ATerm v_7 (ATerm j_58, ATerm t)
{
  t = SSL_read_term_from_stream(j_58);
  return(t);
}
ATerm w_7 (ATerm v_54, ATerm w_54, ATerm t)
{
  ATerm k_52 = NULL;
  t = SSL_fopen(v_54, w_54);
  k_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_52);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_52 = NULL;
  t = SSL_stdin_stream();
  n_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_52);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_52 = NULL;
  t = SSL_stdout_stream();
  o_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_52);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_52 = NULL;
  t = SSL_stderr_stream();
  p_52 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_52);
  return(t);
}
ATerm w_53 (ATerm v_52, ATerm t)
{
  ATerm w_52 = NULL;
  t = SSL_explode_term(v_52);
  if(match_cons(t, sym__2))
    {
      ATerm e_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_23 = ATgetArgument(t, 1);
        if(((ATgetType(g_23) == AT_LIST) && !(ATisEmpty(g_23))))
          {
            w_52 = ATgetFirst((ATermList) g_23);
            {
              ATerm h_23 = (ATerm) ATgetNext((ATermList) g_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_52;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_52;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_52;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_52;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm x_53 (ATerm z_52, ATerm a_53, ATerm b_53, ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL,h_53 = NULL,d_20 = NULL;
  t = SSLgetAnnotations(b_53);
  e_53 = t;
  t = z_52;
  if(match_cons(t, sym_Path_1))
    {
      h_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_53, a_53);
  d_20 = t;
  t = SSLsetAnnotations(d_20, e_53);
  if(match_cons(t, sym__2))
    {
      c_53 = ATgetArgument(t, 0);
      d_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7(c_53, d_53, t);
  return(t);
}
ATerm y_53 (ATerm j_53, ATerm k_53, ATerm l_53, ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL,r_53 = NULL,k_20 = NULL;
  t = SSLgetAnnotations(l_53);
  o_53 = t;
  t = SSL_is_string(j_53);
  r_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_53, k_53);
  k_20 = t;
  t = SSLsetAnnotations(k_20, o_53);
  if(match_cons(t, sym__2))
    {
      m_53 = ATgetArgument(t, 0);
      n_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7(m_53, n_53, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_23 = ATgetArgument(t, 0);
      ATerm j_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t_53 = t;
  if(match_cons(t, sym__2))
    {
      u_53 = ATgetArgument(t, 0);
      v_53 = ATgetArgument(t, 1);
      {
        ATerm m_23 = t;
        int n_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_53(t_53, t);
            ;
            LocalPopChoice(n_23);
          }
        else
          {
            t = m_23;
            {
              ATerm o_23 = t;
              int p_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_53(u_53, v_53, t_53, t);
                  ;
                  LocalPopChoice(p_23);
                }
              else
                {
                  t = o_23;
                  t = y_53(u_53, v_53, t_53, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_53(t_53, t);
    }
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  ATerm r_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_54 = NULL;
      c_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_54, term_d_24);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = r_23;
      t = debug_1_0(a_9, t);
      _fail(t);
    }
  a_54 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(b_54, t);
  z_53 = t;
  t = a_54;
  t = fclose_0_0(t);
  t = z_53;
  return(t);
}
ATerm input_1_0 (ATerm c_110 (ATerm), ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      t = term_h_24;
    }
  t = ReadFromFile_0_0(t);
  t = c_110(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  e_54 = t;
  t = term_i_24;
  t = whoami_0_0(t);
  f_54 = t;
  t = term_j_24;
  h_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_24), f_54), term_k_24);
  i_54 = t;
  t = SSL_printnl(h_54, i_54);
  t = term_m_24;
  g_54 = t;
  t = SSL_exit(g_54);
  t = e_54;
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm k_54 = NULL;
  k_54 = t;
  if(match_string(t, "-k"))
    {
      t = k_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_54;
    }
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL;
  l_54 = t;
  t = SSL_string_to_int(l_54);
  m_54 = t;
  t = term_o_24;
  n_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_24, m_54);
  t = e_8(n_54, m_54, t);
  t = l_54;
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_9, e_9, f_9, t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm p_54 = NULL;
  p_54 = t;
  if(match_string(t, "-S"))
    {
      t = p_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_54;
    }
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL;
  t = term_q_24;
  q_54 = t;
  t = term_r_24;
  r_54 = t;
  t = term_s_24;
  t = e_8(q_54, r_54, t);
  t = term_t_24;
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm n_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm s_54 = NULL,z_54 = NULL,a_55 = NULL;
  s_54 = t;
  t = SSL_string_to_int(s_54);
  z_54 = t;
  t = term_q_24;
  a_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_24, z_54);
  t = e_8(a_55, z_54, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_54);
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm y_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL;
  t = term_w_24;
  b_55 = t;
  t = term_i_24;
  c_55 = t;
  t = term_z_24;
  t = e_8(b_55, c_55, t);
  t = term_b_25;
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_9, j_9, l_9, t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_9, u_9, v_9, t);
            ;
            LocalPopChoice(g_25);
          }
        else
          {
            t = f_25;
            t = Option_3_0(y_9, a_10, d_10, t);
          }
      }
    }
  return(t);
}
ATerm e_8 (ATerm u_60, ATerm v_60, ATerm t)
{
  ATerm d_55 = NULL;
  t = term_h_25;
  d_55 = t;
  t = SSL_table_put(d_55, u_60, v_60);
  t = (ATerm) ATmakeAppl(sym__3, term_h_25, u_60, v_60);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL;
      t = term_i_24;
      t = d_0(t);
      i_55 = t;
      t = term_i_25;
      j_55 = t;
      t = term_j_25;
      k_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_25, term_j_25, i_55);
      t = c_8(j_55, k_55, i_55, t);
      _fail(t);
    }
  else
    {
      ATerm n_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_55 = ATgetFirst((ATermList) t);
          h_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_55;
      t = a_0(t);
      t = term_i_24;
      t = c_0(t);
      n_55 = t;
      t = (ATerm) ATinsert(CheckATermList(h_55), n_55);
    }
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm p_55 = NULL;
  p_55 = t;
  if(match_string(t, "-o"))
    {
      t = p_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_55;
    }
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL;
  q_55 = t;
  t = term_r_22;
  r_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_22, q_55);
  t = e_8(r_55, q_55, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_55);
  return(t);
}
ATerm i_10 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_10, h_10, i_10, t);
  return(t);
}
ATerm c_8 (ATerm q_33, ATerm r_33, ATerm p_33, ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL;
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_33, r_33);
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_25 = ATgetArgument(t, 0);
            ATerm o_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_33, r_33);
        t = b_8(q_33, r_33, t);
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = (ATerm) ATempty;
      }
    u_55 = t;
    t = (ATerm) ATinsert(CheckATermList(u_55), p_33);
    v_55 = t;
    t = SSL_table_put(q_33, r_33, v_55);
    t = t_55;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL;
      t = term_i_24;
      t = l_0(t);
      g_56 = t;
      t = term_i_25;
      h_56 = t;
      t = term_j_25;
      i_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_25, term_j_25, g_56);
      t = c_8(h_56, i_56, g_56, t);
      _fail(t);
    }
  else
    {
      ATerm m_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_56 = ATgetFirst((ATermList) t);
          d_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_56;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_56 = ATgetFirst((ATermList) t);
          f_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_56;
      t = i_0(t);
      t = e_56;
      t = k_0(t);
      m_56 = t;
      t = (ATerm) ATinsert(CheckATermList(f_56), m_56);
    }
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm o_56 = NULL;
  o_56 = t;
  if(match_string(t, "-i"))
    {
      t = o_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_56;
    }
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL;
  p_56 = t;
  t = term_g_24;
  q_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_24, p_56);
  t = e_8(q_56, p_56, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_56);
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_10, o_10, p_10, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_24;
  t = whoami_0_0(t);
  r_56 = t;
  t = term_j_24;
  t_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_25), r_56);
  u_56 = t;
  t = SSL_printnl(t_56, u_56);
  t = term_m_24;
  s_56 = t;
  t = SSL_exit(s_56);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_25;
  t = get_config_0_0(t);
  return(t);
}
ATerm x_7 (ATerm r_45, ATerm s_45, ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_45, s_45);
      ;
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      t = SSL_addr(r_45, s_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
  w_56 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_56;
      t = s_97(t);
    }
  else
    {
      ATerm b_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_56 = ATgetFirst((ATermList) t);
          y_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_56;
      t = foldr_2_0(s_97, t_97, t);
      b_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_56, b_57);
      t = t_97(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL;
  if(match_cons(t, sym__2))
    {
      o_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(o_21, p_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_57 = NULL,h_21 = NULL,i_21 = NULL;
  t = times_0_0(t);
  i_21 = t;
  t = SSL_explode_term(i_21);
  if(match_cons(t, sym__2))
    {
      ATerm w_25 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_21;
  t = foldr_2_0(q_10, s_10, t);
  e_57 = t;
  t = SSL_TicksToSeconds(e_57);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL;
  p_57 = t;
  if(match_cons(t, sym__2))
    {
      q_57 = ATgetArgument(t, 0);
      r_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_57;
        if((q_57 != t))
          {
            _fail(t);
          }
        t = p_57;
        ;
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        t = (ATerm) ATmakeAppl(sym__2, q_57, r_57);
        {
          ATerm z_25 = t;
          int b_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_57, r_57);
              ;
              LocalPopChoice(b_26);
            }
          else
            {
              t = z_25;
              t = SSL_gtr(q_57, r_57);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_57, r_57);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_115 (ATerm), ATerm t)
{
  ATerm v_57 = NULL;
  v_57 = t;
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_57 = NULL;
        t = term_q_24;
        t = get_config_0_0(t);
        x_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_57, term_m_24);
        t = geq_0_0(t);
        t = v_57;
        t = x_115(t);
        ;
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        t = v_57;
      }
  }
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL,c_58 = NULL,f_58 = NULL;
  t = run_time_0_0(t);
  z_57 = t;
  t = term_i_24;
  t = whoami_0_0(t);
  a_58 = t;
  t = term_j_24;
  c_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_26), z_57), term_j_26), a_58);
  f_58 = t;
  t = SSL_printnl(c_58, f_58);
  t = (ATerm) ATmakeAppl(sym__2, term_j_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_26), z_57), term_j_26), a_58));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_58 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_24;
  g_58 = t;
  t = SSL_exit(g_58);
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL;
  u_58 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_58;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_58 = ATgetArgument(t, 0);
          {
            ATerm h_22 = NULL,n_20 = NULL;
            t = SSLgetAnnotations(u_58);
            h_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_58);
            n_20 = t;
            t = SSLsetAnnotations(n_20, h_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_58;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_109 (ATerm), ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      t = fetch_1_0(w_10, t);
    }
  t = s_109(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_58 = ATgetFirst((ATermList) t);
      y_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_59 = NULL,d_59 = NULL;
        ATerm x_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_59)), not_null(d_59));
          return(t);
        }
        t = not_null(y_58);
        t = g_0(t);
        if(((c_59 != NULL) && (c_59 != t)))
          _fail(t);
        else
          c_59 = t;
        t = not_null(x_58);
        t = e_0(t);
        if(((d_59 != NULL) && (d_59 != t)))
          _fail(t);
        else
          d_59 = t;
        t = not_null(y_58);
        t = reverse_acc_2_0(e_0, x_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_24;
      t = g_0(t);
    }
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL,p_20 = NULL;
  j_59 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_59);
  h_59 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_59);
  p_20 = t;
  t = SSLsetAnnotations(p_20, h_59);
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_11 (ATerm t)
{
  ATerm l_59 = NULL;
  l_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_59), term_o_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL;
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      t = fetch_1_0(y_10, t);
    }
  t = term_c_27;
  t = echo_0_0(t);
  t = term_i_25;
  f_59 = t;
  t = term_j_25;
  g_59 = t;
  t = term_d_27;
  t = b_8(f_59, g_59, t);
  t = reverse_acc_2_0(_id, e_11, t);
  t = map_1_0(j_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_91 (ATerm), ATerm t)
{
  ATerm i_60 (ATerm t)
  {
    ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL;
    f_60 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_60 = ATgetFirst((ATermList) t);
        h_60 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_27 = t;
      int f_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_22 = NULL,t_22 = NULL,r_20 = NULL;
          t = SSLgetAnnotations(f_60);
          q_22 = t;
          t = g_60;
          t = k_91(t);
          t_22 = t;
          t = (ATerm) ATinsert(CheckATermList(h_60), t_22);
          r_20 = t;
          t = SSLsetAnnotations(r_20, q_22);
          ;
          LocalPopChoice(f_27);
        }
      else
        {
          t = e_27;
          {
            ATerm c_23 = NULL,f_23 = NULL,s_20 = NULL;
            t = SSLgetAnnotations(f_60);
            c_23 = t;
            t = h_60;
            t = i_60(t);
            f_23 = t;
            t = (ATerm) ATinsert(CheckATermList(f_23), g_60);
            s_20 = t;
            t = SSLsetAnnotations(s_20, c_23);
          }
        }
    }
    return(t);
  }
  t = i_60(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL;
  m_60 = t;
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_60;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_27 = ATgetFirst((ATermList) t);
                ATerm j_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_60;
          }
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        t = (ATerm) ATinsert(ATempty, m_60);
      }
    n_60 = t;
    t = term_s_22;
    o_60 = t;
    t = SSL_printnl(o_60, n_60);
    t = m_60;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_25;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm a_8 (ATerm l_52, ATerm m_52, ATerm t)
{
  t = SSL_strcat(l_52, m_52);
  return(t);
}
ATerm debug_1_0 (ATerm g_107 (ATerm), ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL,w_60 = NULL,x_60 = NULL;
  s_60 = t;
  t = g_107(t);
  t_60 = t;
  t = term_j_24;
  w_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_60), t_60);
  x_60 = t;
  t = SSL_printnl(w_60, x_60);
  t = s_60;
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
    }
  return(t);
}
ATerm l_11 (ATerm t)
{
  t = term_m_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_61 = NULL;
      j_61 = t;
      t = SSL_is_string(j_61);
      ;
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
        ATerm p_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_11, t);
            ;
            LocalPopChoice(q_27);
          }
        else
          {
            t = p_27;
            {
              ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL;
              p_61 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_61 = ATgetArgument(t, 0);
                  t = q_61;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_61 = ATgetArgument(t, 0);
                      t = q_61;
                      {
                        ATerm r_27 = t;
                        int s_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(s_27);
                          }
                        else
                          {
                            t = r_27;
                            t = debug_1_0(l_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_61 = NULL,w_61 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_61 = ATgetArgument(t, 0);
                          r_61 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_61;
                      t = eval_config_0_0(t);
                      v_61 = t;
                      t = r_61;
                      t = eval_config_0_0(t);
                      w_61 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_61, w_61);
                      t = a_8(v_61, w_61, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm b_8 (ATerm h_35, ATerm i_35, ATerm t)
{
  t = SSL_table_get(h_35, i_35);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL;
  a_62 = t;
  t = term_h_25;
  b_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_25, a_62);
  t = b_8(b_62, a_62, t);
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_62 = NULL,d_62 = NULL;
        t = eval_config_0_0(t);
        c_62 = t;
        t = term_h_25;
        d_62 = t;
        t = SSL_table_put(d_62, a_62, c_62);
        t = c_62;
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
      }
  }
  return(t);
}
ATerm m_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm g_62 = NULL,h_62 = NULL;
  t = term_v_27;
  g_62 = t;
  t = term_i_24;
  h_62 = t;
  t = term_w_27;
  t = e_8(g_62, h_62, t);
  return(t);
}
ATerm p_11 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm q_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL;
  t = term_v_27;
  k_62 = t;
  t = term_i_24;
  l_62 = t;
  t = term_w_27;
  t = e_8(k_62, l_62, t);
  t = term_y_27;
  i_62 = t;
  t = term_i_24;
  j_62 = t;
  t = term_z_27;
  t = e_8(i_62, j_62, t);
  t = term_a_28;
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_b_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_11, o_11, p_11, t);
      ;
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      t = Option_3_0(q_11, s_11, t_11, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_112 (ATerm), ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,v_62 = NULL,w_62 = NULL,a_21 = NULL;
  if(((q_62 != NULL) && (q_62 != t)))
    _fail(t);
  else
    q_62 = t;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_28;
        t = x_112(t);
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
      }
    t = not_null(q_62);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_62 != NULL) && (s_62 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_62 = ATgetFirst((ATermList) t);
        if(((t_62 != NULL) && (t_62 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          t_62 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(q_62));
    if(((r_62 != NULL) && (r_62 != t)))
      _fail(t);
    else
      r_62 = t;
    t = term_s_25;
    if(((w_62 != NULL) && (w_62 != t)))
      _fail(t);
    else
      w_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_25, not_null(s_62));
    t = e_8(not_null(w_62), not_null(s_62), t);
    t = not_null(t_62);
    {
      ATerm g_63 (ATerm t)
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_28 = t;
            int k_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_62 = NULL;
                z_62 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_62;
                ;
                LocalPopChoice(k_28);
              }
            else
              {
                t = j_28;
                t = x_112(t);
                t = Cons_2_0(_id, g_63, t);
              }
            ;
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
            {
              ATerm c_63 = NULL,d_63 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_63 = ATgetFirst((ATermList) t);
                  d_63 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_63), (ATerm) ATmakeAppl(sym_Undefined_1, c_63));
            }
          }
        return(t);
      }
      t = g_63(t);
      if(((v_62 != NULL) && (v_62 != t)))
        _fail(t);
      else
        v_62 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(v_62)), (ATerm) ATmakeAppl(sym_Program_1, not_null(s_62)));
      if(((a_21 != NULL) && (a_21 != t)))
        _fail(t);
      else
        a_21 = t;
      t = SSLsetAnnotations(not_null(a_21), not_null(r_62));
    }
  }
  return(t);
}
ATerm w_11 (ATerm t)
{
  ATerm x_63 = NULL;
  x_63 = t;
  if(match_string(t, "--help"))
    {
      t = x_63;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_63;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_63;
        }
    }
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm y_63 = NULL,z_63 = NULL;
  t = term_n_26;
  y_63 = t;
  t = term_i_24;
  z_63 = t;
  t = term_l_28;
  t = e_8(y_63, z_63, t);
  t = term_m_28;
  return(t);
}
ATerm z_11 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm a_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_112 (ATerm), ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,v_63 = NULL,w_63 = NULL;
  if(((n_63 != NULL) && (n_63 != t)))
    _fail(t);
  else
    n_63 = t;
  t = term_i_25;
  if(((p_63 != NULL) && (p_63 != t)))
    _fail(t);
  else
    p_63 = t;
  t = term_j_25;
  if(((v_63 != NULL) && (v_63 != t)))
    _fail(t);
  else
    v_63 = t;
  t = (ATerm) ATempty;
  if(((w_63 != NULL) && (w_63 != t)))
    _fail(t);
  else
    w_63 = t;
  t = SSL_table_put(not_null(p_63), not_null(v_63), not_null(w_63));
  t = not_null(n_63);
  {
    ATerm v_11 (ATerm t)
    {
      ATerm o_28 = t;
      int p_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_112(t);
          ;
          LocalPopChoice(p_28);
        }
      else
        {
          t = o_28;
          {
            ATerm q_28 = t;
            int r_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_11, y_11, z_11, t);
                ;
                LocalPopChoice(r_28);
              }
            else
              {
                t = q_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_11, t);
    {
      ATerm s_28 = t;
      int t_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_64 = NULL;
          h_64 = t;
          {
            ATerm u_28 = t;
            int v_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_24 = NULL;
                t = h_64;
                {
                  ATerm w_28 = t;
                  int x_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_n_26;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_28);
                    }
                  else
                    {
                      t = w_28;
                      t = fetch_1_0(a_12, t);
                    }
                  t = h_64;
                  t = default_system_usage_0_0(t);
                  t = term_r_24;
                  n_24 = t;
                  t = SSL_exit(n_24);
                }
                ;
                LocalPopChoice(v_28);
              }
            else
              {
                t = u_28;
                {
                  ATerm y_24 = NULL;
                  t = term_v_27;
                  t = get_config_0_0(t);
                  t = h_64;
                  t = default_system_about_0_0(t);
                  t = term_r_24;
                  y_24 = t;
                  t = SSL_exit(y_24);
                }
              }
          }
          ;
          LocalPopChoice(t_28);
        }
      else
        {
          t = s_28;
          {
            ATerm y_28 = t;
            int z_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL;
                ATerm b_12 (ATerm t)
                {
                  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,c_21 = NULL;
                  n_64 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      m_64 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_64);
                  l_64 = t;
                  t = m_64;
                  if(((l_63 != NULL) && (l_63 != t)))
                    _fail(t);
                  else
                    l_63 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, m_64);
                  c_21 = t;
                  t = SSLsetAnnotations(c_21, l_64);
                  return(t);
                }
                t = fetch_1_0(b_12, t);
                t = term_j_24;
                if(((j_64 != NULL) && (j_64 != t)))
                  _fail(t);
                else
                  j_64 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_63)), term_a_29);
                if(((k_64 != NULL) && (k_64 != t)))
                  _fail(t);
                else
                  k_64 = t;
                t = SSL_printnl(not_null(j_64), not_null(k_64));
                t = (ATerm) ATmakeAppl(sym__2, term_j_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_63)), term_a_29));
                t = default_system_usage_0_0(t);
                t = term_m_24;
                if(((i_64 != NULL) && (i_64 != t)))
                  _fail(t);
                else
                  i_64 = t;
                t = SSL_exit(not_null(i_64));
                ;
                LocalPopChoice(z_28);
              }
            else
              {
                t = y_28;
              }
          }
        }
      if(((m_63 != NULL) && (m_63 != t)))
        _fail(t);
      else
        m_63 = t;
      t = term_i_25;
      if(((o_63 != NULL) && (o_63 != t)))
        _fail(t);
      else
        o_63 = t;
      t = SSL_table_destroy(not_null(o_63));
      t = not_null(m_63);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL;
  t = parse_options_1_0(u_109, t);
  s_64 = t;
  t = term_b_29;
  v_64 = t;
  t = SSL_table_create(v_64);
  t = term_b_29;
  t_64 = t;
  t = term_c_29;
  u_64 = t;
  t = SSL_table_put(t_64, u_64, s_64);
  t = s_64;
  t = w_109(t);
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_109, t);
        ;
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
        {
          ATerm f_29 = t;
          int g_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_109(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_29);
            }
          else
            {
              t = f_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_12 (ATerm t)
{
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            ;
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
            {
              ATerm l_29 = t;
              int m_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(g_12, h_12, l_12, t);
                  ;
                  LocalPopChoice(m_29);
                }
              else
                {
                  t = l_29;
                  {
                    ATerm n_29 = t;
                    int o_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(o_29);
                      }
                    else
                      {
                        t = n_29;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm f_12 (ATerm t)
{
  t = input_1_0(n_12, t);
  return(t);
}
ATerm g_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_12 (ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL;
  t = term_w_22;
  y_64 = t;
  t = term_i_24;
  z_64 = t;
  t = term_p_29;
  t = e_8(y_64, z_64, t);
  t = term_q_29;
  return(t);
}
ATerm l_12 (ATerm t)
{
  t = term_r_29;
  return(t);
}
ATerm n_12 (ATerm t)
{
  t = output_1_0(q_12, t);
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,k_21 = NULL,j_21 = NULL;
  i_65 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_65);
  b_65 = t;
  t = c_65;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_65 = ATgetFirst((ATermList) t);
      f_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_65);
  d_65 = t;
  t = f_65;
  t = Cons_2_0(_id, t_12, t);
  g_65 = t;
  t = (ATerm) ATinsert(CheckATermList(g_65), e_65);
  j_21 = t;
  t = SSLsetAnnotations(j_21, d_65);
  h_65 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_65);
  k_21 = t;
  t = SSLsetAnnotations(k_21, b_65);
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = Cons_2_0(u_12, y_12, t);
  return(t);
}
ATerm u_12 (ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,e_21 = NULL;
  n_65 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      l_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_65);
  k_65 = t;
  t = l_65;
  t = map_1_0(mark_buv_defs_use_def_0_0, t);
  m_65 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, m_65);
  e_21 = t;
  t = SSLsetAnnotations(e_21, k_65);
  return(t);
}
ATerm y_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(d_12, default_usage_0_0, _id, f_12, t);
  return(t);
}
