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
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_StratRule_3;
Symbol sym_Rule_3;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
Symbol sym_Overlay_3;
Symbol sym_DynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
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
Symbol sym_SDef_3;
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
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
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
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
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
ATerm term_o_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_q_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_p_45;
ATerm term_f_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_h_44;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_i_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_z_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_o_41;
ATerm term_m_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_x_40;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_l_40;
ATerm term_h_40;
ATerm term_b_40;
ATerm term_c_39;
ATerm term_z_38;
ATerm term_x_38;
ATerm term_u_38;
ATerm term_r_38;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_d_32;
ATerm term_b_32;
ATerm term_x_26;
ATerm term_p_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_b_25;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_d_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_s_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_x_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_j_17;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
void init_constant_terms (void)
{
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym__2, term_d_16, (ATerm) ATempty);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATempty);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Defined_2, term_b_25, term_z_25);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Defined_2, term_b_32, term_z_25);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_Defined_2, term_h_34, term_i_34);
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym__2, term_d_41, term_e_41);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_41);
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym__2, term_m_41, term_p_40);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(sym__2, term_e_42, term_f_42);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(sym__2, term_x_44, term_p_40);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(sym__2, term_b_45, term_p_40);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(sym__2, term_o_43, term_p_40);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_p_40);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm f_0 (ATerm);
ATerm z_0 (ATerm);
ATerm v_8 (ATerm e_21, ATerm d_21, ATerm f_21, ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm Context_0_0 (ATerm);
ATerm w_8 (ATerm o_21, ATerm);
ATerm Warning_0_0 (ATerm);
ATerm x_8 (ATerm p_21, ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm mark_guardedlchoice_1_0 (ATerm f_109 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm e_109 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm d_109 (ATerm), ATerm);
ATerm y_8 (ATerm);
ATerm g_2 (ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm alltd_1_0 (ATerm v_84 (ATerm), ATerm);
ATerm h_2 (ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm z_8 (ATerm v_60, ATerm w_60, ATerm x_60, ATerm);
ATerm j_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm a_9 (ATerm p_60, ATerm t_60, ATerm r_60, ATerm);
ATerm q_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm y_3 (ATerm);
ATerm b_9 (ATerm j_60, ATerm n_60, ATerm l_60, ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm mark_rdef_0_0 (ATerm);
ATerm n_4 (ATerm);
ATerm IntroduceBound_0_0 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm c_9 (ATerm h_59, ATerm i_59, ATerm j_59, ATerm l_59, ATerm);
ATerm CompareEntries_0_0 (ATerm);
ATerm d_9 (ATerm s_57, ATerm t_57, ATerm r_57, ATerm);
ATerm r_4 (ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm e_9 (ATerm o_28, ATerm n_28, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm undefine_unbound_MarkVar_0_1 (ATerm f_58, ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm mark_build_vars_0_0 (ATerm);
ATerm f_9 (ATerm y_27, ATerm z_27, ATerm a_28, ATerm);
ATerm DeclareBound_0_0 (ATerm);
ATerm i_9 (ATerm w_27, ATerm x_27, ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm MarkAndBind_0_0 (ATerm);
ATerm mark_match_vars_0_0 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm j_9 (ATerm z_82 (ATerm), ATerm d_27, ATerm b_27, ATerm);
ATerm f_5 (ATerm);
ATerm DeclareUnbound_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm o_9 (ATerm c_79 (ATerm), ATerm v_21, ATerm u_21, ATerm);
ATerm foldr_3_0 (ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm);
ATerm p_9 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm z_21, ATerm y_21, ATerm);
ATerm q_9 (ATerm x_78 (ATerm), ATerm t_21, ATerm s_21, ATerm);
ATerm genzip_4_0 (ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm u_9 (ATerm x_600, ATerm c_601, ATerm p_57, ATerm);
ATerm while_not_2_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm);
ATerm for_3_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm s_85 (ATerm k_84, ATerm l_84, ATerm m_84, ATerm);
ATerm r_6 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm w_6 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm j_7 (ATerm);
ATerm free_vars_3_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm w_9 (ATerm q_27, ATerm r_27, ATerm);
ATerm end_scope_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_82 (ATerm), ATerm);
ATerm scope_2_0 (ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm h_8 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_88 (ATerm), ATerm);
ATerm i_8 (ATerm);
ATerm l_8 (ATerm);
ATerm n_8 (ATerm);
ATerm t_9 (ATerm);
ATerm spec_use_def_0_0 (ATerm);
ATerm y_9 (ATerm x_46, ATerm y_46, ATerm);
ATerm z_9 (ATerm l_50, ATerm m_50, ATerm);
ATerm b_10 (ATerm n_102 (ATerm), ATerm z_473, ATerm p_50, ATerm);
ATerm a_10 (ATerm h_50, ATerm i_50, ATerm);
ATerm f_10 (ATerm);
ATerm n_10 (ATerm);
ATerm output_1_0 (ATerm w_106 (ATerm), ATerm);
ATerm m_91 (ATerm g_91, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_10 (ATerm n_50, ATerm);
ATerm d_10 (ATerm z_46, ATerm a_47, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_93 (ATerm w_91, ATerm);
ATerm b_93 (ATerm a_92, ATerm b_92, ATerm c_92, ATerm);
ATerm c_93 (ATerm k_92, ATerm l_92, ATerm m_92, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm t_10 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm x_106 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm u_10 (ATerm);
ATerm w_10 (ATerm);
ATerm a_11 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm b_11 (ATerm);
ATerm e_11 (ATerm);
ATerm k_11 (ATerm);
ATerm p_11 (ATerm);
ATerm v_11 (ATerm);
ATerm w_11 (ATerm);
ATerm x_11 (ATerm);
ATerm a_12 (ATerm);
ATerm b_12 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm l_10 (ATerm o_51, ATerm p_51, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm n_12 (ATerm);
ATerm s_12 (ATerm);
ATerm t_12 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm x_12 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm d_80 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm e_96 (ATerm s_95, ATerm);
ATerm conc_0_0 (ATerm);
ATerm x_9 (ATerm u_51, ATerm t_51, ATerm);
ATerm j_10 (ATerm l_27, ATerm m_27, ATerm k_27, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm c_13 (ATerm);
ATerm p_13 (ATerm);
ATerm u_13 (ATerm);
ATerm stratego_warnings_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm e_10 (ATerm p_25, ATerm q_25, ATerm);
ATerm foldr_2_0 (ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm v_13 (ATerm);
ATerm w_13 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_103 (ATerm), ATerm);
ATerm c_14 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_14 (ATerm);
ATerm need_help_1_0 (ATerm n_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm l_14 (ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm x_79 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm h_10 (ATerm n_44, ATerm o_44, ATerm);
ATerm debug_1_0 (ATerm l_102 (ATerm), ATerm);
ATerm map_1_0 (ATerm n_79 (ATerm), ATerm);
ATerm q_14 (ATerm);
ATerm t_14 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm i_10 (ATerm c_29, ATerm d_29, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm u_14 (ATerm);
ATerm w_14 (ATerm);
ATerm a_15 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_65 (ATerm), ATerm t_65 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_108 (ATerm), ATerm);
ATerm k_15 (ATerm);
ATerm p_15 (ATerm);
ATerm q_15 (ATerm);
ATerm s_15 (ATerm);
ATerm parse_options_1_0 (ATerm p_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm);
ATerm u_15 (ATerm);
ATerm w_15 (ATerm);
ATerm x_15 (ATerm);
ATerm y_15 (ATerm);
ATerm z_15 (ATerm);
ATerm a_16 (ATerm);
ATerm c_16 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm f_0 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm v_8 (ATerm e_21, ATerm d_21, ATerm f_21, ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,t_0 = NULL,v_0 = NULL,x_0 = NULL;
  a_0 = t;
  t = (ATerm) ATempty;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_16, e_21);
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_16, e_21));
  t = j_9(f_0, v_0, x_0, t);
  t = (ATerm) ATempty;
  b_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_16, e_21);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_16, e_21));
  t = j_9(z_0, b_0, t_0, t);
  t = f_21;
  t = use_vars_0_0(t);
  t = a_0;
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,e_3 = NULL,f_3 = NULL,h_3 = NULL,l_3 = NULL;
  z_2 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      a_3 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
      e_3 = ATgetArgument(t, 2);
      u_2 = ATgetArgument(t, 3);
      t = u_2;
      if(match_cons(t, sym_StratRule_3))
        {
          v_2 = ATgetArgument(t, 0);
          w_2 = ATgetArgument(t, 1);
          y_2 = ATgetArgument(t, 2);
          {
            ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,z_3 = NULL;
            t = (ATerm) ATempty;
            x_3 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_16, a_3);
            z_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_16, a_3));
            t = j_9(b_1, x_3, z_3, t);
            t = (ATerm) ATempty;
            v_3 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_16, a_3);
            w_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_16, a_3));
            t = j_9(c_1, v_3, w_3, t);
            t = (ATerm) ATmakeAppl(sym__3, v_2, w_2, y_2);
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, a_3, b_3, e_3, (ATerm) ATmakeAppl(sym_StratRule_3, v_2, w_2, y_2));
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              v_2 = ATgetArgument(t, 0);
              w_2 = ATgetArgument(t, 1);
              y_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = z_2;
          {
            ATerm k_16 = t;
            int m_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_3 = NULL,d_3 = NULL,g_3 = NULL,i_3 = NULL;
                t = (ATerm) ATempty;
                g_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_16, a_3);
                i_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_16, a_3));
                t = j_9(d_1, g_3, i_3, t);
                t = (ATerm) ATempty;
                c_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_16, a_3);
                d_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_16, a_3));
                t = j_9(e_1, c_3, d_3, t);
                t = v_2;
                t = bind_vars_0_0(t);
                ;
                LocalPopChoice(m_16);
              }
            else
              {
                t = k_16;
                {
                  ATerm q_16 = t;
                  int r_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = y_2;
                      t = unbound_vars_0_0(t);
                      ;
                      LocalPopChoice(r_16);
                    }
                  else
                    {
                      t = q_16;
                      t = w_2;
                      t = use_vars_0_0(t);
                    }
                }
              }
            t = (ATerm) ATmakeAppl(sym_RDefT_4, a_3, b_3, e_3, (ATerm) ATmakeAppl(sym_Rule_3, v_2, w_2, y_2));
          }
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          a_3 = ATgetArgument(t, 0);
          b_3 = ATgetArgument(t, 1);
          e_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = e_3;
      if(match_cons(t, sym_Rule_3))
        {
          f_3 = ATgetArgument(t, 0);
          h_3 = ATgetArgument(t, 1);
          l_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_2;
      {
        ATerm t_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
            t = (ATerm) ATempty;
            a_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_16, a_3);
            b_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_16, a_3));
            t = j_9(m_1, a_5, b_5, t);
            t = (ATerm) ATempty;
            y_4 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_16, a_3);
            z_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_y_16, a_3));
            t = j_9(n_1, y_4, z_4, t);
            t = f_3;
            t = bind_vars_0_0(t);
            ;
            LocalPopChoice(v_16);
          }
        else
          {
            t = t_16;
            {
              ATerm z_16 = t;
              int b_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_3;
                  t = unbound_vars_0_0(t);
                  ;
                  LocalPopChoice(b_17);
                }
              else
                {
                  t = z_16;
                  t = h_3;
                  t = use_vars_0_0(t);
                }
            }
          }
        t = (ATerm) ATmakeAppl(sym_RDef_3, a_3, b_3, (ATerm) ATmakeAppl(sym_Rule_3, f_3, h_3, l_3));
      }
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm p_5 = NULL;
  p_5 = t;
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_6 = NULL,z_6 = NULL,h_7 = NULL;
        t = (ATerm) ATempty;
        z_6 = t;
        t = term_d_16;
        h_7 = t;
        t = term_j_17;
        t = i_9(h_7, z_6, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm q_17 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_17) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            t_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_t_17), t_6), term_r_17);
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        {
          ATerm u_17 = t;
          int v_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_7 = NULL,y_7 = NULL,e_8 = NULL;
              t = (ATerm) ATempty;
              y_7 = t;
              t = term_d_16;
              e_8 = t;
              t = term_j_17;
              t = i_9(e_8, y_7, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm w_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_17) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  s_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_t_17), s_7), term_x_17);
              ;
              LocalPopChoice(v_17);
            }
          else
            {
              t = u_17;
              {
                ATerm y_17 = t;
                int z_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_8 = NULL,q_8 = NULL,t_8 = NULL;
                    t = (ATerm) ATempty;
                    q_8 = t;
                    t = term_d_16;
                    t_8 = t;
                    t = term_j_17;
                    t = i_9(t_8, q_8, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm b_18 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) b_18) != ATmakeSymbol("q_0", 0, ATtrue)))
                          _fail(t);
                        m_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_t_17), m_8), term_x_17);
                    ;
                    LocalPopChoice(z_17);
                  }
                else
                  {
                    t = y_17;
                    {
                      ATerm d_18 = t;
                      int f_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_10 = NULL,p_10 = NULL,q_10 = NULL;
                          t = (ATerm) ATempty;
                          p_10 = t;
                          t = term_d_16;
                          q_10 = t;
                          t = term_j_17;
                          t = i_9(q_10, p_10, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm g_18 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) g_18) != ATmakeSymbol("l_0", 0, ATtrue)))
                                _fail(t);
                              m_10 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_t_17), m_10), term_x_17);
                          ;
                          LocalPopChoice(f_18);
                        }
                      else
                        {
                          t = d_18;
                          {
                            ATerm h_18 = t;
                            int i_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm v_10 = NULL,x_10 = NULL,y_10 = NULL;
                                t = (ATerm) ATempty;
                                x_10 = t;
                                t = term_d_16;
                                y_10 = t;
                                t = term_j_17;
                                t = i_9(y_10, x_10, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm j_18 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) j_18) != ATmakeSymbol("h_0", 0, ATtrue)))
                                      _fail(t);
                                    v_10 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_t_17), v_10), term_l_18);
                                ;
                                LocalPopChoice(i_18);
                              }
                            else
                              {
                                t = h_18;
                                {
                                  ATerm c_11 = NULL,f_11 = NULL,h_11 = NULL;
                                  t = (ATerm) ATempty;
                                  f_11 = t;
                                  t = term_d_16;
                                  h_11 = t;
                                  t = term_j_17;
                                  t = i_9(h_11, f_11, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm m_18 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) m_18) != ATmakeSymbol("c_0", 0, ATtrue)))
                                        _fail(t);
                                      c_11 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_t_17), c_11), term_l_18);
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
ATerm w_8 (ATerm o_21, ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_18), o_21), term_n_18);
  t = Context_0_0(t);
  k_6 = t;
  t = term_p_18;
  l_6 = t;
  t = SSL_printnl(l_6, k_6);
  t = k_6;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm t_7 = NULL;
  t_7 = t;
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_12 = NULL,y_12 = NULL,z_12 = NULL;
        t = (ATerm) ATempty;
        y_12 = t;
        t = term_e_16;
        z_12 = t;
        t = term_s_18;
        t = i_9(z_12, y_12, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm t_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_18) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            w_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_7), term_x_18), w_12), term_w_18);
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          ATerm y_18 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_13 = NULL,q_13 = NULL,s_13 = NULL;
              t = (ATerm) ATempty;
              q_13 = t;
              t = term_e_16;
              s_13 = t;
              t = term_s_18;
              t = i_9(s_13, q_13, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm c_19 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_19) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  d_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_7), term_x_18), d_13), term_d_19);
              ;
              LocalPopChoice(b_19);
            }
          else
            {
              t = y_18;
              {
                ATerm f_19 = t;
                int g_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_13 = NULL,d_14 = NULL,f_14 = NULL;
                    t = (ATerm) ATempty;
                    d_14 = t;
                    t = term_e_16;
                    f_14 = t;
                    t = term_s_18;
                    t = i_9(f_14, d_14, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm i_19 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) i_19) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        x_13 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_7), term_x_18), x_13), term_d_19);
                    ;
                    LocalPopChoice(g_19);
                  }
                else
                  {
                    t = f_19;
                    {
                      ATerm k_19 = t;
                      int l_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_14 = NULL,m_14 = NULL,n_14 = NULL;
                          t = (ATerm) ATempty;
                          m_14 = t;
                          t = term_e_16;
                          n_14 = t;
                          t = term_s_18;
                          t = i_9(n_14, m_14, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm m_19 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) m_19) != ATmakeSymbol("o_0", 0, ATtrue)))
                                _fail(t);
                              k_14 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_7), term_x_18), k_14), term_d_19);
                          ;
                          LocalPopChoice(l_19);
                        }
                      else
                        {
                          t = k_19;
                          {
                            ATerm p_19 = t;
                            int q_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm s_14 = NULL,x_14 = NULL,y_14 = NULL;
                                t = (ATerm) ATempty;
                                x_14 = t;
                                t = term_e_16;
                                y_14 = t;
                                t = term_s_18;
                                t = i_9(y_14, x_14, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm s_19 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) s_19) != ATmakeSymbol("j_0", 0, ATtrue)))
                                      _fail(t);
                                    s_14 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_7), term_x_18), s_14), term_t_19);
                                ;
                                LocalPopChoice(q_19);
                              }
                            else
                              {
                                t = p_19;
                                {
                                  ATerm g_15 = NULL,i_15 = NULL,j_15 = NULL;
                                  t = (ATerm) ATempty;
                                  i_15 = t;
                                  t = term_e_16;
                                  j_15 = t;
                                  t = term_s_18;
                                  t = i_9(j_15, i_15, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm u_19 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) u_19) != ATmakeSymbol("e_0", 0, ATtrue)))
                                        _fail(t);
                                      g_15 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_7), term_x_18), g_15), term_t_19);
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
ATerm x_8 (ATerm p_21, ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_19), p_21), term_n_18);
  t = Warning_0_0(t);
  c_8 = t;
  t = term_p_18;
  d_8 = t;
  t = SSL_printnl(d_8, c_8);
  t = c_8;
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL;
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_8 = NULL,k_8 = NULL;
      j_8 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      k_8 = t;
      t = SSLgetAnnotations(j_8);
      f_8 = t;
      t = k_8;
      LocalPopChoice(x_19);
      {
        ATerm o_8 = NULL;
        o_8 = t;
        t = f_8;
        {
          ATerm y_19 = t;
          int b_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm d_20 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) d_20) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm e_20 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(e_20) != AT_LIST) || !(ATisEmpty(e_20))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(b_20);
              _fail(t);
            }
          else
            {
              t = y_19;
              {
                ATerm g_20 = t;
                int h_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm i_20 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) i_20) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm j_20 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(j_20) != AT_LIST) || !(ATisEmpty(j_20))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_20);
                    t = (ATerm) ATmakeAppl(sym_Var_1, g_8);
                    t = x_8(g_8, t);
                    _fail(t);
                  }
                else
                  {
                    t = g_20;
                    {
                      ATerm k_20 = t;
                      int l_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm m_20 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) m_20) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm n_20 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(n_20) != AT_LIST) || !(ATisEmpty(n_20))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(l_20);
                          t = (ATerm) ATmakeAppl(sym_Var_1, g_8);
                          t = w_8(g_8, t);
                        }
                      else
                        {
                          t = k_20;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, g_8);
                          t = w_8(g_8, t);
                        }
                    }
                  }
              }
            }
          t = o_8;
        }
      }
    }
  else
    {
      t = w_19;
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_8 = NULL,r_8 = NULL,s_8 = NULL,u_8 = NULL,f_1 = NULL;
            u_8 = t;
            if(match_cons(t, sym_App_2))
              {
                r_8 = ATgetArgument(t, 0);
                s_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_8);
            p_8 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, r_8, s_8);
            f_1 = t;
            t = SSLsetAnnotations(f_1, p_8);
            LocalPopChoice(p_20);
            {
              ATerm g_9 = NULL,h_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,h_1 = NULL;
              n_9 = t;
              if(match_cons(t, sym_App_2))
                {
                  h_9 = ATgetArgument(t, 0);
                  k_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_9);
              g_9 = t;
              t = h_9;
              t = unbound_vars_0_0(t);
              l_9 = t;
              t = k_9;
              t = use_vars_0_0(t);
              m_9 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, l_9, m_9);
              h_1 = t;
              t = SSLsetAnnotations(h_1, g_9);
            }
          }
        else
          {
            t = o_20;
            {
              ATerm q_20 = t;
              int s_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_9 = NULL,v_9 = NULL,g_10 = NULL,j_1 = NULL;
                  g_10 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      v_9 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_10);
                  r_9 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, v_9);
                  j_1 = t;
                  t = SSLsetAnnotations(j_1, r_9);
                  LocalPopChoice(s_20);
                  {
                    ATerm k_10 = NULL,o_10 = NULL,r_10 = NULL,d_11 = NULL,l_1 = NULL;
                    d_11 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        o_10 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(d_11);
                    k_10 = t;
                    t = o_10;
                    t = unbound_vars_0_0(t);
                    r_10 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, r_10);
                    l_1 = t;
                    t = SSLsetAnnotations(l_1, k_10);
                  }
                }
              else
                {
                  t = q_20;
                  t = SRTS_some(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_11 = NULL,l_11 = NULL,m_11 = NULL,q_1 = NULL;
      m_11 = t;
      if(match_cons(t, sym_Var_1))
        {
          l_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_11);
      g_11 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, l_11);
      q_1 = t;
      t = SSLsetAnnotations(q_1, g_11);
      LocalPopChoice(u_20);
      _fail(t);
    }
  else
    {
      t = t_20;
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_11 = NULL,o_11 = NULL,q_11 = NULL,r_11 = NULL,r_1 = NULL;
            r_11 = t;
            if(match_cons(t, sym_App_2))
              {
                o_11 = ATgetArgument(t, 0);
                q_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_11);
            n_11 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, o_11, q_11);
            r_1 = t;
            t = SSLsetAnnotations(r_1, n_11);
            LocalPopChoice(x_20);
            {
              ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,s_1 = NULL;
              e_12 = t;
              if(match_cons(t, sym_App_2))
                {
                  t_11 = ATgetArgument(t, 0);
                  u_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_12);
              s_11 = t;
              t = t_11;
              t = unbound_vars_0_0(t);
              c_12 = t;
              t = u_11;
              t = use_vars_0_0(t);
              d_12 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, c_12, d_12);
              s_1 = t;
              t = SSLsetAnnotations(s_1, s_11);
            }
          }
        else
          {
            t = w_20;
            {
              ATerm y_20 = t;
              int z_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_12 = NULL,h_12 = NULL,i_12 = NULL,t_1 = NULL;
                  i_12 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      h_12 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_12);
                  f_12 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, h_12);
                  t_1 = t;
                  t = SSLsetAnnotations(t_1, f_12);
                  LocalPopChoice(z_20);
                  {
                    ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,u_1 = NULL;
                    m_12 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        k_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(m_12);
                    j_12 = t;
                    t = k_12;
                    t = unbound_vars_0_0(t);
                    l_12 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, l_12);
                    u_1 = t;
                    t = SSLsetAnnotations(u_1, j_12);
                  }
                }
              else
                {
                  t = y_20;
                  t = SRTS_some(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,c_2 = NULL;
      g_13 = t;
      if(match_cons(t, sym_Build_1))
        {
          f_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_13);
      e_13 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, f_13);
      c_2 = t;
      t = SSLsetAnnotations(c_2, e_13);
      LocalPopChoice(b_21);
      {
        ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,d_2 = NULL;
        k_13 = t;
        if(match_cons(t, sym_Build_1))
          {
            i_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_13);
        h_13 = t;
        t = i_13;
        t = use_vars_0_0(t);
        j_13 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, j_13);
        d_2 = t;
        t = SSLsetAnnotations(d_2, h_13);
      }
    }
  else
    {
      t = a_21;
      {
        ATerm c_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,e_2 = NULL;
            n_13 = t;
            if(match_cons(t, sym_Match_1))
              {
                m_13 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_13);
            l_13 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, m_13);
            e_2 = t;
            t = SSLsetAnnotations(e_2, l_13);
            LocalPopChoice(g_21);
            {
              ATerm o_13 = NULL,r_13 = NULL,t_13 = NULL,y_13 = NULL,j_2 = NULL;
              y_13 = t;
              if(match_cons(t, sym_Match_1))
                {
                  r_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(y_13);
              o_13 = t;
              t = r_13;
              t = bind_vars_0_0(t);
              t_13 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, t_13);
              j_2 = t;
              t = SSLsetAnnotations(j_2, o_13);
            }
          }
        else
          {
            t = c_21;
            {
              ATerm h_21 = t;
              int i_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,e_14 = NULL,g_14 = NULL,k_2 = NULL;
                  g_14 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      a_14 = ATgetArgument(t, 0);
                      b_14 = ATgetArgument(t, 1);
                      e_14 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_14);
                  z_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, a_14, b_14, e_14);
                  k_2 = t;
                  t = SSLsetAnnotations(k_2, z_13);
                  LocalPopChoice(i_21);
                  {
                    ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,k_17 = NULL;
                    d_17 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        e_17 = ATgetArgument(t, 0);
                        f_17 = ATgetArgument(t, 1);
                        k_17 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm j_21 = t;
                      int k_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_15 = NULL,b_16 = NULL,l_2 = NULL;
                          t = SSLgetAnnotations(d_17);
                          v_15 = t;
                          t = e_17;
                          t = bind_vars_0_0(t);
                          b_16 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, b_16, f_17, k_17);
                          l_2 = t;
                          t = SSLsetAnnotations(l_2, v_15);
                          ;
                          LocalPopChoice(k_21);
                        }
                      else
                        {
                          t = j_21;
                          {
                            ATerm l_21 = t;
                            int n_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm s_16 = NULL,g_17 = NULL,m_2 = NULL;
                                t = SSLgetAnnotations(d_17);
                                s_16 = t;
                                t = k_17;
                                t = unbound_vars_0_0(t);
                                g_17 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, e_17, f_17, g_17);
                                m_2 = t;
                                t = SSLsetAnnotations(m_2, s_16);
                                ;
                                LocalPopChoice(n_21);
                              }
                            else
                              {
                                t = l_21;
                                {
                                  ATerm k_18 = NULL,u_18 = NULL,n_2 = NULL;
                                  t = SSLgetAnnotations(d_17);
                                  k_18 = t;
                                  t = f_17;
                                  t = use_vars_0_0(t);
                                  u_18 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, e_17, u_18, k_17);
                                  n_2 = t;
                                  t = SSLsetAnnotations(n_2, k_18);
                                }
                              }
                          }
                        }
                    }
                  }
                }
              else
                {
                  t = h_21;
                  {
                    ATerm q_21 = t;
                    int r_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,o_2 = NULL;
                        p_17 = t;
                        if(match_cons(t, sym_PrimT_3))
                          {
                            m_17 = ATgetArgument(t, 0);
                            n_17 = ATgetArgument(t, 1);
                            o_17 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(p_17);
                        l_17 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, m_17, n_17, o_17);
                        o_2 = t;
                        t = SSLsetAnnotations(o_2, l_17);
                        LocalPopChoice(r_21);
                        {
                          ATerm v_18 = NULL,z_18 = NULL,a_19 = NULL,e_19 = NULL;
                          v_18 = t;
                          if(match_cons(t, sym_PrimT_3))
                            {
                              z_18 = ATgetArgument(t, 0);
                              a_19 = ATgetArgument(t, 1);
                              e_19 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          {
                            ATerm w_21 = t;
                            int x_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_19 = NULL,n_19 = NULL,p_2 = NULL;
                                t = SSLgetAnnotations(v_18);
                                j_19 = t;
                                t = a_19;
                                t = unbound_vars_0_0(t);
                                n_19 = t;
                                t = (ATerm) ATmakeAppl(sym_PrimT_3, z_18, n_19, e_19);
                                p_2 = t;
                                t = SSLsetAnnotations(p_2, j_19);
                                ;
                                LocalPopChoice(x_21);
                              }
                            else
                              {
                                t = w_21;
                                {
                                  ATerm a_20 = NULL,f_20 = NULL,q_2 = NULL;
                                  t = SSLgetAnnotations(v_18);
                                  a_20 = t;
                                  t = e_19;
                                  t = use_vars_0_0(t);
                                  f_20 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, z_18, a_19, f_20);
                                  q_2 = t;
                                  t = SSLsetAnnotations(q_2, a_20);
                                }
                              }
                          }
                        }
                      }
                    else
                      {
                        t = q_21;
                        {
                          ATerm a_22 = t;
                          int b_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_19 = NULL,o_19 = NULL,r_19 = NULL,z_19 = NULL,c_20 = NULL,r_2 = NULL;
                              c_20 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  o_19 = ATgetArgument(t, 0);
                                  r_19 = ATgetArgument(t, 1);
                                  z_19 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(c_20);
                              h_19 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, o_19, r_19, z_19);
                              r_2 = t;
                              t = SSLsetAnnotations(r_2, h_19);
                              LocalPopChoice(b_22);
                              {
                                ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
                                w_22 = t;
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    x_22 = ATgetArgument(t, 0);
                                    y_22 = ATgetArgument(t, 1);
                                    z_22 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm c_22 = t;
                                  int d_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm r_20 = NULL,v_20 = NULL,s_2 = NULL;
                                      t = SSLgetAnnotations(w_22);
                                      r_20 = t;
                                      t = y_22;
                                      t = unbound_vars_0_0(t);
                                      v_20 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, x_22, v_20, z_22);
                                      s_2 = t;
                                      t = SSLsetAnnotations(s_2, r_20);
                                      ;
                                      LocalPopChoice(d_22);
                                    }
                                  else
                                    {
                                      t = c_22;
                                      {
                                        ATerm m_21 = NULL,g_22 = NULL,t_2 = NULL;
                                        t = SSLgetAnnotations(w_22);
                                        m_21 = t;
                                        t = z_22;
                                        t = use_vars_0_0(t);
                                        g_22 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, x_22, y_22, g_22);
                                        t_2 = t;
                                        t = SSLsetAnnotations(t_2, m_21);
                                      }
                                    }
                                }
                              }
                            }
                          else
                            {
                              t = a_22;
                              t = SRTS_some(unbound_vars_0_0, t);
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
ATerm o_1 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm x_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      z_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
      b_24 = ATgetArgument(t, 2);
      x_23 = ATgetArgument(t, 3);
      {
        ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
        t = (ATerm) ATempty;
        o_24 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_22, z_23);
        p_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_22, z_23));
        t = j_9(o_1, o_24, p_24, t);
        t = (ATerm) ATempty;
        m_24 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_22, z_23);
        n_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_22, z_23));
        t = j_9(p_1, m_24, n_24, t);
        t = x_23;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, z_23, a_24, b_24, x_23);
      }
    }
  else
    {
      ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL,z_24 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          z_23 = ATgetArgument(t, 0);
          a_24 = ATgetArgument(t, 1);
          b_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      v_24 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_22, z_23);
      z_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_22, z_23));
      t = j_9(v_1, v_24, z_24, t);
      t = (ATerm) ATempty;
      t_24 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_22, z_23);
      u_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_22, z_23));
      t = j_9(w_1, t_24, u_24, t);
      t = b_24;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, z_23, a_24, b_24);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm f_109 (ATerm), ATerm t)
{
  ATerm a_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,h_5 = NULL;
  ATerm x_1 (ATerm t)
  {
    ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,d_26 = NULL,e_26 = NULL,l_5 = NULL,k_5 = NULL;
    e_26 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        t_25 = ATgetArgument(t, 0);
        u_25 = ATgetArgument(t, 1);
        v_25 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_26);
    s_25 = t;
    t = t_25;
    t = f_109(t);
    w_25 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_25, u_25, v_25);
    k_5 = t;
    t = SSLsetAnnotations(k_5, s_25);
    d_26 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        m_25 = ATgetArgument(t, 0);
        n_25 = ATgetArgument(t, 1);
        o_25 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_26);
    l_25 = t;
    t = n_25;
    t = f_109(t);
    r_25 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, m_25, r_25, o_25);
    l_5 = t;
    t = SSLsetAnnotations(l_5, l_25);
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,m_5 = NULL;
    k_26 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        g_26 = ATgetArgument(t, 0);
        h_26 = ATgetArgument(t, 1);
        i_26 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_26);
    f_26 = t;
    t = i_26;
    t = f_109(t);
    j_26 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, g_26, h_26, j_26);
    m_5 = t;
    t = SSLsetAnnotations(m_5, f_26);
    return(t);
  }
  if(((f_25 != NULL) && (f_25 != t)))
    _fail(t);
  else
    f_25 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      if(((c_25 != NULL) && (c_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_25 = ATgetArgument(t, 0);
      if(((d_25 != NULL) && (d_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_25 = ATgetArgument(t, 1);
      if(((e_25 != NULL) && (e_25 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        e_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_25);
  if(((a_25 != NULL) && (a_25 != t)))
    _fail(t);
  else
    a_25 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, c_25, d_25, e_25);
  if(((h_5 != NULL) && (h_5 != t)))
    _fail(t);
  else
    h_5 = t;
  t = SSLsetAnnotations(h_5, a_25);
  t = abstract_choice_2_0(x_1, y_1, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,t_26 = NULL,h_27 = NULL,t_5 = NULL;
  ATerm z_1 (ATerm t)
  {
    ATerm o_27 = NULL,s_27 = NULL,d_28 = NULL,g_28 = NULL,h_28 = NULL,u_5 = NULL;
    h_28 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        s_27 = ATgetArgument(t, 0);
        d_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_28);
    o_27 = t;
    t = s_27;
    t = e_109(t);
    g_28 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, g_28, d_28);
    u_5 = t;
    t = SSLsetAnnotations(u_5, o_27);
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,u_28 = NULL,v_28 = NULL,v_5 = NULL;
    v_28 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        j_28 = ATgetArgument(t, 0);
        k_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_28);
    i_28 = t;
    t = k_28;
    t = e_109(t);
    u_28 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, j_28, u_28);
    v_5 = t;
    t = SSLsetAnnotations(v_5, i_28);
    return(t);
  }
  if(((h_27 != NULL) && (h_27 != t)))
    _fail(t);
  else
    h_27 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      if(((m_26 != NULL) && (m_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_26 = ATgetArgument(t, 0);
      if(((t_26 != NULL) && (t_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_27);
  if(((l_26 != NULL) && (l_26 != t)))
    _fail(t);
  else
    l_26 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, m_26, t_26);
  if(((t_5 != NULL) && (t_5 != t)))
    _fail(t);
  else
    t_5 = t;
  t = SSLsetAnnotations(t_5, l_26);
  t = abstract_choice_2_0(z_1, a_2, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm t)
{
  ATerm w_28 = NULL,y_28 = NULL,z_28 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  f_29 = t;
  t = save_MarkVar_0_0(t);
  w_28 = t;
  t = f_29;
  t = g_109(t);
  e_29 = t;
  t = save_MarkVar_0_0(t);
  y_28 = t;
  t = term_j_22;
  h_29 = t;
  t = SSL_table_destroy(h_29);
  t = term_j_22;
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_22, w_28);
  t = e_9(g_29, w_28, t);
  t = e_29;
  t = h_109(t);
  z_28 = t;
  t = y_28;
  t = isect_MarkVar_0_0(t);
  t = z_28;
  return(t);
}
ATerm mark_choice_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,n_29 = NULL,q_29 = NULL,t_29 = NULL,z_5 = NULL;
  ATerm b_2 (ATerm t)
  {
    ATerm z_29 = NULL,a_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,a_6 = NULL;
    e_30 = t;
    if(match_cons(t, sym_Choice_2))
      {
        a_30 = ATgetArgument(t, 0);
        c_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_30);
    z_29 = t;
    t = a_30;
    t = d_109(t);
    d_30 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, d_30, c_30);
    a_6 = t;
    t = SSLsetAnnotations(a_6, z_29);
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm f_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,b_6 = NULL;
    n_30 = t;
    if(match_cons(t, sym_Choice_2))
      {
        k_30 = ATgetArgument(t, 0);
        l_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_30);
    f_30 = t;
    t = l_30;
    t = d_109(t);
    m_30 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, k_30, m_30);
    b_6 = t;
    t = SSLsetAnnotations(b_6, f_30);
    return(t);
  }
  if(((t_29 != NULL) && (t_29 != t)))
    _fail(t);
  else
    t_29 = t;
  if(match_cons(t, sym_Choice_2))
    {
      if(((n_29 != NULL) && (n_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_29 = ATgetArgument(t, 0);
      if(((q_29 != NULL) && (q_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_29);
  if(((i_29 != NULL) && (i_29 != t)))
    _fail(t);
  else
    i_29 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, n_29, q_29);
  if(((z_5 != NULL) && (z_5 != t)))
    _fail(t);
  else
    z_5 = t;
  t = SSLsetAnnotations(z_5, i_29);
  t = abstract_choice_2_0(b_2, f_2, t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,g_6 = NULL,f_6 = NULL;
  p_30 = t;
  t = save_MarkVar_0_0(t);
  o_30 = t;
  t = p_30;
  if(match_cons(t, sym_Rec_2))
    {
      b_31 = ATgetArgument(t, 0);
      c_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_30);
  a_31 = t;
  t = c_31;
  t = mark_buv_0_0(t);
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, b_31, d_31);
  f_6 = t;
  t = SSLsetAnnotations(f_6, a_31);
  t = o_30;
  t = isect_MarkVar_0_0(t);
  t = p_30;
  if(match_cons(t, sym_Rec_2))
    {
      r_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_30);
  q_30 = t;
  t = s_30;
  t = mark_buv_0_0(t);
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, r_30, t_30);
  g_6 = t;
  t = SSLsetAnnotations(g_6, q_30);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,m_31 = NULL,n_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,z_31 = NULL,a_32 = NULL,c_32 = NULL,h_32 = NULL,j_32 = NULL,n_6 = NULL,m_6 = NULL,j_6 = NULL;
  j_32 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      z_31 = ATgetArgument(t, 0);
      a_32 = ATgetArgument(t, 1);
      c_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_32);
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, z_31, a_32, c_32);
  j_6 = t;
  t = SSLsetAnnotations(j_6, w_31);
  h_32 = t;
  t = save_MarkVar_0_0(t);
  e_31 = t;
  t = h_32;
  if(match_cons(t, sym_PrimT_3))
    {
      p_31 = ATgetArgument(t, 0);
      q_31 = ATgetArgument(t, 1);
      r_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_32);
  n_31 = t;
  t = r_31;
  t = map_1_0(g_2, t);
  u_31 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, p_31, q_31, u_31);
  m_6 = t;
  t = SSLsetAnnotations(m_6, n_31);
  v_31 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      g_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
      i_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_31);
  f_31 = t;
  t = h_31;
  t = mark_buv_0_0(t);
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, g_31, j_31, i_31);
  n_6 = t;
  t = SSLsetAnnotations(n_6, f_31);
  m_31 = t;
  t = e_31;
  t = isect_MarkVar_0_0(t);
  t = m_31;
  return(t);
}
ATerm alltd_1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm l_32 (ATerm t)
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_84(t);
        ;
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        t = SRTS_all(l_32, t);
      }
    return(t);
  }
  t = l_32(t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  m_34 = t;
  if(match_cons(t, sym_CallT_3))
    {
      n_34 = ATgetArgument(t, 0);
      o_34 = ATgetArgument(t, 1);
      l_34 = ATgetArgument(t, 2);
      {
        ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,j_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,h_24 = NULL,x_6 = NULL,v_6 = NULL,u_6 = NULL;
        t = SSLgetAnnotations(m_34);
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, n_34, o_34, l_34);
        u_6 = t;
        t = SSLsetAnnotations(u_6, u_23);
        h_24 = t;
        t = save_MarkVar_0_0(t);
        a_23 = t;
        t = h_24;
        if(match_cons(t, sym_CallT_3))
          {
            m_23 = ATgetArgument(t, 0);
            n_23 = ATgetArgument(t, 1);
            o_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_24);
        l_23 = t;
        t = o_23;
        t = map_1_0(h_2, t);
        s_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, m_23, n_23, s_23);
        v_6 = t;
        t = SSLsetAnnotations(v_6, l_23);
        t_23 = t;
        if(match_cons(t, sym_CallT_3))
          {
            c_23 = ATgetArgument(t, 0);
            e_23 = ATgetArgument(t, 1);
            f_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_23);
        b_23 = t;
        t = e_23;
        t = mark_buv_0_0(t);
        g_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, c_23, g_23, f_23);
        x_6 = t;
        t = SSLsetAnnotations(x_6, b_23);
        j_23 = t;
        t = a_23;
        t = isect_MarkVar_0_0(t);
        t = j_23;
      }
    }
  else
    {
      ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,x_25 = NULL,y_25 = NULL,b_26 = NULL,a_7 = NULL,y_6 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          n_34 = ATgetArgument(t, 0);
          o_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_34);
      y_25 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, n_34, o_34);
      y_6 = t;
      t = SSLsetAnnotations(y_6, y_25);
      b_26 = t;
      t = save_MarkVar_0_0(t);
      g_25 = t;
      t = b_26;
      if(match_cons(t, sym_Call_2))
        {
          i_25 = ATgetArgument(t, 0);
          j_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_26);
      h_25 = t;
      t = j_25;
      t = mark_buv_0_0(t);
      k_25 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, i_25, k_25);
      a_7 = t;
      t = SSLsetAnnotations(a_7, h_25);
      x_25 = t;
      t = g_25;
      t = isect_MarkVar_0_0(t);
      t = x_25;
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm z_8 (ATerm v_60, ATerm w_60, ATerm x_60, ATerm t)
{
  ATerm g_35 = NULL;
  ATerm x_2 (ATerm t)
  {
    t = w_60;
    t = map_1_0(IntroduceBound_0_0, t);
    t = x_60;
    t = mark_build_vars_0_0(t);
    if(((g_35 != NULL) && (g_35 != t)))
      _fail(t);
    else
      g_35 = t;
    return(t);
  }
  t = scope_2_0(i_2, x_2, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, v_60, w_60, not_null(g_35));
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm s_35 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_35);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm m_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_22);
    }
  else
    {
      t = m_22;
      {
        ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            v_35 = ATgetArgument(t, 0);
            t = v_35;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                v_35 = ATgetArgument(t, 0);
                w_35 = ATgetArgument(t, 1);
                x_35 = ATgetArgument(t, 2);
                y_35 = ATgetArgument(t, 3);
                t = x_35;
                t = map_1_0(o_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    v_35 = ATgetArgument(t, 0);
                    w_35 = ATgetArgument(t, 1);
                    x_35 = ATgetArgument(t, 2);
                    y_35 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = x_35;
                t = map_1_0(p_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm s_36 = NULL;
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_36 = ATgetArgument(t, 0);
          {
            ATerm q_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_22);
      t = s_36;
    }
  else
    {
      t = o_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_36;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm o_37 = NULL;
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_37 = ATgetArgument(t, 0);
          {
            ATerm t_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_22);
      t = o_37;
    }
  else
    {
      t = r_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_37;
    }
  return(t);
}
ATerm a_9 (ATerm p_60, ATerm t_60, ATerm r_60, ATerm t)
{
  ATerm n_35 = NULL,q_35 = NULL,r_35 = NULL;
  ATerm k_3 (ATerm t)
  {
    t = p_60;
    t = free_vars_3_0(m_3, n_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = p_60;
    t = mark_match_vars_0_0(t);
    if(((n_35 != NULL) && (n_35 != t)))
      _fail(t);
    else
      n_35 = t;
    t = r_60;
    t = mark_buv_0_0(t);
    if(((q_35 != NULL) && (q_35 != t)))
      _fail(t);
    else
      q_35 = t;
    t = t_60;
    t = mark_build_vars_0_0(t);
    if(((r_35 != NULL) && (r_35 != t)))
      _fail(t);
    else
      r_35 = t;
    return(t);
  }
  t = scope_2_0(j_3, k_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_35), not_null(r_35), not_null(q_35)));
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm x_37 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_37);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm c_38 = NULL,d_38 = NULL,f_38 = NULL,k_38 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            c_38 = ATgetArgument(t, 0);
            t = c_38;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                c_38 = ATgetArgument(t, 0);
                d_38 = ATgetArgument(t, 1);
                f_38 = ATgetArgument(t, 2);
                k_38 = ATgetArgument(t, 3);
                t = f_38;
                t = map_1_0(u_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    c_38 = ATgetArgument(t, 0);
                    d_38 = ATgetArgument(t, 1);
                    f_38 = ATgetArgument(t, 2);
                    k_38 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = f_38;
                t = map_1_0(y_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm y_38 = NULL;
  ATerm d_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_38 = ATgetArgument(t, 0);
          {
            ATerm i_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_23);
      t = y_38;
    }
  else
    {
      t = d_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_38;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm q_39 = NULL;
  ATerm k_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_39 = ATgetArgument(t, 0);
          {
            ATerm q_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_23);
      t = q_39;
    }
  else
    {
      t = k_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_39;
    }
  return(t);
}
ATerm b_9 (ATerm j_60, ATerm n_60, ATerm l_60, ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  ATerm r_3 (ATerm t)
  {
    t = j_60;
    t = free_vars_3_0(s_3, t_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = j_60;
    t = mark_match_vars_0_0(t);
    if(((u_37 != NULL) && (u_37 != t)))
      _fail(t);
    else
      u_37 = t;
    t = l_60;
    t = mark_buv_0_0(t);
    if(((v_37 != NULL) && (v_37 != t)))
      _fail(t);
    else
      v_37 = t;
    t = n_60;
    t = mark_build_vars_0_0(t);
    if(((w_37 != NULL) && (w_37 != t)))
      _fail(t);
    else
      w_37 = t;
    return(t);
  }
  t = scope_2_0(q_3, r_3, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_37), not_null(w_37), not_null(v_37)));
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm y_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_41);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm r_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = r_23;
      {
        ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            a_42 = ATgetArgument(t, 0);
            t = a_42;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                a_42 = ATgetArgument(t, 0);
                b_42 = ATgetArgument(t, 1);
                c_42 = ATgetArgument(t, 2);
                d_42 = ATgetArgument(t, 3);
                t = c_42;
                t = map_1_0(c_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    a_42 = ATgetArgument(t, 0);
                    b_42 = ATgetArgument(t, 1);
                    c_42 = ATgetArgument(t, 2);
                    d_42 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = c_42;
                t = map_1_0(d_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm p_42 = NULL;
  ATerm w_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_42 = ATgetArgument(t, 0);
          {
            ATerm c_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_23);
      t = p_42;
    }
  else
    {
      t = w_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_42;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm r_43 = NULL;
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_43 = ATgetArgument(t, 0);
          {
            ATerm f_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_24);
      t = r_43;
    }
  else
    {
      t = d_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_43;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm z_44 = NULL;
  ATerm g_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_44 = ATgetArgument(t, 0);
          {
            ATerm j_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_24);
      t = z_44;
    }
  else
    {
      t = g_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_44;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm e_45 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_45);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      {
        ATerm g_45 = NULL,h_45 = NULL,j_45 = NULL,k_45 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            g_45 = ATgetArgument(t, 0);
            t = g_45;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                g_45 = ATgetArgument(t, 0);
                h_45 = ATgetArgument(t, 1);
                j_45 = ATgetArgument(t, 2);
                k_45 = ATgetArgument(t, 3);
                t = j_45;
                t = map_1_0(j_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    g_45 = ATgetArgument(t, 0);
                    h_45 = ATgetArgument(t, 1);
                    j_45 = ATgetArgument(t, 2);
                    k_45 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = j_45;
                t = map_1_0(k_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm e_46 = NULL;
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_46 = ATgetArgument(t, 0);
          {
            ATerm s_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_24);
      t = e_46;
    }
  else
    {
      t = q_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_46;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm i_47 = NULL;
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_47 = ATgetArgument(t, 0);
          {
            ATerm y_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_24);
      t = i_47;
    }
  else
    {
      t = w_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_47;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,w_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,g_41 = NULL,h_41 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      w_40 = ATgetArgument(t, 0);
      y_40 = ATgetArgument(t, 1);
      z_40 = ATgetArgument(t, 2);
      {
        ATerm l_41 = NULL,n_41 = NULL,p_41 = NULL,x_41 = NULL;
        t = z_40;
        if(match_cons(t, sym_Rule_3))
          {
            r_40 = ATgetArgument(t, 0);
            s_40 = ATgetArgument(t, 1);
            t_40 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = z_40;
        t = free_vars_3_0(a_4, b_4, tboundin_3_0, t);
        l_41 = t;
        {
          ATerm f_4 (ATerm t)
          {
            t = l_41;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = r_40;
            t = mark_match_vars_0_0(t);
            if(((n_41 != NULL) && (n_41 != t)))
              _fail(t);
            else
              n_41 = t;
            t = t_40;
            t = mark_buv_0_0(t);
            if(((p_41 != NULL) && (p_41 != t)))
              _fail(t);
            else
              p_41 = t;
            t = s_40;
            t = mark_build_vars_0_0(t);
            if(((x_41 != NULL) && (x_41 != t)))
              _fail(t);
            else
              x_41 = t;
            return(t);
          }
          t = scope_2_0(e_4, f_4, t);
          t = (ATerm) ATmakeAppl(sym_RDef_3, w_40, y_40, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_41), not_null(x_41), not_null(p_41)));
        }
      }
    }
  else
    {
      ATerm z_43 = NULL,a_44 = NULL,g_44 = NULL,i_44 = NULL,v_44 = NULL,w_44 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          w_40 = ATgetArgument(t, 0);
          y_40 = ATgetArgument(t, 1);
          z_40 = ATgetArgument(t, 2);
          a_41 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = a_41;
      if(match_cons(t, sym_Rule_3))
        {
          b_41 = ATgetArgument(t, 0);
          g_41 = ATgetArgument(t, 1);
          h_41 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_40;
      t = map_1_0(g_4, t);
      z_43 = t;
      t = a_41;
      t = free_vars_3_0(h_4, i_4, tboundin_3_0, t);
      w_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_44, z_43);
      t = diff_0_0(t);
      a_44 = t;
      {
        ATerm m_4 (ATerm t)
        {
          t = z_43;
          t = map_1_0(IntroduceBound_0_0, t);
          t = a_44;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = b_41;
          t = mark_match_vars_0_0(t);
          if(((g_44 != NULL) && (g_44 != t)))
            _fail(t);
          else
            g_44 = t;
          t = h_41;
          t = mark_buv_0_0(t);
          if(((i_44 != NULL) && (i_44 != t)))
            _fail(t);
          else
            i_44 = t;
          t = g_41;
          t = mark_build_vars_0_0(t);
          if(((v_44 != NULL) && (v_44 != t)))
            _fail(t);
          else
            v_44 = t;
          return(t);
        }
        t = scope_2_0(l_4, m_4, t);
        t = (ATerm) ATmakeAppl(sym_RDefT_4, w_40, y_40, z_40, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_44), not_null(v_44), not_null(i_44)));
      }
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,s_47 = NULL;
  m_47 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_47);
  n_47 = t;
  t = term_a_26;
  s_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, m_47), term_a_26);
  t = j_9(n_4, n_47, s_47, t);
  t = m_47;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm y_47 = NULL;
  ATerm c_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_47 = ATgetArgument(t, 0);
          {
            ATerm o_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_26);
      t = y_47;
    }
  else
    {
      t = c_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_47;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm c_9 (ATerm h_59, ATerm i_59, ATerm j_59, ATerm l_59, ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL;
  t = j_59;
  t = map_1_0(o_4, t);
  u_47 = t;
  {
    ATerm q_4 (ATerm t)
    {
      t = u_47;
      t = map_1_0(IntroduceBound_0_0, t);
      t = l_59;
      t = mark_buv_0_0(t);
      if(((v_47 != NULL) && (v_47 != t)))
        _fail(t);
      else
        v_47 = t;
      return(t);
    }
    t = scope_2_0(p_4, q_4, t);
    t = (ATerm) ATmakeAppl(sym_SDefT_4, h_59, i_59, j_59, not_null(v_47));
  }
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,d_49 = NULL;
  x_48 = t;
  if(match_cons(t, sym__2))
    {
      y_48 = ATgetArgument(t, 0);
      b_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_49;
  if(match_cons(t, sym_Undefined_0))
    {
      t = y_48;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_p_26;
        }
      else
        {
          t = term_p_26;
        }
    }
  else
    {
      ATerm q_26 = t;
      int r_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm s_26 = ATgetArgument(t, 0);
              d_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(r_26);
          t = y_48;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_p_26;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  z_48 = ATgetArgument(t, 0);
                  a_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm u_26 = t;
                int v_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, a_49, d_49);
                    {
                      ATerm w_26 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm y_26 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              y_26 = ATgetArgument(t, 0);
                              if((y_26 != ATgetArgument(t, 1)))
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
                          t = w_26;
                        }
                      t = (ATerm) ATmakeAppl(sym_Defined_2, z_48, term_x_26);
                    }
                    ;
                    LocalPopChoice(v_26);
                  }
                else
                  {
                    t = u_26;
                    t = d_49;
                    if((a_49 != t))
                      {
                        _fail(t);
                      }
                    t = y_48;
                  }
              }
            }
        }
      else
        {
          t = q_26;
          t = y_48;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_p_26;
        }
    }
  return(t);
}
ATerm d_9 (ATerm s_57, ATerm t_57, ATerm r_57, ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  t = term_j_22;
  l_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_22, s_57);
  t = i_10(l_49, s_57, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_49 = ATgetFirst((ATermList) t);
      {
        ATerm z_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_57, j_49);
  t = CompareEntries_0_0(t);
  k_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_57, (ATerm) ATinsert(CheckATermList(r_57), k_49));
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm f_50 = NULL,j_50 = NULL,k_50 = NULL,s_50 = NULL,t_50 = NULL;
  t_50 = t;
  if(match_cons(t, sym__2))
    {
      f_50 = ATgetArgument(t, 0);
      j_50 = ATgetArgument(t, 1);
      t = j_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_50 = ATgetFirst((ATermList) t);
          s_50 = (ATerm) ATgetNext((ATermList) t);
          t = k_50;
          {
            ATerm a_27 = t;
            int c_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm e_27 = ATgetArgument(t, 0);
                    ATerm f_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(c_27);
                t = f_50;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = t_50;
                  }
                else
                  {
                    ATerm g_27 = t;
                    int i_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = t_50;
                        t = d_9(f_50, k_50, s_50, t);
                        ;
                        LocalPopChoice(i_27);
                      }
                    else
                      {
                        t = g_27;
                        t = t_50;
                      }
                  }
              }
            else
              {
                t = a_27;
                t = f_50;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = t_50;
                  }
                else
                  {
                    t = t_50;
                  }
              }
          }
        }
      else
        {
          t = f_50;
          if(match_cons(t, sym_Scopes_0))
            {
              t = t_50;
            }
          else
            {
              t = t_50;
            }
        }
    }
  else
    {
      t = t_50;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm y_49 = NULL,d_50 = NULL,e_50 = NULL;
  t = map_1_0(r_4, t);
  y_49 = t;
  t = term_j_22;
  e_50 = t;
  t = SSL_table_destroy(e_50);
  t = term_j_22;
  d_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_22, y_49);
  t = e_9(d_50, y_49, t);
  t = y_49;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm c_52 = NULL,g_52 = NULL,i_52 = NULL;
  i_52 = t;
  {
    ATerm j_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm p_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_27);
        t = i_52;
      }
    else
      {
        t = j_27;
        {
          ATerm t_27 = t;
          int u_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm v_27 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(u_27);
              t = i_52;
            }
          else
            {
              t = t_27;
              {
                ATerm b_28 = t;
                int c_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm e_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(c_28);
                    t = i_52;
                  }
                else
                  {
                    t = b_28;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm f_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = i_52;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    c_52 = t;
    t = i_52;
    t = SRTS_one(mark_buv_0_0, t);
    g_52 = t;
    t = c_52;
    t = isect_MarkVar_0_0(t);
    t = g_52;
  }
  return(t);
}
ATerm e_9 (ATerm o_28, ATerm n_28, ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm n_52 = NULL,p_52 = NULL;
    if(match_cons(t, sym__2))
      {
        n_52 = ATgetArgument(t, 0);
        p_52 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(o_28, n_52, p_52);
    t = (ATerm) ATmakeAppl(sym__3, o_28, n_52, p_52);
    return(t);
  }
  t = n_28;
  t = map_1_0(s_4, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_52 = NULL;
  ATerm t_4 (ATerm t)
  {
    ATerm v_52 = NULL,x_52 = NULL;
    v_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_52), v_52);
    t = i_10(not_null(q_52), v_52, t);
    x_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_52, x_52);
    return(t);
  }
  if(((q_52 != NULL) && (q_52 != t)))
    _fail(t);
  else
    q_52 = t;
  t = SSL_table_keys(q_52);
  t = map_1_0(t_4, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_j_22;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm f_58, ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
  t = save_MarkVar_0_0(t);
  {
    ATerm u_4 (ATerm t)
    {
      ATerm c_54 (ATerm g_53, ATerm t)
      {
        ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
        t = g_53;
        if(match_cons(t, sym__2))
          {
            ATerm q_28 = ATgetArgument(t, 0);
            h_53 = q_28;
            if(match_cons(q_28, sym_Var_1))
              {
                i_53 = ATgetArgument(q_28, 0);
              }
            else
              _fail(t);
            {
              ATerm r_28 = ATgetArgument(t, 1);
              if(((ATgetType(r_28) == AT_LIST) && !(ATisEmpty(r_28))))
                {
                  ATerm s_28 = ATgetFirst((ATermList) r_28);
                  if(match_cons(s_28, sym_Defined_2))
                    {
                      j_53 = ATgetArgument(s_28, 0);
                      {
                        ATerm t_28 = ATgetArgument(s_28, 1);
                        if((ATgetSymbol((ATermAppl) t_28) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  k_53 = (ATerm) ATgetNext((ATermList) r_28);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = f_58;
        {
          ATerm v_4 (ATerm t)
          {
            if((i_53 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(v_4, t);
          t = (ATerm) ATmakeAppl(sym__2, h_53, (ATerm) ATinsert(CheckATermList(k_53), (ATerm) ATmakeAppl(sym_Defined_2, j_53, term_x_26)));
        }
        return(t);
      }
      ATerm o_53 = NULL,q_53 = NULL;
      q_53 = t;
      {
        ATerm a_29 = t;
        int b_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                o_53 = ATgetArgument(t, 0);
                {
                  ATerm j_29 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(b_29);
            t = o_53;
            if(match_cons(t, sym_Scopes_0))
              {
                t = q_53;
              }
            else
              {
                ATerm k_29 = t;
                int l_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = c_54(q_53, t);
                    ;
                    LocalPopChoice(l_29);
                  }
                else
                  {
                    t = k_29;
                    t = q_53;
                  }
              }
          }
        else
          {
            t = a_29;
            {
              ATerm r_29 = t;
              int s_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_54(q_53, t);
                  ;
                  LocalPopChoice(s_29);
                }
              else
                {
                  t = r_29;
                  t = q_53;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(u_4, t);
    if(((d_53 != NULL) && (d_53 != t)))
      _fail(t);
    else
      d_53 = t;
    t = term_j_22;
    if(((f_53 != NULL) && (f_53 != t)))
      _fail(t);
    else
      f_53 = t;
    t = SSL_table_destroy(f_53);
    t = term_j_22;
    if(((e_53 != NULL) && (e_53 != t)))
      _fail(t);
    else
      e_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_22, d_53);
    t = e_9(e_53, d_53, t);
    t = d_53;
  }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm c_56 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_56);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      {
        ATerm g_56 = NULL,i_56 = NULL,k_56 = NULL,l_56 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            g_56 = ATgetArgument(t, 0);
            t = g_56;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                g_56 = ATgetArgument(t, 0);
                i_56 = ATgetArgument(t, 1);
                k_56 = ATgetArgument(t, 2);
                l_56 = ATgetArgument(t, 3);
                t = k_56;
                t = map_1_0(c_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    g_56 = ATgetArgument(t, 0);
                    i_56 = ATgetArgument(t, 1);
                    k_56 = ATgetArgument(t, 2);
                    l_56 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = k_56;
                t = map_1_0(d_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm z_56 = NULL;
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_56 = ATgetArgument(t, 0);
          {
            ATerm b_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_29);
      t = z_56;
    }
  else
    {
      t = x_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_56;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm x_57 = NULL;
  ATerm g_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_57 = ATgetArgument(t, 0);
          {
            ATerm v_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_30);
      t = x_57;
    }
  else
    {
      t = g_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_57;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm l_54 = NULL,p_54 = NULL,r_54 = NULL,u_54 = NULL,w_54 = NULL,a_55 = NULL,e_55 = NULL,i_55 = NULL,k_55 = NULL,o_55 = NULL,p_55 = NULL,s_55 = NULL,t_55 = NULL,z_55 = NULL,b_56 = NULL,i_7 = NULL,g_7 = NULL;
  b_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_55 = ATgetArgument(t, 0);
      t_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_56);
  p_55 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, s_55, t_55);
  g_7 = t;
  t = SSLsetAnnotations(g_7, p_55);
  z_55 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_54 = ATgetArgument(t, 0);
      {
        ATerm w_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_54;
  t = free_vars_3_0(w_4, x_4, tboundin_3_0, t);
  l_54 = t;
  t = undefine_unbound_MarkVar_0_1(l_54, t);
  p_54 = t;
  t = z_55;
  if(match_cons(t, sym_Let_2))
    {
      w_54 = ATgetArgument(t, 0);
      a_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_55);
  u_54 = t;
  t = w_54;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL;
      g_58 = t;
      t = term_j_22;
      i_58 = t;
      t = SSL_table_destroy(i_58);
      t = term_j_22;
      h_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_j_22, p_54);
      t = e_9(h_58, p_54, t);
      t = g_58;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(e_5, t);
    if(((e_55 != NULL) && (e_55 != t)))
      _fail(t);
    else
      e_55 = t;
    t = term_j_22;
    if(((o_55 != NULL) && (o_55 != t)))
      _fail(t);
    else
      o_55 = t;
    t = SSL_table_destroy(o_55);
    t = term_j_22;
    if(((k_55 != NULL) && (k_55 != t)))
      _fail(t);
    else
      k_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_22, p_54);
    t = e_9(k_55, p_54, t);
    t = a_55;
    t = mark_buv_0_0(t);
    if(((i_55 != NULL) && (i_55 != t)))
      _fail(t);
    else
      i_55 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, e_55, i_55);
    if(((i_7 != NULL) && (i_7 != t)))
      _fail(t);
    else
      i_7 = t;
    t = SSLsetAnnotations(i_7, u_54);
  }
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_58 = NULL,l_58 = NULL,m_58 = NULL,m_7 = NULL;
      m_58 = t;
      if(match_cons(t, sym_Var_1))
        {
          l_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_58);
      j_58 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, l_58);
      m_7 = t;
      t = SSLsetAnnotations(m_7, j_58);
      LocalPopChoice(y_30);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = x_30;
      {
        ATerm k_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_58 = NULL,r_58 = NULL,v_58 = NULL,w_58 = NULL,n_7 = NULL;
            w_58 = t;
            if(match_cons(t, sym_App_2))
              {
                r_58 = ATgetArgument(t, 0);
                v_58 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_58);
            q_58 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, r_58, v_58);
            n_7 = t;
            t = SSLsetAnnotations(n_7, q_58);
            LocalPopChoice(l_31);
            {
              ATerm a_59 = NULL,c_61 = NULL,f_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,o_7 = NULL;
              k_61 = t;
              if(match_cons(t, sym_App_2))
                {
                  c_61 = ATgetArgument(t, 0);
                  f_61 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_61);
              a_59 = t;
              t = c_61;
              t = mark_buv_0_0(t);
              i_61 = t;
              t = f_61;
              t = mark_build_vars_0_0(t);
              j_61 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, i_61, j_61);
              o_7 = t;
              t = SSLsetAnnotations(o_7, a_59);
            }
          }
        else
          {
            t = k_31;
            {
              ATerm o_31 = t;
              int t_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_61 = NULL,n_61 = NULL,p_61 = NULL,p_7 = NULL;
                  p_61 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      n_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_61);
                  m_61 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, n_61);
                  p_7 = t;
                  t = SSLsetAnnotations(p_7, m_61);
                  LocalPopChoice(t_31);
                  {
                    ATerm w_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,r_7 = NULL;
                    b_62 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        z_61 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(b_62);
                    w_61 = t;
                    t = z_61;
                    t = mark_buv_0_0(t);
                    a_62 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, a_62);
                    r_7 = t;
                    t = SSLsetAnnotations(r_7, w_61);
                  }
                }
              else
                {
                  t = o_31;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm f_9 (ATerm y_27, ATerm z_27, ATerm a_28, ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,g_62 = NULL;
  d_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_27, z_27);
  t = i_10(y_27, z_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_31 = ATgetFirst((ATermList) t);
      c_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_62), a_28);
  g_62 = t;
  t = SSL_table_put(y_27, z_27, g_62);
  t = d_62;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm i_62 = NULL,m_62 = NULL,n_62 = NULL,p_62 = NULL;
  i_62 = t;
  t = term_j_22;
  m_62 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_62);
  n_62 = t;
  t = term_d_32;
  p_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_22, (ATerm)ATmakeAppl(sym_Var_1, i_62), term_d_32);
  t = f_9(m_62, n_62, p_62, t);
  t = i_62;
  return(t);
}
ATerm i_9 (ATerm w_27, ATerm x_27, ATerm t)
{
  ATerm q_62 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_27, x_27);
  t = i_10(w_27, x_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_62 = ATgetFirst((ATermList) t);
      {
        ATerm e_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_62;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm m_64 = NULL,n_64 = NULL;
  m_64 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_28 = NULL,m_28 = NULL,p_28 = NULL,x_28 = NULL;
        t = term_j_22;
        x_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_22, m_64);
        t = i_9(x_28, m_64, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm m_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_32) != ATmakeSymbol("k_1", 0, ATtrue)))
              _fail(t);
            l_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, n_64);
        m_28 = t;
        t = (ATerm) ATinsert(ATempty, l_28);
        p_28 = t;
        t = SSLsetAnnotations(m_28, p_28);
        ;
        LocalPopChoice(i_32);
      }
    else
      {
        t = f_32;
        {
          ATerm n_32 = t;
          int o_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_29 = NULL,o_29 = NULL,p_29 = NULL,w_29 = NULL;
              t = term_j_22;
              w_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_j_22, m_64);
              t = i_9(w_29, m_64, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm p_32 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_32) != ATmakeSymbol("i_1", 0, ATtrue)))
                    _fail(t);
                  m_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, n_64);
              o_29 = t;
              t = (ATerm) ATinsert(ATempty, m_29);
              p_29 = t;
              t = SSLsetAnnotations(o_29, p_29);
              ;
              LocalPopChoice(o_32);
            }
          else
            {
              t = n_32;
              {
                ATerm i_30 = NULL,j_30 = NULL,u_30 = NULL,z_30 = NULL;
                t = term_j_22;
                z_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_j_22, m_64);
                t = i_9(z_30, m_64, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm q_32 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) q_32) != ATmakeSymbol("g_1", 0, ATtrue)))
                      _fail(t);
                    i_30 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, n_64);
                j_30 = t;
                t = (ATerm) ATinsert(ATempty, i_30);
                u_30 = t;
                t = SSLsetAnnotations(j_30, u_30);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_8 = NULL;
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      ;
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
    }
  a_65 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_65);
  x_64 = t;
  t = y_64;
  t = DeclareBound_0_0(t);
  z_64 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_64);
  b_8 = t;
  t = SSLsetAnnotations(b_8, x_64);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm t_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_65 = NULL,e_65 = NULL,h_65 = NULL,s_9 = NULL;
      h_65 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_65);
      d_65 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_65);
      s_9 = t;
      t = SSLsetAnnotations(s_9, d_65);
      LocalPopChoice(v_32);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = t_32;
      {
        ATerm w_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,s_10 = NULL;
            n_65 = t;
            if(match_cons(t, sym_App_2))
              {
                l_65 = ATgetArgument(t, 0);
                m_65 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_65);
            k_65 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, l_65, m_65);
            s_10 = t;
            t = SSLsetAnnotations(s_10, k_65);
            LocalPopChoice(x_32);
            {
              ATerm r_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,d_66 = NULL,h_66 = NULL,z_10 = NULL;
              h_66 = t;
              if(match_cons(t, sym_App_2))
                {
                  w_65 = ATgetArgument(t, 0);
                  x_65 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_66);
              r_65 = t;
              t = w_65;
              t = mark_buv_0_0(t);
              y_65 = t;
              t = x_65;
              t = mark_build_vars_0_0(t);
              d_66 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, y_65, d_66);
              z_10 = t;
              t = SSLsetAnnotations(z_10, r_65);
            }
          }
        else
          {
            t = w_32;
            {
              ATerm y_32 = t;
              int a_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_66 = NULL,j_66 = NULL,m_66 = NULL,i_11 = NULL;
                  m_66 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      j_66 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_66);
                  i_66 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, j_66);
                  i_11 = t;
                  t = SSLsetAnnotations(i_11, i_66);
                  LocalPopChoice(a_33);
                  {
                    ATerm n_66 = NULL,o_66 = NULL,s_66 = NULL,w_66 = NULL,j_11 = NULL;
                    w_66 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        o_66 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(w_66);
                    n_66 = t;
                    t = o_66;
                    t = mark_buv_0_0(t);
                    s_66 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, s_66);
                    j_11 = t;
                    t = SSLsetAnnotations(j_11, n_66);
                  }
                }
              else
                {
                  t = y_32;
                  t = SRTS_all(mark_match_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm mark_buv_0_0 (ATerm t)
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_68 = NULL,m_68 = NULL;
      l_68 = t;
      if(match_cons(t, sym_Match_1))
        {
          m_68 = ATgetArgument(t, 0);
          {
            ATerm s_31 = NULL,x_31 = NULL,y_11 = NULL;
            t = SSLgetAnnotations(l_68);
            s_31 = t;
            t = m_68;
            t = mark_match_vars_0_0(t);
            x_31 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, x_31);
            y_11 = t;
            t = SSLsetAnnotations(y_11, s_31);
          }
        }
      else
        {
          ATerm g_32 = NULL,k_32 = NULL,z_11 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              m_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_68);
          g_32 = t;
          t = m_68;
          t = mark_build_vars_0_0(t);
          k_32 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, k_32);
          z_11 = t;
          t = SSLsetAnnotations(z_11, g_32);
        }
      ;
      LocalPopChoice(c_33);
    }
  else
    {
      t = b_33;
      {
        ATerm d_33 = t;
        int e_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            ;
            LocalPopChoice(e_33);
          }
        else
          {
            t = d_33;
            {
              ATerm f_33 = t;
              int g_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  ;
                  LocalPopChoice(g_33);
                }
              else
                {
                  t = f_33;
                  {
                    ATerm h_33 = t;
                    int i_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        ;
                        LocalPopChoice(i_33);
                      }
                    else
                      {
                        t = h_33;
                        {
                          ATerm j_33 = t;
                          int k_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,u_68 = NULL,z_68 = NULL;
                              n_68 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  o_68 = ATgetArgument(t, 0);
                                  p_68 = ATgetArgument(t, 1);
                                  u_68 = ATgetArgument(t, 2);
                                  z_68 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = n_68;
                              t = c_9(o_68, p_68, u_68, z_68, t);
                              ;
                              LocalPopChoice(k_33);
                            }
                          else
                            {
                              t = j_33;
                              {
                                ATerm l_33 = t;
                                int m_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    ;
                                    LocalPopChoice(m_33);
                                  }
                                else
                                  {
                                    t = l_33;
                                    {
                                      ATerm n_33 = t;
                                      int o_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,t_69 = NULL,e_70 = NULL,p_70 = NULL;
                                          m_69 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              t_69 = ATgetArgument(t, 0);
                                              t = t_69;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  h_69 = ATgetArgument(t, 0);
                                                  k_69 = ATgetArgument(t, 1);
                                                  l_69 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = m_69;
                                              t = b_9(h_69, k_69, l_69, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  t_69 = ATgetArgument(t, 0);
                                                  t = t_69;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      h_69 = ATgetArgument(t, 0);
                                                      k_69 = ATgetArgument(t, 1);
                                                      l_69 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = m_69;
                                                  t = a_9(h_69, k_69, l_69, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      t_69 = ATgetArgument(t, 0);
                                                      e_70 = ATgetArgument(t, 1);
                                                      p_70 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = m_69;
                                                  t = z_8(t_69, e_70, p_70, t);
                                                }
                                            }
                                          ;
                                          LocalPopChoice(o_33);
                                        }
                                      else
                                        {
                                          t = n_33;
                                          {
                                            ATerm p_33 = t;
                                            int q_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                ;
                                                LocalPopChoice(q_33);
                                              }
                                            else
                                              {
                                                t = p_33;
                                                {
                                                  ATerm s_33 = t;
                                                  int t_33 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      ;
                                                      LocalPopChoice(t_33);
                                                    }
                                                  else
                                                    {
                                                      t = s_33;
                                                      {
                                                        ATerm u_33 = t;
                                                        int v_33 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm g_71 = NULL;
                                                            g_71 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm w_33 = ATgetArgument(t, 0);
                                                                ATerm x_33 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = g_71;
                                                            t = y_8(t);
                                                            ;
                                                            LocalPopChoice(v_33);
                                                          }
                                                        else
                                                          {
                                                            t = u_33;
                                                            {
                                                              ATerm y_33 = t;
                                                              int z_33 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(z_33);
                                                                }
                                                              else
                                                                {
                                                                  t = y_33;
                                                                  {
                                                                    ATerm a_34 = t;
                                                                    int b_34 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(b_34);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_34;
                                                                        {
                                                                          ATerm c_34 = t;
                                                                          int d_34 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(d_34);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_34;
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
      }
    }
  return(t);
}
ATerm j_9 (ATerm z_82 (ATerm), ATerm d_27, ATerm b_27, ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL;
  b_72 = t;
  t = z_82(t);
  s_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_71, d_27, b_27);
  t = j_10(s_71, d_27, b_27, t);
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_72 = NULL;
        t = term_g_34;
        e_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_71, term_g_34);
        t = i_10(s_71, e_72, t);
        ;
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_71 = ATgetFirst((ATermList) t);
        u_71 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_34;
    c_72 = t;
    t = (ATerm) ATinsert(CheckATermList(u_71), (ATerm) ATinsert(CheckATermList(t_71), d_27));
    d_72 = t;
    t = SSL_table_put(s_71, c_72, d_72);
    t = b_72;
  }
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL,k_72 = NULL;
  f_72 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_72);
  g_72 = t;
  t = term_j_34;
  k_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, f_72), term_j_34);
  t = j_9(f_5, g_72, k_72, t);
  t = f_72;
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm l_72 = NULL,n_72 = NULL,r_72 = NULL,u_72 = NULL,v_72 = NULL,g_12 = NULL;
  v_72 = t;
  if(match_cons(t, sym_Scope_2))
    {
      n_72 = ATgetArgument(t, 0);
      r_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_72);
  l_72 = t;
  t = r_72;
  {
    ATerm i_5 (ATerm t)
    {
      ATerm w_72 = NULL;
      w_72 = t;
      t = n_72;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = w_72;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(g_5, i_5, t);
    if(((u_72 != NULL) && (u_72 != t)))
      _fail(t);
    else
      u_72 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, n_72, u_72);
    if(((g_12 != NULL) && (g_12 != t)))
      _fail(t);
    else
      g_12 = t;
    t = SSLsetAnnotations(g_12, l_72);
  }
  return(t);
}
ATerm tboundin_3_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t)
{
  ATerm j_76 = NULL,m_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL;
  p_76 = t;
  if(match_cons(t, sym_Scope_2))
    {
      q_76 = ATgetArgument(t, 0);
      j_76 = ATgetArgument(t, 1);
      {
        ATerm u_32 = NULL,z_32 = NULL,r_33 = NULL,o_12 = NULL;
        t = SSLgetAnnotations(p_76);
        u_32 = t;
        t = q_76;
        t = u_92(t);
        z_32 = t;
        t = j_76;
        t = s_92(t);
        r_33 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, z_32, r_33);
        o_12 = t;
        t = SSLsetAnnotations(o_12, u_32);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          q_76 = ATgetArgument(t, 0);
          j_76 = ATgetArgument(t, 1);
          m_76 = ATgetArgument(t, 2);
          o_76 = ATgetArgument(t, 3);
          {
            ATerm v_34 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,p_12 = NULL;
            t = SSLgetAnnotations(p_76);
            v_34 = t;
            t = q_76;
            t = u_92(t);
            b_35 = t;
            t = j_76;
            t = u_92(t);
            c_35 = t;
            t = m_76;
            t = u_92(t);
            d_35 = t;
            t = o_76;
            t = s_92(t);
            e_35 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, b_35, c_35, d_35, e_35);
            p_12 = t;
            t = SSLsetAnnotations(p_12, v_34);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              q_76 = ATgetArgument(t, 0);
              j_76 = ATgetArgument(t, 1);
              m_76 = ATgetArgument(t, 2);
              o_76 = ATgetArgument(t, 3);
              {
                ATerm b_36 = NULL,k_36 = NULL,m_36 = NULL,p_36 = NULL,q_36 = NULL,q_12 = NULL;
                t = SSLgetAnnotations(p_76);
                b_36 = t;
                t = q_76;
                t = u_92(t);
                k_36 = t;
                t = j_76;
                t = u_92(t);
                m_36 = t;
                t = m_76;
                t = u_92(t);
                p_36 = t;
                t = o_76;
                t = s_92(t);
                q_36 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, k_36, m_36, p_36, q_36);
                q_12 = t;
                t = SSLsetAnnotations(q_12, b_36);
              }
            }
          else
            {
              ATerm f_37 = NULL,h_37 = NULL,r_12 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_76 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_76);
              f_37 = t;
              t = q_76;
              t = s_92(t);
              h_37 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_37);
              r_12 = t;
              t = SSLsetAnnotations(r_12, f_37);
            }
        }
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm i_77 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_77);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm k_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(p_34);
    }
  else
    {
      t = k_34;
      {
        ATerm q_77 = NULL,r_77 = NULL,y_77 = NULL,z_77 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            q_77 = ATgetArgument(t, 0);
            t = q_77;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                q_77 = ATgetArgument(t, 0);
                r_77 = ATgetArgument(t, 1);
                y_77 = ATgetArgument(t, 2);
                z_77 = ATgetArgument(t, 3);
                t = y_77;
                t = map_1_0(o_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    q_77 = ATgetArgument(t, 0);
                    r_77 = ATgetArgument(t, 1);
                    y_77 = ATgetArgument(t, 2);
                    z_77 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = y_77;
                t = map_1_0(q_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm m_78 = NULL;
  ATerm q_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_78 = ATgetArgument(t, 0);
          {
            ATerm s_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_34);
      t = m_78;
    }
  else
    {
      t = q_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_78;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm a_79 = NULL;
  ATerm t_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_79 = ATgetArgument(t, 0);
          {
            ATerm w_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_34);
      t = a_79;
    }
  else
    {
      t = t_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_79;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(j_5, n_5, tboundin_3_0, t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm w_79 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_79);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm x_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_34);
    }
  else
    {
      t = x_34;
      {
        ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL,f_80 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            a_80 = ATgetArgument(t, 0);
            t = a_80;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                a_80 = ATgetArgument(t, 0);
                b_80 = ATgetArgument(t, 1);
                c_80 = ATgetArgument(t, 2);
                f_80 = ATgetArgument(t, 3);
                t = c_80;
                t = map_1_0(w_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    a_80 = ATgetArgument(t, 0);
                    b_80 = ATgetArgument(t, 1);
                    c_80 = ATgetArgument(t, 2);
                    f_80 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = c_80;
                t = map_1_0(x_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm n_80 = NULL;
  ATerm z_34 = t;
  int a_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_80 = ATgetArgument(t, 0);
          {
            ATerm f_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_35);
      t = n_80;
    }
  else
    {
      t = z_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_80;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm w_80 = NULL;
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_80 = ATgetArgument(t, 0);
          {
            ATerm j_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_35);
      t = w_80;
    }
  else
    {
      t = h_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_80;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm p_79 = NULL,t_79 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      t_79 = ATgetArgument(t, 0);
      t = t_79;
      if(match_cons(t, sym_Rule_3))
        {
          p_79 = ATgetArgument(t, 0);
          {
            ATerm k_35 = ATgetArgument(t, 1);
          }
          {
            ATerm l_35 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = p_79;
      t = free_vars_3_0(r_5, s_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          t_79 = ATgetArgument(t, 0);
          {
            ATerm m_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_79;
    }
  return(t);
}
ATerm o_9 (ATerm c_79 (ATerm), ATerm v_21, ATerm u_21, ATerm t)
{
  ATerm u_81 (ATerm t)
  {
    ATerm k_81 = NULL,l_81 = NULL,m_81 = NULL;
    k_81 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_81 = ATgetFirst((ATermList) t);
            m_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_35 = t;
          int p_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_81;
              {
                ATerm y_5 (ATerm t)
                {
                  t = u_21;
                  return(t);
                }
                t = p_9(c_79, y_5, l_81, m_81, t);
                t = u_81(t);
              }
              ;
              LocalPopChoice(p_35);
            }
          else
            {
              t = o_35;
              {
                ATerm z_37 = NULL,e_38 = NULL,h_14 = NULL;
                t = SSLgetAnnotations(k_81);
                z_37 = t;
                t = m_81;
                t = u_81(t);
                e_38 = t;
                t = (ATerm) ATinsert(CheckATermList(e_38), l_81);
                h_14 = t;
                t = SSLsetAnnotations(h_14, z_37);
              }
            }
        }
      }
    return(t);
  }
  t = v_21;
  t = u_81(t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm t)
{
  ATerm x_81 = NULL,y_81 = NULL,z_81 = NULL;
  x_81 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_81;
      t = p_81(t);
    }
  else
    {
      ATerm c_82 = NULL,d_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_81 = ATgetFirst((ATermList) t);
          z_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_81;
      t = r_81(t);
      c_82 = t;
      t = z_81;
      t = foldr_3_0(p_81, q_81, r_81, t);
      d_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_82, d_82);
      t = q_81(t);
    }
  return(t);
}
ATerm p_9 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm z_21, ATerm y_21, ATerm t)
{
  t = g_79(t);
  {
    ATerm c_6 (ATerm t)
    {
      ATerm g_82 = NULL;
      g_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_21, g_82);
      t = f_79(t);
      return(t);
    }
    t = fetch_1_0(c_6, t);
    t = y_21;
  }
  return(t);
}
ATerm q_9 (ATerm x_78 (ATerm), ATerm t_21, ATerm s_21, ATerm t)
{
  ATerm c_83 (ATerm t)
  {
    ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL;
    r_82 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_82;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_82 = ATgetFirst((ATermList) t);
            t_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_35 = t;
          int u_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_82;
              {
                ATerm d_6 (ATerm t)
                {
                  t = s_21;
                  return(t);
                }
                t = p_9(x_78, d_6, s_82, t_82, t);
                t = c_83(t);
              }
              ;
              LocalPopChoice(u_35);
            }
          else
            {
              t = t_35;
              {
                ATerm p_38 = NULL,d_39 = NULL,r_14 = NULL;
                t = SSLgetAnnotations(r_82);
                p_38 = t;
                t = t_82;
                t = c_83(t);
                d_39 = t;
                t = (ATerm) ATinsert(CheckATermList(d_39), s_82);
                r_14 = t;
                t = SSLsetAnnotations(r_14, p_38);
              }
            }
        }
      }
    return(t);
  }
  t = t_21;
  t = c_83(t);
  return(t);
}
ATerm genzip_4_0 (ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm t)
{
  ATerm k_83 (ATerm t)
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_86(t);
        ;
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        {
          ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,v_14 = NULL;
          t = w_86(t);
          j_83 = t;
          if(match_cons(t, sym__2))
            {
              f_83 = ATgetArgument(t, 0);
              g_83 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_83);
          e_83 = t;
          t = f_83;
          t = y_86(t);
          h_83 = t;
          t = g_83;
          t = k_83(t);
          i_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_83, i_83);
          v_14 = t;
          t = SSLsetAnnotations(v_14, e_83);
          t = x_86(t);
        }
      }
    return(t);
  }
  t = k_83(t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_36 = ATgetArgument(t, 0);
      if(((ATgetType(c_36) != AT_LIST) || !(ATisEmpty(c_36))))
        _fail(t);
      {
        ATerm d_36 = ATgetArgument(t, 1);
        if(((ATgetType(d_36) != AT_LIST) || !(ATisEmpty(d_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_36 = ATgetArgument(t, 0);
      if(((ATgetType(e_36) == AT_LIST) && !(ATisEmpty(e_36))))
        {
          r_83 = ATgetFirst((ATermList) e_36);
          s_83 = (ATerm) ATgetNext((ATermList) e_36);
        }
      else
        _fail(t);
      {
        ATerm f_36 = ATgetArgument(t, 1);
        if(((ATgetType(f_36) == AT_LIST) && !(ATisEmpty(f_36))))
          {
            t_83 = ATgetFirst((ATermList) f_36);
            u_83 = (ATerm) ATgetNext((ATermList) f_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_83, t_83), (ATerm) ATmakeAppl(sym__2, s_83, u_83));
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm v_83 = NULL,w_83 = NULL;
  if(match_cons(t, sym__2))
    {
      v_83 = ATgetArgument(t, 0);
      w_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_83), v_83);
  return(t);
}
ATerm u_9 (ATerm x_600, ATerm c_601, ATerm p_57, ATerm t)
{
  ATerm m_83 = NULL,n_83 = NULL,o_83 = NULL,p_83 = NULL;
  t = SSL_explode_term(c_601);
  if(match_cons(t, sym__2))
    {
      m_83 = ATgetArgument(t, 0);
      o_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_600);
  if(match_cons(t, sym__2))
    {
      if((m_83 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      n_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_83, o_83);
  t = genzip_4_0(e_6, h_6, i_6, _id, t);
  p_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_83, p_57);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm t)
{
  ATerm y_83 (ATerm t)
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_98(t);
        ;
        LocalPopChoice(h_36);
      }
    else
      {
        t = g_36;
        t = g_98(t);
        t = y_83(t);
      }
    return(t);
  }
  t = y_83(t);
  return(t);
}
ATerm for_3_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t)
{
  t = i_98(t);
  t = while_not_2_0(j_98, k_98, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm f_84 = NULL;
  f_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_84);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm g_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL,z_14 = NULL;
  j_84 = t;
  if(match_cons(t, sym__2))
    {
      h_84 = ATgetArgument(t, 0);
      i_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_84);
  g_84 = t;
  t = i_84;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_84, i_84);
  z_14 = t;
  t = SSLsetAnnotations(z_14, g_84);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL;
  e_85 = t;
  if(match_cons(t, sym__2))
    {
      f_85 = ATgetArgument(t, 0);
      g_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_85 = ATgetFirst((ATermList) t);
      i_85 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_36 = t;
        int j_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_85(f_85, g_85, e_85, t);
            ;
            LocalPopChoice(j_36);
          }
        else
          {
            t = i_36;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_85), h_85), i_85);
          }
      }
    }
  else
    {
      t = s_85(f_85, g_85, e_85, t);
    }
  return(t);
}
ATerm s_85 (ATerm k_84, ATerm l_84, ATerm m_84, ATerm t)
{
  ATerm n_84 = NULL,q_84 = NULL,b_15 = NULL,t_84 = NULL,u_84 = NULL,x_84 = NULL,y_84 = NULL;
  t = SSLgetAnnotations(m_84);
  n_84 = t;
  t = l_84;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_84 = ATgetFirst((ATermList) t);
      y_84 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_84;
  if(match_cons(t, sym__2))
    {
      u_84 = ATgetArgument(t, 0);
      x_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_84;
        if((u_84 != t))
          {
            _fail(t);
          }
        t = y_84;
        ;
        LocalPopChoice(n_36);
      }
    else
      {
        t = l_36;
        t = l_84;
        t = u_9(u_84, x_84, y_84, t);
      }
    q_84 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_84, q_84);
    b_15 = t;
    t = SSLsetAnnotations(b_15, n_84);
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm r_85 = NULL;
  if(match_cons(t, sym__2))
    {
      r_85 = ATgetArgument(t, 0);
      if((r_85 != ATgetArgument(t, 1)))
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
  ATerm o_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(o_6, p_6, q_6, t);
      ;
      LocalPopChoice(r_36);
    }
  else
    {
      t = o_36;
      {
        ATerm m_85 = NULL,n_85 = NULL,o_85 = NULL;
        m_85 = t;
        if(match_cons(t, sym__2))
          {
            n_85 = ATgetArgument(t, 0);
            o_85 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_85;
        t = q_9(r_6, n_85, o_85, t);
      }
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL;
  if(match_cons(t, sym__2))
    {
      s_39 = ATgetArgument(t, 0);
      t_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_9(d_7, s_39, t_39, t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm v_39 = NULL;
  if(match_cons(t, sym__2))
    {
      v_39 = ATgetArgument(t, 0);
      if((v_39 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL;
  if(match_cons(t, sym__2))
    {
      d_40 = ATgetArgument(t, 0);
      e_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_9(j_7, d_40, e_40, t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm f_40 = NULL;
  if(match_cons(t, sym__2))
    {
      f_40 = ATgetArgument(t, 0);
      if((f_40 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm g_86 (ATerm t)
  {
    ATerm t_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_95(t);
        ;
        LocalPopChoice(u_36);
      }
    else
      {
        t = t_36;
        {
          ATerm v_36 = t;
          int w_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_85 = NULL,v_85 = NULL,l_39 = NULL,m_39 = NULL;
              u_85 = t;
              t = v_95(t);
              v_85 = t;
              t = u_85;
              {
                ATerm s_6 (ATerm t)
                {
                  ATerm x_85 = NULL;
                  t = g_86(t);
                  x_85 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_85, v_85);
                  t = diff_0_0(t);
                  return(t);
                }
                t = w_95(s_6, g_86, w_6, t);
                if(((m_39 != NULL) && (m_39 != t)))
                  _fail(t);
                else
                  m_39 = t;
                t = SSL_explode_term(m_39);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_36 = ATgetArgument(t, 0);
                    if(((l_39 != NULL) && (l_39 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      l_39 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_39;
                t = foldr_3_0(b_7, c_7, _id, t);
              }
              ;
              LocalPopChoice(w_36);
            }
          else
            {
              t = v_36;
              {
                ATerm x_39 = NULL,z_39 = NULL;
                z_39 = t;
                t = SSL_explode_term(z_39);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_36 = ATgetArgument(t, 0);
                    x_39 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_39;
                t = foldr_3_0(e_7, f_7, g_86, t);
              }
            }
        }
      }
    return(t);
  }
  t = g_86(t);
  return(t);
}
ATerm w_9 (ATerm q_27, ATerm r_27, ATerm t)
{
  ATerm h_86 = NULL,i_86 = NULL;
  i_86 = t;
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
        t = i_10(q_27, r_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_37 = ATgetFirst((ATermList) t);
            h_86 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_37);
        t = SSL_table_put(q_27, r_27, h_86);
        t = (ATerm) ATmakeAppl(sym__3, q_27, r_27, h_86);
      }
    else
      {
        t = z_36;
        t = SSL_table_remove(q_27, r_27);
        t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
      }
    t = i_86;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm j_86 = NULL,k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL;
  m_86 = t;
  t = w_82(t);
  l_86 = t;
  {
    ATerm c_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_86 = NULL;
        t = term_g_34;
        o_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_86, term_g_34);
        t = i_10(l_86, o_86, t);
        ;
        LocalPopChoice(d_37);
      }
    else
      {
        t = c_37;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_86 = ATgetFirst((ATermList) t);
        j_86 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_34;
    n_86 = t;
    t = SSL_table_put(l_86, n_86, j_86);
    t = k_86;
    {
      ATerm k_7 (ATerm t)
      {
        ATerm p_86 = NULL;
        p_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_86, p_86);
        t = w_9(l_86, p_86, t);
        return(t);
      }
      t = map_1_0(k_7, t);
      t = m_86;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm t)
{
  ATerm e_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_89(t);
      t = x_89(t);
      ;
      LocalPopChoice(g_37);
    }
  else
    {
      t = e_37;
      t = x_89(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm r_86 = NULL,s_86 = NULL,t_86 = NULL,u_86 = NULL,a_87 = NULL;
  s_86 = t;
  t = v_82(t);
  r_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_86, term_g_34);
  {
    ATerm i_37 = t;
    int j_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_87 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_37 = ATgetArgument(t, 0);
            ATerm l_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_34;
        e_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_86, term_g_34);
        t = i_10(r_86, e_87, t);
        ;
        LocalPopChoice(j_37);
      }
    else
      {
        t = i_37;
        t = (ATerm) ATempty;
      }
    t_86 = t;
    t = term_g_34;
    u_86 = t;
    t = (ATerm) ATinsert(CheckATermList(t_86), (ATerm) ATempty);
    a_87 = t;
    t = SSL_table_put(r_86, u_86, a_87);
    t = s_86;
  }
  return(t);
}
ATerm scope_2_0 (ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm t)
{
  ATerm l_7 (ATerm t)
  {
    t = end_scope_1_0(x_82, t);
    return(t);
  }
  t = begin_scope_1_0(x_82, t);
  t = restore_always_2_0(y_82, l_7, t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = scope_2_0(v_7, w_7, t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL;
  m_87 = t;
  t = free_vars_3_0(x_7, z_7, tboundin_3_0, t);
  l_87 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, l_87, m_87);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm m_37 = ATgetArgument(t, 0);
      k_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_87;
  {
    ATerm n_37 = t;
    int p_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        ;
        LocalPopChoice(p_37);
      }
    else
      {
        t = n_37;
        {
          ATerm q_37 = t;
          int r_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              ;
              LocalPopChoice(r_37);
            }
          else
            {
              t = q_37;
              {
                ATerm n_88 = NULL,o_88 = NULL,p_88 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    n_88 = ATgetArgument(t, 0);
                    o_88 = ATgetArgument(t, 1);
                    p_88 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = k_87;
                t = v_8(n_88, o_88, p_88, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm n_87 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_87);
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(t_37);
    }
  else
    {
      t = s_37;
      {
        ATerm p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            p_87 = ATgetArgument(t, 0);
            t = p_87;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                p_87 = ATgetArgument(t, 0);
                q_87 = ATgetArgument(t, 1);
                r_87 = ATgetArgument(t, 2);
                s_87 = ATgetArgument(t, 3);
                t = r_87;
                t = map_1_0(a_8, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    p_87 = ATgetArgument(t, 0);
                    q_87 = ATgetArgument(t, 1);
                    r_87 = ATgetArgument(t, 2);
                    s_87 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = r_87;
                t = map_1_0(h_8, t);
              }
          }
      }
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm a_88 = NULL;
  ATerm y_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_88 = ATgetArgument(t, 0);
          {
            ATerm b_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_38);
      t = a_88;
    }
  else
    {
      t = y_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_88;
    }
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm j_88 = NULL;
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_88 = ATgetArgument(t, 0);
          {
            ATerm i_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_38);
      t = j_88;
    }
  else
    {
      t = g_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_88;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm j_87 = NULL;
  j_87 = t;
  t = scope_2_0(q_7, u_7, t);
  t = j_87;
  return(t);
}
ATerm filter_1_0 (ATerm v_88 (ATerm), ATerm t)
{
  ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL;
  f_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_89;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_89 = ATgetFirst((ATermList) t);
          h_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm j_38 = t;
        int l_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_40 = NULL,m_40 = NULL,n_40 = NULL,f_15 = NULL;
            t = SSLgetAnnotations(f_89);
            j_40 = t;
            t = g_89;
            t = v_88(t);
            m_40 = t;
            t = h_89;
            t = filter_1_0(v_88, t);
            n_40 = t;
            t = (ATerm) ATinsert(CheckATermList(n_40), m_40);
            f_15 = t;
            t = SSLsetAnnotations(f_15, j_40);
            ;
            LocalPopChoice(l_38);
          }
        else
          {
            t = j_38;
            t = h_89;
            t = filter_1_0(v_88, t);
          }
      }
    }
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL,m_15 = NULL;
  b_90 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      a_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_90);
  z_89 = t;
  t = a_90;
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_90;
        ;
        LocalPopChoice(n_38);
      }
    else
      {
        t = m_38;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_90;
      }
    t = (ATerm) ATmakeAppl(sym_Overlays_1, a_90);
    m_15 = t;
    t = SSLsetAnnotations(m_15, z_89);
  }
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = Cons_2_0(n_8, t_9, t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm d_90 = NULL,e_90 = NULL,f_90 = NULL,n_15 = NULL;
  f_90 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      e_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_90);
  d_90 = t;
  t = e_90;
  {
    ATerm o_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_90;
        ;
        LocalPopChoice(q_38);
      }
    else
      {
        t = o_38;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_90;
      }
    t = (ATerm) ATmakeAppl(sym_Strategies_1, e_90);
    n_15 = t;
    t = SSLsetAnnotations(n_15, d_90);
  }
  return(t);
}
ATerm t_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL,y_89 = NULL,r_15 = NULL,o_15 = NULL,l_15 = NULL;
  y_89 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_89);
  m_89 = t;
  t = n_89;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_89 = ATgetFirst((ATermList) t);
      q_89 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_89);
  o_89 = t;
  t = p_89;
  if(match_cons(t, sym_Signature_1))
    {
      u_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_89);
  t_89 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, u_89);
  l_15 = t;
  t = SSLsetAnnotations(l_15, t_89);
  v_89 = t;
  t = q_89;
  t = Cons_2_0(i_8, l_8, t);
  r_89 = t;
  t = (ATerm) ATinsert(CheckATermList(r_89), v_89);
  o_15 = t;
  t = SSLsetAnnotations(o_15, o_89);
  s_89 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, s_89);
  r_15 = t;
  t = SSLsetAnnotations(r_15, m_89);
  return(t);
}
ATerm y_9 (ATerm x_46, ATerm y_46, ATerm t)
{
  ATerm m_90 = NULL;
  t = SSL_fputc(x_46, y_46);
  m_90 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_90);
  return(t);
}
ATerm z_9 (ATerm l_50, ATerm m_50, ATerm t)
{
  ATerm n_90 = NULL;
  t = SSL_write_term_to_stream_text(l_50, m_50);
  n_90 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_90);
  return(t);
}
ATerm b_10 (ATerm n_102 (ATerm), ATerm z_473, ATerm p_50, ATerm t)
{
  ATerm o_90 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_473, term_r_38);
  t = open_stream_0_0(t);
  o_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_90, p_50);
  t = n_102(t);
  t = fclose_0_0(t);
  t = p_50;
  return(t);
}
ATerm a_10 (ATerm h_50, ATerm i_50, ATerm t)
{
  ATerm p_90 = NULL;
  t = SSL_write_term_to_stream_baf(h_50, i_50);
  p_90 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_90);
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm s_90 = NULL,t_90 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_38 = ATgetArgument(t, 0);
      if(match_cons(s_38, sym_Stream_1))
        {
          s_90 = ATgetArgument(s_38, 0);
        }
      else
        _fail(t);
      t_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_10(s_90, t_90, t);
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL,x_90 = NULL,y_90 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_38 = ATgetArgument(t, 0);
      if(match_cons(t_38, sym_Stream_1))
        {
          x_90 = ATgetArgument(t_38, 0);
        }
      else
        _fail(t);
      y_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(x_90, y_90, t);
  u_90 = t;
  t = term_u_38;
  v_90 = t;
  t = u_90;
  if(match_cons(t, sym_Stream_1))
    {
      w_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_38, u_90);
  t = y_9(v_90, w_90, t);
  return(t);
}
ATerm output_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL;
  t = w_106(t);
  r_90 = t;
  {
    ATerm v_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_38;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(w_38);
      }
    else
      {
        t = v_38;
        t = term_z_38;
      }
    q_90 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_90, r_90);
    {
      ATerm a_39 = t;
      int b_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_c_39;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, q_90, r_90);
          LocalPopChoice(b_39);
          if(match_cons(t, sym__2))
            {
              ATerm e_39 = ATgetArgument(t, 0);
              ATerm f_39 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_10(f_10, q_90, r_90, t);
        }
      else
        {
          t = a_39;
          if(match_cons(t, sym__2))
            {
              ATerm g_39 = ATgetArgument(t, 0);
              ATerm h_39 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_10(n_10, q_90, r_90, t);
        }
    }
  }
  return(t);
}
ATerm m_91 (ATerm g_91, ATerm t)
{
  t = SSL_fclose(g_91);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_91 = NULL,k_91 = NULL;
  k_91 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_91 = ATgetArgument(t, 0);
      {
        ATerm i_39 = t;
        int j_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_91);
            ;
            LocalPopChoice(j_39);
          }
        else
          {
            t = i_39;
            t = m_91(k_91, t);
          }
      }
    }
  else
    {
      t = m_91(k_91, t);
    }
  return(t);
}
ATerm c_10 (ATerm n_50, ATerm t)
{
  t = SSL_read_term_from_stream(n_50);
  return(t);
}
ATerm d_10 (ATerm z_46, ATerm a_47, ATerm t)
{
  ATerm n_91 = NULL;
  t = SSL_fopen(z_46, a_47);
  n_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_91);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_91 = NULL;
  t = SSL_stdin_stream();
  o_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_91);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_91 = NULL;
  t = SSL_stdout_stream();
  p_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_91);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_91 = NULL;
  t = SSL_stderr_stream();
  q_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_91);
  return(t);
}
ATerm a_93 (ATerm w_91, ATerm t)
{
  ATerm x_91 = NULL;
  t = SSL_explode_term(w_91);
  if(match_cons(t, sym__2))
    {
      ATerm k_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_39 = ATgetArgument(t, 1);
        if(((ATgetType(n_39) == AT_LIST) && !(ATisEmpty(n_39))))
          {
            x_91 = ATgetFirst((ATermList) n_39);
            {
              ATerm o_39 = (ATerm) ATgetNext((ATermList) n_39);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_91;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_91;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_91;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_91;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_93 (ATerm a_92, ATerm b_92, ATerm c_92, ATerm t)
{
  ATerm d_92 = NULL,e_92 = NULL,f_92 = NULL,i_92 = NULL,j_16 = NULL;
  t = SSLgetAnnotations(c_92);
  f_92 = t;
  t = a_92;
  if(match_cons(t, sym_Path_1))
    {
      i_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_92, b_92);
  j_16 = t;
  t = SSLsetAnnotations(j_16, f_92);
  if(match_cons(t, sym__2))
    {
      d_92 = ATgetArgument(t, 0);
      e_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10(d_92, e_92, t);
  return(t);
}
ATerm c_93 (ATerm k_92, ATerm l_92, ATerm m_92, ATerm t)
{
  ATerm n_92 = NULL,o_92 = NULL,p_92 = NULL,v_92 = NULL,l_16 = NULL;
  t = SSLgetAnnotations(m_92);
  p_92 = t;
  t = SSL_is_string(k_92);
  v_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_92, l_92);
  l_16 = t;
  t = SSLsetAnnotations(l_16, p_92);
  if(match_cons(t, sym__2))
    {
      n_92 = ATgetArgument(t, 0);
      o_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10(n_92, o_92, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm x_92 = NULL,y_92 = NULL,z_92 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_39 = ATgetArgument(t, 0);
      ATerm r_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  x_92 = t;
  if(match_cons(t, sym__2))
    {
      y_92 = ATgetArgument(t, 0);
      z_92 = ATgetArgument(t, 1);
      {
        ATerm u_39 = t;
        int w_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_93(x_92, t);
            ;
            LocalPopChoice(w_39);
          }
        else
          {
            t = u_39;
            {
              ATerm y_39 = t;
              int a_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_93(y_92, z_92, x_92, t);
                  ;
                  LocalPopChoice(a_40);
                }
              else
                {
                  t = y_39;
                  t = c_93(y_92, z_92, x_92, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_93(x_92, t);
    }
  return(t);
}
ATerm t_10 (ATerm t)
{
  t = term_b_40;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_93 = NULL,e_93 = NULL,f_93 = NULL;
  ATerm c_40 = t;
  int g_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_93 = NULL;
      g_93 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_93, term_h_40);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(g_40);
    }
  else
    {
      t = c_40;
      t = debug_1_0(t_10, t);
      _fail(t);
    }
  e_93 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_10(f_93, t);
  d_93 = t;
  t = e_93;
  t = fclose_0_0(t);
  t = d_93;
  return(t);
}
ATerm input_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  ATerm i_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_40;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_40);
    }
  else
    {
      t = i_40;
      t = term_o_40;
    }
  t = ReadFromFile_0_0(t);
  t = x_106(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL;
  i_93 = t;
  t = term_p_40;
  t = whoami_0_0(t);
  j_93 = t;
  t = term_p_18;
  l_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_40), j_93), term_q_40);
  m_93 = t;
  t = SSL_printnl(l_93, m_93);
  t = term_v_40;
  k_93 = t;
  t = SSL_exit(k_93);
  t = i_93;
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm o_93 = NULL;
  o_93 = t;
  if(match_string(t, "-k"))
    {
      t = o_93;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_93;
    }
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL;
  p_93 = t;
  t = SSL_string_to_int(p_93);
  q_93 = t;
  t = term_x_40;
  r_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_40, q_93);
  t = l_10(r_93, q_93, t);
  t = p_93;
  return(t);
}
ATerm a_11 (ATerm t)
{
  t = term_c_41;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_10, w_10, a_11, t);
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm t_93 = NULL;
  t_93 = t;
  if(match_string(t, "-S"))
    {
      t = t_93;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_93;
    }
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm u_93 = NULL,v_93 = NULL;
  t = term_d_41;
  u_93 = t;
  t = term_e_41;
  v_93 = t;
  t = term_f_41;
  t = l_10(u_93, v_93, t);
  t = term_i_41;
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = term_j_41;
  return(t);
}
ATerm p_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_11 (ATerm t)
{
  ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL;
  w_93 = t;
  t = SSL_string_to_int(w_93);
  x_93 = t;
  t = term_d_41;
  y_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_41, x_93);
  t = l_10(y_93, x_93, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_93);
  return(t);
}
ATerm w_11 (ATerm t)
{
  t = term_k_41;
  return(t);
}
ATerm x_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm z_93 = NULL,a_94 = NULL;
  t = term_m_41;
  z_93 = t;
  t = term_p_40;
  a_94 = t;
  t = term_o_41;
  t = l_10(z_93, a_94, t);
  t = term_q_41;
  return(t);
}
ATerm b_12 (ATerm t)
{
  t = term_r_41;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_11, e_11, k_11, t);
      ;
      LocalPopChoice(t_41);
    }
  else
    {
      t = s_41;
      {
        ATerm v_41 = t;
        int w_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_11, v_11, w_11, t);
            ;
            LocalPopChoice(w_41);
          }
        else
          {
            t = v_41;
            t = Option_3_0(x_11, a_12, b_12, t);
          }
      }
    }
  return(t);
}
ATerm l_10 (ATerm o_51, ATerm p_51, ATerm t)
{
  ATerm b_94 = NULL;
  t = term_z_41;
  b_94 = t;
  t = SSL_table_put(b_94, o_51, p_51);
  t = (ATerm) ATmakeAppl(sym__3, term_z_41, o_51, p_51);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_94 = NULL,f_94 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL;
      t = term_p_40;
      t = i_0(t);
      g_94 = t;
      t = term_e_42;
      h_94 = t;
      t = term_f_42;
      i_94 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_42, term_f_42, g_94);
      t = j_10(h_94, i_94, g_94, t);
      _fail(t);
    }
  else
    {
      ATerm l_94 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_94 = ATgetFirst((ATermList) t);
          f_94 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_94;
      t = d_0(t);
      t = term_p_40;
      t = g_0(t);
      l_94 = t;
      t = (ATerm) ATinsert(CheckATermList(f_94), l_94);
    }
  return(t);
}
ATerm n_12 (ATerm t)
{
  ATerm n_94 = NULL;
  n_94 = t;
  if(match_string(t, "-o"))
    {
      t = n_94;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_94;
    }
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm o_94 = NULL,p_94 = NULL;
  o_94 = t;
  t = term_x_38;
  p_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_38, o_94);
  t = l_10(p_94, o_94, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_94);
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = term_g_42;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_12, s_12, t_12, t);
  return(t);
}
ATerm u_12 (ATerm t)
{
  ATerm r_94 = NULL;
  r_94 = t;
  if(match_string(t, "-i"))
    {
      t = r_94;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_94;
    }
  return(t);
}
ATerm v_12 (ATerm t)
{
  ATerm s_94 = NULL,t_94 = NULL;
  s_94 = t;
  t = term_l_40;
  t_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_40, s_94);
  t = l_10(t_94, s_94, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_94);
  return(t);
}
ATerm x_12 (ATerm t)
{
  t = term_i_42;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_12, v_12, x_12, t);
  return(t);
}
ATerm at_end_1_0 (ATerm d_80 (ATerm), ATerm t)
{
  ATerm o_95 (ATerm t)
  {
    ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL;
    n_95 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_95 = ATgetFirst((ATermList) t);
        m_95 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_41 = NULL,h_42 = NULL,o_16 = NULL;
          t = SSLgetAnnotations(n_95);
          u_41 = t;
          t = m_95;
          t = o_95(t);
          h_42 = t;
          t = (ATerm) ATinsert(CheckATermList(h_42), l_95);
          o_16 = t;
          t = SSLsetAnnotations(o_16, u_41);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_95;
        t = d_80(t);
      }
    return(t);
  }
  t = o_95(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL;
  v_94 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_94;
    }
  else
    {
      ATerm a_13 (ATerm t)
      {
        t = not_null(x_94);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_94 != NULL) && (w_94 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_94 = ATgetFirst((ATermList) t);
          if(((x_94 != NULL) && (x_94 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_94 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_94;
      t = at_end_1_0(a_13, t);
    }
  return(t);
}
ATerm e_96 (ATerm s_95, ATerm t)
{
  ATerm t_95 = NULL;
  t = SSL_explode_term(s_95);
  if(match_cons(t, sym__2))
    {
      ATerm j_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_95;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_95 = NULL,a_96 = NULL,b_96 = NULL;
  b_96 = t;
  if(match_cons(t, sym__2))
    {
      z_95 = ATgetArgument(t, 0);
      a_96 = ATgetArgument(t, 1);
      {
        ATerm k_42 = t;
        int l_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_13 (ATerm t)
            {
              t = a_96;
              return(t);
            }
            t = z_95;
            t = at_end_1_0(b_13, t);
            ;
            LocalPopChoice(l_42);
          }
        else
          {
            t = k_42;
            t = e_96(b_96, t);
          }
      }
    }
  else
    {
      t = e_96(b_96, t);
    }
  return(t);
}
ATerm x_9 (ATerm u_51, ATerm t_51, ATerm t)
{
  ATerm f_96 = NULL,g_96 = NULL,h_96 = NULL;
  t = u_51;
  {
    ATerm m_42 = t;
    int n_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(n_42);
      }
    else
      {
        t = m_42;
        t = (ATerm) ATempty;
      }
    g_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_51, g_96);
    t = conc_0_0(t);
    f_96 = t;
    t = term_z_41;
    h_96 = t;
    t = SSL_table_put(h_96, u_51, f_96);
    t = (ATerm) ATmakeAppl(sym__3, term_z_41, u_51, f_96);
  }
  return(t);
}
ATerm j_10 (ATerm l_27, ATerm m_27, ATerm k_27, ATerm t)
{
  ATerm j_96 = NULL,k_96 = NULL,l_96 = NULL;
  j_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
  {
    ATerm o_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_42 = ATgetArgument(t, 0);
            ATerm u_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
        t = i_10(l_27, m_27, t);
        ;
        LocalPopChoice(q_42);
      }
    else
      {
        t = o_42;
        t = (ATerm) ATempty;
      }
    k_96 = t;
    t = (ATerm) ATinsert(CheckATermList(k_96), k_27);
    l_96 = t;
    t = SSL_table_put(l_27, m_27, l_96);
    t = j_96;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_96 = NULL,x_96 = NULL,y_96 = NULL;
      t = term_p_40;
      t = r_0(t);
      w_96 = t;
      t = term_e_42;
      x_96 = t;
      t = term_f_42;
      y_96 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_42, term_f_42, w_96);
      t = j_10(x_96, y_96, w_96, t);
      _fail(t);
    }
  else
    {
      ATerm c_97 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_96 = ATgetFirst((ATermList) t);
          t_96 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_96;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_96 = ATgetFirst((ATermList) t);
          v_96 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_96;
      t = n_0(t);
      t = u_96;
      t = p_0(t);
      c_97 = t;
      t = (ATerm) ATinsert(CheckATermList(v_96), c_97);
    }
  return(t);
}
ATerm c_13 (ATerm t)
{
  ATerm e_97 = NULL;
  e_97 = t;
  if(match_string(t, "--warning"))
    {
      t = e_97;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = e_97;
    }
  return(t);
}
ATerm p_13 (ATerm t)
{
  ATerm f_97 = NULL,g_97 = NULL,h_97 = NULL;
  f_97 = t;
  t = term_v_42;
  g_97 = t;
  t = (ATerm) ATinsert(ATempty, f_97);
  h_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_42, (ATerm) ATinsert(ATempty, f_97));
  t = x_9(g_97, h_97, t);
  t = term_p_40;
  return(t);
}
ATerm u_13 (ATerm t)
{
  t = term_w_42;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_13, p_13, u_13, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_97 = NULL,j_97 = NULL,k_97 = NULL,l_97 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_40;
  t = whoami_0_0(t);
  i_97 = t;
  t = term_p_18;
  k_97 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_42), i_97);
  l_97 = t;
  t = SSL_printnl(k_97, l_97);
  t = term_v_40;
  j_97 = t;
  t = SSL_exit(j_97);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_42;
  t = get_config_0_0(t);
  return(t);
}
ATerm e_10 (ATerm p_25, ATerm q_25, ATerm t)
{
  ATerm b_43 = t;
  int c_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_25, q_25);
      ;
      LocalPopChoice(c_43);
    }
  else
    {
      t = b_43;
      t = SSL_addr(p_25, q_25);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm t)
{
  ATerm n_97 = NULL,o_97 = NULL,p_97 = NULL;
  n_97 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_97;
      t = n_81(t);
    }
  else
    {
      ATerm s_97 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_97 = ATgetFirst((ATermList) t);
          p_97 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_97;
      t = foldr_2_0(n_81, o_81, t);
      s_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_97, s_97);
      t = o_81(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm v_13 (ATerm t)
{
  t = term_e_41;
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  if(match_cons(t, sym__2))
    {
      z_42 = ATgetArgument(t, 0);
      a_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10(z_42, a_43, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_97 = NULL,s_42 = NULL,t_42 = NULL;
  t = times_0_0(t);
  t_42 = t;
  t = SSL_explode_term(t_42);
  if(match_cons(t, sym__2))
    {
      ATerm d_43 = ATgetArgument(t, 0);
      s_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_42;
  t = foldr_2_0(v_13, w_13, t);
  v_97 = t;
  t = SSL_TicksToSeconds(v_97);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_98 = NULL,n_98 = NULL,o_98 = NULL;
  m_98 = t;
  if(match_cons(t, sym__2))
    {
      n_98 = ATgetArgument(t, 0);
      o_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_43 = t;
    int f_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_98;
        if((n_98 != t))
          {
            _fail(t);
          }
        t = m_98;
        ;
        LocalPopChoice(f_43);
      }
    else
      {
        t = e_43;
        t = (ATerm) ATmakeAppl(sym__2, n_98, o_98);
        {
          ATerm g_43 = t;
          int h_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_98, o_98);
              ;
              LocalPopChoice(h_43);
            }
          else
            {
              t = g_43;
              t = SSL_gtr(n_98, o_98);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_98, o_98);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_103 (ATerm), ATerm t)
{
  ATerm s_98 = NULL;
  s_98 = t;
  {
    ATerm i_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_98 = NULL;
        t = term_d_41;
        t = get_config_0_0(t);
        u_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_98, term_v_40);
        t = geq_0_0(t);
        t = s_98;
        t = x_103(t);
        ;
        LocalPopChoice(j_43);
      }
    else
      {
        t = i_43;
        t = s_98;
      }
  }
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm w_98 = NULL,x_98 = NULL,z_98 = NULL,a_99 = NULL;
  t = run_time_0_0(t);
  w_98 = t;
  t = term_p_40;
  t = whoami_0_0(t);
  x_98 = t;
  t = term_p_18;
  z_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_43), w_98), term_k_43), x_98);
  a_99 = t;
  t = SSL_printnl(z_98, a_99);
  t = (ATerm) ATmakeAppl(sym__2, term_p_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_43), w_98), term_k_43), x_98));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_99 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_41;
  b_99 = t;
  t = SSL_exit(b_99);
  return(t);
}
ATerm i_14 (ATerm t)
{
  ATerm j_99 = NULL,k_99 = NULL;
  k_99 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_99;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_99 = ATgetArgument(t, 0);
          {
            ATerm s_43 = NULL,u_16 = NULL;
            t = SSLgetAnnotations(k_99);
            s_43 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_99);
            u_16 = t;
            t = SSLsetAnnotations(u_16, s_43);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_99;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_106 (ATerm), ATerm t)
{
  ATerm m_43 = t;
  int n_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_43;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_43);
    }
  else
    {
      t = m_43;
      t = fetch_1_0(i_14, t);
    }
  t = n_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm n_99 = NULL,o_99 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_99 = ATgetFirst((ATermList) t);
      o_99 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_99 = NULL,t_99 = NULL;
        ATerm j_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_99)), not_null(t_99));
          return(t);
        }
        t = o_99;
        t = m_0(t);
        if(((s_99 != NULL) && (s_99 != t)))
          _fail(t);
        else
          s_99 = t;
        t = n_99;
        t = k_0(t);
        if(((t_99 != NULL) && (t_99 != t)))
          _fail(t);
        else
          t_99 = t;
        t = o_99;
        t = reverse_acc_2_0(k_0, j_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_40;
      t = m_0(t);
    }
  return(t);
}
ATerm l_14 (ATerm t)
{
  ATerm x_99 = NULL,y_99 = NULL,z_99 = NULL,x_16 = NULL;
  z_99 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_99);
  x_99 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_99);
  x_16 = t;
  t = SSLsetAnnotations(x_16, x_99);
  return(t);
}
ATerm o_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_14 (ATerm t)
{
  ATerm b_100 = NULL;
  b_100 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_100), term_p_43);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_99 = NULL,w_99 = NULL;
  ATerm q_43 = t;
  int t_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_42;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_43);
    }
  else
    {
      t = q_43;
      t = fetch_1_0(l_14, t);
    }
  t = term_u_43;
  t = echo_0_0(t);
  t = term_e_42;
  v_99 = t;
  t = term_f_42;
  w_99 = t;
  t = term_v_43;
  t = i_10(v_99, w_99, t);
  t = reverse_acc_2_0(_id, o_14, t);
  t = map_1_0(p_14, t);
  return(t);
}
ATerm fetch_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm y_100 (ATerm t)
  {
    ATerm v_100 = NULL,w_100 = NULL,x_100 = NULL;
    v_100 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_100 = ATgetFirst((ATermList) t);
        x_100 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_43 = t;
      int x_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_44 = NULL,r_44 = NULL,a_17 = NULL;
          t = SSLgetAnnotations(v_100);
          m_44 = t;
          t = w_100;
          t = x_79(t);
          r_44 = t;
          t = (ATerm) ATinsert(CheckATermList(x_100), r_44);
          a_17 = t;
          t = SSLsetAnnotations(a_17, m_44);
          ;
          LocalPopChoice(x_43);
        }
      else
        {
          t = w_43;
          {
            ATerm o_45 = NULL,r_45 = NULL,c_17 = NULL;
            t = SSLgetAnnotations(v_100);
            o_45 = t;
            t = x_100;
            t = y_100(t);
            r_45 = t;
            t = (ATerm) ATinsert(CheckATermList(r_45), w_100);
            c_17 = t;
            t = SSLsetAnnotations(c_17, o_45);
          }
        }
    }
    return(t);
  }
  t = y_100(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL;
  c_101 = t;
  {
    ATerm y_43 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_101;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_44 = ATgetFirst((ATermList) t);
                ATerm d_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_101;
          }
        ;
        LocalPopChoice(b_44);
      }
    else
      {
        t = y_43;
        t = (ATerm) ATinsert(ATempty, c_101);
      }
    d_101 = t;
    t = term_z_38;
    e_101 = t;
    t = SSL_printnl(e_101, d_101);
    t = c_101;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_42;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm h_10 (ATerm n_44, ATerm o_44, ATerm t)
{
  t = SSL_strcat(n_44, o_44);
  return(t);
}
ATerm debug_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm i_101 = NULL,j_101 = NULL,k_101 = NULL,l_101 = NULL;
  i_101 = t;
  t = l_102(t);
  j_101 = t;
  t = term_p_18;
  k_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_101), j_101);
  l_101 = t;
  t = SSL_printnl(k_101, l_101);
  t = i_101;
  return(t);
}
ATerm map_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  ATerm a_102 (ATerm t)
  {
    ATerm x_101 = NULL,y_101 = NULL,z_101 = NULL;
    x_101 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_101;
      }
    else
      {
        ATerm j_46 = NULL,m_46 = NULL,p_46 = NULL,s_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_101 = ATgetFirst((ATermList) t);
            z_101 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_101);
        j_46 = t;
        t = y_101;
        t = n_79(t);
        m_46 = t;
        t = z_101;
        t = a_102(t);
        p_46 = t;
        t = (ATerm) ATinsert(CheckATermList(p_46), m_46);
        s_17 = t;
        t = SSLsetAnnotations(s_17, j_46);
      }
    return(t);
  }
  t = a_102(t);
  return(t);
}
ATerm q_14 (ATerm t)
{
  ATerm e_44 = t;
  int f_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_44);
    }
  else
    {
      t = e_44;
    }
  return(t);
}
ATerm t_14 (ATerm t)
{
  t = term_h_44;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_44 = t;
  int k_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_102 = NULL;
      i_102 = t;
      t = SSL_is_string(i_102);
      ;
      LocalPopChoice(k_44);
    }
  else
    {
      t = j_44;
      {
        ATerm l_44 = t;
        int p_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_14, t);
            ;
            LocalPopChoice(p_44);
          }
        else
          {
            t = l_44;
            {
              ATerm q_102 = NULL,r_102 = NULL,s_102 = NULL;
              q_102 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_102 = ATgetArgument(t, 0);
                  t = r_102;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_102 = ATgetArgument(t, 0);
                      t = r_102;
                      {
                        ATerm q_44 = t;
                        int s_44 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(s_44);
                          }
                        else
                          {
                            t = q_44;
                            t = debug_1_0(t_14, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_102 = NULL,x_102 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_102 = ATgetArgument(t, 0);
                          s_102 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_102;
                      t = eval_config_0_0(t);
                      w_102 = t;
                      t = s_102;
                      t = eval_config_0_0(t);
                      x_102 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_102, x_102);
                      t = h_10(w_102, x_102, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm i_10 (ATerm c_29, ATerm d_29, ATerm t)
{
  t = SSL_table_get(c_29, d_29);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm b_103 = NULL,c_103 = NULL;
  b_103 = t;
  t = term_z_41;
  c_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_41, b_103);
  t = i_10(c_103, b_103, t);
  {
    ATerm t_44 = t;
    int u_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_103 = NULL,e_103 = NULL;
        t = eval_config_0_0(t);
        d_103 = t;
        t = term_z_41;
        e_103 = t;
        t = SSL_table_put(e_103, b_103, d_103);
        t = d_103;
        ;
        LocalPopChoice(u_44);
      }
    else
      {
        t = t_44;
      }
  }
  return(t);
}
ATerm u_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_14 (ATerm t)
{
  ATerm h_103 = NULL,i_103 = NULL;
  t = term_x_44;
  h_103 = t;
  t = term_p_40;
  i_103 = t;
  t = term_y_44;
  t = l_10(h_103, i_103, t);
  return(t);
}
ATerm a_15 (ATerm t)
{
  t = term_a_45;
  return(t);
}
ATerm c_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL;
  t = term_x_44;
  l_103 = t;
  t = term_p_40;
  m_103 = t;
  t = term_y_44;
  t = l_10(l_103, m_103, t);
  t = term_b_45;
  j_103 = t;
  t = term_p_40;
  k_103 = t;
  t = term_c_45;
  t = l_10(j_103, k_103, t);
  t = term_d_45;
  return(t);
}
ATerm e_15 (ATerm t)
{
  t = term_f_45;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_45 = t;
  int l_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_14, w_14, a_15, t);
      ;
      LocalPopChoice(l_45);
    }
  else
    {
      t = i_45;
      t = Option_3_0(c_15, d_15, e_15, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_65 (ATerm), ATerm t_65 (ATerm), ATerm t)
{
  ATerm n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL,r_103 = NULL,s_103 = NULL,a_18 = NULL;
  s_103 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_103 = ATgetFirst((ATermList) t);
      p_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_103);
  n_103 = t;
  t = o_103;
  t = s_65(t);
  q_103 = t;
  t = p_103;
  t = t_65(t);
  r_103 = t;
  t = (ATerm) ATinsert(CheckATermList(r_103), q_103);
  a_18 = t;
  t = SSLsetAnnotations(a_18, n_103);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_108 (ATerm), ATerm t)
{
  ATerm y_103 = NULL,z_103 = NULL,a_104 = NULL,b_104 = NULL,d_104 = NULL,e_104 = NULL,c_18 = NULL;
  y_103 = t;
  {
    ATerm m_45 = t;
    int n_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_45;
        t = q_108(t);
        ;
        LocalPopChoice(n_45);
      }
    else
      {
        t = m_45;
      }
    t = y_103;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_104 = ATgetFirst((ATermList) t);
        b_104 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_103);
    z_103 = t;
    t = term_y_42;
    e_104 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_42, a_104);
    t = l_10(e_104, a_104, t);
    t = b_104;
    {
      ATerm o_104 (ATerm t)
      {
        ATerm q_45 = t;
        int s_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_45 = t;
            int u_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_104 = NULL;
                h_104 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = h_104;
                ;
                LocalPopChoice(u_45);
              }
            else
              {
                t = t_45;
                t = q_108(t);
                t = Cons_2_0(_id, o_104, t);
              }
            ;
            LocalPopChoice(s_45);
          }
        else
          {
            t = q_45;
            {
              ATerm k_104 = NULL,l_104 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_104 = ATgetFirst((ATermList) t);
                  l_104 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_104), (ATerm) ATmakeAppl(sym_Undefined_1, k_104));
            }
          }
        return(t);
      }
      t = o_104(t);
      if(((d_104 != NULL) && (d_104 != t)))
        _fail(t);
      else
        d_104 = t;
      t = (ATerm) ATinsert(CheckATermList(d_104), (ATerm) ATmakeAppl(sym_Program_1, a_104));
      if(((c_18 != NULL) && (c_18 != t)))
        _fail(t);
      else
        c_18 = t;
      t = SSLsetAnnotations(c_18, z_103);
    }
  }
  return(t);
}
ATerm k_15 (ATerm t)
{
  ATerm a_105 = NULL;
  a_105 = t;
  if(match_string(t, "--help"))
    {
      t = a_105;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_105;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_105;
        }
    }
  return(t);
}
ATerm p_15 (ATerm t)
{
  ATerm b_105 = NULL,c_105 = NULL;
  t = term_o_43;
  b_105 = t;
  t = term_p_40;
  c_105 = t;
  t = term_v_45;
  t = l_10(b_105, c_105, t);
  t = term_w_45;
  return(t);
}
ATerm q_15 (ATerm t)
{
  t = term_x_45;
  return(t);
}
ATerm s_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_108 (ATerm), ATerm t)
{
  ATerm t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL,x_104 = NULL,y_104 = NULL,z_104 = NULL;
  v_104 = t;
  t = term_e_42;
  x_104 = t;
  t = term_f_42;
  y_104 = t;
  t = (ATerm) ATempty;
  z_104 = t;
  t = SSL_table_put(x_104, y_104, z_104);
  t = v_104;
  {
    ATerm h_15 (ATerm t)
    {
      ATerm y_45 = t;
      int z_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_108(t);
          ;
          LocalPopChoice(z_45);
        }
      else
        {
          t = y_45;
          {
            ATerm a_46 = t;
            int b_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_15, p_15, q_15, t);
                ;
                LocalPopChoice(b_46);
              }
            else
              {
                t = a_46;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_15, t);
    {
      ATerm c_46 = t;
      int d_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_105 = NULL;
          j_105 = t;
          {
            ATerm f_46 = t;
            int g_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_47 = NULL;
                t = j_105;
                {
                  ATerm h_46 = t;
                  int i_46 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_o_43;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(i_46);
                    }
                  else
                    {
                      t = h_46;
                      t = fetch_1_0(s_15, t);
                    }
                  t = j_105;
                  t = default_system_usage_0_0(t);
                  t = term_e_41;
                  q_47 = t;
                  t = SSL_exit(q_47);
                }
                ;
                LocalPopChoice(g_46);
              }
            else
              {
                t = f_46;
                {
                  ATerm c_48 = NULL;
                  t = term_x_44;
                  t = get_config_0_0(t);
                  t = j_105;
                  t = default_system_about_0_0(t);
                  t = term_e_41;
                  c_48 = t;
                  t = SSL_exit(c_48);
                }
              }
          }
          ;
          LocalPopChoice(d_46);
        }
      else
        {
          t = c_46;
          {
            ATerm k_46 = t;
            int l_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_105 = NULL,l_105 = NULL,m_105 = NULL;
                ATerm t_15 (ATerm t)
                {
                  ATerm n_105 = NULL,o_105 = NULL,p_105 = NULL,e_18 = NULL;
                  p_105 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      o_105 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_105);
                  n_105 = t;
                  t = o_105;
                  if(((t_104 != NULL) && (t_104 != t)))
                    _fail(t);
                  else
                    t_104 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, o_105);
                  e_18 = t;
                  t = SSLsetAnnotations(e_18, n_105);
                  return(t);
                }
                t = fetch_1_0(t_15, t);
                t = term_p_18;
                if(((l_105 != NULL) && (l_105 != t)))
                  _fail(t);
                else
                  l_105 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_104)), term_n_46);
                if(((m_105 != NULL) && (m_105 != t)))
                  _fail(t);
                else
                  m_105 = t;
                t = SSL_printnl(l_105, m_105);
                t = (ATerm) ATmakeAppl(sym__2, term_p_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_104)), term_n_46));
                t = default_system_usage_0_0(t);
                t = term_v_40;
                if(((k_105 != NULL) && (k_105 != t)))
                  _fail(t);
                else
                  k_105 = t;
                t = SSL_exit(k_105);
                ;
                LocalPopChoice(l_46);
              }
            else
              {
                t = k_46;
              }
          }
        }
      if(((u_104 != NULL) && (u_104 != t)))
        _fail(t);
      else
        u_104 = t;
      t = term_e_42;
      if(((w_104 != NULL) && (w_104 != t)))
        _fail(t);
      else
        w_104 = t;
      t = SSL_table_destroy(w_104);
      t = u_104;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t)
{
  ATerm u_105 = NULL,v_105 = NULL,w_105 = NULL,x_105 = NULL;
  t = parse_options_1_0(p_106, t);
  u_105 = t;
  t = term_o_46;
  x_105 = t;
  t = SSL_table_create(x_105);
  t = term_o_46;
  v_105 = t;
  t = term_q_46;
  w_105 = t;
  t = SSL_table_put(v_105, w_105, u_105);
  t = u_105;
  t = r_106(t);
  {
    ATerm r_46 = t;
    int s_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_106, t);
        ;
        LocalPopChoice(s_46);
      }
    else
      {
        t = r_46;
        {
          ATerm t_46 = t;
          int u_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_106(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_46);
            }
          else
            {
              t = t_46;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm u_15 (ATerm t)
{
  ATerm v_46 = t;
  int w_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = stratego_warnings_options_0_0(t);
      ;
      LocalPopChoice(w_46);
    }
  else
    {
      t = v_46;
      {
        ATerm b_47 = t;
        int c_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(c_47);
          }
        else
          {
            t = b_47;
            {
              ATerm d_47 = t;
              int e_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(e_47);
                }
              else
                {
                  t = d_47;
                  {
                    ATerm f_47 = t;
                    int g_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(x_15, y_15, z_15, t);
                        ;
                        LocalPopChoice(g_47);
                      }
                    else
                      {
                        t = f_47;
                        {
                          ATerm h_47 = t;
                          int j_47 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(j_47);
                            }
                          else
                            {
                              t = h_47;
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
ATerm w_15 (ATerm t)
{
  t = input_1_0(a_16, t);
  return(t);
}
ATerm x_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_15 (ATerm t)
{
  ATerm z_105 = NULL,a_106 = NULL;
  t = term_c_39;
  z_105 = t;
  t = term_p_40;
  a_106 = t;
  t = term_k_47;
  t = l_10(z_105, a_106, t);
  t = term_l_47;
  return(t);
}
ATerm z_15 (ATerm t)
{
  t = term_o_47;
  return(t);
}
ATerm a_16 (ATerm t)
{
  t = output_1_0(c_16, t);
  return(t);
}
ATerm c_16 (ATerm t)
{
  ATerm c_106 = NULL;
  c_106 = t;
  t = spec_use_def_0_0(t);
  t = c_106;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(u_15, default_usage_0_0, _id, w_15, t);
  return(t);
}
