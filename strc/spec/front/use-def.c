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
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_c_47;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_k_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_f_46;
ATerm term_t_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_a_45;
ATerm term_y_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_h_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_t_42;
ATerm term_r_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_j_42;
ATerm term_h_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_p_41;
ATerm term_l_41;
ATerm term_i_41;
ATerm term_f_41;
ATerm term_l_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_b_40;
ATerm term_y_39;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_q_32;
ATerm term_n_32;
ATerm term_f_27;
ATerm term_w_26;
ATerm term_q_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_g_20;
ATerm term_u_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_z_18;
ATerm term_b_18;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_q_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_m_16;
void init_constant_terms (void)
{
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym__2, term_m_16, (ATerm) ATempty);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym__2, term_o_16, (ATerm) ATempty);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Defined_2, term_f_26, term_g_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_Defined_2, term_n_32, term_g_26);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym_Defined_2, term_g_35, term_h_35);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(sym__2, term_e_42, term_f_42);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_42);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym__2, term_n_42, term_u_41);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_f_42);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_y_41);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(sym__2, term_c_43, term_e_43);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym__2, term_f_46, term_u_41);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(sym__2, term_k_46, term_u_41);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym__2, term_y_44, term_u_41);
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(sym__2, term_l_40, term_u_41);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm r_0 (ATerm);
ATerm z_0 (ATerm);
ATerm y_8 (ATerm e_21, ATerm d_21, ATerm f_21, ATerm);
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
ATerm mark_guardedlchoice_1_0 (ATerm g_109 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm f_109 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm e_109 (ATerm), ATerm);
ATerm z_8 (ATerm);
ATerm h_2 (ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm alltd_1_0 (ATerm w_84 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm a_9 (ATerm v_60, ATerm w_60, ATerm x_60, ATerm);
ATerm j_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm b_9 (ATerm p_60, ATerm t_60, ATerm r_60, ATerm);
ATerm q_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm z_3 (ATerm);
ATerm c_9 (ATerm j_60, ATerm n_60, ATerm l_60, ATerm);
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
ATerm d_9 (ATerm h_59, ATerm i_59, ATerm j_59, ATerm l_59, ATerm);
ATerm CompareEntries_0_0 (ATerm);
ATerm e_9 (ATerm s_57, ATerm t_57, ATerm r_57, ATerm);
ATerm r_4 (ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm f_9 (ATerm o_28, ATerm n_28, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm undefine_unbound_MarkVar_0_1 (ATerm f_58, ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm mark_build_vars_0_0 (ATerm);
ATerm g_9 (ATerm y_27, ATerm z_27, ATerm a_28, ATerm);
ATerm DeclareBound_0_0 (ATerm);
ATerm j_9 (ATerm w_27, ATerm x_27, ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm MarkAndBind_0_0 (ATerm);
ATerm mark_match_vars_0_0 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm k_9 (ATerm a_83 (ATerm), ATerm d_27, ATerm b_27, ATerm);
ATerm f_5 (ATerm);
ATerm DeclareUnbound_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm p_9 (ATerm d_79 (ATerm), ATerm v_21, ATerm u_21, ATerm);
ATerm foldr_3_0 (ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm);
ATerm q_9 (ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm z_21, ATerm y_21, ATerm);
ATerm r_9 (ATerm y_78 (ATerm), ATerm t_21, ATerm s_21, ATerm);
ATerm genzip_4_0 (ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm v_9 (ATerm c_603, ATerm h_603, ATerm p_57, ATerm);
ATerm while_not_2_0 (ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm);
ATerm for_3_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_86 (ATerm k_85, ATerm l_85, ATerm m_85, ATerm);
ATerm t_6 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm y_6 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm i_7 (ATerm);
ATerm k_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm free_vars_3_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm x_95 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm topdown_1_0 (ATerm e_83 (ATerm), ATerm);
ATerm x_9 (ATerm q_27, ATerm r_27, ATerm);
ATerm end_scope_1_0 (ATerm x_82 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm scope_2_0 (ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm);
ATerm u_7 (ATerm);
ATerm y_7 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm filter_1_0 (ATerm w_88 (ATerm), ATerm);
ATerm n_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm s_8 (ATerm);
ATerm spec_use_def_0_0 (ATerm);
ATerm z_9 (ATerm x_46, ATerm y_46, ATerm);
ATerm a_10 (ATerm l_50, ATerm m_50, ATerm);
ATerm c_10 (ATerm o_102 (ATerm), ATerm e_476, ATerm p_50, ATerm);
ATerm b_10 (ATerm h_50, ATerm i_50, ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm output_1_0 (ATerm x_106 (ATerm), ATerm);
ATerm b_93 (ATerm s_92, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm d_10 (ATerm n_50, ATerm);
ATerm e_10 (ATerm z_46, ATerm a_47, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm m_94 (ATerm l_93, ATerm);
ATerm n_94 (ATerm p_93, ATerm q_93, ATerm r_93, ATerm);
ATerm o_94 (ATerm z_93, ATerm a_94, ATerm b_94, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm t_9 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm y_106 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm w_9 (ATerm);
ATerm o_10 (ATerm);
ATerm t_10 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm u_10 (ATerm);
ATerm w_10 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm l_11 (ATerm);
ATerm q_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm m_10 (ATerm o_51, ATerm p_51, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm w_11 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm i_12 (ATerm);
ATerm n_12 (ATerm);
ATerm v_12 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm e_80 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm q_97 (ATerm i_97, ATerm);
ATerm conc_0_0 (ATerm);
ATerm y_9 (ATerm u_51, ATerm t_51, ATerm);
ATerm k_10 (ATerm l_27, ATerm m_27, ATerm k_27, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm k_13 (ATerm);
ATerm m_13 (ATerm);
ATerm p_13 (ATerm);
ATerm q_13 (ATerm);
ATerm r_13 (ATerm);
ATerm t_13 (ATerm);
ATerm x_13 (ATerm);
ATerm y_13 (ATerm);
ATerm a_14 (ATerm);
ATerm stratego_warnings_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm f_10 (ATerm p_25, ATerm q_25, ATerm);
ATerm foldr_2_0 (ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm f_14 (ATerm);
ATerm g_14 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_103 (ATerm), ATerm);
ATerm h_14 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm n_14 (ATerm);
ATerm need_help_1_0 (ATerm o_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm s_14 (ATerm);
ATerm u_14 (ATerm);
ATerm x_14 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm y_79 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_10 (ATerm n_44, ATerm o_44, ATerm);
ATerm debug_1_0 (ATerm m_102 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_79 (ATerm), ATerm);
ATerm y_14 (ATerm);
ATerm c_15 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm j_10 (ATerm c_29, ATerm d_29, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm e_15 (ATerm);
ATerm f_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm l_15 (ATerm);
ATerm o_15 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_65 (ATerm), ATerm t_65 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm r_108 (ATerm), ATerm);
ATerm q_15 (ATerm);
ATerm t_15 (ATerm);
ATerm u_15 (ATerm);
ATerm y_15 (ATerm);
ATerm parse_options_1_0 (ATerm q_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm);
ATerm b_16 (ATerm);
ATerm c_16 (ATerm);
ATerm e_16 (ATerm);
ATerm g_16 (ATerm);
ATerm h_16 (ATerm);
ATerm i_16 (ATerm);
ATerm l_16 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_m_16;
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm y_8 (ATerm e_21, ATerm d_21, ATerm f_21, ATerm t)
{
  ATerm a_0 = NULL,p_0 = NULL,t_0 = NULL,v_0 = NULL,x_0 = NULL;
  a_0 = t;
  t = (ATerm) ATempty;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_16, e_21);
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_16, e_21));
  t = k_9(r_0, v_0, x_0, t);
  t = (ATerm) ATempty;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_16, e_21);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_16, e_21));
  t = k_9(z_0, p_0, t_0, t);
  t = f_21;
  t = use_vars_0_0(t);
  t = a_0;
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_m_16;
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_m_16;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_m_16;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,g_3 = NULL,i_3 = NULL,k_3 = NULL;
  z_2 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      a_3 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
      c_3 = ATgetArgument(t, 2);
      u_2 = ATgetArgument(t, 3);
      t = u_2;
      if(match_cons(t, sym_StratRule_3))
        {
          v_2 = ATgetArgument(t, 0);
          w_2 = ATgetArgument(t, 1);
          x_2 = ATgetArgument(t, 2);
          {
            ATerm u_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
            t = (ATerm) ATempty;
            x_3 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_16, a_3);
            y_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_s_16, a_3));
            t = k_9(b_1, x_3, y_3, t);
            t = (ATerm) ATempty;
            u_3 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_16, a_3);
            w_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_16, a_3));
            t = k_9(c_1, u_3, w_3, t);
            t = (ATerm) ATmakeAppl(sym__3, v_2, w_2, x_2);
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, a_3, b_3, c_3, (ATerm) ATmakeAppl(sym_StratRule_3, v_2, w_2, x_2));
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              v_2 = ATgetArgument(t, 0);
              w_2 = ATgetArgument(t, 1);
              x_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = z_2;
          {
            ATerm v_16 = t;
            int w_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,h_3 = NULL;
                t = (ATerm) ATempty;
                f_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_16, a_3);
                h_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_x_16, a_3));
                t = k_9(d_1, f_3, h_3, t);
                t = (ATerm) ATempty;
                d_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_16, a_3);
                e_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_y_16, a_3));
                t = k_9(e_1, d_3, e_3, t);
                t = v_2;
                t = bind_vars_0_0(t);
                ;
                LocalPopChoice(w_16);
              }
            else
              {
                t = v_16;
                {
                  ATerm z_16 = t;
                  int b_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_2;
                      t = unbound_vars_0_0(t);
                      ;
                      LocalPopChoice(b_17);
                    }
                  else
                    {
                      t = z_16;
                      t = w_2;
                      t = use_vars_0_0(t);
                    }
                }
              }
            t = (ATerm) ATmakeAppl(sym_RDefT_4, a_3, b_3, c_3, (ATerm) ATmakeAppl(sym_Rule_3, v_2, w_2, x_2));
          }
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          a_3 = ATgetArgument(t, 0);
          b_3 = ATgetArgument(t, 1);
          c_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_3;
      if(match_cons(t, sym_Rule_3))
        {
          g_3 = ATgetArgument(t, 0);
          i_3 = ATgetArgument(t, 1);
          k_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_2;
      {
        ATerm f_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
            t = (ATerm) ATempty;
            a_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_17, a_3);
            b_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_j_17, a_3));
            t = k_9(m_1, a_5, b_5, t);
            t = (ATerm) ATempty;
            y_4 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_17, a_3);
            z_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_k_17, a_3));
            t = k_9(n_1, y_4, z_4, t);
            t = g_3;
            t = bind_vars_0_0(t);
            ;
            LocalPopChoice(i_17);
          }
        else
          {
            t = f_17;
            {
              ATerm l_17 = t;
              int n_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_3;
                  t = unbound_vars_0_0(t);
                  ;
                  LocalPopChoice(n_17);
                }
              else
                {
                  t = l_17;
                  t = i_3;
                  t = use_vars_0_0(t);
                }
            }
          }
        t = (ATerm) ATmakeAppl(sym_RDef_3, a_3, b_3, (ATerm) ATmakeAppl(sym_Rule_3, g_3, i_3, k_3));
      }
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm q_5 = NULL;
  q_5 = t;
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_6 = NULL,z_6 = NULL,a_7 = NULL;
        t = (ATerm) ATempty;
        z_6 = t;
        t = term_m_16;
        a_7 = t;
        t = term_q_17;
        t = j_9(a_7, z_6, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm t_17 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_17) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            x_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_5), term_w_17), x_6), term_u_17);
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        {
          ATerm y_17 = t;
          int z_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_7 = NULL,l_7 = NULL,t_7 = NULL;
              t = (ATerm) ATempty;
              l_7 = t;
              t = term_m_16;
              t_7 = t;
              t = term_q_17;
              t = j_9(t_7, l_7, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm a_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) a_18) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  j_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_5), term_w_17), j_7), term_b_18);
              ;
              LocalPopChoice(z_17);
            }
          else
            {
              t = y_17;
              {
                ATerm c_18 = t;
                int d_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_8 = NULL,k_8 = NULL,l_8 = NULL;
                    t = (ATerm) ATempty;
                    k_8 = t;
                    t = term_m_16;
                    l_8 = t;
                    t = term_q_17;
                    t = j_9(l_8, k_8, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm e_18 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) e_18) != ATmakeSymbol("q_0", 0, ATtrue)))
                          _fail(t);
                        g_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_5), term_w_17), g_8), term_b_18);
                    ;
                    LocalPopChoice(d_18);
                  }
                else
                  {
                    t = c_18;
                    {
                      ATerm g_18 = t;
                      int o_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_8 = NULL,t_8 = NULL,w_8 = NULL;
                          t = (ATerm) ATempty;
                          t_8 = t;
                          t = term_m_16;
                          w_8 = t;
                          t = term_q_17;
                          t = j_9(w_8, t_8, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm p_18 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) p_18) != ATmakeSymbol("l_0", 0, ATtrue)))
                                _fail(t);
                              r_8 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_5), term_w_17), r_8), term_b_18);
                          ;
                          LocalPopChoice(o_18);
                        }
                      else
                        {
                          t = g_18;
                          {
                            ATerm u_18 = t;
                            int w_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm n_10 = NULL,q_10 = NULL,r_10 = NULL;
                                t = (ATerm) ATempty;
                                q_10 = t;
                                t = term_m_16;
                                r_10 = t;
                                t = term_q_17;
                                t = j_9(r_10, q_10, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm x_18 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) x_18) != ATmakeSymbol("h_0", 0, ATtrue)))
                                      _fail(t);
                                    n_10 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_5), term_w_17), n_10), term_z_18);
                                ;
                                LocalPopChoice(w_18);
                              }
                            else
                              {
                                t = u_18;
                                {
                                  ATerm v_10 = NULL,x_10 = NULL,y_10 = NULL;
                                  t = (ATerm) ATempty;
                                  x_10 = t;
                                  t = term_m_16;
                                  y_10 = t;
                                  t = term_q_17;
                                  t = j_9(y_10, x_10, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm a_19 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) a_19) != ATmakeSymbol("c_0", 0, ATtrue)))
                                        _fail(t);
                                      v_10 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_5), term_w_17), v_10), term_z_18);
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
  ATerm o_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,u_6 = NULL,v_6 = NULL;
  u_6 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_6;
  if(match_cons(t, sym_ListVar_1))
    {
      s_6 = ATgetArgument(t, 0);
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_6;
            o_6 = t;
            t = u_6;
            ;
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            t = v_6;
            o_6 = t;
            t = u_6;
          }
      }
    }
  else
    {
      t = v_6;
      o_6 = t;
      t = u_6;
    }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_19), o_6), term_e_19);
  t = Context_0_0(t);
  q_6 = t;
  t = term_g_19;
  r_6 = t;
  t = SSL_printnl(r_6, q_6);
  t = q_6;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm d_8 = NULL;
  d_8 = t;
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_12 = NULL,w_12 = NULL,x_12 = NULL;
        t = (ATerm) ATempty;
        w_12 = t;
        t = term_o_16;
        x_12 = t;
        t = term_k_19;
        t = j_9(x_12, w_12, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm l_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_19) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            t_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_8), term_o_19), t_12), term_m_19);
        ;
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        {
          ATerm p_19 = t;
          int q_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_13 = NULL,n_13 = NULL,o_13 = NULL;
              t = (ATerm) ATempty;
              n_13 = t;
              t = term_o_16;
              o_13 = t;
              t = term_k_19;
              t = j_9(o_13, n_13, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm s_19 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) s_19) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  l_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_8), term_o_19), l_13), term_u_19);
              ;
              LocalPopChoice(q_19);
            }
          else
            {
              t = p_19;
              {
                ATerm v_19 = t;
                int w_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_13 = NULL,u_13 = NULL,v_13 = NULL;
                    t = (ATerm) ATempty;
                    u_13 = t;
                    t = term_o_16;
                    v_13 = t;
                    t = term_k_19;
                    t = j_9(v_13, u_13, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm x_19 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) x_19) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        s_13 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_8), term_o_19), s_13), term_u_19);
                    ;
                    LocalPopChoice(w_19);
                  }
                else
                  {
                    t = v_19;
                    {
                      ATerm y_19 = t;
                      int z_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_13 = NULL,b_14 = NULL,d_14 = NULL;
                          t = (ATerm) ATempty;
                          b_14 = t;
                          t = term_o_16;
                          d_14 = t;
                          t = term_k_19;
                          t = j_9(d_14, b_14, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm a_20 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) a_20) != ATmakeSymbol("o_0", 0, ATtrue)))
                                _fail(t);
                              z_13 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_8), term_o_19), z_13), term_u_19);
                          ;
                          LocalPopChoice(z_19);
                        }
                      else
                        {
                          t = y_19;
                          {
                            ATerm b_20 = t;
                            int d_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm i_14 = NULL,o_14 = NULL,p_14 = NULL;
                                t = (ATerm) ATempty;
                                o_14 = t;
                                t = term_o_16;
                                p_14 = t;
                                t = term_k_19;
                                t = j_9(p_14, o_14, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm e_20 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) e_20) != ATmakeSymbol("j_0", 0, ATtrue)))
                                      _fail(t);
                                    i_14 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_8), term_o_19), i_14), term_g_20);
                                ;
                                LocalPopChoice(d_20);
                              }
                            else
                              {
                                t = b_20;
                                {
                                  ATerm t_14 = NULL,v_14 = NULL,w_14 = NULL;
                                  t = (ATerm) ATempty;
                                  v_14 = t;
                                  t = term_o_16;
                                  w_14 = t;
                                  t = term_k_19;
                                  t = j_9(w_14, v_14, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm h_20 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) h_20) != ATmakeSymbol("e_0", 0, ATtrue)))
                                        _fail(t);
                                      t_14 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_8), term_o_19), t_14), term_g_20);
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
  ATerm u_8 = NULL,v_8 = NULL,x_8 = NULL,h_9 = NULL;
  x_8 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9;
  if(match_cons(t, sym_ListVar_1))
    {
      v_8 = ATgetArgument(t, 0);
      {
        ATerm i_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_8;
            u_8 = t;
            t = x_8;
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = i_20;
            t = h_9;
            u_8 = t;
            t = x_8;
          }
      }
    }
  else
    {
      t = h_9;
      u_8 = t;
      t = x_8;
    }
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL,l_9 = NULL;
        t = term_n_20;
        t = get_config_0_0(t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_20), u_8), term_e_19);
        t = Warning_0_0(t);
        i_9 = t;
        t = term_g_19;
        l_9 = t;
        t = SSL_printnl(l_9, i_9);
        t = i_9;
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm o_9 = NULL,u_9 = NULL;
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_10 = NULL,h_10 = NULL;
      g_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          u_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      h_10 = t;
      t = SSLgetAnnotations(g_10);
      o_9 = t;
      t = h_10;
      LocalPopChoice(q_20);
      {
        ATerm l_10 = NULL;
        l_10 = t;
        t = o_9;
        {
          ATerm r_20 = t;
          int s_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_20 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) t_20) != ATmakeSymbol("bound", 0, ATtrue)))
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
              _fail(t);
            }
          else
            {
              t = r_20;
              {
                ATerm w_20 = t;
                int x_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm y_20 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) y_20) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm z_20 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(z_20) != AT_LIST) || !(ATisEmpty(z_20))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(x_20);
                    t = (ATerm) ATmakeAppl(sym_Var_1, u_9);
                    t = MaybeUnbound_0_0(t);
                    _fail(t);
                  }
                else
                  {
                    t = w_20;
                    {
                      ATerm a_21 = t;
                      int c_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm g_21 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) g_21) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm h_21 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(h_21) != AT_LIST) || !(ATisEmpty(h_21))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(c_21);
                          t = (ATerm) ATmakeAppl(sym_Var_1, u_9);
                          t = Unbound_0_0(t);
                        }
                      else
                        {
                          t = a_21;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, u_9);
                          t = Unbound_0_0(t);
                        }
                    }
                  }
              }
            }
          t = l_10;
        }
      }
    }
  else
    {
      t = p_20;
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_10 = NULL,b_11 = NULL,e_11 = NULL,k_11 = NULL,f_1 = NULL;
            k_11 = t;
            if(match_cons(t, sym_App_2))
              {
                b_11 = ATgetArgument(t, 0);
                e_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_11);
            p_10 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, b_11, e_11);
            f_1 = t;
            t = SSLsetAnnotations(f_1, p_10);
            LocalPopChoice(j_21);
            {
              ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,r_11 = NULL,s_11 = NULL,h_1 = NULL;
              s_11 = t;
              if(match_cons(t, sym_App_2))
                {
                  n_11 = ATgetArgument(t, 0);
                  o_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_11);
              m_11 = t;
              t = n_11;
              t = unbound_vars_0_0(t);
              p_11 = t;
              t = o_11;
              t = use_vars_0_0(t);
              r_11 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, p_11, r_11);
              h_1 = t;
              t = SSLsetAnnotations(h_1, m_11);
            }
          }
        else
          {
            t = i_21;
            {
              ATerm k_21 = t;
              int l_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_11 = NULL,u_11 = NULL,b_12 = NULL,j_1 = NULL;
                  b_12 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      u_11 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_12);
                  t_11 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, u_11);
                  j_1 = t;
                  t = SSLsetAnnotations(j_1, t_11);
                  LocalPopChoice(l_21);
                  {
                    ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,h_12 = NULL,l_1 = NULL;
                    h_12 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        d_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(h_12);
                    c_12 = t;
                    t = d_12;
                    t = unbound_vars_0_0(t);
                    e_12 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, e_12);
                    l_1 = t;
                    t = SSLsetAnnotations(l_1, c_12);
                  }
                }
              else
                {
                  t = k_21;
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
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,q_1 = NULL;
      l_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          k_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_12);
      j_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, k_12);
      q_1 = t;
      t = SSLsetAnnotations(q_1, j_12);
      LocalPopChoice(n_21);
      _fail(t);
    }
  else
    {
      t = m_21;
      {
        ATerm o_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_1 = NULL;
            q_12 = t;
            if(match_cons(t, sym_App_2))
              {
                o_12 = ATgetArgument(t, 0);
                p_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_12);
            m_12 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, o_12, p_12);
            r_1 = t;
            t = SSLsetAnnotations(r_1, m_12);
            LocalPopChoice(p_21);
            {
              ATerm r_12 = NULL,s_12 = NULL,u_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,s_1 = NULL;
              b_13 = t;
              if(match_cons(t, sym_App_2))
                {
                  s_12 = ATgetArgument(t, 0);
                  u_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(b_13);
              r_12 = t;
              t = s_12;
              t = unbound_vars_0_0(t);
              z_12 = t;
              t = u_12;
              t = use_vars_0_0(t);
              a_13 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, z_12, a_13);
              s_1 = t;
              t = SSLsetAnnotations(s_1, r_12);
            }
          }
        else
          {
            t = o_21;
            {
              ATerm w_21 = t;
              int x_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,t_1 = NULL;
                  e_13 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      d_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_13);
                  c_13 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, d_13);
                  t_1 = t;
                  t = SSLsetAnnotations(t_1, c_13);
                  LocalPopChoice(x_21);
                  {
                    ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,u_1 = NULL;
                    i_13 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        g_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(i_13);
                    f_13 = t;
                    t = g_13;
                    t = unbound_vars_0_0(t);
                    h_13 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, h_13);
                    u_1 = t;
                    t = SSLsetAnnotations(u_1, f_13);
                  }
                }
              else
                {
                  t = w_21;
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
  ATerm b_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_14 = NULL,e_14 = NULL,j_14 = NULL,c_2 = NULL;
      j_14 = t;
      if(match_cons(t, sym_Build_1))
        {
          e_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_14);
      c_14 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, e_14);
      c_2 = t;
      t = SSLsetAnnotations(c_2, c_14);
      LocalPopChoice(w_22);
      {
        ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,z_14 = NULL,d_2 = NULL;
        z_14 = t;
        if(match_cons(t, sym_Build_1))
          {
            l_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_14);
        k_14 = t;
        t = l_14;
        t = use_vars_0_0(t);
        m_14 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, m_14);
        d_2 = t;
        t = SSLsetAnnotations(d_2, k_14);
      }
    }
  else
    {
      t = b_22;
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_15 = NULL,b_15 = NULL,d_15 = NULL,e_2 = NULL;
            d_15 = t;
            if(match_cons(t, sym_Match_1))
              {
                b_15 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_15);
            a_15 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, b_15);
            e_2 = t;
            t = SSLsetAnnotations(e_2, a_15);
            LocalPopChoice(y_22);
            {
              ATerm j_15 = NULL,k_15 = NULL,m_15 = NULL,r_15 = NULL,f_2 = NULL;
              r_15 = t;
              if(match_cons(t, sym_Match_1))
                {
                  k_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_15);
              j_15 = t;
              t = k_15;
              t = bind_vars_0_0(t);
              m_15 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, m_15);
              f_2 = t;
              t = SSLsetAnnotations(f_2, j_15);
            }
          }
        else
          {
            t = x_22;
            {
              ATerm z_22 = t;
              int a_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,a_16 = NULL,k_2 = NULL;
                  a_16 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      v_15 = ATgetArgument(t, 0);
                      w_15 = ATgetArgument(t, 1);
                      x_15 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_16);
                  s_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, v_15, w_15, x_15);
                  k_2 = t;
                  t = SSLsetAnnotations(k_2, s_15);
                  LocalPopChoice(a_23);
                  {
                    ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
                    h_18 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        i_18 = ATgetArgument(t, 0);
                        j_18 = ATgetArgument(t, 1);
                        k_18 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm b_23 = t;
                      int c_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_15 = NULL,n_15 = NULL,l_2 = NULL;
                          t = SSLgetAnnotations(h_18);
                          g_15 = t;
                          t = i_18;
                          t = bind_vars_0_0(t);
                          n_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, n_15, j_18, k_18);
                          l_2 = t;
                          t = SSLsetAnnotations(l_2, g_15);
                          ;
                          LocalPopChoice(c_23);
                        }
                      else
                        {
                          t = b_23;
                          {
                            ATerm d_23 = t;
                            int e_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_16 = NULL,n_16 = NULL,m_2 = NULL;
                                t = SSLgetAnnotations(h_18);
                                d_16 = t;
                                t = k_18;
                                t = unbound_vars_0_0(t);
                                n_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, i_18, j_18, n_16);
                                m_2 = t;
                                t = SSLsetAnnotations(m_2, d_16);
                                ;
                                LocalPopChoice(e_23);
                              }
                            else
                              {
                                t = d_23;
                                {
                                  ATerm c_17 = NULL,m_17 = NULL,n_2 = NULL;
                                  t = SSLgetAnnotations(h_18);
                                  c_17 = t;
                                  t = j_18;
                                  t = use_vars_0_0(t);
                                  m_17 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, i_18, m_17, k_18);
                                  n_2 = t;
                                  t = SSLsetAnnotations(n_2, c_17);
                                }
                              }
                          }
                        }
                    }
                  }
                }
              else
                {
                  t = z_22;
                  {
                    ATerm f_23 = t;
                    int g_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,r_18 = NULL,s_18 = NULL,o_2 = NULL;
                        s_18 = t;
                        if(match_cons(t, sym_PrimT_3))
                          {
                            m_18 = ATgetArgument(t, 0);
                            n_18 = ATgetArgument(t, 1);
                            r_18 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(s_18);
                        l_18 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, m_18, n_18, r_18);
                        o_2 = t;
                        t = SSLsetAnnotations(o_2, l_18);
                        LocalPopChoice(g_23);
                        {
                          ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
                          c_22 = t;
                          if(match_cons(t, sym_PrimT_3))
                            {
                              d_22 = ATgetArgument(t, 0);
                              e_22 = ATgetArgument(t, 1);
                              f_22 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          {
                            ATerm h_23 = t;
                            int i_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm q_18 = NULL,b_19 = NULL,p_2 = NULL;
                                t = SSLgetAnnotations(c_22);
                                q_18 = t;
                                t = e_22;
                                t = unbound_vars_0_0(t);
                                b_19 = t;
                                t = (ATerm) ATmakeAppl(sym_PrimT_3, d_22, b_19, f_22);
                                p_2 = t;
                                t = SSLsetAnnotations(p_2, q_18);
                                ;
                                LocalPopChoice(i_23);
                              }
                            else
                              {
                                t = h_23;
                                {
                                  ATerm n_19 = NULL,t_19 = NULL,q_2 = NULL;
                                  t = SSLgetAnnotations(c_22);
                                  n_19 = t;
                                  t = f_22;
                                  t = use_vars_0_0(t);
                                  t_19 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, d_22, e_22, t_19);
                                  q_2 = t;
                                  t = SSLsetAnnotations(q_2, n_19);
                                }
                              }
                          }
                        }
                      }
                    else
                      {
                        t = f_23;
                        {
                          ATerm k_23 = t;
                          int l_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_22 = NULL,h_22 = NULL,n_22 = NULL,u_22 = NULL,v_22 = NULL,r_2 = NULL;
                              v_22 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  h_22 = ATgetArgument(t, 0);
                                  n_22 = ATgetArgument(t, 1);
                                  u_22 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(v_22);
                              g_22 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, h_22, n_22, u_22);
                              r_2 = t;
                              t = SSLsetAnnotations(r_2, g_22);
                              LocalPopChoice(l_23);
                              {
                                ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
                                e_24 = t;
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    f_24 = ATgetArgument(t, 0);
                                    g_24 = ATgetArgument(t, 1);
                                    h_24 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm m_23 = t;
                                  int n_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm f_20 = NULL,j_20 = NULL,s_2 = NULL;
                                      t = SSLgetAnnotations(e_24);
                                      f_20 = t;
                                      t = g_24;
                                      t = unbound_vars_0_0(t);
                                      j_20 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, f_24, j_20, h_24);
                                      s_2 = t;
                                      t = SSLsetAnnotations(s_2, f_20);
                                      ;
                                      LocalPopChoice(n_23);
                                    }
                                  else
                                    {
                                      t = m_23;
                                      {
                                        ATerm v_20 = NULL,b_21 = NULL,t_2 = NULL;
                                        t = SSLgetAnnotations(e_24);
                                        v_20 = t;
                                        t = h_24;
                                        t = use_vars_0_0(t);
                                        b_21 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, f_24, g_24, b_21);
                                        t_2 = t;
                                        t = SSLsetAnnotations(t_2, v_20);
                                      }
                                    }
                                }
                              }
                            }
                          else
                            {
                              t = k_23;
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
  t = term_m_16;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_m_16;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm w_24 = NULL,y_24 = NULL,z_24 = NULL,d_25 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      y_24 = ATgetArgument(t, 0);
      z_24 = ATgetArgument(t, 1);
      d_25 = ATgetArgument(t, 2);
      w_24 = ATgetArgument(t, 3);
      {
        ATerm j_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
        t = (ATerm) ATempty;
        s_25 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_23, y_24);
        t_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_23, y_24));
        t = k_9(o_1, s_25, t_25, t);
        t = (ATerm) ATempty;
        j_25 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_23, y_24);
        r_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_23, y_24));
        t = k_9(p_1, j_25, r_25, t);
        t = w_24;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, y_24, z_24, d_25, w_24);
      }
    }
  else
    {
      ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          y_24 = ATgetArgument(t, 0);
          z_24 = ATgetArgument(t, 1);
          d_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      z_25 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_23, y_24);
      a_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_23, y_24));
      t = k_9(v_1, z_25, a_26, t);
      t = (ATerm) ATempty;
      x_25 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_23, y_24);
      y_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_r_23, y_24));
      t = k_9(w_1, x_25, y_25, t);
      t = d_25;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, y_24, z_24, d_25);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm g_109 (ATerm), ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,i_5 = NULL;
  ATerm x_1 (ATerm t)
  {
    ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,r_26 = NULL,s_26 = NULL,s_27 = NULL,v_27 = NULL,c_28 = NULL,h_28 = NULL,k_28 = NULL,r_28 = NULL,m_5 = NULL,l_5 = NULL;
    r_28 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        s_27 = ATgetArgument(t, 0);
        v_27 = ATgetArgument(t, 1);
        c_28 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_28);
    s_26 = t;
    t = s_27;
    t = g_109(t);
    h_28 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_28, v_27, c_28);
    l_5 = t;
    t = SSLsetAnnotations(l_5, s_26);
    k_28 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        n_26 = ATgetArgument(t, 0);
        o_26 = ATgetArgument(t, 1);
        p_26 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_28);
    m_26 = t;
    t = o_26;
    t = g_109(t);
    r_26 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, n_26, r_26, p_26);
    m_5 = t;
    t = SSLsetAnnotations(m_5, m_26);
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,n_5 = NULL;
    z_28 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        t_28 = ATgetArgument(t, 0);
        u_28 = ATgetArgument(t, 1);
        x_28 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_28);
    s_28 = t;
    t = x_28;
    t = g_109(t);
    y_28 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, t_28, u_28, y_28);
    n_5 = t;
    t = SSLsetAnnotations(n_5, s_28);
    return(t);
  }
  l_26 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      i_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
      k_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_26);
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, i_26, j_26, k_26);
  i_5 = t;
  t = SSLsetAnnotations(i_5, h_26);
  t = abstract_choice_2_0(x_1, y_1, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm f_109 (ATerm), ATerm t)
{
  ATerm a_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,t_5 = NULL;
  ATerm z_1 (ATerm t)
  {
    ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,r_29 = NULL,u_29 = NULL,u_5 = NULL;
    u_29 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        l_29 = ATgetArgument(t, 0);
        m_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_29);
    k_29 = t;
    t = l_29;
    t = f_109(t);
    r_29 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, r_29, m_29);
    u_5 = t;
    t = SSLsetAnnotations(u_5, k_29);
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm x_29 = NULL,z_29 = NULL,a_30 = NULL,d_30 = NULL,e_30 = NULL,v_5 = NULL;
    e_30 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        z_29 = ATgetArgument(t, 0);
        a_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_30);
    x_29 = t;
    t = a_30;
    t = f_109(t);
    d_30 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, z_29, d_30);
    v_5 = t;
    t = SSLsetAnnotations(v_5, x_29);
    return(t);
  }
  j_29 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      h_29 = ATgetArgument(t, 0);
      i_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_29);
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, h_29, i_29);
  t_5 = t;
  t = SSLsetAnnotations(t_5, a_29);
  t = abstract_choice_2_0(z_1, a_2, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  t = save_MarkVar_0_0(t);
  g_30 = t;
  t = o_30;
  t = h_109(t);
  j_30 = t;
  t = save_MarkVar_0_0(t);
  h_30 = t;
  t = term_s_23;
  q_30 = t;
  t = SSL_table_destroy(q_30);
  t = term_s_23;
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_23, g_30);
  t = f_9(p_30, g_30, t);
  t = j_30;
  t = i_109(t);
  i_30 = t;
  t = h_30;
  t = isect_MarkVar_0_0(t);
  t = i_30;
  return(t);
}
ATerm mark_choice_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,z_5 = NULL;
  ATerm b_2 (ATerm t)
  {
    ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,e_31 = NULL,f_31 = NULL,a_6 = NULL;
    f_31 = t;
    if(match_cons(t, sym_Choice_2))
      {
        w_30 = ATgetArgument(t, 0);
        x_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_31);
    v_30 = t;
    t = w_30;
    t = e_109(t);
    e_31 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, e_31, x_30);
    a_6 = t;
    t = SSLsetAnnotations(a_6, v_30);
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,b_6 = NULL;
    k_31 = t;
    if(match_cons(t, sym_Choice_2))
      {
        h_31 = ATgetArgument(t, 0);
        i_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_31);
    g_31 = t;
    t = i_31;
    t = e_109(t);
    j_31 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, h_31, j_31);
    b_6 = t;
    t = SSLsetAnnotations(b_6, g_31);
    return(t);
  }
  u_30 = t;
  if(match_cons(t, sym_Choice_2))
    {
      s_30 = ATgetArgument(t, 0);
      t_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_30);
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, s_30, t_30);
  z_5 = t;
  t = SSLsetAnnotations(z_5, r_30);
  t = abstract_choice_2_0(b_2, g_2, t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,d_32 = NULL,g_6 = NULL,f_6 = NULL;
  m_31 = t;
  t = save_MarkVar_0_0(t);
  l_31 = t;
  t = m_31;
  if(match_cons(t, sym_Rec_2))
    {
      z_31 = ATgetArgument(t, 0);
      a_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_31);
  y_31 = t;
  t = a_32;
  t = mark_buv_0_0(t);
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, z_31, d_32);
  f_6 = t;
  t = SSLsetAnnotations(f_6, y_31);
  t = l_31;
  t = isect_MarkVar_0_0(t);
  t = m_31;
  if(match_cons(t, sym_Rec_2))
    {
      t_31 = ATgetArgument(t, 0);
      u_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_31);
  n_31 = t;
  t = u_31;
  t = mark_buv_0_0(t);
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, t_31, v_31);
  g_6 = t;
  t = SSLsetAnnotations(g_6, n_31);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm f_32 = NULL,h_32 = NULL,j_32 = NULL,o_32 = NULL,p_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,l_6 = NULL,k_6 = NULL,j_6 = NULL;
  g_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      c_33 = ATgetArgument(t, 0);
      d_33 = ATgetArgument(t, 1);
      e_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_33);
  b_33 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, c_33, d_33, e_33);
  j_6 = t;
  t = SSLsetAnnotations(j_6, b_33);
  f_33 = t;
  t = save_MarkVar_0_0(t);
  f_32 = t;
  t = f_33;
  if(match_cons(t, sym_PrimT_3))
    {
      v_32 = ATgetArgument(t, 0);
      x_32 = ATgetArgument(t, 1);
      y_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_33);
  u_32 = t;
  t = y_32;
  t = map_1_0(h_2, t);
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, v_32, x_32, z_32);
  k_6 = t;
  t = SSLsetAnnotations(k_6, u_32);
  a_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      j_32 = ATgetArgument(t, 0);
      o_32 = ATgetArgument(t, 1);
      p_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_33);
  h_32 = t;
  t = o_32;
  t = mark_buv_0_0(t);
  s_32 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, j_32, s_32, p_32);
  l_6 = t;
  t = SSLsetAnnotations(l_6, h_32);
  t_32 = t;
  t = f_32;
  t = isect_MarkVar_0_0(t);
  t = t_32;
  return(t);
}
ATerm alltd_1_0 (ATerm w_84 (ATerm), ATerm t)
{
  ATerm h_33 (ATerm t)
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_84(t);
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        t = SRTS_all(h_33, t);
      }
    return(t);
  }
  t = h_33(t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,b_36 = NULL,c_36 = NULL;
  v_35 = t;
  if(match_cons(t, sym_CallT_3))
    {
      b_36 = ATgetArgument(t, 0);
      c_36 = ATgetArgument(t, 1);
      u_35 = ATgetArgument(t, 2);
      {
        ATerm q_21 = NULL,r_21 = NULL,a_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,j_23 = NULL,f_7 = NULL,e_7 = NULL,b_7 = NULL;
        t = SSLgetAnnotations(v_35);
        t_22 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, b_36, c_36, u_35);
        b_7 = t;
        t = SSLsetAnnotations(b_7, t_22);
        j_23 = t;
        t = save_MarkVar_0_0(t);
        q_21 = t;
        t = j_23;
        if(match_cons(t, sym_CallT_3))
          {
            o_22 = ATgetArgument(t, 0);
            p_22 = ATgetArgument(t, 1);
            q_22 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_23);
        m_22 = t;
        t = q_22;
        t = map_1_0(i_2, t);
        r_22 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, o_22, p_22, r_22);
        e_7 = t;
        t = SSLsetAnnotations(e_7, m_22);
        s_22 = t;
        if(match_cons(t, sym_CallT_3))
          {
            a_22 = ATgetArgument(t, 0);
            i_22 = ATgetArgument(t, 1);
            j_22 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_22);
        r_21 = t;
        t = i_22;
        t = mark_buv_0_0(t);
        k_22 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, a_22, k_22, j_22);
        f_7 = t;
        t = SSLsetAnnotations(f_7, r_21);
        l_22 = t;
        t = q_21;
        t = isect_MarkVar_0_0(t);
        t = l_22;
      }
    }
  else
    {
      ATerm y_23 = NULL,z_23 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,a_25 = NULL,h_7 = NULL,g_7 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          b_36 = ATgetArgument(t, 0);
          c_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_35);
      o_24 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, b_36, c_36);
      g_7 = t;
      t = SSLsetAnnotations(g_7, o_24);
      a_25 = t;
      t = save_MarkVar_0_0(t);
      y_23 = t;
      t = a_25;
      if(match_cons(t, sym_Call_2))
        {
          k_24 = ATgetArgument(t, 0);
          l_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_25);
      z_23 = t;
      t = l_24;
      t = mark_buv_0_0(t);
      m_24 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, k_24, m_24);
      h_7 = t;
      t = SSLsetAnnotations(h_7, z_23);
      n_24 = t;
      t = y_23;
      t = isect_MarkVar_0_0(t);
      t = n_24;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm a_9 (ATerm v_60, ATerm w_60, ATerm x_60, ATerm t)
{
  ATerm l_36 = NULL;
  ATerm y_2 (ATerm t)
  {
    t = w_60;
    t = map_1_0(IntroduceBound_0_0, t);
    t = x_60;
    t = mark_build_vars_0_0(t);
    if(((l_36 != NULL) && (l_36 != t)))
      _fail(t);
    else
      l_36 = t;
    return(t);
  }
  t = scope_2_0(j_2, y_2, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, v_60, w_60, not_null(l_36));
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm b_37 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_37);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      {
        ATerm h_37 = NULL,i_37 = NULL,l_37 = NULL,m_37 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            h_37 = ATgetArgument(t, 0);
            t = h_37;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_37 = ATgetArgument(t, 0);
                i_37 = ATgetArgument(t, 1);
                l_37 = ATgetArgument(t, 2);
                m_37 = ATgetArgument(t, 3);
                t = l_37;
                t = map_1_0(o_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    h_37 = ATgetArgument(t, 0);
                    i_37 = ATgetArgument(t, 1);
                    l_37 = ATgetArgument(t, 2);
                    m_37 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = l_37;
                t = map_1_0(p_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm u_37 = NULL;
  ATerm x_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_37 = ATgetArgument(t, 0);
          {
            ATerm b_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_24);
      t = u_37;
    }
  else
    {
      t = x_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_37;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm r_38 = NULL;
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_38 = ATgetArgument(t, 0);
          {
            ATerm i_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_24);
      t = r_38;
    }
  else
    {
      t = c_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_38;
    }
  return(t);
}
ATerm b_9 (ATerm p_60, ATerm t_60, ATerm r_60, ATerm t)
{
  ATerm r_36 = NULL,y_36 = NULL,a_37 = NULL;
  ATerm l_3 (ATerm t)
  {
    t = p_60;
    t = free_vars_3_0(m_3, n_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = p_60;
    t = mark_match_vars_0_0(t);
    if(((r_36 != NULL) && (r_36 != t)))
      _fail(t);
    else
      r_36 = t;
    t = r_60;
    t = mark_buv_0_0(t);
    if(((y_36 != NULL) && (y_36 != t)))
      _fail(t);
    else
      y_36 = t;
    t = t_60;
    t = mark_build_vars_0_0(t);
    if(((a_37 != NULL) && (a_37 != t)))
      _fail(t);
    else
      a_37 = t;
    return(t);
  }
  t = scope_2_0(j_3, l_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(r_36), not_null(a_37), not_null(y_36)));
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm a_39 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_39);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm j_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(p_24);
    }
  else
    {
      t = j_24;
      {
        ATerm f_39 = NULL,h_39 = NULL,m_39 = NULL,o_39 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            f_39 = ATgetArgument(t, 0);
            t = f_39;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                f_39 = ATgetArgument(t, 0);
                h_39 = ATgetArgument(t, 1);
                m_39 = ATgetArgument(t, 2);
                o_39 = ATgetArgument(t, 3);
                t = m_39;
                t = map_1_0(v_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    f_39 = ATgetArgument(t, 0);
                    h_39 = ATgetArgument(t, 1);
                    m_39 = ATgetArgument(t, 2);
                    o_39 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = m_39;
                t = map_1_0(z_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm c_40 = NULL;
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_40 = ATgetArgument(t, 0);
          {
            ATerm s_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_24);
      t = c_40;
    }
  else
    {
      t = q_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_40;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm t_40 = NULL;
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_40 = ATgetArgument(t, 0);
          {
            ATerm v_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_24);
      t = t_40;
    }
  else
    {
      t = t_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_40;
    }
  return(t);
}
ATerm c_9 (ATerm j_60, ATerm n_60, ATerm l_60, ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
  ATerm r_3 (ATerm t)
  {
    t = j_60;
    t = free_vars_3_0(s_3, t_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = j_60;
    t = mark_match_vars_0_0(t);
    if(((x_38 != NULL) && (x_38 != t)))
      _fail(t);
    else
      x_38 = t;
    t = l_60;
    t = mark_buv_0_0(t);
    if(((y_38 != NULL) && (y_38 != t)))
      _fail(t);
    else
      y_38 = t;
    t = n_60;
    t = mark_build_vars_0_0(t);
    if(((z_38 != NULL) && (z_38 != t)))
      _fail(t);
    else
      z_38 = t;
    return(t);
  }
  t = scope_2_0(q_3, r_3, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_38), not_null(z_38), not_null(y_38)));
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm d_43 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_43);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm x_24 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_25);
    }
  else
    {
      t = x_24;
      {
        ATerm g_43 = NULL,m_43 = NULL,o_43 = NULL,p_43 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            g_43 = ATgetArgument(t, 0);
            t = g_43;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                g_43 = ATgetArgument(t, 0);
                m_43 = ATgetArgument(t, 1);
                o_43 = ATgetArgument(t, 2);
                p_43 = ATgetArgument(t, 3);
                t = o_43;
                t = map_1_0(c_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    g_43 = ATgetArgument(t, 0);
                    m_43 = ATgetArgument(t, 1);
                    o_43 = ATgetArgument(t, 2);
                    p_43 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = o_43;
                t = map_1_0(d_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm y_43 = NULL;
  ATerm c_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_43 = ATgetArgument(t, 0);
          {
            ATerm f_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_25);
      t = y_43;
    }
  else
    {
      t = c_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_43;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm z_44 = NULL;
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_44 = ATgetArgument(t, 0);
          {
            ATerm i_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_25);
      t = z_44;
    }
  else
    {
      t = g_25;
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
ATerm e_4 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm g_46 = NULL;
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_46 = ATgetArgument(t, 0);
          {
            ATerm m_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_25);
      t = g_46;
    }
  else
    {
      t = k_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_46;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm j_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_46);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm l_46 = NULL,r_46 = NULL,s_46 = NULL,u_46 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_46 = ATgetArgument(t, 0);
            t = l_46;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                l_46 = ATgetArgument(t, 0);
                r_46 = ATgetArgument(t, 1);
                s_46 = ATgetArgument(t, 2);
                u_46 = ATgetArgument(t, 3);
                t = s_46;
                t = map_1_0(j_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    l_46 = ATgetArgument(t, 0);
                    r_46 = ATgetArgument(t, 1);
                    s_46 = ATgetArgument(t, 2);
                    u_46 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = s_46;
                t = map_1_0(k_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm r_47 = NULL;
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_47 = ATgetArgument(t, 0);
          {
            ATerm w_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_25);
      t = r_47;
    }
  else
    {
      t = u_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_47;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm e_48 = NULL;
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_48 = ATgetArgument(t, 0);
          {
            ATerm d_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_26);
      t = e_48;
    }
  else
    {
      t = b_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_48;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      q_41 = ATgetArgument(t, 0);
      r_41 = ATgetArgument(t, 1);
      s_41 = ATgetArgument(t, 2);
      {
        ATerm g_42 = NULL,i_42 = NULL,s_42 = NULL,u_42 = NULL;
        t = s_41;
        if(match_cons(t, sym_Rule_3))
          {
            m_41 = ATgetArgument(t, 0);
            n_41 = ATgetArgument(t, 1);
            o_41 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = s_41;
        t = free_vars_3_0(a_4, b_4, tboundin_3_0, t);
        g_42 = t;
        {
          ATerm f_4 (ATerm t)
          {
            t = g_42;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = m_41;
            t = mark_match_vars_0_0(t);
            if(((i_42 != NULL) && (i_42 != t)))
              _fail(t);
            else
              i_42 = t;
            t = o_41;
            t = mark_buv_0_0(t);
            if(((s_42 != NULL) && (s_42 != t)))
              _fail(t);
            else
              s_42 = t;
            t = n_41;
            t = mark_build_vars_0_0(t);
            if(((u_42 != NULL) && (u_42 != t)))
              _fail(t);
            else
              u_42 = t;
            return(t);
          }
          t = scope_2_0(e_4, f_4, t);
          t = (ATerm) ATmakeAppl(sym_RDef_3, q_41, r_41, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_42), not_null(u_42), not_null(s_42)));
        }
      }
    }
  else
    {
      ATerm i_45 = NULL,j_45 = NULL,l_45 = NULL,s_45 = NULL,w_45 = NULL,x_45 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          q_41 = ATgetArgument(t, 0);
          r_41 = ATgetArgument(t, 1);
          s_41 = ATgetArgument(t, 2);
          t_41 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = t_41;
      if(match_cons(t, sym_Rule_3))
        {
          a_42 = ATgetArgument(t, 0);
          b_42 = ATgetArgument(t, 1);
          c_42 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_41;
      t = map_1_0(g_4, t);
      i_45 = t;
      t = t_41;
      t = free_vars_3_0(h_4, i_4, tboundin_3_0, t);
      x_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_45, i_45);
      t = diff_0_0(t);
      j_45 = t;
      {
        ATerm m_4 (ATerm t)
        {
          t = i_45;
          t = map_1_0(IntroduceBound_0_0, t);
          t = j_45;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = a_42;
          t = mark_match_vars_0_0(t);
          if(((l_45 != NULL) && (l_45 != t)))
            _fail(t);
          else
            l_45 = t;
          t = c_42;
          t = mark_buv_0_0(t);
          if(((s_45 != NULL) && (s_45 != t)))
            _fail(t);
          else
            s_45 = t;
          t = b_42;
          t = mark_build_vars_0_0(t);
          if(((w_45 != NULL) && (w_45 != t)))
            _fail(t);
          else
            w_45 = t;
          return(t);
        }
        t = scope_2_0(l_4, m_4, t);
        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_41, r_41, s_41, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_45), not_null(w_45), not_null(s_45)));
      }
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL;
  n_48 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_48);
  o_48 = t;
  t = term_q_26;
  p_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_48), term_q_26);
  t = k_9(n_4, o_48, p_48, t);
  t = n_48;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm v_48 = NULL;
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_48 = ATgetArgument(t, 0);
          {
            ATerm v_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_26);
      t = v_48;
    }
  else
    {
      t = t_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_48;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm d_9 (ATerm h_59, ATerm i_59, ATerm j_59, ATerm l_59, ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL;
  t = j_59;
  t = map_1_0(o_4, t);
  r_48 = t;
  {
    ATerm q_4 (ATerm t)
    {
      t = r_48;
      t = map_1_0(IntroduceBound_0_0, t);
      t = l_59;
      t = mark_buv_0_0(t);
      if(((s_48 != NULL) && (s_48 != t)))
        _fail(t);
      else
        s_48 = t;
      return(t);
    }
    t = scope_2_0(p_4, q_4, t);
    t = (ATerm) ATmakeAppl(sym_SDefT_4, h_59, i_59, j_59, not_null(s_48));
  }
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm r_49 = NULL,u_49 = NULL,x_49 = NULL,a_50 = NULL,b_50 = NULL,e_50 = NULL;
  r_49 = t;
  if(match_cons(t, sym__2))
    {
      u_49 = ATgetArgument(t, 0);
      b_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_50;
  if(match_cons(t, sym_Undefined_0))
    {
      t = u_49;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_w_26;
        }
      else
        {
          t = term_w_26;
        }
    }
  else
    {
      ATerm x_26 = t;
      int y_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm z_26 = ATgetArgument(t, 0);
              e_50 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(y_26);
          t = u_49;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_w_26;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  x_49 = ATgetArgument(t, 0);
                  a_50 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm a_27 = t;
                int c_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, a_50, e_50);
                    {
                      ATerm e_27 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm e_26 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              e_26 = ATgetArgument(t, 0);
                              if((e_26 != ATgetArgument(t, 1)))
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
                          t = e_27;
                        }
                      t = (ATerm) ATmakeAppl(sym_Defined_2, x_49, term_f_27);
                    }
                    ;
                    LocalPopChoice(c_27);
                  }
                else
                  {
                    t = a_27;
                    t = e_50;
                    if((a_50 != t))
                      {
                        _fail(t);
                      }
                    t = u_49;
                  }
              }
            }
        }
      else
        {
          t = x_26;
          t = u_49;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_w_26;
        }
    }
  return(t);
}
ATerm e_9 (ATerm s_57, ATerm t_57, ATerm r_57, ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
  t = term_s_23;
  w_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_23, s_57);
  t = j_10(w_50, s_57, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_50 = ATgetFirst((ATermList) t);
      {
        ATerm g_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_57, u_50);
  t = CompareEntries_0_0(t);
  v_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_57, (ATerm) ATinsert(CheckATermList(r_57), v_50));
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm n_51 = NULL,q_51 = NULL,r_51 = NULL,w_51 = NULL,c_52 = NULL;
  c_52 = t;
  if(match_cons(t, sym__2))
    {
      n_51 = ATgetArgument(t, 0);
      q_51 = ATgetArgument(t, 1);
      t = q_51;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_51 = ATgetFirst((ATermList) t);
          w_51 = (ATerm) ATgetNext((ATermList) t);
          t = r_51;
          {
            ATerm h_27 = t;
            int i_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm p_27 = ATgetArgument(t, 0);
                    ATerm t_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(i_27);
                t = n_51;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = c_52;
                  }
                else
                  {
                    ATerm u_27 = t;
                    int b_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_52;
                        t = e_9(n_51, r_51, w_51, t);
                        ;
                        LocalPopChoice(b_28);
                      }
                    else
                      {
                        t = u_27;
                        t = c_52;
                      }
                  }
              }
            else
              {
                t = h_27;
                t = n_51;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = c_52;
                  }
                else
                  {
                    t = c_52;
                  }
              }
          }
        }
      else
        {
          t = n_51;
          if(match_cons(t, sym_Scopes_0))
            {
              t = c_52;
            }
          else
            {
              t = c_52;
            }
        }
    }
  else
    {
      t = c_52;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
  t = map_1_0(r_4, t);
  k_51 = t;
  t = term_s_23;
  m_51 = t;
  t = SSL_table_destroy(m_51);
  t = term_s_23;
  l_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_23, k_51);
  t = f_9(l_51, k_51, t);
  t = k_51;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,m_53 = NULL;
  m_53 = t;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm g_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_28);
        t = m_53;
      }
    else
      {
        t = e_28;
        {
          ATerm i_28 = t;
          int j_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm q_28 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(j_28);
              t = m_53;
            }
          else
            {
              t = i_28;
              {
                ATerm v_28 = t;
                int w_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm b_29 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_28);
                    t = m_53;
                  }
                else
                  {
                    t = v_28;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm f_29 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = m_53;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    j_53 = t;
    t = m_53;
    t = SRTS_one(mark_buv_0_0, t);
    k_53 = t;
    t = j_53;
    t = isect_MarkVar_0_0(t);
    t = k_53;
  }
  return(t);
}
ATerm f_9 (ATerm o_28, ATerm n_28, ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm o_53 = NULL,s_53 = NULL;
    if(match_cons(t, sym__2))
      {
        o_53 = ATgetArgument(t, 0);
        s_53 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(o_28, o_53, s_53);
    t = (ATerm) ATmakeAppl(sym__3, o_28, o_53, s_53);
    return(t);
  }
  t = n_28;
  t = map_1_0(s_4, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_53 = NULL;
  ATerm t_4 (ATerm t)
  {
    ATerm v_53 = NULL,w_53 = NULL;
    v_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_53), v_53);
    t = j_10(not_null(t_53), v_53, t);
    w_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
    return(t);
  }
  if(((t_53 != NULL) && (t_53 != t)))
    _fail(t);
  else
    t_53 = t;
  t = SSL_table_keys(t_53);
  t = map_1_0(t_4, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_s_23;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm f_58, ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,v_54 = NULL;
  t = save_MarkVar_0_0(t);
  {
    ATerm u_4 (ATerm t)
    {
      ATerm b_56 (ATerm w_54, ATerm t)
      {
        ATerm x_54 = NULL,b_55 = NULL,d_55 = NULL,g_55 = NULL;
        t = w_54;
        if(match_cons(t, sym__2))
          {
            ATerm g_29 = ATgetArgument(t, 0);
            x_54 = g_29;
            if(match_cons(g_29, sym_Var_1))
              {
                b_55 = ATgetArgument(g_29, 0);
              }
            else
              _fail(t);
            {
              ATerm n_29 = ATgetArgument(t, 1);
              if(((ATgetType(n_29) == AT_LIST) && !(ATisEmpty(n_29))))
                {
                  ATerm o_29 = ATgetFirst((ATermList) n_29);
                  if(match_cons(o_29, sym_Defined_2))
                    {
                      d_55 = ATgetArgument(o_29, 0);
                      {
                        ATerm p_29 = ATgetArgument(o_29, 1);
                        if((ATgetSymbol((ATermAppl) p_29) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  g_55 = (ATerm) ATgetNext((ATermList) n_29);
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
            if((b_55 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(v_4, t);
          t = (ATerm) ATmakeAppl(sym__2, x_54, (ATerm) ATinsert(CheckATermList(g_55), (ATerm) ATmakeAppl(sym_Defined_2, d_55, term_f_27)));
        }
        return(t);
      }
      ATerm m_55 = NULL,o_55 = NULL;
      o_55 = t;
      {
        ATerm v_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                m_55 = ATgetArgument(t, 0);
                {
                  ATerm y_29 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(w_29);
            t = m_55;
            if(match_cons(t, sym_Scopes_0))
              {
                t = o_55;
              }
            else
              {
                ATerm b_30 = t;
                int f_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = b_56(o_55, t);
                    ;
                    LocalPopChoice(f_30);
                  }
                else
                  {
                    t = b_30;
                    t = o_55;
                  }
              }
          }
        else
          {
            t = v_29;
            {
              ATerm k_30 = t;
              int l_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_56(o_55, t);
                  ;
                  LocalPopChoice(l_30);
                }
              else
                {
                  t = k_30;
                  t = o_55;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(u_4, t);
    o_54 = t;
    t = term_s_23;
    v_54 = t;
    t = SSL_table_destroy(v_54);
    t = term_s_23;
    p_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_23, o_54);
    t = f_9(p_54, o_54, t);
    t = o_54;
  }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm h_57 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_57);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm n_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_30);
    }
  else
    {
      t = n_30;
      {
        ATerm w_57 = NULL,x_57 = NULL,a_58 = NULL,b_58 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_57 = ATgetArgument(t, 0);
            t = w_57;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                w_57 = ATgetArgument(t, 0);
                x_57 = ATgetArgument(t, 1);
                a_58 = ATgetArgument(t, 2);
                b_58 = ATgetArgument(t, 3);
                t = a_58;
                t = map_1_0(c_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    w_57 = ATgetArgument(t, 0);
                    x_57 = ATgetArgument(t, 1);
                    a_58 = ATgetArgument(t, 2);
                    b_58 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = a_58;
                t = map_1_0(d_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm v_58 = NULL;
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_58 = ATgetArgument(t, 0);
          {
            ATerm c_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_31);
      t = v_58;
    }
  else
    {
      t = a_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_58;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm q_61 = NULL;
  ATerm d_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_61 = ATgetArgument(t, 0);
          {
            ATerm r_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_31);
      t = q_61;
    }
  else
    {
      t = d_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_61;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,k_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,r_56 = NULL,s_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,d_57 = NULL,f_57 = NULL,g_57 = NULL,r_7 = NULL,q_7 = NULL;
  g_57 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_56 = ATgetArgument(t, 0);
      d_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_57);
  w_56 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, x_56, d_57);
  q_7 = t;
  t = SSLsetAnnotations(q_7, w_56);
  f_57 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_56 = ATgetArgument(t, 0);
      {
        ATerm s_31 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_56;
  t = free_vars_3_0(w_4, x_4, tboundin_3_0, t);
  f_56 = t;
  t = undefine_unbound_MarkVar_0_1(f_56, t);
  g_56 = t;
  t = f_57;
  if(match_cons(t, sym_Let_2))
    {
      n_56 = ATgetArgument(t, 0);
      o_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_57);
  k_56 = t;
  t = n_56;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm v_61 = NULL,w_61 = NULL,z_61 = NULL;
      v_61 = t;
      t = term_s_23;
      z_61 = t;
      t = SSL_table_destroy(z_61);
      t = term_s_23;
      w_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_s_23, g_56);
      t = f_9(w_61, g_56, t);
      t = v_61;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(e_5, t);
    p_56 = t;
    t = term_s_23;
    v_56 = t;
    t = SSL_table_destroy(v_56);
    t = term_s_23;
    s_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_23, g_56);
    t = f_9(s_56, g_56, t);
    t = o_56;
    t = mark_buv_0_0(t);
    r_56 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, p_56, r_56);
    r_7 = t;
    t = SSLsetAnnotations(r_7, k_56);
  }
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm w_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,v_7 = NULL;
      c_62 = t;
      if(match_cons(t, sym_Var_1))
        {
          b_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_62);
      a_62 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, b_62);
      v_7 = t;
      t = SSLsetAnnotations(v_7, a_62);
      LocalPopChoice(x_31);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = w_31;
      {
        ATerm b_32 = t;
        int c_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_62 = NULL,h_62 = NULL,m_62 = NULL,n_62 = NULL,w_7 = NULL;
            n_62 = t;
            if(match_cons(t, sym_App_2))
              {
                h_62 = ATgetArgument(t, 0);
                m_62 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_62);
            f_62 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, h_62, m_62);
            w_7 = t;
            t = SSLsetAnnotations(w_7, f_62);
            LocalPopChoice(c_32);
            {
              ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,x_7 = NULL;
              v_62 = t;
              if(match_cons(t, sym_App_2))
                {
                  r_62 = ATgetArgument(t, 0);
                  s_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_62);
              q_62 = t;
              t = r_62;
              t = mark_buv_0_0(t);
              t_62 = t;
              t = s_62;
              t = mark_build_vars_0_0(t);
              u_62 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, t_62, u_62);
              x_7 = t;
              t = SSLsetAnnotations(x_7, q_62);
            }
          }
        else
          {
            t = b_32;
            {
              ATerm g_32 = t;
              int i_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL,z_7 = NULL;
                  y_62 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      x_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_62);
                  w_62 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, x_62);
                  z_7 = t;
                  t = SSLsetAnnotations(z_7, w_62);
                  LocalPopChoice(i_32);
                  {
                    ATerm z_62 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,a_8 = NULL;
                    d_63 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        b_63 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(d_63);
                    z_62 = t;
                    t = b_63;
                    t = mark_buv_0_0(t);
                    c_63 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, c_63);
                    a_8 = t;
                    t = SSLsetAnnotations(a_8, z_62);
                  }
                }
              else
                {
                  t = g_32;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm g_9 (ATerm y_27, ATerm z_27, ATerm a_28, ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL,g_63 = NULL;
  f_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_27, z_27);
  t = j_10(y_27, z_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_32 = ATgetFirst((ATermList) t);
      e_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_63), a_28);
  g_63 = t;
  t = SSL_table_put(y_27, z_27, g_63);
  t = f_63;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL,l_63 = NULL,m_63 = NULL;
  h_63 = t;
  t = term_s_23;
  i_63 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_63);
  l_63 = t;
  t = term_q_32;
  m_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_23, (ATerm)ATmakeAppl(sym_Var_1, h_63), term_q_32);
  t = g_9(i_63, l_63, m_63, t);
  t = h_63;
  return(t);
}
ATerm j_9 (ATerm w_27, ATerm x_27, ATerm t)
{
  ATerm n_63 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_27, x_27);
  t = j_10(w_27, x_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_63 = ATgetFirst((ATermList) t);
      {
        ATerm r_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_63;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL;
  o_65 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_32 = t;
    int i_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_27 = NULL,n_27 = NULL,o_27 = NULL,d_28 = NULL;
        t = term_s_23;
        d_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_23, o_65);
        t = j_9(d_28, o_65, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm j_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_33) != ATmakeSymbol("k_1", 0, ATtrue)))
              _fail(t);
            j_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, p_65);
        n_27 = t;
        t = (ATerm) ATinsert(ATempty, j_27);
        o_27 = t;
        t = SSLsetAnnotations(n_27, o_27);
        ;
        LocalPopChoice(i_33);
      }
    else
      {
        t = w_32;
        {
          ATerm k_33 = t;
          int l_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_28 = NULL,m_28 = NULL,p_28 = NULL,e_29 = NULL;
              t = term_s_23;
              e_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_s_23, o_65);
              t = j_9(e_29, o_65, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm m_33 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) m_33) != ATmakeSymbol("i_1", 0, ATtrue)))
                    _fail(t);
                  l_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, p_65);
              m_28 = t;
              t = (ATerm) ATinsert(ATempty, l_28);
              p_28 = t;
              t = SSLsetAnnotations(m_28, p_28);
              ;
              LocalPopChoice(l_33);
            }
          else
            {
              t = k_33;
              {
                ATerm q_29 = NULL,s_29 = NULL,t_29 = NULL,c_30 = NULL;
                t = term_s_23;
                c_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_23, o_65);
                t = j_9(c_30, o_65, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm n_33 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_33) != ATmakeSymbol("g_1", 0, ATtrue)))
                      _fail(t);
                    q_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, p_65);
                s_29 = t;
                t = (ATerm) ATinsert(ATempty, q_29);
                t_29 = t;
                t = SSLsetAnnotations(s_29, t_29);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,m_8 = NULL;
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      ;
      LocalPopChoice(p_33);
    }
  else
    {
      t = o_33;
    }
  f_66 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_66);
  c_66 = t;
  t = d_66;
  t = DeclareBound_0_0(t);
  e_66 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_66);
  m_8 = t;
  t = SSLsetAnnotations(m_8, c_66);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_66 = NULL,u_66 = NULL,v_66 = NULL,o_8 = NULL;
      v_66 = t;
      if(match_cons(t, sym_Var_1))
        {
          u_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_66);
      s_66 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, u_66);
      o_8 = t;
      t = SSLsetAnnotations(o_8, s_66);
      LocalPopChoice(r_33);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = q_33;
      {
        ATerm s_33 = t;
        int t_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,s_9 = NULL;
            b_67 = t;
            if(match_cons(t, sym_App_2))
              {
                z_66 = ATgetArgument(t, 0);
                a_67 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_67);
            y_66 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, z_66, a_67);
            s_9 = t;
            t = SSLsetAnnotations(s_9, y_66);
            LocalPopChoice(t_33);
            {
              ATerm f_67 = NULL,j_67 = NULL,k_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,s_10 = NULL;
              t_67 = t;
              if(match_cons(t, sym_App_2))
                {
                  j_67 = ATgetArgument(t, 0);
                  k_67 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_67);
              f_67 = t;
              t = j_67;
              t = mark_buv_0_0(t);
              r_67 = t;
              t = k_67;
              t = mark_build_vars_0_0(t);
              s_67 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, r_67, s_67);
              s_10 = t;
              t = SSLsetAnnotations(s_10, f_67);
            }
          }
        else
          {
            t = s_33;
            {
              ATerm u_33 = t;
              int v_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_67 = NULL,x_67 = NULL,z_67 = NULL,z_10 = NULL;
                  z_67 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      x_67 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_67);
                  u_67 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, x_67);
                  z_10 = t;
                  t = SSLsetAnnotations(z_10, u_67);
                  LocalPopChoice(v_33);
                  {
                    ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,a_11 = NULL;
                    h_68 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        f_68 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(h_68);
                    e_68 = t;
                    t = f_68;
                    t = mark_buv_0_0(t);
                    g_68 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, g_68);
                    a_11 = t;
                    t = SSLsetAnnotations(a_11, e_68);
                  }
                }
              else
                {
                  t = u_33;
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
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_70 = NULL,x_70 = NULL;
      s_70 = t;
      if(match_cons(t, sym_Match_1))
        {
          x_70 = ATgetArgument(t, 0);
          {
            ATerm m_30 = NULL,y_30 = NULL,i_11 = NULL;
            t = SSLgetAnnotations(s_70);
            m_30 = t;
            t = x_70;
            t = mark_match_vars_0_0(t);
            y_30 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, y_30);
            i_11 = t;
            t = SSLsetAnnotations(i_11, m_30);
          }
        }
      else
        {
          ATerm o_31 = NULL,q_31 = NULL,j_11 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              x_70 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_70);
          o_31 = t;
          t = x_70;
          t = mark_build_vars_0_0(t);
          q_31 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, q_31);
          j_11 = t;
          t = SSLsetAnnotations(j_11, o_31);
        }
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
            t = mark_scope_0_0(t);
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
                  t = mark_let_0_0(t);
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
                        t = mark_traversal_0_0(t);
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
                              ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL;
                              y_70 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  z_70 = ATgetArgument(t, 0);
                                  a_71 = ATgetArgument(t, 1);
                                  b_71 = ATgetArgument(t, 2);
                                  c_71 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = y_70;
                              t = d_9(z_70, a_71, b_71, c_71, t);
                              ;
                              LocalPopChoice(g_34);
                            }
                          else
                            {
                              t = f_34;
                              {
                                ATerm h_34 = t;
                                int i_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    ;
                                    LocalPopChoice(i_34);
                                  }
                                else
                                  {
                                    t = h_34;
                                    {
                                      ATerm j_34 = t;
                                      int k_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL,s_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL;
                                          s_71 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              v_71 = ATgetArgument(t, 0);
                                              t = v_71;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  m_71 = ATgetArgument(t, 0);
                                                  n_71 = ATgetArgument(t, 1);
                                                  o_71 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = s_71;
                                              t = c_9(m_71, n_71, o_71, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  v_71 = ATgetArgument(t, 0);
                                                  t = v_71;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      m_71 = ATgetArgument(t, 0);
                                                      n_71 = ATgetArgument(t, 1);
                                                      o_71 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = s_71;
                                                  t = b_9(m_71, n_71, o_71, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      v_71 = ATgetArgument(t, 0);
                                                      w_71 = ATgetArgument(t, 1);
                                                      x_71 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = s_71;
                                                  t = a_9(v_71, w_71, x_71, t);
                                                }
                                            }
                                          ;
                                          LocalPopChoice(k_34);
                                        }
                                      else
                                        {
                                          t = j_34;
                                          {
                                            ATerm l_34 = t;
                                            int m_34 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                ;
                                                LocalPopChoice(m_34);
                                              }
                                            else
                                              {
                                                t = l_34;
                                                {
                                                  ATerm n_34 = t;
                                                  int o_34 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      ;
                                                      LocalPopChoice(o_34);
                                                    }
                                                  else
                                                    {
                                                      t = n_34;
                                                      {
                                                        ATerm p_34 = t;
                                                        int q_34 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm u_72 = NULL;
                                                            u_72 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm r_34 = ATgetArgument(t, 0);
                                                                ATerm s_34 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = u_72;
                                                            t = z_8(t);
                                                            ;
                                                            LocalPopChoice(q_34);
                                                          }
                                                        else
                                                          {
                                                            t = p_34;
                                                            {
                                                              ATerm t_34 = t;
                                                              int u_34 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(u_34);
                                                                }
                                                              else
                                                                {
                                                                  t = t_34;
                                                                  {
                                                                    ATerm z_34 = t;
                                                                    int a_35 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(a_35);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_34;
                                                                        {
                                                                          ATerm b_35 = t;
                                                                          int c_35 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(c_35);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_35;
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
ATerm k_9 (ATerm a_83 (ATerm), ATerm d_27, ATerm b_27, ATerm t)
{
  ATerm b_73 = NULL,e_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,p_73 = NULL;
  h_73 = t;
  t = a_83(t);
  b_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_73, d_27, b_27);
  t = k_10(b_73, d_27, b_27, t);
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_73 = NULL;
        t = term_f_35;
        q_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_73, term_f_35);
        t = j_10(b_73, q_73, t);
        ;
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_73 = ATgetFirst((ATermList) t);
        g_73 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_f_35;
    i_73 = t;
    t = (ATerm) ATinsert(CheckATermList(g_73), (ATerm) ATinsert(CheckATermList(e_73), d_27));
    p_73 = t;
    t = SSL_table_put(b_73, i_73, p_73);
    t = h_73;
  }
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL;
  r_73 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_73);
  s_73 = t;
  t = term_i_35;
  t_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, r_73), term_i_35);
  t = k_9(f_5, s_73, t_73, t);
  t = r_73;
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm u_73 = NULL,x_73 = NULL,y_73 = NULL,c_74 = NULL,e_74 = NULL,v_11 = NULL;
  e_74 = t;
  if(match_cons(t, sym_Scope_2))
    {
      x_73 = ATgetArgument(t, 0);
      y_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_74);
  u_73 = t;
  t = y_73;
  {
    ATerm h_5 (ATerm t)
    {
      ATerm h_74 = NULL;
      h_74 = t;
      t = x_73;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = h_74;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(g_5, h_5, t);
    c_74 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, x_73, c_74);
    v_11 = t;
    t = SSLsetAnnotations(v_11, u_73);
  }
  return(t);
}
ATerm tboundin_3_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL,i_78 = NULL,j_78 = NULL;
  i_78 = t;
  if(match_cons(t, sym_Scope_2))
    {
      j_78 = ATgetArgument(t, 0);
      z_77 = ATgetArgument(t, 1);
      {
        ATerm e_32 = NULL,k_32 = NULL,l_32 = NULL,x_11 = NULL;
        t = SSLgetAnnotations(i_78);
        e_32 = t;
        t = j_78;
        t = v_92(t);
        k_32 = t;
        t = z_77;
        t = t_92(t);
        l_32 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, k_32, l_32);
        x_11 = t;
        t = SSLsetAnnotations(x_11, e_32);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          j_78 = ATgetArgument(t, 0);
          z_77 = ATgetArgument(t, 1);
          a_78 = ATgetArgument(t, 2);
          b_78 = ATgetArgument(t, 3);
          {
            ATerm w_33 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,y_11 = NULL;
            t = SSLgetAnnotations(i_78);
            w_33 = t;
            t = j_78;
            t = v_92(t);
            v_34 = t;
            t = z_77;
            t = v_92(t);
            w_34 = t;
            t = a_78;
            t = v_92(t);
            x_34 = t;
            t = b_78;
            t = t_92(t);
            y_34 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, v_34, w_34, x_34, y_34);
            y_11 = t;
            t = SSLsetAnnotations(y_11, w_33);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              j_78 = ATgetArgument(t, 0);
              z_77 = ATgetArgument(t, 1);
              a_78 = ATgetArgument(t, 2);
              b_78 = ATgetArgument(t, 3);
              {
                ATerm q_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,e_36 = NULL,z_11 = NULL;
                t = SSLgetAnnotations(i_78);
                q_35 = t;
                t = j_78;
                t = v_92(t);
                y_35 = t;
                t = z_77;
                t = v_92(t);
                z_35 = t;
                t = a_78;
                t = v_92(t);
                a_36 = t;
                t = b_78;
                t = t_92(t);
                e_36 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, y_35, z_35, a_36, e_36);
                z_11 = t;
                t = SSLsetAnnotations(z_11, q_35);
              }
            }
          else
            {
              ATerm p_36 = NULL,s_36 = NULL,a_12 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  j_78 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_78);
              p_36 = t;
              t = j_78;
              t = t_92(t);
              s_36 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, s_36);
              a_12 = t;
              t = SSLsetAnnotations(a_12, p_36);
            }
        }
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm w_78 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_78);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm j_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_35);
    }
  else
    {
      t = j_35;
      {
        ATerm f_79 = NULL,i_79 = NULL,j_79 = NULL,k_79 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            f_79 = ATgetArgument(t, 0);
            t = f_79;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                f_79 = ATgetArgument(t, 0);
                i_79 = ATgetArgument(t, 1);
                j_79 = ATgetArgument(t, 2);
                k_79 = ATgetArgument(t, 3);
                t = j_79;
                t = map_1_0(o_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    f_79 = ATgetArgument(t, 0);
                    i_79 = ATgetArgument(t, 1);
                    j_79 = ATgetArgument(t, 2);
                    k_79 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = j_79;
                t = map_1_0(p_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm v_79 = NULL;
  ATerm l_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_79 = ATgetArgument(t, 0);
          {
            ATerm n_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_35);
      t = v_79;
    }
  else
    {
      t = l_35;
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
ATerm p_5 (ATerm t)
{
  ATerm i_80 = NULL;
  ATerm o_35 = t;
  int p_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_80 = ATgetArgument(t, 0);
          {
            ATerm r_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_35);
      t = i_80;
    }
  else
    {
      t = o_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_80;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(j_5, k_5, tboundin_3_0, t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm x_80 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_80);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(t_35);
    }
  else
    {
      t = s_35;
      {
        ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_80 = ATgetArgument(t, 0);
            t = z_80;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                z_80 = ATgetArgument(t, 0);
                a_81 = ATgetArgument(t, 1);
                b_81 = ATgetArgument(t, 2);
                c_81 = ATgetArgument(t, 3);
                t = b_81;
                t = map_1_0(w_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    z_80 = ATgetArgument(t, 0);
                    a_81 = ATgetArgument(t, 1);
                    b_81 = ATgetArgument(t, 2);
                    c_81 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = b_81;
                t = map_1_0(x_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm k_81 = NULL;
  ATerm w_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_81 = ATgetArgument(t, 0);
          {
            ATerm d_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_35);
      t = k_81;
    }
  else
    {
      t = w_35;
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
ATerm x_5 (ATerm t)
{
  ATerm y_81 = NULL;
  ATerm f_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_81 = ATgetArgument(t, 0);
          {
            ATerm h_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_36);
      t = y_81;
    }
  else
    {
      t = f_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_81;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm q_80 = NULL,u_80 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      u_80 = ATgetArgument(t, 0);
      t = u_80;
      if(match_cons(t, sym_Rule_3))
        {
          q_80 = ATgetArgument(t, 0);
          {
            ATerm i_36 = ATgetArgument(t, 1);
          }
          {
            ATerm j_36 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = q_80;
      t = free_vars_3_0(r_5, s_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          u_80 = ATgetArgument(t, 0);
          {
            ATerm k_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_80;
    }
  return(t);
}
ATerm p_9 (ATerm d_79 (ATerm), ATerm v_21, ATerm u_21, ATerm t)
{
  ATerm r_82 (ATerm t)
  {
    ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL;
    m_82 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_21;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_82 = ATgetFirst((ATermList) t);
            o_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_36 = t;
          int n_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_82;
              {
                ATerm y_5 (ATerm t)
                {
                  t = u_21;
                  return(t);
                }
                t = q_9(d_79, y_5, n_82, o_82, t);
                t = r_82(t);
              }
              ;
              LocalPopChoice(n_36);
            }
          else
            {
              t = m_36;
              {
                ATerm d_37 = NULL,g_37 = NULL,w_13 = NULL;
                t = SSLgetAnnotations(m_82);
                d_37 = t;
                t = o_82;
                t = r_82(t);
                g_37 = t;
                t = (ATerm) ATinsert(CheckATermList(g_37), n_82);
                w_13 = t;
                t = SSLsetAnnotations(w_13, d_37);
              }
            }
        }
      }
    return(t);
  }
  t = v_21;
  t = r_82(t);
  return(t);
}
ATerm foldr_3_0 (ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm t)
{
  ATerm u_82 = NULL,v_82 = NULL,b_83 = NULL;
  u_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_82;
      t = q_81(t);
    }
  else
    {
      ATerm g_83 = NULL,h_83 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_82 = ATgetFirst((ATermList) t);
          b_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_82;
      t = s_81(t);
      g_83 = t;
      t = b_83;
      t = foldr_3_0(q_81, r_81, s_81, t);
      h_83 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_83, h_83);
      t = r_81(t);
    }
  return(t);
}
ATerm q_9 (ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm z_21, ATerm y_21, ATerm t)
{
  t = h_79(t);
  {
    ATerm c_6 (ATerm t)
    {
      ATerm k_83 = NULL;
      k_83 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_21, k_83);
      t = g_79(t);
      return(t);
    }
    t = fetch_1_0(c_6, t);
    t = y_21;
  }
  return(t);
}
ATerm r_9 (ATerm y_78 (ATerm), ATerm t_21, ATerm s_21, ATerm t)
{
  ATerm a_84 (ATerm t)
  {
    ATerm v_83 = NULL,w_83 = NULL,x_83 = NULL;
    v_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_83;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_83 = ATgetFirst((ATermList) t);
            x_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_36 = t;
          int q_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_83;
              {
                ATerm d_6 (ATerm t)
                {
                  t = s_21;
                  return(t);
                }
                t = q_9(y_78, d_6, w_83, x_83, t);
                t = a_84(t);
              }
              ;
              LocalPopChoice(q_36);
            }
          else
            {
              t = o_36;
              {
                ATerm f_38 = NULL,j_38 = NULL,q_14 = NULL;
                t = SSLgetAnnotations(v_83);
                f_38 = t;
                t = x_83;
                t = a_84(t);
                j_38 = t;
                t = (ATerm) ATinsert(CheckATermList(j_38), w_83);
                q_14 = t;
                t = SSLsetAnnotations(q_14, f_38);
              }
            }
        }
      }
    return(t);
  }
  t = t_21;
  t = a_84(t);
  return(t);
}
ATerm genzip_4_0 (ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm t)
{
  ATerm i_84 (ATerm t)
  {
    ATerm t_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_86(t);
        ;
        LocalPopChoice(u_36);
      }
    else
      {
        t = t_36;
        {
          ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL,f_16 = NULL;
          t = x_86(t);
          h_84 = t;
          if(match_cons(t, sym__2))
            {
              d_84 = ATgetArgument(t, 0);
              e_84 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_84);
          c_84 = t;
          t = d_84;
          t = z_86(t);
          f_84 = t;
          t = e_84;
          t = i_84(t);
          g_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_84, g_84);
          f_16 = t;
          t = SSLsetAnnotations(f_16, c_84);
          t = y_86(t);
        }
      }
    return(t);
  }
  t = i_84(t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_36 = ATgetArgument(t, 0);
      if(((ATgetType(v_36) != AT_LIST) || !(ATisEmpty(v_36))))
        _fail(t);
      {
        ATerm w_36 = ATgetArgument(t, 1);
        if(((ATgetType(w_36) != AT_LIST) || !(ATisEmpty(w_36))))
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
  ATerm p_84 = NULL,q_84 = NULL,r_84 = NULL,s_84 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_36 = ATgetArgument(t, 0);
      if(((ATgetType(x_36) == AT_LIST) && !(ATisEmpty(x_36))))
        {
          p_84 = ATgetFirst((ATermList) x_36);
          q_84 = (ATerm) ATgetNext((ATermList) x_36);
        }
      else
        _fail(t);
      {
        ATerm z_36 = ATgetArgument(t, 1);
        if(((ATgetType(z_36) == AT_LIST) && !(ATisEmpty(z_36))))
          {
            r_84 = ATgetFirst((ATermList) z_36);
            s_84 = (ATerm) ATgetNext((ATermList) z_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_84, r_84), (ATerm) ATmakeAppl(sym__2, q_84, s_84));
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm t_84 = NULL,u_84 = NULL;
  if(match_cons(t, sym__2))
    {
      t_84 = ATgetArgument(t, 0);
      u_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_84), t_84);
  return(t);
}
ATerm v_9 (ATerm c_603, ATerm h_603, ATerm p_57, ATerm t)
{
  ATerm k_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL;
  t = SSL_explode_term(h_603);
  if(match_cons(t, sym__2))
    {
      k_84 = ATgetArgument(t, 0);
      m_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(c_603);
  if(match_cons(t, sym__2))
    {
      if((k_84 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_84, m_84);
  t = genzip_4_0(e_6, h_6, i_6, _id, t);
  n_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_84, p_57);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm t)
{
  ATerm y_84 (ATerm t)
  {
    ATerm c_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_98(t);
        ;
        LocalPopChoice(e_37);
      }
    else
      {
        t = c_37;
        t = h_98(t);
        t = y_84(t);
      }
    return(t);
  }
  t = y_84(t);
  return(t);
}
ATerm for_3_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm t)
{
  t = j_98(t);
  t = while_not_2_0(k_98, l_98, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm f_85 = NULL;
  f_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_85);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,j_16 = NULL;
  j_85 = t;
  if(match_cons(t, sym__2))
    {
      h_85 = ATgetArgument(t, 0);
      i_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_85);
  g_85 = t;
  t = i_85;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_85, i_85);
  j_16 = t;
  t = SSLsetAnnotations(j_16, g_85);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL;
  c_86 = t;
  if(match_cons(t, sym__2))
    {
      d_86 = ATgetArgument(t, 0);
      e_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_86;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_86 = ATgetFirst((ATermList) t);
      g_86 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_37 = t;
        int j_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_86(d_86, e_86, c_86, t);
            ;
            LocalPopChoice(j_37);
          }
        else
          {
            t = f_37;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_86), f_86), g_86);
          }
      }
    }
  else
    {
      t = q_86(d_86, e_86, c_86, t);
    }
  return(t);
}
ATerm q_86 (ATerm k_85, ATerm l_85, ATerm m_85, ATerm t)
{
  ATerm n_85 = NULL,q_85 = NULL,k_16 = NULL,t_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL;
  t = SSLgetAnnotations(m_85);
  n_85 = t;
  t = l_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_85 = ATgetFirst((ATermList) t);
      w_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_85;
  if(match_cons(t, sym__2))
    {
      u_85 = ATgetArgument(t, 0);
      v_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_85;
        if((u_85 != t))
          {
            _fail(t);
          }
        t = w_85;
        ;
        LocalPopChoice(n_37);
      }
    else
      {
        t = k_37;
        t = l_85;
        t = v_9(u_85, v_85, w_85, t);
      }
    q_85 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_85, q_85);
    k_16 = t;
    t = SSLsetAnnotations(k_16, n_85);
  }
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm p_86 = NULL;
  if(match_cons(t, sym__2))
    {
      p_86 = ATgetArgument(t, 0);
      if((p_86 != ATgetArgument(t, 1)))
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
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(m_6, n_6, p_6, t);
      ;
      LocalPopChoice(p_37);
    }
  else
    {
      t = o_37;
      {
        ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL;
        k_86 = t;
        if(match_cons(t, sym__2))
          {
            l_86 = ATgetArgument(t, 0);
            m_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_86;
        t = r_9(t_6, l_86, m_86, t);
      }
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL;
  if(match_cons(t, sym__2))
    {
      c_39 = ATgetArgument(t, 0);
      d_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(i_7, c_39, d_39, t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm g_39 = NULL;
  if(match_cons(t, sym__2))
    {
      g_39 = ATgetArgument(t, 0);
      if((g_39 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL;
  if(match_cons(t, sym__2))
    {
      q_39 = ATgetArgument(t, 0);
      r_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(n_7, q_39, r_39, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm t_39 = NULL;
  if(match_cons(t, sym__2))
    {
      t_39 = ATgetArgument(t, 0);
      if((t_39 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm x_95 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm j_87 (ATerm t)
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_95(t);
        ;
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
        {
          ATerm s_37 = t;
          int t_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_86 = NULL,t_86 = NULL,q_38 = NULL,u_38 = NULL;
              s_86 = t;
              t = w_95(t);
              t_86 = t;
              t = s_86;
              {
                ATerm w_6 (ATerm t)
                {
                  ATerm v_86 = NULL;
                  t = j_87(t);
                  v_86 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_86, t_86);
                  t = diff_0_0(t);
                  return(t);
                }
                t = x_95(w_6, j_87, y_6, t);
                u_38 = t;
                t = SSL_explode_term(u_38);
                if(match_cons(t, sym__2))
                  {
                    ATerm v_37 = ATgetArgument(t, 0);
                    q_38 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_38;
                t = foldr_3_0(c_7, d_7, _id, t);
              }
              ;
              LocalPopChoice(t_37);
            }
          else
            {
              t = s_37;
              {
                ATerm j_39 = NULL,k_39 = NULL;
                k_39 = t;
                t = SSL_explode_term(k_39);
                if(match_cons(t, sym__2))
                  {
                    ATerm w_37 = ATgetArgument(t, 0);
                    j_39 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_39;
                t = foldr_3_0(k_7, m_7, j_87, t);
              }
            }
        }
      }
    return(t);
  }
  t = j_87(t);
  return(t);
}
ATerm topdown_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    t = topdown_1_0(e_83, t);
    return(t);
  }
  t = e_83(t);
  t = SRTS_all(o_7, t);
  return(t);
}
ATerm x_9 (ATerm q_27, ATerm r_27, ATerm t)
{
  ATerm k_87 = NULL,l_87 = NULL;
  l_87 = t;
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
        t = j_10(q_27, r_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_37 = ATgetFirst((ATermList) t);
            k_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_37);
        t = SSL_table_put(q_27, r_27, k_87);
        t = (ATerm) ATmakeAppl(sym__3, q_27, r_27, k_87);
      }
    else
      {
        t = x_37;
        t = SSL_table_remove(q_27, r_27);
        t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
      }
    t = l_87;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm m_87 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL;
  p_87 = t;
  t = x_82(t);
  o_87 = t;
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_87 = NULL;
        t = term_f_35;
        r_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_87, term_f_35);
        t = j_10(o_87, r_87, t);
        ;
        LocalPopChoice(b_38);
      }
    else
      {
        t = a_38;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_87 = ATgetFirst((ATermList) t);
        m_87 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_f_35;
    q_87 = t;
    t = SSL_table_put(o_87, q_87, m_87);
    t = n_87;
    {
      ATerm p_7 (ATerm t)
      {
        ATerm s_87 = NULL;
        s_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_87, s_87);
        t = x_9(o_87, s_87, t);
        return(t);
      }
      t = map_1_0(p_7, t);
      t = p_87;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm t)
{
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_89(t);
      t = y_89(t);
      ;
      LocalPopChoice(d_38);
    }
  else
    {
      t = c_38;
      t = y_89(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL;
  v_87 = t;
  t = w_82(t);
  u_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_87, term_f_35);
  {
    ATerm e_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_88 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_38 = ATgetArgument(t, 0);
            ATerm i_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_35;
        c_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_87, term_f_35);
        t = j_10(u_87, c_88, t);
        ;
        LocalPopChoice(g_38);
      }
    else
      {
        t = e_38;
        t = (ATerm) ATempty;
      }
    w_87 = t;
    t = term_f_35;
    x_87 = t;
    t = (ATerm) ATinsert(CheckATermList(w_87), (ATerm) ATempty);
    y_87 = t;
    t = SSL_table_put(u_87, x_87, y_87);
    t = v_87;
  }
  return(t);
}
ATerm scope_2_0 (ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm t)
{
  ATerm s_7 (ATerm t)
  {
    t = end_scope_1_0(y_82, t);
    return(t);
  }
  t = begin_scope_1_0(y_82, t);
  t = restore_always_2_0(z_82, s_7, t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_m_16;
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = scope_2_0(b_8, c_8, t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL;
  t = topdown_1_0(e_8, t);
  n_88 = t;
  t = free_vars_3_0(f_8, h_8, tboundin_3_0, t);
  m_88 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, m_88, n_88);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm k_38 = ATgetArgument(t, 0);
      l_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_88;
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        ;
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        {
          ATerm n_38 = t;
          int o_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              ;
              LocalPopChoice(o_38);
            }
          else
            {
              t = n_38;
              {
                ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    b_90 = ATgetArgument(t, 0);
                    c_90 = ATgetArgument(t, 1);
                    d_90 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = l_88;
                t = y_8(b_90, c_90, d_90, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm u_88 = NULL,v_88 = NULL;
  v_88 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_88 = ATgetArgument(t, 0);
      {
        ATerm p_38 = t;
        int s_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_40 = NULL,f_40 = NULL,r_16 = NULL;
            t = SSLgetAnnotations(v_88);
            d_40 = t;
            t = u_88;
            if(match_cons(t, sym_ListVar_1))
              {
                f_40 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, f_40);
            r_16 = t;
            t = SSLsetAnnotations(r_16, d_40);
            ;
            LocalPopChoice(s_38);
          }
        else
          {
            t = p_38;
            t = v_88;
          }
      }
    }
  else
    {
      t = v_88;
    }
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm z_88 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_88);
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm t_38 = t;
  int v_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_38);
    }
  else
    {
      t = t_38;
      {
        ATerm b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_89 = ATgetArgument(t, 0);
            t = b_89;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_89 = ATgetArgument(t, 0);
                c_89 = ATgetArgument(t, 1);
                d_89 = ATgetArgument(t, 2);
                e_89 = ATgetArgument(t, 3);
                t = d_89;
                t = map_1_0(i_8, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    b_89 = ATgetArgument(t, 0);
                    c_89 = ATgetArgument(t, 1);
                    d_89 = ATgetArgument(t, 2);
                    e_89 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = d_89;
                t = map_1_0(j_8, t);
              }
          }
      }
    }
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm m_89 = NULL;
  ATerm w_38 = t;
  int b_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_89 = ATgetArgument(t, 0);
          {
            ATerm e_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_39);
      t = m_89;
    }
  else
    {
      t = w_38;
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
ATerm j_8 (ATerm t)
{
  ATerm v_89 = NULL;
  ATerm i_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_89 = ATgetArgument(t, 0);
          {
            ATerm n_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_39);
      t = v_89;
    }
  else
    {
      t = i_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_89;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm k_88 = NULL;
  k_88 = t;
  t = scope_2_0(u_7, y_7, t);
  t = k_88;
  return(t);
}
ATerm filter_1_0 (ATerm w_88 (ATerm), ATerm t)
{
  ATerm y_90 = NULL,z_90 = NULL,a_91 = NULL;
  y_90 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_90;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_90 = ATgetFirst((ATermList) t);
          a_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_40 = NULL,a_41 = NULL,b_41 = NULL,t_16 = NULL;
            t = SSLgetAnnotations(y_90);
            x_40 = t;
            t = z_90;
            t = w_88(t);
            a_41 = t;
            t = a_91;
            t = filter_1_0(w_88, t);
            b_41 = t;
            t = (ATerm) ATinsert(CheckATermList(b_41), a_41);
            t_16 = t;
            t = SSLsetAnnotations(t_16, x_40);
            ;
            LocalPopChoice(s_39);
          }
        else
          {
            t = p_39;
            t = a_91;
            t = filter_1_0(w_88, t);
          }
      }
    }
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL,d_17 = NULL;
  s_91 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      r_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_91);
  q_91 = t;
  t = r_91;
  {
    ATerm u_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_91;
        ;
        LocalPopChoice(v_39);
      }
    else
      {
        t = u_39;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_91;
      }
    t = (ATerm) ATmakeAppl(sym_Overlays_1, r_91);
    d_17 = t;
    t = SSLsetAnnotations(d_17, q_91);
  }
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = Cons_2_0(q_8, s_8, t);
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm u_91 = NULL,v_91 = NULL,w_91 = NULL,e_17 = NULL;
  w_91 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_91);
  u_91 = t;
  t = v_91;
  {
    ATerm w_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_91;
        ;
        LocalPopChoice(x_39);
      }
    else
      {
        t = w_39;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_91;
      }
    t = (ATerm) ATmakeAppl(sym_Strategies_1, v_91);
    e_17 = t;
    t = SSLsetAnnotations(e_17, u_91);
  }
  return(t);
}
ATerm s_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm f_91 = NULL,g_91 = NULL,h_91 = NULL,i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL,m_91 = NULL,n_91 = NULL,o_91 = NULL,p_91 = NULL,h_17 = NULL,g_17 = NULL,a_17 = NULL;
  p_91 = t;
  if(match_cons(t, sym_Specification_1))
    {
      g_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_91);
  f_91 = t;
  t = g_91;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_91 = ATgetFirst((ATermList) t);
      j_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_91);
  h_91 = t;
  t = i_91;
  if(match_cons(t, sym_Signature_1))
    {
      n_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_91);
  m_91 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, n_91);
  a_17 = t;
  t = SSLsetAnnotations(a_17, m_91);
  o_91 = t;
  t = j_91;
  t = Cons_2_0(n_8, p_8, t);
  k_91 = t;
  t = (ATerm) ATinsert(CheckATermList(k_91), o_91);
  g_17 = t;
  t = SSLsetAnnotations(g_17, h_91);
  l_91 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_91);
  h_17 = t;
  t = SSLsetAnnotations(h_17, f_91);
  return(t);
}
ATerm z_9 (ATerm x_46, ATerm y_46, ATerm t)
{
  ATerm y_91 = NULL;
  t = SSL_fputc(x_46, y_46);
  y_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_91);
  return(t);
}
ATerm a_10 (ATerm l_50, ATerm m_50, ATerm t)
{
  ATerm z_91 = NULL;
  t = SSL_write_term_to_stream_text(l_50, m_50);
  z_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_91);
  return(t);
}
ATerm c_10 (ATerm o_102 (ATerm), ATerm e_476, ATerm p_50, ATerm t)
{
  ATerm a_92 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_476, term_y_39);
  t = open_stream_0_0(t);
  a_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_92, p_50);
  t = o_102(t);
  t = fclose_0_0(t);
  t = p_50;
  return(t);
}
ATerm b_10 (ATerm h_50, ATerm i_50, ATerm t)
{
  ATerm b_92 = NULL;
  t = SSL_write_term_to_stream_baf(h_50, i_50);
  b_92 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_92);
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_39 = ATgetArgument(t, 0);
      if(match_cons(z_39, sym_Stream_1))
        {
          e_92 = ATgetArgument(z_39, 0);
        }
      else
        _fail(t);
      f_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_10(e_92, f_92, t);
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm g_92 = NULL,h_92 = NULL,i_92 = NULL,j_92 = NULL,k_92 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_40 = ATgetArgument(t, 0);
      if(match_cons(a_40, sym_Stream_1))
        {
          j_92 = ATgetArgument(a_40, 0);
        }
      else
        _fail(t);
      k_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_10(j_92, k_92, t);
  g_92 = t;
  t = term_b_40;
  h_92 = t;
  t = g_92;
  if(match_cons(t, sym_Stream_1))
    {
      i_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_40, g_92);
  t = z_9(h_92, i_92, t);
  return(t);
}
ATerm output_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  ATerm c_92 = NULL,d_92 = NULL;
  t = x_106(t);
  d_92 = t;
  {
    ATerm e_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_40;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(g_40);
      }
    else
      {
        t = e_40;
        t = term_i_40;
      }
    c_92 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_92, d_92);
    {
      ATerm j_40 = t;
      int k_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_l_40;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, c_92, d_92);
          LocalPopChoice(k_40);
          if(match_cons(t, sym__2))
            {
              ATerm m_40 = ATgetArgument(t, 0);
              ATerm n_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_10(m_9, c_92, d_92, t);
        }
      else
        {
          t = j_40;
          if(match_cons(t, sym__2))
            {
              ATerm o_40 = ATgetArgument(t, 0);
              ATerm p_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_10(n_9, c_92, d_92, t);
        }
    }
  }
  return(t);
}
ATerm b_93 (ATerm s_92, ATerm t)
{
  t = SSL_fclose(s_92);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_92 = NULL,z_92 = NULL;
  z_92 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_92 = ATgetArgument(t, 0);
      {
        ATerm q_40 = t;
        int r_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_92);
            ;
            LocalPopChoice(r_40);
          }
        else
          {
            t = q_40;
            t = b_93(z_92, t);
          }
      }
    }
  else
    {
      t = b_93(z_92, t);
    }
  return(t);
}
ATerm d_10 (ATerm n_50, ATerm t)
{
  t = SSL_read_term_from_stream(n_50);
  return(t);
}
ATerm e_10 (ATerm z_46, ATerm a_47, ATerm t)
{
  ATerm c_93 = NULL;
  t = SSL_fopen(z_46, a_47);
  c_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_93);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_93 = NULL;
  t = SSL_stdin_stream();
  d_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_93);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_93 = NULL;
  t = SSL_stdout_stream();
  e_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_93);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_93 = NULL;
  t = SSL_stderr_stream();
  f_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_93);
  return(t);
}
ATerm m_94 (ATerm l_93, ATerm t)
{
  ATerm m_93 = NULL;
  t = SSL_explode_term(l_93);
  if(match_cons(t, sym__2))
    {
      ATerm s_40 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_40) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_40 = ATgetArgument(t, 1);
        if(((ATgetType(u_40) == AT_LIST) && !(ATisEmpty(u_40))))
          {
            m_93 = ATgetFirst((ATermList) u_40);
            {
              ATerm v_40 = (ATerm) ATgetNext((ATermList) u_40);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_93;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_93;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_93;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_93;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm n_94 (ATerm p_93, ATerm q_93, ATerm r_93, ATerm t)
{
  ATerm s_93 = NULL,t_93 = NULL,u_93 = NULL,x_93 = NULL,r_17 = NULL;
  t = SSLgetAnnotations(r_93);
  u_93 = t;
  t = p_93;
  if(match_cons(t, sym_Path_1))
    {
      x_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_93, q_93);
  r_17 = t;
  t = SSLsetAnnotations(r_17, u_93);
  if(match_cons(t, sym__2))
    {
      s_93 = ATgetArgument(t, 0);
      t_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10(s_93, t_93, t);
  return(t);
}
ATerm o_94 (ATerm z_93, ATerm a_94, ATerm b_94, ATerm t)
{
  ATerm c_94 = NULL,d_94 = NULL,e_94 = NULL,h_94 = NULL,s_17 = NULL;
  t = SSLgetAnnotations(b_94);
  e_94 = t;
  t = SSL_is_string(z_93);
  h_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_94, a_94);
  s_17 = t;
  t = SSLsetAnnotations(s_17, e_94);
  if(match_cons(t, sym__2))
    {
      c_94 = ATgetArgument(t, 0);
      d_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10(c_94, d_94, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm j_94 = NULL,k_94 = NULL,l_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_40 = ATgetArgument(t, 0);
      ATerm y_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  j_94 = t;
  if(match_cons(t, sym__2))
    {
      k_94 = ATgetArgument(t, 0);
      l_94 = ATgetArgument(t, 1);
      {
        ATerm z_40 = t;
        int c_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_94(j_94, t);
            ;
            LocalPopChoice(c_41);
          }
        else
          {
            t = z_40;
            {
              ATerm d_41 = t;
              int e_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_94(k_94, l_94, j_94, t);
                  ;
                  LocalPopChoice(e_41);
                }
              else
                {
                  t = d_41;
                  t = o_94(k_94, l_94, j_94, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_94(j_94, t);
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = term_f_41;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL;
  ATerm g_41 = t;
  int h_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_94 = NULL;
      s_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_94, term_i_41);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_41);
    }
  else
    {
      t = g_41;
      t = debug_1_0(t_9, t);
      _fail(t);
    }
  q_94 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_10(r_94, t);
  p_94 = t;
  t = q_94;
  t = fclose_0_0(t);
  t = p_94;
  return(t);
}
ATerm input_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm j_41 = t;
  int k_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_41;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_41);
    }
  else
    {
      t = j_41;
      t = term_p_41;
    }
  t = ReadFromFile_0_0(t);
  t = y_106(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL;
  u_94 = t;
  t = term_u_41;
  t = whoami_0_0(t);
  v_94 = t;
  t = term_g_19;
  x_94 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_41), v_94), term_v_41);
  y_94 = t;
  t = SSL_printnl(x_94, y_94);
  t = term_y_41;
  w_94 = t;
  t = SSL_exit(w_94);
  t = u_94;
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm a_95 = NULL;
  a_95 = t;
  if(match_string(t, "-k"))
    {
      t = a_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_95;
    }
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm b_95 = NULL,c_95 = NULL,d_95 = NULL;
  b_95 = t;
  t = SSL_string_to_int(b_95);
  c_95 = t;
  t = term_z_41;
  d_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_41, c_95);
  t = m_10(d_95, c_95, t);
  t = b_95;
  return(t);
}
ATerm t_10 (ATerm t)
{
  t = term_d_42;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_9, o_10, t_10, t);
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm f_95 = NULL;
  f_95 = t;
  if(match_string(t, "-S"))
    {
      t = f_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_95;
    }
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL;
  t = term_e_42;
  g_95 = t;
  t = term_f_42;
  h_95 = t;
  t = term_h_42;
  t = m_10(g_95, h_95, t);
  t = term_j_42;
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = term_l_42;
  return(t);
}
ATerm d_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm i_95 = NULL,j_95 = NULL,k_95 = NULL;
  i_95 = t;
  t = SSL_string_to_int(i_95);
  j_95 = t;
  t = term_e_42;
  k_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_42, j_95);
  t = m_10(k_95, j_95, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_95);
  return(t);
}
ATerm g_11 (ATerm t)
{
  t = term_m_42;
  return(t);
}
ATerm h_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm l_95 = NULL,m_95 = NULL;
  t = term_n_42;
  l_95 = t;
  t = term_u_41;
  m_95 = t;
  t = term_o_42;
  t = m_10(l_95, m_95, t);
  t = term_r_42;
  return(t);
}
ATerm q_11 (ATerm t)
{
  t = term_t_42;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_42 = t;
  int y_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_10, w_10, c_11, t);
      ;
      LocalPopChoice(y_42);
    }
  else
    {
      t = v_42;
      {
        ATerm z_42 = t;
        int a_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_11, f_11, g_11, t);
            ;
            LocalPopChoice(a_43);
          }
        else
          {
            t = z_42;
            t = Option_3_0(h_11, l_11, q_11, t);
          }
      }
    }
  return(t);
}
ATerm m_10 (ATerm o_51, ATerm p_51, ATerm t)
{
  ATerm n_95 = NULL;
  t = term_b_43;
  n_95 = t;
  t = SSL_table_put(n_95, o_51, p_51);
  t = (ATerm) ATmakeAppl(sym__3, term_b_43, o_51, p_51);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm q_95 = NULL,r_95 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_95 = NULL,t_95 = NULL,u_95 = NULL;
      t = term_u_41;
      t = f_0(t);
      s_95 = t;
      t = term_c_43;
      t_95 = t;
      t = term_e_43;
      u_95 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_43, term_e_43, s_95);
      t = k_10(t_95, u_95, s_95, t);
      _fail(t);
    }
  else
    {
      ATerm b_96 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_95 = ATgetFirst((ATermList) t);
          r_95 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_95;
      t = b_0(t);
      t = term_u_41;
      t = d_0(t);
      b_96 = t;
      t = (ATerm) ATinsert(CheckATermList(r_95), b_96);
    }
  return(t);
}
ATerm w_11 (ATerm t)
{
  ATerm d_96 = NULL;
  d_96 = t;
  if(match_string(t, "-o"))
    {
      t = d_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_96;
    }
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm e_96 = NULL,f_96 = NULL;
  e_96 = t;
  t = term_h_40;
  f_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_40, e_96);
  t = m_10(f_96, e_96, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_96);
  return(t);
}
ATerm g_12 (ATerm t)
{
  t = term_f_43;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_11, f_12, g_12, t);
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm h_96 = NULL;
  h_96 = t;
  if(match_string(t, "-i"))
    {
      t = h_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_96;
    }
  return(t);
}
ATerm n_12 (ATerm t)
{
  ATerm i_96 = NULL,j_96 = NULL;
  i_96 = t;
  t = term_l_41;
  j_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_41, i_96);
  t = m_10(j_96, i_96, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_96);
  return(t);
}
ATerm v_12 (ATerm t)
{
  t = term_h_43;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_12, n_12, v_12, t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm e_97 (ATerm t)
  {
    ATerm b_97 = NULL,c_97 = NULL,d_97 = NULL;
    d_97 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_97 = ATgetFirst((ATermList) t);
        c_97 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_41 = NULL,k_42 = NULL,v_17 = NULL;
          t = SSLgetAnnotations(d_97);
          x_41 = t;
          t = c_97;
          t = e_97(t);
          k_42 = t;
          t = (ATerm) ATinsert(CheckATermList(k_42), b_97);
          v_17 = t;
          t = SSLsetAnnotations(v_17, x_41);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_97;
        t = e_80(t);
      }
    return(t);
  }
  t = e_97(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_96 = NULL,m_96 = NULL,n_96 = NULL;
  l_96 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_96;
    }
  else
    {
      ATerm y_12 (ATerm t)
      {
        t = not_null(n_96);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_96 = ATgetFirst((ATermList) t);
          if(((n_96 != NULL) && (n_96 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_96 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_96;
      t = at_end_1_0(y_12, t);
    }
  return(t);
}
ATerm q_97 (ATerm i_97, ATerm t)
{
  ATerm j_97 = NULL;
  t = SSL_explode_term(i_97);
  if(match_cons(t, sym__2))
    {
      ATerm i_43 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_43) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_97;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_97 = NULL,m_97 = NULL,n_97 = NULL;
  n_97 = t;
  if(match_cons(t, sym__2))
    {
      l_97 = ATgetArgument(t, 0);
      m_97 = ATgetArgument(t, 1);
      {
        ATerm j_43 = t;
        int k_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_13 (ATerm t)
            {
              t = m_97;
              return(t);
            }
            t = l_97;
            t = at_end_1_0(j_13, t);
            ;
            LocalPopChoice(k_43);
          }
        else
          {
            t = j_43;
            t = q_97(n_97, t);
          }
      }
    }
  else
    {
      t = q_97(n_97, t);
    }
  return(t);
}
ATerm y_9 (ATerm u_51, ATerm t_51, ATerm t)
{
  ATerm r_97 = NULL,s_97 = NULL,t_97 = NULL;
  t = u_51;
  {
    ATerm l_43 = t;
    int q_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(q_43);
      }
    else
      {
        t = l_43;
        t = (ATerm) ATempty;
      }
    s_97 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_51, s_97);
    t = conc_0_0(t);
    r_97 = t;
    t = term_b_43;
    t_97 = t;
    t = SSL_table_put(t_97, u_51, r_97);
    t = (ATerm) ATmakeAppl(sym__3, term_b_43, u_51, r_97);
  }
  return(t);
}
ATerm k_10 (ATerm l_27, ATerm m_27, ATerm k_27, ATerm t)
{
  ATerm v_97 = NULL,w_97 = NULL,x_97 = NULL;
  v_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
  {
    ATerm r_43 = t;
    int s_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_43 = ATgetArgument(t, 0);
            ATerm u_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
        t = j_10(l_27, m_27, t);
        ;
        LocalPopChoice(s_43);
      }
    else
      {
        t = r_43;
        t = (ATerm) ATempty;
      }
    w_97 = t;
    t = (ATerm) ATinsert(CheckATermList(w_97), k_27);
    x_97 = t;
    t = SSL_table_put(l_27, m_27, x_97);
    t = v_97;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm e_98 = NULL,f_98 = NULL,m_98 = NULL,n_98 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL;
      t = term_u_41;
      t = n_0(t);
      o_98 = t;
      t = term_c_43;
      p_98 = t;
      t = term_e_43;
      q_98 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_43, term_e_43, o_98);
      t = k_10(p_98, q_98, o_98, t);
      _fail(t);
    }
  else
    {
      ATerm u_98 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_98 = ATgetFirst((ATermList) t);
          f_98 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_98;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_98 = ATgetFirst((ATermList) t);
          n_98 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_98;
      t = k_0(t);
      t = m_98;
      t = m_0(t);
      u_98 = t;
      t = (ATerm) ATinsert(CheckATermList(n_98), u_98);
    }
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm w_98 = NULL;
  w_98 = t;
  if(match_string(t, "--warning"))
    {
      t = w_98;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = w_98;
    }
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm x_98 = NULL,y_98 = NULL,z_98 = NULL;
  x_98 = t;
  t = term_v_43;
  y_98 = t;
  t = (ATerm) ATinsert(ATempty, x_98);
  z_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_43, (ATerm) ATinsert(ATempty, x_98));
  t = y_9(y_98, z_98, t);
  t = term_u_41;
  return(t);
}
ATerm p_13 (ATerm t)
{
  t = term_w_43;
  return(t);
}
ATerm q_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_13 (ATerm t)
{
  ATerm a_99 = NULL,b_99 = NULL,c_99 = NULL;
  a_99 = t;
  t = term_n_20;
  b_99 = t;
  t = term_f_42;
  c_99 = t;
  t = term_x_43;
  t = m_10(b_99, c_99, t);
  t = a_99;
  return(t);
}
ATerm t_13 (ATerm t)
{
  t = term_z_43;
  return(t);
}
ATerm x_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_13 (ATerm t)
{
  ATerm d_99 = NULL,e_99 = NULL,f_99 = NULL;
  d_99 = t;
  t = term_n_20;
  e_99 = t;
  t = term_y_41;
  f_99 = t;
  t = term_a_44;
  t = m_10(e_99, f_99, t);
  t = d_99;
  return(t);
}
ATerm a_14 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm b_44 = t;
  int c_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(k_13, m_13, p_13, t);
      ;
      LocalPopChoice(c_44);
    }
  else
    {
      t = b_44;
      {
        ATerm d_44 = t;
        int e_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(q_13, r_13, t_13, t);
            ;
            LocalPopChoice(e_44);
          }
        else
          {
            t = d_44;
            t = Option_3_0(x_13, y_13, a_14, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL,j_99 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_41;
  t = whoami_0_0(t);
  g_99 = t;
  t = term_g_19;
  i_99 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_44), g_99);
  j_99 = t;
  t = SSL_printnl(i_99, j_99);
  t = term_y_41;
  h_99 = t;
  t = SSL_exit(h_99);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_44;
  t = get_config_0_0(t);
  return(t);
}
ATerm f_10 (ATerm p_25, ATerm q_25, ATerm t)
{
  ATerm h_44 = t;
  int i_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_25, q_25);
      ;
      LocalPopChoice(i_44);
    }
  else
    {
      t = h_44;
      t = SSL_addr(p_25, q_25);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm t)
{
  ATerm l_99 = NULL,m_99 = NULL,n_99 = NULL;
  l_99 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_99;
      t = o_81(t);
    }
  else
    {
      ATerm q_99 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_99 = ATgetFirst((ATermList) t);
          n_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_99;
      t = foldr_2_0(o_81, p_81, t);
      q_99 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_99, q_99);
      t = p_81(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm f_14 (ATerm t)
{
  t = term_f_42;
  return(t);
}
ATerm g_14 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL;
  if(match_cons(t, sym__2))
    {
      w_42 = ATgetArgument(t, 0);
      x_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(w_42, x_42, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_99 = NULL,p_42 = NULL,q_42 = NULL;
  t = times_0_0(t);
  q_42 = t;
  t = SSL_explode_term(q_42);
  if(match_cons(t, sym__2))
    {
      ATerm k_44 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_42;
  t = foldr_2_0(f_14, g_14, t);
  t_99 = t;
  t = SSL_TicksToSeconds(t_99);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL;
  e_100 = t;
  if(match_cons(t, sym__2))
    {
      f_100 = ATgetArgument(t, 0);
      g_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_44 = t;
    int p_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_100;
        if((f_100 != t))
          {
            _fail(t);
          }
        t = e_100;
        ;
        LocalPopChoice(p_44);
      }
    else
      {
        t = l_44;
        t = (ATerm) ATmakeAppl(sym__2, f_100, g_100);
        {
          ATerm q_44 = t;
          int r_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_100, g_100);
              ;
              LocalPopChoice(r_44);
            }
          else
            {
              t = q_44;
              t = SSL_gtr(f_100, g_100);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_100, g_100);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_103 (ATerm), ATerm t)
{
  ATerm k_100 = NULL;
  k_100 = t;
  {
    ATerm s_44 = t;
    int t_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_100 = NULL;
        t = term_e_42;
        t = get_config_0_0(t);
        m_100 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_100, term_y_41);
        t = geq_0_0(t);
        t = k_100;
        t = y_103(t);
        ;
        LocalPopChoice(t_44);
      }
    else
      {
        t = s_44;
        t = k_100;
      }
  }
  return(t);
}
ATerm h_14 (ATerm t)
{
  ATerm o_100 = NULL,p_100 = NULL,r_100 = NULL,s_100 = NULL;
  t = run_time_0_0(t);
  o_100 = t;
  t = term_u_41;
  t = whoami_0_0(t);
  p_100 = t;
  t = term_g_19;
  r_100 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_44), o_100), term_u_44), p_100);
  s_100 = t;
  t = SSL_printnl(r_100, s_100);
  t = (ATerm) ATmakeAppl(sym__2, term_g_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_44), o_100), term_u_44), p_100));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_100 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_42;
  t_100 = t;
  t = SSL_exit(t_100);
  return(t);
}
ATerm n_14 (ATerm t)
{
  ATerm b_101 = NULL,c_101 = NULL;
  c_101 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_101;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_101 = ATgetArgument(t, 0);
          {
            ATerm n_43 = NULL,x_17 = NULL;
            t = SSLgetAnnotations(c_101);
            n_43 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_101);
            x_17 = t;
            t = SSLsetAnnotations(x_17, n_43);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_101;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_106 (ATerm), ATerm t)
{
  ATerm w_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_44;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_44);
    }
  else
    {
      t = w_44;
      t = fetch_1_0(n_14, t);
    }
  t = o_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm f_101 = NULL,g_101 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_101 = ATgetFirst((ATermList) t);
      g_101 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_101 = NULL,l_101 = NULL;
        ATerm r_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_101)), not_null(l_101));
          return(t);
        }
        t = g_101;
        t = i_0(t);
        if(((k_101 != NULL) && (k_101 != t)))
          _fail(t);
        else
          k_101 = t;
        t = f_101;
        t = g_0(t);
        if(((l_101 != NULL) && (l_101 != t)))
          _fail(t);
        else
          l_101 = t;
        t = g_101;
        t = reverse_acc_2_0(g_0, r_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_41;
      t = i_0(t);
    }
  return(t);
}
ATerm s_14 (ATerm t)
{
  ATerm p_101 = NULL,q_101 = NULL,r_101 = NULL,f_18 = NULL;
  r_101 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_101);
  p_101 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_101);
  f_18 = t;
  t = SSLsetAnnotations(f_18, p_101);
  return(t);
}
ATerm u_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_14 (ATerm t)
{
  ATerm t_101 = NULL;
  t_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_101), term_a_45);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_101 = NULL,o_101 = NULL;
  ATerm b_45 = t;
  int c_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_44;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_45);
    }
  else
    {
      t = b_45;
      t = fetch_1_0(s_14, t);
    }
  t = term_d_45;
  t = echo_0_0(t);
  t = term_c_43;
  n_101 = t;
  t = term_e_43;
  o_101 = t;
  t = term_e_45;
  t = j_10(n_101, o_101, t);
  t = reverse_acc_2_0(_id, u_14, t);
  t = map_1_0(x_14, t);
  return(t);
}
ATerm fetch_1_0 (ATerm y_79 (ATerm), ATerm t)
{
  ATerm s_102 (ATerm t)
  {
    ATerm p_102 = NULL,q_102 = NULL,r_102 = NULL;
    p_102 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_102 = ATgetFirst((ATermList) t);
        r_102 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_45 = t;
      int g_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_44 = NULL,m_44 = NULL,t_18 = NULL;
          t = SSLgetAnnotations(p_102);
          j_44 = t;
          t = q_102;
          t = y_79(t);
          m_44 = t;
          t = (ATerm) ATinsert(CheckATermList(r_102), m_44);
          t_18 = t;
          t = SSLsetAnnotations(t_18, j_44);
          ;
          LocalPopChoice(g_45);
        }
      else
        {
          t = f_45;
          {
            ATerm h_45 = NULL,o_45 = NULL,v_18 = NULL;
            t = SSLgetAnnotations(p_102);
            h_45 = t;
            t = r_102;
            t = s_102(t);
            o_45 = t;
            t = (ATerm) ATinsert(CheckATermList(o_45), q_102);
            v_18 = t;
            t = SSLsetAnnotations(v_18, h_45);
          }
        }
    }
    return(t);
  }
  t = s_102(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_102 = NULL,x_102 = NULL,y_102 = NULL;
  w_102 = t;
  {
    ATerm k_45 = t;
    int m_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_102;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_45 = ATgetFirst((ATermList) t);
                ATerm p_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_102;
          }
        ;
        LocalPopChoice(m_45);
      }
    else
      {
        t = k_45;
        t = (ATerm) ATinsert(ATempty, w_102);
      }
    x_102 = t;
    t = term_i_40;
    y_102 = t;
    t = SSL_printnl(y_102, x_102);
    t = w_102;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_44;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm i_10 (ATerm n_44, ATerm o_44, ATerm t)
{
  t = SSL_strcat(n_44, o_44);
  return(t);
}
ATerm debug_1_0 (ATerm m_102 (ATerm), ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL;
  c_103 = t;
  t = m_102(t);
  d_103 = t;
  t = term_g_19;
  e_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_103), d_103);
  f_103 = t;
  t = SSL_printnl(e_103, f_103);
  t = c_103;
  return(t);
}
ATerm map_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm u_103 (ATerm t)
  {
    ATerm r_103 = NULL,s_103 = NULL,t_103 = NULL;
    r_103 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_103;
      }
    else
      {
        ATerm d_46 = NULL,m_46 = NULL,n_46 = NULL,y_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_103 = ATgetFirst((ATermList) t);
            t_103 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_103);
        d_46 = t;
        t = s_103;
        t = o_79(t);
        m_46 = t;
        t = t_103;
        t = u_103(t);
        n_46 = t;
        t = (ATerm) ATinsert(CheckATermList(n_46), m_46);
        y_18 = t;
        t = SSLsetAnnotations(y_18, d_46);
      }
    return(t);
  }
  t = u_103(t);
  return(t);
}
ATerm y_14 (ATerm t)
{
  ATerm q_45 = t;
  int r_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(r_45);
    }
  else
    {
      t = q_45;
    }
  return(t);
}
ATerm c_15 (ATerm t)
{
  t = term_t_45;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_45 = t;
  int v_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_104 = NULL;
      d_104 = t;
      t = SSL_is_string(d_104);
      ;
      LocalPopChoice(v_45);
    }
  else
    {
      t = u_45;
      {
        ATerm y_45 = t;
        int z_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_14, t);
            ;
            LocalPopChoice(z_45);
          }
        else
          {
            t = y_45;
            {
              ATerm j_104 = NULL,k_104 = NULL,l_104 = NULL;
              j_104 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_104 = ATgetArgument(t, 0);
                  t = k_104;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_104 = ATgetArgument(t, 0);
                      t = k_104;
                      {
                        ATerm a_46 = t;
                        int b_46 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_46);
                          }
                        else
                          {
                            t = a_46;
                            t = debug_1_0(c_15, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_104 = NULL,q_104 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_104 = ATgetArgument(t, 0);
                          l_104 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_104;
                      t = eval_config_0_0(t);
                      p_104 = t;
                      t = l_104;
                      t = eval_config_0_0(t);
                      q_104 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_104, q_104);
                      t = i_10(p_104, q_104, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm j_10 (ATerm c_29, ATerm d_29, ATerm t)
{
  t = SSL_table_get(c_29, d_29);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm u_104 = NULL,v_104 = NULL;
  u_104 = t;
  t = term_b_43;
  v_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_43, u_104);
  t = j_10(v_104, u_104, t);
  {
    ATerm c_46 = t;
    int e_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_104 = NULL,x_104 = NULL;
        t = eval_config_0_0(t);
        w_104 = t;
        t = term_b_43;
        x_104 = t;
        t = SSL_table_put(x_104, u_104, w_104);
        t = w_104;
        ;
        LocalPopChoice(e_46);
      }
    else
      {
        t = c_46;
      }
  }
  return(t);
}
ATerm e_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_15 (ATerm t)
{
  ATerm a_105 = NULL,b_105 = NULL;
  t = term_f_46;
  a_105 = t;
  t = term_u_41;
  b_105 = t;
  t = term_h_46;
  t = m_10(a_105, b_105, t);
  return(t);
}
ATerm h_15 (ATerm t)
{
  t = term_i_46;
  return(t);
}
ATerm i_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_15 (ATerm t)
{
  ATerm c_105 = NULL,d_105 = NULL,e_105 = NULL,f_105 = NULL;
  t = term_f_46;
  e_105 = t;
  t = term_u_41;
  f_105 = t;
  t = term_h_46;
  t = m_10(e_105, f_105, t);
  t = term_k_46;
  c_105 = t;
  t = term_u_41;
  d_105 = t;
  t = term_o_46;
  t = m_10(c_105, d_105, t);
  t = term_p_46;
  return(t);
}
ATerm o_15 (ATerm t)
{
  t = term_q_46;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_46 = t;
  int v_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_15, f_15, h_15, t);
      ;
      LocalPopChoice(v_46);
    }
  else
    {
      t = t_46;
      t = Option_3_0(i_15, l_15, o_15, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_65 (ATerm), ATerm t_65 (ATerm), ATerm t)
{
  ATerm g_105 = NULL,h_105 = NULL,i_105 = NULL,j_105 = NULL,k_105 = NULL,l_105 = NULL,h_19 = NULL;
  l_105 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_105 = ATgetFirst((ATermList) t);
      i_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_105);
  g_105 = t;
  t = h_105;
  t = s_65(t);
  j_105 = t;
  t = i_105;
  t = t_65(t);
  k_105 = t;
  t = (ATerm) ATinsert(CheckATermList(k_105), j_105);
  h_19 = t;
  t = SSLsetAnnotations(h_19, g_105);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_108 (ATerm), ATerm t)
{
  ATerm q_105 = NULL,r_105 = NULL,s_105 = NULL,t_105 = NULL,v_105 = NULL,w_105 = NULL,r_19 = NULL;
  q_105 = t;
  {
    ATerm w_46 = t;
    int b_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_47;
        t = r_108(t);
        ;
        LocalPopChoice(b_47);
      }
    else
      {
        t = w_46;
      }
    t = q_105;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_105 = ATgetFirst((ATermList) t);
        t_105 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_105);
    r_105 = t;
    t = term_g_44;
    w_105 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_44, s_105);
    t = m_10(w_105, s_105, t);
    t = t_105;
    {
      ATerm g_106 (ATerm t)
      {
        ATerm d_47 = t;
        int e_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_47 = t;
            int g_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_105 = NULL;
                z_105 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_105;
                ;
                LocalPopChoice(g_47);
              }
            else
              {
                t = f_47;
                t = r_108(t);
                t = Cons_2_0(_id, g_106, t);
              }
            ;
            LocalPopChoice(e_47);
          }
        else
          {
            t = d_47;
            {
              ATerm c_106 = NULL,d_106 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_106 = ATgetFirst((ATermList) t);
                  d_106 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_106), (ATerm) ATmakeAppl(sym_Undefined_1, c_106));
            }
          }
        return(t);
      }
      t = g_106(t);
      v_105 = t;
      t = (ATerm) ATinsert(CheckATermList(v_105), (ATerm) ATmakeAppl(sym_Program_1, s_105));
      r_19 = t;
      t = SSLsetAnnotations(r_19, r_105);
    }
  }
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm z_106 = NULL;
  z_106 = t;
  if(match_string(t, "--help"))
    {
      t = z_106;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_106;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_106;
        }
    }
  return(t);
}
ATerm t_15 (ATerm t)
{
  ATerm a_107 = NULL,b_107 = NULL;
  t = term_y_44;
  a_107 = t;
  t = term_u_41;
  b_107 = t;
  t = term_h_47;
  t = m_10(a_107, b_107, t);
  t = term_i_47;
  return(t);
}
ATerm u_15 (ATerm t)
{
  t = term_j_47;
  return(t);
}
ATerm y_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_108 (ATerm), ATerm t)
{
  ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL,p_106 = NULL,u_106 = NULL,v_106 = NULL,w_106 = NULL;
  n_106 = t;
  t = term_c_43;
  u_106 = t;
  t = term_e_43;
  v_106 = t;
  t = (ATerm) ATempty;
  w_106 = t;
  t = SSL_table_put(u_106, v_106, w_106);
  t = n_106;
  {
    ATerm p_15 (ATerm t)
    {
      ATerm k_47 = t;
      int l_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_108(t);
          ;
          LocalPopChoice(l_47);
        }
      else
        {
          t = k_47;
          {
            ATerm m_47 = t;
            int o_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_15, t_15, u_15, t);
                ;
                LocalPopChoice(o_47);
              }
            else
              {
                t = m_47;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_15, t);
    {
      ATerm p_47 = t;
      int q_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_107 = NULL;
          i_107 = t;
          {
            ATerm s_47 = t;
            int t_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_47 = NULL;
                t = i_107;
                {
                  ATerm u_47 = t;
                  int w_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_y_44;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(w_47);
                    }
                  else
                    {
                      t = u_47;
                      t = fetch_1_0(y_15, t);
                    }
                  t = i_107;
                  t = default_system_usage_0_0(t);
                  t = term_f_42;
                  n_47 = t;
                  t = SSL_exit(n_47);
                }
                ;
                LocalPopChoice(t_47);
              }
            else
              {
                t = s_47;
                {
                  ATerm v_47 = NULL;
                  t = term_f_46;
                  t = get_config_0_0(t);
                  t = i_107;
                  t = default_system_about_0_0(t);
                  t = term_f_42;
                  v_47 = t;
                  t = SSL_exit(v_47);
                }
              }
          }
          ;
          LocalPopChoice(q_47);
        }
      else
        {
          t = p_47;
          {
            ATerm x_47 = t;
            int y_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_107 = NULL,k_107 = NULL,l_107 = NULL;
                ATerm z_15 (ATerm t)
                {
                  ATerm m_107 = NULL,n_107 = NULL,o_107 = NULL,c_20 = NULL;
                  o_107 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      n_107 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_107);
                  m_107 = t;
                  t = n_107;
                  if(((l_106 != NULL) && (l_106 != t)))
                    _fail(t);
                  else
                    l_106 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, n_107);
                  c_20 = t;
                  t = SSLsetAnnotations(c_20, m_107);
                  return(t);
                }
                t = fetch_1_0(z_15, t);
                t = term_g_19;
                k_107 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_106)), term_z_47);
                l_107 = t;
                t = SSL_printnl(k_107, l_107);
                t = (ATerm) ATmakeAppl(sym__2, term_g_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_106)), term_z_47));
                t = default_system_usage_0_0(t);
                t = term_y_41;
                j_107 = t;
                t = SSL_exit(j_107);
                ;
                LocalPopChoice(y_47);
              }
            else
              {
                t = x_47;
              }
          }
        }
      m_106 = t;
      t = term_c_43;
      p_106 = t;
      t = SSL_table_destroy(p_106);
      t = m_106;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm t)
{
  ATerm t_107 = NULL,u_107 = NULL,v_107 = NULL,w_107 = NULL;
  t = parse_options_1_0(q_106, t);
  t_107 = t;
  t = term_a_48;
  w_107 = t;
  t = SSL_table_create(w_107);
  t = term_a_48;
  u_107 = t;
  t = term_b_48;
  v_107 = t;
  t = SSL_table_put(u_107, v_107, t_107);
  t = t_107;
  t = s_106(t);
  {
    ATerm c_48 = t;
    int d_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_106, t);
        ;
        LocalPopChoice(d_48);
      }
    else
      {
        t = c_48;
        {
          ATerm f_48 = t;
          int g_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_106(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_48);
            }
          else
            {
              t = f_48;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm b_16 (ATerm t)
{
  ATerm h_48 = t;
  int i_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = stratego_warnings_options_0_0(t);
      ;
      LocalPopChoice(i_48);
    }
  else
    {
      t = h_48;
      {
        ATerm j_48 = t;
        int k_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(k_48);
          }
        else
          {
            t = j_48;
            {
              ATerm l_48 = t;
              int m_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(m_48);
                }
              else
                {
                  t = l_48;
                  {
                    ATerm q_48 = t;
                    int t_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(e_16, g_16, h_16, t);
                        ;
                        LocalPopChoice(t_48);
                      }
                    else
                      {
                        t = q_48;
                        {
                          ATerm u_48 = t;
                          int w_48 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(w_48);
                            }
                          else
                            {
                              t = u_48;
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
ATerm c_16 (ATerm t)
{
  t = input_1_0(i_16, t);
  return(t);
}
ATerm e_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_16 (ATerm t)
{
  ATerm y_107 = NULL,z_107 = NULL;
  t = term_l_40;
  y_107 = t;
  t = term_u_41;
  z_107 = t;
  t = term_x_48;
  t = m_10(y_107, z_107, t);
  t = term_y_48;
  return(t);
}
ATerm h_16 (ATerm t)
{
  t = term_z_48;
  return(t);
}
ATerm i_16 (ATerm t)
{
  t = output_1_0(l_16, t);
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm b_108 = NULL;
  b_108 = t;
  t = spec_use_def_0_0(t);
  t = b_108;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(b_16, default_usage_0_0, _id, c_16, t);
  return(t);
}
