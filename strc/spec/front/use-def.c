#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_RDecT_3;
Symbol sym_GenDynRules_1;
Symbol sym_UndefineDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_AddDynRule_2;
Symbol sym_DynRuleId_1;
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
Symbol sym_Overlay_3;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Hashtable_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Some_1;
Symbol sym_DynamicRules_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
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
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
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
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
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
}
ATerm term_k_60;
ATerm term_j_60;
ATerm term_i_60;
ATerm term_n_59;
ATerm term_j_59;
ATerm term_i_59;
ATerm term_e_59;
ATerm term_j_58;
ATerm term_i_58;
ATerm term_f_58;
ATerm term_e_58;
ATerm term_o_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_g_57;
ATerm term_f_57;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_c_57;
ATerm term_u_56;
ATerm term_s_56;
ATerm term_n_56;
ATerm term_m_56;
ATerm term_l_56;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_x_55;
ATerm term_u_55;
ATerm term_t_55;
ATerm term_c_55;
ATerm term_b_55;
ATerm term_x_54;
ATerm term_q_54;
ATerm term_m_54;
ATerm term_k_54;
ATerm term_g_54;
ATerm term_f_54;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_i_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_w_51;
ATerm term_v_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_y_50;
ATerm term_u_50;
ATerm term_r_50;
ATerm term_o_50;
ATerm term_h_50;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_f_39;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_x_31;
ATerm term_e_31;
ATerm term_y_30;
ATerm term_r_30;
ATerm term_m_30;
ATerm term_x_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_l_25;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_k_22;
ATerm term_e_22;
ATerm term_s_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_g_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_a_21;
ATerm term_w_20;
ATerm term_a_20;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_d_18;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("z_0", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("c_1", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("t_0", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__2, term_d_18, (ATerm) ATempty);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym__2, term_f_18, (ATerm) ATempty);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_m_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("o_1", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Defined_2, term_m_30, term_r_30);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym_Defined_2, term_c_36, term_r_30);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("m_1", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym_Defined_2, term_i_39, term_j_39);
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_r_50);
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_d_51);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_a_52);
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(sym__2, term_m_52, term_n_52);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_52);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym__2, term_w_52, term_d_52);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(sym__2, term_m_22, term_n_52);
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(sym__2, term_m_22, term_i_52);
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_b_55);
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_m_52);
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_f_56);
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(sym__2, term_i_53, term_m_53);
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(sym__2, term_c_57, term_d_52);
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(sym__2, term_f_57, term_d_52);
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(sym__2, term_f_56, term_d_52);
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(sym__3, term_i_53, term_m_53, (ATerm) ATempty);
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_c_57);
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_59));
  term_n_59 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(sym__2, term_d_51, term_d_52);
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm p_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm x_9 (ATerm y_24, ATerm x_24, ATerm z_24, ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm rdef_ud_0_0 (ATerm t);
ATerm Context_0_0 (ATerm t);
ATerm Unbound_0_0 (ATerm t);
ATerm Warning_0_0 (ATerm t);
ATerm MaybeUnbound_0_0 (ATerm t);
ATerm use_vars_0_0 (ATerm t);
ATerm bind_vars_0_0 (ATerm t);
ATerm unbound_vars_0_0 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm sdef_ud_0_0 (ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm n_136 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm m_136 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm o_136 (ATerm), ATerm p_136 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm l_136 (ATerm), ATerm t);
static ATerm y_9 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm v_107 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm z_9 (ATerm g_79, ATerm h_79, ATerm i_79, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm a_10 (ATerm a_79, ATerm e_79, ATerm c_79, ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm b_10 (ATerm u_78, ATerm y_78, ATerm w_78, ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm c_10 (ATerm s_77, ATerm t_77, ATerm u_77, ATerm w_77, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm d_10 (ATerm d_76, ATerm e_76, ATerm c_76, ATerm t);
static ATerm q_4 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm e_10 (ATerm r_33, ATerm q_33, ATerm t);
static ATerm f_10 (ATerm n_37, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm q_76, ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm g_10 (ATerm b_33, ATerm c_33, ATerm d_33, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm j_10 (ATerm z_32, ATerm a_33, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm k_10 (ATerm t_105 (ATerm), ATerm k_31, ATerm i_31, ATerm t);
static ATerm j_5 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm y_125 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm n_10 (ATerm o_101 (ATerm), ATerm w_25, ATerm v_25, ATerm t);
ATerm foldr_3_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm t);
static ATerm o_10 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm a_26, ATerm z_25, ATerm t);
static ATerm p_10 (ATerm j_101 (ATerm), ATerm u_25, ATerm t_25, ATerm t);
ATerm genzip_4_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm u_10 (ATerm i_744, ATerm n_744, ATerm g_75, ATerm t);
ATerm while_not_2_0 (ATerm v_114 (ATerm), ATerm w_114 (ATerm), ATerm t);
ATerm for_3_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t);
static ATerm l_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm e_97 (ATerm y_95, ATerm z_95, ATerm a_96, ATerm t);
static ATerm z_8 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm free_vars_3_0 (ATerm c_129 (ATerm), ATerm d_129 (ATerm), ATerm e_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm topdown_1_0 (ATerm d_106 (ATerm), ATerm t);
static ATerm w_10 (ATerm t_32, ATerm u_32, ATerm t);
ATerm end_scope_1_0 (ATerm q_105 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_105 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm def_use_def_0_0 (ATerm t);
ATerm filter_1_0 (ATerm w_118 (ATerm), ATerm t);
static ATerm u_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm b_14 (ATerm t);
ATerm spec_use_def_0_0 (ATerm t);
static ATerm y_10 (ATerm z_43, ATerm a_44, ATerm t);
static ATerm z_10 (ATerm w_49, ATerm x_49, ATerm t);
static ATerm b_11 (ATerm t_115 (ATerm), ATerm f_470, ATerm c_50, ATerm t);
static ATerm a_11 (ATerm s_49, ATerm t_49, ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
ATerm output_1_0 (ATerm w_132 (ATerm), ATerm t);
static ATerm t_103 (ATerm n_103, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_11 (ATerm y_49, ATerm t);
static ATerm d_11 (ATerm s_42, ATerm t_42, ATerm t);
static ATerm e_11 (ATerm b_44, ATerm c_44, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_105 (ATerm d_104, ATerm t);
static ATerm k_105 (ATerm m_104, ATerm n_104, ATerm o_104, ATerm t);
static ATerm l_105 (ATerm w_104, ATerm x_104, ATerm y_104, ATerm t);
static ATerm f_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm x_132 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm c_15 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_11 (ATerm u_47, ATerm v_47, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm q_102 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm c_109 (ATerm u_108, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm x_10 (ATerm a_48, ATerm z_47, ATerm t);
static ATerm m_11 (ATerm o_32, ATerm p_32, ATerm n_32, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_11 (ATerm w_29, ATerm x_29, ATerm t);
ATerm foldr_2_0 (ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_111 (ATerm), ATerm t);
static ATerm v_16 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_16 (ATerm t);
ATerm need_help_1_0 (ATerm n_132 (ATerm), ATerm t);
static ATerm p_11 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t);
ATerm lookup_table_0_1 (ATerm a_34, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_37, ATerm p_37, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm i_11 (ATerm l_37, ATerm m_37, ATerm t);
static ATerm j_11 (ATerm q_37, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm z_101 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_102 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_11 (ATerm j_37, ATerm k_37, ATerm t);
static ATerm l_11 (ATerm h_34, ATerm i_34, ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm k_17 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_134 (ATerm), ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
ATerm parse_options_1_0 (ATerm p_134 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_132 (ATerm), ATerm q_132 (ATerm), ATerm r_132 (ATerm), ATerm s_132 (ATerm), ATerm t);
static ATerm s_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm c_18 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_d_18;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_f_18;
  return(t);
}
static ATerm x_9 (ATerm y_24, ATerm x_24, ATerm z_24, ATerm t)
{
  ATerm a_0 = NULL,o_0 = NULL,r_0 = NULL,s_0 = NULL,u_0 = NULL;
  a_0 = t;
  t = (ATerm) ATempty;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_18, y_24);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_18, y_24));
  t = k_10(p_0, s_0, u_0, t);
  t = (ATerm) ATempty;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_18, y_24);
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_18, y_24));
  t = k_10(v_0, o_0, r_0, t);
  t = z_24;
  t = use_vars_0_0(t);
  t = a_0;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_d_18;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_f_18;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_d_18;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_f_18;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_d_18;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_f_18;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL;
  y_2 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      z_2 = ATgetArgument(t, 0);
      a_3 = ATgetArgument(t, 1);
      b_3 = ATgetArgument(t, 2);
      q_2 = ATgetArgument(t, 3);
      t = q_2;
      if(match_cons(t, sym_StratRule_3))
        {
          r_2 = ATgetArgument(t, 0);
          w_2 = ATgetArgument(t, 1);
          x_2 = ATgetArgument(t, 2);
          {
            ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,s_3 = NULL;
            t = (ATerm) ATempty;
            o_3 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_18, z_2);
            s_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_j_18, z_2));
            t = k_10(x_0, o_3, s_3, t);
            t = (ATerm) ATempty;
            m_3 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_18, z_2);
            n_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_k_18, z_2));
            t = k_10(y_0, m_3, n_3, t);
            t = (ATerm) ATmakeAppl(sym__3, r_2, w_2, x_2);
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, z_2, a_3, b_3, (ATerm) ATmakeAppl(sym_StratRule_3, r_2, w_2, x_2));
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              r_2 = ATgetArgument(t, 0);
              w_2 = ATgetArgument(t, 1);
              x_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = y_2;
          {
            ATerm m_18 = t;
            int n_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,t_3 = NULL;
                t = (ATerm) ATempty;
                r_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_18, z_2);
                t_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_18, z_2));
                t = k_10(a_1, r_3, t_3, t);
                t = (ATerm) ATempty;
                p_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_18, z_2);
                q_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_r_18, z_2));
                t = k_10(b_1, p_3, q_3, t);
                t = r_2;
                t = bind_vars_0_0(t);
                LocalPopChoice(n_18);
              }
            else
              {
                t = m_18;
                {
                  ATerm s_18 = t;
                  int u_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_2;
                      t = unbound_vars_0_0(t);
                      LocalPopChoice(u_18);
                    }
                  else
                    {
                      t = s_18;
                      t = w_2;
                      t = use_vars_0_0(t);
                    }
                }
              }
          }
          t = (ATerm) ATmakeAppl(sym_RDefT_4, z_2, a_3, b_3, (ATerm) ATmakeAppl(sym_Rule_3, r_2, w_2, x_2));
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          z_2 = ATgetArgument(t, 0);
          a_3 = ATgetArgument(t, 1);
          b_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = b_3;
      if(match_cons(t, sym_Rule_3))
        {
          c_3 = ATgetArgument(t, 0);
          d_3 = ATgetArgument(t, 1);
          e_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_2;
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
            t = (ATerm) ATempty;
            u_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_19, z_2);
            v_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_19, z_2));
            t = k_10(j_1, u_5, v_5, t);
            t = (ATerm) ATempty;
            s_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_19, z_2);
            t_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_k_19, z_2));
            t = k_10(k_1, s_5, t_5, t);
            t = c_3;
            t = bind_vars_0_0(t);
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            {
              ATerm l_19 = t;
              int m_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_3;
                  t = unbound_vars_0_0(t);
                  LocalPopChoice(m_19);
                }
              else
                {
                  t = l_19;
                  t = d_3;
                  t = use_vars_0_0(t);
                }
            }
          }
      }
      t = (ATerm) ATmakeAppl(sym_RDef_3, z_2, a_3, (ATerm) ATmakeAppl(sym_Rule_3, c_3, d_3, e_3));
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_7 = NULL,f_7 = NULL,h_7 = NULL;
        t = (ATerm) ATempty;
        f_7 = t;
        t = term_d_18;
        h_7 = t;
        t = term_p_19;
        t = j_10(h_7, f_7, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm q_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_19) != ATmakeSymbol("e_1", 0, ATtrue)))
              _fail(t);
            d_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_s_19), d_7), term_r_19);
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        {
          ATerm v_19 = t;
          int w_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_7 = NULL,f_8 = NULL,g_8 = NULL;
              t = (ATerm) ATempty;
              f_8 = t;
              t = term_d_18;
              g_8 = t;
              t = term_p_19;
              t = j_10(g_8, f_8, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm y_19 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_19) != ATmakeSymbol("z_0", 0, ATtrue)))
                    _fail(t);
                  x_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_s_19), x_7), term_a_20);
              LocalPopChoice(w_19);
            }
          else
            {
              t = v_19;
              {
                ATerm b_20 = t;
                int c_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_8 = NULL,s_8 = NULL,t_8 = NULL;
                    t = (ATerm) ATempty;
                    s_8 = t;
                    t = term_d_18;
                    t_8 = t;
                    t = term_p_19;
                    t = j_10(t_8, s_8, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm d_20 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) d_20) != ATmakeSymbol("t_0", 0, ATtrue)))
                          _fail(t);
                        k_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_s_19), k_8), term_a_20);
                    LocalPopChoice(c_20);
                  }
                else
                  {
                    t = b_20;
                    {
                      ATerm e_20 = t;
                      int f_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_9 = NULL,h_9 = NULL,i_9 = NULL;
                          t = (ATerm) ATempty;
                          h_9 = t;
                          t = term_d_18;
                          i_9 = t;
                          t = term_p_19;
                          t = j_10(i_9, h_9, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm i_20 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) i_20) != ATmakeSymbol("n_0", 0, ATtrue)))
                                _fail(t);
                              f_9 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_s_19), f_9), term_a_20);
                          LocalPopChoice(f_20);
                        }
                      else
                        {
                          t = e_20;
                          {
                            ATerm j_20 = t;
                            int k_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_9 = NULL,s_9 = NULL,v_9 = NULL;
                                t = (ATerm) ATempty;
                                s_9 = t;
                                t = term_d_18;
                                v_9 = t;
                                t = term_p_19;
                                t = j_10(v_9, s_9, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm l_20 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) l_20) != ATmakeSymbol("i_0", 0, ATtrue)))
                                      _fail(t);
                                    p_9 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_s_19), p_9), term_w_20);
                                LocalPopChoice(k_20);
                              }
                            else
                              {
                                t = j_20;
                                {
                                  ATerm r_11 = NULL,u_11 = NULL,v_11 = NULL;
                                  t = (ATerm) ATempty;
                                  u_11 = t;
                                  t = term_d_18;
                                  v_11 = t;
                                  t = term_p_19;
                                  t = j_10(v_11, u_11, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm x_20 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) x_20) != ATmakeSymbol("c_0", 0, ATtrue)))
                                        _fail(t);
                                      r_11 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_s_19), r_11), term_w_20);
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
  ATerm m_5 = NULL,n_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,x_5 = NULL;
  r_5 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5;
  if(match_cons(t, sym_ListVar_1))
    {
      q_5 = ATgetArgument(t, 0);
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_5;
            m_5 = t;
            t = r_5;
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            t = x_5;
            m_5 = t;
            t = r_5;
          }
      }
    }
  else
    {
      t = x_5;
      m_5 = t;
      t = r_5;
    }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_21), m_5), term_a_21);
  t = Context_0_0(t);
  n_5 = t;
  t = term_d_21;
  p_5 = t;
  t = SSL_printnl(p_5, n_5);
  t = n_5;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm w_7 = NULL;
  w_7 = t;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_13 = NULL,g_13 = NULL,l_13 = NULL;
        t = (ATerm) ATempty;
        g_13 = t;
        t = term_f_18;
        l_13 = t;
        t = term_g_21;
        t = j_10(l_13, g_13, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm i_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_21) != ATmakeSymbol("g_1", 0, ATtrue)))
              _fail(t);
            e_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_k_21), e_13), term_j_21);
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        {
          ATerm o_21 = t;
          int p_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_13 = NULL,v_13 = NULL,w_13 = NULL;
              t = (ATerm) ATempty;
              v_13 = t;
              t = term_f_18;
              w_13 = t;
              t = term_g_21;
              t = j_10(w_13, v_13, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm q_21 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_21) != ATmakeSymbol("c_1", 0, ATtrue)))
                    _fail(t);
                  t_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_k_21), t_13), term_s_21);
              LocalPopChoice(p_21);
            }
          else
            {
              t = o_21;
              {
                ATerm u_21 = t;
                int w_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_14 = NULL,c_14 = NULL,d_14 = NULL;
                    t = (ATerm) ATempty;
                    c_14 = t;
                    t = term_f_18;
                    d_14 = t;
                    t = term_g_21;
                    t = j_10(d_14, c_14, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm x_21 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) x_21) != ATmakeSymbol("w_0", 0, ATtrue)))
                          _fail(t);
                        a_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_k_21), a_14), term_s_21);
                    LocalPopChoice(w_21);
                  }
                else
                  {
                    t = u_21;
                    {
                      ATerm y_21 = t;
                      int z_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_14 = NULL,j_14 = NULL,x_14 = NULL;
                          t = (ATerm) ATempty;
                          j_14 = t;
                          t = term_f_18;
                          x_14 = t;
                          t = term_g_21;
                          t = j_10(x_14, j_14, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm a_22 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) a_22) != ATmakeSymbol("q_0", 0, ATtrue)))
                                _fail(t);
                              h_14 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_k_21), h_14), term_s_21);
                          LocalPopChoice(z_21);
                        }
                      else
                        {
                          t = y_21;
                          {
                            ATerm b_22 = t;
                            int c_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_15 = NULL,f_15 = NULL,k_15 = NULL;
                                t = (ATerm) ATempty;
                                f_15 = t;
                                t = term_f_18;
                                k_15 = t;
                                t = term_g_21;
                                t = j_10(k_15, f_15, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm d_22 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) d_22) != ATmakeSymbol("k_0", 0, ATtrue)))
                                      _fail(t);
                                    d_15 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_k_21), d_15), term_e_22);
                                LocalPopChoice(c_22);
                              }
                            else
                              {
                                t = b_22;
                                {
                                  ATerm q_15 = NULL,s_15 = NULL,x_15 = NULL;
                                  t = (ATerm) ATempty;
                                  s_15 = t;
                                  t = term_f_18;
                                  x_15 = t;
                                  t = term_g_21;
                                  t = j_10(x_15, s_15, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm f_22 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) f_22) != ATmakeSymbol("e_0", 0, ATtrue)))
                                        _fail(t);
                                      q_15 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_k_21), q_15), term_e_22);
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
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  o_8 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8;
  if(match_cons(t, sym_ListVar_1))
    {
      n_8 = ATgetArgument(t, 0);
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_8;
            m_8 = t;
            t = o_8;
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            t = p_8;
            m_8 = t;
            t = o_8;
          }
      }
    }
  else
    {
      t = p_8;
      m_8 = t;
      t = o_8;
    }
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_8 = NULL,r_8 = NULL,u_8 = NULL,v_8 = NULL;
        t = term_k_22;
        u_8 = t;
        t = term_m_22;
        v_8 = t;
        t = term_n_22;
        t = l_11(u_8, v_8, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_22), m_8), term_a_21);
        t = Warning_0_0(t);
        q_8 = t;
        t = term_d_21;
        r_8 = t;
        t = SSL_printnl(r_8, q_8);
        t = q_8;
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm a_9 = NULL,c_9 = NULL;
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_9 = NULL,e_9 = NULL;
      d_9 = t;
      if(match_cons(t, sym_Var_1))
        {
          c_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      e_9 = t;
      t = SSLgetAnnotations(d_9);
      a_9 = t;
      t = e_9;
      LocalPopChoice(q_22);
      {
        ATerm m_9 = NULL;
        m_9 = t;
        t = a_9;
        {
          ATerm t_22 = t;
          int u_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm v_22 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) v_22) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm w_22 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(w_22) != AT_LIST) || !(ATisEmpty(w_22))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(u_22);
              _fail(t);
            }
          else
            {
              t = t_22;
              {
                ATerm x_22 = t;
                int z_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm a_23 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) a_23) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm c_23 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(c_23) != AT_LIST) || !(ATisEmpty(c_23))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(z_22);
                    t = (ATerm) ATmakeAppl(sym_Var_1, c_9);
                    t = MaybeUnbound_0_0(t);
                    _fail(t);
                  }
                else
                  {
                    t = x_22;
                    {
                      ATerm d_23 = t;
                      int l_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm t_23 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) t_23) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm v_23 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(v_23) != AT_LIST) || !(ATisEmpty(v_23))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(l_23);
                          t = (ATerm) ATmakeAppl(sym_Var_1, c_9);
                          t = Unbound_0_0(t);
                        }
                      else
                        {
                          t = d_23;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, c_9);
                          t = Unbound_0_0(t);
                        }
                    }
                  }
              }
            }
        }
        t = m_9;
      }
    }
  else
    {
      t = p_22;
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_9 = NULL,o_9 = NULL,r_9 = NULL,t_9 = NULL,d_1 = NULL;
            t_9 = t;
            if(match_cons(t, sym_App_2))
              {
                o_9 = ATgetArgument(t, 0);
                r_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_9);
            n_9 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, o_9, r_9);
            d_1 = t;
            t = SSLsetAnnotations(d_1, n_9);
            LocalPopChoice(x_23);
            {
              ATerm u_9 = NULL,w_9 = NULL,h_10 = NULL,i_10 = NULL,l_10 = NULL,m_10 = NULL,f_1 = NULL;
              m_10 = t;
              if(match_cons(t, sym_App_2))
                {
                  w_9 = ATgetArgument(t, 0);
                  h_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_10);
              u_9 = t;
              t = w_9;
              t = unbound_vars_0_0(t);
              i_10 = t;
              t = h_10;
              t = use_vars_0_0(t);
              l_10 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, i_10, l_10);
              f_1 = t;
              t = SSLsetAnnotations(f_1, u_9);
            }
          }
        else
          {
            t = w_23;
            {
              ATerm y_23 = t;
              int a_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,h_1 = NULL;
                  s_10 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      r_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_10);
                  q_10 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, r_10);
                  h_1 = t;
                  t = SSLsetAnnotations(h_1, q_10);
                  LocalPopChoice(a_24);
                  {
                    ATerm h_11 = NULL,n_11 = NULL,t_11 = NULL,w_11 = NULL,i_1 = NULL;
                    w_11 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        n_11 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(w_11);
                    h_11 = t;
                    t = n_11;
                    t = unbound_vars_0_0(t);
                    t_11 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, t_11);
                    i_1 = t;
                    t = SSLsetAnnotations(i_1, h_11);
                  }
                }
              else
                {
                  t = y_23;
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
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_11 = NULL,l_12 = NULL,o_12 = NULL,p_1 = NULL;
      o_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          l_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_12);
      z_11 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, l_12);
      p_1 = t;
      t = SSLsetAnnotations(p_1, z_11);
      LocalPopChoice(c_24);
      _fail(t);
    }
  else
    {
      t = b_24;
      {
        ATerm d_24 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,r_1 = NULL;
            t_12 = t;
            if(match_cons(t, sym_App_2))
              {
                r_12 = ATgetArgument(t, 0);
                s_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_12);
            q_12 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, r_12, s_12);
            r_1 = t;
            t = SSLsetAnnotations(r_1, q_12);
            LocalPopChoice(e_24);
            {
              ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,a_13 = NULL,h_13 = NULL,s_1 = NULL;
              h_13 = t;
              if(match_cons(t, sym_App_2))
                {
                  w_12 = ATgetArgument(t, 0);
                  x_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_13);
              v_12 = t;
              t = w_12;
              t = unbound_vars_0_0(t);
              y_12 = t;
              t = x_12;
              t = use_vars_0_0(t);
              a_13 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, y_12, a_13);
              s_1 = t;
              t = SSLsetAnnotations(s_1, v_12);
            }
          }
        else
          {
            t = d_24;
            {
              ATerm f_24 = t;
              int g_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,t_1 = NULL;
                  k_13 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      j_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_13);
                  i_13 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, j_13);
                  t_1 = t;
                  t = SSLsetAnnotations(t_1, i_13);
                  LocalPopChoice(g_24);
                  {
                    ATerm n_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,u_1 = NULL;
                    r_13 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        p_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(r_13);
                    n_13 = t;
                    t = p_13;
                    t = unbound_vars_0_0(t);
                    q_13 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, q_13);
                    u_1 = t;
                    t = SSLsetAnnotations(u_1, n_13);
                  }
                }
              else
                {
                  t = f_24;
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
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,a_2 = NULL;
      m_14 = t;
      if(match_cons(t, sym_Build_1))
        {
          l_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_14);
      k_14 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, l_14);
      a_2 = t;
      t = SSLsetAnnotations(a_2, k_14);
      LocalPopChoice(i_24);
      {
        ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,b_2 = NULL;
        q_14 = t;
        if(match_cons(t, sym_Build_1))
          {
            o_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_14);
        n_14 = t;
        t = o_14;
        t = use_vars_0_0(t);
        p_14 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, p_14);
        b_2 = t;
        t = SSLsetAnnotations(b_2, n_14);
      }
    }
  else
    {
      t = h_24;
      {
        ATerm j_24 = t;
        int r_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL,c_2 = NULL;
            t_14 = t;
            if(match_cons(t, sym_Match_1))
              {
                s_14 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_14);
            r_14 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, s_14);
            c_2 = t;
            t = SSLsetAnnotations(c_2, r_14);
            LocalPopChoice(r_24);
            {
              ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,z_14 = NULL,d_2 = NULL;
              z_14 = t;
              if(match_cons(t, sym_Match_1))
                {
                  v_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_14);
              u_14 = t;
              t = v_14;
              t = bind_vars_0_0(t);
              w_14 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, w_14);
              d_2 = t;
              t = SSLsetAnnotations(d_2, u_14);
            }
          }
        else
          {
            t = j_24;
            {
              ATerm s_24 = t;
              int t_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,e_2 = NULL;
                  j_15 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      g_15 = ATgetArgument(t, 0);
                      h_15 = ATgetArgument(t, 1);
                      i_15 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_15);
                  b_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, g_15, h_15, i_15);
                  e_2 = t;
                  t = SSLsetAnnotations(e_2, b_15);
                  LocalPopChoice(t_24);
                  {
                    ATerm l_18 = NULL,o_18 = NULL,p_18 = NULL,t_18 = NULL;
                    l_18 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        o_18 = ATgetArgument(t, 0);
                        p_18 = ATgetArgument(t, 1);
                        t_18 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm u_24 = t;
                      int w_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_16 = NULL,i_16 = NULL,f_2 = NULL;
                          t = SSLgetAnnotations(l_18);
                          d_16 = t;
                          t = o_18;
                          t = bind_vars_0_0(t);
                          i_16 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, i_16, p_18, t_18);
                          f_2 = t;
                          t = SSLsetAnnotations(f_2, d_16);
                          LocalPopChoice(w_24);
                        }
                      else
                        {
                          t = u_24;
                          {
                            ATerm a_25 = t;
                            int b_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm y_16 = NULL,h_17 = NULL,g_2 = NULL;
                                t = SSLgetAnnotations(l_18);
                                y_16 = t;
                                t = t_18;
                                t = unbound_vars_0_0(t);
                                h_17 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, o_18, p_18, h_17);
                                g_2 = t;
                                t = SSLsetAnnotations(g_2, y_16);
                                LocalPopChoice(b_25);
                              }
                            else
                              {
                                t = a_25;
                                {
                                  ATerm y_17 = NULL,g_18 = NULL,h_2 = NULL;
                                  t = SSLgetAnnotations(l_18);
                                  y_17 = t;
                                  t = p_18;
                                  t = use_vars_0_0(t);
                                  g_18 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, o_18, g_18, t_18);
                                  h_2 = t;
                                  t = SSLsetAnnotations(h_2, y_17);
                                }
                              }
                          }
                        }
                    }
                  }
                }
              else
                {
                  t = s_24;
                  {
                    ATerm c_25 = t;
                    int e_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,i_2 = NULL;
                        z_18 = t;
                        if(match_cons(t, sym_PrimT_3))
                          {
                            w_18 = ATgetArgument(t, 0);
                            x_18 = ATgetArgument(t, 1);
                            y_18 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(z_18);
                        v_18 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, w_18, x_18, y_18);
                        i_2 = t;
                        t = SSLsetAnnotations(i_2, v_18);
                        LocalPopChoice(e_25);
                        {
                          ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
                          m_20 = t;
                          if(match_cons(t, sym_PrimT_3))
                            {
                              n_20 = ATgetArgument(t, 0);
                              o_20 = ATgetArgument(t, 1);
                              p_20 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          {
                            ATerm f_25 = t;
                            int g_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm f_19 = NULL,j_19 = NULL,j_2 = NULL;
                                t = SSLgetAnnotations(m_20);
                                f_19 = t;
                                t = o_20;
                                t = unbound_vars_0_0(t);
                                j_19 = t;
                                t = (ATerm) ATmakeAppl(sym_PrimT_3, n_20, j_19, p_20);
                                j_2 = t;
                                t = SSLsetAnnotations(j_2, f_19);
                                LocalPopChoice(g_25);
                              }
                            else
                              {
                                t = f_25;
                                {
                                  ATerm h_20 = NULL,v_20 = NULL,m_2 = NULL;
                                  t = SSLgetAnnotations(m_20);
                                  h_20 = t;
                                  t = p_20;
                                  t = use_vars_0_0(t);
                                  v_20 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, n_20, o_20, v_20);
                                  m_2 = t;
                                  t = SSLsetAnnotations(m_2, h_20);
                                }
                              }
                          }
                        }
                      }
                    else
                      {
                        t = c_25;
                        {
                          ATerm h_25 = t;
                          int i_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,n_2 = NULL;
                              u_20 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  r_20 = ATgetArgument(t, 0);
                                  s_20 = ATgetArgument(t, 1);
                                  t_20 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(u_20);
                              q_20 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, r_20, s_20, t_20);
                              n_2 = t;
                              t = SSLsetAnnotations(n_2, q_20);
                              LocalPopChoice(i_25);
                              {
                                ATerm s_22 = NULL,y_22 = NULL,b_23 = NULL,i_23 = NULL;
                                s_22 = t;
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    y_22 = ATgetArgument(t, 0);
                                    b_23 = ATgetArgument(t, 1);
                                    i_23 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm j_25 = t;
                                  int k_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm h_21 = NULL,m_21 = NULL,o_2 = NULL;
                                      t = SSLgetAnnotations(s_22);
                                      h_21 = t;
                                      t = b_23;
                                      t = unbound_vars_0_0(t);
                                      m_21 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, y_22, m_21, i_23);
                                      o_2 = t;
                                      t = SSLsetAnnotations(o_2, h_21);
                                      LocalPopChoice(k_25);
                                    }
                                  else
                                    {
                                      t = j_25;
                                      {
                                        ATerm l_22 = NULL,r_22 = NULL,p_2 = NULL;
                                        t = SSLgetAnnotations(s_22);
                                        l_22 = t;
                                        t = i_23;
                                        t = use_vars_0_0(t);
                                        r_22 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, y_22, b_23, r_22);
                                        p_2 = t;
                                        t = SSLsetAnnotations(p_2, l_22);
                                      }
                                    }
                                }
                              }
                            }
                          else
                            {
                              t = h_25;
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
static ATerm l_1 (ATerm t)
{
  t = term_d_18;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_f_18;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_d_18;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_f_18;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm d_25 = NULL,m_25 = NULL,r_25 = NULL,s_25 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      m_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
      s_25 = ATgetArgument(t, 2);
      d_25 = ATgetArgument(t, 3);
      {
        ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
        t = (ATerm) ATempty;
        g_26 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_25, m_25);
        h_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_25, m_25));
        t = k_10(l_1, g_26, h_26, t);
        t = (ATerm) ATempty;
        e_26 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_25, m_25);
        f_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_25, m_25));
        t = k_10(n_1, e_26, f_26, t);
        t = d_25;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, m_25, r_25, s_25, d_25);
      }
    }
  else
    {
      ATerm v_26 = NULL,w_26 = NULL,y_26 = NULL,z_26 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          m_25 = ATgetArgument(t, 0);
          r_25 = ATgetArgument(t, 1);
          s_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      y_26 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_25, m_25);
      z_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_25, m_25));
      t = k_10(v_1, y_26, z_26, t);
      t = (ATerm) ATempty;
      v_26 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_25, m_25);
      w_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_25, m_25));
      t = k_10(w_1, v_26, w_26, t);
      t = s_25;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, m_25, r_25, s_25);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm n_136 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,c_27 = NULL,d_27 = NULL,g_27 = NULL,h_27 = NULL,x_4 = NULL;
  static ATerm x_1 (ATerm t)
  {
    ATerm m_27 = NULL,n_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,d_28 = NULL,f_28 = NULL,z_4 = NULL,y_4 = NULL;
    f_28 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        w_27 = ATgetArgument(t, 0);
        x_27 = ATgetArgument(t, 1);
        y_27 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_28);
    v_27 = t;
    t = w_27;
    t = n_136(t);
    z_27 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_27, x_27, y_27);
    y_4 = t;
    t = SSLsetAnnotations(y_4, v_27);
    d_28 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        n_27 = ATgetArgument(t, 0);
        s_27 = ATgetArgument(t, 1);
        t_27 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_28);
    m_27 = t;
    t = s_27;
    t = n_136(t);
    u_27 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, n_27, u_27, t_27);
    z_4 = t;
    t = SSLsetAnnotations(z_4, m_27);
    return(t);
  }
  static ATerm y_1 (ATerm t)
  {
    ATerm k_28 = NULL,m_28 = NULL,o_28 = NULL,r_28 = NULL,s_28 = NULL,u_28 = NULL,a_5 = NULL;
    u_28 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        m_28 = ATgetArgument(t, 0);
        o_28 = ATgetArgument(t, 1);
        r_28 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_28);
    k_28 = t;
    t = r_28;
    t = n_136(t);
    s_28 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, m_28, o_28, s_28);
    a_5 = t;
    t = SSLsetAnnotations(a_5, k_28);
    return(t);
  }
  h_27 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      c_27 = ATgetArgument(t, 0);
      d_27 = ATgetArgument(t, 1);
      g_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_27);
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, c_27, d_27, g_27);
  x_4 = t;
  t = SSLsetAnnotations(x_4, a_27);
  t = abstract_choice_2_0(x_1, y_1, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm m_136 (ATerm), ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL,z_28 = NULL,g_5 = NULL;
  static ATerm z_1 (ATerm t)
  {
    ATerm a_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,h_5 = NULL;
    h_29 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        e_29 = ATgetArgument(t, 0);
        f_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_29);
    a_29 = t;
    t = e_29;
    t = m_136(t);
    g_29 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, g_29, f_29);
    h_5 = t;
    t = SSLsetAnnotations(h_5, a_29);
    return(t);
  }
  static ATerm k_2 (ATerm t)
  {
    ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,p_29 = NULL,i_5 = NULL;
    p_29 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        k_29 = ATgetArgument(t, 0);
        l_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_29);
    j_29 = t;
    t = l_29;
    t = m_136(t);
    m_29 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, k_29, m_29);
    i_5 = t;
    t = SSLsetAnnotations(i_5, j_29);
    return(t);
  }
  z_28 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      w_28 = ATgetArgument(t, 0);
      x_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_28);
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, w_28, x_28);
  g_5 = t;
  t = SSLsetAnnotations(g_5, v_28);
  t = abstract_choice_2_0(z_1, k_2, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm o_136 (ATerm), ATerm p_136 (ATerm), ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
  u_29 = t;
  t = save_MarkVar_0_0(t);
  q_29 = t;
  t = u_29;
  t = o_136(t);
  t_29 = t;
  t = save_MarkVar_0_0(t);
  r_29 = t;
  t = term_x_25;
  t = table_destroy_0_0(t);
  t = term_x_25;
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, q_29);
  t = e_10(v_29, q_29, t);
  t = t_29;
  t = p_136(t);
  s_29 = t;
  t = r_29;
  t = isect_MarkVar_0_0(t);
  t = s_29;
  return(t);
}
ATerm mark_choice_1_0 (ATerm l_136 (ATerm), ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,n_30 = NULL,o_30 = NULL,f_6 = NULL;
  static ATerm l_2 (ATerm t)
  {
    ATerm p_30 = NULL,q_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,g_6 = NULL;
    u_30 = t;
    if(match_cons(t, sym_Choice_2))
      {
        q_30 = ATgetArgument(t, 0);
        s_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_30);
    p_30 = t;
    t = q_30;
    t = l_136(t);
    t_30 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, t_30, s_30);
    g_6 = t;
    t = SSLsetAnnotations(g_6, p_30);
    return(t);
  }
  static ATerm s_2 (ATerm t)
  {
    ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,n_31 = NULL,o_31 = NULL,h_6 = NULL;
    o_31 = t;
    if(match_cons(t, sym_Choice_2))
      {
        w_30 = ATgetArgument(t, 0);
        x_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_31);
    v_30 = t;
    t = x_30;
    t = l_136(t);
    n_31 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, w_30, n_31);
    h_6 = t;
    t = SSLsetAnnotations(h_6, v_30);
    return(t);
  }
  o_30 = t;
  if(match_cons(t, sym_Choice_2))
    {
      z_29 = ATgetArgument(t, 0);
      n_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_30);
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, z_29, n_30);
  f_6 = t;
  t = SSLsetAnnotations(f_6, y_29);
  t = abstract_choice_2_0(l_2, s_2, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm p_31 = NULL,r_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,m_6 = NULL,l_6 = NULL;
  r_31 = t;
  t = save_MarkVar_0_0(t);
  p_31 = t;
  t = r_31;
  if(match_cons(t, sym_Rec_2))
    {
      a_32 = ATgetArgument(t, 0);
      b_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_31);
  z_31 = t;
  t = b_32;
  t = mark_buv_0_0(t);
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, a_32, c_32);
  l_6 = t;
  t = SSLsetAnnotations(l_6, z_31);
  t = p_31;
  t = isect_MarkVar_0_0(t);
  t = r_31;
  if(match_cons(t, sym_Rec_2))
    {
      v_31 = ATgetArgument(t, 0);
      w_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_31);
  u_31 = t;
  t = w_31;
  t = mark_buv_0_0(t);
  y_31 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, v_31, y_31);
  m_6 = t;
  t = SSLsetAnnotations(m_6, u_31);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,x_32 = NULL,y_32 = NULL,f_33 = NULL,h_33 = NULL,n_33 = NULL,u_33 = NULL,l_34 = NULL,n_34 = NULL,o_34 = NULL,r_6 = NULL,q_6 = NULL,p_6 = NULL;
  o_34 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      n_33 = ATgetArgument(t, 0);
      u_33 = ATgetArgument(t, 1);
      l_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_34);
  h_33 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, n_33, u_33, l_34);
  p_6 = t;
  t = SSLsetAnnotations(p_6, h_33);
  n_34 = t;
  t = save_MarkVar_0_0(t);
  d_32 = t;
  t = n_34;
  if(match_cons(t, sym_PrimT_3))
    {
      l_32 = ATgetArgument(t, 0);
      m_32 = ATgetArgument(t, 1);
      x_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_34);
  k_32 = t;
  t = x_32;
  t = map_1_0(t_2, t);
  y_32 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, l_32, m_32, y_32);
  q_6 = t;
  t = SSLsetAnnotations(q_6, k_32);
  f_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      f_32 = ATgetArgument(t, 0);
      g_32 = ATgetArgument(t, 1);
      h_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_33);
  e_32 = t;
  t = g_32;
  t = mark_buv_0_0(t);
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, f_32, i_32, h_32);
  r_6 = t;
  t = SSLsetAnnotations(r_6, e_32);
  j_32 = t;
  t = d_32;
  t = isect_MarkVar_0_0(t);
  t = j_32;
  return(t);
}
ATerm alltd_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  static ATerm p_34 (ATerm t)
  {
    ATerm y_25 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_107(t);
        LocalPopChoice(b_26);
      }
    else
      {
        t = y_25;
        t = SRTS_all(p_34, t);
      }
    return(t);
  }
  t = p_34(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,d_38 = NULL,e_38 = NULL;
  y_37 = t;
  if(match_cons(t, sym_CallT_3))
    {
      d_38 = ATgetArgument(t, 0);
      e_38 = ATgetArgument(t, 1);
      x_37 = ATgetArgument(t, 2);
      {
        ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,j_23 = NULL,k_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,u_23 = NULL,z_23 = NULL,x_6 = NULL,w_6 = NULL,v_6 = NULL;
        t = SSLgetAnnotations(y_37);
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, d_38, e_38, x_37);
        v_6 = t;
        t = SSLsetAnnotations(v_6, u_23);
        z_23 = t;
        t = save_MarkVar_0_0(t);
        e_23 = t;
        t = z_23;
        if(match_cons(t, sym_CallT_3))
          {
            o_23 = ATgetArgument(t, 0);
            p_23 = ATgetArgument(t, 1);
            q_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_23);
        n_23 = t;
        t = q_23;
        t = map_1_0(u_2, t);
        r_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, o_23, p_23, r_23);
        w_6 = t;
        t = SSLsetAnnotations(w_6, n_23);
        s_23 = t;
        if(match_cons(t, sym_CallT_3))
          {
            g_23 = ATgetArgument(t, 0);
            h_23 = ATgetArgument(t, 1);
            j_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_23);
        f_23 = t;
        t = h_23;
        t = mark_buv_0_0(t);
        k_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, g_23, k_23, j_23);
        x_6 = t;
        t = SSLsetAnnotations(x_6, f_23);
        m_23 = t;
        t = e_23;
        t = isect_MarkVar_0_0(t);
        t = m_23;
      }
    }
  else
    {
      ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,v_24 = NULL,z_6 = NULL,y_6 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          d_38 = ATgetArgument(t, 0);
          e_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_37);
      q_24 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, d_38, e_38);
      y_6 = t;
      t = SSLsetAnnotations(y_6, q_24);
      v_24 = t;
      t = save_MarkVar_0_0(t);
      k_24 = t;
      t = v_24;
      if(match_cons(t, sym_Call_2))
        {
          m_24 = ATgetArgument(t, 0);
          n_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_24);
      l_24 = t;
      t = n_24;
      t = mark_buv_0_0(t);
      o_24 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, m_24, o_24);
      z_6 = t;
      t = SSLsetAnnotations(z_6, l_24);
      p_24 = t;
      t = k_24;
      t = isect_MarkVar_0_0(t);
      t = p_24;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_x_25;
  return(t);
}
static ATerm z_9 (ATerm g_79, ATerm h_79, ATerm i_79, ATerm t)
{
  ATerm h_38 = NULL;
  static ATerm f_3 (ATerm t)
  {
    t = h_79;
    t = map_1_0(IntroduceBound_0_0, t);
    t = i_79;
    t = mark_build_vars_0_0(t);
    if(((h_38 != NULL) && (h_38 != t)))
      _fail(t);
    else
      h_38 = t;
    return(t);
  }
  t = scope_2_0(v_2, f_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, g_79, h_79, not_null(h_38));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_x_25;
  return(t);
}
static ATerm a_10 (ATerm a_79, ATerm e_79, ATerm c_79, ATerm t)
{
  ATerm i_38 = NULL,l_38 = NULL,m_38 = NULL;
  static ATerm h_3 (ATerm t)
  {
    t = a_79;
    t = mark_match_vars_0_0(t);
    if(((i_38 != NULL) && (i_38 != t)))
      _fail(t);
    else
      i_38 = t;
    t = c_79;
    t = mark_buv_0_0(t);
    if(((l_38 != NULL) && (l_38 != t)))
      _fail(t);
    else
      l_38 = t;
    t = e_79;
    t = mark_build_vars_0_0(t);
    if(((m_38 != NULL) && (m_38 != t)))
      _fail(t);
    else
      m_38 = t;
    return(t);
  }
  t = scope_2_0(g_3, h_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_38), not_null(m_38), not_null(l_38)));
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_x_25;
  return(t);
}
static ATerm k_3 (ATerm t)
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
static ATerm l_3 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            {
              ATerm k_26 = t;
              int l_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_39 = NULL,d_39 = NULL,g_39 = NULL,h_39 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_39 = ATgetArgument(t, 0);
                      d_39 = ATgetArgument(t, 1);
                      g_39 = ATgetArgument(t, 2);
                      h_39 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_39;
                  t = map_1_0(u_3, t);
                  LocalPopChoice(l_26);
                }
              else
                {
                  t = k_26;
                  {
                    ATerm m_26 = t;
                    int n_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_26);
                      }
                    else
                      {
                        t = m_26;
                        t = dynrule_targs_1_0(v_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm v_39 = NULL;
  ATerm o_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_39 = ATgetArgument(t, 0);
          {
            ATerm q_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_26);
      t = v_39;
    }
  else
    {
      t = o_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_39;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = map_1_0(w_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm c_40 = NULL;
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_40 = ATgetArgument(t, 0);
          {
            ATerm t_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_26);
      t = c_40;
    }
  else
    {
      t = r_26;
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
static ATerm b_10 (ATerm u_78, ATerm y_78, ATerm w_78, ATerm t)
{
  ATerm t_38 = NULL,y_38 = NULL,z_38 = NULL;
  static ATerm j_3 (ATerm t)
  {
    t = u_78;
    t = free_vars_3_0(k_3, l_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = u_78;
    t = mark_match_vars_0_0(t);
    if(((t_38 != NULL) && (t_38 != t)))
      _fail(t);
    else
      t_38 = t;
    t = w_78;
    t = mark_buv_0_0(t);
    if(((y_38 != NULL) && (y_38 != t)))
      _fail(t);
    else
      y_38 = t;
    t = y_78;
    t = mark_build_vars_0_0(t);
    if(((z_38 != NULL) && (z_38 != t)))
      _fail(t);
    else
      z_38 = t;
    return(t);
  }
  t = scope_2_0(i_3, j_3, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_38), not_null(z_38), not_null(y_38)));
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm r_42 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_42);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm u_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_26);
    }
  else
    {
      t = u_26;
      {
        ATerm b_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_27);
          }
        else
          {
            t = b_27;
            {
              ATerm k_27 = t;
              int l_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_42 = ATgetArgument(t, 0);
                      w_42 = ATgetArgument(t, 1);
                      x_42 = ATgetArgument(t, 2);
                      y_42 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_42;
                  t = map_1_0(z_3, t);
                  LocalPopChoice(l_27);
                }
              else
                {
                  t = k_27;
                  {
                    ATerm o_27 = t;
                    int p_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(p_27);
                      }
                    else
                      {
                        t = o_27;
                        t = dynrule_targs_1_0(a_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm k_43 = NULL;
  ATerm r_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_43 = ATgetArgument(t, 0);
          {
            ATerm b_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_28);
      t = k_43;
    }
  else
    {
      t = r_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_43;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = map_1_0(b_4, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm t_43 = NULL;
  ATerm c_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_43 = ATgetArgument(t, 0);
          {
            ATerm j_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_28);
      t = t_43;
    }
  else
    {
      t = c_28;
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
static ATerm c_4 (ATerm t)
{
  t = term_x_25;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm p_45 = NULL;
  ATerm l_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_45 = ATgetArgument(t, 0);
          {
            ATerm p_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_28);
      t = p_45;
    }
  else
    {
      t = l_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_45;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm t_45 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_45);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm t_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_28);
    }
  else
    {
      t = t_28;
      {
        ATerm b_29 = t;
        int c_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_29);
          }
        else
          {
            t = b_29;
            {
              ATerm d_29 = t;
              int a_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_45 = ATgetArgument(t, 0);
                      w_45 = ATgetArgument(t, 1);
                      x_45 = ATgetArgument(t, 2);
                      y_45 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_45;
                  t = map_1_0(h_4, t);
                  LocalPopChoice(a_30);
                }
              else
                {
                  t = d_29;
                  {
                    ATerm b_30 = t;
                    int c_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(c_30);
                      }
                    else
                      {
                        t = b_30;
                        t = dynrule_targs_1_0(i_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm h_46 = NULL;
  ATerm d_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_46 = ATgetArgument(t, 0);
          {
            ATerm g_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_30);
      t = h_46;
    }
  else
    {
      t = d_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_46;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = map_1_0(j_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm o_46 = NULL;
  ATerm h_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_46 = ATgetArgument(t, 0);
          {
            ATerm l_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_30);
      t = o_46;
    }
  else
    {
      t = h_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_46;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,b_41 = NULL,i_41 = NULL,m_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      i_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
      p_41 = ATgetArgument(t, 2);
      {
        ATerm x_41 = NULL,c_42 = NULL,f_42 = NULL,q_42 = NULL;
        t = p_41;
        if(match_cons(t, sym_Rule_3))
          {
            y_40 = ATgetArgument(t, 0);
            z_40 = ATgetArgument(t, 1);
            b_41 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = p_41;
        t = free_vars_3_0(x_3, y_3, tboundin_3_0, t);
        x_41 = t;
        {
          static ATerm d_4 (ATerm t)
          {
            t = x_41;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = y_40;
            t = mark_match_vars_0_0(t);
            if(((c_42 != NULL) && (c_42 != t)))
              _fail(t);
            else
              c_42 = t;
            t = b_41;
            t = mark_buv_0_0(t);
            if(((f_42 != NULL) && (f_42 != t)))
              _fail(t);
            else
              f_42 = t;
            t = z_40;
            t = mark_build_vars_0_0(t);
            if(((q_42 != NULL) && (q_42 != t)))
              _fail(t);
            else
              q_42 = t;
            return(t);
          }
          t = scope_2_0(c_4, d_4, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, i_41, m_41, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_42), not_null(q_42), not_null(f_42)));
      }
    }
  else
    {
      ATerm m_44 = NULL,p_44 = NULL,t_44 = NULL,w_44 = NULL,e_45 = NULL,i_45 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          i_41 = ATgetArgument(t, 0);
          m_41 = ATgetArgument(t, 1);
          p_41 = ATgetArgument(t, 2);
          q_41 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = q_41;
      if(match_cons(t, sym_Rule_3))
        {
          r_41 = ATgetArgument(t, 0);
          s_41 = ATgetArgument(t, 1);
          t_41 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_41;
      t = map_1_0(e_4, t);
      m_44 = t;
      t = q_41;
      t = free_vars_3_0(f_4, g_4, tboundin_3_0, t);
      i_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_45, m_44);
      t = diff_0_0(t);
      p_44 = t;
      {
        static ATerm l_4 (ATerm t)
        {
          t = m_44;
          t = map_1_0(IntroduceBound_0_0, t);
          t = p_44;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = r_41;
          t = mark_match_vars_0_0(t);
          if(((t_44 != NULL) && (t_44 != t)))
            _fail(t);
          else
            t_44 = t;
          t = t_41;
          t = mark_buv_0_0(t);
          if(((w_44 != NULL) && (w_44 != t)))
            _fail(t);
          else
            w_44 = t;
          t = s_41;
          t = mark_build_vars_0_0(t);
          if(((e_45 != NULL) && (e_45 != t)))
            _fail(t);
          else
            e_45 = t;
          return(t);
        }
        t = scope_2_0(k_4, l_4, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, i_41, m_41, p_41, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_44), not_null(e_45), not_null(w_44)));
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm t_46 = NULL,v_46 = NULL,w_46 = NULL;
  t_46 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_46);
  v_46 = t;
  t = term_y_30;
  w_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_46), term_y_30);
  t = k_10(m_4, v_46, w_46, t);
  t = t_46;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm f_47 = NULL;
  ATerm z_30 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_47 = ATgetArgument(t, 0);
          {
            ATerm d_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_31);
      t = f_47;
    }
  else
    {
      t = z_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_47;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_x_25;
  return(t);
}
static ATerm c_10 (ATerm s_77, ATerm t_77, ATerm u_77, ATerm w_77, ATerm t)
{
  ATerm y_46 = NULL,a_47 = NULL;
  t = u_77;
  t = map_1_0(n_4, t);
  y_46 = t;
  {
    static ATerm p_4 (ATerm t)
    {
      t = y_46;
      t = map_1_0(IntroduceBound_0_0, t);
      t = w_77;
      t = mark_buv_0_0(t);
      if(((a_47 != NULL) && (a_47 != t)))
        _fail(t);
      else
        a_47 = t;
      return(t);
    }
    t = scope_2_0(o_4, p_4, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, s_77, t_77, u_77, not_null(a_47));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,y_48 = NULL,g_49 = NULL;
  p_48 = t;
  if(match_cons(t, sym__2))
    {
      q_48 = ATgetArgument(t, 0);
      y_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_48;
  if(match_cons(t, sym_Undefined_0))
    {
      t = q_48;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_e_31;
        }
      else
        {
          t = term_e_31;
        }
    }
  else
    {
      ATerm f_31 = t;
      int g_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm h_31 = ATgetArgument(t, 0);
              g_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(g_31);
          t = q_48;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_e_31;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  r_48 = ATgetArgument(t, 0);
                  s_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm j_31 = t;
                int m_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, s_48, g_49);
                    {
                      ATerm q_31 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm n_25 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              n_25 = ATgetArgument(t, 0);
                              if((n_25 != ATgetArgument(t, 1)))
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
                          t = q_31;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, r_48, term_x_31);
                    LocalPopChoice(m_31);
                  }
                else
                  {
                    t = j_31;
                    t = g_49;
                    if((s_48 != t))
                      {
                        _fail(t);
                      }
                    t = q_48;
                  }
              }
            }
        }
      else
        {
          t = f_31;
          t = q_48;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_e_31;
        }
    }
  return(t);
}
static ATerm d_10 (ATerm d_76, ATerm e_76, ATerm c_76, ATerm t)
{
  ATerm l_49 = NULL,n_49 = NULL,p_49 = NULL;
  t = term_x_25;
  p_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, d_76);
  t = l_11(p_49, d_76, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_49 = ATgetFirst((ATermList) t);
      {
        ATerm q_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_76, l_49);
  t = CompareEntries_0_0(t);
  n_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_76, (ATerm) ATinsert(CheckATermList(c_76), n_49));
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,a_51 = NULL,b_51 = NULL;
  b_51 = t;
  if(match_cons(t, sym__2))
    {
      v_50 = ATgetArgument(t, 0);
      w_50 = ATgetArgument(t, 1);
      t = w_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_50 = ATgetFirst((ATermList) t);
          a_51 = (ATerm) ATgetNext((ATermList) t);
          t = x_50;
          {
            ATerm r_32 = t;
            int s_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm v_32 = ATgetArgument(t, 0);
                    ATerm w_32 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(s_32);
                t = v_50;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = b_51;
                  }
                else
                  {
                    ATerm g_33 = t;
                    int t_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = b_51;
                        t = d_10(v_50, x_50, a_51, t);
                        LocalPopChoice(t_33);
                      }
                    else
                      {
                        t = g_33;
                        t = b_51;
                      }
                  }
              }
            else
              {
                t = r_32;
                t = v_50;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = b_51;
                  }
                else
                  {
                    t = b_51;
                  }
              }
          }
        }
      else
        {
          t = v_50;
          if(match_cons(t, sym_Scopes_0))
            {
              t = b_51;
            }
          else
            {
              t = b_51;
            }
        }
    }
  else
    {
      t = b_51;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL;
  t = map_1_0(q_4, t);
  s_50 = t;
  t = term_x_25;
  t = table_destroy_0_0(t);
  t = term_x_25;
  t_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, s_50);
  t = e_10(t_50, s_50, t);
  t = s_50;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm h_52 = NULL,l_52 = NULL,r_52 = NULL;
  r_52 = t;
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm x_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_33);
        t = r_52;
      }
    else
      {
        t = v_33;
        {
          ATerm y_33 = t;
          int z_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm b_34 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(z_33);
              t = r_52;
            }
          else
            {
              t = y_33;
              {
                ATerm d_34 = t;
                int e_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm f_34 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(e_34);
                    t = r_52;
                  }
                else
                  {
                    t = d_34;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm m_34 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = r_52;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  h_52 = t;
  t = r_52;
  t = SRTS_one(mark_buv_0_0, t);
  l_52 = t;
  t = h_52;
  t = isect_MarkVar_0_0(t);
  t = l_52;
  return(t);
}
static ATerm e_10 (ATerm r_33, ATerm q_33, ATerm t)
{
  static ATerm r_4 (ATerm t)
  {
    ATerm a_53 = NULL,b_53 = NULL,e_53 = NULL;
    if(match_cons(t, sym__2))
      {
        a_53 = ATgetArgument(t, 0);
        b_53 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, r_33, a_53, b_53);
    t = lookup_table_0_1(r_33, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        e_53 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = p_11(a_53, b_53, e_53, t);
    t = (ATerm) ATmakeAppl(sym__3, r_33, a_53, b_53);
    return(t);
  }
  t = q_33;
  t = map_1_0(r_4, t);
  return(t);
}
static ATerm f_10 (ATerm n_37, ATerm t)
{
  t = SSL_hashtable_keys(n_37);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm j_53 = NULL,l_53 = NULL;
  static ATerm s_4 (ATerm t)
  {
    ATerm p_53 = NULL,q_53 = NULL;
    p_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_53), p_53);
    t = l_11(not_null(j_53), p_53, t);
    q_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_53, q_53);
    return(t);
  }
  if(((j_53 != NULL) && (j_53 != t)))
    _fail(t);
  else
    j_53 = t;
  t = lookup_table_0_1(j_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(l_53, t);
  t = map_1_0(s_4, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_x_25;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm q_76, ATerm t)
{
  ATerm a_54 = NULL,d_54 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm t_4 (ATerm t)
    {
      static ATerm h_55 (ATerm e_54, ATerm t)
      {
        ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,l_54 = NULL;
        t = e_54;
        if(match_cons(t, sym__2))
          {
            ATerm q_34 = ATgetArgument(t, 0);
            h_54 = q_34;
            if(match_cons(q_34, sym_Var_1))
              {
                i_54 = ATgetArgument(q_34, 0);
              }
            else
              _fail(t);
            {
              ATerm r_34 = ATgetArgument(t, 1);
              if(((ATgetType(r_34) == AT_LIST) && !(ATisEmpty(r_34))))
                {
                  ATerm s_34 = ATgetFirst((ATermList) r_34);
                  if(match_cons(s_34, sym_Defined_2))
                    {
                      j_54 = ATgetArgument(s_34, 0);
                      {
                        ATerm t_34 = ATgetArgument(s_34, 1);
                        if((ATgetSymbol((ATermAppl) t_34) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  l_54 = (ATerm) ATgetNext((ATermList) r_34);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_76;
        {
          static ATerm u_4 (ATerm t)
          {
            if((i_54 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(u_4, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, h_54, (ATerm) ATinsert(CheckATermList(l_54), (ATerm) ATmakeAppl(sym_Defined_2, j_54, term_x_31)));
        return(t);
      }
      ATerm p_54 = NULL,r_54 = NULL;
      r_54 = t;
      {
        ATerm u_34 = t;
        int v_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                p_54 = ATgetArgument(t, 0);
                {
                  ATerm w_34 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(v_34);
            t = p_54;
            if(match_cons(t, sym_Scopes_0))
              {
                t = r_54;
              }
            else
              {
                ATerm x_34 = t;
                int y_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = h_55(r_54, t);
                    LocalPopChoice(y_34);
                  }
                else
                  {
                    t = x_34;
                    t = r_54;
                  }
              }
          }
        else
          {
            t = u_34;
            {
              ATerm z_34 = t;
              int b_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_55(r_54, t);
                  LocalPopChoice(b_35);
                }
              else
                {
                  t = z_34;
                  t = r_54;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(t_4, t);
  }
  a_54 = t;
  t = term_x_25;
  t = table_destroy_0_0(t);
  t = term_x_25;
  d_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, a_54);
  t = e_10(d_54, a_54, t);
  t = a_54;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm j_56 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_56);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_35);
    }
  else
    {
      t = c_35;
      {
        ATerm e_35 = t;
        int f_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_35);
          }
        else
          {
            t = e_35;
            {
              ATerm g_35 = t;
              int h_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_56 = NULL,p_56 = NULL,t_56 = NULL,v_56 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_56 = ATgetArgument(t, 0);
                      p_56 = ATgetArgument(t, 1);
                      t_56 = ATgetArgument(t, 2);
                      v_56 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_56;
                  t = map_1_0(b_5, t);
                  LocalPopChoice(h_35);
                }
              else
                {
                  t = g_35;
                  {
                    ATerm i_35 = t;
                    int j_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(j_35);
                      }
                    else
                      {
                        t = i_35;
                        t = dynrule_targs_1_0(c_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm l_57 = NULL;
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_57 = ATgetArgument(t, 0);
          {
            ATerm m_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_35);
      t = l_57;
    }
  else
    {
      t = k_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_57;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = map_1_0(e_5, t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm q_57 = NULL;
  ATerm p_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_57 = ATgetArgument(t, 0);
          {
            ATerm r_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_35);
      t = q_57;
    }
  else
    {
      t = p_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_57;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,v_55 = NULL,w_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,d_56 = NULL,e_56 = NULL,i_56 = NULL,m_7 = NULL,l_7 = NULL;
  i_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_56 = ATgetArgument(t, 0);
      d_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_56);
  a_56 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, b_56, d_56);
  l_7 = t;
  t = SSLsetAnnotations(l_7, a_56);
  e_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_55 = ATgetArgument(t, 0);
      {
        ATerm s_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = n_55;
  t = free_vars_3_0(v_4, w_4, tboundin_3_0, t);
  l_55 = t;
  t = undefine_unbound_MarkVar_0_1(l_55, t);
  m_55 = t;
  t = e_56;
  if(match_cons(t, sym_Let_2))
    {
      r_55 = ATgetArgument(t, 0);
      s_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_56);
  q_55 = t;
  t = r_55;
  {
    static ATerm f_5 (ATerm t)
    {
      ATerm t_57 = NULL,u_57 = NULL;
      t_57 = t;
      t = term_x_25;
      t = table_destroy_0_0(t);
      t = term_x_25;
      u_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_x_25, m_55);
      t = e_10(u_57, m_55, t);
      t = t_57;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(f_5, t);
  }
  v_55 = t;
  t = term_x_25;
  t = table_destroy_0_0(t);
  t = term_x_25;
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, m_55);
  t = e_10(z_55, m_55, t);
  t = s_55;
  t = mark_buv_0_0(t);
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, v_55, w_55);
  m_7 = t;
  t = SSLsetAnnotations(m_7, q_55);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm v_35 = t;
  int w_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_57 = NULL,w_57 = NULL,y_57 = NULL,q_7 = NULL;
      y_57 = t;
      if(match_cons(t, sym_Var_1))
        {
          w_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_57);
      v_57 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, w_57);
      q_7 = t;
      t = SSLsetAnnotations(q_7, v_57);
      LocalPopChoice(w_35);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = v_35;
      {
        ATerm x_35 = t;
        int y_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,r_7 = NULL;
            c_58 = t;
            if(match_cons(t, sym_App_2))
              {
                a_58 = ATgetArgument(t, 0);
                b_58 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_58);
            z_57 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, a_58, b_58);
            r_7 = t;
            t = SSLsetAnnotations(r_7, z_57);
            LocalPopChoice(y_35);
            {
              ATerm d_58 = NULL,g_58 = NULL,h_58 = NULL,o_58 = NULL,r_58 = NULL,s_58 = NULL,s_7 = NULL;
              s_58 = t;
              if(match_cons(t, sym_App_2))
                {
                  g_58 = ATgetArgument(t, 0);
                  h_58 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_58);
              d_58 = t;
              t = g_58;
              t = mark_buv_0_0(t);
              o_58 = t;
              t = h_58;
              t = mark_build_vars_0_0(t);
              r_58 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, o_58, r_58);
              s_7 = t;
              t = SSLsetAnnotations(s_7, d_58);
            }
          }
        else
          {
            t = x_35;
            {
              ATerm z_35 = t;
              int a_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL,t_7 = NULL;
                  v_58 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      u_58 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_58);
                  t_58 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, u_58);
                  t_7 = t;
                  t = SSLsetAnnotations(t_7, t_58);
                  LocalPopChoice(a_36);
                  {
                    ATerm w_58 = NULL,x_58 = NULL,b_59 = NULL,c_59 = NULL,v_7 = NULL;
                    c_59 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        x_58 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(c_59);
                    w_58 = t;
                    t = x_58;
                    t = mark_buv_0_0(t);
                    b_59 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, b_59);
                    v_7 = t;
                    t = SSLsetAnnotations(v_7, w_58);
                  }
                }
              else
                {
                  t = z_35;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_10 (ATerm b_33, ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm g_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,s_59 = NULL;
  k_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
  t = l_11(b_33, c_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_36 = ATgetFirst((ATermList) t);
      g_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_33, c_33, (ATerm) ATinsert(CheckATermList(g_59), d_33));
  t = lookup_table_0_1(b_33, t);
  s_59 = t;
  t = (ATerm) ATinsert(CheckATermList(g_59), d_33);
  l_59 = t;
  t = s_59;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(c_33, l_59, m_59, t);
  t = k_59;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL;
  t_59 = t;
  t = term_x_25;
  u_59 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_59);
  v_59 = t;
  t = term_d_36;
  w_59 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_25, (ATerm)ATmakeAppl(sym_Var_1, t_59), term_d_36);
  t = g_10(u_59, v_59, w_59, t);
  t = t_59;
  return(t);
}
static ATerm j_10 (ATerm z_32, ATerm a_33, ATerm t)
{
  ATerm z_59 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_32, a_33);
  t = l_11(z_32, a_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_59 = ATgetFirst((ATermList) t);
      {
        ATerm e_36 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_59;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm d_62 = NULL,f_62 = NULL;
  d_62 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_27 = NULL,i_27 = NULL,j_27 = NULL,q_27 = NULL;
        t = term_x_25;
        q_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_25, d_62);
        t = j_10(q_27, d_62, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm h_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_36) != ATmakeSymbol("q_1", 0, ATtrue)))
              _fail(t);
            f_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, f_62);
        i_27 = t;
        t = (ATerm) ATinsert(ATempty, f_27);
        j_27 = t;
        t = SSLsetAnnotations(i_27, j_27);
        LocalPopChoice(g_36);
      }
    else
      {
        t = f_36;
        {
          ATerm i_36 = t;
          int j_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,q_28 = NULL;
              t = term_x_25;
              q_28 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_25, d_62);
              t = j_10(q_28, d_62, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm k_36 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_36) != ATmakeSymbol("o_1", 0, ATtrue)))
                    _fail(t);
                  g_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, f_62);
              h_28 = t;
              t = (ATerm) ATinsert(ATempty, g_28);
              i_28 = t;
              t = SSLsetAnnotations(h_28, i_28);
              LocalPopChoice(j_36);
            }
          else
            {
              t = i_36;
              {
                ATerm i_29 = NULL,n_29 = NULL,o_29 = NULL,e_30 = NULL;
                t = term_x_25;
                e_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_25, d_62);
                t = j_10(e_30, d_62, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm l_36 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) l_36) != ATmakeSymbol("m_1", 0, ATtrue)))
                      _fail(t);
                    i_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, f_62);
                n_29 = t;
                t = (ATerm) ATinsert(ATempty, i_29);
                o_29 = t;
                t = SSLsetAnnotations(n_29, o_29);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm n_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,d_8 = NULL;
  ATerm m_36 = t;
  int n_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(n_36);
    }
  else
    {
      t = m_36;
    }
  s_62 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_62);
  n_62 = t;
  t = q_62;
  t = DeclareBound_0_0(t);
  r_62 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_62);
  d_8 = t;
  t = SSLsetAnnotations(d_8, n_62);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_62 = NULL,z_62 = NULL,b_63 = NULL,x_8 = NULL;
      b_63 = t;
      if(match_cons(t, sym_Var_1))
        {
          z_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_63);
      y_62 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, z_62);
      x_8 = t;
      t = SSLsetAnnotations(x_8, y_62);
      LocalPopChoice(p_36);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = o_36;
      {
        ATerm q_36 = t;
        int r_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_63 = NULL,h_63 = NULL,j_63 = NULL,k_63 = NULL,j_9 = NULL;
            k_63 = t;
            if(match_cons(t, sym_App_2))
              {
                h_63 = ATgetArgument(t, 0);
                j_63 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_63);
            e_63 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, h_63, j_63);
            j_9 = t;
            t = SSLsetAnnotations(j_9, e_63);
            LocalPopChoice(r_36);
            {
              ATerm l_63 = NULL,m_63 = NULL,q_63 = NULL,r_63 = NULL,t_63 = NULL,c_64 = NULL,t_10 = NULL;
              c_64 = t;
              if(match_cons(t, sym_App_2))
                {
                  m_63 = ATgetArgument(t, 0);
                  q_63 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(c_64);
              l_63 = t;
              t = m_63;
              t = mark_buv_0_0(t);
              r_63 = t;
              t = q_63;
              t = mark_build_vars_0_0(t);
              t_63 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, r_63, t_63);
              t_10 = t;
              t = SSLsetAnnotations(t_10, l_63);
            }
          }
        else
          {
            t = q_36;
            {
              ATerm s_36 = t;
              int t_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL,x_11 = NULL;
                  f_64 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      e_64 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_64);
                  d_64 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, e_64);
                  x_11 = t;
                  t = SSLsetAnnotations(x_11, d_64);
                  LocalPopChoice(t_36);
                  {
                    ATerm i_64 = NULL,m_64 = NULL,o_64 = NULL,t_64 = NULL,y_11 = NULL;
                    t_64 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        m_64 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(t_64);
                    i_64 = t;
                    t = m_64;
                    t = mark_buv_0_0(t);
                    o_64 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, o_64);
                    y_11 = t;
                    t = SSLsetAnnotations(y_11, i_64);
                  }
                }
              else
                {
                  t = s_36;
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
  ATerm v_36 = t;
  int w_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_66 = NULL,d_66 = NULL;
      c_66 = t;
      if(match_cons(t, sym_Match_1))
        {
          d_66 = ATgetArgument(t, 0);
          {
            ATerm i_30 = NULL,k_30 = NULL,f_12 = NULL;
            t = SSLgetAnnotations(c_66);
            i_30 = t;
            t = d_66;
            t = mark_match_vars_0_0(t);
            k_30 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, k_30);
            f_12 = t;
            t = SSLsetAnnotations(f_12, i_30);
          }
        }
      else
        {
          ATerm a_31 = NULL,c_31 = NULL,g_12 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              d_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_66);
          a_31 = t;
          t = d_66;
          t = mark_build_vars_0_0(t);
          c_31 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, c_31);
          g_12 = t;
          t = SSLsetAnnotations(g_12, a_31);
        }
      LocalPopChoice(w_36);
    }
  else
    {
      t = v_36;
      {
        ATerm x_36 = t;
        int y_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(y_36);
          }
        else
          {
            t = x_36;
            {
              ATerm z_36 = t;
              int a_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(a_37);
                }
              else
                {
                  t = z_36;
                  {
                    ATerm b_37 = t;
                    int c_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(c_37);
                      }
                    else
                      {
                        t = b_37;
                        {
                          ATerm d_37 = t;
                          int e_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_66 = NULL,f_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL;
                              e_66 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  f_66 = ATgetArgument(t, 0);
                                  j_66 = ATgetArgument(t, 1);
                                  k_66 = ATgetArgument(t, 2);
                                  l_66 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = e_66;
                              t = c_10(f_66, j_66, k_66, l_66, t);
                              LocalPopChoice(e_37);
                            }
                          else
                            {
                              t = d_37;
                              {
                                ATerm f_37 = t;
                                int r_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(r_37);
                                  }
                                else
                                  {
                                    t = f_37;
                                    {
                                      ATerm s_37 = t;
                                      int t_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm t_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,g_67 = NULL,i_67 = NULL;
                                          c_67 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              d_67 = ATgetArgument(t, 0);
                                              t = d_67;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  t_66 = ATgetArgument(t, 0);
                                                  a_67 = ATgetArgument(t, 1);
                                                  b_67 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = c_67;
                                              t = b_10(t_66, a_67, b_67, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  d_67 = ATgetArgument(t, 0);
                                                  t = d_67;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      t_66 = ATgetArgument(t, 0);
                                                      a_67 = ATgetArgument(t, 1);
                                                      b_67 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = c_67;
                                                  t = a_10(t_66, a_67, b_67, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      d_67 = ATgetArgument(t, 0);
                                                      g_67 = ATgetArgument(t, 1);
                                                      i_67 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = c_67;
                                                  t = z_9(d_67, g_67, i_67, t);
                                                }
                                            }
                                          LocalPopChoice(t_37);
                                        }
                                      else
                                        {
                                          t = s_37;
                                          {
                                            ATerm a_38 = t;
                                            int b_38 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(b_38);
                                              }
                                            else
                                              {
                                                t = a_38;
                                                {
                                                  ATerm c_38 = t;
                                                  int f_38 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(f_38);
                                                    }
                                                  else
                                                    {
                                                      t = c_38;
                                                      {
                                                        ATerm g_38 = t;
                                                        int j_38 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm w_67 = NULL;
                                                            w_67 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm k_38 = ATgetArgument(t, 0);
                                                                ATerm n_38 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = w_67;
                                                            t = y_9(t);
                                                            LocalPopChoice(j_38);
                                                          }
                                                        else
                                                          {
                                                            t = g_38;
                                                            {
                                                              ATerm o_38 = t;
                                                              int p_38 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(p_38);
                                                                }
                                                              else
                                                                {
                                                                  t = o_38;
                                                                  {
                                                                    ATerm q_38 = t;
                                                                    int s_38 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(s_38);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_38;
                                                                        {
                                                                          ATerm u_38 = t;
                                                                          int x_38 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(x_38);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_38;
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
static ATerm k_10 (ATerm t_105 (ATerm), ATerm k_31, ATerm i_31, ATerm t)
{
  ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL,p_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,c_69 = NULL;
  p_68 = t;
  t = t_105(t);
  j_68 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_68, k_31, i_31);
  t = m_11(j_68, k_31, i_31, t);
  {
    ATerm b_39 = t;
    int e_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_69 = NULL;
        t = term_f_39;
        k_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_68, term_f_39);
        t = l_11(j_68, k_69, t);
        LocalPopChoice(e_39);
      }
    else
      {
        t = b_39;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_68 = ATgetFirst((ATermList) t);
      l_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_68, term_f_39, (ATerm) ATinsert(CheckATermList(l_68), (ATerm) ATinsert(CheckATermList(k_68), k_31)));
  t = lookup_table_0_1(j_68, t);
  c_69 = t;
  t = term_f_39;
  s_68 = t;
  t = (ATerm) ATinsert(CheckATermList(l_68), (ATerm) ATinsert(CheckATermList(k_68), k_31));
  t_68 = t;
  t = c_69;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(s_68, t_68, u_68, t);
  t = p_68;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm o_69 = NULL,q_69 = NULL,z_69 = NULL;
  o_69 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_69);
  q_69 = t;
  t = term_k_39;
  z_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_69), term_k_39);
  t = k_10(j_5, q_69, z_69, t);
  t = o_69;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm k_70 = NULL,v_70 = NULL,c_71 = NULL,j_71 = NULL,q_71 = NULL,j_12 = NULL;
  q_71 = t;
  if(match_cons(t, sym_Scope_2))
    {
      v_70 = ATgetArgument(t, 0);
      c_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_71);
  k_70 = t;
  t = c_71;
  {
    static ATerm l_5 (ATerm t)
    {
      ATerm v_71 = NULL;
      v_71 = t;
      t = v_70;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = v_71;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(k_5, l_5, t);
  }
  j_71 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, v_70, j_71);
  j_12 = t;
  t = SSLsetAnnotations(j_12, k_70);
  return(t);
}
ATerm tboundin_3_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL,u_84 = NULL,v_84 = NULL;
  u_84 = t;
  if(match_cons(t, sym_Scope_2))
    {
      v_84 = ATgetArgument(t, 0);
      o_84 = ATgetArgument(t, 1);
      {
        ATerm l_31 = NULL,s_31 = NULL,t_31 = NULL,m_12 = NULL;
        t = SSLgetAnnotations(u_84);
        l_31 = t;
        t = v_84;
        t = r_125(t);
        s_31 = t;
        t = o_84;
        t = p_125(t);
        t_31 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, s_31, t_31);
        m_12 = t;
        t = SSLsetAnnotations(m_12, l_31);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          v_84 = ATgetArgument(t, 0);
          {
            ATerm e_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,o_33 = NULL,p_33 = NULL,s_33 = NULL,p_12 = NULL,n_12 = NULL;
            t = SSLgetAnnotations(u_84);
            e_33 = t;
            t = v_84;
            if(match_cons(t, sym_Rule_3))
              {
                j_33 = ATgetArgument(t, 0);
                k_33 = ATgetArgument(t, 1);
                l_33 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_84);
            i_33 = t;
            t = j_33;
            t = p_125(t);
            m_33 = t;
            t = k_33;
            t = p_125(t);
            o_33 = t;
            t = l_33;
            t = p_125(t);
            p_33 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, m_33, o_33, p_33);
            n_12 = t;
            t = SSLsetAnnotations(n_12, i_33);
            s_33 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, s_33);
            p_12 = t;
            t = SSLsetAnnotations(p_12, e_33);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              v_84 = ATgetArgument(t, 0);
              o_84 = ATgetArgument(t, 1);
              m_84 = ATgetArgument(t, 2);
              {
                ATerm c_34 = NULL,g_34 = NULL,j_34 = NULL,k_34 = NULL,u_12 = NULL;
                t = SSLgetAnnotations(u_84);
                c_34 = t;
                t = v_84;
                t = r_125(t);
                g_34 = t;
                t = o_84;
                t = r_125(t);
                j_34 = t;
                t = m_84;
                t = r_125(t);
                k_34 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, g_34, j_34, k_34);
                u_12 = t;
                t = SSLsetAnnotations(u_12, c_34);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  v_84 = ATgetArgument(t, 0);
                  o_84 = ATgetArgument(t, 1);
                  m_84 = ATgetArgument(t, 2);
                  n_84 = ATgetArgument(t, 3);
                  {
                    ATerm a_35 = NULL,n_35 = NULL,o_35 = NULL,t_35 = NULL,u_35 = NULL,z_12 = NULL;
                    t = SSLgetAnnotations(u_84);
                    a_35 = t;
                    t = v_84;
                    t = r_125(t);
                    n_35 = t;
                    t = o_84;
                    t = r_125(t);
                    o_35 = t;
                    t = m_84;
                    t = r_125(t);
                    t_35 = t;
                    t = n_84;
                    t = p_125(t);
                    u_35 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, n_35, o_35, t_35, u_35);
                    z_12 = t;
                    t = SSLsetAnnotations(z_12, a_35);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_84 = ATgetArgument(t, 0);
                      o_84 = ATgetArgument(t, 1);
                      m_84 = ATgetArgument(t, 2);
                      n_84 = ATgetArgument(t, 3);
                      {
                        ATerm u_36 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,z_37 = NULL,b_13 = NULL;
                        t = SSLgetAnnotations(u_84);
                        u_36 = t;
                        t = v_84;
                        t = r_125(t);
                        u_37 = t;
                        t = o_84;
                        t = r_125(t);
                        v_37 = t;
                        t = m_84;
                        t = r_125(t);
                        w_37 = t;
                        t = n_84;
                        t = p_125(t);
                        z_37 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, u_37, v_37, w_37, z_37);
                        b_13 = t;
                        t = SSLsetAnnotations(b_13, u_36);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          v_84 = ATgetArgument(t, 0);
                          o_84 = ATgetArgument(t, 1);
                          {
                            ATerm r_38 = NULL,v_38 = NULL,w_38 = NULL,m_13 = NULL;
                            t = SSLgetAnnotations(u_84);
                            r_38 = t;
                            t = v_84;
                            t = r_125(t);
                            v_38 = t;
                            t = o_84;
                            t = p_125(t);
                            w_38 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, v_38, w_38);
                            m_13 = t;
                            t = SSLsetAnnotations(m_13, r_38);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              v_84 = ATgetArgument(t, 0);
                              o_84 = ATgetArgument(t, 1);
                              {
                                ATerm q_39 = NULL,z_39 = NULL,a_40 = NULL,x_13 = NULL;
                                t = SSLgetAnnotations(u_84);
                                q_39 = t;
                                t = v_84;
                                t = r_125(t);
                                z_39 = t;
                                t = o_84;
                                t = p_125(t);
                                a_40 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, z_39, a_40);
                                x_13 = t;
                                t = SSLsetAnnotations(x_13, q_39);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  v_84 = ATgetArgument(t, 0);
                                  o_84 = ATgetArgument(t, 1);
                                  {
                                    ATerm m_40 = NULL,p_40 = NULL,q_40 = NULL,e_14 = NULL;
                                    t = SSLgetAnnotations(u_84);
                                    m_40 = t;
                                    t = v_84;
                                    t = r_125(t);
                                    p_40 = t;
                                    t = o_84;
                                    t = p_125(t);
                                    q_40 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, p_40, q_40);
                                    e_14 = t;
                                    t = SSLsetAnnotations(e_14, m_40);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      v_84 = ATgetArgument(t, 0);
                                      {
                                        ATerm x_40 = NULL,c_41 = NULL,y_14 = NULL;
                                        t = SSLgetAnnotations(u_84);
                                        x_40 = t;
                                        t = v_84;
                                        t = p_125(t);
                                        c_41 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, c_41);
                                        y_14 = t;
                                        t = SSLsetAnnotations(y_14, x_40);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          v_84 = ATgetArgument(t, 0);
                                          {
                                            ATerm k_41 = NULL,n_41 = NULL,l_15 = NULL;
                                            t = SSLgetAnnotations(u_84);
                                            k_41 = t;
                                            t = v_84;
                                            t = p_125(t);
                                            n_41 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, n_41);
                                            l_15 = t;
                                            t = SSLsetAnnotations(l_15, k_41);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              v_84 = ATgetArgument(t, 0);
                                              {
                                                ATerm g_42 = NULL,i_42 = NULL,m_15 = NULL;
                                                t = SSLgetAnnotations(u_84);
                                                g_42 = t;
                                                t = v_84;
                                                t = p_125(t);
                                                i_42 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, i_42);
                                                m_15 = t;
                                                t = SSLsetAnnotations(m_15, g_42);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  v_84 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm p_42 = NULL,c_43 = NULL,o_15 = NULL;
                                                    t = SSLgetAnnotations(u_84);
                                                    p_42 = t;
                                                    t = v_84;
                                                    t = p_125(t);
                                                    c_43 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, c_43);
                                                    o_15 = t;
                                                    t = SSLsetAnnotations(o_15, p_42);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm p_43 = NULL,v_43 = NULL,t_15 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      v_84 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(u_84);
                                                  p_43 = t;
                                                  t = v_84;
                                                  t = p_125(t);
                                                  v_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, v_43);
                                                  t_15 = t;
                                                  t = SSLsetAnnotations(t_15, p_43);
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
ATerm dynrule_targs_1_0 (ATerm y_125 (ATerm), ATerm t)
{
  ATerm u_85 = NULL,v_85 = NULL,y_85 = NULL;
  ATerm l_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          u_85 = ATgetArgument(t, 0);
          {
            ATerm n_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_39);
      t = u_85;
      if(match_cons(t, sym_DynRuleId_1))
        {
          v_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_85;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm o_39 = ATgetArgument(t, 0);
          ATerm p_39 = ATgetArgument(t, 1);
          y_85 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_85;
    }
  else
    {
      t = l_39;
      {
        ATerm r_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                u_85 = ATgetArgument(t, 0);
                {
                  ATerm t_39 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_39);
            t = u_85;
            if(match_cons(t, sym_DynRuleId_1))
              {
                v_85 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_85;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm u_39 = ATgetArgument(t, 0);
                ATerm w_39 = ATgetArgument(t, 1);
                y_85 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = y_85;
          }
        else
          {
            t = r_39;
            if(match_cons(t, sym_AddDynRule_2))
              {
                u_85 = ATgetArgument(t, 0);
                {
                  ATerm x_39 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = u_85;
            if(match_cons(t, sym_DynRuleId_1))
              {
                v_85 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_85;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm y_39 = ATgetArgument(t, 0);
                ATerm b_40 = ATgetArgument(t, 1);
                y_85 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = y_85;
          }
      }
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm o_86 = NULL;
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_86 = ATgetArgument(t, 0);
          {
            ATerm f_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_40);
      t = o_86;
    }
  else
    {
      t = d_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_86;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm u_86 = NULL;
  ATerm g_40 = t;
  int h_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_86 = ATgetArgument(t, 0);
          {
            ATerm i_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_40);
      t = u_86;
    }
  else
    {
      t = g_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_86;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm j_86 = NULL;
  ATerm j_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm l_40 = ATgetArgument(t, 0);
          ATerm n_40 = ATgetArgument(t, 1);
          j_86 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(k_40);
      t = j_86;
      t = map_1_0(o_5, t);
    }
  else
    {
      t = j_40;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm o_40 = ATgetArgument(t, 0);
          ATerm r_40 = ATgetArgument(t, 1);
          j_86 = ATgetArgument(t, 2);
          {
            ATerm s_40 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = j_86;
      t = map_1_0(w_5, t);
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm q_87 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_87);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm t_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_40);
    }
  else
    {
      t = t_40;
      {
        ATerm v_40 = t;
        int w_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_40);
          }
        else
          {
            t = v_40;
            {
              ATerm a_41 = t;
              int d_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_87 = ATgetArgument(t, 0);
                      t_87 = ATgetArgument(t, 1);
                      u_87 = ATgetArgument(t, 2);
                      v_87 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_87;
                  t = map_1_0(a_6, t);
                  LocalPopChoice(d_41);
                }
              else
                {
                  t = a_41;
                  {
                    ATerm e_41 = t;
                    int f_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_41);
                      }
                    else
                      {
                        t = e_41;
                        t = dynrule_targs_1_0(b_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm c_88 = NULL;
  ATerm g_41 = t;
  int h_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_88 = ATgetArgument(t, 0);
          {
            ATerm j_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_41);
      t = c_88;
    }
  else
    {
      t = g_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_88;
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = map_1_0(c_6, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm h_88 = NULL;
  ATerm l_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_88 = ATgetArgument(t, 0);
          {
            ATerm u_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_41);
      t = h_88;
    }
  else
    {
      t = l_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_88;
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm l_88 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_88);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm v_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_41);
    }
  else
    {
      t = v_41;
      {
        ATerm y_41 = t;
        int z_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_41);
          }
        else
          {
            t = y_41;
            {
              ATerm a_42 = t;
              int b_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL,s_88 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_88 = ATgetArgument(t, 0);
                      q_88 = ATgetArgument(t, 1);
                      r_88 = ATgetArgument(t, 2);
                      s_88 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_88;
                  t = map_1_0(i_6, t);
                  LocalPopChoice(b_42);
                }
              else
                {
                  t = a_42;
                  {
                    ATerm d_42 = t;
                    int e_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_42);
                      }
                    else
                      {
                        t = d_42;
                        t = dynrule_targs_1_0(j_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm z_88 = NULL;
  ATerm h_42 = t;
  int j_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_88 = ATgetArgument(t, 0);
          {
            ATerm k_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_42);
      t = z_88;
    }
  else
    {
      t = h_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_88;
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = map_1_0(k_6, t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm e_89 = NULL;
  ATerm l_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_89 = ATgetArgument(t, 0);
          {
            ATerm n_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_42);
      t = e_89;
    }
  else
    {
      t = l_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_89;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm i_89 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_89);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm o_42 = t;
  int u_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_42);
    }
  else
    {
      t = o_42;
      {
        ATerm z_42 = t;
        int a_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_43);
          }
        else
          {
            t = z_42;
            {
              ATerm b_43 = t;
              int d_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_89 = NULL,l_89 = NULL,m_89 = NULL,n_89 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_89 = ATgetArgument(t, 0);
                      l_89 = ATgetArgument(t, 1);
                      m_89 = ATgetArgument(t, 2);
                      n_89 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_89;
                  t = map_1_0(s_6, t);
                  LocalPopChoice(d_43);
                }
              else
                {
                  t = b_43;
                  {
                    ATerm e_43 = t;
                    int f_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_43);
                      }
                    else
                      {
                        t = e_43;
                        t = dynrule_targs_1_0(t_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm u_89 = NULL;
  ATerm g_43 = t;
  int h_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_89 = ATgetArgument(t, 0);
          {
            ATerm i_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_43);
      t = u_89;
    }
  else
    {
      t = g_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_89;
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = map_1_0(u_6, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm z_89 = NULL;
  ATerm j_43 = t;
  int l_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_89 = ATgetArgument(t, 0);
          {
            ATerm m_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_43);
      t = z_89;
    }
  else
    {
      t = j_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_89;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm d_90 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_90);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm n_43 = t;
  int o_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_43);
    }
  else
    {
      t = n_43;
      {
        ATerm q_43 = t;
        int r_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_43);
          }
        else
          {
            t = q_43;
            {
              ATerm s_43 = t;
              int u_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_90 = ATgetArgument(t, 0);
                      g_90 = ATgetArgument(t, 1);
                      h_90 = ATgetArgument(t, 2);
                      i_90 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_90;
                  t = map_1_0(c_7, t);
                  LocalPopChoice(u_43);
                }
              else
                {
                  t = s_43;
                  {
                    ATerm w_43 = t;
                    int x_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_43);
                      }
                    else
                      {
                        t = w_43;
                        t = dynrule_targs_1_0(e_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm p_90 = NULL;
  ATerm y_43 = t;
  int d_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_90 = ATgetArgument(t, 0);
          {
            ATerm e_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_44);
      t = p_90;
    }
  else
    {
      t = y_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_90;
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = map_1_0(g_7, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm u_90 = NULL;
  ATerm f_44 = t;
  int h_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_90 = ATgetArgument(t, 0);
          {
            ATerm i_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_44);
      t = u_90;
    }
  else
    {
      t = f_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_90;
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm y_90 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_90);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm j_44 = t;
  int k_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_44);
    }
  else
    {
      t = j_44;
      {
        ATerm l_44 = t;
        int n_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_44);
          }
        else
          {
            t = l_44;
            {
              ATerm o_44 = t;
              int r_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_91 = ATgetArgument(t, 0);
                      b_91 = ATgetArgument(t, 1);
                      c_91 = ATgetArgument(t, 2);
                      d_91 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_91;
                  t = map_1_0(k_7, t);
                  LocalPopChoice(r_44);
                }
              else
                {
                  t = o_44;
                  {
                    ATerm s_44 = t;
                    int u_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_44);
                      }
                    else
                      {
                        t = s_44;
                        t = dynrule_targs_1_0(n_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm k_91 = NULL;
  ATerm v_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_91 = ATgetArgument(t, 0);
          {
            ATerm y_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_44);
      t = k_91;
    }
  else
    {
      t = v_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_91;
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = map_1_0(o_7, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm p_91 = NULL;
  ATerm z_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_91 = ATgetArgument(t, 0);
          {
            ATerm b_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_45);
      t = p_91;
    }
  else
    {
      t = z_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_91;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm o_87 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      o_87 = ATgetArgument(t, 0);
      t = o_87;
      t = free_vars_3_0(y_5, z_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          o_87 = ATgetArgument(t, 0);
          t = o_87;
          t = free_vars_3_0(d_6, e_6, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              o_87 = ATgetArgument(t, 0);
              t = o_87;
              t = free_vars_3_0(n_6, o_6, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  o_87 = ATgetArgument(t, 0);
                  t = o_87;
                  t = free_vars_3_0(a_7, b_7, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      o_87 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = o_87;
                  t = free_vars_3_0(i_7, j_7, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm e_92 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_92);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm c_45 = t;
  int f_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_45);
    }
  else
    {
      t = c_45;
      {
        ATerm g_45 = t;
        int j_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_45);
          }
        else
          {
            t = g_45;
            {
              ATerm k_45 = t;
              int l_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_92 = NULL,h_92 = NULL,i_92 = NULL,j_92 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_92 = ATgetArgument(t, 0);
                      h_92 = ATgetArgument(t, 1);
                      i_92 = ATgetArgument(t, 2);
                      j_92 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_92;
                  t = map_1_0(y_7, t);
                  LocalPopChoice(l_45);
                }
              else
                {
                  t = k_45;
                  {
                    ATerm m_45 = t;
                    int n_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_45);
                      }
                    else
                      {
                        t = m_45;
                        t = dynrule_targs_1_0(z_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm q_92 = NULL;
  ATerm o_45 = t;
  int r_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_92 = ATgetArgument(t, 0);
          {
            ATerm s_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_45);
      t = q_92;
    }
  else
    {
      t = o_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_92;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = map_1_0(a_8, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm v_92 = NULL;
  ATerm u_45 = t;
  int z_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_92 = ATgetArgument(t, 0);
          {
            ATerm b_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_45);
      t = v_92;
    }
  else
    {
      t = u_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_92;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm x_91 = NULL,b_92 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      b_92 = ATgetArgument(t, 0);
      t = b_92;
      if(match_cons(t, sym_Rule_3))
        {
          x_91 = ATgetArgument(t, 0);
          {
            ATerm c_46 = ATgetArgument(t, 1);
          }
          {
            ATerm d_46 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = x_91;
      t = free_vars_3_0(p_7, u_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          b_92 = ATgetArgument(t, 0);
          {
            ATerm e_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_92;
    }
  return(t);
}
static ATerm n_10 (ATerm o_101 (ATerm), ATerm w_25, ATerm v_25, ATerm t)
{
  static ATerm o_93 (ATerm t)
  {
    ATerm j_93 = NULL,k_93 = NULL,l_93 = NULL;
    j_93 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_93 = ATgetFirst((ATermList) t);
            l_93 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_46 = t;
          int g_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_93;
              {
                static ATerm b_8 (ATerm t)
                {
                  t = v_25;
                  return(t);
                }
                t = o_10(o_101, b_8, k_93, l_93, t);
              }
              t = o_93(t);
              LocalPopChoice(g_46);
            }
          else
            {
              t = f_46;
              {
                ATerm g_44 = NULL,q_44 = NULL,e_17 = NULL;
                t = SSLgetAnnotations(j_93);
                g_44 = t;
                t = l_93;
                t = o_93(t);
                q_44 = t;
                t = (ATerm) ATinsert(CheckATermList(q_44), k_93);
                e_17 = t;
                t = SSLsetAnnotations(e_17, g_44);
              }
            }
        }
      }
    return(t);
  }
  t = w_25;
  t = o_93(t);
  return(t);
}
ATerm foldr_3_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm t)
{
  ATerm r_93 = NULL,s_93 = NULL,t_93 = NULL;
  r_93 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_93;
      t = j_104(t);
    }
  else
    {
      ATerm w_93 = NULL,x_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_93 = ATgetFirst((ATermList) t);
          t_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_93;
      t = l_104(t);
      w_93 = t;
      t = t_93;
      t = foldr_3_0(j_104, k_104, l_104, t);
      x_93 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_93, x_93);
      t = k_104(t);
    }
  return(t);
}
static ATerm o_10 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm a_26, ATerm z_25, ATerm t)
{
  t = s_101(t);
  {
    static ATerm c_8 (ATerm t)
    {
      ATerm a_94 = NULL;
      a_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_26, a_94);
      t = r_101(t);
      return(t);
    }
    t = fetch_1_0(c_8, t);
  }
  t = z_25;
  return(t);
}
static ATerm p_10 (ATerm j_101 (ATerm), ATerm u_25, ATerm t_25, ATerm t)
{
  static ATerm q_94 (ATerm t)
  {
    ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL;
    l_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_94;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_94 = ATgetFirst((ATermList) t);
            n_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_46 = t;
          int j_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_94;
              {
                static ATerm e_8 (ATerm t)
                {
                  t = t_25;
                  return(t);
                }
                t = o_10(j_101, e_8, m_94, n_94, t);
              }
              t = q_94(t);
              LocalPopChoice(j_46);
            }
          else
            {
              t = i_46;
              {
                ATerm d_45 = NULL,h_45 = NULL,j_17 = NULL;
                t = SSLgetAnnotations(l_94);
                d_45 = t;
                t = n_94;
                t = q_94(t);
                h_45 = t;
                t = (ATerm) ATinsert(CheckATermList(h_45), m_94);
                j_17 = t;
                t = SSLsetAnnotations(j_17, d_45);
              }
            }
        }
      }
    return(t);
  }
  t = u_25;
  t = q_94(t);
  return(t);
}
ATerm genzip_4_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm t)
{
  static ATerm y_94 (ATerm t)
  {
    ATerm k_46 = t;
    int l_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_116(t);
        LocalPopChoice(l_46);
      }
    else
      {
        t = k_46;
        {
          ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL,q_17 = NULL;
          t = x_116(t);
          x_94 = t;
          if(match_cons(t, sym__2))
            {
              t_94 = ATgetArgument(t, 0);
              u_94 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_94);
          s_94 = t;
          t = t_94;
          t = z_116(t);
          v_94 = t;
          t = u_94;
          t = y_94(t);
          w_94 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_94, w_94);
          q_17 = t;
          t = SSLsetAnnotations(q_17, s_94);
          t = y_116(t);
        }
      }
    return(t);
  }
  t = y_94(t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_46 = ATgetArgument(t, 0);
      if(((ATgetType(m_46) != AT_LIST) || !(ATisEmpty(m_46))))
        _fail(t);
      {
        ATerm n_46 = ATgetArgument(t, 1);
        if(((ATgetType(n_46) != AT_LIST) || !(ATisEmpty(n_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_46 = ATgetArgument(t, 0);
      if(((ATgetType(p_46) == AT_LIST) && !(ATisEmpty(p_46))))
        {
          f_95 = ATgetFirst((ATermList) p_46);
          g_95 = (ATerm) ATgetNext((ATermList) p_46);
        }
      else
        _fail(t);
      {
        ATerm q_46 = ATgetArgument(t, 1);
        if(((ATgetType(q_46) == AT_LIST) && !(ATisEmpty(q_46))))
          {
            h_95 = ATgetFirst((ATermList) q_46);
            i_95 = (ATerm) ATgetNext((ATermList) q_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_95, h_95), (ATerm) ATmakeAppl(sym__2, g_95, i_95));
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm j_95 = NULL,k_95 = NULL;
  if(match_cons(t, sym__2))
    {
      j_95 = ATgetArgument(t, 0);
      k_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_95), j_95);
  return(t);
}
static ATerm u_10 (ATerm i_744, ATerm n_744, ATerm g_75, ATerm t)
{
  ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL;
  t = SSL_explode_term(n_744);
  if(match_cons(t, sym__2))
    {
      a_95 = ATgetArgument(t, 0);
      c_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(i_744);
  if(match_cons(t, sym__2))
    {
      if((a_95 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_95, c_95);
  t = genzip_4_0(h_8, i_8, j_8, _id, t);
  d_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_95, g_75);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm v_114 (ATerm), ATerm w_114 (ATerm), ATerm t)
{
  static ATerm m_95 (ATerm t)
  {
    ATerm x_46 = t;
    int c_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_114(t);
        LocalPopChoice(c_47);
      }
    else
      {
        t = x_46;
        t = w_114(t);
        t = m_95(t);
      }
    return(t);
  }
  t = m_95(t);
  return(t);
}
ATerm for_3_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t)
{
  t = y_114(t);
  t = while_not_2_0(z_114, a_115, t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm t_95 = NULL;
  t_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_95);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL,t_17 = NULL;
  x_95 = t;
  if(match_cons(t, sym__2))
    {
      v_95 = ATgetArgument(t, 0);
      w_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_95);
  u_95 = t;
  t = w_95;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_95, w_95);
  t_17 = t;
  t = SSLsetAnnotations(t_17, u_95);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL;
  q_96 = t;
  if(match_cons(t, sym__2))
    {
      r_96 = ATgetArgument(t, 0);
      s_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_96;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_96 = ATgetFirst((ATermList) t);
      u_96 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_47 = t;
        int e_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_97(r_96, s_96, q_96, t);
            LocalPopChoice(e_47);
          }
        else
          {
            t = d_47;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_96), t_96), u_96);
          }
      }
    }
  else
    {
      t = e_97(r_96, s_96, q_96, t);
    }
  return(t);
}
static ATerm e_97 (ATerm y_95, ATerm z_95, ATerm a_96, ATerm t)
{
  ATerm b_96 = NULL,e_96 = NULL,u_17 = NULL,h_96 = NULL,i_96 = NULL,j_96 = NULL,k_96 = NULL;
  t = SSLgetAnnotations(a_96);
  b_96 = t;
  t = z_95;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_96 = ATgetFirst((ATermList) t);
      k_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_96;
  if(match_cons(t, sym__2))
    {
      i_96 = ATgetArgument(t, 0);
      j_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_47 = t;
    int h_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_96;
        if((i_96 != t))
          {
            _fail(t);
          }
        t = k_96;
        LocalPopChoice(h_47);
      }
    else
      {
        t = g_47;
        t = z_95;
        t = u_10(i_96, j_96, k_96, t);
      }
  }
  e_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_95, e_96);
  u_17 = t;
  t = SSLsetAnnotations(u_17, b_96);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm d_97 = NULL;
  if(match_cons(t, sym__2))
    {
      d_97 = ATgetArgument(t, 0);
      if((d_97 != ATgetArgument(t, 1)))
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
  ATerm i_47 = t;
  int j_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(l_8, w_8, y_8, t);
      LocalPopChoice(j_47);
    }
  else
    {
      t = i_47;
      {
        ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL;
        y_96 = t;
        if(match_cons(t, sym__2))
          {
            z_96 = ATgetArgument(t, 0);
            a_97 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_96;
        t = p_10(z_8, z_96, a_97, t);
      }
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL;
  if(match_cons(t, sym__2))
    {
      r_46 = ATgetArgument(t, 0);
      s_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(q_9, r_46, s_46, t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm u_46 = NULL;
  if(match_cons(t, sym__2))
    {
      u_46 = ATgetArgument(t, 0);
      if((u_46 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL;
  if(match_cons(t, sym__2))
    {
      k_47 = ATgetArgument(t, 0);
      l_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(s_11, k_47, l_47, t);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm m_47 = NULL;
  if(match_cons(t, sym__2))
    {
      m_47 = ATgetArgument(t, 0);
      if((m_47 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm c_129 (ATerm), ATerm d_129 (ATerm), ATerm e_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm s_97 (ATerm t)
  {
    ATerm n_47 = t;
    int o_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_129(t);
        LocalPopChoice(o_47);
      }
    else
      {
        t = n_47;
        {
          ATerm q_47 = t;
          int s_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_97 = NULL,h_97 = NULL,q_45 = NULL,a_46 = NULL;
              g_97 = t;
              t = d_129(t);
              h_97 = t;
              t = g_97;
              {
                static ATerm b_9 (ATerm t)
                {
                  ATerm j_97 = NULL;
                  t = s_97(t);
                  j_97 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_97, h_97);
                  t = diff_0_0(t);
                  return(t);
                }
                t = e_129(b_9, s_97, g_9, t);
              }
              a_46 = t;
              t = SSL_explode_term(a_46);
              if(match_cons(t, sym__2))
                {
                  ATerm t_47 = ATgetArgument(t, 0);
                  q_45 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_45;
              t = foldr_3_0(k_9, l_9, _id, t);
              LocalPopChoice(s_47);
            }
          else
            {
              t = q_47;
              {
                ATerm z_46 = NULL,b_47 = NULL;
                b_47 = t;
                t = SSL_explode_term(b_47);
                if(match_cons(t, sym__2))
                  {
                    ATerm w_47 = ATgetArgument(t, 0);
                    z_46 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_46;
                t = foldr_3_0(v_10, k_11, s_97, t);
              }
            }
        }
      }
    return(t);
  }
  t = s_97(t);
  return(t);
}
ATerm topdown_1_0 (ATerm d_106 (ATerm), ATerm t)
{
  static ATerm a_12 (ATerm t)
  {
    t = topdown_1_0(d_106, t);
    return(t);
  }
  t = d_106(t);
  t = SRTS_all(a_12, t);
  return(t);
}
static ATerm w_10 (ATerm t_32, ATerm u_32, ATerm t)
{
  ATerm t_97 = NULL,u_97 = NULL;
  u_97 = t;
  {
    ATerm x_47 = t;
    int y_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
        t = l_11(t_32, u_32, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_48 = ATgetFirst((ATermList) t);
            t_97 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_47);
        {
          ATerm v_97 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, t_32, u_32, t_97);
          t = lookup_table_0_1(t_32, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_97 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_11(u_32, t_97, v_97, t);
          t = (ATerm) ATmakeAppl(sym__3, t_32, u_32, t_97);
        }
      }
    else
      {
        t = x_47;
        {
          ATerm x_97 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
          t = lookup_table_0_1(t_32, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              x_97 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_11(u_32, x_97, t);
          t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
        }
      }
  }
  t = u_97;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  ATerm z_97 = NULL,a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL,f_98 = NULL;
  c_98 = t;
  t = q_105(t);
  b_98 = t;
  {
    ATerm c_48 = t;
    int d_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_98 = NULL;
        t = term_f_39;
        g_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_98, term_f_39);
        t = l_11(b_98, g_98, t);
        LocalPopChoice(d_48);
      }
    else
      {
        t = c_48;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_98 = ATgetFirst((ATermList) t);
      z_97 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_98, term_f_39, z_97);
  t = lookup_table_0_1(b_98, t);
  f_98 = t;
  t = term_f_39;
  d_98 = t;
  t = f_98;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(d_98, z_97, e_98, t);
  t = a_98;
  {
    static ATerm b_12 (ATerm t)
    {
      ATerm h_98 = NULL;
      h_98 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_98, h_98);
      t = w_10(b_98, h_98, t);
      return(t);
    }
    t = map_1_0(b_12, t);
  }
  t = c_98;
  return(t);
}
ATerm restore_always_2_0 (ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm t)
{
  ATerm f_48 = t;
  int g_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_119(t);
      t = z_119(t);
      LocalPopChoice(g_48);
    }
  else
    {
      t = f_48;
      t = z_119(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_105 (ATerm), ATerm t)
{
  ATerm j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL,n_98 = NULL,o_98 = NULL,p_98 = NULL;
  k_98 = t;
  t = p_105(t);
  j_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_98, term_f_39);
  {
    ATerm h_48 = t;
    int i_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_98 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_48 = ATgetArgument(t, 0);
            ATerm k_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_39;
        t_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_98, term_f_39);
        t = l_11(j_98, t_98, t);
        LocalPopChoice(i_48);
      }
    else
      {
        t = h_48;
        t = (ATerm) ATempty;
      }
  }
  l_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_98, term_f_39, (ATerm) ATinsert(CheckATermList(l_98), (ATerm) ATempty));
  t = lookup_table_0_1(j_98, t);
  p_98 = t;
  t = term_f_39;
  m_98 = t;
  t = (ATerm) ATinsert(CheckATermList(l_98), (ATerm) ATempty);
  n_98 = t;
  t = p_98;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(m_98, n_98, o_98, t);
  t = k_98;
  return(t);
}
ATerm scope_2_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t)
{
  static ATerm c_12 (ATerm t)
  {
    t = end_scope_1_0(r_105, t);
    return(t);
  }
  t = begin_scope_1_0(r_105, t);
  t = restore_always_2_0(s_105, c_12, t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_d_18;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = scope_2_0(h_12, i_12, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_x_25;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm c_99 = NULL,d_99 = NULL,e_99 = NULL;
  t = topdown_1_0(k_12, t);
  e_99 = t;
  t = free_vars_3_0(c_13, d_13, tboundin_3_0, t);
  d_99 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, d_99, e_99);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm l_48 = ATgetArgument(t, 0);
      c_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_99;
  {
    ATerm m_48 = t;
    int t_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        LocalPopChoice(t_48);
      }
    else
      {
        t = m_48;
        {
          ATerm u_48 = t;
          int v_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              LocalPopChoice(v_48);
            }
          else
            {
              t = u_48;
              {
                ATerm k_100 = NULL,l_100 = NULL,m_100 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    k_100 = ATgetArgument(t, 0);
                    l_100 = ATgetArgument(t, 1);
                    m_100 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = c_99;
                t = x_9(k_100, l_100, m_100, t);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm l_99 = NULL,m_99 = NULL;
  m_99 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_99 = ATgetArgument(t, 0);
      {
        ATerm w_48 = t;
        int x_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_47 = NULL,r_47 = NULL,b_18 = NULL;
            t = SSLgetAnnotations(m_99);
            p_47 = t;
            t = l_99;
            if(match_cons(t, sym_ListVar_1))
              {
                r_47 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, r_47);
            b_18 = t;
            t = SSLsetAnnotations(b_18, p_47);
            LocalPopChoice(x_48);
          }
        else
          {
            t = w_48;
            t = m_99;
          }
      }
    }
  else
    {
      t = m_99;
    }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm p_99 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_99);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm z_48 = t;
  int a_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_49);
    }
  else
    {
      t = z_48;
      {
        ATerm b_49 = t;
        int c_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_49);
          }
        else
          {
            t = b_49;
            {
              ATerm d_49 = t;
              int e_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_99 = NULL,s_99 = NULL,t_99 = NULL,u_99 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_99 = ATgetArgument(t, 0);
                      s_99 = ATgetArgument(t, 1);
                      t_99 = ATgetArgument(t, 2);
                      u_99 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_99;
                  t = map_1_0(f_13, t);
                  LocalPopChoice(e_49);
                }
              else
                {
                  t = d_49;
                  {
                    ATerm f_49 = t;
                    int h_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(h_49);
                      }
                    else
                      {
                        t = f_49;
                        t = dynrule_targs_1_0(o_13, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm b_100 = NULL;
  ATerm i_49 = t;
  int j_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_100 = ATgetArgument(t, 0);
          {
            ATerm k_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_49);
      t = b_100;
    }
  else
    {
      t = i_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_100;
    }
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = map_1_0(s_13, t);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm g_100 = NULL;
  ATerm q_49 = t;
  int r_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_100 = ATgetArgument(t, 0);
          {
            ATerm u_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_49);
      t = g_100;
    }
  else
    {
      t = q_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_100;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm b_99 = NULL;
  b_99 = t;
  t = scope_2_0(d_12, e_12, t);
  t = b_99;
  return(t);
}
ATerm filter_1_0 (ATerm w_118 (ATerm), ATerm t)
{
  ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL;
  c_101 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_101;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_101 = ATgetFirst((ATermList) t);
          e_101 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm v_49 = t;
        int a_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_48 = NULL,n_48 = NULL,o_48 = NULL,e_18 = NULL;
            t = SSLgetAnnotations(c_101);
            e_48 = t;
            t = d_101;
            t = w_118(t);
            n_48 = t;
            t = e_101;
            t = filter_1_0(w_118, t);
            o_48 = t;
            t = (ATerm) ATinsert(CheckATermList(o_48), n_48);
            e_18 = t;
            t = SSLsetAnnotations(e_18, e_48);
            LocalPopChoice(a_50);
          }
        else
          {
            t = v_49;
            t = e_101;
            t = filter_1_0(w_118, t);
          }
      }
    }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm d_102 = NULL,e_102 = NULL,f_102 = NULL,b_19 = NULL;
  f_102 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      e_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_102);
  d_102 = t;
  t = e_102;
  {
    ATerm b_50 = t;
    int e_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_102;
        LocalPopChoice(e_50);
      }
    else
      {
        t = b_50;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_102;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Overlays_1, e_102);
  b_19 = t;
  t = SSLsetAnnotations(b_19, d_102);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = Cons_2_0(z_13, b_14, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm h_102 = NULL,i_102 = NULL,l_102 = NULL,c_19 = NULL;
  l_102 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      i_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_102);
  h_102 = t;
  t = i_102;
  {
    ATerm f_50 = t;
    int g_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_102;
        LocalPopChoice(g_50);
      }
    else
      {
        t = f_50;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_102;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Strategies_1, i_102);
  c_19 = t;
  t = SSLsetAnnotations(c_19, h_102);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm l_101 = NULL,m_101 = NULL,n_101 = NULL,q_101 = NULL,t_101 = NULL,u_101 = NULL,v_101 = NULL,w_101 = NULL,y_101 = NULL,b_102 = NULL,c_102 = NULL,e_19 = NULL,d_19 = NULL,a_19 = NULL;
  c_102 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_102);
  l_101 = t;
  t = m_101;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_101 = ATgetFirst((ATermList) t);
      t_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_101);
  n_101 = t;
  t = q_101;
  if(match_cons(t, sym_Signature_1))
    {
      y_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_101);
  w_101 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, y_101);
  a_19 = t;
  t = SSLsetAnnotations(a_19, w_101);
  b_102 = t;
  t = t_101;
  t = Cons_2_0(u_13, y_13, t);
  u_101 = t;
  t = (ATerm) ATinsert(CheckATermList(u_101), b_102);
  d_19 = t;
  t = SSLsetAnnotations(d_19, n_101);
  v_101 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, v_101);
  e_19 = t;
  t = SSLsetAnnotations(e_19, l_101);
  return(t);
}
static ATerm y_10 (ATerm z_43, ATerm a_44, ATerm t)
{
  ATerm n_102 = NULL;
  t = SSL_fputc(z_43, a_44);
  n_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_102);
  return(t);
}
static ATerm z_10 (ATerm w_49, ATerm x_49, ATerm t)
{
  ATerm o_102 = NULL;
  t = SSL_write_term_to_stream_text(w_49, x_49);
  o_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_102);
  return(t);
}
static ATerm b_11 (ATerm t_115 (ATerm), ATerm f_470, ATerm c_50, ATerm t)
{
  ATerm p_102 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_470, term_h_50);
  t = f_11(t);
  p_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_102, c_50);
  t = t_115(t);
  t = fclose_0_0(t);
  t = c_50;
  return(t);
}
static ATerm a_11 (ATerm s_49, ATerm t_49, ATerm t)
{
  ATerm s_102 = NULL;
  t = SSL_write_term_to_stream_baf(s_49, t_49);
  s_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_102);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm z_102 = NULL,a_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_50 = ATgetArgument(t, 0);
      if(match_cons(k_50, sym_Stream_1))
        {
          z_102 = ATgetArgument(k_50, 0);
        }
      else
        _fail(t);
      a_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(z_102, a_103, t);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm b_103 = NULL,c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_50 = ATgetArgument(t, 0);
      if(match_cons(l_50, sym_Stream_1))
        {
          e_103 = ATgetArgument(l_50, 0);
        }
      else
        _fail(t);
      f_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(e_103, f_103, t);
  b_103 = t;
  t = term_o_50;
  c_103 = t;
  t = b_103;
  if(match_cons(t, sym_Stream_1))
    {
      d_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_50, b_103);
  t = y_10(c_103, d_103, t);
  return(t);
}
ATerm output_1_0 (ATerm w_132 (ATerm), ATerm t)
{
  ATerm t_102 = NULL,u_102 = NULL;
  t = w_132(t);
  u_102 = t;
  {
    ATerm p_50 = t;
    int q_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_102 = NULL,w_102 = NULL;
        t = term_k_22;
        v_102 = t;
        t = term_r_50;
        w_102 = t;
        t = term_u_50;
        t = l_11(v_102, w_102, t);
        LocalPopChoice(q_50);
      }
    else
      {
        t = p_50;
        t = term_y_50;
      }
  }
  t_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_102, u_102);
  {
    ATerm z_50 = t;
    int c_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_102 = NULL,y_102 = NULL;
        t = term_k_22;
        x_102 = t;
        t = term_d_51;
        y_102 = t;
        t = term_e_51;
        t = l_11(x_102, y_102, t);
        t = (ATerm) ATmakeAppl(sym__2, t_102, u_102);
        LocalPopChoice(c_51);
        if(match_cons(t, sym__2))
          {
            ATerm f_51 = ATgetArgument(t, 0);
            ATerm g_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_11(f_14, t_102, u_102, t);
      }
    else
      {
        t = z_50;
        if(match_cons(t, sym__2))
          {
            ATerm h_51 = ATgetArgument(t, 0);
            ATerm i_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_11(g_14, t_102, u_102, t);
      }
  }
  return(t);
}
static ATerm t_103 (ATerm n_103, ATerm t)
{
  t = SSL_fclose(n_103);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_103 = NULL,r_103 = NULL;
  r_103 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_103 = ATgetArgument(t, 0);
      {
        ATerm j_51 = t;
        int k_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_103);
            LocalPopChoice(k_51);
          }
        else
          {
            t = j_51;
            t = t_103(r_103, t);
          }
      }
    }
  else
    {
      t = t_103(r_103, t);
    }
  return(t);
}
static ATerm c_11 (ATerm y_49, ATerm t)
{
  t = SSL_read_term_from_stream(y_49);
  return(t);
}
static ATerm d_11 (ATerm s_42, ATerm t_42, ATerm t)
{
  t = SSL_strcat(s_42, t_42);
  return(t);
}
static ATerm e_11 (ATerm b_44, ATerm c_44, ATerm t)
{
  ATerm u_103 = NULL;
  t = SSL_fopen(b_44, c_44);
  u_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_103);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_103 = NULL;
  t = SSL_stdin_stream();
  v_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_103);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_103 = NULL;
  t = SSL_stdout_stream();
  w_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_103);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_103 = NULL;
  t = SSL_stderr_stream();
  x_103 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_103);
  return(t);
}
static ATerm j_105 (ATerm d_104, ATerm t)
{
  ATerm e_104 = NULL;
  t = SSL_explode_term(d_104);
  if(match_cons(t, sym__2))
    {
      ATerm l_51 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_51) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_51 = ATgetArgument(t, 1);
        if(((ATgetType(m_51) == AT_LIST) && !(ATisEmpty(m_51))))
          {
            e_104 = ATgetFirst((ATermList) m_51);
            {
              ATerm n_51 = (ATerm) ATgetNext((ATermList) m_51);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_104;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_104;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_104;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_104;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_105 (ATerm m_104, ATerm n_104, ATerm o_104, ATerm t)
{
  ATerm p_104 = NULL,q_104 = NULL,r_104 = NULL,u_104 = NULL,t_19 = NULL;
  t = SSLgetAnnotations(o_104);
  r_104 = t;
  t = m_104;
  if(match_cons(t, sym_Path_1))
    {
      u_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_104, n_104);
  t_19 = t;
  t = SSLsetAnnotations(t_19, r_104);
  if(match_cons(t, sym__2))
    {
      p_104 = ATgetArgument(t, 0);
      q_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(p_104, q_104, t);
  return(t);
}
static ATerm l_105 (ATerm w_104, ATerm x_104, ATerm y_104, ATerm t)
{
  ATerm z_104 = NULL,a_105 = NULL,b_105 = NULL,e_105 = NULL,u_19 = NULL;
  t = SSLgetAnnotations(y_104);
  b_105 = t;
  t = SSL_is_string(w_104);
  e_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_105, x_104);
  u_19 = t;
  t = SSLsetAnnotations(u_19, b_105);
  if(match_cons(t, sym__2))
    {
      z_104 = ATgetArgument(t, 0);
      a_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(z_104, a_105, t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm g_105 = NULL,h_105 = NULL,i_105 = NULL;
  g_105 = t;
  if(match_cons(t, sym__2))
    {
      h_105 = ATgetArgument(t, 0);
      i_105 = ATgetArgument(t, 1);
      {
        ATerm o_51 = t;
        int p_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_105(g_105, t);
            LocalPopChoice(p_51);
          }
        else
          {
            t = o_51;
            {
              ATerm q_51 = t;
              int r_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_105(h_105, i_105, g_105, t);
                  LocalPopChoice(r_51);
                }
              else
                {
                  t = q_51;
                  t = l_105(h_105, i_105, g_105, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_105(g_105, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_105 = NULL,o_105 = NULL,u_105 = NULL,a_106 = NULL;
  a_106 = t;
  {
    ATerm t_51 = t;
    int u_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_106, term_v_51);
        t = f_11(t);
        LocalPopChoice(u_51);
      }
    else
      {
        t = t_51;
        {
          ATerm m_49 = NULL,o_49 = NULL;
          t = term_w_51;
          o_49 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_51, a_106);
          t = d_11(o_49, a_106, t);
          m_49 = t;
          t = SSL_perror(m_49);
          _fail(t);
        }
      }
  }
  o_105 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(u_105, t);
  n_105 = t;
  t = o_105;
  t = fclose_0_0(t);
  t = n_105;
  return(t);
}
ATerm input_1_0 (ATerm x_132 (ATerm), ATerm t)
{
  ATerm x_51 = t;
  int y_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_106 = NULL,f_106 = NULL;
      t = term_k_22;
      e_106 = t;
      t = term_a_52;
      f_106 = t;
      t = term_b_52;
      t = l_11(e_106, f_106, t);
      LocalPopChoice(y_51);
    }
  else
    {
      t = x_51;
      t = term_c_52;
    }
  t = ReadFromFile_0_0(t);
  t = x_132(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_106 = NULL,h_106 = NULL,i_106 = NULL,j_106 = NULL,k_106 = NULL;
  g_106 = t;
  t = term_d_52;
  t = whoami_0_0(t);
  h_106 = t;
  t = term_d_21;
  j_106 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_52), h_106), term_e_52);
  k_106 = t;
  t = SSL_printnl(j_106, k_106);
  t = term_i_52;
  i_106 = t;
  t = SSL_exit(i_106);
  t = g_106;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm m_106 = NULL;
  m_106 = t;
  if(match_string(t, "-k"))
    {
      t = m_106;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_106;
    }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm n_106 = NULL,o_106 = NULL,p_106 = NULL;
  n_106 = t;
  t = SSL_string_to_int(n_106);
  o_106 = t;
  t = term_j_52;
  p_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_52, o_106);
  t = o_11(p_106, o_106, t);
  t = n_106;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  t = term_k_52;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_14, a_15, c_15, t);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm r_106 = NULL;
  r_106 = t;
  if(match_string(t, "-S"))
    {
      t = r_106;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_106;
    }
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm s_106 = NULL,t_106 = NULL;
  t = term_m_52;
  s_106 = t;
  t = term_n_52;
  t_106 = t;
  t = term_p_52;
  t = o_11(s_106, t_106, t);
  t = term_q_52;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = term_u_52;
  return(t);
}
static ATerm r_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm u_106 = NULL,v_106 = NULL,w_106 = NULL;
  u_106 = t;
  t = SSL_string_to_int(u_106);
  v_106 = t;
  t = term_m_52;
  w_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_52, v_106);
  t = o_11(w_106, v_106, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_106);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  t = term_v_52;
  return(t);
}
static ATerm w_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm x_106 = NULL,y_106 = NULL;
  t = term_w_52;
  x_106 = t;
  t = term_d_52;
  y_106 = t;
  t = term_x_52;
  t = o_11(x_106, y_106, t);
  t = term_y_52;
  return(t);
}
static ATerm z_15 (ATerm t)
{
  t = term_z_52;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_53 = t;
  int d_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_15, n_15, p_15, t);
      LocalPopChoice(d_53);
    }
  else
    {
      t = c_53;
      {
        ATerm g_53 = t;
        int h_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_15, u_15, v_15, t);
            LocalPopChoice(h_53);
          }
        else
          {
            t = g_53;
            t = Option_3_0(w_15, y_15, z_15, t);
          }
      }
    }
  return(t);
}
static ATerm o_11 (ATerm u_47, ATerm v_47, ATerm t)
{
  ATerm z_106 = NULL,a_107 = NULL;
  t = term_k_22;
  z_106 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_22, u_47, v_47);
  t = lookup_table_0_1(z_106, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(u_47, v_47, a_107, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_22, u_47, v_47);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm e_107 = NULL,f_107 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_107 = NULL,h_107 = NULL,i_107 = NULL;
      t = term_d_52;
      t = f_0(t);
      g_107 = t;
      t = term_i_53;
      h_107 = t;
      t = term_m_53;
      i_107 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_53, term_m_53, g_107);
      t = m_11(h_107, i_107, g_107, t);
      _fail(t);
    }
  else
    {
      ATerm l_107 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_107 = ATgetFirst((ATermList) t);
          f_107 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_107;
      t = b_0(t);
      t = term_d_52;
      t = d_0(t);
      l_107 = t;
      t = (ATerm) ATinsert(CheckATermList(f_107), l_107);
    }
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm n_107 = NULL;
  n_107 = t;
  if(match_string(t, "-o"))
    {
      t = n_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_107;
    }
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm o_107 = NULL,p_107 = NULL;
  o_107 = t;
  t = term_r_50;
  p_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_50, o_107);
  t = o_11(p_107, o_107, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_107);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  t = term_n_53;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_16, b_16, c_16, t);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm r_107 = NULL;
  r_107 = t;
  if(match_string(t, "-i"))
    {
      t = r_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_107;
    }
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm s_107 = NULL,t_107 = NULL;
  s_107 = t;
  t = term_a_52;
  t_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_52, s_107);
  t = o_11(t_107, s_107, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_107);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = term_o_53;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_16, f_16, g_16, t);
  return(t);
}
ATerm at_end_1_0 (ATerm q_102 (ATerm), ATerm t)
{
  static ATerm q_108 (ATerm t)
  {
    ATerm n_108 = NULL,o_108 = NULL,p_108 = NULL;
    p_108 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_108 = ATgetFirst((ATermList) t);
        o_108 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_49 = NULL,d_50 = NULL,x_19 = NULL;
          t = SSLgetAnnotations(p_108);
          z_49 = t;
          t = o_108;
          t = q_108(t);
          d_50 = t;
          t = (ATerm) ATinsert(CheckATermList(d_50), n_108);
          x_19 = t;
          t = SSLsetAnnotations(x_19, z_49);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_108;
        t = q_102(t);
      }
    return(t);
  }
  t = q_108(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_107 = NULL,y_107 = NULL,z_107 = NULL;
  x_107 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_107;
    }
  else
    {
      static ATerm h_16 (ATerm t)
      {
        t = not_null(z_107);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_107 = ATgetFirst((ATermList) t);
          if(((z_107 != NULL) && (z_107 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_107 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_107;
      t = at_end_1_0(h_16, t);
    }
  return(t);
}
static ATerm c_109 (ATerm u_108, ATerm t)
{
  ATerm v_108 = NULL;
  t = SSL_explode_term(u_108);
  if(match_cons(t, sym__2))
    {
      ATerm r_53 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_53) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_108;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_108 = NULL,y_108 = NULL,z_108 = NULL;
  z_108 = t;
  if(match_cons(t, sym__2))
    {
      x_108 = ATgetArgument(t, 0);
      y_108 = ATgetArgument(t, 1);
      {
        ATerm s_53 = t;
        int t_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm j_16 (ATerm t)
            {
              t = y_108;
              return(t);
            }
            t = x_108;
            t = at_end_1_0(j_16, t);
            LocalPopChoice(t_53);
          }
        else
          {
            t = s_53;
            t = c_109(z_108, t);
          }
      }
    }
  else
    {
      t = c_109(z_108, t);
    }
  return(t);
}
static ATerm x_10 (ATerm a_48, ATerm z_47, ATerm t)
{
  ATerm d_109 = NULL,e_109 = NULL,f_109 = NULL,g_109 = NULL;
  t = a_48;
  {
    ATerm u_53 = t;
    int w_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_109 = NULL;
        t = term_k_22;
        i_109 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_22, a_48);
        t = l_11(i_109, a_48, t);
        LocalPopChoice(w_53);
      }
    else
      {
        t = u_53;
        t = (ATerm) ATempty;
      }
  }
  e_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_47, e_109);
  t = conc_0_0(t);
  d_109 = t;
  t = term_k_22;
  f_109 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_22, a_48, d_109);
  t = lookup_table_0_1(f_109, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(a_48, d_109, g_109, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_22, a_48, d_109);
  return(t);
}
static ATerm m_11 (ATerm o_32, ATerm p_32, ATerm n_32, ATerm t)
{
  ATerm k_109 = NULL,l_109 = NULL,m_109 = NULL,n_109 = NULL,o_109 = NULL;
  k_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_32, p_32);
  {
    ATerm x_53 = t;
    int z_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_54 = ATgetArgument(t, 0);
            ATerm c_54 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_32, p_32);
        t = l_11(o_32, p_32, t);
        LocalPopChoice(z_53);
      }
    else
      {
        t = x_53;
        t = (ATerm) ATempty;
      }
  }
  l_109 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_32, p_32, (ATerm) ATinsert(CheckATermList(l_109), n_32));
  t = lookup_table_0_1(o_32, t);
  o_109 = t;
  t = (ATerm) ATinsert(CheckATermList(l_109), n_32);
  m_109 = t;
  t = o_109;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(p_32, m_109, n_109, t);
  t = k_109;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm v_109 = NULL,w_109 = NULL,x_109 = NULL,y_109 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_109 = NULL,a_110 = NULL,b_110 = NULL;
      t = term_d_52;
      t = m_0(t);
      z_109 = t;
      t = term_i_53;
      a_110 = t;
      t = term_m_53;
      b_110 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_53, term_m_53, z_109);
      t = m_11(a_110, b_110, z_109, t);
      _fail(t);
    }
  else
    {
      ATerm f_110 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_109 = ATgetFirst((ATermList) t);
          w_109 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_109;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_109 = ATgetFirst((ATermList) t);
          y_109 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_109;
      t = j_0(t);
      t = x_109;
      t = l_0(t);
      f_110 = t;
      t = (ATerm) ATinsert(CheckATermList(y_109), f_110);
    }
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm h_110 = NULL;
  h_110 = t;
  if(match_string(t, "--warning"))
    {
      t = h_110;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = h_110;
    }
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm i_110 = NULL,j_110 = NULL,k_110 = NULL;
  i_110 = t;
  t = term_f_54;
  j_110 = t;
  t = (ATerm) ATinsert(ATempty, i_110);
  k_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_54, (ATerm) ATinsert(ATempty, i_110));
  t = x_10(j_110, k_110, t);
  t = term_d_52;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = term_g_54;
  return(t);
}
static ATerm n_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm l_110 = NULL,m_110 = NULL,n_110 = NULL;
  l_110 = t;
  t = term_m_22;
  m_110 = t;
  t = term_n_52;
  n_110 = t;
  t = term_k_54;
  t = o_11(m_110, n_110, t);
  t = l_110;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = term_m_54;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm o_110 = NULL,p_110 = NULL,q_110 = NULL;
  o_110 = t;
  t = term_m_22;
  p_110 = t;
  t = term_i_52;
  q_110 = t;
  t = term_q_54;
  t = o_11(p_110, q_110, t);
  t = o_110;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_m_22;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm t_54 = t;
  int u_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(k_16, l_16, m_16, t);
      LocalPopChoice(u_54);
    }
  else
    {
      t = t_54;
      {
        ATerm v_54 = t;
        int w_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(n_16, o_16, p_16, t);
            LocalPopChoice(w_54);
          }
        else
          {
            t = v_54;
            t = Option_3_0(q_16, r_16, s_16, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_110 = NULL,s_110 = NULL,t_110 = NULL,u_110 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_52;
  t = whoami_0_0(t);
  r_110 = t;
  t = term_d_21;
  t_110 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_54), r_110);
  u_110 = t;
  t = SSL_printnl(t_110, u_110);
  t = term_i_52;
  s_110 = t;
  t = SSL_exit(s_110);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm v_110 = NULL,w_110 = NULL;
  t = term_k_22;
  v_110 = t;
  t = term_b_55;
  w_110 = t;
  t = term_c_55;
  t = l_11(v_110, w_110, t);
  return(t);
}
static ATerm g_11 (ATerm w_29, ATerm x_29, ATerm t)
{
  ATerm d_55 = t;
  int e_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_29, x_29);
      LocalPopChoice(e_55);
    }
  else
    {
      t = d_55;
      t = SSL_addr(w_29, x_29);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm t)
{
  ATerm y_110 = NULL,z_110 = NULL,a_111 = NULL;
  y_110 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_110;
      t = h_104(t);
    }
  else
    {
      ATerm d_111 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_110 = ATgetFirst((ATermList) t);
          a_111 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_111;
      t = foldr_2_0(h_104, i_104, t);
      d_111 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_110, d_111);
      t = i_104(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = term_n_52;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL;
  if(match_cons(t, sym__2))
    {
      m_50 = ATgetArgument(t, 0);
      n_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(m_50, n_50, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_111 = NULL,i_50 = NULL,j_50 = NULL;
  t = times_0_0(t);
  j_50 = t;
  t = SSL_explode_term(j_50);
  if(match_cons(t, sym__2))
    {
      ATerm f_55 = ATgetArgument(t, 0);
      i_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_50;
  t = foldr_2_0(t_16, u_16, t);
  g_111 = t;
  t = SSL_TicksToSeconds(g_111);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_111 = NULL,s_111 = NULL,u_111 = NULL;
  r_111 = t;
  if(match_cons(t, sym__2))
    {
      s_111 = ATgetArgument(t, 0);
      u_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_55 = t;
    int i_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_111;
        if((s_111 != t))
          {
            _fail(t);
          }
        t = r_111;
        LocalPopChoice(i_55);
      }
    else
      {
        t = g_55;
        t = (ATerm) ATmakeAppl(sym__2, s_111, u_111);
        {
          ATerm j_55 = t;
          int k_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_111, u_111);
              LocalPopChoice(k_55);
            }
          else
            {
              t = j_55;
              t = SSL_gtr(s_111, u_111);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, s_111, u_111);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_111 (ATerm), ATerm t)
{
  ATerm y_111 = NULL;
  y_111 = t;
  {
    ATerm o_55 = t;
    int p_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_112 = NULL,b_112 = NULL,c_112 = NULL;
        t = term_k_22;
        b_112 = t;
        t = term_m_52;
        c_112 = t;
        t = term_t_55;
        t = l_11(b_112, c_112, t);
        a_112 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_112, term_i_52);
        t = geq_0_0(t);
        t = y_111;
        t = t_111(t);
        LocalPopChoice(p_55);
      }
    else
      {
        t = o_55;
        t = y_111;
      }
  }
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm e_112 = NULL,f_112 = NULL,h_112 = NULL,i_112 = NULL;
  t = run_time_0_0(t);
  e_112 = t;
  t = term_d_52;
  t = whoami_0_0(t);
  f_112 = t;
  t = term_d_21;
  h_112 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_55), e_112), term_u_55), f_112);
  i_112 = t;
  t = SSL_printnl(h_112, i_112);
  t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_55), e_112), term_u_55), f_112));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_16, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_112 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_52;
  j_112 = t;
  t = SSL_exit(j_112);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm t_112 = NULL,u_112 = NULL;
  u_112 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_112;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_112 = ATgetArgument(t, 0);
          {
            ATerm s_51 = NULL,z_19 = NULL;
            t = SSLgetAnnotations(u_112);
            s_51 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_112);
            z_19 = t;
            t = SSLsetAnnotations(z_19, s_51);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_112;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_132 (ATerm), ATerm t)
{
  ATerm y_55 = t;
  int c_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_112 = NULL,n_112 = NULL;
      t = term_k_22;
      m_112 = t;
      t = term_f_56;
      n_112 = t;
      t = term_g_56;
      t = l_11(m_112, n_112, t);
      LocalPopChoice(c_56);
    }
  else
    {
      t = y_55;
      t = fetch_1_0(w_16, t);
    }
  t = n_132(t);
  return(t);
}
static ATerm p_11 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm w_112 = NULL;
  t = SSL_hashtable_put(i_37, g_37, h_37);
  w_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_112);
  return(t);
}
ATerm lookup_table_0_1 (ATerm a_34, ATerm t)
{
  ATerm f_113 = NULL;
  t = table_hashtable_0_0(t);
  f_113 = t;
  {
    ATerm h_56 = t;
    int k_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_51 = NULL;
        t = f_113;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_11(a_34, z_51, t);
        LocalPopChoice(k_56);
      }
    else
      {
        t = h_56;
        {
          ATerm g_52 = NULL;
          t = a_34;
          t = table_create_0_0(t);
          t = f_113;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_11(a_34, g_52, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_37, ATerm p_37, ATerm t)
{
  ATerm i_113 = NULL;
  t = SSL_hashtable_create(o_37, p_37);
  i_113 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_113);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm j_113 = NULL,k_113 = NULL,l_113 = NULL,n_113 = NULL,o_113 = NULL;
  j_113 = t;
  t = term_l_56;
  n_113 = t;
  t = term_m_56;
  o_113 = t;
  t = j_113;
  t = new_hashtable_0_2(n_113, o_113, t);
  k_113 = t;
  t = j_113;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(j_113, k_113, l_113, t);
  t = j_113;
  return(t);
}
static ATerm i_11 (ATerm l_37, ATerm m_37, ATerm t)
{
  ATerm p_113 = NULL;
  t = SSL_hashtable_remove(m_37, l_37);
  p_113 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_113);
  return(t);
}
static ATerm j_11 (ATerm q_37, ATerm t)
{
  ATerm q_113 = NULL;
  t = SSL_hashtable_destroy(q_37);
  q_113 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_113);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm r_113 = NULL;
  t = SSL_table_hashtable();
  r_113 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_113);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_113 = NULL,t_113 = NULL,u_113 = NULL,v_113 = NULL;
  s_113 = t;
  t = table_hashtable_0_0(t);
  t_113 = t;
  t = lookup_table_0_1(s_113, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_11(v_113, t);
  t = t_113;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_11(s_113, u_113, t);
  t = s_113;
  return(t);
}
ATerm map_1_0 (ATerm z_101 (ATerm), ATerm t)
{
  static ATerm k_114 (ATerm t)
  {
    ATerm h_114 = NULL,i_114 = NULL,j_114 = NULL;
    h_114 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_114;
      }
    else
      {
        ATerm o_52 = NULL,s_52 = NULL,t_52 = NULL,g_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_114 = ATgetFirst((ATermList) t);
            j_114 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_114);
        o_52 = t;
        t = i_114;
        t = z_101(t);
        s_52 = t;
        t = j_114;
        t = k_114(t);
        t_52 = t;
        t = (ATerm) ATinsert(CheckATermList(t_52), s_52);
        g_20 = t;
        t = SSLsetAnnotations(g_20, o_52);
      }
    return(t);
  }
  t = k_114(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm n_114 = NULL,o_114 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_114 = ATgetFirst((ATermList) t);
      o_114 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_114 = NULL,t_114 = NULL;
        static ATerm x_16 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_114)), not_null(t_114));
          return(t);
        }
        t = o_114;
        t = h_0(t);
        if(((s_114 != NULL) && (s_114 != t)))
          _fail(t);
        else
          s_114 = t;
        t = n_114;
        t = g_0(t);
        if(((t_114 != NULL) && (t_114 != t)))
          _fail(t);
        else
          t_114 = t;
        t = o_114;
        t = reverse_acc_2_0(g_0, x_16, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_52;
      t = h_0(t);
    }
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm f_115 = NULL,g_115 = NULL,h_115 = NULL,b_21 = NULL;
  h_115 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_115);
  f_115 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_115);
  b_21 = t;
  t = SSLsetAnnotations(b_21, f_115);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm j_115 = NULL;
  j_115 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_115), term_n_56);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_115 = NULL,c_115 = NULL;
  ATerm q_56 = t;
  int r_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_115 = NULL,e_115 = NULL;
      t = term_k_22;
      d_115 = t;
      t = term_b_55;
      e_115 = t;
      t = term_c_55;
      t = l_11(d_115, e_115, t);
      LocalPopChoice(r_56);
    }
  else
    {
      t = q_56;
      t = fetch_1_0(z_16, t);
    }
  t = term_s_56;
  t = echo_0_0(t);
  t = term_i_53;
  b_115 = t;
  t = term_m_53;
  c_115 = t;
  t = term_u_56;
  t = l_11(b_115, c_115, t);
  t = reverse_acc_2_0(_id, a_17, t);
  t = map_1_0(b_17, t);
  return(t);
}
ATerm fetch_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  static ATerm h_116 (ATerm t)
  {
    ATerm e_116 = NULL,f_116 = NULL,g_116 = NULL;
    e_116 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_116 = ATgetFirst((ATermList) t);
        g_116 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_56 = t;
      int x_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_53 = NULL,k_53 = NULL,l_21 = NULL;
          t = SSLgetAnnotations(e_116);
          f_53 = t;
          t = f_116;
          t = j_102(t);
          k_53 = t;
          t = (ATerm) ATinsert(CheckATermList(g_116), k_53);
          l_21 = t;
          t = SSLsetAnnotations(l_21, f_53);
          LocalPopChoice(x_56);
        }
      else
        {
          t = w_56;
          {
            ATerm v_53 = NULL,y_53 = NULL,n_21 = NULL;
            t = SSLgetAnnotations(e_116);
            v_53 = t;
            t = g_116;
            t = h_116(t);
            y_53 = t;
            t = (ATerm) ATinsert(CheckATermList(y_53), f_116);
            n_21 = t;
            t = SSLsetAnnotations(n_21, v_53);
          }
        }
    }
    return(t);
  }
  t = h_116(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_116 = NULL,m_116 = NULL,n_116 = NULL;
  l_116 = t;
  {
    ATerm y_56 = t;
    int z_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_116;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_57 = ATgetFirst((ATermList) t);
                ATerm b_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_116;
          }
        LocalPopChoice(z_56);
      }
    else
      {
        t = y_56;
        t = (ATerm) ATinsert(ATempty, l_116);
      }
  }
  m_116 = t;
  t = term_y_50;
  n_116 = t;
  t = SSL_printnl(n_116, m_116);
  t = l_116;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_116 = NULL,s_116 = NULL;
  t = term_k_22;
  r_116 = t;
  t = term_b_55;
  s_116 = t;
  t = term_c_55;
  t = l_11(r_116, s_116, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_11 (ATerm j_37, ATerm k_37, ATerm t)
{
  t = SSL_hashtable_get(k_37, j_37);
  return(t);
}
static ATerm l_11 (ATerm h_34, ATerm i_34, ATerm t)
{
  ATerm t_116 = NULL;
  t = lookup_table_0_1(h_34, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11(i_34, t_116, t);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm v_116 = NULL,b_117 = NULL;
  t = term_c_57;
  v_116 = t;
  t = term_d_52;
  b_117 = t;
  t = term_d_57;
  t = o_11(v_116, b_117, t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = term_e_57;
  return(t);
}
static ATerm g_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm c_117 = NULL,d_117 = NULL,e_117 = NULL,f_117 = NULL;
  t = term_c_57;
  e_117 = t;
  t = term_d_52;
  f_117 = t;
  t = term_d_57;
  t = o_11(e_117, f_117, t);
  t = term_f_57;
  c_117 = t;
  t = term_d_52;
  d_117 = t;
  t = term_g_57;
  t = o_11(c_117, d_117, t);
  t = term_h_57;
  return(t);
}
static ATerm k_17 (ATerm t)
{
  t = term_i_57;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_57 = t;
  int k_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_17, d_17, f_17, t);
      LocalPopChoice(k_57);
    }
  else
    {
      t = j_57;
      t = Option_3_0(g_17, i_17, k_17, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t)
{
  ATerm g_117 = NULL,h_117 = NULL,i_117 = NULL,j_117 = NULL,k_117 = NULL,l_117 = NULL,r_21 = NULL;
  l_117 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_117 = ATgetFirst((ATermList) t);
      i_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_117);
  g_117 = t;
  t = h_117;
  t = n_88(t);
  j_117 = t;
  t = i_117;
  t = o_88(t);
  k_117 = t;
  t = (ATerm) ATinsert(CheckATermList(k_117), j_117);
  r_21 = t;
  t = SSLsetAnnotations(r_21, g_117);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_134 (ATerm), ATerm t)
{
  ATerm q_117 = NULL,r_117 = NULL,s_117 = NULL,t_117 = NULL,v_117 = NULL,w_117 = NULL,t_21 = NULL;
  q_117 = t;
  {
    ATerm m_57 = t;
    int n_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_57;
        t = q_134(t);
        LocalPopChoice(n_57);
      }
    else
      {
        t = m_57;
      }
  }
  t = q_117;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_117 = ATgetFirst((ATermList) t);
      t_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_117);
  r_117 = t;
  t = term_b_55;
  w_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_55, s_117);
  t = o_11(w_117, s_117, t);
  t = t_117;
  {
    static ATerm g_118 (ATerm t)
    {
      ATerm p_57 = t;
      int r_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_57 = t;
          int x_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_117 = NULL;
              z_117 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_117;
              LocalPopChoice(x_57);
            }
          else
            {
              t = s_57;
              t = q_134(t);
              t = Cons_2_0(_id, g_118, t);
            }
          LocalPopChoice(r_57);
        }
      else
        {
          t = p_57;
          {
            ATerm c_118 = NULL,d_118 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_118 = ATgetFirst((ATermList) t);
                d_118 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_118), (ATerm) ATmakeAppl(sym_Undefined_1, c_118));
          }
        }
      return(t);
    }
    t = g_118(t);
  }
  v_117 = t;
  t = (ATerm) ATinsert(CheckATermList(v_117), (ATerm) ATmakeAppl(sym_Program_1, s_117));
  t_21 = t;
  t = SSLsetAnnotations(t_21, r_117);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm t_118 = NULL;
  t_118 = t;
  if(match_string(t, "--help"))
    {
      t = t_118;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_118;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_118;
        }
    }
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm u_118 = NULL,v_118 = NULL;
  t = term_f_56;
  u_118 = t;
  t = term_d_52;
  v_118 = t;
  t = term_e_58;
  t = o_11(u_118, v_118, t);
  t = term_f_58;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  t = term_i_58;
  return(t);
}
static ATerm p_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_134 (ATerm), ATerm t)
{
  ATerm l_118 = NULL,m_118 = NULL,n_118 = NULL,o_118 = NULL,p_118 = NULL,q_118 = NULL,r_118 = NULL,s_118 = NULL;
  n_118 = t;
  t = term_i_53;
  o_118 = t;
  t = term_j_58;
  t = lookup_table_0_1(o_118, t);
  s_118 = t;
  t = term_m_53;
  p_118 = t;
  t = (ATerm) ATempty;
  q_118 = t;
  t = s_118;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(p_118, q_118, r_118, t);
  t = n_118;
  {
    static ATerm l_17 (ATerm t)
    {
      ATerm k_58 = t;
      int l_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_134(t);
          LocalPopChoice(l_58);
        }
      else
        {
          t = k_58;
          {
            ATerm m_58 = t;
            int n_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_17, n_17, o_17, t);
                LocalPopChoice(n_58);
              }
            else
              {
                t = m_58;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_17, t);
  }
  {
    ATerm p_58 = t;
    int q_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_119 = NULL;
        h_119 = t;
        {
          ATerm y_58 = t;
          int z_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_54 = NULL;
              t = h_119;
              {
                ATerm a_59 = t;
                int d_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_54 = NULL,s_54 = NULL;
                    t = term_k_22;
                    o_54 = t;
                    t = term_f_56;
                    s_54 = t;
                    t = term_g_56;
                    t = l_11(o_54, s_54, t);
                    LocalPopChoice(d_59);
                  }
                else
                  {
                    t = a_59;
                    t = fetch_1_0(p_17, t);
                  }
              }
              t = h_119;
              t = default_system_usage_0_0(t);
              t = term_n_52;
              n_54 = t;
              t = SSL_exit(n_54);
              LocalPopChoice(z_58);
            }
          else
            {
              t = y_58;
              {
                ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
                t = term_k_22;
                z_54 = t;
                t = term_c_57;
                a_55 = t;
                t = term_e_59;
                t = l_11(z_54, a_55, t);
                t = h_119;
                t = default_system_about_0_0(t);
                t = term_n_52;
                y_54 = t;
                t = SSL_exit(y_54);
              }
            }
        }
        LocalPopChoice(q_58);
      }
    else
      {
        t = p_58;
        {
          ATerm f_59 = t;
          int h_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_119 = NULL,j_119 = NULL,k_119 = NULL;
              static ATerm r_17 (ATerm t)
              {
                ATerm l_119 = NULL,m_119 = NULL,n_119 = NULL,v_21 = NULL;
                n_119 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_119 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_119);
                l_119 = t;
                t = m_119;
                if(((l_118 != NULL) && (l_118 != t)))
                  _fail(t);
                else
                  l_118 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_119);
                v_21 = t;
                t = SSLsetAnnotations(v_21, l_119);
                return(t);
              }
              t = fetch_1_0(r_17, t);
              t = term_d_21;
              j_119 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_118)), term_i_59);
              k_119 = t;
              t = SSL_printnl(j_119, k_119);
              t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_118)), term_i_59));
              t = default_system_usage_0_0(t);
              t = term_i_52;
              i_119 = t;
              t = SSL_exit(i_119);
              LocalPopChoice(h_59);
            }
          else
            {
              t = f_59;
            }
        }
      }
  }
  m_118 = t;
  t = term_i_53;
  t = table_destroy_0_0(t);
  t = m_118;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_132 (ATerm), ATerm q_132 (ATerm), ATerm r_132 (ATerm), ATerm s_132 (ATerm), ATerm t)
{
  ATerm s_119 = NULL,t_119 = NULL,u_119 = NULL,v_119 = NULL,w_119 = NULL;
  t = parse_options_1_0(p_132, t);
  s_119 = t;
  t = term_j_59;
  t = table_create_0_0(t);
  t = term_j_59;
  t_119 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_59, term_n_59, s_119);
  t = lookup_table_0_1(t_119, t);
  w_119 = t;
  t = term_n_59;
  u_119 = t;
  t = w_119;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(u_119, s_119, v_119, t);
  t = s_119;
  t = r_132(t);
  {
    ATerm o_59 = t;
    int p_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_132, t);
        LocalPopChoice(p_59);
      }
    else
      {
        t = o_59;
        {
          ATerm q_59 = t;
          int r_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_132(t);
              t = report_success_0_0(t);
              LocalPopChoice(r_59);
            }
          else
            {
              t = q_59;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm x_59 = t;
  int y_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = stratego_warnings_options_0_0(t);
      LocalPopChoice(y_59);
    }
  else
    {
      t = x_59;
      {
        ATerm a_60 = t;
        int b_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(b_60);
          }
        else
          {
            t = a_60;
            {
              ATerm c_60 = t;
              int d_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(d_60);
                }
              else
                {
                  t = c_60;
                  {
                    ATerm e_60 = t;
                    int f_60 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(w_17, x_17, z_17, t);
                        LocalPopChoice(f_60);
                      }
                    else
                      {
                        t = e_60;
                        {
                          ATerm g_60 = t;
                          int h_60 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(h_60);
                            }
                          else
                            {
                              t = g_60;
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
static ATerm v_17 (ATerm t)
{
  t = input_1_0(a_18, t);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm a_120 = NULL,b_120 = NULL;
  t = term_d_51;
  a_120 = t;
  t = term_d_52;
  b_120 = t;
  t = term_i_60;
  t = o_11(a_120, b_120, t);
  t = term_j_60;
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = term_k_60;
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = output_1_0(c_18, t);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm d_120 = NULL;
  d_120 = t;
  t = spec_use_def_0_0(t);
  t = d_120;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(s_17, default_usage_0_0, _id, v_17, t);
  return(t);
}
