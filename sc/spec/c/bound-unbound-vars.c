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
ATerm term_i_28;
ATerm term_h_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_p_18;
ATerm term_k_18;
ATerm term_g_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_v_17;
ATerm term_p_17;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
void init_constant_terms (void)
{
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_16);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_18);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym__2, term_f_16, term_e_22);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_g_18);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym__2, term_x_22, term_g_18);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_p_24, term_q_24);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_g_18);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__2, term_n_25, term_g_18);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__2, term_b_24, term_g_18);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__3, term_p_24, term_q_24, (ATerm) ATempty);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm z_94 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm p_96 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm n_67 (ATerm), ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm);
ATerm mark_guardedlchoice_1_0 (ATerm h_75 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm j_67 (ATerm), ATerm k_67 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm g_75 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm h_66 (ATerm), ATerm i_66 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm f_75 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm);
ATerm mark_rec_0_0 (ATerm);
ATerm PrimT_3_0 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm Call_2_0 (ATerm v_66 (ATerm), ATerm w_66 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm x_66 (ATerm), ATerm y_66 (ATerm), ATerm z_66 (ATerm), ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm);
ATerm mark_sdef_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm table_putlist_0_0 (ATerm);
ATerm restore_MarkVar_0_0 (ATerm);
ATerm Let_2_0 (ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm n_75 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm m_75 (ATerm), ATerm);
ATerm scope_2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm d_67 (ATerm), ATerm e_67 (ATerm), ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm Build_1_0 (ATerm b_67 (ATerm), ATerm);
ATerm mark_build_0_0 (ATerm);
ATerm assert_1_0 (ATerm q_75 (ATerm), ATerm);
ATerm Hd_0_0 (ATerm);
ATerm table_lookup_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm s_75 (ATerm), ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm alltd_1_0 (ATerm m_77 (ATerm), ATerm);
ATerm mark_match_0_0 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm l_62 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm q_62 (ATerm), ATerm);
ATerm mark_bound_unbound_vars_0_0 (ATerm);
ATerm _2_0 (ATerm y_60 (ATerm), ATerm z_60 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_80 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_96 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm j_95 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_98 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm v_94 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm);
ATerm crush_2_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_96 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm j_99 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm k_101 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm j_101 (ATerm), ATerm);
ATerm Program_1_0 (ATerm z_74 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm a_75 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm v_79 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm j_100 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm s_87 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm o_101 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_62 (ATerm), ATerm i_62 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm m_101 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm l_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm p_98 (ATerm), ATerm);
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
    ATerm x_411 = NULL;
    ATerm m_0 = NULL;
    if(((m_0 != NULL) && (m_0 != t)))
      _fail(t);
    else
      m_0 = t;
    if(((x_411 != NULL) && (x_411 != t)))
      _fail(t);
    else
      x_411 = t;
    t = not_null(m_0);
    t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATempty, not_null(x_411)));
    t = printnl_0_0(t);
    t = not_null(j_0);
  }
  return(t);
}
ATerm say_1_0 (ATerm z_94 (ATerm), ATerm t)
{
  ATerm n_0 = NULL;
  if(((n_0 != NULL) && (n_0 != t)))
    _fail(t);
  else
    n_0 = t;
  t = z_94(t);
  t = debug_0_0(t);
  t = not_null(n_0);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm p_96 (ATerm), ATerm t)
{
  ATerm p_11 (ATerm t)
  {
    ATerm o_0 = NULL;
    if(((o_0 != NULL) && (o_0 != t)))
      _fail(t);
    else
      o_0 = t;
    {
      ATerm g_437 = NULL;
      ATerm p_0 = NULL;
      if(((p_0 != NULL) && (p_0 != t)))
        _fail(t);
      else
        p_0 = t;
      t = term_f_16;
      t = get_config_0_0(t);
      if(((g_437 != NULL) && (g_437 != t)))
        _fail(t);
      else
        g_437 = t;
      t = not_null(p_0);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_437), term_g_16);
      t = geq_0_0(t);
      t = not_null(o_0);
    }
    t = p_96(t);
    return(t);
  }
  t = try_1_0(p_11, t);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm n_67 (ATerm), ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm t)
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
  t = n_67(t);
  if(((u_0 != NULL) && (u_0 != t)))
    _fail(t);
  else
    u_0 = t;
  t = not_null(r_0);
  t = o_67(t);
  if(((v_0 != NULL) && (v_0 != t)))
    _fail(t);
  else
    v_0 = t;
  t = not_null(s_0);
  t = p_67(t);
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
ATerm mark_guardedlchoice_1_0 (ATerm h_75 (ATerm), ATerm t)
{
  t = GuardedLChoice_3_0(_id, _id, _id, t);
  {
    ATerm q_11 (ATerm t)
    {
      t = GuardedLChoice_3_0(h_75, _id, _id, t);
      t = GuardedLChoice_3_0(_id, h_75, _id, t);
      return(t);
    }
    ATerm r_11 (ATerm t)
    {
      t = GuardedLChoice_3_0(_id, _id, h_75, t);
      return(t);
    }
    t = abstract_choice_2_0(q_11, r_11, t);
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm j_67 (ATerm), ATerm k_67 (ATerm), ATerm t)
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
  t = j_67(t);
  if(((e_1 != NULL) && (e_1 != t)))
    _fail(t);
  else
    e_1 = t;
  t = not_null(c_1);
  t = k_67(t);
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
ATerm mark_lchoice_1_0 (ATerm g_75 (ATerm), ATerm t)
{
  t = LChoice_2_0(_id, _id, t);
  {
    ATerm s_11 (ATerm t)
    {
      t = LChoice_2_0(g_75, _id, t);
      return(t);
    }
    ATerm t_11 (ATerm t)
    {
      t = LChoice_2_0(_id, g_75, t);
      return(t);
    }
    t = abstract_choice_2_0(s_11, t_11, t);
  }
  return(t);
}
ATerm Choice_2_0 (ATerm h_66 (ATerm), ATerm i_66 (ATerm), ATerm t)
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
  t = h_66(t);
  if(((n_1 != NULL) && (n_1 != t)))
    _fail(t);
  else
    n_1 = t;
  t = not_null(l_1);
  t = i_66(t);
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
ATerm abstract_choice_2_0 (ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL;
  ATerm t_1 = NULL;
  if(((t_1 != NULL) && (t_1 != t)))
    _fail(t);
  else
    t_1 = t;
  t = save_MarkVar_0_0(t);
  if(((e_27 != NULL) && (e_27 != t)))
    _fail(t);
  else
    e_27 = t;
  t = not_null(t_1);
  t = i_75(t);
  {
    ATerm u_1 = NULL;
    if(((u_1 != NULL) && (u_1 != t)))
      _fail(t);
    else
      u_1 = t;
    t = save_MarkVar_0_0(t);
    if(((f_27 != NULL) && (f_27 != t)))
      _fail(t);
    else
      f_27 = t;
    t = not_null(e_27);
    t = restore_MarkVar_0_0(t);
    t = not_null(u_1);
    t = j_75(t);
    {
      ATerm v_1 = NULL;
      if(((v_1 != NULL) && (v_1 != t)))
        _fail(t);
      else
        v_1 = t;
      t = not_null(f_27);
      t = isect_MarkVar_0_0(t);
      t = not_null(v_1);
    }
  }
  return(t);
}
ATerm mark_choice_1_0 (ATerm f_75 (ATerm), ATerm t)
{
  t = Choice_2_0(_id, _id, t);
  {
    ATerm u_11 (ATerm t)
    {
      t = Choice_2_0(f_75, _id, t);
      return(t);
    }
    ATerm v_11 (ATerm t)
    {
      t = Choice_2_0(_id, f_75, t);
      return(t);
    }
    t = abstract_choice_2_0(u_11, v_11, t);
  }
  return(t);
}
ATerm Rec_2_0 (ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm t)
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
  t = q_67(t);
  if(((z_1 != NULL) && (z_1 != t)))
    _fail(t);
  else
    z_1 = t;
  t = not_null(x_1);
  t = r_67(t);
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
  ATerm d_27 = NULL;
  if(match_cons(t, sym_Rec_2))
    {
      ATerm h_16 = ATgetArgument(t, 0);
      ATerm i_16 = ATgetArgument(t, 1);
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
    if(((d_27 != NULL) && (d_27 != t)))
      _fail(t);
    else
      d_27 = t;
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
        t = not_null(d_27);
        t = isect_MarkVar_0_0(t);
        t = not_null(h_2);
        t = Rec_2_0(_id, mark_buv_0_0, t);
      }
    }
  }
  return(t);
}
ATerm PrimT_3_0 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm t)
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
  t = z_67(t);
  if(((m_2 != NULL) && (m_2 != t)))
    _fail(t);
  else
    m_2 = t;
  t = not_null(j_2);
  t = a_68(t);
  if(((n_2 != NULL) && (n_2 != t)))
    _fail(t);
  else
    n_2 = t;
  t = not_null(k_2);
  t = b_68(t);
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
  ATerm w_26 = NULL;
  t = PrimT_3_0(_id, _id, _id, t);
  {
    ATerm t_2 = NULL;
    if(((t_2 != NULL) && (t_2 != t)))
      _fail(t);
    else
      t_2 = t;
    t = save_MarkVar_0_0(t);
    if(((w_26 != NULL) && (w_26 != t)))
      _fail(t);
    else
      w_26 = t;
    t = not_null(t_2);
    {
      ATerm w_11 (ATerm t)
      {
        ATerm x_11 (ATerm t)
        {
          t = alltd_1_0(MarkVar_0_0, t);
          return(t);
        }
        t = map_1_0(x_11, t);
        return(t);
      }
      t = PrimT_3_0(_id, _id, w_11, t);
      t = PrimT_3_0(_id, mark_buv_0_0, _id, t);
      {
        ATerm u_2 = NULL;
        if(((u_2 != NULL) && (u_2 != t)))
          _fail(t);
        else
          u_2 = t;
        t = not_null(w_26);
        t = isect_MarkVar_0_0(t);
        t = not_null(u_2);
      }
    }
  }
  return(t);
}
ATerm Call_2_0 (ATerm v_66 (ATerm), ATerm w_66 (ATerm), ATerm t)
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
  t = v_66(t);
  if(((y_2 != NULL) && (y_2 != t)))
    _fail(t);
  else
    y_2 = t;
  t = not_null(w_2);
  t = w_66(t);
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
ATerm CallT_3_0 (ATerm x_66 (ATerm), ATerm y_66 (ATerm), ATerm z_66 (ATerm), ATerm t)
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
  t = x_66(t);
  if(((i_3 != NULL) && (i_3 != t)))
    _fail(t);
  else
    i_3 = t;
  t = not_null(f_3);
  t = y_66(t);
  if(((j_3 != NULL) && (j_3 != t)))
    _fail(t);
  else
    j_3 = t;
  t = not_null(g_3);
  t = z_66(t);
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
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_26 = NULL;
      t = CallT_3_0(_id, _id, _id, t);
      {
        ATerm p_3 = NULL;
        if(((p_3 != NULL) && (p_3 != t)))
          _fail(t);
        else
          p_3 = t;
        t = save_MarkVar_0_0(t);
        if(((v_26 != NULL) && (v_26 != t)))
          _fail(t);
        else
          v_26 = t;
        t = not_null(p_3);
        {
          ATerm y_11 (ATerm t)
          {
            ATerm z_11 (ATerm t)
            {
              t = alltd_1_0(MarkVar_0_0, t);
              return(t);
            }
            t = map_1_0(z_11, t);
            return(t);
          }
          t = CallT_3_0(_id, _id, y_11, t);
          t = CallT_3_0(_id, mark_buv_0_0, _id, t);
          {
            ATerm q_3 = NULL;
            if(((q_3 != NULL) && (q_3 != t)))
              _fail(t);
            else
              q_3 = t;
            t = not_null(v_26);
            t = isect_MarkVar_0_0(t);
            t = not_null(q_3);
          }
        }
      }
      ;
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
      {
        ATerm u_26 = NULL;
        t = Call_2_0(_id, _id, t);
        {
          ATerm r_3 = NULL;
          if(((r_3 != NULL) && (r_3 != t)))
            _fail(t);
          else
            r_3 = t;
          t = save_MarkVar_0_0(t);
          if(((u_26 != NULL) && (u_26 != t)))
            _fail(t);
          else
            u_26 = t;
          t = not_null(r_3);
          t = Call_2_0(_id, mark_buv_0_0, t);
          {
            ATerm s_3 = NULL;
            if(((s_3 != NULL) && (s_3 != t)))
              _fail(t);
            else
              s_3 = t;
            t = not_null(u_26);
            t = isect_MarkVar_0_0(t);
            t = not_null(s_3);
          }
        }
      }
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm t)
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
  t = l_69(t);
  if(((y_3 != NULL) && (y_3 != t)))
    _fail(t);
  else
    y_3 = t;
  t = not_null(u_3);
  t = m_69(t);
  if(((z_3 != NULL) && (z_3 != t)))
    _fail(t);
  else
    z_3 = t;
  t = not_null(v_3);
  t = n_69(t);
  if(((a_4 != NULL) && (a_4 != t)))
    _fail(t);
  else
    a_4 = t;
  t = not_null(w_3);
  t = o_69(t);
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
  ATerm z_26 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm l_16 = ATgetArgument(t, 0);
      ATerm m_16 = ATgetArgument(t, 1);
      if(((z_26 != NULL) && (z_26 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        z_26 = ATgetArgument(t, 2);
      {
        ATerm n_16 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm a_12 (ATerm t)
    {
      ATerm b_12 (ATerm t)
      {
        t = term_o_16;
        return(t);
      }
      ATerm c_12 (ATerm t)
      {
        ATerm g_4 = NULL;
        if(((g_4 != NULL) && (g_4 != t)))
          _fail(t);
        else
          g_4 = t;
        t = not_null(z_26);
        {
          ATerm d_12 (ATerm t)
          {
            ATerm a_27 = NULL;
            if(match_cons(t, sym_VarDec_2))
              {
                if(((a_27 != NULL) && (a_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_27 = ATgetArgument(t, 0);
                {
                  ATerm p_16 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            {
              ATerm h_4 = NULL;
              if(((h_4 != NULL) && (h_4 != t)))
                _fail(t);
              else
                h_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_27)), term_r_16);
              {
                ATerm e_12 (ATerm t)
                {
                  t = term_o_16;
                  return(t);
                }
                t = assert_1_0(e_12, t);
                t = not_null(h_4);
              }
            }
            return(t);
          }
          t = map_1_0(d_12, t);
          t = not_null(g_4);
        }
        t = mark_buv_0_0(t);
        return(t);
      }
      t = scope_2_0(b_12, c_12, t);
      return(t);
    }
    t = SDefT_4_0(_id, _id, _id, a_12, t);
  }
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm t_26 = NULL;
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_All_1))
        {
          ATerm u_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      ;
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_One_1))
              {
                ATerm x_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            ;
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            {
              ATerm y_16 = t;
              int z_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Some_1))
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
                  if(match_cons(t, sym_Thread_1))
                    {
                      ATerm b_17 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                }
            }
          }
      }
    }
  {
    ATerm i_4 = NULL;
    if(((i_4 != NULL) && (i_4 != t)))
      _fail(t);
    else
      i_4 = t;
    t = save_MarkVar_0_0(t);
    if(((t_26 != NULL) && (t_26 != t)))
      _fail(t);
    else
      t_26 = t;
    t = not_null(i_4);
    t = SRTS_one(mark_buv_0_0, t);
    {
      ATerm j_4 = NULL;
      if(((j_4 != NULL) && (j_4 != t)))
        _fail(t);
      else
        j_4 = t;
      t = not_null(t_26);
      t = isect_MarkVar_0_0(t);
      t = not_null(j_4);
    }
  }
  return(t);
}
ATerm table_putlist_0_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_28 != NULL) && (v_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_28 = ATgetArgument(t, 0);
      if(((u_28 != NULL) && (u_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(u_28);
  {
    ATerm f_12 (ATerm t)
    {
      ATerm w_28 = NULL,x_28 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((w_28 != NULL) && (w_28 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            w_28 = ATgetArgument(t, 0);
          if(((x_28 != NULL) && (x_28 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            x_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(v_28), not_null(w_28), not_null(x_28));
      t = table_put_0_0(t);
      return(t);
    }
    t = map_1_0(f_12, t);
  }
  return(t);
}
ATerm restore_MarkVar_0_0 (ATerm t)
{
  ATerm i_26 = NULL;
  if(((i_26 != NULL) && (i_26 != t)))
    _fail(t);
  else
    i_26 = t;
  {
    ATerm k_4 = NULL;
    if(((k_4 != NULL) && (k_4 != t)))
      _fail(t);
    else
      k_4 = t;
    t = term_o_16;
    t = table_destroy_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, term_o_16, not_null(i_26));
    t = table_putlist_0_0(t);
    t = not_null(k_4);
  }
  return(t);
}
ATerm Let_2_0 (ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm t)
{
  ATerm n_4 = NULL,l_4 = NULL,m_4 = NULL,o_4 = NULL,p_4 = NULL;
  ATerm q_4 = NULL;
  if(((q_4 != NULL) && (q_4 != t)))
    _fail(t);
  else
    q_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      if(((l_4 != NULL) && (l_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_4 = ATgetArgument(t, 0);
      if(((m_4 != NULL) && (m_4 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_4 = NULL;
    if(((s_4 != NULL) && (s_4 != t)))
      _fail(t);
    else
      s_4 = t;
    t = SSLgetAnnotations(not_null(q_4));
    if(((n_4 != NULL) && (n_4 != t)))
      _fail(t);
    else
      n_4 = t;
    t = not_null(s_4);
  }
  t = not_null(l_4);
  t = t_66(t);
  if(((o_4 != NULL) && (o_4 != t)))
    _fail(t);
  else
    o_4 = t;
  t = not_null(m_4);
  t = u_66(t);
  if(((p_4 != NULL) && (p_4 != t)))
    _fail(t);
  else
    p_4 = t;
  {
    ATerm r_4 = NULL;
    ATerm t_4 = NULL;
    if(((t_4 != NULL) && (t_4 != t)))
      _fail(t);
    else
      t_4 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(o_4), not_null(p_4)), not_null(n_4));
    if(((r_4 != NULL) && (r_4 != t)))
      _fail(t);
    else
      r_4 = t;
    t = not_null(t_4);
    t = not_null(r_4);
  }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm n_29 = NULL;
  if(((n_29 != NULL) && (n_29 != t)))
    _fail(t);
  else
    n_29 = t;
  t = SSL_table_keys(not_null(n_29));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm s_28 = NULL;
  if(((s_28 != NULL) && (s_28 != t)))
    _fail(t);
  else
    s_28 = t;
  t = table_keys_0_0(t);
  {
    ATerm g_12 (ATerm t)
    {
      ATerm t_28 = NULL;
      if(((t_28 != NULL) && (t_28 != t)))
        _fail(t);
      else
        t_28 = t;
      {
        ATerm j_152 = NULL;
        ATerm u_4 = NULL;
        if(((u_4 != NULL) && (u_4 != t)))
          _fail(t);
        else
          u_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_28), not_null(t_28));
        t = table_get_0_0(t);
        if(((j_152 != NULL) && (j_152 != t)))
          _fail(t);
        else
          j_152 = t;
        t = not_null(u_4);
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_28), not_null(j_152));
      }
      return(t);
    }
    t = map_1_0(g_12, t);
  }
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_o_16;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm h_12 (ATerm t)
  {
    ATerm i_12 (ATerm t)
    {
      ATerm c_17 = t;
      int d_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm e_17 = ATgetArgument(t, 0);
              if(!(match_cons(e_17, sym_Scopes_0)))
                _fail(t);
              {
                ATerm f_17 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          ;
          LocalPopChoice(d_17);
        }
      else
        {
          t = c_17;
          {
            ATerm j_26 = NULL;
            if(match_cons(t, sym__2))
              {
                if(((j_26 != NULL) && (j_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_26 = ATgetArgument(t, 0);
                {
                  ATerm g_17 = ATgetArgument(t, 1);
                  if(((ATgetType(g_17) == AT_LIST) && !(ATisEmpty(g_17))))
                    {
                      ATerm h_17 = ATgetFirst((ATermList) g_17);
                      if(match_cons(h_17, sym_Defined_1))
                        {
                          ATerm j_17 = ATgetArgument(h_17, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm i_17 = (ATerm) ATgetNext((ATermList) g_17);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            {
              ATerm k_17 = t;
              int l_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_4 = NULL;
                  if(((v_4 != NULL) && (v_4 != t)))
                    _fail(t);
                  else
                    v_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_o_16, not_null(j_26));
                  t = table_get_0_0(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm m_17 = ATgetFirst((ATermList) t);
                      if(match_cons(m_17, sym_Defined_1))
                        {
                          ATerm o_17 = ATgetArgument(m_17, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm n_17 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = not_null(v_4);
                  ;
                  LocalPopChoice(l_17);
                }
              else
                {
                  t = k_17;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_26), (ATerm) ATinsert(ATempty, term_p_17));
                }
            }
          }
        }
      return(t);
    }
    t = try_1_0(i_12, t);
    return(t);
  }
  t = map_1_0(h_12, t);
  t = restore_MarkVar_0_0(t);
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL;
  t = Let_2_0(_id, _id, t);
  {
    ATerm w_4 = NULL;
    if(((w_4 != NULL) && (w_4 != t)))
      _fail(t);
    else
      w_4 = t;
    {
      ATerm x_4 = NULL;
      if(((x_4 != NULL) && (x_4 != t)))
        _fail(t);
      else
        x_4 = t;
      t = save_MarkVar_0_0(t);
      if(((x_26 != NULL) && (x_26 != t)))
        _fail(t);
      else
        x_26 = t;
      t = not_null(x_4);
      {
        ATerm j_12 (ATerm t)
        {
          ATerm l_12 (ATerm t)
          {
            t = mark_buv_0_0(t);
            {
              ATerm y_4 = NULL;
              if(((y_4 != NULL) && (y_4 != t)))
                _fail(t);
              else
                y_4 = t;
              t = not_null(x_26);
              t = isect_MarkVar_0_0(t);
              t = not_null(y_4);
            }
            return(t);
          }
          t = map_1_0(l_12, t);
          return(t);
        }
        ATerm k_12 (ATerm t)
        {
          t = mark_buv_0_0(t);
          {
            ATerm z_4 = NULL;
            if(((z_4 != NULL) && (z_4 != t)))
              _fail(t);
            else
              z_4 = t;
            t = not_null(x_26);
            t = isect_MarkVar_0_0(t);
            t = not_null(z_4);
          }
          return(t);
        }
        t = Let_2_0(j_12, k_12, t);
        t = not_null(w_4);
      }
    }
    {
      ATerm a_5 = NULL;
      if(((a_5 != NULL) && (a_5 != t)))
        _fail(t);
      else
        a_5 = t;
      t = save_MarkVar_0_0(t);
      if(((y_26 != NULL) && (y_26 != t)))
        _fail(t);
      else
        y_26 = t;
      t = not_null(a_5);
      {
        ATerm m_12 (ATerm t)
        {
          ATerm o_12 (ATerm t)
          {
            ATerm b_5 = NULL;
            if(((b_5 != NULL) && (b_5 != t)))
              _fail(t);
            else
              b_5 = t;
            t = not_null(y_26);
            t = restore_MarkVar_0_0(t);
            t = not_null(b_5);
            t = mark_buv_0_0(t);
            return(t);
          }
          t = map_1_0(o_12, t);
          return(t);
        }
        ATerm n_12 (ATerm t)
        {
          ATerm c_5 = NULL;
          if(((c_5 != NULL) && (c_5 != t)))
            _fail(t);
          else
            c_5 = t;
          t = not_null(y_26);
          t = restore_MarkVar_0_0(t);
          t = not_null(c_5);
          t = mark_buv_0_0(t);
          return(t);
        }
        t = Let_2_0(m_12, n_12, t);
      }
    }
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm w_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_17 = ATgetFirst((ATermList) t);
      if(((w_31 != NULL) && (w_31 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        w_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(w_31);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_27 != NULL) && (x_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_27 = ATgetArgument(t, 0);
      if(((y_27 != NULL) && (y_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_5 = NULL;
    if(((d_5 != NULL) && (d_5 != t)))
      _fail(t);
    else
      d_5 = t;
    {
      ATerm b_145 = NULL;
      ATerm e_5 = NULL;
      if(((e_5 != NULL) && (e_5 != t)))
        _fail(t);
      else
        e_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_27), not_null(y_27));
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = table_get_0_0(t);
            t = Tl_0_0(t);
            ;
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            t = (ATerm) ATempty;
          }
        if(((b_145 != NULL) && (b_145 != t)))
          _fail(t);
        else
          b_145 = t;
        t = not_null(e_5);
      }
      t = (ATerm) ATmakeAppl(sym__3, not_null(x_27), not_null(y_27), not_null(b_145));
      t = table_put_0_0(t);
      t = not_null(d_5);
    }
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm n_75 (ATerm), ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,f_5 = NULL;
  if(((f_5 != NULL) && (f_5 != t)))
    _fail(t);
  else
    f_5 = t;
  t = n_75(t);
  if(((j_27 != NULL) && (j_27 != t)))
    _fail(t);
  else
    j_27 = t;
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_27), term_v_17);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_27 != NULL) && (i_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_27 = ATgetFirst((ATermList) t);
        if(((h_27 != NULL) && (h_27 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          h_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(j_27), term_v_17, not_null(h_27));
    t = table_put_0_0(t);
    t = not_null(i_27);
    {
      ATerm p_12 (ATerm t)
      {
        ATerm k_27 = NULL;
        if(((k_27 != NULL) && (k_27 != t)))
          _fail(t);
        else
          k_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_27), not_null(k_27));
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(p_12, t);
      t = not_null(f_5);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_88(t);
      t = i_88(t);
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      t = i_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_75 (ATerm), ATerm t)
{
  ATerm g_27 = NULL,g_5 = NULL;
  if(((g_5 != NULL) && (g_5 != t)))
    _fail(t);
  else
    g_5 = t;
  t = m_75(t);
  if(((g_27 != NULL) && (g_27 != t)))
    _fail(t);
  else
    g_27 = t;
  {
    ATerm k_137 = NULL;
    ATerm h_5 = NULL;
    if(((h_5 != NULL) && (h_5 != t)))
      _fail(t);
    else
      h_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_27), term_v_17);
    {
      ATerm y_17 = t;
      int z_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = table_get_0_0(t);
          ;
          LocalPopChoice(z_17);
        }
      else
        {
          t = y_17;
          t = (ATerm) ATempty;
        }
      if(((k_137 != NULL) && (k_137 != t)))
        _fail(t);
      else
        k_137 = t;
      t = not_null(h_5);
    }
    t = (ATerm) ATmakeAppl(sym__3, not_null(g_27), term_v_17, (ATerm) ATinsert(CheckATermList(not_null(k_137)), (ATerm) ATempty));
    t = table_put_0_0(t);
    t = not_null(g_5);
  }
  return(t);
}
ATerm scope_2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm t)
{
  t = begin_scope_1_0(o_75, t);
  {
    ATerm q_12 (ATerm t)
    {
      t = end_scope_1_0(o_75, t);
      return(t);
    }
    t = restore_always_2_0(p_75, q_12, t);
  }
  return(t);
}
ATerm Scope_2_0 (ATerm d_67 (ATerm), ATerm e_67 (ATerm), ATerm t)
{
  ATerm k_5 = NULL,i_5 = NULL,j_5 = NULL,l_5 = NULL,m_5 = NULL;
  ATerm n_5 = NULL;
  if(((n_5 != NULL) && (n_5 != t)))
    _fail(t);
  else
    n_5 = t;
  if(match_cons(t, sym_Scope_2))
    {
      if(((i_5 != NULL) && (i_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_5 = ATgetArgument(t, 0);
      if(((j_5 != NULL) && (j_5 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_5 = NULL;
    if(((p_5 != NULL) && (p_5 != t)))
      _fail(t);
    else
      p_5 = t;
    t = SSLgetAnnotations(not_null(n_5));
    if(((k_5 != NULL) && (k_5 != t)))
      _fail(t);
    else
      k_5 = t;
    t = not_null(p_5);
  }
  t = not_null(i_5);
  t = d_67(t);
  if(((l_5 != NULL) && (l_5 != t)))
    _fail(t);
  else
    l_5 = t;
  t = not_null(j_5);
  t = e_67(t);
  if(((m_5 != NULL) && (m_5 != t)))
    _fail(t);
  else
    m_5 = t;
  {
    ATerm o_5 = NULL;
    ATerm q_5 = NULL;
    if(((q_5 != NULL) && (q_5 != t)))
      _fail(t);
    else
      q_5 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(l_5), not_null(m_5)), not_null(k_5));
    if(((o_5 != NULL) && (o_5 != t)))
      _fail(t);
    else
      o_5 = t;
    t = not_null(q_5);
    t = not_null(o_5);
  }
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm k_26 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      if(((k_26 != NULL) && (k_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_26 = ATgetArgument(t, 0);
      {
        ATerm a_18 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm r_12 (ATerm t)
    {
      ATerm s_12 (ATerm t)
      {
        t = term_o_16;
        return(t);
      }
      ATerm t_12 (ATerm t)
      {
        ATerm r_5 = NULL;
        if(((r_5 != NULL) && (r_5 != t)))
          _fail(t);
        else
          r_5 = t;
        t = not_null(k_26);
        {
          ATerm u_12 (ATerm t)
          {
            ATerm l_26 = NULL;
            if(((l_26 != NULL) && (l_26 != t)))
              _fail(t);
            else
              l_26 = t;
            {
              ATerm s_5 = NULL;
              if(((s_5 != NULL) && (s_5 != t)))
                _fail(t);
              else
                s_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_26)), term_c_18);
              {
                ATerm v_12 (ATerm t)
                {
                  t = term_o_16;
                  return(t);
                }
                t = assert_1_0(v_12, t);
                t = not_null(s_5);
              }
            }
            return(t);
          }
          t = map_1_0(u_12, t);
          t = not_null(r_5);
        }
        t = mark_buv_0_0(t);
        return(t);
      }
      t = scope_2_0(s_12, t_12, t);
      return(t);
    }
    t = Scope_2_0(_id, r_12, t);
  }
  return(t);
}
ATerm Build_1_0 (ATerm b_67 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,t_5 = NULL,v_5 = NULL;
  ATerm w_5 = NULL;
  if(((w_5 != NULL) && (w_5 != t)))
    _fail(t);
  else
    w_5 = t;
  if(match_cons(t, sym_Build_1))
    {
      if(((t_5 != NULL) && (t_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_5 = NULL;
    if(((y_5 != NULL) && (y_5 != t)))
      _fail(t);
    else
      y_5 = t;
    t = SSLgetAnnotations(not_null(w_5));
    if(((u_5 != NULL) && (u_5 != t)))
      _fail(t);
    else
      u_5 = t;
    t = not_null(y_5);
  }
  t = not_null(t_5);
  t = b_67(t);
  if(((v_5 != NULL) && (v_5 != t)))
    _fail(t);
  else
    v_5 = t;
  {
    ATerm x_5 = NULL;
    ATerm z_5 = NULL;
    if(((z_5 != NULL) && (z_5 != t)))
      _fail(t);
    else
      z_5 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(v_5)), not_null(u_5));
    if(((x_5 != NULL) && (x_5 != t)))
      _fail(t);
    else
      x_5 = t;
    t = not_null(z_5);
    t = not_null(x_5);
  }
  return(t);
}
ATerm mark_build_0_0 (ATerm t)
{
  ATerm w_12 (ATerm t)
  {
    t = alltd_1_0(MarkVar_0_0, t);
    return(t);
  }
  t = Build_1_0(w_12, t);
  return(t);
}
ATerm assert_1_0 (ATerm q_75 (ATerm), ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_27 != NULL) && (n_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_27 = ATgetArgument(t, 0);
      if(((l_27 != NULL) && (l_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_6 = NULL;
    if(((a_6 != NULL) && (a_6 != t)))
      _fail(t);
    else
      a_6 = t;
    t = q_75(t);
    if(((m_27 != NULL) && (m_27 != t)))
      _fail(t);
    else
      m_27 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(m_27), not_null(n_27), not_null(l_27));
    t = table_push_0_0(t);
    {
      ATerm d_18 = t;
      int e_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_27), term_v_17);
          t = table_get_0_0(t);
          ;
          LocalPopChoice(e_18);
        }
      else
        {
          t = d_18;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((o_27 != NULL) && (o_27 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            o_27 = ATgetFirst((ATermList) t);
          if(((p_27 != NULL) && (p_27 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(m_27), term_v_17, (ATerm) ATinsert(CheckATermList(not_null(p_27)), (ATerm) ATinsert(CheckATermList(not_null(o_27)), not_null(n_27))));
      t = table_put_0_0(t);
      t = not_null(a_6);
    }
  }
  return(t);
}
ATerm Hd_0_0 (ATerm t)
{
  ATerm v_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((v_31 != NULL) && (v_31 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        v_31 = ATgetFirst((ATermList) t);
      {
        ATerm f_18 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(v_31);
  return(t);
}
ATerm table_lookup_0_0 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_28 != NULL) && (d_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_28 = ATgetArgument(t, 0);
      if(((e_28 != NULL) && (e_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = table_get_0_0(t);
  t = Hd_0_0(t);
  return(t);
}
ATerm rewrite_1_0 (ATerm s_75 (ATerm), ATerm t)
{
  ATerm t_27 = NULL;
  if(((t_27 != NULL) && (t_27 != t)))
    _fail(t);
  else
    t_27 = t;
  {
    ATerm l_141 = NULL;
    ATerm b_6 = NULL;
    if(((b_6 != NULL) && (b_6 != t)))
      _fail(t);
    else
      b_6 = t;
    t = term_g_18;
    t = s_75(t);
    if(((l_141 != NULL) && (l_141 != t)))
      _fail(t);
    else
      l_141 = t;
    t = not_null(b_6);
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_141), not_null(t_27));
    t = table_lookup_0_0(t);
  }
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_27 = NULL,c_27 = NULL;
      if(((c_27 != NULL) && (c_27 != t)))
        _fail(t);
      else
        c_27 = t;
      if(match_cons(t, sym_Var_1))
        {
          if(((b_27 != NULL) && (b_27 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            b_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      {
        ATerm c_6 = NULL;
        if(((c_6 != NULL) && (c_6 != t)))
          _fail(t);
        else
          c_6 = t;
        t = not_null(c_27);
        {
          ATerm x_12 (ATerm t)
          {
            t = term_o_16;
            return(t);
          }
          t = rewrite_1_0(x_12, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm j_18 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_18) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = not_null(c_6);
        }
        {
          ATerm t_134 = NULL;
          ATerm d_6 = NULL;
          if(((d_6 != NULL) && (d_6 != t)))
            _fail(t);
          else
            d_6 = t;
          {
            ATerm u_134 = NULL,v_134 = NULL;
            ATerm e_6 = NULL;
            if(((e_6 != NULL) && (e_6 != t)))
              _fail(t);
            else
              e_6 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_27));
            if(((u_134 != NULL) && (u_134 != t)))
              _fail(t);
            else
              u_134 = t;
            t = not_null(e_6);
            {
              ATerm f_6 = NULL;
              if(((f_6 != NULL) && (f_6 != t)))
                _fail(t);
              else
                f_6 = t;
              t = (ATerm) ATinsert(ATempty, term_k_18);
              if(((v_134 != NULL) && (v_134 != t)))
                _fail(t);
              else
                v_134 = t;
              t = not_null(f_6);
              t = SSLsetAnnotations(not_null(u_134), not_null(v_134));
            }
            if(((t_134 != NULL) && (t_134 != t)))
              _fail(t);
            else
              t_134 = t;
            t = not_null(d_6);
          }
          t = not_null(t_134);
        }
      }
      ;
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_26 = NULL,s_26 = NULL;
            if(((s_26 != NULL) && (s_26 != t)))
              _fail(t);
            else
              s_26 = t;
            if(match_cons(t, sym_Var_1))
              {
                if(((r_26 != NULL) && (r_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            {
              ATerm g_6 = NULL;
              if(((g_6 != NULL) && (g_6 != t)))
                _fail(t);
              else
                g_6 = t;
              t = not_null(s_26);
              {
                ATerm y_12 (ATerm t)
                {
                  t = term_o_16;
                  return(t);
                }
                t = rewrite_1_0(y_12, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm n_18 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_18) != ATmakeSymbol("f_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = not_null(g_6);
              }
              {
                ATerm t_128 = NULL;
                ATerm h_6 = NULL;
                if(((h_6 != NULL) && (h_6 != t)))
                  _fail(t);
                else
                  h_6 = t;
                {
                  ATerm u_128 = NULL,v_128 = NULL;
                  ATerm i_6 = NULL;
                  if(((i_6 != NULL) && (i_6 != t)))
                    _fail(t);
                  else
                    i_6 = t;
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_26));
                  if(((u_128 != NULL) && (u_128 != t)))
                    _fail(t);
                  else
                    u_128 = t;
                  t = not_null(i_6);
                  {
                    ATerm j_6 = NULL;
                    if(((j_6 != NULL) && (j_6 != t)))
                      _fail(t);
                    else
                      j_6 = t;
                    t = (ATerm) ATinsert(ATempty, term_k_18);
                    if(((v_128 != NULL) && (v_128 != t)))
                      _fail(t);
                    else
                      v_128 = t;
                    t = not_null(j_6);
                    t = SSLsetAnnotations(not_null(u_128), not_null(v_128));
                  }
                  if(((t_128 != NULL) && (t_128 != t)))
                    _fail(t);
                  else
                    t_128 = t;
                  t = not_null(h_6);
                }
                t = not_null(t_128);
              }
            }
            ;
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            {
              ATerm m_26 = NULL,n_26 = NULL;
              if(((n_26 != NULL) && (n_26 != t)))
                _fail(t);
              else
                n_26 = t;
              if(match_cons(t, sym_Var_1))
                {
                  if(((m_26 != NULL) && (m_26 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    m_26 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              {
                ATerm k_6 = NULL;
                if(((k_6 != NULL) && (k_6 != t)))
                  _fail(t);
                else
                  k_6 = t;
                t = not_null(n_26);
                {
                  ATerm z_12 (ATerm t)
                  {
                    t = term_o_16;
                    return(t);
                  }
                  t = rewrite_1_0(z_12, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm o_18 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) o_18) != ATmakeSymbol("b_0", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = not_null(k_6);
                }
                {
                  ATerm s_125 = NULL;
                  ATerm l_6 = NULL;
                  if(((l_6 != NULL) && (l_6 != t)))
                    _fail(t);
                  else
                    l_6 = t;
                  {
                    ATerm t_125 = NULL,u_125 = NULL;
                    ATerm m_6 = NULL;
                    if(((m_6 != NULL) && (m_6 != t)))
                      _fail(t);
                    else
                      m_6 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_26));
                    if(((t_125 != NULL) && (t_125 != t)))
                      _fail(t);
                    else
                      t_125 = t;
                    t = not_null(m_6);
                    {
                      ATerm n_6 = NULL;
                      if(((n_6 != NULL) && (n_6 != t)))
                        _fail(t);
                      else
                        n_6 = t;
                      t = (ATerm) ATinsert(ATempty, term_p_18);
                      if(((u_125 != NULL) && (u_125 != t)))
                        _fail(t);
                      else
                        u_125 = t;
                      t = not_null(n_6);
                      t = SSLsetAnnotations(not_null(t_125), not_null(u_125));
                    }
                    if(((s_125 != NULL) && (s_125 != t)))
                      _fail(t);
                    else
                      s_125 = t;
                    t = not_null(l_6);
                  }
                  t = not_null(s_125);
                }
              }
            }
          }
      }
    }
  return(t);
}
ATerm alltd_1_0 (ATerm m_77 (ATerm), ATerm t)
{
  ATerm n_77 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_77(t);
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        t = SRTS_all(n_77, t);
      }
    return(t);
  }
  t = n_77(t);
  return(t);
}
ATerm mark_match_0_0 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      if(((o_26 != NULL) && (o_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_6 = NULL;
    if(((o_6 != NULL) && (o_6 != t)))
      _fail(t);
    else
      o_6 = t;
    t = not_null(o_26);
    {
      ATerm a_13 (ATerm t)
      {
        t = MarkVar_0_0(t);
        {
          ATerm p_6 = NULL;
          if(((p_6 != NULL) && (p_6 != t)))
            _fail(t);
          else
            p_6 = t;
          {
            ATerm q_26 = NULL;
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_26)), term_t_18);
              {
                ATerm b_13 (ATerm t)
                {
                  t = term_o_16;
                  return(t);
                }
                t = assert_1_0(b_13, t);
                t = not_null(q_6);
              }
            }
            t = not_null(p_6);
          }
        }
        return(t);
      }
      t = alltd_1_0(a_13, t);
      if(((p_26 != NULL) && (p_26 != t)))
        _fail(t);
      else
        p_26 = t;
      t = not_null(o_6);
    }
    t = (ATerm) ATmakeAppl(sym_Match_1, not_null(p_26));
  }
  return(t);
}
ATerm mark_buv_0_0 (ATerm t)
{
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = mark_match_0_0(t);
      ;
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_build_0_0(t);
            ;
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
            {
              ATerm y_18 = t;
              int z_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_scope_0_0(t);
                  ;
                  LocalPopChoice(z_18);
                }
              else
                {
                  t = y_18;
                  {
                    ATerm a_19 = t;
                    int b_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_let_0_0(t);
                        ;
                        LocalPopChoice(b_19);
                      }
                    else
                      {
                        t = a_19;
                        {
                          ATerm c_19 = t;
                          int d_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = mark_traversal_0_0(t);
                              ;
                              LocalPopChoice(d_19);
                            }
                          else
                            {
                              t = c_19;
                              {
                                ATerm e_19 = t;
                                int f_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_sdef_0_0(t);
                                    ;
                                    LocalPopChoice(f_19);
                                  }
                                else
                                  {
                                    t = e_19;
                                    {
                                      ATerm g_19 = t;
                                      int h_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = mark_call_0_0(t);
                                          ;
                                          LocalPopChoice(h_19);
                                        }
                                      else
                                        {
                                          t = g_19;
                                          {
                                            ATerm i_19 = t;
                                            int j_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_prim_0_0(t);
                                                ;
                                                LocalPopChoice(j_19);
                                              }
                                            else
                                              {
                                                t = i_19;
                                                {
                                                  ATerm k_19 = t;
                                                  int l_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_rec_0_0(t);
                                                      ;
                                                      LocalPopChoice(l_19);
                                                    }
                                                  else
                                                    {
                                                      t = k_19;
                                                      {
                                                        ATerm m_19 = t;
                                                        int n_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = mark_choice_1_0(mark_buv_0_0, t);
                                                            ;
                                                            LocalPopChoice(n_19);
                                                          }
                                                        else
                                                          {
                                                            t = m_19;
                                                            {
                                                              ATerm o_19 = t;
                                                              int p_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(p_19);
                                                                }
                                                              else
                                                                {
                                                                  t = o_19;
                                                                  {
                                                                    ATerm q_19 = t;
                                                                    int r_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(r_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_19;
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
ATerm Strategies_1_0 (ATerm l_62 (ATerm), ATerm t)
{
  ATerm s_6 = NULL,r_6 = NULL,t_6 = NULL;
  ATerm u_6 = NULL;
  if(((u_6 != NULL) && (u_6 != t)))
    _fail(t);
  else
    u_6 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      if(((r_6 != NULL) && (r_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_6 = NULL;
    if(((w_6 != NULL) && (w_6 != t)))
      _fail(t);
    else
      w_6 = t;
    t = SSLgetAnnotations(not_null(u_6));
    if(((s_6 != NULL) && (s_6 != t)))
      _fail(t);
    else
      s_6 = t;
    t = not_null(w_6);
  }
  t = not_null(r_6);
  t = l_62(t);
  if(((t_6 != NULL) && (t_6 != t)))
    _fail(t);
  else
    t_6 = t;
  {
    ATerm v_6 = NULL;
    ATerm x_6 = NULL;
    if(((x_6 != NULL) && (x_6 != t)))
      _fail(t);
    else
      x_6 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(t_6)), not_null(s_6));
    if(((v_6 != NULL) && (v_6 != t)))
      _fail(t);
    else
      v_6 = t;
    t = not_null(x_6);
    t = not_null(v_6);
  }
  return(t);
}
ATerm Specification_1_0 (ATerm q_62 (ATerm), ATerm t)
{
  ATerm z_6 = NULL,y_6 = NULL,a_7 = NULL;
  ATerm b_7 = NULL;
  if(((b_7 != NULL) && (b_7 != t)))
    _fail(t);
  else
    b_7 = t;
  if(match_cons(t, sym_Specification_1))
    {
      if(((y_6 != NULL) && (y_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_7 = NULL;
    if(((d_7 != NULL) && (d_7 != t)))
      _fail(t);
    else
      d_7 = t;
    t = SSLgetAnnotations(not_null(b_7));
    if(((z_6 != NULL) && (z_6 != t)))
      _fail(t);
    else
      z_6 = t;
    t = not_null(d_7);
  }
  t = not_null(y_6);
  t = q_62(t);
  if(((a_7 != NULL) && (a_7 != t)))
    _fail(t);
  else
    a_7 = t;
  {
    ATerm c_7 = NULL;
    ATerm e_7 = NULL;
    if(((e_7 != NULL) && (e_7 != t)))
      _fail(t);
    else
      e_7 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(a_7)), not_null(z_6));
    if(((c_7 != NULL) && (c_7 != t)))
      _fail(t);
    else
      c_7 = t;
    t = not_null(e_7);
    t = not_null(c_7);
  }
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm c_13 (ATerm t)
  {
    ATerm d_13 (ATerm t)
    {
      t = term_s_19;
      return(t);
    }
    t = say_1_0(d_13, t);
    return(t);
  }
  t = if_verbose4_1_0(c_13, t);
  {
    ATerm e_13 (ATerm t)
    {
      ATerm f_13 (ATerm t)
      {
        ATerm g_13 (ATerm t)
        {
          ATerm h_13 (ATerm t)
          {
            t = map_1_0(mark_buv_0_0, t);
            return(t);
          }
          t = Strategies_1_0(h_13, t);
          return(t);
        }
        t = Cons_2_0(g_13, Nil_0_0, t);
        return(t);
      }
      t = Cons_2_0(_id, f_13, t);
      return(t);
    }
    t = Specification_1_0(e_13, t);
    {
      ATerm i_13 (ATerm t)
      {
        ATerm j_13 (ATerm t)
        {
          t = term_t_19;
          return(t);
        }
        t = say_1_0(j_13, t);
        return(t);
      }
      t = if_verbose4_1_0(i_13, t);
    }
  }
  return(t);
}
ATerm _2_0 (ATerm y_60 (ATerm), ATerm z_60 (ATerm), ATerm t)
{
  ATerm h_7 = NULL,f_7 = NULL,g_7 = NULL,i_7 = NULL,j_7 = NULL;
  ATerm k_7 = NULL;
  if(((k_7 != NULL) && (k_7 != t)))
    _fail(t);
  else
    k_7 = t;
  if(match_cons(t, sym__2))
    {
      if(((f_7 != NULL) && (f_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_7 = ATgetArgument(t, 0);
      if(((g_7 != NULL) && (g_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_7 = NULL;
    if(((m_7 != NULL) && (m_7 != t)))
      _fail(t);
    else
      m_7 = t;
    t = SSLgetAnnotations(not_null(k_7));
    if(((h_7 != NULL) && (h_7 != t)))
      _fail(t);
    else
      h_7 = t;
    t = not_null(m_7);
  }
  t = not_null(f_7);
  t = y_60(t);
  if(((i_7 != NULL) && (i_7 != t)))
    _fail(t);
  else
    i_7 = t;
  t = not_null(g_7);
  t = z_60(t);
  if(((j_7 != NULL) && (j_7 != t)))
    _fail(t);
  else
    j_7 = t;
  {
    ATerm l_7 = NULL;
    ATerm n_7 = NULL;
    if(((n_7 != NULL) && (n_7 != t)))
      _fail(t);
    else
      n_7 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_7), not_null(j_7)), not_null(h_7));
    if(((l_7 != NULL) && (l_7 != t)))
      _fail(t);
    else
      l_7 = t;
    t = not_null(n_7);
    t = not_null(l_7);
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_7 = NULL;
  if(((o_7 != NULL) && (o_7 != t)))
    _fail(t);
  else
    o_7 = t;
  {
    ATerm l_484 = NULL;
    ATerm p_7 = NULL;
    if(((p_7 != NULL) && (p_7 != t)))
      _fail(t);
    else
      p_7 = t;
    t = term_g_18;
    t = whoami_0_0(t);
    if(((l_484 != NULL) && (l_484 != t)))
      _fail(t);
    else
      l_484 = t;
    t = not_null(p_7);
    t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_19), not_null(l_484)), term_u_19));
    t = printnl_0_0(t);
    t = term_w_19;
    t = exit_0_0(t);
    t = not_null(o_7);
  }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_51 != NULL) && (w_51 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_51 = ATgetArgument(t, 0);
      if(((x_51 != NULL) && (x_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_7 = NULL;
    if(((q_7 != NULL) && (q_7 != t)))
      _fail(t);
    else
      q_7 = t;
    t = SSL_printnl(not_null(w_51), not_null(x_51));
    t = not_null(q_7);
  }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm m_46 = NULL;
  if(((m_46 != NULL) && (m_46 != t)))
    _fail(t);
  else
    m_46 = t;
  t = SSL_implode_string(not_null(m_46));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
      {
        ATerm c_31 = NULL,d_31 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((c_31 != NULL) && (c_31 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              c_31 = ATgetFirst((ATermList) t);
            if(((d_31 != NULL) && (d_31 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              d_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(c_31);
        {
          ATerm k_13 (ATerm t)
          {
            t = not_null(d_31);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_13, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm b_31 = NULL;
  ATerm w_179 = NULL;
  if(((w_179 != NULL) && (w_179 != t)))
    _fail(t);
  else
    w_179 = t;
  {
    ATerm r_7 = NULL;
    if(((r_7 != NULL) && (r_7 != t)))
      _fail(t);
    else
      r_7 = t;
    t = not_null(w_179);
    {
      ATerm x_179 = NULL;
      if(((x_179 != NULL) && (x_179 != t)))
        _fail(t);
      else
        x_179 = t;
      t = SSL_explode_term(not_null(x_179));
      if(match_cons(t, sym__2))
        {
          ATerm z_19 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) z_19) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          if(((b_31 != NULL) && (b_31 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            b_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(r_7);
    }
  }
  t = not_null(b_31);
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  ATerm c_80 (ATerm t)
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, c_80, t);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = Nil_0_0(t);
        t = b_80(t);
      }
    return(t);
  }
  t = c_80(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_31 != NULL) && (a_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_31 = ATgetArgument(t, 0);
      if(((z_30 != NULL) && (z_30 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(a_31);
  {
    ATerm l_13 (ATerm t)
    {
      t = not_null(z_30);
      return(t);
    }
    t = at_end_1_0(l_13, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm n_46 = NULL;
  if(((n_46 != NULL) && (n_46 != t)))
    _fail(t);
  else
    n_46 = t;
  t = SSL_explode_string(not_null(n_46));
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
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_13 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(m_13, t);
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
                  ATerm s_53 = NULL;
                  if(match_cons(t, sym_Path_1))
                    {
                      if(((s_53 != NULL) && (s_53 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        s_53 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(s_53);
                  ;
                  LocalPopChoice(j_20);
                }
              else
                {
                  t = i_20;
                  {
                    ATerm k_20 = t;
                    int l_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_53 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            if(((r_53 != NULL) && (r_53 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              r_53 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = not_null(r_53);
                        {
                          ATerm m_20 = t;
                          int n_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0_0(t);
                              ;
                              LocalPopChoice(n_20);
                            }
                          else
                            {
                              t = m_20;
                              {
                                ATerm n_13 (ATerm t)
                                {
                                  t = term_o_20;
                                  return(t);
                                }
                                t = debug_1_0(n_13, t);
                                _fail(t);
                              }
                            }
                        }
                        ;
                        LocalPopChoice(l_20);
                      }
                    else
                      {
                        t = k_20;
                        {
                          ATerm p_53 = NULL,q_53 = NULL;
                          if(match_cons(t, sym_Prefix_2))
                            {
                              if(((p_53 != NULL) && (p_53 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                p_53 = ATgetArgument(t, 0);
                              if(((q_53 != NULL) && (q_53 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                q_53 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          {
                            ATerm s_454 = NULL;
                            ATerm s_7 = NULL;
                            if(((s_7 != NULL) && (s_7 != t)))
                              _fail(t);
                            else
                              s_7 = t;
                            t = not_null(p_53);
                            t = eval_config_0_0(t);
                            if(((s_454 != NULL) && (s_454 != t)))
                              _fail(t);
                            else
                              s_454 = t;
                            t = not_null(s_7);
                            {
                              ATerm e_455 = NULL;
                              ATerm t_7 = NULL;
                              if(((t_7 != NULL) && (t_7 != t)))
                                _fail(t);
                              else
                                t_7 = t;
                              t = not_null(q_53);
                              t = eval_config_0_0(t);
                              if(((e_455 != NULL) && (e_455 != t)))
                                _fail(t);
                              else
                                e_455 = t;
                              t = not_null(t_7);
                              t = (ATerm) ATmakeAppl(sym__2, not_null(s_454), not_null(e_455));
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
  ATerm o_53 = NULL;
  if(((o_53 != NULL) && (o_53 != t)))
    _fail(t);
  else
    o_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, not_null(o_53));
  t = table_get_0_0(t);
  {
    ATerm o_13 (ATerm t)
    {
      t = eval_config_0_0(t);
      {
        ATerm u_7 = NULL;
        if(((u_7 != NULL) && (u_7 != t)))
          _fail(t);
        else
          u_7 = t;
        {
          ATerm t_453 = NULL;
          ATerm v_7 = NULL;
          if(((v_7 != NULL) && (v_7 != t)))
            _fail(t);
          else
            v_7 = t;
          if(((t_453 != NULL) && (t_453 != t)))
            _fail(t);
          else
            t_453 = t;
          t = not_null(v_7);
          t = (ATerm) ATmakeAppl(sym__3, term_p_20, not_null(o_53), not_null(t_453));
          t = table_put_0_0(t);
          t = not_null(u_7);
        }
      }
      return(t);
    }
    t = try_1_0(o_13, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_96 (ATerm), ATerm t)
{
  ATerm p_13 (ATerm t)
  {
    ATerm w_7 = NULL;
    if(((w_7 != NULL) && (w_7 != t)))
      _fail(t);
    else
      w_7 = t;
    {
      ATerm a_436 = NULL;
      ATerm x_7 = NULL;
      if(((x_7 != NULL) && (x_7 != t)))
        _fail(t);
      else
        x_7 = t;
      t = term_f_16;
      t = get_config_0_0(t);
      if(((a_436 != NULL) && (a_436 != t)))
        _fail(t);
      else
        a_436 = t;
      t = not_null(x_7);
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_436), term_q_20);
      t = geq_0_0(t);
      t = not_null(w_7);
    }
    t = n_96(t);
    return(t);
  }
  t = try_1_0(p_13, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_48 != NULL) && (o_48 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_48 = ATgetArgument(t, 0);
      {
        ATerm r_20 = ATgetArgument(t, 1);
        if(match_cons(r_20, sym_Stream_1))
          {
            if(((p_48 != NULL) && (p_48 != ATgetArgument(r_20, 0))))
              _fail(ATgetArgument(r_20, 0));
            else
              p_48 = ATgetArgument(r_20, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputc(not_null(o_48), not_null(p_48));
  {
    ATerm y_376 = NULL;
    ATerm y_7 = NULL;
    if(((y_7 != NULL) && (y_7 != t)))
      _fail(t);
    else
      y_7 = t;
    if(((y_376 != NULL) && (y_376 != t)))
      _fail(t);
    else
      y_376 = t;
    t = not_null(y_7);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_376));
  }
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_20 = ATgetArgument(t, 0);
      if(match_cons(s_20, sym_Stream_1))
        {
          if(((c_52 != NULL) && (c_52 != ATgetArgument(s_20, 0))))
            _fail(ATgetArgument(s_20, 0));
          else
            c_52 = ATgetArgument(s_20, 0);
        }
      else
        _fail(t);
      if(((d_52 != NULL) && (d_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(c_52), not_null(d_52));
  {
    ATerm m_419 = NULL;
    ATerm z_7 = NULL;
    if(((z_7 != NULL) && (z_7 != t)))
      _fail(t);
    else
      z_7 = t;
    if(((m_419 != NULL) && (m_419 != t)))
      _fail(t);
    else
      m_419 = t;
    t = not_null(z_7);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_419));
  }
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm q_13 (ATerm t)
  {
    t = write_in_text_to_stream_0_0(t);
    {
      ATerm a_421 = NULL;
      ATerm a_8 = NULL;
      if(((a_8 != NULL) && (a_8 != t)))
        _fail(t);
      else
        a_8 = t;
      if(((a_421 != NULL) && (a_421 != t)))
        _fail(t);
      else
        a_421 = t;
      t = not_null(a_8);
      t = (ATerm) ATmakeAppl(sym__2, term_t_20, not_null(a_421));
      t = fputc_0_0(t);
    }
    return(t);
  }
  t = WriteToFile_1_0(q_13, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_20 = ATgetArgument(t, 0);
      if(match_cons(u_20, sym_Stream_1))
        {
          if(((y_51 != NULL) && (y_51 != ATgetArgument(u_20, 0))))
            _fail(ATgetArgument(u_20, 0));
          else
            y_51 = ATgetArgument(u_20, 0);
        }
      else
        _fail(t);
      if(((z_51 != NULL) && (z_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(y_51), not_null(z_51));
  {
    ATerm g_418 = NULL;
    ATerm b_8 = NULL;
    if(((b_8 != NULL) && (b_8 != t)))
      _fail(t);
    else
      b_8 = t;
    if(((g_418 != NULL) && (g_418 != t)))
      _fail(t);
    else
      g_418 = t;
    t = not_null(b_8);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_418));
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm j_95 (ATerm), ATerm t)
{
  ATerm g_52 = NULL;
  ATerm l_421 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_421 != NULL) && (l_421 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_421 = ATgetArgument(t, 0);
      if(((g_52 != NULL) && (g_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_421);
  {
    ATerm w_421 = NULL;
    ATerm c_8 = NULL;
    if(((c_8 != NULL) && (c_8 != t)))
      _fail(t);
    else
      c_8 = t;
    if(((w_421 != NULL) && (w_421 != t)))
      _fail(t);
    else
      w_421 = t;
    t = not_null(c_8);
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_421), term_v_20);
    t = open_stream_0_0(t);
    {
      ATerm h_422 = NULL;
      ATerm d_8 = NULL;
      if(((d_8 != NULL) && (d_8 != t)))
        _fail(t);
      else
        d_8 = t;
      if(((h_422 != NULL) && (h_422 != t)))
        _fail(t);
      else
        h_422 = t;
      t = not_null(d_8);
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_422), not_null(g_52));
      t = j_95(t);
      t = fclose_0_0(t);
      t = not_null(g_52);
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
  ATerm b_55 = NULL;
  ATerm e_8 = NULL;
  if(((e_8 != NULL) && (e_8 != t)))
    _fail(t);
  else
    e_8 = t;
  {
    ATerm r_13 (ATerm t)
    {
      ATerm w_20 = t;
      int x_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_13 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((b_55 != NULL) && (b_55 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_55 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(s_13, t);
          ;
          LocalPopChoice(x_20);
        }
      else
        {
          t = w_20;
          t = term_y_20;
          if(((b_55 != NULL) && (b_55 != t)))
            _fail(t);
          else
            b_55 = t;
        }
      return(t);
    }
    t = _2_0(r_13, _id, t);
    t = not_null(e_8);
  }
  {
    ATerm t_13 (ATerm t)
    {
      ATerm u_13 (ATerm t)
      {
        t = not_null(b_55);
        return(t);
      }
      t = split_2_0(u_13, _id, t);
      return(t);
    }
    t = _2_0(_id, t_13, t);
    {
      ATerm z_20 = t;
      int a_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_13 (ATerm t)
          {
            ATerm w_13 (ATerm t)
            {
              if(!(match_cons(t, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1_0(w_13, t);
            return(t);
          }
          t = _2_0(v_13, WriteToBinaryFile_0_0, t);
          ;
          LocalPopChoice(a_21);
        }
      else
        {
          t = z_20;
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
ATerm apply_strategy_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  ATerm y_54 = NULL;
  ATerm f_8 = NULL;
  if(((f_8 != NULL) && (f_8 != t)))
    _fail(t);
  else
    f_8 = t;
  t = dtime_0_0(t);
  t = not_null(f_8);
  t = l_98(t);
  {
    ATerm g_8 = NULL;
    if(((g_8 != NULL) && (g_8 != t)))
      _fail(t);
    else
      g_8 = t;
    t = dtime_0_0(t);
    if(((y_54 != NULL) && (y_54 != t)))
      _fail(t);
    else
      y_54 = t;
    t = not_null(g_8);
    {
      ATerm z_54 = NULL,a_55 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((z_54 != NULL) && (z_54 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            z_54 = ATgetArgument(t, 0);
          if(((a_55 != NULL) && (a_55 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_54)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_54))), not_null(a_55));
    }
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Stream_1))
        {
          if(((s_48 != NULL) && (s_48 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            s_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_fclose(not_null(s_48));
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      if(((t_48 != NULL) && (t_48 != t)))
        _fail(t);
      else
        t_48 = t;
      t = SSL_fclose(not_null(t_48));
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm e_52 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((e_52 != NULL) && (e_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(e_52));
  return(t);
}
ATerm debug_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm h_8 = NULL;
  if(((h_8 != NULL) && (h_8 != t)))
    _fail(t);
  else
    h_8 = t;
  {
    ATerm i_412 = NULL;
    ATerm i_8 = NULL;
    if(((i_8 != NULL) && (i_8 != t)))
      _fail(t);
    else
      i_8 = t;
    t = v_94(t);
    if(((i_412 != NULL) && (i_412 != t)))
      _fail(t);
    else
      i_412 = t;
    t = not_null(i_8);
    {
      ATerm p_412 = NULL;
      ATerm j_8 = NULL;
      if(((j_8 != NULL) && (j_8 != t)))
        _fail(t);
      else
        j_8 = t;
      if(((p_412 != NULL) && (p_412 != t)))
        _fail(t);
      else
        p_412 = t;
      t = not_null(j_8);
      t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_412)), not_null(i_412)));
    }
    t = printnl_0_0(t);
    t = not_null(h_8);
  }
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_48 != NULL) && (q_48 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_48 = ATgetArgument(t, 0);
      if(((r_48 != NULL) && (r_48 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(q_48), not_null(r_48));
  {
    ATerm o_377 = NULL;
    ATerm k_8 = NULL;
    if(((k_8 != NULL) && (k_8 != t)))
      _fail(t);
    else
      k_8 = t;
    if(((o_377 != NULL) && (o_377 != t)))
      _fail(t);
    else
      o_377 = t;
    t = not_null(k_8);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_377));
  }
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm l_46 = NULL;
  if(((l_46 != NULL) && (l_46 != t)))
    _fail(t);
  else
    l_46 = t;
  t = SSL_is_string(not_null(l_46));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  t = SSL_stdin_stream();
  {
    ATerm p_379 = NULL;
    ATerm l_8 = NULL;
    if(((l_8 != NULL) && (l_8 != t)))
      _fail(t);
    else
      l_8 = t;
    if(((p_379 != NULL) && (p_379 != t)))
      _fail(t);
    else
      p_379 = t;
    t = not_null(l_8);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_379));
  }
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  t = SSL_stdout_stream();
  {
    ATerm a_380 = NULL;
    ATerm m_8 = NULL;
    if(((m_8 != NULL) && (m_8 != t)))
      _fail(t);
    else
      m_8 = t;
    if(((a_380 != NULL) && (a_380 != t)))
      _fail(t);
    else
      a_380 = t;
    t = not_null(m_8);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_380));
  }
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  t = SSL_stderr_stream();
  {
    ATerm l_380 = NULL;
    ATerm n_8 = NULL;
    if(((n_8 != NULL) && (n_8 != t)))
      _fail(t);
    else
      n_8 = t;
    if(((l_380 != NULL) && (l_380 != t)))
      _fail(t);
    else
      l_380 = t;
    t = not_null(n_8);
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_380));
  }
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_stderr_0)))
        _fail(t);
      t = stderr_stream_0_0(t);
      ;
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      {
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_stdout_0)))
              _fail(t);
            t = stdout_stream_0_0(t);
            ;
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
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
  ATerm e_30 = NULL,f_30 = NULL;
  ATerm n_162 = NULL;
  if(((n_162 != NULL) && (n_162 != t)))
    _fail(t);
  else
    n_162 = t;
  {
    ATerm o_8 = NULL;
    if(((o_8 != NULL) && (o_8 != t)))
      _fail(t);
    else
      o_8 = t;
    t = not_null(n_162);
    {
      ATerm o_162 = NULL;
      if(((o_162 != NULL) && (o_162 != t)))
        _fail(t);
      else
        o_162 = t;
      t = SSL_explode_term(not_null(o_162));
      if(match_cons(t, sym__2))
        {
          ATerm h_21 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) h_21) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm i_21 = ATgetArgument(t, 1);
            if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
              {
                if(((f_30 != NULL) && (f_30 != ATgetFirst((ATermList) i_21))))
                  _fail(ATgetFirst((ATermList) i_21));
                else
                  f_30 = ATgetFirst((ATermList) i_21);
                if(((e_30 != NULL) && (e_30 != (ATerm) ATgetNext((ATermList) i_21))))
                  _fail((ATerm) ATgetNext((ATermList) i_21));
                else
                  e_30 = (ATerm) ATgetNext((ATermList) i_21);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = not_null(o_8);
    }
  }
  t = not_null(f_30);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_21 = ATgetArgument(t, 0);
      ATerm k_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        {
          ATerm n_21 = t;
          int o_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_13 (ATerm t)
              {
                ATerm a_371 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    if(((a_371 != NULL) && (a_371 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      a_371 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = not_null(a_371);
                return(t);
              }
              t = _2_0(x_13, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(o_21);
            }
          else
            {
              t = n_21;
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
  ATerm f_52 = NULL;
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_420 = NULL;
      ATerm p_8 = NULL;
      if(((p_8 != NULL) && (p_8 != t)))
        _fail(t);
      else
        p_8 = t;
      if(((c_420 != NULL) && (c_420 != t)))
        _fail(t);
      else
        c_420 = t;
      t = not_null(p_8);
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_420), term_r_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      {
        ATerm y_13 (ATerm t)
        {
          t = term_s_21;
          return(t);
        }
        t = debug_1_0(y_13, t);
        _fail(t);
      }
    }
  {
    ATerm q_8 = NULL;
    if(((q_8 != NULL) && (q_8 != t)))
      _fail(t);
    else
      q_8 = t;
    t = read_from_stream_0_0(t);
    if(((f_52 != NULL) && (f_52 != t)))
      _fail(t);
    else
      f_52 = t;
    t = not_null(q_8);
    t = fclose_0_0(t);
    t = not_null(f_52);
  }
  return(t);
}
ATerm split_2_0 (ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm t)
{
  ATerm a_166 = NULL;
  ATerm r_8 = NULL;
  if(((r_8 != NULL) && (r_8 != t)))
    _fail(t);
  else
    r_8 = t;
  t = m_78(t);
  if(((a_166 != NULL) && (a_166 != t)))
    _fail(t);
  else
    a_166 = t;
  t = not_null(r_8);
  {
    ATerm h_166 = NULL;
    ATerm s_8 = NULL;
    if(((s_8 != NULL) && (s_8 != t)))
      _fail(t);
    else
      s_8 = t;
    t = n_78(t);
    if(((h_166 != NULL) && (h_166 != t)))
      _fail(t);
    else
      h_166 = t;
    t = not_null(s_8);
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_166), not_null(h_166));
  }
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm x_54 = NULL;
  ATerm t_8 = NULL;
  if(((t_8 != NULL) && (t_8 != t)))
    _fail(t);
  else
    t_8 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_13 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((x_54 != NULL) && (x_54 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_54 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(z_13, t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = term_v_21;
        if(((x_54 != NULL) && (x_54 != t)))
          _fail(t);
        else
          x_54 = t;
      }
    t = not_null(t_8);
  }
  {
    ATerm a_14 (ATerm t)
    {
      t = not_null(x_54);
      t = ReadFromFile_0_0(t);
      return(t);
    }
    t = split_2_0(_id, a_14, t);
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm b_14 (ATerm t)
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-k", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm c_14 (ATerm t)
  {
    ATerm u_8 = NULL;
    if(((u_8 != NULL) && (u_8 != t)))
      _fail(t);
    else
      u_8 = t;
    {
      ATerm w_487 = NULL;
      ATerm v_8 = NULL;
      if(((v_8 != NULL) && (v_8 != t)))
        _fail(t);
      else
        v_8 = t;
      t = string_to_int_0_0(t);
      if(((w_487 != NULL) && (w_487 != t)))
        _fail(t);
      else
        w_487 = t;
      t = not_null(v_8);
      t = (ATerm) ATmakeAppl(sym__2, term_y_21, not_null(w_487));
      t = set_config_0_0(t);
      t = not_null(u_8);
    }
    return(t);
  }
  ATerm d_14 (ATerm t)
  {
    t = term_z_21;
    return(t);
  }
  t = ArgOption_3_0(b_14, c_14, d_14, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm p_39 = NULL;
  if(((p_39 != NULL) && (p_39 != t)))
    _fail(t);
  else
    p_39 = t;
  t = SSL_string_to_int(not_null(p_39));
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_14 (ATerm t)
      {
        ATerm c_22 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-S", 0, ATtrue)))
              _fail(t);
            ;
            LocalPopChoice(d_22);
          }
        else
          {
            t = c_22;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
          }
        return(t);
      }
      ATerm f_14 (ATerm t)
      {
        ATerm w_8 = NULL;
        if(((w_8 != NULL) && (w_8 != t)))
          _fail(t);
        else
          w_8 = t;
        t = term_f_22;
        t = set_config_0_0(t);
        t = not_null(w_8);
        t = term_g_22;
        return(t);
      }
      ATerm g_14 (ATerm t)
      {
        t = term_h_22;
        return(t);
      }
      t = Option_3_0(e_14, f_14, g_14, t);
      ;
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_14 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm i_14 (ATerm t)
            {
              ATerm x_8 = NULL;
              if(((x_8 != NULL) && (x_8 != t)))
                _fail(t);
              else
                x_8 = t;
              {
                ATerm b_493 = NULL;
                ATerm y_8 = NULL;
                if(((y_8 != NULL) && (y_8 != t)))
                  _fail(t);
                else
                  y_8 = t;
                t = string_to_int_0_0(t);
                if(((b_493 != NULL) && (b_493 != t)))
                  _fail(t);
                else
                  b_493 = t;
                t = not_null(y_8);
                t = (ATerm) ATmakeAppl(sym__2, term_f_16, not_null(b_493));
                t = set_config_0_0(t);
                t = not_null(x_8);
              }
              {
                ATerm m_493 = NULL;
                ATerm z_8 = NULL;
                if(((z_8 != NULL) && (z_8 != t)))
                  _fail(t);
                else
                  z_8 = t;
                if(((m_493 != NULL) && (m_493 != t)))
                  _fail(t);
                else
                  m_493 = t;
                t = not_null(z_8);
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(m_493));
              }
              return(t);
            }
            ATerm j_14 (ATerm t)
            {
              t = term_k_22;
              return(t);
            }
            t = ArgOption_3_0(h_14, i_14, j_14, t);
            ;
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            {
              ATerm k_14 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm l_14 (ATerm t)
              {
                ATerm a_9 = NULL;
                if(((a_9 != NULL) && (a_9 != t)))
                  _fail(t);
                else
                  a_9 = t;
                t = term_m_22;
                t = set_config_0_0(t);
                t = not_null(a_9);
                t = term_n_22;
                return(t);
              }
              ATerm m_14 (ATerm t)
              {
                t = term_o_22;
                return(t);
              }
              t = Option_3_0(k_14, l_14, m_14, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm n_14 (ATerm t)
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-o", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm o_14 (ATerm t)
  {
    ATerm b_9 = NULL;
    if(((b_9 != NULL) && (b_9 != t)))
      _fail(t);
    else
      b_9 = t;
    {
      ATerm j_490 = NULL;
      ATerm c_9 = NULL;
      if(((c_9 != NULL) && (c_9 != t)))
        _fail(t);
      else
        c_9 = t;
      if(((j_490 != NULL) && (j_490 != t)))
        _fail(t);
      else
        j_490 = t;
      t = not_null(c_9);
      t = (ATerm) ATmakeAppl(sym__2, term_t_22, not_null(j_490));
      t = set_config_0_0(t);
      t = not_null(b_9);
    }
    {
      ATerm u_490 = NULL;
      ATerm d_9 = NULL;
      if(((d_9 != NULL) && (d_9 != t)))
        _fail(t);
      else
        d_9 = t;
      if(((u_490 != NULL) && (u_490 != t)))
        _fail(t);
      else
        u_490 = t;
      t = not_null(d_9);
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_490));
    }
    return(t);
  }
  ATerm p_14 (ATerm t)
  {
    t = term_u_22;
    return(t);
  }
  t = ArgOption_3_0(n_14, o_14, p_14, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      {
        ATerm q_14 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm r_14 (ATerm t)
        {
          ATerm e_9 = NULL;
          if(((e_9 != NULL) && (e_9 != t)))
            _fail(t);
          else
            e_9 = t;
          t = term_y_22;
          t = set_config_0_0(t);
          t = not_null(e_9);
          t = term_z_22;
          return(t);
        }
        ATerm s_14 (ATerm t)
        {
          t = term_a_23;
          return(t);
        }
        t = Option_3_0(q_14, r_14, s_14, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register-usage-info", 0, ATtrue)))
        _fail(t);
      t = register_usage_1_0(l_0, t);
      ;
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      {
        ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((r_57 != NULL) && (r_57 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              r_57 = ATgetFirst((ATermList) t);
            {
              ATerm d_23 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
                {
                  if(((p_57 != NULL) && (p_57 != ATgetFirst((ATermList) d_23))))
                    _fail(ATgetFirst((ATermList) d_23));
                  else
                    p_57 = ATgetFirst((ATermList) d_23);
                  if(((q_57 != NULL) && (q_57 != (ATerm) ATgetNext((ATermList) d_23))))
                    _fail((ATerm) ATgetNext((ATermList) d_23));
                  else
                    q_57 = (ATerm) ATgetNext((ATermList) d_23);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        {
          ATerm f_9 = NULL;
          if(((f_9 != NULL) && (f_9 != t)))
            _fail(t);
          else
            f_9 = t;
          t = not_null(r_57);
          t = i_0(t);
          t = not_null(f_9);
          {
            ATerm r_527 = NULL;
            ATerm g_9 = NULL;
            if(((g_9 != NULL) && (g_9 != t)))
              _fail(t);
            else
              g_9 = t;
            t = not_null(p_57);
            t = k_0(t);
            if(((r_527 != NULL) && (r_527 != t)))
              _fail(t);
            else
              r_527 = t;
            t = not_null(g_9);
            t = (ATerm) ATinsert(CheckATermList(not_null(q_57)), not_null(r_527));
          }
        }
      }
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm t_14 (ATerm t)
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
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
      ATerm z_488 = NULL;
      ATerm i_9 = NULL;
      if(((i_9 != NULL) && (i_9 != t)))
        _fail(t);
      else
        i_9 = t;
      if(((z_488 != NULL) && (z_488 != t)))
        _fail(t);
      else
        z_488 = t;
      t = not_null(i_9);
      t = (ATerm) ATmakeAppl(sym__2, term_g_23, not_null(z_488));
      t = set_config_0_0(t);
      t = not_null(h_9);
    }
    {
      ATerm k_489 = NULL;
      ATerm j_9 = NULL;
      if(((j_9 != NULL) && (j_9 != t)))
        _fail(t);
      else
        j_9 = t;
      if(((k_489 != NULL) && (k_489 != t)))
        _fail(t);
      else
        k_489 = t;
      t = not_null(j_9);
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_489));
    }
    return(t);
  }
  ATerm v_14 (ATerm t)
  {
    t = term_h_23;
    return(t);
  }
  t = ArgOption_3_0(t_14, u_14, v_14, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      {
        ATerm k_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(l_23);
          }
        else
          {
            t = k_23;
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
    ATerm s_485 = NULL;
    ATerm k_9 = NULL;
    if(((k_9 != NULL) && (k_9 != t)))
      _fail(t);
    else
      k_9 = t;
    t = term_g_18;
    t = whoami_0_0(t);
    if(((s_485 != NULL) && (s_485 != t)))
      _fail(t);
    else
      s_485 = t;
    t = not_null(k_9);
    t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATinsert(ATempty, term_m_23), not_null(s_485)));
    t = printnl_0_0(t);
    t = term_w_19;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_23;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm g_55 = NULL;
  if(((g_55 != NULL) && (g_55 != t)))
    _fail(t);
  else
    g_55 = t;
  t = SSL_TicksToSeconds(not_null(g_55));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_39 != NULL) && (u_39 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_39 = ATgetArgument(t, 0);
      if(((v_39 != NULL) && (v_39 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(u_39), not_null(v_39));
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = SSL_addr(not_null(u_39), not_null(v_39));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = b_86(t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm p_37 = NULL,q_37 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((p_37 != NULL) && (p_37 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              p_37 = ATgetFirst((ATermList) t);
            if(((q_37 != NULL) && (q_37 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              q_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_248 = NULL;
          ATerm l_9 = NULL;
          if(((l_9 != NULL) && (l_9 != t)))
            _fail(t);
          else
            l_9 = t;
          t = not_null(q_37);
          t = foldr_2_0(b_86, c_86, t);
          if(((n_248 != NULL) && (n_248 != t)))
            _fail(t);
          else
            n_248 = t;
          t = not_null(l_9);
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_37), not_null(n_248));
          t = c_86(t);
        }
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm t)
{
  ATerm n_36 = NULL;
  ATerm v_229 = NULL;
  if(((v_229 != NULL) && (v_229 != t)))
    _fail(t);
  else
    v_229 = t;
  {
    ATerm m_9 = NULL;
    if(((m_9 != NULL) && (m_9 != t)))
      _fail(t);
    else
      m_9 = t;
    t = not_null(v_229);
    {
      ATerm w_229 = NULL;
      if(((w_229 != NULL) && (w_229 != t)))
        _fail(t);
      else
        w_229 = t;
      t = SSL_explode_term(not_null(w_229));
      if(match_cons(t, sym__2))
        {
          ATerm s_23 = ATgetArgument(t, 0);
          if(((n_36 != NULL) && (n_36 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            n_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(m_9);
    }
  }
  t = not_null(n_36);
  t = foldr_2_0(z_83, a_84, t);
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
    ATerm w_14 (ATerm t)
    {
      t = term_e_22;
      return(t);
    }
    t = crush_2_0(w_14, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_40 != NULL) && (u_40 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_40 = ATgetArgument(t, 0);
      if(((v_40 != NULL) && (v_40 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_9 = NULL;
    if(((n_9 != NULL) && (n_9 != t)))
      _fail(t);
    else
      n_9 = t;
    {
      ATerm t_23 = t;
      int u_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_gti(not_null(u_40), not_null(v_40));
          ;
          LocalPopChoice(u_23);
        }
      else
        {
          t = t_23;
          t = SSL_gtr(not_null(u_40), not_null(v_40));
        }
      t = not_null(n_9);
    }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_41 = NULL;
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym__2))
        {
          if(((a_41 != NULL) && (a_41 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_41 = ATgetArgument(t, 0);
          if(((a_41 != NULL) && (a_41 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      ;
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_96 (ATerm), ATerm t)
{
  ATerm x_14 (ATerm t)
  {
    ATerm o_9 = NULL;
    if(((o_9 != NULL) && (o_9 != t)))
      _fail(t);
    else
      o_9 = t;
    {
      ATerm k_435 = NULL;
      ATerm p_9 = NULL;
      if(((p_9 != NULL) && (p_9 != t)))
        _fail(t);
      else
        p_9 = t;
      t = term_f_16;
      t = get_config_0_0(t);
      if(((k_435 != NULL) && (k_435 != t)))
        _fail(t);
      else
        k_435 = t;
      t = not_null(p_9);
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_435), term_w_19);
      t = geq_0_0(t);
      t = not_null(o_9);
    }
    t = m_96(t);
    return(t);
  }
  t = try_1_0(x_14, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm y_14 (ATerm t)
  {
    ATerm l_486 = NULL;
    ATerm q_9 = NULL;
    if(((q_9 != NULL) && (q_9 != t)))
      _fail(t);
    else
      q_9 = t;
    t = run_time_0_0(t);
    if(((l_486 != NULL) && (l_486 != t)))
      _fail(t);
    else
      l_486 = t;
    t = not_null(q_9);
    {
      ATerm t_486 = NULL;
      ATerm r_9 = NULL;
      if(((r_9 != NULL) && (r_9 != t)))
        _fail(t);
      else
        r_9 = t;
      t = term_g_18;
      t = whoami_0_0(t);
      if(((t_486 != NULL) && (t_486 != t)))
        _fail(t);
      else
        t_486 = t;
      t = not_null(r_9);
      t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_23), not_null(l_486)), term_x_23), not_null(t_486)));
    }
    t = printnl_0_0(t);
    return(t);
  }
  t = if_verbose1_1_0(y_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_e_22;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1_0 (ATerm j_99 (ATerm), ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      {
        ATerm z_14 (ATerm t)
        {
          ATerm c_24 = t;
          int d_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(d_24);
            }
          else
            {
              t = c_24;
              {
                ATerm e_24 = t;
                int f_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(f_24);
                  }
                else
                  {
                    t = e_24;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(z_14, t);
      }
    }
  t = j_99(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm e_29 = NULL;
  if(((e_29 != NULL) && (e_29 != t)))
    _fail(t);
  else
    e_29 = t;
  t = SSL_table_create(not_null(e_29));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm c_55 = NULL;
  if(((c_55 != NULL) && (c_55 != t)))
    _fail(t);
  else
    c_55 = t;
  {
    ATerm s_9 = NULL;
    if(((s_9 != NULL) && (s_9 != t)))
      _fail(t);
    else
      s_9 = t;
    t = term_g_24;
    t = table_create_0_0(t);
    t = (ATerm) ATmakeAppl(sym__3, term_g_24, term_h_24, not_null(c_55));
    t = table_put_0_0(t);
    t = not_null(s_9);
  }
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm f_29 = NULL;
  if(((f_29 != NULL) && (f_29 != t)))
    _fail(t);
  else
    f_29 = t;
  t = SSL_table_destroy(not_null(f_29));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm h_54 = NULL;
  if(((h_54 != NULL) && (h_54 != t)))
    _fail(t);
  else
    h_54 = t;
  t = SSL_exit(not_null(h_54));
  return(t);
}
ATerm long_description_1_0 (ATerm k_101 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm l_79 (ATerm t)
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        t = Cons_2_0(k_79, l_79, t);
      }
    return(t);
  }
  t = l_79(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_31 = NULL,t_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((s_31 != NULL) && (s_31 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            s_31 = ATgetFirst((ATermList) t);
          if(((t_31 != NULL) && (t_31 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(t_31);
      {
        ATerm u_31 = NULL;
        ATerm t_9 = NULL;
        if(((t_9 != NULL) && (t_9 != t)))
          _fail(t);
        else
          t_9 = t;
        {
          ATerm c_189 = NULL;
          ATerm u_9 = NULL;
          if(((u_9 != NULL) && (u_9 != t)))
            _fail(t);
          else
            u_9 = t;
          t = g_0(t);
          if(((c_189 != NULL) && (c_189 != t)))
            _fail(t);
          else
            c_189 = t;
          t = not_null(u_9);
          {
            ATerm k_189 = NULL;
            ATerm v_9 = NULL;
            if(((v_9 != NULL) && (v_9 != t)))
              _fail(t);
            else
              v_9 = t;
            t = not_null(s_31);
            t = e_0(t);
            if(((k_189 != NULL) && (k_189 != t)))
              _fail(t);
            else
              k_189 = t;
            t = not_null(v_9);
            t = (ATerm) ATinsert(CheckATermList(not_null(c_189)), not_null(k_189));
          }
          if(((u_31 != NULL) && (u_31 != t)))
            _fail(t);
          else
            u_31 = t;
          t = not_null(t_9);
        }
        {
          ATerm a_15 (ATerm t)
          {
            t = not_null(u_31);
            return(t);
          }
          t = reverse_acc_2_0(e_0, a_15, t);
        }
      }
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_18;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm b_15 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, b_15, t);
  return(t);
}
ATerm short_description_1_0 (ATerm j_101 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm z_74 (ATerm), ATerm t)
{
  ATerm x_9 = NULL,w_9 = NULL,y_9 = NULL;
  ATerm z_9 = NULL;
  if(((z_9 != NULL) && (z_9 != t)))
    _fail(t);
  else
    z_9 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((w_9 != NULL) && (w_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_10 = NULL;
    if(((b_10 != NULL) && (b_10 != t)))
      _fail(t);
    else
      b_10 = t;
    t = SSLgetAnnotations(not_null(z_9));
    if(((x_9 != NULL) && (x_9 != t)))
      _fail(t);
    else
      x_9 = t;
    t = not_null(b_10);
  }
  t = not_null(w_9);
  t = z_74(t);
  if(((y_9 != NULL) && (y_9 != t)))
    _fail(t);
  else
    y_9 = t;
  {
    ATerm a_10 = NULL;
    ATerm c_10 = NULL;
    if(((c_10 != NULL) && (c_10 != t)))
      _fail(t);
    else
      c_10 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(y_9)), not_null(x_9));
    if(((a_10 != NULL) && (a_10 != t)))
      _fail(t);
    else
      a_10 = t;
    t = not_null(c_10);
    t = not_null(a_10);
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_58 = NULL;
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_23;
      t = get_config_0_0(t);
      if(((d_58 != NULL) && (d_58 != t)))
        _fail(t);
      else
        d_58 = t;
      ;
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      {
        ATerm c_15 (ATerm t)
        {
          ATerm d_15 (ATerm t)
          {
            if(((d_58 != NULL) && (d_58 != t)))
              _fail(t);
            else
              d_58 = t;
            return(t);
          }
          t = Program_1_0(d_15, t);
          return(t);
        }
        t = option_defined_1_0(c_15, t);
      }
    }
  {
    ATerm e_15 (ATerm t)
    {
      ATerm f_15 (ATerm t)
      {
        t = not_null(d_58);
        return(t);
      }
      t = short_description_1_0(f_15, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(e_15, t);
    t = term_o_24;
    t = echo_0_0(t);
    t = term_r_24;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm g_15 (ATerm t)
      {
        ATerm l_537 = NULL;
        ATerm d_10 = NULL;
        if(((d_10 != NULL) && (d_10 != t)))
          _fail(t);
        else
          d_10 = t;
        if(((l_537 != NULL) && (l_537 != t)))
          _fail(t);
        else
          l_537 = t;
        t = not_null(d_10);
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_537)), term_s_24);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(g_15, t);
      {
        ATerm h_15 (ATerm t)
        {
          ATerm w_537 = NULL;
          ATerm e_10 = NULL;
          if(((e_10 != NULL) && (e_10 != t)))
            _fail(t);
          else
            e_10 = t;
          {
            ATerm i_15 (ATerm t)
            {
              t = not_null(d_58);
              return(t);
            }
            t = long_description_1_0(i_15, t);
            if(((w_537 != NULL) && (w_537 != t)))
              _fail(t);
            else
              w_537 = t;
            t = not_null(e_10);
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(w_537)), term_t_24);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(h_15, t);
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
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm a_75 (ATerm), ATerm t)
{
  ATerm g_10 = NULL,f_10 = NULL,h_10 = NULL;
  ATerm i_10 = NULL;
  if(((i_10 != NULL) && (i_10 != t)))
    _fail(t);
  else
    i_10 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((f_10 != NULL) && (f_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_10 = NULL;
    if(((k_10 != NULL) && (k_10 != t)))
      _fail(t);
    else
      k_10 = t;
    t = SSLgetAnnotations(not_null(i_10));
    if(((g_10 != NULL) && (g_10 != t)))
      _fail(t);
    else
      g_10 = t;
    t = not_null(k_10);
  }
  t = not_null(f_10);
  t = a_75(t);
  if(((h_10 != NULL) && (h_10 != t)))
    _fail(t);
  else
    h_10 = t;
  {
    ATerm j_10 = NULL;
    ATerm l_10 = NULL;
    if(((l_10 != NULL) && (l_10 != t)))
      _fail(t);
    else
      l_10 = t;
    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_10)), not_null(g_10));
    if(((j_10 != NULL) && (j_10 != t)))
      _fail(t);
    else
      j_10 = t;
    t = not_null(l_10);
    t = not_null(j_10);
  }
  return(t);
}
ATerm fetch_1_0 (ATerm v_79 (ATerm), ATerm t)
{
  ATerm w_79 (ATerm t)
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_79, _id, t);
        ;
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        t = Cons_2_0(_id, w_79, t);
      }
    return(t);
  }
  t = w_79(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  t = fetch_1_0(j_100, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm a_25 = ATgetFirst((ATermList) t);
          ATerm b_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_10 = NULL;
  if(((m_10 != NULL) && (m_10 != t)))
    _fail(t);
  else
    m_10 = t;
  {
    ATerm j_409 = NULL;
    ATerm n_10 = NULL;
    if(((n_10 != NULL) && (n_10 != t)))
      _fail(t);
    else
      n_10 = t;
    {
      ATerm c_25 = t;
      int d_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = is_list_0_0(t);
          ;
          LocalPopChoice(d_25);
        }
      else
        {
          t = c_25;
          {
            ATerm l_409 = NULL;
            ATerm o_10 = NULL;
            if(((o_10 != NULL) && (o_10 != t)))
              _fail(t);
            else
              o_10 = t;
            if(((l_409 != NULL) && (l_409 != t)))
              _fail(t);
            else
              l_409 = t;
            t = not_null(o_10);
            t = (ATerm) ATinsert(ATempty, not_null(l_409));
          }
        }
      if(((j_409 != NULL) && (j_409 != t)))
        _fail(t);
      else
        j_409 = t;
      t = not_null(n_10);
    }
    t = (ATerm) ATmakeAppl(sym__2, term_y_20, not_null(j_409));
    t = printnl_0_0(t);
    t = not_null(m_10);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_23;
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
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
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
ATerm try_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_87(t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_15 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm k_15 (ATerm t)
      {
        t = term_l_25;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm l_15 (ATerm t)
      {
        t = term_m_25;
        return(t);
      }
      t = Option_3_0(j_15, k_15, l_15, t);
      ;
      LocalPopChoice(j_25);
    }
  else
    {
      t = i_25;
      {
        ATerm m_15 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm n_15 (ATerm t)
        {
          ATerm p_10 = NULL;
          if(((p_10 != NULL) && (p_10 != t)))
            _fail(t);
          else
            p_10 = t;
          t = term_l_25;
          t = set_config_0_0(t);
          t = term_o_25;
          t = set_config_0_0(t);
          t = not_null(p_10);
          t = term_p_25;
          return(t);
        }
        ATerm o_15 (ATerm t)
        {
          t = term_q_25;
          return(t);
        }
        t = Option_3_0(m_15, n_15, o_15, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_29 != NULL) && (j_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_29 = ATgetArgument(t, 0);
      if(((k_29 != NULL) && (k_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(j_29), not_null(k_29));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((v_27 != NULL) && (v_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_27 = ATgetArgument(t, 0);
      if(((w_27 != NULL) && (w_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_27 = ATgetArgument(t, 1);
      if(((u_27 != NULL) && (u_27 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        u_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm q_10 = NULL;
    if(((q_10 != NULL) && (q_10 != t)))
      _fail(t);
    else
      q_10 = t;
    {
      ATerm c_144 = NULL;
      ATerm r_10 = NULL;
      if(((r_10 != NULL) && (r_10 != t)))
        _fail(t);
      else
        r_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_27), not_null(w_27));
      {
        ATerm r_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = table_get_0_0(t);
            ;
            LocalPopChoice(s_25);
          }
        else
          {
            t = r_25;
            t = (ATerm) ATempty;
          }
        if(((c_144 != NULL) && (c_144 != t)))
          _fail(t);
        else
          c_144 = t;
        t = not_null(r_10);
      }
      t = (ATerm) ATmakeAppl(sym__3, not_null(v_27), not_null(w_27), (ATerm) ATinsert(CheckATermList(not_null(c_144)), not_null(u_27)));
      t = table_put_0_0(t);
      t = not_null(q_10);
    }
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  ATerm w_535 = NULL;
  ATerm s_10 = NULL;
  if(((s_10 != NULL) && (s_10 != t)))
    _fail(t);
  else
    s_10 = t;
  t = term_g_18;
  t = o_101(t);
  if(((w_535 != NULL) && (w_535 != t)))
    _fail(t);
  else
    w_535 = t;
  t = not_null(s_10);
  t = (ATerm) ATmakeAppl(sym__3, term_p_24, term_q_24, not_null(w_535));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register-usage-info", 0, ATtrue)))
        _fail(t);
      t = register_usage_1_0(d_0, t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
        ATerm n_57 = NULL,o_57 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((o_57 != NULL) && (o_57 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              o_57 = ATgetFirst((ATermList) t);
            if(((n_57 != NULL) && (n_57 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              n_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_10 = NULL;
          if(((t_10 != NULL) && (t_10 != t)))
            _fail(t);
          else
            t_10 = t;
          t = not_null(o_57);
          t = a_0(t);
          t = not_null(t_10);
          {
            ATerm j_526 = NULL;
            ATerm u_10 = NULL;
            if(((u_10 != NULL) && (u_10 != t)))
              _fail(t);
            else
              u_10 = t;
            t = term_g_18;
            t = c_0(t);
            if(((j_526 != NULL) && (j_526 != t)))
              _fail(t);
            else
              j_526 = t;
            t = not_null(u_10);
            t = (ATerm) ATinsert(CheckATermList(not_null(n_57)), not_null(j_526));
          }
        }
      }
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm p_15 (ATerm t)
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        {
          ATerm x_25 = t;
          int y_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-h", 0, ATtrue)))
                _fail(t);
              ;
              LocalPopChoice(y_25);
            }
          else
            {
              t = x_25;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                _fail(t);
            }
        }
      }
    return(t);
  }
  ATerm q_15 (ATerm t)
  {
    t = term_z_25;
    t = set_config_0_0(t);
    t = term_a_26;
    return(t);
  }
  ATerm r_15 (ATerm t)
  {
    t = term_b_26;
    return(t);
  }
  t = Option_3_0(p_15, q_15, r_15, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((a_58 != NULL) && (a_58 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        a_58 = ATgetFirst((ATermList) t);
      if(((b_58 != NULL) && (b_58 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        b_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(b_58)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_58)));
  return(t);
}
ATerm Cons_2_0 (ATerm h_62 (ATerm), ATerm i_62 (ATerm), ATerm t)
{
  ATerm x_10 = NULL,v_10 = NULL,w_10 = NULL,y_10 = NULL,z_10 = NULL;
  ATerm a_11 = NULL;
  if(((a_11 != NULL) && (a_11 != t)))
    _fail(t);
  else
    a_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((v_10 != NULL) && (v_10 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        v_10 = ATgetFirst((ATermList) t);
      if(((w_10 != NULL) && (w_10 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        w_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm c_11 = NULL;
    if(((c_11 != NULL) && (c_11 != t)))
      _fail(t);
    else
      c_11 = t;
    t = SSLgetAnnotations(not_null(a_11));
    if(((x_10 != NULL) && (x_10 != t)))
      _fail(t);
    else
      x_10 = t;
    t = not_null(c_11);
  }
  t = not_null(v_10);
  t = h_62(t);
  if(((y_10 != NULL) && (y_10 != t)))
    _fail(t);
  else
    y_10 = t;
  t = not_null(w_10);
  t = i_62(t);
  if(((z_10 != NULL) && (z_10 != t)))
    _fail(t);
  else
    z_10 = t;
  {
    ATerm b_11 = NULL;
    ATerm d_11 = NULL;
    if(((d_11 != NULL) && (d_11 != t)))
      _fail(t);
    else
      d_11 = t;
    t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_10)), not_null(y_10)), not_null(x_10));
    if(((b_11 != NULL) && (b_11 != t)))
      _fail(t);
    else
      b_11 = t;
    t = not_null(d_11);
    t = not_null(b_11);
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
  ATerm f_53 = NULL,g_53 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_53 != NULL) && (f_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_53 = ATgetArgument(t, 0);
      if(((g_53 != NULL) && (g_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_20, not_null(f_53), not_null(g_53));
  t = table_put_0_0(t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm e_11 = NULL;
  if(((e_11 != NULL) && (e_11 != t)))
    _fail(t);
  else
    e_11 = t;
  {
    ATerm s_15 (ATerm t)
    {
      t = term_c_26;
      t = m_101(t);
      return(t);
    }
    t = try_1_0(s_15, t);
    t = not_null(e_11);
  }
  {
    ATerm t_15 (ATerm t)
    {
      ATerm f_11 = NULL;
      if(((f_11 != NULL) && (f_11 != t)))
        _fail(t);
      else
        f_11 = t;
      {
        ATerm z_534 = NULL;
        ATerm g_11 = NULL;
        if(((g_11 != NULL) && (g_11 != t)))
          _fail(t);
        else
          g_11 = t;
        if(((z_534 != NULL) && (z_534 != t)))
          _fail(t);
        else
          z_534 = t;
        t = not_null(g_11);
        t = (ATerm) ATmakeAppl(sym__2, term_n_23, not_null(z_534));
        t = set_config_0_0(t);
        t = not_null(f_11);
      }
      {
        ATerm k_535 = NULL;
        ATerm h_11 = NULL;
        if(((h_11 != NULL) && (h_11 != t)))
          _fail(t);
        else
          h_11 = t;
        if(((k_535 != NULL) && (k_535 != t)))
          _fail(t);
        else
          k_535 = t;
        t = not_null(h_11);
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_535));
      }
      return(t);
    }
    ATerm u_15 (ATerm t)
    {
      ATerm d_26 = t;
      int e_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_26 = t;
          int g_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0_0(t);
              ;
              LocalPopChoice(g_26);
            }
          else
            {
              t = f_26;
              t = m_101(t);
              t = Cons_2_0(_id, u_15, t);
            }
          ;
          LocalPopChoice(e_26);
        }
      else
        {
          t = d_26;
          t = UndefinedOption_0_0(t);
        }
      return(t);
    }
    t = Cons_2_0(t_15, u_15, t);
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,i_11 = NULL;
  if(((i_11 != NULL) && (i_11 != t)))
    _fail(t);
  else
    i_11 = t;
  if(match_cons(t, sym__3))
    {
      if(((g_29 != NULL) && (g_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_29 = ATgetArgument(t, 0);
      if(((h_29 != NULL) && (h_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_29 = ATgetArgument(t, 1);
      if(((i_29 != NULL) && (i_29 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        i_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(g_29), not_null(h_29), not_null(i_29));
  t = not_null(i_11);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_101 (ATerm), ATerm t)
{
  ATerm c_58 = NULL;
  ATerm j_11 = NULL;
  if(((j_11 != NULL) && (j_11 != t)))
    _fail(t);
  else
    j_11 = t;
  t = term_h_26;
  t = table_put_0_0(t);
  t = not_null(j_11);
  {
    ATerm v_15 (ATerm t)
    {
      ATerm q_27 = t;
      int r_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_101(t);
          ;
          LocalPopChoice(r_27);
        }
      else
        {
          t = q_27;
          {
            ATerm s_27 = t;
            int z_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(z_27);
              }
            else
              {
                t = s_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_15, t);
    {
      ATerm w_15 (ATerm t)
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_11 = NULL;
            if(((k_11 != NULL) && (k_11 != t)))
              _fail(t);
            else
              k_11 = t;
            {
              ATerm c_28 = t;
              int f_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_b_24;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(f_28);
                }
              else
                {
                  t = c_28;
                  t = option_defined_1_0(Help_0_0, t);
                }
              t = not_null(k_11);
            }
            t = system_usage_0_0(t);
            t = term_e_22;
            t = exit_0_0(t);
            ;
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            {
              ATerm g_28 = t;
              int h_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_11 = NULL;
                  if(((l_11 != NULL) && (l_11 != t)))
                    _fail(t);
                  else
                    l_11 = t;
                  t = term_k_25;
                  t = get_config_0_0(t);
                  t = not_null(l_11);
                  t = system_about_0_0(t);
                  t = term_e_22;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(h_28);
                }
              else
                {
                  t = g_28;
                  {
                    ATerm x_15 (ATerm t)
                    {
                      ATerm y_15 (ATerm t)
                      {
                        if(((c_58 != NULL) && (c_58 != t)))
                          _fail(t);
                        else
                          c_58 = t;
                        return(t);
                      }
                      t = Undefined_1_0(y_15, t);
                      return(t);
                    }
                    t = option_defined_1_0(x_15, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_58)), term_i_28));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_w_19;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(w_15, t);
      {
        ATerm m_11 = NULL;
        if(((m_11 != NULL) && (m_11 != t)))
          _fail(t);
        else
          m_11 = t;
        t = term_p_24;
        t = table_destroy_0_0(t);
        t = not_null(m_11);
      }
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm t)
{
  t = parse_options_1_0(l_99, t);
  t = store_options_0_0(t);
  t = n_99(t);
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_99, t);
        ;
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        {
          ATerm l_28 = t;
          int m_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_99(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(m_28);
            }
          else
            {
              t = l_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm t)
{
  ATerm z_15 (ATerm t)
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_99(t);
        ;
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm a_16 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(a_99, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(z_15, c_99, d_99, a_16, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm t)
{
  ATerm b_16 (ATerm t)
  {
    ATerm c_16 (ATerm t)
    {
      ATerm n_11 = NULL;
      if(((n_11 != NULL) && (n_11 != t)))
        _fail(t);
      else
        n_11 = t;
      {
        ATerm r_483 = NULL;
        ATerm o_11 = NULL;
        if(((o_11 != NULL) && (o_11 != t)))
          _fail(t);
        else
          o_11 = t;
        t = term_n_23;
        t = get_config_0_0(t);
        if(((r_483 != NULL) && (r_483 != t)))
          _fail(t);
        else
          r_483 = t;
        t = not_null(o_11);
        t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATempty, not_null(r_483)));
        t = printnl_0_0(t);
        t = not_null(n_11);
      }
      return(t);
    }
    t = if_verbose2_1_0(c_16, t);
    return(t);
  }
  t = iowrap_4_0(u_98, v_98, w_98, b_16, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm t)
{
  t = iowrap_3_0(s_98, t_98, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm p_98 (ATerm), ATerm t)
{
  ATerm d_16 (ATerm t)
  {
    t = _2_0(_id, p_98, t);
    return(t);
  }
  t = iowrap_2_0(d_16, _fail, t);
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
