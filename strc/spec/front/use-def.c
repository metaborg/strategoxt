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
Symbol sym_ListVar_1;
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
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
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
ATerm term_c_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_o_46;
ATerm term_k_46;
ATerm term_h_46;
ATerm term_a_46;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_k_45;
ATerm term_x_44;
ATerm term_k_44;
ATerm term_i_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_c_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_x_40;
ATerm term_t_40;
ATerm term_z_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_p_39;
ATerm term_l_39;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_v_26;
ATerm term_l_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_d_23;
ATerm term_z_22;
ATerm term_d_20;
ATerm term_y_19;
ATerm term_n_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_s_18;
ATerm term_u_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_k_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
void init_constant_terms (void)
{
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym__2, term_g_16, (ATerm) ATempty);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATempty);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Defined_2, term_v_25, term_w_25);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_Defined_2, term_a_32, term_w_25);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_Defined_2, term_x_34, term_y_34);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(sym__2, term_n_41, term_o_41);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_41);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym__2, term_a_42, term_e_41);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym__2, term_o_42, term_t_42);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(sym__2, term_k_45, term_e_41);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(sym__2, term_q_45, term_e_41);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym__2, term_e_44, term_e_41);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(sym__2, term_z_39, term_e_41);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
ATerm Unbound_0_0 (ATerm);
ATerm Warning_0_0 (ATerm);
ATerm MaybeUnbound_0_0 (ATerm);
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
ATerm w_8 (ATerm);
ATerm g_2 (ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm alltd_1_0 (ATerm v_84 (ATerm), ATerm);
ATerm h_2 (ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm x_8 (ATerm v_60, ATerm w_60, ATerm x_60, ATerm);
ATerm j_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm y_8 (ATerm p_60, ATerm t_60, ATerm r_60, ATerm);
ATerm q_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_8 (ATerm j_60, ATerm n_60, ATerm l_60, ATerm);
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
ATerm a_9 (ATerm h_59, ATerm i_59, ATerm j_59, ATerm l_59, ATerm);
ATerm CompareEntries_0_0 (ATerm);
ATerm b_9 (ATerm s_57, ATerm t_57, ATerm r_57, ATerm);
ATerm r_4 (ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm c_9 (ATerm o_28, ATerm n_28, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm undefine_unbound_MarkVar_0_1 (ATerm f_58, ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm mark_build_vars_0_0 (ATerm);
ATerm d_9 (ATerm y_27, ATerm z_27, ATerm a_28, ATerm);
ATerm DeclareBound_0_0 (ATerm);
ATerm g_9 (ATerm w_27, ATerm x_27, ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm MarkAndBind_0_0 (ATerm);
ATerm mark_match_vars_0_0 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm h_9 (ATerm z_82 (ATerm), ATerm d_27, ATerm b_27, ATerm);
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
ATerm m_9 (ATerm c_79 (ATerm), ATerm v_21, ATerm u_21, ATerm);
ATerm foldr_3_0 (ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm);
ATerm n_9 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm z_21, ATerm y_21, ATerm);
ATerm o_9 (ATerm x_78 (ATerm), ATerm t_21, ATerm s_21, ATerm);
ATerm genzip_4_0 (ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm s_9 (ATerm s_601, ATerm x_601, ATerm p_57, ATerm);
ATerm while_not_2_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm);
ATerm for_3_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm q_6 (ATerm);
ATerm u_6 (ATerm);
ATerm h_86 (ATerm b_85, ATerm c_85, ATerm d_85, ATerm);
ATerm v_6 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm y_6 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm free_vars_3_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm topdown_1_0 (ATerm d_83 (ATerm), ATerm);
ATerm u_9 (ATerm q_27, ATerm r_27, ATerm);
ATerm end_scope_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_82 (ATerm), ATerm);
ATerm scope_2_0 (ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm);
ATerm t_7 (ATerm);
ATerm a_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm k_8 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_88 (ATerm), ATerm);
ATerm l_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm q_9 (ATerm);
ATerm spec_use_def_0_0 (ATerm);
ATerm w_9 (ATerm x_46, ATerm y_46, ATerm);
ATerm x_9 (ATerm l_50, ATerm m_50, ATerm);
ATerm z_9 (ATerm n_102 (ATerm), ATerm u_474, ATerm p_50, ATerm);
ATerm y_9 (ATerm h_50, ATerm i_50, ATerm);
ATerm l_10 (ATerm);
ATerm n_10 (ATerm);
ATerm output_1_0 (ATerm w_106 (ATerm), ATerm);
ATerm p_92 (ATerm j_92, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm a_10 (ATerm n_50, ATerm);
ATerm b_10 (ATerm z_46, ATerm a_47, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_94 (ATerm c_93, ATerm);
ATerm e_94 (ATerm g_93, ATerm h_93, ATerm i_93, ATerm);
ATerm f_94 (ATerm q_93, ATerm r_93, ATerm s_93, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm q_10 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm x_106 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm x_10 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm d_11 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm x_11 (ATerm);
ATerm o_12 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_10 (ATerm o_51, ATerm p_51, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm q_12 (ATerm);
ATerm s_12 (ATerm);
ATerm t_12 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_12 (ATerm);
ATerm g_13 (ATerm);
ATerm h_13 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm d_80 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm h_97 (ATerm z_96, ATerm);
ATerm conc_0_0 (ATerm);
ATerm v_9 (ATerm u_51, ATerm t_51, ATerm);
ATerm h_10 (ATerm l_27, ATerm m_27, ATerm k_27, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm n_13 (ATerm);
ATerm o_13 (ATerm);
ATerm p_13 (ATerm);
ATerm stratego_warnings_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_10 (ATerm p_25, ATerm q_25, ATerm);
ATerm foldr_2_0 (ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_13 (ATerm);
ATerm x_13 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_103 (ATerm), ATerm);
ATerm y_13 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm c_14 (ATerm);
ATerm need_help_1_0 (ATerm n_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm g_14 (ATerm);
ATerm h_14 (ATerm);
ATerm j_14 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm x_79 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm f_10 (ATerm n_44, ATerm o_44, ATerm);
ATerm debug_1_0 (ATerm l_102 (ATerm), ATerm);
ATerm map_1_0 (ATerm n_79 (ATerm), ATerm);
ATerm o_14 (ATerm);
ATerm s_14 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm g_10 (ATerm c_29, ATerm d_29, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm u_14 (ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm f_15 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_65 (ATerm), ATerm t_65 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_108 (ATerm), ATerm);
ATerm n_15 (ATerm);
ATerm p_15 (ATerm);
ATerm r_15 (ATerm);
ATerm s_15 (ATerm);
ATerm parse_options_1_0 (ATerm p_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm);
ATerm w_15 (ATerm);
ATerm x_15 (ATerm);
ATerm y_15 (ATerm);
ATerm z_15 (ATerm);
ATerm a_16 (ATerm);
ATerm b_16 (ATerm);
ATerm d_16 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm f_0 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_h_16;
  return(t);
}
ATerm v_8 (ATerm e_21, ATerm d_21, ATerm f_21, ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,t_0 = NULL,v_0 = NULL,x_0 = NULL;
  a_0 = t;
  t = (ATerm) ATempty;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_16, e_21);
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_j_16, e_21));
  t = h_9(f_0, v_0, x_0, t);
  t = (ATerm) ATempty;
  b_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_16, e_21);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_k_16, e_21));
  t = h_9(z_0, b_0, t_0, t);
  t = f_21;
  t = use_vars_0_0(t);
  t = a_0;
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_h_16;
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_h_16;
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_h_16;
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
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_16, a_3);
            z_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_16, a_3));
            t = h_9(b_1, x_3, z_3, t);
            t = (ATerm) ATempty;
            v_3 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_16, a_3);
            w_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_m_16, a_3));
            t = h_9(c_1, v_3, w_3, t);
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
            ATerm p_16 = t;
            int r_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_3 = NULL,d_3 = NULL,g_3 = NULL,i_3 = NULL;
                t = (ATerm) ATempty;
                g_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_16, a_3);
                i_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_16, a_3));
                t = h_9(d_1, g_3, i_3, t);
                t = (ATerm) ATempty;
                c_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_16, a_3);
                d_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_16, a_3));
                t = h_9(e_1, c_3, d_3, t);
                t = v_2;
                t = bind_vars_0_0(t);
                ;
                LocalPopChoice(r_16);
              }
            else
              {
                t = p_16;
                {
                  ATerm y_16 = t;
                  int z_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = y_2;
                      t = unbound_vars_0_0(t);
                      ;
                      LocalPopChoice(z_16);
                    }
                  else
                    {
                      t = y_16;
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
        ATerm a_17 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
            t = (ATerm) ATempty;
            a_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_17, a_3);
            b_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_c_17, a_3));
            t = h_9(m_1, a_5, b_5, t);
            t = (ATerm) ATempty;
            y_4 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_17, a_3);
            z_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_17, a_3));
            t = h_9(n_1, y_4, z_4, t);
            t = f_3;
            t = bind_vars_0_0(t);
            ;
            LocalPopChoice(b_17);
          }
        else
          {
            t = a_17;
            {
              ATerm e_17 = t;
              int f_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_3;
                  t = unbound_vars_0_0(t);
                  ;
                  LocalPopChoice(f_17);
                }
              else
                {
                  t = e_17;
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
    ATerm g_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_6 = NULL,z_6 = NULL,a_7 = NULL;
        t = (ATerm) ATempty;
        z_6 = t;
        t = term_g_16;
        a_7 = t;
        t = term_k_17;
        t = g_9(a_7, z_6, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm m_17 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_17) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            x_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_p_17), x_6), term_o_17);
        ;
        LocalPopChoice(j_17);
      }
    else
      {
        t = g_17;
        {
          ATerm q_17 = t;
          int s_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_7 = NULL,s_7 = NULL,v_7 = NULL;
              t = (ATerm) ATempty;
              s_7 = t;
              t = term_g_16;
              v_7 = t;
              t = term_k_17;
              t = g_9(v_7, s_7, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm t_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_17) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  k_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_p_17), k_7), term_u_17);
              ;
              LocalPopChoice(s_17);
            }
          else
            {
              t = q_17;
              {
                ATerm w_17 = t;
                int g_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_8 = NULL,m_8 = NULL,n_8 = NULL;
                    t = (ATerm) ATempty;
                    m_8 = t;
                    t = term_g_16;
                    n_8 = t;
                    t = term_k_17;
                    t = g_9(n_8, m_8, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm h_18 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) h_18) != ATmakeSymbol("q_0", 0, ATtrue)))
                          _fail(t);
                        i_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_p_17), i_8), term_u_17);
                    ;
                    LocalPopChoice(g_18);
                  }
                else
                  {
                    t = w_17;
                    {
                      ATerm k_18 = t;
                      int m_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_8 = NULL,r_9 = NULL,d_10 = NULL;
                          t = (ATerm) ATempty;
                          r_9 = t;
                          t = term_g_16;
                          d_10 = t;
                          t = term_k_17;
                          t = g_9(d_10, r_9, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm n_18 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) n_18) != ATmakeSymbol("l_0", 0, ATtrue)))
                                _fail(t);
                              t_8 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_p_17), t_8), term_u_17);
                          ;
                          LocalPopChoice(m_18);
                        }
                      else
                        {
                          t = k_18;
                          {
                            ATerm p_18 = t;
                            int q_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm o_10 = NULL,r_10 = NULL,s_10 = NULL;
                                t = (ATerm) ATempty;
                                r_10 = t;
                                t = term_g_16;
                                s_10 = t;
                                t = term_k_17;
                                t = g_9(s_10, r_10, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm r_18 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) r_18) != ATmakeSymbol("h_0", 0, ATtrue)))
                                      _fail(t);
                                    o_10 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_p_17), o_10), term_s_18);
                                ;
                                LocalPopChoice(q_18);
                              }
                            else
                              {
                                t = p_18;
                                {
                                  ATerm w_10 = NULL,y_10 = NULL,z_10 = NULL;
                                  t = (ATerm) ATempty;
                                  y_10 = t;
                                  t = term_g_16;
                                  z_10 = t;
                                  t = term_k_17;
                                  t = g_9(z_10, y_10, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm t_18 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) t_18) != ATmakeSymbol("c_0", 0, ATtrue)))
                                        _fail(t);
                                      w_10 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_p_17), w_10), term_s_18);
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
ATerm Unbound_0_0 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL;
  s_6 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6;
  if(match_cons(t, sym_ListVar_1))
    {
      r_6 = ATgetArgument(t, 0);
      {
        ATerm v_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_6;
            n_6 = t;
            t = s_6;
            ;
            LocalPopChoice(x_18);
          }
        else
          {
            t = v_18;
            t = t_6;
            n_6 = t;
            t = s_6;
          }
      }
    }
  else
    {
      t = t_6;
      n_6 = t;
      t = s_6;
    }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_19), n_6), term_z_18);
  t = Context_0_0(t);
  o_6 = t;
  t = term_b_19;
  p_6 = t;
  t = SSL_printnl(p_6, o_6);
  t = o_6;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm b_8 = NULL;
  b_8 = t;
  {
    ATerm c_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_12 = NULL,e_13 = NULL,f_13 = NULL;
        t = (ATerm) ATempty;
        e_13 = t;
        t = term_h_16;
        f_13 = t;
        t = term_f_19;
        t = g_9(f_13, e_13, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm g_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_19) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            u_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_8), term_i_19), u_12), term_h_19);
        ;
        LocalPopChoice(e_19);
      }
    else
      {
        t = c_19;
        {
          ATerm k_19 = t;
          int l_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_13 = NULL,l_13 = NULL,m_13 = NULL;
              t = (ATerm) ATempty;
              l_13 = t;
              t = term_h_16;
              m_13 = t;
              t = term_f_19;
              t = g_9(m_13, l_13, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm m_19 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) m_19) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  j_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_8), term_i_19), j_13), term_n_19);
              ;
              LocalPopChoice(l_19);
            }
          else
            {
              t = k_19;
              {
                ATerm o_19 = t;
                int p_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_13 = NULL,s_13 = NULL,t_13 = NULL;
                    t = (ATerm) ATempty;
                    s_13 = t;
                    t = term_h_16;
                    t_13 = t;
                    t = term_f_19;
                    t = g_9(t_13, s_13, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm q_19 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) q_19) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        q_13 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_8), term_i_19), q_13), term_n_19);
                    ;
                    LocalPopChoice(p_19);
                  }
                else
                  {
                    t = o_19;
                    {
                      ATerm r_19 = t;
                      int s_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_14 = NULL,d_14 = NULL,e_14 = NULL;
                          t = (ATerm) ATempty;
                          d_14 = t;
                          t = term_h_16;
                          e_14 = t;
                          t = term_f_19;
                          t = g_9(e_14, d_14, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm t_19 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) t_19) != ATmakeSymbol("o_0", 0, ATtrue)))
                                _fail(t);
                              a_14 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_8), term_i_19), a_14), term_n_19);
                          ;
                          LocalPopChoice(s_19);
                        }
                      else
                        {
                          t = r_19;
                          {
                            ATerm u_19 = t;
                            int w_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm i_14 = NULL,k_14 = NULL,l_14 = NULL;
                                t = (ATerm) ATempty;
                                k_14 = t;
                                t = term_h_16;
                                l_14 = t;
                                t = term_f_19;
                                t = g_9(l_14, k_14, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm x_19 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) x_19) != ATmakeSymbol("j_0", 0, ATtrue)))
                                      _fail(t);
                                    i_14 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_8), term_i_19), i_14), term_y_19);
                                ;
                                LocalPopChoice(w_19);
                              }
                            else
                              {
                                t = u_19;
                                {
                                  ATerm t_14 = NULL,v_14 = NULL,z_14 = NULL;
                                  t = (ATerm) ATempty;
                                  v_14 = t;
                                  t = term_h_16;
                                  z_14 = t;
                                  t = term_f_19;
                                  t = g_9(z_14, v_14, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm z_19 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) z_19) != ATmakeSymbol("e_0", 0, ATtrue)))
                                        _fail(t);
                                      t_14 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_8), term_i_19), t_14), term_y_19);
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
ATerm MaybeUnbound_0_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,u_8 = NULL,e_9 = NULL,f_9 = NULL,i_9 = NULL;
  f_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_9;
  if(match_cons(t, sym_ListVar_1))
    {
      e_9 = ATgetArgument(t, 0);
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_9;
            r_8 = t;
            t = f_9;
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            t = i_9;
            r_8 = t;
            t = f_9;
          }
      }
    }
  else
    {
      t = i_9;
      r_8 = t;
      t = f_9;
    }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_20), r_8), term_z_18);
  t = Warning_0_0(t);
  s_8 = t;
  t = term_b_19;
  u_8 = t;
  t = SSL_printnl(u_8, s_8);
  t = s_8;
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL;
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_9 = NULL,p_9 = NULL;
      l_9 = t;
      if(match_cons(t, sym_Var_1))
        {
          k_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      p_9 = t;
      t = SSLgetAnnotations(l_9);
      j_9 = t;
      t = p_9;
      LocalPopChoice(f_20);
      {
        ATerm t_9 = NULL;
        t_9 = t;
        t = j_9;
        {
          ATerm g_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm i_20 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) i_20) != ATmakeSymbol("bound", 0, ATtrue)))
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
                        ATerm n_20 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) n_20) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm p_20 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(p_20) != AT_LIST) || !(ATisEmpty(p_20))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(l_20);
                    t = (ATerm) ATmakeAppl(sym_Var_1, k_9);
                    t = MaybeUnbound_0_0(t);
                    _fail(t);
                  }
                else
                  {
                    t = k_20;
                    {
                      ATerm q_20 = t;
                      int s_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm t_20 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) t_20) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm u_20 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(u_20) != AT_LIST) || !(ATisEmpty(u_20))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(s_20);
                          t = (ATerm) ATmakeAppl(sym_Var_1, k_9);
                          t = Unbound_0_0(t);
                        }
                      else
                        {
                          t = q_20;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, k_9);
                          t = Unbound_0_0(t);
                        }
                    }
                  }
              }
            }
          t = t_9;
        }
      }
    }
  else
    {
      t = e_20;
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_10 = NULL,i_10 = NULL,m_10 = NULL,p_10 = NULL,f_1 = NULL;
            p_10 = t;
            if(match_cons(t, sym_App_2))
              {
                i_10 = ATgetArgument(t, 0);
                m_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_10);
            e_10 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, i_10, m_10);
            f_1 = t;
            t = SSLsetAnnotations(f_1, e_10);
            LocalPopChoice(w_20);
            {
              ATerm b_11 = NULL,e_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,h_1 = NULL;
              m_11 = t;
              if(match_cons(t, sym_App_2))
                {
                  e_11 = ATgetArgument(t, 0);
                  j_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_11);
              b_11 = t;
              t = e_11;
              t = unbound_vars_0_0(t);
              k_11 = t;
              t = j_11;
              t = use_vars_0_0(t);
              l_11 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, k_11, l_11);
              h_1 = t;
              t = SSLsetAnnotations(h_1, b_11);
            }
          }
        else
          {
            t = v_20;
            {
              ATerm y_20 = t;
              int z_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,j_1 = NULL;
                  q_11 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      p_11 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_11);
                  o_11 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, p_11);
                  j_1 = t;
                  t = SSLsetAnnotations(j_1, o_11);
                  LocalPopChoice(z_20);
                  {
                    ATerm r_11 = NULL,s_11 = NULL,a_12 = NULL,b_12 = NULL,l_1 = NULL;
                    b_12 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        s_11 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(b_12);
                    r_11 = t;
                    t = s_11;
                    t = unbound_vars_0_0(t);
                    a_12 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, a_12);
                    l_1 = t;
                    t = SSLsetAnnotations(l_1, r_11);
                  }
                }
              else
                {
                  t = y_20;
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
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_12 = NULL,d_12 = NULL,f_12 = NULL,q_1 = NULL;
      f_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_12);
      c_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_12);
      q_1 = t;
      t = SSLsetAnnotations(q_1, c_12);
      LocalPopChoice(c_21);
      _fail(t);
    }
  else
    {
      t = b_21;
      {
        ATerm i_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,r_1 = NULL;
            j_12 = t;
            if(match_cons(t, sym_App_2))
              {
                h_12 = ATgetArgument(t, 0);
                i_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_12);
            g_12 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, h_12, i_12);
            r_1 = t;
            t = SSLsetAnnotations(r_1, g_12);
            LocalPopChoice(k_21);
            {
              ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,p_12 = NULL,r_12 = NULL,w_12 = NULL,s_1 = NULL;
              w_12 = t;
              if(match_cons(t, sym_App_2))
                {
                  l_12 = ATgetArgument(t, 0);
                  m_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_12);
              k_12 = t;
              t = l_12;
              t = unbound_vars_0_0(t);
              p_12 = t;
              t = m_12;
              t = use_vars_0_0(t);
              r_12 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, p_12, r_12);
              s_1 = t;
              t = SSLsetAnnotations(s_1, k_12);
            }
          }
        else
          {
            t = i_21;
            {
              ATerm l_21 = t;
              int n_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,t_1 = NULL;
                  z_12 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      y_12 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_12);
                  x_12 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, y_12);
                  t_1 = t;
                  t = SSLsetAnnotations(t_1, x_12);
                  LocalPopChoice(n_21);
                  {
                    ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,u_1 = NULL;
                    d_13 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        b_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(d_13);
                    a_13 = t;
                    t = b_13;
                    t = unbound_vars_0_0(t);
                    c_13 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, c_13);
                    u_1 = t;
                    t = SSLsetAnnotations(u_1, a_13);
                  }
                }
              else
                {
                  t = l_21;
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
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_13 = NULL,w_13 = NULL,z_13 = NULL,c_2 = NULL;
      z_13 = t;
      if(match_cons(t, sym_Build_1))
        {
          w_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_13);
      v_13 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, w_13);
      c_2 = t;
      t = SSLsetAnnotations(c_2, v_13);
      LocalPopChoice(p_21);
      {
        ATerm b_14 = NULL,m_14 = NULL,p_14 = NULL,q_14 = NULL,d_2 = NULL;
        q_14 = t;
        if(match_cons(t, sym_Build_1))
          {
            m_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_14);
        b_14 = t;
        t = m_14;
        t = use_vars_0_0(t);
        p_14 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, p_14);
        d_2 = t;
        t = SSLsetAnnotations(d_2, b_14);
      }
    }
  else
    {
      t = o_21;
      {
        ATerm x_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_14 = NULL,w_14 = NULL,x_14 = NULL,e_2 = NULL;
            x_14 = t;
            if(match_cons(t, sym_Match_1))
              {
                w_14 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_14);
            r_14 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, w_14);
            e_2 = t;
            t = SSLsetAnnotations(e_2, r_14);
            LocalPopChoice(a_22);
            {
              ATerm y_14 = NULL,a_15 = NULL,g_15 = NULL,h_15 = NULL,j_2 = NULL;
              h_15 = t;
              if(match_cons(t, sym_Match_1))
                {
                  a_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_15);
              y_14 = t;
              t = a_15;
              t = bind_vars_0_0(t);
              g_15 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, g_15);
              j_2 = t;
              t = SSLsetAnnotations(j_2, y_14);
            }
          }
        else
          {
            t = x_21;
            {
              ATerm b_22 = t;
              int c_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_15 = NULL,j_15 = NULL,m_15 = NULL,o_15 = NULL,t_15 = NULL,k_2 = NULL;
                  t_15 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      j_15 = ATgetArgument(t, 0);
                      m_15 = ATgetArgument(t, 1);
                      o_15 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_15);
                  i_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, j_15, m_15, o_15);
                  k_2 = t;
                  t = SSLsetAnnotations(k_2, i_15);
                  LocalPopChoice(c_22);
                  {
                    ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
                    x_17 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        y_17 = ATgetArgument(t, 0);
                        z_17 = ATgetArgument(t, 1);
                        a_18 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm d_22 = t;
                      int e_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_15 = NULL,q_15 = NULL,l_2 = NULL;
                          t = SSLgetAnnotations(x_17);
                          k_15 = t;
                          t = y_17;
                          t = bind_vars_0_0(t);
                          q_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, q_15, z_17, a_18);
                          l_2 = t;
                          t = SSLsetAnnotations(l_2, k_15);
                          ;
                          LocalPopChoice(e_22);
                        }
                      else
                        {
                          t = d_22;
                          {
                            ATerm h_22 = t;
                            int n_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm f_16 = NULL,n_16 = NULL,m_2 = NULL;
                                t = SSLgetAnnotations(x_17);
                                f_16 = t;
                                t = a_18;
                                t = unbound_vars_0_0(t);
                                n_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, y_17, z_17, n_16);
                                m_2 = t;
                                t = SSLsetAnnotations(m_2, f_16);
                                ;
                                LocalPopChoice(n_22);
                              }
                            else
                              {
                                t = h_22;
                                {
                                  ATerm r_17 = NULL,f_18 = NULL,n_2 = NULL;
                                  t = SSLgetAnnotations(x_17);
                                  r_17 = t;
                                  t = z_17;
                                  t = use_vars_0_0(t);
                                  f_18 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, y_17, f_18, a_18);
                                  n_2 = t;
                                  t = SSLsetAnnotations(n_2, r_17);
                                }
                              }
                          }
                        }
                    }
                  }
                }
              else
                {
                  t = b_22;
                  {
                    ATerm o_22 = t;
                    int p_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,i_18 = NULL,o_2 = NULL;
                        i_18 = t;
                        if(match_cons(t, sym_PrimT_3))
                          {
                            c_18 = ATgetArgument(t, 0);
                            d_18 = ATgetArgument(t, 1);
                            e_18 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(i_18);
                        b_18 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, c_18, d_18, e_18);
                        o_2 = t;
                        t = SSLsetAnnotations(o_2, b_18);
                        LocalPopChoice(p_22);
                        {
                          ATerm o_20 = NULL,x_20 = NULL,a_21 = NULL,g_21 = NULL;
                          o_20 = t;
                          if(match_cons(t, sym_PrimT_3))
                            {
                              x_20 = ATgetArgument(t, 0);
                              a_21 = ATgetArgument(t, 1);
                              g_21 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          {
                            ATerm q_22 = t;
                            int r_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_19 = NULL,j_19 = NULL,p_2 = NULL;
                                t = SSLgetAnnotations(o_20);
                                d_19 = t;
                                t = a_21;
                                t = unbound_vars_0_0(t);
                                j_19 = t;
                                t = (ATerm) ATmakeAppl(sym_PrimT_3, x_20, j_19, g_21);
                                p_2 = t;
                                t = SSLsetAnnotations(p_2, d_19);
                                ;
                                LocalPopChoice(r_22);
                              }
                            else
                              {
                                t = q_22;
                                {
                                  ATerm v_19 = NULL,a_20 = NULL,q_2 = NULL;
                                  t = SSLgetAnnotations(o_20);
                                  v_19 = t;
                                  t = g_21;
                                  t = use_vars_0_0(t);
                                  a_20 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, x_20, a_21, a_20);
                                  q_2 = t;
                                  t = SSLsetAnnotations(q_2, v_19);
                                }
                              }
                          }
                        }
                      }
                    else
                      {
                        t = o_22;
                        {
                          ATerm s_22 = t;
                          int t_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_21 = NULL,q_21 = NULL,r_21 = NULL,w_21 = NULL,g_22 = NULL,r_2 = NULL;
                              g_22 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  q_21 = ATgetArgument(t, 0);
                                  r_21 = ATgetArgument(t, 1);
                                  w_21 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(g_22);
                              j_21 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, q_21, r_21, w_21);
                              r_2 = t;
                              t = SSLsetAnnotations(r_2, j_21);
                              LocalPopChoice(t_22);
                              {
                                ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
                                v_23 = t;
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    w_23 = ATgetArgument(t, 0);
                                    x_23 = ATgetArgument(t, 1);
                                    y_23 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm u_22 = t;
                                  int y_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm m_20 = NULL,r_20 = NULL,s_2 = NULL;
                                      t = SSLgetAnnotations(v_23);
                                      m_20 = t;
                                      t = x_23;
                                      t = unbound_vars_0_0(t);
                                      r_20 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, w_23, r_20, y_23);
                                      s_2 = t;
                                      t = SSLsetAnnotations(s_2, m_20);
                                      ;
                                      LocalPopChoice(y_22);
                                    }
                                  else
                                    {
                                      t = u_22;
                                      {
                                        ATerm h_21 = NULL,m_21 = NULL,t_2 = NULL;
                                        t = SSLgetAnnotations(v_23);
                                        h_21 = t;
                                        t = y_23;
                                        t = use_vars_0_0(t);
                                        m_21 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, w_23, x_23, m_21);
                                        t_2 = t;
                                        t = SSLsetAnnotations(t_2, h_21);
                                      }
                                    }
                                }
                              }
                            }
                          else
                            {
                              t = s_22;
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
  t = term_g_16;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_h_16;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_h_16;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm n_24 = NULL,p_24 = NULL,q_24 = NULL,u_24 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      p_24 = ATgetArgument(t, 0);
      q_24 = ATgetArgument(t, 1);
      u_24 = ATgetArgument(t, 2);
      n_24 = ATgetArgument(t, 3);
      {
        ATerm a_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
        t = (ATerm) ATempty;
        g_25 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_22, p_24);
        h_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_z_22, p_24));
        t = h_9(o_1, g_25, h_25, t);
        t = (ATerm) ATempty;
        a_25 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_23, p_24);
        f_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_23, p_24));
        t = h_9(p_1, a_25, f_25, t);
        t = n_24;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, p_24, q_24, u_24, n_24);
      }
    }
  else
    {
      ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,r_25 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          p_24 = ATgetArgument(t, 0);
          q_24 = ATgetArgument(t, 1);
          u_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      o_25 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_23, p_24);
      r_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_23, p_24));
      t = h_9(v_1, o_25, r_25, t);
      t = (ATerm) ATempty;
      m_25 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_23, p_24);
      n_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_23, p_24));
      t = h_9(w_1, m_25, n_25, t);
      t = u_24;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, p_24, q_24, u_24);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm f_109 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,h_5 = NULL;
  ATerm x_1 (ATerm t)
  {
    ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,q_26 = NULL,r_26 = NULL,g_27 = NULL,i_27 = NULL,s_27 = NULL,v_27 = NULL,c_28 = NULL,l_5 = NULL,k_5 = NULL;
    c_28 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        r_26 = ATgetArgument(t, 0);
        g_27 = ATgetArgument(t, 1);
        i_27 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_28);
    q_26 = t;
    t = r_26;
    t = f_109(t);
    s_27 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, s_27, g_27, i_27);
    k_5 = t;
    t = SSLsetAnnotations(k_5, q_26);
    v_27 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        e_26 = ATgetArgument(t, 0);
        f_26 = ATgetArgument(t, 1);
        g_26 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_27);
    d_26 = t;
    t = f_26;
    t = f_109(t);
    h_26 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_26, h_26, g_26);
    l_5 = t;
    t = SSLsetAnnotations(l_5, d_26);
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,j_28 = NULL,k_28 = NULL,r_28 = NULL,m_5 = NULL;
    r_28 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        e_28 = ATgetArgument(t, 0);
        f_28 = ATgetArgument(t, 1);
        j_28 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_28);
    d_28 = t;
    t = j_28;
    t = f_109(t);
    k_28 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_28, f_28, k_28);
    m_5 = t;
    t = SSLsetAnnotations(m_5, d_28);
    return(t);
  }
  c_26 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      z_25 = ATgetArgument(t, 0);
      a_26 = ATgetArgument(t, 1);
      b_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_26);
  y_25 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_25, a_26, b_26);
  h_5 = t;
  t = SSLsetAnnotations(h_5, y_25);
  t = abstract_choice_2_0(x_1, y_1, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  ATerm t_28 = NULL,x_28 = NULL,y_28 = NULL,b_29 = NULL,t_5 = NULL;
  ATerm z_1 (ATerm t)
  {
    ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,i_29 = NULL,l_29 = NULL,u_5 = NULL;
    l_29 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        f_29 = ATgetArgument(t, 0);
        g_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_29);
    e_29 = t;
    t = f_29;
    t = e_109(t);
    i_29 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, i_29, g_29);
    u_5 = t;
    t = SSLsetAnnotations(u_5, e_29);
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm o_29 = NULL,s_29 = NULL,t_29 = NULL,v_29 = NULL,w_29 = NULL,v_5 = NULL;
    w_29 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        s_29 = ATgetArgument(t, 0);
        t_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(w_29);
    o_29 = t;
    t = t_29;
    t = e_109(t);
    v_29 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, s_29, v_29);
    v_5 = t;
    t = SSLsetAnnotations(v_5, o_29);
    return(t);
  }
  b_29 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      x_28 = ATgetArgument(t, 0);
      y_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_29);
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, x_28, y_28);
  t_5 = t;
  t = SSLsetAnnotations(t_5, t_28);
  t = abstract_choice_2_0(z_1, a_2, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  h_30 = t;
  t = save_MarkVar_0_0(t);
  z_29 = t;
  t = h_30;
  t = g_109(t);
  g_30 = t;
  t = save_MarkVar_0_0(t);
  a_30 = t;
  t = term_h_23;
  j_30 = t;
  t = SSL_table_destroy(j_30);
  t = term_h_23;
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_23, z_29);
  t = c_9(i_30, z_29, t);
  t = g_30;
  t = h_109(t);
  f_30 = t;
  t = a_30;
  t = isect_MarkVar_0_0(t);
  t = f_30;
  return(t);
}
ATerm mark_choice_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,z_5 = NULL;
  ATerm b_2 (ATerm t)
  {
    ATerm o_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,a_6 = NULL;
    y_30 = t;
    if(match_cons(t, sym_Choice_2))
      {
        v_30 = ATgetArgument(t, 0);
        w_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_30);
    o_30 = t;
    t = v_30;
    t = d_109(t);
    x_30 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, x_30, w_30);
    a_6 = t;
    t = SSLsetAnnotations(a_6, o_30);
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,b_6 = NULL;
    d_31 = t;
    if(match_cons(t, sym_Choice_2))
      {
        a_31 = ATgetArgument(t, 0);
        b_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_31);
    z_30 = t;
    t = b_31;
    t = d_109(t);
    c_31 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, a_31, c_31);
    b_6 = t;
    t = SSLsetAnnotations(b_6, z_30);
    return(t);
  }
  n_30 = t;
  if(match_cons(t, sym_Choice_2))
    {
      l_30 = ATgetArgument(t, 0);
      m_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_30);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, l_30, m_30);
  z_5 = t;
  t = SSLsetAnnotations(z_5, k_30);
  t = abstract_choice_2_0(b_2, f_2, t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm e_31 = NULL,h_31 = NULL,i_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,u_31 = NULL,g_6 = NULL,f_6 = NULL;
  h_31 = t;
  t = save_MarkVar_0_0(t);
  e_31 = t;
  t = h_31;
  if(match_cons(t, sym_Rec_2))
    {
      q_31 = ATgetArgument(t, 0);
      r_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_31);
  p_31 = t;
  t = r_31;
  t = mark_buv_0_0(t);
  u_31 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, q_31, u_31);
  f_6 = t;
  t = SSLsetAnnotations(f_6, p_31);
  t = e_31;
  t = isect_MarkVar_0_0(t);
  t = h_31;
  if(match_cons(t, sym_Rec_2))
    {
      k_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_31);
  i_31 = t;
  t = l_31;
  t = mark_buv_0_0(t);
  m_31 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, k_31, m_31);
  g_6 = t;
  t = SSLsetAnnotations(g_6, i_31);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm v_31 = NULL,x_31 = NULL,c_32 = NULL,d_32 = NULL,f_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,m_32 = NULL,r_32 = NULL,s_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,l_6 = NULL,k_6 = NULL,j_6 = NULL;
  b_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      x_32 = ATgetArgument(t, 0);
      y_32 = ATgetArgument(t, 1);
      z_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_33);
  w_32 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, x_32, y_32, z_32);
  j_6 = t;
  t = SSLsetAnnotations(j_6, w_32);
  a_33 = t;
  t = save_MarkVar_0_0(t);
  v_31 = t;
  t = a_33;
  if(match_cons(t, sym_PrimT_3))
    {
      k_32 = ATgetArgument(t, 0);
      m_32 = ATgetArgument(t, 1);
      r_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_33);
  j_32 = t;
  t = r_32;
  t = map_1_0(g_2, t);
  s_32 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, k_32, m_32, s_32);
  k_6 = t;
  t = SSLsetAnnotations(k_6, j_32);
  v_32 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      c_32 = ATgetArgument(t, 0);
      d_32 = ATgetArgument(t, 1);
      f_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_32);
  x_31 = t;
  t = d_32;
  t = mark_buv_0_0(t);
  h_32 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, c_32, h_32, f_32);
  l_6 = t;
  t = SSLsetAnnotations(l_6, x_31);
  i_32 = t;
  t = v_31;
  t = isect_MarkVar_0_0(t);
  t = i_32;
  return(t);
}
ATerm alltd_1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm c_33 (ATerm t)
  {
    ATerm i_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_84(t);
        ;
        LocalPopChoice(k_23);
      }
    else
      {
        t = i_23;
        t = SRTS_all(c_33, t);
      }
    return(t);
  }
  t = c_33(t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
  r_35 = t;
  if(match_cons(t, sym_CallT_3))
    {
      s_35 = ATgetArgument(t, 0);
      t_35 = ATgetArgument(t, 1);
      q_35 = ATgetArgument(t, 2);
      {
        ATerm f_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,e_23 = NULL,j_23 = NULL,n_23 = NULL,d_7 = NULL,c_7 = NULL,b_7 = NULL;
        t = SSLgetAnnotations(r_35);
        j_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, s_35, t_35, q_35);
        b_7 = t;
        t = SSLsetAnnotations(b_7, j_23);
        n_23 = t;
        t = save_MarkVar_0_0(t);
        f_22 = t;
        t = n_23;
        if(match_cons(t, sym_CallT_3))
          {
            x_22 = ATgetArgument(t, 0);
            a_23 = ATgetArgument(t, 1);
            b_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_23);
        w_22 = t;
        t = b_23;
        t = map_1_0(h_2, t);
        c_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, x_22, a_23, c_23);
        c_7 = t;
        t = SSLsetAnnotations(c_7, w_22);
        e_23 = t;
        if(match_cons(t, sym_CallT_3))
          {
            j_22 = ATgetArgument(t, 0);
            k_22 = ATgetArgument(t, 1);
            l_22 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_23);
        i_22 = t;
        t = k_22;
        t = mark_buv_0_0(t);
        m_22 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, j_22, m_22, l_22);
        d_7 = t;
        t = SSLsetAnnotations(d_7, i_22);
        v_22 = t;
        t = f_22;
        t = isect_MarkVar_0_0(t);
        t = v_22;
      }
    }
  else
    {
      ATerm g_24 = NULL,m_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,w_24 = NULL,b_25 = NULL,e_25 = NULL,f_7 = NULL,e_7 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          s_35 = ATgetArgument(t, 0);
          t_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_35);
      b_25 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, s_35, t_35);
      e_7 = t;
      t = SSLsetAnnotations(e_7, b_25);
      e_25 = t;
      t = save_MarkVar_0_0(t);
      g_24 = t;
      t = e_25;
      if(match_cons(t, sym_Call_2))
        {
          r_24 = ATgetArgument(t, 0);
          s_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_25);
      m_24 = t;
      t = s_24;
      t = mark_buv_0_0(t);
      t_24 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, r_24, t_24);
      f_7 = t;
      t = SSLsetAnnotations(f_7, m_24);
      w_24 = t;
      t = g_24;
      t = isect_MarkVar_0_0(t);
      t = w_24;
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm x_8 (ATerm v_60, ATerm w_60, ATerm x_60, ATerm t)
{
  ATerm a_36 = NULL;
  ATerm x_2 (ATerm t)
  {
    t = w_60;
    t = map_1_0(IntroduceBound_0_0, t);
    t = x_60;
    t = mark_build_vars_0_0(t);
    if(((a_36 != NULL) && (a_36 != t)))
      _fail(t);
    else
      a_36 = t;
    return(t);
  }
  t = scope_2_0(i_2, x_2, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, v_60, w_60, not_null(a_36));
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm v_36 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_36);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      {
        ATerm y_36 = NULL,z_36 = NULL,e_37 = NULL,f_37 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            y_36 = ATgetArgument(t, 0);
            t = y_36;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                y_36 = ATgetArgument(t, 0);
                z_36 = ATgetArgument(t, 1);
                e_37 = ATgetArgument(t, 2);
                f_37 = ATgetArgument(t, 3);
                t = e_37;
                t = map_1_0(o_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    y_36 = ATgetArgument(t, 0);
                    z_36 = ATgetArgument(t, 1);
                    e_37 = ATgetArgument(t, 2);
                    f_37 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = e_37;
                t = map_1_0(p_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm p_37 = NULL;
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_37 = ATgetArgument(t, 0);
          {
            ATerm q_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_23);
      t = p_37;
    }
  else
    {
      t = o_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_37;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm h_38 = NULL;
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_38 = ATgetArgument(t, 0);
          {
            ATerm t_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_23);
      t = h_38;
    }
  else
    {
      t = r_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_38;
    }
  return(t);
}
ATerm y_8 (ATerm p_60, ATerm t_60, ATerm r_60, ATerm t)
{
  ATerm l_36 = NULL,n_36 = NULL,o_36 = NULL;
  ATerm k_3 (ATerm t)
  {
    t = p_60;
    t = free_vars_3_0(m_3, n_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = p_60;
    t = mark_match_vars_0_0(t);
    if(((l_36 != NULL) && (l_36 != t)))
      _fail(t);
    else
      l_36 = t;
    t = r_60;
    t = mark_buv_0_0(t);
    if(((n_36 != NULL) && (n_36 != t)))
      _fail(t);
    else
      n_36 = t;
    t = t_60;
    t = mark_build_vars_0_0(t);
    if(((o_36 != NULL) && (o_36 != t)))
      _fail(t);
    else
      o_36 = t;
    return(t);
  }
  t = scope_2_0(j_3, k_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_36), not_null(o_36), not_null(n_36)));
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm v_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_38);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm u_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = u_23;
      {
        ATerm x_38 = NULL,b_39 = NULL,c_39 = NULL,e_39 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            x_38 = ATgetArgument(t, 0);
            t = x_38;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                x_38 = ATgetArgument(t, 0);
                b_39 = ATgetArgument(t, 1);
                c_39 = ATgetArgument(t, 2);
                e_39 = ATgetArgument(t, 3);
                t = c_39;
                t = map_1_0(u_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    x_38 = ATgetArgument(t, 0);
                    b_39 = ATgetArgument(t, 1);
                    c_39 = ATgetArgument(t, 2);
                    e_39 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = c_39;
                t = map_1_0(y_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm x_39 = NULL;
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_39 = ATgetArgument(t, 0);
          {
            ATerm c_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_24);
      t = x_39;
    }
  else
    {
      t = a_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_39;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm o_40 = NULL;
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_40 = ATgetArgument(t, 0);
          {
            ATerm f_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_24);
      t = o_40;
    }
  else
    {
      t = d_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_40;
    }
  return(t);
}
ATerm z_8 (ATerm j_60, ATerm n_60, ATerm l_60, ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
  ATerm r_3 (ATerm t)
  {
    t = j_60;
    t = free_vars_3_0(s_3, t_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = j_60;
    t = mark_match_vars_0_0(t);
    if(((s_38 != NULL) && (s_38 != t)))
      _fail(t);
    else
      s_38 = t;
    t = l_60;
    t = mark_buv_0_0(t);
    if(((t_38 != NULL) && (t_38 != t)))
      _fail(t);
    else
      t_38 = t;
    t = n_60;
    t = mark_build_vars_0_0(t);
    if(((u_38 != NULL) && (u_38 != t)))
      _fail(t);
    else
      u_38 = t;
    return(t);
  }
  t = scope_2_0(q_3, r_3, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_38), not_null(u_38), not_null(t_38)));
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm s_42 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_42);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      {
        ATerm a_43 = NULL,b_43 = NULL,d_43 = NULL,j_43 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            a_43 = ATgetArgument(t, 0);
            t = a_43;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                a_43 = ATgetArgument(t, 0);
                b_43 = ATgetArgument(t, 1);
                d_43 = ATgetArgument(t, 2);
                j_43 = ATgetArgument(t, 3);
                t = d_43;
                t = map_1_0(c_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    a_43 = ATgetArgument(t, 0);
                    b_43 = ATgetArgument(t, 1);
                    d_43 = ATgetArgument(t, 2);
                    j_43 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = d_43;
                t = map_1_0(d_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm t_43 = NULL;
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_43 = ATgetArgument(t, 0);
          {
            ATerm l_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_24);
      t = t_43;
    }
  else
    {
      t = j_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_43;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm r_44 = NULL;
  ATerm o_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_44 = ATgetArgument(t, 0);
          {
            ATerm x_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_24);
      t = r_44;
    }
  else
    {
      t = o_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_44;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm y_45 = NULL;
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_45 = ATgetArgument(t, 0);
          {
            ATerm c_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_24);
      t = y_45;
    }
  else
    {
      t = y_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_45;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm b_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_46);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm d_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(i_25);
    }
  else
    {
      t = d_25;
      {
        ATerm i_46 = NULL,j_46 = NULL,m_46 = NULL,t_46 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_46 = ATgetArgument(t, 0);
            t = i_46;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_46 = ATgetArgument(t, 0);
                j_46 = ATgetArgument(t, 1);
                m_46 = ATgetArgument(t, 2);
                t_46 = ATgetArgument(t, 3);
                t = m_46;
                t = map_1_0(j_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_46 = ATgetArgument(t, 0);
                    j_46 = ATgetArgument(t, 1);
                    m_46 = ATgetArgument(t, 2);
                    t_46 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = m_46;
                t = map_1_0(k_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm o_47 = NULL;
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_47 = ATgetArgument(t, 0);
          {
            ATerm l_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_25);
      t = o_47;
    }
  else
    {
      t = j_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_47;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm d_48 = NULL;
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_48 = ATgetArgument(t, 0);
          {
            ATerm u_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_25);
      t = d_48;
    }
  else
    {
      t = s_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_48;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      r_41 = ATgetArgument(t, 0);
      s_41 = ATgetArgument(t, 1);
      t_41 = ATgetArgument(t, 2);
      {
        ATerm d_42 = NULL,h_42 = NULL,j_42 = NULL,r_42 = NULL;
        t = t_41;
        if(match_cons(t, sym_Rule_3))
          {
            h_41 = ATgetArgument(t, 0);
            i_41 = ATgetArgument(t, 1);
            j_41 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = t_41;
        t = free_vars_3_0(a_4, b_4, tboundin_3_0, t);
        d_42 = t;
        {
          ATerm f_4 (ATerm t)
          {
            t = d_42;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = h_41;
            t = mark_match_vars_0_0(t);
            if(((h_42 != NULL) && (h_42 != t)))
              _fail(t);
            else
              h_42 = t;
            t = j_41;
            t = mark_buv_0_0(t);
            if(((j_42 != NULL) && (j_42 != t)))
              _fail(t);
            else
              j_42 = t;
            t = i_41;
            t = mark_build_vars_0_0(t);
            if(((r_42 != NULL) && (r_42 != t)))
              _fail(t);
            else
              r_42 = t;
            return(t);
          }
          t = scope_2_0(e_4, f_4, t);
          t = (ATerm) ATmakeAppl(sym_RDef_3, r_41, s_41, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_42), not_null(r_42), not_null(j_42)));
        }
      }
    }
  else
    {
      ATerm a_45 = NULL,b_45 = NULL,e_45 = NULL,h_45 = NULL,o_45 = NULL,p_45 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          r_41 = ATgetArgument(t, 0);
          s_41 = ATgetArgument(t, 1);
          t_41 = ATgetArgument(t, 2);
          u_41 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = u_41;
      if(match_cons(t, sym_Rule_3))
        {
          v_41 = ATgetArgument(t, 0);
          w_41 = ATgetArgument(t, 1);
          x_41 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_41;
      t = map_1_0(g_4, t);
      a_45 = t;
      t = u_41;
      t = free_vars_3_0(h_4, i_4, tboundin_3_0, t);
      p_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_45, a_45);
      t = diff_0_0(t);
      b_45 = t;
      {
        ATerm m_4 (ATerm t)
        {
          t = a_45;
          t = map_1_0(IntroduceBound_0_0, t);
          t = b_45;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = v_41;
          t = mark_match_vars_0_0(t);
          if(((e_45 != NULL) && (e_45 != t)))
            _fail(t);
          else
            e_45 = t;
          t = x_41;
          t = mark_buv_0_0(t);
          if(((h_45 != NULL) && (h_45 != t)))
            _fail(t);
          else
            h_45 = t;
          t = w_41;
          t = mark_build_vars_0_0(t);
          if(((o_45 != NULL) && (o_45 != t)))
            _fail(t);
          else
            o_45 = t;
          return(t);
        }
        t = scope_2_0(l_4, m_4, t);
        t = (ATerm) ATmakeAppl(sym_RDefT_4, r_41, s_41, t_41, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_45), not_null(o_45), not_null(h_45)));
      }
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL;
  g_48 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_48);
  h_48 = t;
  t = term_x_25;
  i_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, g_48), term_x_25);
  t = h_9(n_4, h_48, i_48, t);
  t = g_48;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm q_48 = NULL;
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_48 = ATgetArgument(t, 0);
          {
            ATerm k_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_26);
      t = q_48;
    }
  else
    {
      t = i_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_48;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm a_9 (ATerm h_59, ATerm i_59, ATerm j_59, ATerm l_59, ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL;
  t = j_59;
  t = map_1_0(o_4, t);
  k_48 = t;
  {
    ATerm q_4 (ATerm t)
    {
      t = k_48;
      t = map_1_0(IntroduceBound_0_0, t);
      t = l_59;
      t = mark_buv_0_0(t);
      if(((l_48 != NULL) && (l_48 != t)))
        _fail(t);
      else
        l_48 = t;
      return(t);
    }
    t = scope_2_0(p_4, q_4, t);
    t = (ATerm) ATmakeAppl(sym_SDefT_4, h_59, i_59, j_59, not_null(l_48));
  }
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm m_49 = NULL,o_49 = NULL,r_49 = NULL,s_49 = NULL,u_49 = NULL,w_49 = NULL;
  m_49 = t;
  if(match_cons(t, sym__2))
    {
      o_49 = ATgetArgument(t, 0);
      u_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_49;
  if(match_cons(t, sym_Undefined_0))
    {
      t = o_49;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_l_26;
        }
      else
        {
          t = term_l_26;
        }
    }
  else
    {
      ATerm n_26 = t;
      int o_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm p_26 = ATgetArgument(t, 0);
              w_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(o_26);
          t = o_49;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_l_26;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  r_49 = ATgetArgument(t, 0);
                  s_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm s_26 = t;
                int t_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, s_49, w_49);
                    {
                      ATerm u_26 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm m_26 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              m_26 = ATgetArgument(t, 0);
                              if((m_26 != ATgetArgument(t, 1)))
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
                          t = u_26;
                        }
                      t = (ATerm) ATmakeAppl(sym_Defined_2, r_49, term_v_26);
                    }
                    ;
                    LocalPopChoice(t_26);
                  }
                else
                  {
                    t = s_26;
                    t = w_49;
                    if((s_49 != t))
                      {
                        _fail(t);
                      }
                    t = o_49;
                  }
              }
            }
        }
      else
        {
          t = n_26;
          t = o_49;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_l_26;
        }
    }
  return(t);
}
ATerm b_9 (ATerm s_57, ATerm t_57, ATerm r_57, ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
  t = term_h_23;
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_23, s_57);
  t = g_10(g_50, s_57, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_50 = ATgetFirst((ATermList) t);
      {
        ATerm w_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_57, e_50);
  t = CompareEntries_0_0(t);
  f_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_57, (ATerm) ATinsert(CheckATermList(r_57), f_50));
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL,j_51 = NULL,k_51 = NULL;
  k_51 = t;
  if(match_cons(t, sym__2))
    {
      e_51 = ATgetArgument(t, 0);
      f_51 = ATgetArgument(t, 1);
      t = f_51;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_51 = ATgetFirst((ATermList) t);
          j_51 = (ATerm) ATgetNext((ATermList) t);
          t = g_51;
          {
            ATerm x_26 = t;
            int y_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm z_26 = ATgetArgument(t, 0);
                    ATerm a_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(y_26);
                t = e_51;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = k_51;
                  }
                else
                  {
                    ATerm c_27 = t;
                    int e_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = k_51;
                        t = b_9(e_51, g_51, j_51, t);
                        ;
                        LocalPopChoice(e_27);
                      }
                    else
                      {
                        t = c_27;
                        t = k_51;
                      }
                  }
              }
            else
              {
                t = x_26;
                t = e_51;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = k_51;
                  }
                else
                  {
                    t = k_51;
                  }
              }
          }
        }
      else
        {
          t = e_51;
          if(match_cons(t, sym_Scopes_0))
            {
              t = k_51;
            }
          else
            {
              t = k_51;
            }
        }
    }
  else
    {
      t = k_51;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
  t = map_1_0(r_4, t);
  b_51 = t;
  t = term_h_23;
  d_51 = t;
  t = SSL_table_destroy(d_51);
  t = term_h_23;
  c_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_23, b_51);
  t = c_9(c_51, b_51, t);
  t = b_51;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,d_53 = NULL;
  d_53 = t;
  {
    ATerm f_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm j_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_27);
        t = d_53;
      }
    else
      {
        t = f_27;
        {
          ATerm t_27 = t;
          int u_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm b_28 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(u_27);
              t = d_53;
            }
          else
            {
              t = t_27;
              {
                ATerm g_28 = t;
                int i_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm l_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(i_28);
                    t = d_53;
                  }
                else
                  {
                    t = g_28;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm m_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = d_53;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    a_53 = t;
    t = d_53;
    t = SRTS_one(mark_buv_0_0, t);
    b_53 = t;
    t = a_53;
    t = isect_MarkVar_0_0(t);
    t = b_53;
  }
  return(t);
}
ATerm c_9 (ATerm o_28, ATerm n_28, ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm f_53 = NULL,g_53 = NULL;
    if(match_cons(t, sym__2))
      {
        f_53 = ATgetArgument(t, 0);
        g_53 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(o_28, f_53, g_53);
    t = (ATerm) ATmakeAppl(sym__3, o_28, f_53, g_53);
    return(t);
  }
  t = n_28;
  t = map_1_0(s_4, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm h_53 = NULL;
  ATerm t_4 (ATerm t)
  {
    ATerm i_53 = NULL,j_53 = NULL;
    i_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_53), i_53);
    t = g_10(not_null(h_53), i_53, t);
    j_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_53, j_53);
    return(t);
  }
  if(((h_53 != NULL) && (h_53 != t)))
    _fail(t);
  else
    h_53 = t;
  t = SSL_table_keys(h_53);
  t = map_1_0(t_4, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_h_23;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm f_58, ATerm t)
{
  ATerm y_53 = NULL,b_54 = NULL,c_54 = NULL;
  t = save_MarkVar_0_0(t);
  {
    ATerm u_4 (ATerm t)
    {
      ATerm n_55 (ATerm d_54, ATerm t)
      {
        ATerm k_54 = NULL,o_54 = NULL,q_54 = NULL,t_54 = NULL;
        t = d_54;
        if(match_cons(t, sym__2))
          {
            ATerm p_28 = ATgetArgument(t, 0);
            k_54 = p_28;
            if(match_cons(p_28, sym_Var_1))
              {
                o_54 = ATgetArgument(p_28, 0);
              }
            else
              _fail(t);
            {
              ATerm q_28 = ATgetArgument(t, 1);
              if(((ATgetType(q_28) == AT_LIST) && !(ATisEmpty(q_28))))
                {
                  ATerm w_28 = ATgetFirst((ATermList) q_28);
                  if(match_cons(w_28, sym_Defined_2))
                    {
                      q_54 = ATgetArgument(w_28, 0);
                      {
                        ATerm z_28 = ATgetArgument(w_28, 1);
                        if((ATgetSymbol((ATermAppl) z_28) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t_54 = (ATerm) ATgetNext((ATermList) q_28);
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
            if((o_54 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(v_4, t);
          t = (ATerm) ATmakeAppl(sym__2, k_54, (ATerm) ATinsert(CheckATermList(t_54), (ATerm) ATmakeAppl(sym_Defined_2, q_54, term_v_26)));
        }
        return(t);
      }
      ATerm z_54 = NULL,h_55 = NULL;
      h_55 = t;
      {
        ATerm a_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                z_54 = ATgetArgument(t, 0);
                {
                  ATerm k_29 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_29);
            t = z_54;
            if(match_cons(t, sym_Scopes_0))
              {
                t = h_55;
              }
            else
              {
                ATerm m_29 = t;
                int n_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = n_55(h_55, t);
                    ;
                    LocalPopChoice(n_29);
                  }
                else
                  {
                    t = m_29;
                    t = h_55;
                  }
              }
          }
        else
          {
            t = a_29;
            {
              ATerm p_29 = t;
              int q_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_55(h_55, t);
                  ;
                  LocalPopChoice(q_29);
                }
              else
                {
                  t = p_29;
                  t = h_55;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(u_4, t);
    y_53 = t;
    t = term_h_23;
    c_54 = t;
    t = SSL_table_destroy(c_54);
    t = term_h_23;
    b_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_23, y_53);
    t = c_9(b_54, y_53, t);
    t = y_53;
  }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm x_56 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_56);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm y_29 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_30);
    }
  else
    {
      t = y_29;
      {
        ATerm z_56 = NULL,a_57 = NULL,e_57 = NULL,f_57 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_56 = ATgetArgument(t, 0);
            t = z_56;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                z_56 = ATgetArgument(t, 0);
                a_57 = ATgetArgument(t, 1);
                e_57 = ATgetArgument(t, 2);
                f_57 = ATgetArgument(t, 3);
                t = e_57;
                t = map_1_0(c_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    z_56 = ATgetArgument(t, 0);
                    a_57 = ATgetArgument(t, 1);
                    e_57 = ATgetArgument(t, 2);
                    f_57 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = e_57;
                t = map_1_0(d_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm b_58 = NULL;
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_58 = ATgetArgument(t, 0);
          {
            ATerm p_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_30);
      t = b_58;
    }
  else
    {
      t = c_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_58;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm a_59 = NULL;
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_59 = ATgetArgument(t, 0);
          {
            ATerm t_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_30);
      t = a_59;
    }
  else
    {
      t = q_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_59;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm t_55 = NULL,a_56 = NULL,b_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,k_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,w_56 = NULL,p_7 = NULL,o_7 = NULL;
  w_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_56 = ATgetArgument(t, 0);
      s_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_56);
  q_56 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, r_56, s_56);
  o_7 = t;
  t = SSLsetAnnotations(o_7, q_56);
  t_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_56 = ATgetArgument(t, 0);
      {
        ATerm f_31 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_56;
  t = free_vars_3_0(w_4, x_4, tboundin_3_0, t);
  t_55 = t;
  t = undefine_unbound_MarkVar_0_1(t_55, t);
  a_56 = t;
  t = t_56;
  if(match_cons(t, sym_Let_2))
    {
      f_56 = ATgetArgument(t, 0);
      g_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_56);
  e_56 = t;
  t = f_56;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL;
      h_61 = t;
      t = term_h_23;
      j_61 = t;
      t = SSL_table_destroy(j_61);
      t = term_h_23;
      i_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_h_23, a_56);
      t = c_9(i_61, a_56, t);
      t = h_61;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(e_5, t);
    h_56 = t;
    t = term_h_23;
    p_56 = t;
    t = SSL_table_destroy(p_56);
    t = term_h_23;
    k_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_23, a_56);
    t = c_9(k_56, a_56, t);
    t = g_56;
    t = mark_buv_0_0(t);
    i_56 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, h_56, i_56);
    p_7 = t;
    t = SSLsetAnnotations(p_7, e_56);
  }
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm g_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_61 = NULL,s_61 = NULL,t_61 = NULL,u_7 = NULL;
      t_61 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_61);
      l_61 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_61);
      u_7 = t;
      t = SSLsetAnnotations(u_7, l_61);
      LocalPopChoice(j_31);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = g_31;
      {
        ATerm n_31 = t;
        int o_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_61 = NULL,v_61 = NULL,z_61 = NULL,a_62 = NULL,w_7 = NULL;
            a_62 = t;
            if(match_cons(t, sym_App_2))
              {
                v_61 = ATgetArgument(t, 0);
                z_61 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_62);
            u_61 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, v_61, z_61);
            w_7 = t;
            t = SSLsetAnnotations(w_7, u_61);
            LocalPopChoice(o_31);
            {
              ATerm c_62 = NULL,e_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,x_7 = NULL;
              m_62 = t;
              if(match_cons(t, sym_App_2))
                {
                  e_62 = ATgetArgument(t, 0);
                  j_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_62);
              c_62 = t;
              t = e_62;
              t = mark_buv_0_0(t);
              k_62 = t;
              t = j_62;
              t = mark_build_vars_0_0(t);
              l_62 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, k_62, l_62);
              x_7 = t;
              t = SSLsetAnnotations(x_7, c_62);
            }
          }
        else
          {
            t = n_31;
            {
              ATerm t_31 = t;
              int y_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL,y_7 = NULL;
                  q_62 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      p_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_62);
                  o_62 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, p_62);
                  y_7 = t;
                  t = SSLsetAnnotations(y_7, o_62);
                  LocalPopChoice(y_31);
                  {
                    ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,z_7 = NULL;
                    u_62 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        s_62 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(u_62);
                    r_62 = t;
                    t = s_62;
                    t = mark_buv_0_0(t);
                    t_62 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, t_62);
                    z_7 = t;
                    t = SSLsetAnnotations(z_7, r_62);
                  }
                }
              else
                {
                  t = t_31;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm d_9 (ATerm y_27, ATerm z_27, ATerm a_28, ATerm t)
{
  ATerm v_62 = NULL,y_62 = NULL,z_62 = NULL;
  y_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_27, z_27);
  t = g_10(y_27, z_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_31 = ATgetFirst((ATermList) t);
      v_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_62), a_28);
  z_62 = t;
  t = SSL_table_put(y_27, z_27, z_62);
  t = y_62;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL,e_63 = NULL;
  a_63 = t;
  t = term_h_23;
  b_63 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_63);
  c_63 = t;
  t = term_b_32;
  e_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_23, (ATerm)ATmakeAppl(sym_Var_1, a_63), term_b_32);
  t = d_9(b_63, c_63, e_63, t);
  t = a_63;
  return(t);
}
ATerm g_9 (ATerm w_27, ATerm x_27, ATerm t)
{
  ATerm f_63 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_27, x_27);
  t = g_10(w_27, x_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_63 = ATgetFirst((ATermList) t);
      {
        ATerm e_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_63;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL;
  c_65 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,h_28 = NULL;
        t = term_h_23;
        h_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_23, c_65);
        t = g_9(h_28, c_65, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm o_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_32) != ATmakeSymbol("k_1", 0, ATtrue)))
              _fail(t);
            n_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, d_65);
        o_27 = t;
        t = (ATerm) ATinsert(ATempty, n_27);
        p_27 = t;
        t = SSLsetAnnotations(o_27, p_27);
        ;
        LocalPopChoice(n_32);
      }
    else
      {
        t = g_32;
        {
          ATerm t_32 = t;
          int u_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_28 = NULL,u_28 = NULL,v_28 = NULL,j_29 = NULL;
              t = term_h_23;
              j_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_h_23, c_65);
              t = g_9(j_29, c_65, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm d_33 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_33) != ATmakeSymbol("i_1", 0, ATtrue)))
                    _fail(t);
                  s_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, d_65);
              u_28 = t;
              t = (ATerm) ATinsert(ATempty, s_28);
              v_28 = t;
              t = SSLsetAnnotations(u_28, v_28);
              ;
              LocalPopChoice(u_32);
            }
          else
            {
              t = t_32;
              {
                ATerm r_29 = NULL,u_29 = NULL,x_29 = NULL,e_30 = NULL;
                t = term_h_23;
                e_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_h_23, c_65);
                t = g_9(e_30, c_65, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm e_33 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) e_33) != ATmakeSymbol("g_1", 0, ATtrue)))
                      _fail(t);
                    r_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, d_65);
                u_29 = t;
                t = (ATerm) ATinsert(ATempty, r_29);
                x_29 = t;
                t = SSLsetAnnotations(u_29, x_29);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm m_65 = NULL,q_65 = NULL,x_65 = NULL,b_66 = NULL,j_8 = NULL;
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      ;
      LocalPopChoice(g_33);
    }
  else
    {
      t = f_33;
    }
  b_66 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_66);
  m_65 = t;
  t = q_65;
  t = DeclareBound_0_0(t);
  x_65 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_65);
  j_8 = t;
  t = SSLsetAnnotations(j_8, m_65);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL,o_8 = NULL;
      i_66 = t;
      if(match_cons(t, sym_Var_1))
        {
          h_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_66);
      g_66 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, h_66);
      o_8 = t;
      t = SSLsetAnnotations(o_8, g_66);
      LocalPopChoice(i_33);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = h_33;
      {
        ATerm j_33 = t;
        int k_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL,r_66 = NULL,k_10 = NULL;
            r_66 = t;
            if(match_cons(t, sym_App_2))
              {
                m_66 = ATgetArgument(t, 0);
                n_66 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_66);
            l_66 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, m_66, n_66);
            k_10 = t;
            t = SSLsetAnnotations(k_10, l_66);
            LocalPopChoice(k_33);
            {
              ATerm v_66 = NULL,w_66 = NULL,a_67 = NULL,b_67 = NULL,d_67 = NULL,k_67 = NULL,t_10 = NULL;
              k_67 = t;
              if(match_cons(t, sym_App_2))
                {
                  w_66 = ATgetArgument(t, 0);
                  a_67 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_67);
              v_66 = t;
              t = w_66;
              t = mark_buv_0_0(t);
              b_67 = t;
              t = a_67;
              t = mark_build_vars_0_0(t);
              d_67 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, b_67, d_67);
              t_10 = t;
              t = SSLsetAnnotations(t_10, v_66);
            }
          }
        else
          {
            t = j_33;
            {
              ATerm l_33 = t;
              int m_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL,a_11 = NULL;
                  n_67 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      m_67 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_67);
                  l_67 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, m_67);
                  a_11 = t;
                  t = SSLsetAnnotations(a_11, l_67);
                  LocalPopChoice(m_33);
                  {
                    ATerm q_67 = NULL,s_67 = NULL,x_67 = NULL,y_67 = NULL,c_11 = NULL;
                    y_67 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        s_67 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(y_67);
                    q_67 = t;
                    t = s_67;
                    t = mark_buv_0_0(t);
                    x_67 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, x_67);
                    c_11 = t;
                    t = SSLsetAnnotations(c_11, q_67);
                  }
                }
              else
                {
                  t = l_33;
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
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_69 = NULL,a_70 = NULL;
      p_69 = t;
      if(match_cons(t, sym_Match_1))
        {
          a_70 = ATgetArgument(t, 0);
          {
            ATerm s_30 = NULL,u_30 = NULL,n_11 = NULL;
            t = SSLgetAnnotations(p_69);
            s_30 = t;
            t = a_70;
            t = mark_match_vars_0_0(t);
            u_30 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, u_30);
            n_11 = t;
            t = SSLsetAnnotations(n_11, s_30);
          }
        }
      else
        {
          ATerm s_31 = NULL,w_31 = NULL,t_11 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              a_70 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_69);
          s_31 = t;
          t = a_70;
          t = mark_build_vars_0_0(t);
          w_31 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, w_31);
          t_11 = t;
          t = SSLsetAnnotations(t_11, s_31);
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
            t = mark_scope_0_0(t);
            ;
            LocalPopChoice(q_33);
          }
        else
          {
            t = p_33;
            {
              ATerm r_33 = t;
              int s_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  ;
                  LocalPopChoice(s_33);
                }
              else
                {
                  t = r_33;
                  {
                    ATerm t_33 = t;
                    int u_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        ;
                        LocalPopChoice(u_33);
                      }
                    else
                      {
                        t = t_33;
                        {
                          ATerm v_33 = t;
                          int w_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL;
                              l_70 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  q_70 = ATgetArgument(t, 0);
                                  r_70 = ATgetArgument(t, 1);
                                  s_70 = ATgetArgument(t, 2);
                                  t_70 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = l_70;
                              t = a_9(q_70, r_70, s_70, t_70, t);
                              ;
                              LocalPopChoice(w_33);
                            }
                          else
                            {
                              t = v_33;
                              {
                                ATerm x_33 = t;
                                int y_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    ;
                                    LocalPopChoice(y_33);
                                  }
                                else
                                  {
                                    t = x_33;
                                    {
                                      ATerm z_33 = t;
                                      int a_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm y_70 = NULL,c_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,l_71 = NULL,o_71 = NULL;
                                          g_71 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              h_71 = ATgetArgument(t, 0);
                                              t = h_71;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  y_70 = ATgetArgument(t, 0);
                                                  c_71 = ATgetArgument(t, 1);
                                                  f_71 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = g_71;
                                              t = z_8(y_70, c_71, f_71, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  h_71 = ATgetArgument(t, 0);
                                                  t = h_71;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      y_70 = ATgetArgument(t, 0);
                                                      c_71 = ATgetArgument(t, 1);
                                                      f_71 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = g_71;
                                                  t = y_8(y_70, c_71, f_71, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      h_71 = ATgetArgument(t, 0);
                                                      l_71 = ATgetArgument(t, 1);
                                                      o_71 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = g_71;
                                                  t = x_8(h_71, l_71, o_71, t);
                                                }
                                            }
                                          ;
                                          LocalPopChoice(a_34);
                                        }
                                      else
                                        {
                                          t = z_33;
                                          {
                                            ATerm b_34 = t;
                                            int c_34 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                ;
                                                LocalPopChoice(c_34);
                                              }
                                            else
                                              {
                                                t = b_34;
                                                {
                                                  ATerm d_34 = t;
                                                  int e_34 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      ;
                                                      LocalPopChoice(e_34);
                                                    }
                                                  else
                                                    {
                                                      t = d_34;
                                                      {
                                                        ATerm f_34 = t;
                                                        int g_34 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm h_72 = NULL;
                                                            h_72 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm h_34 = ATgetArgument(t, 0);
                                                                ATerm i_34 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = h_72;
                                                            t = w_8(t);
                                                            ;
                                                            LocalPopChoice(g_34);
                                                          }
                                                        else
                                                          {
                                                            t = f_34;
                                                            {
                                                              ATerm j_34 = t;
                                                              int l_34 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(l_34);
                                                                }
                                                              else
                                                                {
                                                                  t = j_34;
                                                                  {
                                                                    ATerm m_34 = t;
                                                                    int n_34 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(n_34);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_34;
                                                                        {
                                                                          ATerm o_34 = t;
                                                                          int t_34 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(t_34);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = o_34;
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
ATerm h_9 (ATerm z_82 (ATerm), ATerm d_27, ATerm b_27, ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,x_72 = NULL,z_72 = NULL,a_73 = NULL;
  x_72 = t;
  t = z_82(t);
  s_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_72, d_27, b_27);
  t = h_10(s_72, d_27, b_27, t);
  {
    ATerm u_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_73 = NULL;
        t = term_w_34;
        b_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_72, term_w_34);
        t = g_10(s_72, b_73, t);
        ;
        LocalPopChoice(v_34);
      }
    else
      {
        t = u_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_72 = ATgetFirst((ATermList) t);
        u_72 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_w_34;
    z_72 = t;
    t = (ATerm) ATinsert(CheckATermList(u_72), (ATerm) ATinsert(CheckATermList(t_72), d_27));
    a_73 = t;
    t = SSL_table_put(s_72, z_72, a_73);
    t = x_72;
  }
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL;
  i_73 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_73);
  j_73 = t;
  t = term_z_34;
  k_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, i_73), term_z_34);
  t = h_9(f_5, j_73, k_73, t);
  t = i_73;
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL,q_73 = NULL,r_73 = NULL,w_11 = NULL;
  r_73 = t;
  if(match_cons(t, sym_Scope_2))
    {
      m_73 = ATgetArgument(t, 0);
      n_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_73);
  l_73 = t;
  t = n_73;
  {
    ATerm i_5 (ATerm t)
    {
      ATerm v_73 = NULL;
      v_73 = t;
      t = m_73;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = v_73;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(g_5, i_5, t);
    q_73 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, m_73, q_73);
    w_11 = t;
    t = SSLsetAnnotations(w_11, l_73);
  }
  return(t);
}
ATerm tboundin_3_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL;
  t_77 = t;
  if(match_cons(t, sym_Scope_2))
    {
      u_77 = ATgetArgument(t, 0);
      k_77 = ATgetArgument(t, 1);
      {
        ATerm l_32 = NULL,p_32 = NULL,q_32 = NULL,y_11 = NULL;
        t = SSLgetAnnotations(t_77);
        l_32 = t;
        t = u_77;
        t = u_92(t);
        p_32 = t;
        t = k_77;
        t = s_92(t);
        q_32 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_32, q_32);
        y_11 = t;
        t = SSLsetAnnotations(y_11, l_32);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          u_77 = ATgetArgument(t, 0);
          k_77 = ATgetArgument(t, 1);
          l_77 = ATgetArgument(t, 2);
          s_77 = ATgetArgument(t, 3);
          {
            ATerm k_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,z_11 = NULL;
            t = SSLgetAnnotations(t_77);
            k_34 = t;
            t = u_77;
            t = u_92(t);
            p_34 = t;
            t = k_77;
            t = u_92(t);
            q_34 = t;
            t = l_77;
            t = u_92(t);
            r_34 = t;
            t = s_77;
            t = s_92(t);
            s_34 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, p_34, q_34, r_34, s_34);
            z_11 = t;
            t = SSLsetAnnotations(z_11, k_34);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              u_77 = ATgetArgument(t, 0);
              k_77 = ATgetArgument(t, 1);
              l_77 = ATgetArgument(t, 2);
              s_77 = ATgetArgument(t, 3);
              {
                ATerm o_35 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,e_12 = NULL;
                t = SSLgetAnnotations(t_77);
                o_35 = t;
                t = u_77;
                t = u_92(t);
                b_36 = t;
                t = k_77;
                t = u_92(t);
                c_36 = t;
                t = l_77;
                t = u_92(t);
                d_36 = t;
                t = s_77;
                t = s_92(t);
                e_36 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, b_36, c_36, d_36, e_36);
                e_12 = t;
                t = SSLsetAnnotations(e_12, o_35);
              }
            }
          else
            {
              ATerm q_36 = NULL,s_36 = NULL,n_12 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  u_77 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_77);
              q_36 = t;
              t = u_77;
              t = s_92(t);
              s_36 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, s_36);
              n_12 = t;
              t = SSLsetAnnotations(n_12, q_36);
            }
        }
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm n_78 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_78);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_35);
    }
  else
    {
      t = a_35;
      {
        ATerm p_78 = NULL,s_78 = NULL,u_78 = NULL,v_78 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            p_78 = ATgetArgument(t, 0);
            t = p_78;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                p_78 = ATgetArgument(t, 0);
                s_78 = ATgetArgument(t, 1);
                u_78 = ATgetArgument(t, 2);
                v_78 = ATgetArgument(t, 3);
                t = u_78;
                t = map_1_0(o_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    p_78 = ATgetArgument(t, 0);
                    s_78 = ATgetArgument(t, 1);
                    u_78 = ATgetArgument(t, 2);
                    v_78 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = u_78;
                t = map_1_0(q_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm j_79 = NULL;
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_79 = ATgetArgument(t, 0);
          {
            ATerm e_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_35);
      t = j_79;
    }
  else
    {
      t = c_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_79;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm v_79 = NULL;
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_79 = ATgetArgument(t, 0);
          {
            ATerm h_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_35);
      t = v_79;
    }
  else
    {
      t = f_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_79;
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
  ATerm o_80 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_80);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm i_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(j_35);
    }
  else
    {
      t = i_35;
      {
        ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            q_80 = ATgetArgument(t, 0);
            t = q_80;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                q_80 = ATgetArgument(t, 0);
                r_80 = ATgetArgument(t, 1);
                s_80 = ATgetArgument(t, 2);
                t_80 = ATgetArgument(t, 3);
                t = s_80;
                t = map_1_0(w_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    q_80 = ATgetArgument(t, 0);
                    r_80 = ATgetArgument(t, 1);
                    s_80 = ATgetArgument(t, 2);
                    t_80 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = s_80;
                t = map_1_0(x_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm b_81 = NULL;
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_81 = ATgetArgument(t, 0);
          {
            ATerm m_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_35);
      t = b_81;
    }
  else
    {
      t = k_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_81;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm k_81 = NULL;
  ATerm n_35 = t;
  int p_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_81 = ATgetArgument(t, 0);
          {
            ATerm u_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_35);
      t = k_81;
    }
  else
    {
      t = n_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_81;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm h_80 = NULL,l_80 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      l_80 = ATgetArgument(t, 0);
      t = l_80;
      if(match_cons(t, sym_Rule_3))
        {
          h_80 = ATgetArgument(t, 0);
          {
            ATerm v_35 = ATgetArgument(t, 1);
          }
          {
            ATerm w_35 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = h_80;
      t = free_vars_3_0(r_5, s_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          l_80 = ATgetArgument(t, 0);
          {
            ATerm x_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_80;
    }
  return(t);
}
ATerm m_9 (ATerm c_79 (ATerm), ATerm v_21, ATerm u_21, ATerm t)
{
  ATerm i_82 (ATerm t)
  {
    ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL;
    d_82 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_82 = ATgetFirst((ATermList) t);
            f_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_35 = t;
          int z_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_82;
              {
                ATerm y_5 (ATerm t)
                {
                  t = u_21;
                  return(t);
                }
                t = n_9(c_79, y_5, e_82, f_82, t);
                t = i_82(t);
              }
              ;
              LocalPopChoice(z_35);
            }
          else
            {
              t = y_35;
              {
                ATerm d_37 = NULL,u_37 = NULL,u_13 = NULL;
                t = SSLgetAnnotations(d_82);
                d_37 = t;
                t = f_82;
                t = i_82(t);
                u_37 = t;
                t = (ATerm) ATinsert(CheckATermList(u_37), e_82);
                u_13 = t;
                t = SSLsetAnnotations(u_13, d_37);
              }
            }
        }
      }
    return(t);
  }
  t = v_21;
  t = i_82(t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm t)
{
  ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL;
  l_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_82;
      t = p_81(t);
    }
  else
    {
      ATerm q_82 = NULL,r_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_82 = ATgetFirst((ATermList) t);
          n_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_82;
      t = r_81(t);
      q_82 = t;
      t = n_82;
      t = foldr_3_0(p_81, q_81, r_81, t);
      r_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_82, r_82);
      t = q_81(t);
    }
  return(t);
}
ATerm n_9 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm z_21, ATerm y_21, ATerm t)
{
  t = g_79(t);
  {
    ATerm c_6 (ATerm t)
    {
      ATerm u_82 = NULL;
      u_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_21, u_82);
      t = f_79(t);
      return(t);
    }
    t = fetch_1_0(c_6, t);
    t = y_21;
  }
  return(t);
}
ATerm o_9 (ATerm x_78 (ATerm), ATerm t_21, ATerm s_21, ATerm t)
{
  ATerm r_83 (ATerm t)
  {
    ATerm m_83 = NULL,n_83 = NULL,o_83 = NULL;
    m_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_83;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_83 = ATgetFirst((ATermList) t);
            o_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_36 = t;
          int g_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_83;
              {
                ATerm d_6 (ATerm t)
                {
                  t = s_21;
                  return(t);
                }
                t = n_9(x_78, d_6, n_83, o_83, t);
                t = r_83(t);
              }
              ;
              LocalPopChoice(g_36);
            }
          else
            {
              t = f_36;
              {
                ATerm g_38 = NULL,k_38 = NULL,n_14 = NULL;
                t = SSLgetAnnotations(m_83);
                g_38 = t;
                t = o_83;
                t = r_83(t);
                k_38 = t;
                t = (ATerm) ATinsert(CheckATermList(k_38), n_83);
                n_14 = t;
                t = SSLsetAnnotations(n_14, g_38);
              }
            }
        }
      }
    return(t);
  }
  t = t_21;
  t = r_83(t);
  return(t);
}
ATerm genzip_4_0 (ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm t)
{
  ATerm z_83 (ATerm t)
  {
    ATerm h_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_86(t);
        ;
        LocalPopChoice(i_36);
      }
    else
      {
        t = h_36;
        {
          ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL,u_15 = NULL;
          t = w_86(t);
          y_83 = t;
          if(match_cons(t, sym__2))
            {
              u_83 = ATgetArgument(t, 0);
              v_83 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_83);
          t_83 = t;
          t = u_83;
          t = y_86(t);
          w_83 = t;
          t = v_83;
          t = z_83(t);
          x_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_83, x_83);
          u_15 = t;
          t = SSLsetAnnotations(u_15, t_83);
          t = x_86(t);
        }
      }
    return(t);
  }
  t = z_83(t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_36 = ATgetArgument(t, 0);
      if(((ATgetType(j_36) != AT_LIST) || !(ATisEmpty(j_36))))
        _fail(t);
      {
        ATerm k_36 = ATgetArgument(t, 1);
        if(((ATgetType(k_36) != AT_LIST) || !(ATisEmpty(k_36))))
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
  ATerm g_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_36 = ATgetArgument(t, 0);
      if(((ATgetType(m_36) == AT_LIST) && !(ATisEmpty(m_36))))
        {
          g_84 = ATgetFirst((ATermList) m_36);
          h_84 = (ATerm) ATgetNext((ATermList) m_36);
        }
      else
        _fail(t);
      {
        ATerm p_36 = ATgetArgument(t, 1);
        if(((ATgetType(p_36) == AT_LIST) && !(ATisEmpty(p_36))))
          {
            i_84 = ATgetFirst((ATermList) p_36);
            j_84 = (ATerm) ATgetNext((ATermList) p_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_84, i_84), (ATerm) ATmakeAppl(sym__2, h_84, j_84));
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm k_84 = NULL,l_84 = NULL;
  if(match_cons(t, sym__2))
    {
      k_84 = ATgetArgument(t, 0);
      l_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_84), k_84);
  return(t);
}
ATerm s_9 (ATerm s_601, ATerm x_601, ATerm p_57, ATerm t)
{
  ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL;
  t = SSL_explode_term(x_601);
  if(match_cons(t, sym__2))
    {
      b_84 = ATgetArgument(t, 0);
      d_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_601);
  if(match_cons(t, sym__2))
    {
      if((b_84 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      c_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_84, d_84);
  t = genzip_4_0(e_6, h_6, i_6, _id, t);
  e_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_84, p_57);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm t)
{
  ATerm n_84 (ATerm t)
  {
    ATerm r_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_98(t);
        ;
        LocalPopChoice(t_36);
      }
    else
      {
        t = r_36;
        t = g_98(t);
        t = n_84(t);
      }
    return(t);
  }
  t = n_84(t);
  return(t);
}
ATerm for_3_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t)
{
  t = i_98(t);
  t = while_not_2_0(j_98, k_98, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm u_84 = NULL;
  u_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, u_84);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,c_16 = NULL;
  a_85 = t;
  if(match_cons(t, sym__2))
    {
      y_84 = ATgetArgument(t, 0);
      z_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_85);
  x_84 = t;
  t = z_84;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_84, z_84);
  c_16 = t;
  t = SSLsetAnnotations(c_16, x_84);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL,x_85 = NULL;
  t_85 = t;
  if(match_cons(t, sym__2))
    {
      u_85 = ATgetArgument(t, 0);
      v_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_85 = ATgetFirst((ATermList) t);
      x_85 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_36 = t;
        int w_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_86(u_85, v_85, t_85, t);
            ;
            LocalPopChoice(w_36);
          }
        else
          {
            t = u_36;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_85), w_85), x_85);
          }
      }
    }
  else
    {
      t = h_86(u_85, v_85, t_85, t);
    }
  return(t);
}
ATerm h_86 (ATerm b_85, ATerm c_85, ATerm d_85, ATerm t)
{
  ATerm e_85 = NULL,h_85 = NULL,e_16 = NULL,k_85 = NULL,l_85 = NULL,m_85 = NULL,n_85 = NULL;
  t = SSLgetAnnotations(d_85);
  e_85 = t;
  t = c_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_85 = ATgetFirst((ATermList) t);
      n_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_85;
  if(match_cons(t, sym__2))
    {
      l_85 = ATgetArgument(t, 0);
      m_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_85;
        if((l_85 != t))
          {
            _fail(t);
          }
        t = n_85;
        ;
        LocalPopChoice(a_37);
      }
    else
      {
        t = x_36;
        t = c_85;
        t = s_9(l_85, m_85, n_85, t);
      }
    h_85 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_85, h_85);
    e_16 = t;
    t = SSLsetAnnotations(e_16, e_85);
  }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm g_86 = NULL;
  if(match_cons(t, sym__2))
    {
      g_86 = ATgetArgument(t, 0);
      if((g_86 != ATgetArgument(t, 1)))
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
  ATerm b_37 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(m_6, q_6, u_6, t);
      ;
      LocalPopChoice(c_37);
    }
  else
    {
      t = b_37;
      {
        ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL;
        b_86 = t;
        if(match_cons(t, sym__2))
          {
            c_86 = ATgetArgument(t, 0);
            d_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_86;
        t = o_9(v_6, c_86, d_86, t);
      }
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL;
  if(match_cons(t, sym__2))
    {
      f_39 = ATgetArgument(t, 0);
      g_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(i_7, f_39, g_39, t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm h_39 = NULL;
  if(match_cons(t, sym__2))
    {
      h_39 = ATgetArgument(t, 0);
      if((h_39 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm r_39 = NULL,w_39 = NULL;
  if(match_cons(t, sym__2))
    {
      r_39 = ATgetArgument(t, 0);
      w_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9(m_7, r_39, w_39, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm a_40 = NULL;
  if(match_cons(t, sym__2))
    {
      a_40 = ATgetArgument(t, 0);
      if((a_40 != ATgetArgument(t, 1)))
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
  ATerm a_87 (ATerm t)
  {
    ATerm g_37 = t;
    int h_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_95(t);
        ;
        LocalPopChoice(h_37);
      }
    else
      {
        t = g_37;
        {
          ATerm i_37 = t;
          int j_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_86 = NULL,k_86 = NULL,r_38 = NULL,y_38 = NULL;
              j_86 = t;
              t = v_95(t);
              k_86 = t;
              t = j_86;
              {
                ATerm w_6 (ATerm t)
                {
                  ATerm m_86 = NULL;
                  t = a_87(t);
                  m_86 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_86, k_86);
                  t = diff_0_0(t);
                  return(t);
                }
                t = w_95(w_6, a_87, y_6, t);
                y_38 = t;
                t = SSL_explode_term(y_38);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_37 = ATgetArgument(t, 0);
                    r_38 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_38;
                t = foldr_3_0(g_7, h_7, _id, t);
              }
              ;
              LocalPopChoice(j_37);
            }
          else
            {
              t = i_37;
              {
                ATerm k_39 = NULL,m_39 = NULL;
                m_39 = t;
                t = SSL_explode_term(m_39);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_37 = ATgetArgument(t, 0);
                    k_39 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_39;
                t = foldr_3_0(j_7, l_7, a_87, t);
              }
            }
        }
      }
    return(t);
  }
  t = a_87(t);
  return(t);
}
ATerm topdown_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm n_7 (ATerm t)
  {
    t = topdown_1_0(d_83, t);
    return(t);
  }
  t = d_83(t);
  t = SRTS_all(n_7, t);
  return(t);
}
ATerm u_9 (ATerm q_27, ATerm r_27, ATerm t)
{
  ATerm b_87 = NULL,c_87 = NULL;
  c_87 = t;
  {
    ATerm m_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
        t = g_10(q_27, r_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_37 = ATgetFirst((ATermList) t);
            b_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_37);
        t = SSL_table_put(q_27, r_27, b_87);
        t = (ATerm) ATmakeAppl(sym__3, q_27, r_27, b_87);
      }
    else
      {
        t = m_37;
        t = SSL_table_remove(q_27, r_27);
        t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
      }
    t = c_87;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL;
  g_87 = t;
  t = w_82(t);
  f_87 = t;
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_87 = NULL;
        t = term_w_34;
        i_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_87, term_w_34);
        t = g_10(f_87, i_87, t);
        ;
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_87 = ATgetFirst((ATermList) t);
        d_87 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_w_34;
    h_87 = t;
    t = SSL_table_put(f_87, h_87, d_87);
    t = e_87;
    {
      ATerm q_7 (ATerm t)
      {
        ATerm j_87 = NULL;
        j_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_87, j_87);
        t = u_9(f_87, j_87, t);
        return(t);
      }
      t = map_1_0(q_7, t);
      t = g_87;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm t)
{
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_89(t);
      t = x_89(t);
      ;
      LocalPopChoice(t_37);
    }
  else
    {
      t = s_37;
      t = x_89(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm l_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL;
  m_87 = t;
  t = v_82(t);
  l_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_87, term_w_34);
  {
    ATerm v_37 = t;
    int w_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_87 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_37 = ATgetArgument(t, 0);
            ATerm y_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_w_34;
        t_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_87, term_w_34);
        t = g_10(l_87, t_87, t);
        ;
        LocalPopChoice(w_37);
      }
    else
      {
        t = v_37;
        t = (ATerm) ATempty;
      }
    n_87 = t;
    t = term_w_34;
    o_87 = t;
    t = (ATerm) ATinsert(CheckATermList(n_87), (ATerm) ATempty);
    p_87 = t;
    t = SSL_table_put(l_87, o_87, p_87);
    t = m_87;
  }
  return(t);
}
ATerm scope_2_0 (ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm t)
{
  ATerm r_7 (ATerm t)
  {
    t = end_scope_1_0(x_82, t);
    return(t);
  }
  t = begin_scope_1_0(x_82, t);
  t = restore_always_2_0(y_82, r_7, t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = scope_2_0(c_8, d_8, t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL;
  t = topdown_1_0(e_8, t);
  e_88 = t;
  t = free_vars_3_0(f_8, g_8, tboundin_3_0, t);
  d_88 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, d_88, e_88);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm z_37 = ATgetArgument(t, 0);
      c_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_88;
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        ;
        LocalPopChoice(b_38);
      }
    else
      {
        t = a_38;
        {
          ATerm c_38 = t;
          int d_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              ;
              LocalPopChoice(d_38);
            }
          else
            {
              t = c_38;
              {
                ATerm q_89 = NULL,r_89 = NULL,s_89 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    q_89 = ATgetArgument(t, 0);
                    r_89 = ATgetArgument(t, 1);
                    s_89 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = c_88;
                t = v_8(q_89, r_89, s_89, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm l_88 = NULL,m_88 = NULL;
  m_88 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_88 = ATgetArgument(t, 0);
      {
        ATerm e_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_40 = NULL,i_40 = NULL,i_16 = NULL;
            t = SSLgetAnnotations(m_88);
            e_40 = t;
            t = l_88;
            if(match_cons(t, sym_ListVar_1))
              {
                i_40 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, i_40);
            i_16 = t;
            t = SSLsetAnnotations(i_16, e_40);
            ;
            LocalPopChoice(f_38);
          }
        else
          {
            t = e_38;
            t = m_88;
          }
      }
    }
  else
    {
      t = m_88;
    }
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm p_88 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_88);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm i_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(j_38);
    }
  else
    {
      t = i_38;
      {
        ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            r_88 = ATgetArgument(t, 0);
            t = r_88;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                r_88 = ATgetArgument(t, 0);
                s_88 = ATgetArgument(t, 1);
                t_88 = ATgetArgument(t, 2);
                u_88 = ATgetArgument(t, 3);
                t = t_88;
                t = map_1_0(h_8, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    r_88 = ATgetArgument(t, 0);
                    s_88 = ATgetArgument(t, 1);
                    t_88 = ATgetArgument(t, 2);
                    u_88 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = t_88;
                t = map_1_0(k_8, t);
              }
          }
      }
    }
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm d_89 = NULL;
  ATerm l_38 = t;
  int m_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_89 = ATgetArgument(t, 0);
          {
            ATerm n_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_38);
      t = d_89;
    }
  else
    {
      t = l_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_89;
    }
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm m_89 = NULL;
  ATerm o_38 = t;
  int p_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_89 = ATgetArgument(t, 0);
          {
            ATerm q_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_38);
      t = m_89;
    }
  else
    {
      t = o_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_89;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm b_88 = NULL;
  b_88 = t;
  t = scope_2_0(t_7, a_8, t);
  t = b_88;
  return(t);
}
ATerm filter_1_0 (ATerm v_88 (ATerm), ATerm t)
{
  ATerm p_90 = NULL,q_90 = NULL,r_90 = NULL;
  p_90 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_90;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_90 = ATgetFirst((ATermList) t);
          r_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm w_38 = t;
        int z_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_40 = NULL,y_40 = NULL,z_40 = NULL,o_16 = NULL;
            t = SSLgetAnnotations(p_90);
            v_40 = t;
            t = q_90;
            t = v_88(t);
            y_40 = t;
            t = r_90;
            t = filter_1_0(v_88, t);
            z_40 = t;
            t = (ATerm) ATinsert(CheckATermList(z_40), y_40);
            o_16 = t;
            t = SSLsetAnnotations(o_16, v_40);
            ;
            LocalPopChoice(z_38);
          }
        else
          {
            t = w_38;
            t = r_90;
            t = filter_1_0(v_88, t);
          }
      }
    }
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm h_91 = NULL,i_91 = NULL,j_91 = NULL,s_16 = NULL;
  j_91 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      i_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_91);
  h_91 = t;
  t = i_91;
  {
    ATerm a_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_91;
        ;
        LocalPopChoice(d_39);
      }
    else
      {
        t = a_39;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_91;
      }
    t = (ATerm) ATmakeAppl(sym_Overlays_1, i_91);
    s_16 = t;
    t = SSLsetAnnotations(s_16, h_91);
  }
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = Cons_2_0(q_8, q_9, t);
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL,u_16 = NULL;
  n_91 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      m_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_91);
  l_91 = t;
  t = m_91;
  {
    ATerm i_39 = t;
    int j_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_91;
        ;
        LocalPopChoice(j_39);
      }
    else
      {
        t = i_39;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_91;
      }
    t = (ATerm) ATmakeAppl(sym_Strategies_1, m_91);
    u_16 = t;
    t = SSLsetAnnotations(u_16, l_91);
  }
  return(t);
}
ATerm q_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm w_90 = NULL,x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL,g_91 = NULL,x_16 = NULL,v_16 = NULL,q_16 = NULL;
  g_91 = t;
  if(match_cons(t, sym_Specification_1))
    {
      x_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_91);
  w_90 = t;
  t = x_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_90 = ATgetFirst((ATermList) t);
      a_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_90);
  y_90 = t;
  t = z_90;
  if(match_cons(t, sym_Signature_1))
    {
      e_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_90);
  d_91 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, e_91);
  q_16 = t;
  t = SSLsetAnnotations(q_16, d_91);
  f_91 = t;
  t = a_91;
  t = Cons_2_0(l_8, p_8, t);
  b_91 = t;
  t = (ATerm) ATinsert(CheckATermList(b_91), f_91);
  v_16 = t;
  t = SSLsetAnnotations(v_16, y_90);
  c_91 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, c_91);
  x_16 = t;
  t = SSLsetAnnotations(x_16, w_90);
  return(t);
}
ATerm w_9 (ATerm x_46, ATerm y_46, ATerm t)
{
  ATerm p_91 = NULL;
  t = SSL_fputc(x_46, y_46);
  p_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_91);
  return(t);
}
ATerm x_9 (ATerm l_50, ATerm m_50, ATerm t)
{
  ATerm q_91 = NULL;
  t = SSL_write_term_to_stream_text(l_50, m_50);
  q_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_91);
  return(t);
}
ATerm z_9 (ATerm n_102 (ATerm), ATerm u_474, ATerm p_50, ATerm t)
{
  ATerm r_91 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_474, term_l_39);
  t = open_stream_0_0(t);
  r_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_91, p_50);
  t = n_102(t);
  t = fclose_0_0(t);
  t = p_50;
  return(t);
}
ATerm y_9 (ATerm h_50, ATerm i_50, ATerm t)
{
  ATerm s_91 = NULL;
  t = SSL_write_term_to_stream_baf(h_50, i_50);
  s_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_91);
  return(t);
}
ATerm l_10 (ATerm t)
{
  ATerm v_91 = NULL,w_91 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_39 = ATgetArgument(t, 0);
      if(match_cons(n_39, sym_Stream_1))
        {
          v_91 = ATgetArgument(n_39, 0);
        }
      else
        _fail(t);
      w_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(v_91, w_91, t);
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_39 = ATgetArgument(t, 0);
      if(match_cons(o_39, sym_Stream_1))
        {
          a_92 = ATgetArgument(o_39, 0);
        }
      else
        _fail(t);
      b_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_9(a_92, b_92, t);
  x_91 = t;
  t = term_p_39;
  y_91 = t;
  t = x_91;
  if(match_cons(t, sym_Stream_1))
    {
      z_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_39, x_91);
  t = w_9(y_91, z_91, t);
  return(t);
}
ATerm output_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  ATerm t_91 = NULL,u_91 = NULL;
  t = w_106(t);
  u_91 = t;
  {
    ATerm q_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_39;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(s_39);
      }
    else
      {
        t = q_39;
        t = term_u_39;
      }
    t_91 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_91, u_91);
    {
      ATerm v_39 = t;
      int y_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_z_39;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, t_91, u_91);
          LocalPopChoice(y_39);
          if(match_cons(t, sym__2))
            {
              ATerm b_40 = ATgetArgument(t, 0);
              ATerm c_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_9(l_10, t_91, u_91, t);
        }
      else
        {
          t = v_39;
          if(match_cons(t, sym__2))
            {
              ATerm d_40 = ATgetArgument(t, 0);
              ATerm f_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_9(n_10, t_91, u_91, t);
        }
    }
  }
  return(t);
}
ATerm p_92 (ATerm j_92, ATerm t)
{
  t = SSL_fclose(j_92);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL;
  n_92 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_92 = ATgetArgument(t, 0);
      {
        ATerm g_40 = t;
        int h_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_92);
            ;
            LocalPopChoice(h_40);
          }
        else
          {
            t = g_40;
            t = p_92(n_92, t);
          }
      }
    }
  else
    {
      t = p_92(n_92, t);
    }
  return(t);
}
ATerm a_10 (ATerm n_50, ATerm t)
{
  t = SSL_read_term_from_stream(n_50);
  return(t);
}
ATerm b_10 (ATerm z_46, ATerm a_47, ATerm t)
{
  ATerm q_92 = NULL;
  t = SSL_fopen(z_46, a_47);
  q_92 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_92);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_92 = NULL;
  t = SSL_stdin_stream();
  r_92 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_92);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_92 = NULL;
  t = SSL_stdout_stream();
  v_92 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_92);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_92 = NULL;
  t = SSL_stderr_stream();
  w_92 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_92);
  return(t);
}
ATerm d_94 (ATerm c_93, ATerm t)
{
  ATerm d_93 = NULL;
  t = SSL_explode_term(c_93);
  if(match_cons(t, sym__2))
    {
      ATerm j_40 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_40) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_40 = ATgetArgument(t, 1);
        if(((ATgetType(k_40) == AT_LIST) && !(ATisEmpty(k_40))))
          {
            d_93 = ATgetFirst((ATermList) k_40);
            {
              ATerm l_40 = (ATerm) ATgetNext((ATermList) k_40);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_93;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_93;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_93;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_93;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm e_94 (ATerm g_93, ATerm h_93, ATerm i_93, ATerm t)
{
  ATerm j_93 = NULL,k_93 = NULL,l_93 = NULL,o_93 = NULL,h_17 = NULL;
  t = SSLgetAnnotations(i_93);
  l_93 = t;
  t = g_93;
  if(match_cons(t, sym_Path_1))
    {
      o_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_93, h_93);
  h_17 = t;
  t = SSLsetAnnotations(h_17, l_93);
  if(match_cons(t, sym__2))
    {
      j_93 = ATgetArgument(t, 0);
      k_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_10(j_93, k_93, t);
  return(t);
}
ATerm f_94 (ATerm q_93, ATerm r_93, ATerm s_93, ATerm t)
{
  ATerm t_93 = NULL,u_93 = NULL,v_93 = NULL,y_93 = NULL,i_17 = NULL;
  t = SSLgetAnnotations(s_93);
  v_93 = t;
  t = SSL_is_string(q_93);
  y_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_93, r_93);
  i_17 = t;
  t = SSLsetAnnotations(i_17, v_93);
  if(match_cons(t, sym__2))
    {
      t_93 = ATgetArgument(t, 0);
      u_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_10(t_93, u_93, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_40 = ATgetArgument(t, 0);
      ATerm n_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  a_94 = t;
  if(match_cons(t, sym__2))
    {
      b_94 = ATgetArgument(t, 0);
      c_94 = ATgetArgument(t, 1);
      {
        ATerm p_40 = t;
        int q_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_94(a_94, t);
            ;
            LocalPopChoice(q_40);
          }
        else
          {
            t = p_40;
            {
              ATerm r_40 = t;
              int s_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_94(b_94, c_94, a_94, t);
                  ;
                  LocalPopChoice(s_40);
                }
              else
                {
                  t = r_40;
                  t = f_94(b_94, c_94, a_94, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_94(a_94, t);
    }
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = term_t_40;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL;
  ATerm u_40 = t;
  int w_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_94 = NULL;
      j_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_94, term_x_40);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(w_40);
    }
  else
    {
      t = u_40;
      t = debug_1_0(q_10, t);
      _fail(t);
    }
  h_94 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_10(i_94, t);
  g_94 = t;
  t = h_94;
  t = fclose_0_0(t);
  t = g_94;
  return(t);
}
ATerm input_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  ATerm a_41 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_41;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_41);
    }
  else
    {
      t = a_41;
      t = term_d_41;
    }
  t = ReadFromFile_0_0(t);
  t = x_106(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL;
  l_94 = t;
  t = term_e_41;
  t = whoami_0_0(t);
  m_94 = t;
  t = term_b_19;
  o_94 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_41), m_94), term_f_41);
  p_94 = t;
  t = SSL_printnl(o_94, p_94);
  t = term_k_41;
  n_94 = t;
  t = SSL_exit(n_94);
  t = l_94;
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm r_94 = NULL;
  r_94 = t;
  if(match_string(t, "-k"))
    {
      t = r_94;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_94;
    }
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL;
  s_94 = t;
  t = SSL_string_to_int(s_94);
  t_94 = t;
  t = term_l_41;
  u_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_41, t_94);
  t = j_10(u_94, t_94, t);
  t = s_94;
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = term_m_41;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_10, v_10, x_10, t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm w_94 = NULL;
  w_94 = t;
  if(match_string(t, "-S"))
    {
      t = w_94;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_94;
    }
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm x_94 = NULL,y_94 = NULL;
  t = term_n_41;
  x_94 = t;
  t = term_o_41;
  y_94 = t;
  t = term_p_41;
  t = j_10(x_94, y_94, t);
  t = term_q_41;
  return(t);
}
ATerm g_11 (ATerm t)
{
  t = term_y_41;
  return(t);
}
ATerm h_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm z_94 = NULL,a_95 = NULL,b_95 = NULL;
  z_94 = t;
  t = SSL_string_to_int(z_94);
  a_95 = t;
  t = term_n_41;
  b_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_41, a_95);
  t = j_10(b_95, a_95, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_94);
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_z_41;
  return(t);
}
ATerm v_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm c_95 = NULL,d_95 = NULL;
  t = term_a_42;
  c_95 = t;
  t = term_e_41;
  d_95 = t;
  t = term_c_42;
  t = j_10(c_95, d_95, t);
  t = term_e_42;
  return(t);
}
ATerm o_12 (ATerm t)
{
  t = term_f_42;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_42 = t;
  int k_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_11, f_11, g_11, t);
      ;
      LocalPopChoice(k_42);
    }
  else
    {
      t = i_42;
      {
        ATerm l_42 = t;
        int m_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_11, i_11, u_11, t);
            ;
            LocalPopChoice(m_42);
          }
        else
          {
            t = l_42;
            t = Option_3_0(v_11, x_11, o_12, t);
          }
      }
    }
  return(t);
}
ATerm j_10 (ATerm o_51, ATerm p_51, ATerm t)
{
  ATerm e_95 = NULL;
  t = term_n_42;
  e_95 = t;
  t = SSL_table_put(e_95, o_51, p_51);
  t = (ATerm) ATmakeAppl(sym__3, term_n_42, o_51, p_51);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL;
      t = term_e_41;
      t = i_0(t);
      j_95 = t;
      t = term_o_42;
      k_95 = t;
      t = term_t_42;
      l_95 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_42, term_t_42, j_95);
      t = h_10(k_95, l_95, j_95, t);
      _fail(t);
    }
  else
    {
      ATerm o_95 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_95 = ATgetFirst((ATermList) t);
          i_95 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_95;
      t = d_0(t);
      t = term_e_41;
      t = g_0(t);
      o_95 = t;
      t = (ATerm) ATinsert(CheckATermList(i_95), o_95);
    }
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm q_95 = NULL;
  q_95 = t;
  if(match_string(t, "-o"))
    {
      t = q_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_95;
    }
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL;
  r_95 = t;
  t = term_t_39;
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_39, r_95);
  t = j_10(s_95, r_95, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_95);
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = term_u_42;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_12, s_12, t_12, t);
  return(t);
}
ATerm v_12 (ATerm t)
{
  ATerm y_95 = NULL;
  y_95 = t;
  if(match_string(t, "-i"))
    {
      t = y_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_95;
    }
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm z_95 = NULL,a_96 = NULL;
  z_95 = t;
  t = term_c_41;
  a_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_41, z_95);
  t = j_10(a_96, z_95, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_95);
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = term_v_42;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_12, g_13, h_13, t);
  return(t);
}
ATerm at_end_1_0 (ATerm d_80 (ATerm), ATerm t)
{
  ATerm v_96 (ATerm t)
  {
    ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL;
    u_96 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_96 = ATgetFirst((ATermList) t);
        t_96 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_42 = NULL,g_42 = NULL,l_17 = NULL;
          t = SSLgetAnnotations(u_96);
          b_42 = t;
          t = t_96;
          t = v_96(t);
          g_42 = t;
          t = (ATerm) ATinsert(CheckATermList(g_42), s_96);
          l_17 = t;
          t = SSLsetAnnotations(l_17, b_42);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_96;
        t = d_80(t);
      }
    return(t);
  }
  t = v_96(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_96 = NULL,d_96 = NULL,e_96 = NULL;
  c_96 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_96;
    }
  else
    {
      ATerm i_13 (ATerm t)
      {
        t = not_null(e_96);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_96 = ATgetFirst((ATermList) t);
          if(((e_96 != NULL) && (e_96 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_96 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_96;
      t = at_end_1_0(i_13, t);
    }
  return(t);
}
ATerm h_97 (ATerm z_96, ATerm t)
{
  ATerm a_97 = NULL;
  t = SSL_explode_term(z_96);
  if(match_cons(t, sym__2))
    {
      ATerm y_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_97;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL;
  e_97 = t;
  if(match_cons(t, sym__2))
    {
      c_97 = ATgetArgument(t, 0);
      d_97 = ATgetArgument(t, 1);
      {
        ATerm z_42 = t;
        int c_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_13 (ATerm t)
            {
              t = d_97;
              return(t);
            }
            t = c_97;
            t = at_end_1_0(k_13, t);
            ;
            LocalPopChoice(c_43);
          }
        else
          {
            t = z_42;
            t = h_97(e_97, t);
          }
      }
    }
  else
    {
      t = h_97(e_97, t);
    }
  return(t);
}
ATerm v_9 (ATerm u_51, ATerm t_51, ATerm t)
{
  ATerm i_97 = NULL,j_97 = NULL,k_97 = NULL;
  t = u_51;
  {
    ATerm e_43 = t;
    int f_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(f_43);
      }
    else
      {
        t = e_43;
        t = (ATerm) ATempty;
      }
    j_97 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_51, j_97);
    t = conc_0_0(t);
    i_97 = t;
    t = term_n_42;
    k_97 = t;
    t = SSL_table_put(k_97, u_51, i_97);
    t = (ATerm) ATmakeAppl(sym__3, term_n_42, u_51, i_97);
  }
  return(t);
}
ATerm h_10 (ATerm l_27, ATerm m_27, ATerm k_27, ATerm t)
{
  ATerm m_97 = NULL,n_97 = NULL,o_97 = NULL;
  m_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_43 = ATgetArgument(t, 0);
            ATerm k_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
        t = g_10(l_27, m_27, t);
        ;
        LocalPopChoice(h_43);
      }
    else
      {
        t = g_43;
        t = (ATerm) ATempty;
      }
    n_97 = t;
    t = (ATerm) ATinsert(CheckATermList(n_97), k_27);
    o_97 = t;
    t = SSL_table_put(l_27, m_27, o_97);
    t = m_97;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_97 = NULL,a_98 = NULL,b_98 = NULL;
      t = term_e_41;
      t = r_0(t);
      z_97 = t;
      t = term_o_42;
      a_98 = t;
      t = term_t_42;
      b_98 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_42, term_t_42, z_97);
      t = h_10(a_98, b_98, z_97, t);
      _fail(t);
    }
  else
    {
      ATerm l_98 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_97 = ATgetFirst((ATermList) t);
          w_97 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_97;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_97 = ATgetFirst((ATermList) t);
          y_97 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_97;
      t = n_0(t);
      t = x_97;
      t = p_0(t);
      l_98 = t;
      t = (ATerm) ATinsert(CheckATermList(y_97), l_98);
    }
  return(t);
}
ATerm n_13 (ATerm t)
{
  ATerm n_98 = NULL;
  n_98 = t;
  if(match_string(t, "--warning"))
    {
      t = n_98;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = n_98;
    }
  return(t);
}
ATerm o_13 (ATerm t)
{
  ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL;
  o_98 = t;
  t = term_l_43;
  p_98 = t;
  t = (ATerm) ATinsert(ATempty, o_98);
  q_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_43, (ATerm) ATinsert(ATempty, o_98));
  t = v_9(p_98, q_98, t);
  t = term_e_41;
  return(t);
}
ATerm p_13 (ATerm t)
{
  t = term_m_43;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_13, o_13, p_13, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_41;
  t = whoami_0_0(t);
  r_98 = t;
  t = term_b_19;
  t_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_43), r_98);
  u_98 = t;
  t = SSL_printnl(t_98, u_98);
  t = term_k_41;
  s_98 = t;
  t = SSL_exit(s_98);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_43;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_10 (ATerm p_25, ATerm q_25, ATerm t)
{
  ATerm p_43 = t;
  int q_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_25, q_25);
      ;
      LocalPopChoice(q_43);
    }
  else
    {
      t = p_43;
      t = SSL_addr(p_25, q_25);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm t)
{
  ATerm w_98 = NULL,x_98 = NULL,y_98 = NULL;
  w_98 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_98;
      t = n_81(t);
    }
  else
    {
      ATerm b_99 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_98 = ATgetFirst((ATermList) t);
          y_98 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_98;
      t = foldr_2_0(n_81, o_81, t);
      b_99 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_98, b_99);
      t = o_81(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm r_13 (ATerm t)
{
  t = term_o_41;
  return(t);
}
ATerm x_13 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL;
  if(match_cons(t, sym__2))
    {
      w_42 = ATgetArgument(t, 0);
      x_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(w_42, x_42, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_99 = NULL,p_42 = NULL,q_42 = NULL;
  t = times_0_0(t);
  q_42 = t;
  t = SSL_explode_term(q_42);
  if(match_cons(t, sym__2))
    {
      ATerm r_43 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_42;
  t = foldr_2_0(r_13, x_13, t);
  e_99 = t;
  t = SSL_TicksToSeconds(e_99);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_99 = NULL,q_99 = NULL,r_99 = NULL;
  p_99 = t;
  if(match_cons(t, sym__2))
    {
      q_99 = ATgetArgument(t, 0);
      r_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_99;
        if((q_99 != t))
          {
            _fail(t);
          }
        t = p_99;
        ;
        LocalPopChoice(u_43);
      }
    else
      {
        t = s_43;
        t = (ATerm) ATmakeAppl(sym__2, q_99, r_99);
        {
          ATerm v_43 = t;
          int w_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_99, r_99);
              ;
              LocalPopChoice(w_43);
            }
          else
            {
              t = v_43;
              t = SSL_gtr(q_99, r_99);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_99, r_99);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_103 (ATerm), ATerm t)
{
  ATerm v_99 = NULL;
  v_99 = t;
  {
    ATerm x_43 = t;
    int z_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_99 = NULL;
        t = term_n_41;
        t = get_config_0_0(t);
        x_99 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_99, term_k_41);
        t = geq_0_0(t);
        t = v_99;
        t = x_103(t);
        ;
        LocalPopChoice(z_43);
      }
    else
      {
        t = x_43;
        t = v_99;
      }
  }
  return(t);
}
ATerm y_13 (ATerm t)
{
  ATerm z_99 = NULL,a_100 = NULL,c_100 = NULL,d_100 = NULL;
  t = run_time_0_0(t);
  z_99 = t;
  t = term_e_41;
  t = whoami_0_0(t);
  a_100 = t;
  t = term_b_19;
  c_100 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_44), z_99), term_a_44), a_100);
  d_100 = t;
  t = SSL_printnl(c_100, d_100);
  t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_44), z_99), term_a_44), a_100));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_100 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_41;
  e_100 = t;
  t = SSL_exit(e_100);
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm m_100 = NULL,n_100 = NULL;
  n_100 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_100;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_100 = ATgetArgument(t, 0);
          {
            ATerm y_43 = NULL,n_17 = NULL;
            t = SSLgetAnnotations(n_100);
            y_43 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_100);
            n_17 = t;
            t = SSLsetAnnotations(n_17, y_43);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_100;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_106 (ATerm), ATerm t)
{
  ATerm c_44 = t;
  int d_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_44;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_44);
    }
  else
    {
      t = c_44;
      t = fetch_1_0(c_14, t);
    }
  t = n_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm q_100 = NULL,r_100 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_100 = ATgetFirst((ATermList) t);
      r_100 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_100 = NULL,w_100 = NULL;
        ATerm f_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_100)), not_null(w_100));
          return(t);
        }
        t = r_100;
        t = m_0(t);
        if(((v_100 != NULL) && (v_100 != t)))
          _fail(t);
        else
          v_100 = t;
        t = q_100;
        t = k_0(t);
        if(((w_100 != NULL) && (w_100 != t)))
          _fail(t);
        else
          w_100 = t;
        t = r_100;
        t = reverse_acc_2_0(k_0, f_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_41;
      t = m_0(t);
    }
  return(t);
}
ATerm g_14 (ATerm t)
{
  ATerm a_101 = NULL,b_101 = NULL,c_101 = NULL,v_17 = NULL;
  c_101 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_101);
  a_101 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_101);
  v_17 = t;
  t = SSLsetAnnotations(v_17, a_101);
  return(t);
}
ATerm h_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_14 (ATerm t)
{
  ATerm e_101 = NULL;
  e_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_101), term_f_44);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_100 = NULL,z_100 = NULL;
  ATerm g_44 = t;
  int h_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_43;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_44);
    }
  else
    {
      t = g_44;
      t = fetch_1_0(g_14, t);
    }
  t = term_i_44;
  t = echo_0_0(t);
  t = term_o_42;
  y_100 = t;
  t = term_t_42;
  z_100 = t;
  t = term_k_44;
  t = g_10(y_100, z_100, t);
  t = reverse_acc_2_0(_id, h_14, t);
  t = map_1_0(j_14, t);
  return(t);
}
ATerm fetch_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm b_102 (ATerm t)
  {
    ATerm y_101 = NULL,z_101 = NULL,a_102 = NULL;
    y_101 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_101 = ATgetFirst((ATermList) t);
        a_102 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_44 = t;
      int m_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_44 = NULL,q_44 = NULL,j_18 = NULL;
          t = SSLgetAnnotations(y_101);
          j_44 = t;
          t = z_101;
          t = x_79(t);
          q_44 = t;
          t = (ATerm) ATinsert(CheckATermList(a_102), q_44);
          j_18 = t;
          t = SSLsetAnnotations(j_18, j_44);
          ;
          LocalPopChoice(m_44);
        }
      else
        {
          t = l_44;
          {
            ATerm l_45 = NULL,s_45 = NULL,l_18 = NULL;
            t = SSLgetAnnotations(y_101);
            l_45 = t;
            t = a_102;
            t = b_102(t);
            s_45 = t;
            t = (ATerm) ATinsert(CheckATermList(s_45), z_101);
            l_18 = t;
            t = SSLsetAnnotations(l_18, l_45);
          }
        }
    }
    return(t);
  }
  t = b_102(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL;
  f_102 = t;
  {
    ATerm p_44 = t;
    int s_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_102;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_44 = ATgetFirst((ATermList) t);
                ATerm u_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_102;
          }
        ;
        LocalPopChoice(s_44);
      }
    else
      {
        t = p_44;
        t = (ATerm) ATinsert(ATempty, f_102);
      }
    g_102 = t;
    t = term_u_39;
    h_102 = t;
    t = SSL_printnl(h_102, g_102);
    t = f_102;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_43;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm f_10 (ATerm n_44, ATerm o_44, ATerm t)
{
  t = SSL_strcat(n_44, o_44);
  return(t);
}
ATerm debug_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm m_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL;
  m_102 = t;
  t = l_102(t);
  o_102 = t;
  t = term_b_19;
  p_102 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_102), o_102);
  q_102 = t;
  t = SSL_printnl(p_102, q_102);
  t = m_102;
  return(t);
}
ATerm map_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  ATerm f_103 (ATerm t)
  {
    ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL;
    c_103 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_103;
      }
    else
      {
        ATerm g_46 = NULL,l_46 = NULL,n_46 = NULL,o_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_103 = ATgetFirst((ATermList) t);
            e_103 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_103);
        g_46 = t;
        t = d_103;
        t = n_79(t);
        l_46 = t;
        t = e_103;
        t = f_103(t);
        n_46 = t;
        t = (ATerm) ATinsert(CheckATermList(n_46), l_46);
        o_18 = t;
        t = SSLsetAnnotations(o_18, g_46);
      }
    return(t);
  }
  t = f_103(t);
  return(t);
}
ATerm o_14 (ATerm t)
{
  ATerm v_44 = t;
  int w_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(w_44);
    }
  else
    {
      t = v_44;
    }
  return(t);
}
ATerm s_14 (ATerm t)
{
  t = term_x_44;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_44 = t;
  int z_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_103 = NULL;
      n_103 = t;
      t = SSL_is_string(n_103);
      ;
      LocalPopChoice(z_44);
    }
  else
    {
      t = y_44;
      {
        ATerm c_45 = t;
        int d_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_14, t);
            ;
            LocalPopChoice(d_45);
          }
        else
          {
            t = c_45;
            {
              ATerm t_103 = NULL,u_103 = NULL,v_103 = NULL;
              t_103 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_103 = ATgetArgument(t, 0);
                  t = u_103;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_103 = ATgetArgument(t, 0);
                      t = u_103;
                      {
                        ATerm f_45 = t;
                        int g_45 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(g_45);
                          }
                        else
                          {
                            t = f_45;
                            t = debug_1_0(s_14, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_104 = NULL,b_104 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_103 = ATgetArgument(t, 0);
                          v_103 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_103;
                      t = eval_config_0_0(t);
                      a_104 = t;
                      t = v_103;
                      t = eval_config_0_0(t);
                      b_104 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_104, b_104);
                      t = f_10(a_104, b_104, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm g_10 (ATerm c_29, ATerm d_29, ATerm t)
{
  t = SSL_table_get(c_29, d_29);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm f_104 = NULL,g_104 = NULL;
  f_104 = t;
  t = term_n_42;
  g_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_42, f_104);
  t = g_10(g_104, f_104, t);
  {
    ATerm i_45 = t;
    int j_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_104 = NULL,i_104 = NULL;
        t = eval_config_0_0(t);
        h_104 = t;
        t = term_n_42;
        i_104 = t;
        t = SSL_table_put(i_104, f_104, h_104);
        t = h_104;
        ;
        LocalPopChoice(j_45);
      }
    else
      {
        t = i_45;
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
ATerm b_15 (ATerm t)
{
  ATerm l_104 = NULL,m_104 = NULL;
  t = term_k_45;
  l_104 = t;
  t = term_e_41;
  m_104 = t;
  t = term_m_45;
  t = j_10(l_104, m_104, t);
  return(t);
}
ATerm c_15 (ATerm t)
{
  t = term_n_45;
  return(t);
}
ATerm d_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_15 (ATerm t)
{
  ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL,q_104 = NULL;
  t = term_k_45;
  p_104 = t;
  t = term_e_41;
  q_104 = t;
  t = term_m_45;
  t = j_10(p_104, q_104, t);
  t = term_q_45;
  n_104 = t;
  t = term_e_41;
  o_104 = t;
  t = term_r_45;
  t = j_10(n_104, o_104, t);
  t = term_t_45;
  return(t);
}
ATerm f_15 (ATerm t)
{
  t = term_u_45;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_14, b_15, c_15, t);
      ;
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
      t = Option_3_0(d_15, e_15, f_15, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_65 (ATerm), ATerm t_65 (ATerm), ATerm t)
{
  ATerm r_104 = NULL,s_104 = NULL,t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL,u_18 = NULL;
  w_104 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_104 = ATgetFirst((ATermList) t);
      t_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_104);
  r_104 = t;
  t = s_104;
  t = s_65(t);
  u_104 = t;
  t = t_104;
  t = t_65(t);
  v_104 = t;
  t = (ATerm) ATinsert(CheckATermList(v_104), u_104);
  u_18 = t;
  t = SSLsetAnnotations(u_18, r_104);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_108 (ATerm), ATerm t)
{
  ATerm b_105 = NULL,c_105 = NULL,d_105 = NULL,e_105 = NULL,g_105 = NULL,h_105 = NULL,w_18 = NULL;
  b_105 = t;
  {
    ATerm x_45 = t;
    int z_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_46;
        t = q_108(t);
        ;
        LocalPopChoice(z_45);
      }
    else
      {
        t = x_45;
      }
    t = b_105;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_105 = ATgetFirst((ATermList) t);
        e_105 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_105);
    c_105 = t;
    t = term_o_43;
    h_105 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_43, d_105);
    t = j_10(h_105, d_105, t);
    t = e_105;
    {
      ATerm r_105 (ATerm t)
      {
        ATerm c_46 = t;
        int d_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_46 = t;
            int f_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_105 = NULL;
                k_105 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_105;
                ;
                LocalPopChoice(f_46);
              }
            else
              {
                t = e_46;
                t = q_108(t);
                t = Cons_2_0(_id, r_105, t);
              }
            ;
            LocalPopChoice(d_46);
          }
        else
          {
            t = c_46;
            {
              ATerm n_105 = NULL,o_105 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_105 = ATgetFirst((ATermList) t);
                  o_105 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_105), (ATerm) ATmakeAppl(sym_Undefined_1, n_105));
            }
          }
        return(t);
      }
      t = r_105(t);
      g_105 = t;
      t = (ATerm) ATinsert(CheckATermList(g_105), (ATerm) ATmakeAppl(sym_Program_1, d_105));
      w_18 = t;
      t = SSLsetAnnotations(w_18, c_105);
    }
  }
  return(t);
}
ATerm n_15 (ATerm t)
{
  ATerm d_106 = NULL;
  d_106 = t;
  if(match_string(t, "--help"))
    {
      t = d_106;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_106;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_106;
        }
    }
  return(t);
}
ATerm p_15 (ATerm t)
{
  ATerm e_106 = NULL,f_106 = NULL;
  t = term_e_44;
  e_106 = t;
  t = term_e_41;
  f_106 = t;
  t = term_h_46;
  t = j_10(e_106, f_106, t);
  t = term_k_46;
  return(t);
}
ATerm r_15 (ATerm t)
{
  t = term_o_46;
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
  ATerm w_105 = NULL,x_105 = NULL,y_105 = NULL,z_105 = NULL,a_106 = NULL,b_106 = NULL,c_106 = NULL;
  y_105 = t;
  t = term_o_42;
  a_106 = t;
  t = term_t_42;
  b_106 = t;
  t = (ATerm) ATempty;
  c_106 = t;
  t = SSL_table_put(a_106, b_106, c_106);
  t = y_105;
  {
    ATerm l_15 (ATerm t)
    {
      ATerm p_46 = t;
      int q_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_108(t);
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
                t = Option_3_0(n_15, p_15, r_15, t);
                ;
                LocalPopChoice(s_46);
              }
            else
              {
                t = r_46;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_15, t);
    {
      ATerm u_46 = t;
      int v_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_106 = NULL;
          m_106 = t;
          {
            ATerm w_46 = t;
            int b_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_47 = NULL;
                t = m_106;
                {
                  ATerm c_47 = t;
                  int d_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_e_44;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(d_47);
                    }
                  else
                    {
                      t = c_47;
                      t = fetch_1_0(s_15, t);
                    }
                  t = m_106;
                  t = default_system_usage_0_0(t);
                  t = term_o_41;
                  x_47 = t;
                  t = SSL_exit(x_47);
                }
                ;
                LocalPopChoice(b_47);
              }
            else
              {
                t = w_46;
                {
                  ATerm b_48 = NULL;
                  t = term_k_45;
                  t = get_config_0_0(t);
                  t = m_106;
                  t = default_system_about_0_0(t);
                  t = term_o_41;
                  b_48 = t;
                  t = SSL_exit(b_48);
                }
              }
          }
          ;
          LocalPopChoice(v_46);
        }
      else
        {
          t = u_46;
          {
            ATerm e_47 = t;
            int f_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_106 = NULL,t_106 = NULL,u_106 = NULL;
                ATerm v_15 (ATerm t)
                {
                  ATerm v_106 = NULL,y_106 = NULL,z_106 = NULL,y_18 = NULL;
                  z_106 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      y_106 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_106);
                  v_106 = t;
                  t = y_106;
                  if(((w_105 != NULL) && (w_105 != t)))
                    _fail(t);
                  else
                    w_105 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_106);
                  y_18 = t;
                  t = SSLsetAnnotations(y_18, v_106);
                  return(t);
                }
                t = fetch_1_0(v_15, t);
                t = term_b_19;
                t_106 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_105)), term_g_47);
                u_106 = t;
                t = SSL_printnl(t_106, u_106);
                t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_105)), term_g_47));
                t = default_system_usage_0_0(t);
                t = term_k_41;
                o_106 = t;
                t = SSL_exit(o_106);
                ;
                LocalPopChoice(f_47);
              }
            else
              {
                t = e_47;
              }
          }
        }
      x_105 = t;
      t = term_o_42;
      z_105 = t;
      t = SSL_table_destroy(z_105);
      t = x_105;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t)
{
  ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL,h_107 = NULL;
  t = parse_options_1_0(p_106, t);
  e_107 = t;
  t = term_h_47;
  h_107 = t;
  t = SSL_table_create(h_107);
  t = term_h_47;
  f_107 = t;
  t = term_i_47;
  g_107 = t;
  t = SSL_table_put(f_107, g_107, e_107);
  t = e_107;
  t = r_106(t);
  {
    ATerm j_47 = t;
    int k_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_106, t);
        ;
        LocalPopChoice(k_47);
      }
    else
      {
        t = j_47;
        {
          ATerm l_47 = t;
          int m_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_106(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(m_47);
            }
          else
            {
              t = l_47;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm w_15 (ATerm t)
{
  ATerm n_47 = t;
  int p_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = stratego_warnings_options_0_0(t);
      ;
      LocalPopChoice(p_47);
    }
  else
    {
      t = n_47;
      {
        ATerm q_47 = t;
        int r_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(r_47);
          }
        else
          {
            t = q_47;
            {
              ATerm s_47 = t;
              int t_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(t_47);
                }
              else
                {
                  t = s_47;
                  {
                    ATerm u_47 = t;
                    int v_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(y_15, z_15, a_16, t);
                        ;
                        LocalPopChoice(v_47);
                      }
                    else
                      {
                        t = u_47;
                        {
                          ATerm w_47 = t;
                          int y_47 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(y_47);
                            }
                          else
                            {
                              t = w_47;
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
ATerm x_15 (ATerm t)
{
  t = input_1_0(b_16, t);
  return(t);
}
ATerm y_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_15 (ATerm t)
{
  ATerm j_107 = NULL,k_107 = NULL;
  t = term_z_39;
  j_107 = t;
  t = term_e_41;
  k_107 = t;
  t = term_z_47;
  t = j_10(j_107, k_107, t);
  t = term_a_48;
  return(t);
}
ATerm a_16 (ATerm t)
{
  t = term_c_48;
  return(t);
}
ATerm b_16 (ATerm t)
{
  t = output_1_0(d_16, t);
  return(t);
}
ATerm d_16 (ATerm t)
{
  ATerm m_107 = NULL;
  m_107 = t;
  t = spec_use_def_0_0(t);
  t = m_107;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_15, default_usage_0_0, _id, x_15, t);
  return(t);
}
