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
ATerm term_z_60;
ATerm term_y_60;
ATerm term_x_60;
ATerm term_y_59;
ATerm term_v_59;
ATerm term_u_59;
ATerm term_k_59;
ATerm term_w_58;
ATerm term_v_58;
ATerm term_u_58;
ATerm term_t_58;
ATerm term_n_58;
ATerm term_c_58;
ATerm term_b_58;
ATerm term_z_57;
ATerm term_x_57;
ATerm term_w_57;
ATerm term_v_57;
ATerm term_s_57;
ATerm term_h_57;
ATerm term_g_57;
ATerm term_a_57;
ATerm term_x_56;
ATerm term_w_56;
ATerm term_t_56;
ATerm term_s_56;
ATerm term_o_56;
ATerm term_n_56;
ATerm term_m_56;
ATerm term_v_55;
ATerm term_u_55;
ATerm term_t_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_i_54;
ATerm term_h_54;
ATerm term_g_54;
ATerm term_e_54;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_w_53;
ATerm term_v_53;
ATerm term_u_53;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_o_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_h_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_e_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_u_51;
ATerm term_s_51;
ATerm term_p_51;
ATerm term_l_51;
ATerm term_i_51;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_o_34;
ATerm term_g_34;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_w_32;
ATerm term_f_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_k_22;
ATerm term_z_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_q_21;
ATerm term_l_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_c_21;
ATerm term_f_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_w_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_k_18;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("d_1", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("f_1", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("z_0", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("b_1", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_k_18, (ATerm) ATempty);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_m_18, (ATerm) ATempty);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_s_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("n_1", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Defined_2, term_w_32, term_r_33);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("p_1", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym_Defined_2, term_h_37, term_r_33);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("l_1", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(sym_Defined_2, term_d_40, term_e_40);
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_p_51);
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_x_51);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_e_53);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(sym__2, term_p_53, term_q_53);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_53);
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(sym__2, term_v_53, term_h_53);
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_q_53);
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_l_53);
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_u_55);
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_p_53);
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_s_56);
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(sym__2, term_e_54, term_g_54);
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(sym__2, term_s_57, term_h_53);
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(sym__2, term_x_57, term_h_53);
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(sym__2, term_s_56, term_h_53);
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(sym__3, term_e_54, term_g_54, (ATerm) ATempty);
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_s_57);
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(sym__2, term_x_51, term_h_53);
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm q_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_9 (ATerm o_24, ATerm n_24, ATerm p_24, ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
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
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm sdef_ud_0_0 (ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm h_132 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm g_132 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm i_132 (ATerm), ATerm j_132 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm f_132 (ATerm), ATerm t);
static ATerm y_9 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm j_104 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm z_9 (ATerm e_76, ATerm f_76, ATerm g_76, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm a_10 (ATerm y_75, ATerm c_76, ATerm a_76, ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm b_10 (ATerm s_75, ATerm w_75, ATerm u_75, ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm c_10 (ATerm q_74, ATerm r_74, ATerm s_74, ATerm u_74, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm d_10 (ATerm b_73, ATerm c_73, ATerm a_73, ATerm t);
static ATerm v_4 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm e_10 (ATerm h_33, ATerm g_33, ATerm t);
static ATerm f_10 (ATerm q_36, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm o_73, ATerm t);
static ATerm f_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm g_10 (ATerm r_32, ATerm s_32, ATerm t_32, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm j_10 (ATerm p_32, ATerm q_32, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm k_10 (ATerm h_102 (ATerm), ATerm a_31, ATerm y_30, ATerm t);
static ATerm y_5 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm s_121 (ATerm), ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
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
static ATerm p_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm n_10 (ATerm c_98 (ATerm), ATerm m_25, ATerm l_25, ATerm t);
ATerm foldr_3_0 (ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t);
static ATerm o_10 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm q_25, ATerm p_25, ATerm t);
static ATerm p_10 (ATerm x_97 (ATerm), ATerm k_25, ATerm j_25, ATerm t);
ATerm genzip_4_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm u_10 (ATerm k_712, ATerm p_712, ATerm e_72, ATerm t);
ATerm while_not_2_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm t);
ATerm for_3_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm t);
static ATerm g_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm t_98 (ATerm e_97, ATerm f_97, ATerm g_97, ATerm t);
static ATerm q_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
ATerm free_vars_3_0 (ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm y_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm topdown_1_0 (ATerm r_102 (ATerm), ATerm t);
static ATerm w_10 (ATerm j_32, ATerm k_32, ATerm t);
ATerm end_scope_1_0 (ATerm e_102 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm k_116 (ATerm), ATerm l_116 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm d_102 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm f_14 (ATerm t);
ATerm def_use_def_0_0 (ATerm t);
ATerm filter_1_0 (ATerm j_115 (ATerm), ATerm t);
static ATerm g_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm c_15 (ATerm t);
ATerm spec_use_def_0_0 (ATerm t);
static ATerm y_10 (ATerm c_43, ATerm d_43, ATerm t);
static ATerm z_10 (ATerm z_48, ATerm a_49, ATerm t);
static ATerm b_11 (ATerm g_112 (ATerm), ATerm u_461, ATerm f_49, ATerm t);
static ATerm a_11 (ATerm v_48, ATerm w_48, ATerm t);
static ATerm e_15 (ATerm t);
static ATerm n_15 (ATerm t);
ATerm output_1_0 (ATerm q_128 (ATerm), ATerm t);
static ATerm n_105 (ATerm h_105, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_11 (ATerm b_49, ATerm t);
static ATerm d_11 (ATerm v_41, ATerm w_41, ATerm t);
static ATerm e_11 (ATerm e_43, ATerm f_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_106 (ATerm x_105, ATerm t);
static ATerm z_106 (ATerm b_106, ATerm c_106, ATerm d_106, ATerm t);
static ATerm a_107 (ATerm l_106, ATerm m_106, ATerm n_106, ATerm t);
static ATerm f_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm r_128 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm u_15 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_11 (ATerm x_46, ATerm y_46, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm j_16 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm e_99 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_110 (ATerm b_110, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm x_10 (ATerm d_47, ATerm c_47, ATerm t);
static ATerm m_11 (ATerm e_32, ATerm f_32, ATerm d_32, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_11 (ATerm m_29, ATerm n_29, ATerm t);
ATerm foldr_2_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_108 (ATerm), ATerm t);
static ATerm b_17 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_17 (ATerm t);
ATerm need_help_1_0 (ATerm h_128 (ATerm), ATerm t);
static ATerm p_11 (ATerm j_36, ATerm k_36, ATerm l_36, ATerm t);
ATerm lookup_table_0_1 (ATerm q_33, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_36, ATerm s_36, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm i_11 (ATerm o_36, ATerm p_36, ATerm t);
static ATerm j_11 (ATerm t_36, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm n_98 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm i_17 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_98 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_11 (ATerm m_36, ATerm n_36, ATerm t);
static ATerm l_11 (ATerm x_33, ATerm y_33, ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_130 (ATerm), ATerm t);
static ATerm s_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
ATerm parse_options_1_0 (ATerm j_130 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_128 (ATerm), ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm m_128 (ATerm), ATerm t);
static ATerm a_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm f_18 (ATerm t);
static ATerm h_18 (ATerm t);
static ATerm i_18 (ATerm t);
static ATerm j_18 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_k_18;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm x_9 (ATerm o_24, ATerm n_24, ATerm p_24, ATerm t)
{
  ATerm a_0 = NULL,o_0 = NULL,r_0 = NULL,t_0 = NULL,u_0 = NULL;
  a_0 = t;
  t = (ATerm) ATempty;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_18, o_24);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_18, o_24));
  t = k_10(q_0, t_0, u_0, t);
  t = (ATerm) ATempty;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_18, o_24);
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_18, o_24));
  t = k_10(w_0, o_0, r_0, t);
  t = p_24;
  t = use_vars_0_0(t);
  t = a_0;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_k_18;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_k_18;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_k_18;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_m_18;
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
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_18, z_2);
            s_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_r_18, z_2));
            t = k_10(x_0, o_3, s_3, t);
            t = (ATerm) ATempty;
            m_3 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_18, z_2);
            n_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_s_18, z_2));
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
            ATerm u_18 = t;
            int g_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,t_3 = NULL;
                t = (ATerm) ATempty;
                r_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_19, z_2);
                t_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_19, z_2));
                t = k_10(a_1, r_3, t_3, t);
                t = (ATerm) ATempty;
                p_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_19, z_2);
                q_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_19, z_2));
                t = k_10(c_1, p_3, q_3, t);
                t = r_2;
                t = bind_vars_0_0(t);
                LocalPopChoice(g_19);
              }
            else
              {
                t = u_18;
                {
                  ATerm k_19 = t;
                  int l_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_2;
                      t = unbound_vars_0_0(t);
                      LocalPopChoice(l_19);
                    }
                  else
                    {
                      t = k_19;
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
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
            t = (ATerm) ATempty;
            u_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_19, z_2);
            v_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_19, z_2));
            t = k_10(j_1, u_5, v_5, t);
            t = (ATerm) ATempty;
            s_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_19, z_2);
            t_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_19, z_2));
            t = k_10(k_1, s_5, t_5, t);
            t = c_3;
            t = bind_vars_0_0(t);
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
            {
              ATerm q_19 = t;
              int r_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_3;
                  t = unbound_vars_0_0(t);
                  LocalPopChoice(r_19);
                }
              else
                {
                  t = q_19;
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
    ATerm s_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_7 = NULL,f_7 = NULL,h_7 = NULL;
        t = (ATerm) ATempty;
        f_7 = t;
        t = term_k_18;
        h_7 = t;
        t = term_w_19;
        t = j_10(h_7, f_7, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm y_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_19) != ATmakeSymbol("d_1", 0, ATtrue)))
              _fail(t);
            d_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_b_20), d_7), term_a_20);
        LocalPopChoice(v_19);
      }
    else
      {
        t = s_19;
        {
          ATerm c_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_7 = NULL,f_8 = NULL,g_8 = NULL;
              t = (ATerm) ATempty;
              f_8 = t;
              t = term_k_18;
              g_8 = t;
              t = term_w_19;
              t = j_10(g_8, f_8, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm e_20 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_20) != ATmakeSymbol("z_0", 0, ATtrue)))
                    _fail(t);
                  x_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_b_20), x_7), term_f_20);
              LocalPopChoice(d_20);
            }
          else
            {
              t = c_20;
              {
                ATerm i_20 = t;
                int j_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_8 = NULL,s_8 = NULL,t_8 = NULL;
                    t = (ATerm) ATempty;
                    s_8 = t;
                    t = term_k_18;
                    t_8 = t;
                    t = term_w_19;
                    t = j_10(t_8, s_8, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm k_20 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) k_20) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        k_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_b_20), k_8), term_f_20);
                    LocalPopChoice(j_20);
                  }
                else
                  {
                    t = i_20;
                    {
                      ATerm l_20 = t;
                      int w_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_9 = NULL,h_9 = NULL,i_9 = NULL;
                          t = (ATerm) ATempty;
                          h_9 = t;
                          t = term_k_18;
                          i_9 = t;
                          t = term_w_19;
                          t = j_10(i_9, h_9, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm x_20 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) x_20) != ATmakeSymbol("m_0", 0, ATtrue)))
                                _fail(t);
                              f_9 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_b_20), f_9), term_f_20);
                          LocalPopChoice(w_20);
                        }
                      else
                        {
                          t = l_20;
                          {
                            ATerm y_20 = t;
                            int z_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_9 = NULL,s_9 = NULL,v_9 = NULL;
                                t = (ATerm) ATempty;
                                s_9 = t;
                                t = term_k_18;
                                v_9 = t;
                                t = term_w_19;
                                t = j_10(v_9, s_9, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm b_21 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) b_21) != ATmakeSymbol("h_0", 0, ATtrue)))
                                      _fail(t);
                                    p_9 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_b_20), p_9), term_c_21);
                                LocalPopChoice(z_20);
                              }
                            else
                              {
                                t = y_20;
                                {
                                  ATerm r_11 = NULL,u_11 = NULL,v_11 = NULL;
                                  t = (ATerm) ATempty;
                                  u_11 = t;
                                  t = term_k_18;
                                  v_11 = t;
                                  t = term_w_19;
                                  t = j_10(v_11, u_11, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm e_21 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) e_21) != ATmakeSymbol("b_0", 0, ATtrue)))
                                        _fail(t);
                                      r_11 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_b_20), r_11), term_c_21);
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
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_5;
            m_5 = t;
            t = r_5;
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_21), m_5), term_i_21);
  t = Context_0_0(t);
  n_5 = t;
  t = term_l_21;
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
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_13 = NULL,g_13 = NULL,l_13 = NULL;
        t = (ATerm) ATempty;
        g_13 = t;
        t = term_m_18;
        l_13 = t;
        t = term_q_21;
        t = j_10(l_13, g_13, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm r_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_21) != ATmakeSymbol("f_1", 0, ATtrue)))
              _fail(t);
            e_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_u_21), e_13), term_t_21);
        LocalPopChoice(o_21);
      }
    else
      {
        t = n_21;
        {
          ATerm v_21 = t;
          int w_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_13 = NULL,v_13 = NULL,w_13 = NULL;
              t = (ATerm) ATempty;
              v_13 = t;
              t = term_m_18;
              w_13 = t;
              t = term_q_21;
              t = j_10(w_13, v_13, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm y_21 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_21) != ATmakeSymbol("b_1", 0, ATtrue)))
                    _fail(t);
                  t_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_u_21), t_13), term_z_21);
              LocalPopChoice(w_21);
            }
          else
            {
              t = v_21;
              {
                ATerm a_22 = t;
                int b_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_14 = NULL,c_14 = NULL,d_14 = NULL;
                    t = (ATerm) ATempty;
                    c_14 = t;
                    t = term_m_18;
                    d_14 = t;
                    t = term_q_21;
                    t = j_10(d_14, c_14, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm c_22 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) c_22) != ATmakeSymbol("v_0", 0, ATtrue)))
                          _fail(t);
                        a_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_u_21), a_14), term_z_21);
                    LocalPopChoice(b_22);
                  }
                else
                  {
                    t = a_22;
                    {
                      ATerm d_22 = t;
                      int e_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_14 = NULL,j_14 = NULL,x_14 = NULL;
                          t = (ATerm) ATempty;
                          j_14 = t;
                          t = term_m_18;
                          x_14 = t;
                          t = term_q_21;
                          t = j_10(x_14, j_14, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm f_22 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) f_22) != ATmakeSymbol("p_0", 0, ATtrue)))
                                _fail(t);
                              h_14 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_u_21), h_14), term_z_21);
                          LocalPopChoice(e_22);
                        }
                      else
                        {
                          t = d_22;
                          {
                            ATerm g_22 = t;
                            int h_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_15 = NULL,f_15 = NULL,k_15 = NULL;
                                t = (ATerm) ATempty;
                                f_15 = t;
                                t = term_m_18;
                                k_15 = t;
                                t = term_q_21;
                                t = j_10(k_15, f_15, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm j_22 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) j_22) != ATmakeSymbol("k_0", 0, ATtrue)))
                                      _fail(t);
                                    d_15 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_u_21), d_15), term_k_22);
                                LocalPopChoice(h_22);
                              }
                            else
                              {
                                t = g_22;
                                {
                                  ATerm q_15 = NULL,s_15 = NULL,x_15 = NULL;
                                  t = (ATerm) ATempty;
                                  s_15 = t;
                                  t = term_m_18;
                                  x_15 = t;
                                  t = term_q_21;
                                  t = j_10(x_15, s_15, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm l_22 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) l_22) != ATmakeSymbol("f_0", 0, ATtrue)))
                                        _fail(t);
                                      q_15 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_u_21), q_15), term_k_22);
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
        ATerm m_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_8;
            m_8 = t;
            t = o_8;
            LocalPopChoice(o_22);
          }
        else
          {
            t = m_22;
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
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_8 = NULL,r_8 = NULL,u_8 = NULL,v_8 = NULL;
        t = term_r_22;
        u_8 = t;
        t = term_s_22;
        v_8 = t;
        t = term_t_22;
        t = l_11(u_8, v_8, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_22), m_8), term_i_21);
        t = Warning_0_0(t);
        q_8 = t;
        t = term_l_21;
        r_8 = t;
        t = SSL_printnl(r_8, q_8);
        t = q_8;
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm a_9 = NULL,c_9 = NULL;
  ATerm v_22 = t;
  int w_22 = stack_ptr;
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
      LocalPopChoice(w_22);
      {
        ATerm m_9 = NULL;
        m_9 = t;
        t = a_9;
        {
          ATerm x_22 = t;
          int y_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm z_22 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) z_22) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm b_23 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(b_23) != AT_LIST) || !(ATisEmpty(b_23))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(y_22);
              _fail(t);
            }
          else
            {
              t = x_22;
              {
                ATerm r_23 = t;
                int s_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm t_23 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) t_23) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm w_23 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(w_23) != AT_LIST) || !(ATisEmpty(w_23))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(s_23);
                    t = (ATerm) ATmakeAppl(sym_Var_1, c_9);
                    t = MaybeUnbound_0_0(t);
                    _fail(t);
                  }
                else
                  {
                    t = r_23;
                    {
                      ATerm x_23 = t;
                      int z_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm a_24 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) a_24) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm b_24 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(b_24) != AT_LIST) || !(ATisEmpty(b_24))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(z_23);
                          t = (ATerm) ATmakeAppl(sym_Var_1, c_9);
                          t = Unbound_0_0(t);
                        }
                      else
                        {
                          t = x_23;
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
      t = v_22;
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_9 = NULL,o_9 = NULL,r_9 = NULL,t_9 = NULL,e_1 = NULL;
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
            e_1 = t;
            t = SSLsetAnnotations(e_1, n_9);
            LocalPopChoice(d_24);
            {
              ATerm u_9 = NULL,w_9 = NULL,h_10 = NULL,i_10 = NULL,l_10 = NULL,m_10 = NULL,g_1 = NULL;
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
              g_1 = t;
              t = SSLsetAnnotations(g_1, u_9);
            }
          }
        else
          {
            t = c_24;
            {
              ATerm e_24 = t;
              int h_24 = stack_ptr;
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
                  LocalPopChoice(h_24);
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
                  t = e_24;
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
  ATerm k_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_11 = NULL,l_12 = NULL,o_12 = NULL,q_1 = NULL;
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
      q_1 = t;
      t = SSLsetAnnotations(q_1, z_11);
      LocalPopChoice(q_24);
      _fail(t);
    }
  else
    {
      t = k_24;
      {
        ATerm s_24 = t;
        int t_24 = stack_ptr;
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
            LocalPopChoice(t_24);
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
            t = s_24;
            {
              ATerm u_24 = t;
              int w_24 = stack_ptr;
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
                  LocalPopChoice(w_24);
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
                  t = u_24;
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
  ATerm x_24 = t;
  int y_24 = stack_ptr;
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
      LocalPopChoice(y_24);
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
      t = x_24;
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
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
            LocalPopChoice(a_25);
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
            t = z_24;
            {
              ATerm b_25 = t;
              int c_25 = stack_ptr;
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
                  LocalPopChoice(c_25);
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
                      ATerm d_25 = t;
                      int f_25 = stack_ptr;
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
                          LocalPopChoice(f_25);
                        }
                      else
                        {
                          t = d_25;
                          {
                            ATerm h_25 = t;
                            int i_25 = stack_ptr;
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
                                LocalPopChoice(i_25);
                              }
                            else
                              {
                                t = h_25;
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
                  t = b_25;
                  {
                    ATerm o_25 = t;
                    int r_25 = stack_ptr;
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
                        LocalPopChoice(r_25);
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
                            ATerm s_25 = t;
                            int u_25 = stack_ptr;
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
                                LocalPopChoice(u_25);
                              }
                            else
                              {
                                t = s_25;
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
                        t = o_25;
                        {
                          ATerm v_25 = t;
                          int w_25 = stack_ptr;
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
                              LocalPopChoice(w_25);
                              {
                                ATerm j_23 = NULL,m_23 = NULL,v_23 = NULL,y_23 = NULL;
                                j_23 = t;
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    m_23 = ATgetArgument(t, 0);
                                    v_23 = ATgetArgument(t, 1);
                                    y_23 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm x_25 = t;
                                  int y_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm s_21 = NULL,x_21 = NULL,o_2 = NULL;
                                      t = SSLgetAnnotations(j_23);
                                      s_21 = t;
                                      t = v_23;
                                      t = unbound_vars_0_0(t);
                                      x_21 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, m_23, x_21, y_23);
                                      o_2 = t;
                                      t = SSLsetAnnotations(o_2, s_21);
                                      LocalPopChoice(y_25);
                                    }
                                  else
                                    {
                                      t = x_25;
                                      {
                                        ATerm i_22 = NULL,n_22 = NULL,p_2 = NULL;
                                        t = SSLgetAnnotations(j_23);
                                        i_22 = t;
                                        t = y_23;
                                        t = use_vars_0_0(t);
                                        n_22 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, m_23, v_23, n_22);
                                        p_2 = t;
                                        t = SSLsetAnnotations(p_2, i_22);
                                      }
                                    }
                                }
                              }
                            }
                          else
                            {
                              t = v_25;
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
static ATerm m_1 (ATerm t)
{
  t = term_k_18;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_m_18;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_k_18;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_m_18;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm e_25 = NULL,g_25 = NULL,n_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      g_25 = ATgetArgument(t, 0);
      n_25 = ATgetArgument(t, 1);
      t_25 = ATgetArgument(t, 2);
      e_25 = ATgetArgument(t, 3);
      {
        ATerm e_26 = NULL,j_26 = NULL,m_26 = NULL,o_26 = NULL;
        t = (ATerm) ATempty;
        m_26 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_26, g_25);
        o_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_a_26, g_25));
        t = k_10(m_1, m_26, o_26, t);
        t = (ATerm) ATempty;
        e_26 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_26, g_25);
        j_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_b_26, g_25));
        t = k_10(o_1, e_26, j_26, t);
        t = e_25;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, g_25, n_25, t_25, e_25);
      }
    }
  else
    {
      ATerm x_26 = NULL,c_27 = NULL,d_27 = NULL,i_27 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          g_25 = ATgetArgument(t, 0);
          n_25 = ATgetArgument(t, 1);
          t_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      d_27 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_26, g_25);
      i_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_c_26, g_25));
      t = k_10(v_1, d_27, i_27, t);
      t = (ATerm) ATempty;
      x_26 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_26, g_25);
      c_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_26, g_25));
      t = k_10(w_1, x_26, c_27, t);
      t = t_25;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, g_25, n_25, t_25);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm h_132 (ATerm), ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,x_4 = NULL;
  static ATerm x_1 (ATerm t)
  {
    ATerm o_27 = NULL,p_27 = NULL,u_27 = NULL,v_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,f_28 = NULL,g_28 = NULL,z_4 = NULL,y_4 = NULL;
    g_28 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        z_27 = ATgetArgument(t, 0);
        b_28 = ATgetArgument(t, 1);
        c_28 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_28);
    y_27 = t;
    t = z_27;
    t = h_132(t);
    d_28 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, d_28, b_28, c_28);
    y_4 = t;
    t = SSLsetAnnotations(y_4, y_27);
    f_28 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        p_27 = ATgetArgument(t, 0);
        u_27 = ATgetArgument(t, 1);
        v_27 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_28);
    o_27 = t;
    t = u_27;
    t = h_132(t);
    x_27 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, p_27, x_27, v_27);
    z_4 = t;
    t = SSLsetAnnotations(z_4, o_27);
    return(t);
  }
  static ATerm y_1 (ATerm t)
  {
    ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,a_5 = NULL;
    q_28 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        m_28 = ATgetArgument(t, 0);
        n_28 = ATgetArgument(t, 1);
        o_28 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_28);
    l_28 = t;
    t = o_28;
    t = h_132(t);
    p_28 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, m_28, n_28, p_28);
    a_5 = t;
    t = SSLsetAnnotations(a_5, l_28);
    return(t);
  }
  n_27 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      k_27 = ATgetArgument(t, 0);
      l_27 = ATgetArgument(t, 1);
      m_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_27);
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, k_27, l_27, m_27);
  x_4 = t;
  t = SSLsetAnnotations(x_4, j_27);
  t = abstract_choice_2_0(x_1, y_1, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm g_132 (ATerm), ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,g_5 = NULL;
  static ATerm z_1 (ATerm t)
  {
    ATerm y_28 = NULL,a_29 = NULL,f_29 = NULL,h_29 = NULL,j_29 = NULL,h_5 = NULL;
    j_29 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        a_29 = ATgetArgument(t, 0);
        f_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_29);
    y_28 = t;
    t = a_29;
    t = g_132(t);
    h_29 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, h_29, f_29);
    h_5 = t;
    t = SSLsetAnnotations(h_5, y_28);
    return(t);
  }
  static ATerm k_2 (ATerm t)
  {
    ATerm p_29 = NULL,q_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,i_5 = NULL;
    u_29 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        q_29 = ATgetArgument(t, 0);
        s_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_29);
    p_29 = t;
    t = s_29;
    t = g_132(t);
    t_29 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, q_29, t_29);
    i_5 = t;
    t = SSLsetAnnotations(i_5, p_29);
    return(t);
  }
  u_28 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      s_28 = ATgetArgument(t, 0);
      t_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_28);
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, s_28, t_28);
  g_5 = t;
  t = SSLsetAnnotations(g_5, r_28);
  t = abstract_choice_2_0(z_1, k_2, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm i_132 (ATerm), ATerm j_132 (ATerm), ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,c_30 = NULL,e_30 = NULL;
  c_30 = t;
  t = save_MarkVar_0_0(t);
  v_29 = t;
  t = c_30;
  t = i_132(t);
  y_29 = t;
  t = save_MarkVar_0_0(t);
  w_29 = t;
  t = term_f_26;
  t = table_destroy_0_0(t);
  t = term_f_26;
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_26, v_29);
  t = e_10(e_30, v_29, t);
  t = y_29;
  t = j_132(t);
  x_29 = t;
  t = w_29;
  t = isect_MarkVar_0_0(t);
  t = x_29;
  return(t);
}
ATerm mark_choice_1_0 (ATerm f_132 (ATerm), ATerm t)
{
  ATerm f_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,f_6 = NULL;
  static ATerm l_2 (ATerm t)
  {
    ATerm k_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,g_6 = NULL;
    p_30 = t;
    if(match_cons(t, sym_Choice_2))
      {
        m_30 = ATgetArgument(t, 0);
        n_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_30);
    k_30 = t;
    t = m_30;
    t = f_132(t);
    o_30 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, o_30, n_30);
    g_6 = t;
    t = SSLsetAnnotations(g_6, k_30);
    return(t);
  }
  static ATerm s_2 (ATerm t)
  {
    ATerm q_30 = NULL,r_30 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,h_6 = NULL;
    f_31 = t;
    if(match_cons(t, sym_Choice_2))
      {
        r_30 = ATgetArgument(t, 0);
        d_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_31);
    q_30 = t;
    t = d_31;
    t = f_132(t);
    e_31 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, r_30, e_31);
    h_6 = t;
    t = SSLsetAnnotations(h_6, q_30);
    return(t);
  }
  j_30 = t;
  if(match_cons(t, sym_Choice_2))
    {
      h_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_30);
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, h_30, i_30);
  f_6 = t;
  t = SSLsetAnnotations(f_6, f_30);
  t = abstract_choice_2_0(l_2, s_2, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,h_32 = NULL,m_6 = NULL,l_6 = NULL;
  i_31 = t;
  t = save_MarkVar_0_0(t);
  h_31 = t;
  t = i_31;
  if(match_cons(t, sym_Rec_2))
    {
      b_32 = ATgetArgument(t, 0);
      c_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_31);
  a_32 = t;
  t = c_32;
  t = mark_buv_0_0(t);
  h_32 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, b_32, h_32);
  l_6 = t;
  t = SSLsetAnnotations(l_6, a_32);
  t = h_31;
  t = isect_MarkVar_0_0(t);
  t = i_31;
  if(match_cons(t, sym_Rec_2))
    {
      k_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_31);
  j_31 = t;
  t = l_31;
  t = mark_buv_0_0(t);
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, k_31, z_31);
  m_6 = t;
  t = SSLsetAnnotations(m_6, j_31);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,y_32 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,r_6 = NULL,q_6 = NULL,p_6 = NULL;
  c_34 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      w_33 = ATgetArgument(t, 0);
      z_33 = ATgetArgument(t, 1);
      a_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_34);
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, w_33, z_33, a_34);
  p_6 = t;
  t = SSLsetAnnotations(p_6, v_33);
  b_34 = t;
  t = save_MarkVar_0_0(t);
  l_32 = t;
  t = b_34;
  if(match_cons(t, sym_PrimT_3))
    {
      m_33 = ATgetArgument(t, 0);
      n_33 = ATgetArgument(t, 1);
      o_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_34);
  l_33 = t;
  t = o_33;
  t = map_1_0(t_2, t);
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, m_33, n_33, p_33);
  q_6 = t;
  t = SSLsetAnnotations(q_6, l_33);
  u_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      n_32 = ATgetArgument(t, 0);
      y_32 = ATgetArgument(t, 1);
      b_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_33);
  m_32 = t;
  t = y_32;
  t = mark_buv_0_0(t);
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, n_32, c_33, b_33);
  r_6 = t;
  t = SSLsetAnnotations(r_6, m_32);
  d_33 = t;
  t = l_32;
  t = isect_MarkVar_0_0(t);
  t = d_33;
  return(t);
}
ATerm alltd_1_0 (ATerm j_104 (ATerm), ATerm t)
{
  static ATerm d_34 (ATerm t)
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_104(t);
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = SRTS_all(d_34, t);
      }
    return(t);
  }
  t = d_34(t);
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
        ATerm a_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,k_23 = NULL,l_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,u_23 = NULL,x_6 = NULL,w_6 = NULL,v_6 = NULL;
        t = SSLgetAnnotations(y_37);
        q_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, d_38, e_38, x_37);
        v_6 = t;
        t = SSLsetAnnotations(v_6, q_23);
        u_23 = t;
        t = save_MarkVar_0_0(t);
        a_23 = t;
        t = u_23;
        if(match_cons(t, sym_CallT_3))
          {
            k_23 = ATgetArgument(t, 0);
            l_23 = ATgetArgument(t, 1);
            n_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_23);
        i_23 = t;
        t = n_23;
        t = map_1_0(u_2, t);
        o_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, k_23, l_23, o_23);
        w_6 = t;
        t = SSLsetAnnotations(w_6, i_23);
        p_23 = t;
        if(match_cons(t, sym_CallT_3))
          {
            d_23 = ATgetArgument(t, 0);
            e_23 = ATgetArgument(t, 1);
            f_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_23);
        c_23 = t;
        t = e_23;
        t = mark_buv_0_0(t);
        g_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, d_23, g_23, f_23);
        x_6 = t;
        t = SSLsetAnnotations(x_6, c_23);
        h_23 = t;
        t = a_23;
        t = isect_MarkVar_0_0(t);
        t = h_23;
      }
    }
  else
    {
      ATerm f_24 = NULL,g_24 = NULL,i_24 = NULL,j_24 = NULL,l_24 = NULL,m_24 = NULL,r_24 = NULL,v_24 = NULL,z_6 = NULL,y_6 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          d_38 = ATgetArgument(t, 0);
          e_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_37);
      r_24 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, d_38, e_38);
      y_6 = t;
      t = SSLsetAnnotations(y_6, r_24);
      v_24 = t;
      t = save_MarkVar_0_0(t);
      f_24 = t;
      t = v_24;
      if(match_cons(t, sym_Call_2))
        {
          i_24 = ATgetArgument(t, 0);
          j_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_24);
      g_24 = t;
      t = j_24;
      t = mark_buv_0_0(t);
      l_24 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, i_24, l_24);
      z_6 = t;
      t = SSLsetAnnotations(z_6, g_24);
      m_24 = t;
      t = f_24;
      t = isect_MarkVar_0_0(t);
      t = m_24;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm z_9 (ATerm e_76, ATerm f_76, ATerm g_76, ATerm t)
{
  ATerm h_38 = NULL;
  static ATerm f_3 (ATerm t)
  {
    t = f_76;
    t = map_1_0(IntroduceBound_0_0, t);
    t = g_76;
    t = mark_build_vars_0_0(t);
    if(((h_38 != NULL) && (h_38 != t)))
      _fail(t);
    else
      h_38 = t;
    return(t);
  }
  t = scope_2_0(v_2, f_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, e_76, f_76, not_null(h_38));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm t_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_38);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm i_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_26);
    }
  else
    {
      t = i_26;
      {
        ATerm l_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_26);
          }
        else
          {
            t = l_26;
            {
              ATerm p_26 = t;
              int q_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_38 = ATgetArgument(t, 0);
                      a_39 = ATgetArgument(t, 1);
                      b_39 = ATgetArgument(t, 2);
                      c_39 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_39;
                  t = map_1_0(k_3, t);
                  LocalPopChoice(q_26);
                }
              else
                {
                  t = p_26;
                  {
                    ATerm r_26 = t;
                    int s_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(s_26);
                      }
                    else
                      {
                        t = r_26;
                        t = dynrule_targs_1_0(l_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm o_39 = NULL;
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_39 = ATgetArgument(t, 0);
          {
            ATerm v_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_26);
      t = o_39;
    }
  else
    {
      t = t_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_39;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = map_1_0(u_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm x_39 = NULL;
  ATerm w_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_39 = ATgetArgument(t, 0);
          {
            ATerm e_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_26);
      t = x_39;
    }
  else
    {
      t = w_26;
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
static ATerm a_10 (ATerm y_75, ATerm c_76, ATerm a_76, ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,s_38 = NULL;
  static ATerm h_3 (ATerm t)
  {
    t = y_75;
    t = free_vars_3_0(i_3, j_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = y_75;
    t = mark_match_vars_0_0(t);
    if(((n_38 != NULL) && (n_38 != t)))
      _fail(t);
    else
      n_38 = t;
    t = a_76;
    t = mark_buv_0_0(t);
    if(((o_38 != NULL) && (o_38 != t)))
      _fail(t);
    else
      o_38 = t;
    t = c_76;
    t = mark_build_vars_0_0(t);
    if(((s_38 != NULL) && (s_38 != t)))
      _fail(t);
    else
      s_38 = t;
    return(t);
  }
  t = scope_2_0(g_3, h_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_38), not_null(s_38), not_null(o_38)));
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm p_40 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_40);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      {
        ATerm h_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_27);
          }
        else
          {
            t = h_27;
            {
              ATerm s_27 = t;
              int t_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,w_40 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_40 = ATgetArgument(t, 0);
                      s_40 = ATgetArgument(t, 1);
                      t_40 = ATgetArgument(t, 2);
                      w_40 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_40;
                  t = map_1_0(z_3, t);
                  LocalPopChoice(t_27);
                }
              else
                {
                  t = s_27;
                  {
                    ATerm w_27 = t;
                    int a_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(a_28);
                      }
                    else
                      {
                        t = w_27;
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
  ATerm h_41 = NULL;
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_41 = ATgetArgument(t, 0);
          {
            ATerm v_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_28);
      t = h_41;
    }
  else
    {
      t = j_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_41;
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
  ATerm m_41 = NULL;
  ATerm w_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_41 = ATgetArgument(t, 0);
          {
            ATerm b_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_28);
      t = m_41;
    }
  else
    {
      t = w_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_41;
    }
  return(t);
}
static ATerm b_10 (ATerm s_75, ATerm w_75, ATerm u_75, ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,o_40 = NULL;
  static ATerm w_3 (ATerm t)
  {
    t = s_75;
    t = free_vars_3_0(x_3, y_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = s_75;
    t = mark_match_vars_0_0(t);
    if(((i_40 != NULL) && (i_40 != t)))
      _fail(t);
    else
      i_40 = t;
    t = u_75;
    t = mark_buv_0_0(t);
    if(((j_40 != NULL) && (j_40 != t)))
      _fail(t);
    else
      j_40 = t;
    t = w_75;
    t = mark_build_vars_0_0(t);
    if(((o_40 != NULL) && (o_40 != t)))
      _fail(t);
    else
      o_40 = t;
    return(t);
  }
  t = scope_2_0(v_3, w_3, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_40), not_null(o_40), not_null(j_40)));
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm i_44 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_44);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      {
        ATerm e_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_29);
          }
        else
          {
            t = e_29;
            {
              ATerm o_29 = t;
              int r_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,t_44 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_44 = ATgetArgument(t, 0);
                      p_44 = ATgetArgument(t, 1);
                      q_44 = ATgetArgument(t, 2);
                      t_44 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_44;
                  t = map_1_0(e_4, t);
                  LocalPopChoice(r_29);
                }
              else
                {
                  t = o_29;
                  {
                    ATerm z_29 = t;
                    int b_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_30);
                      }
                    else
                      {
                        t = z_29;
                        t = dynrule_targs_1_0(f_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm g_45 = NULL;
  ATerm d_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_45 = ATgetArgument(t, 0);
          {
            ATerm s_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_30);
      t = g_45;
    }
  else
    {
      t = d_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_45;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = map_1_0(g_4, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm p_45 = NULL;
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_45 = ATgetArgument(t, 0);
          {
            ATerm w_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_30);
      t = p_45;
    }
  else
    {
      t = u_30;
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
static ATerm h_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm b_47 = NULL;
  ATerm x_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_47 = ATgetArgument(t, 0);
          {
            ATerm c_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_30);
      t = b_47;
    }
  else
    {
      t = x_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_47;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm g_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_47);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      {
        ATerm o_31 = t;
        int p_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_31);
          }
        else
          {
            t = o_31;
            {
              ATerm q_31 = t;
              int r_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_47 = NULL,j_47 = NULL,m_47 = NULL,n_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_47 = ATgetArgument(t, 0);
                      j_47 = ATgetArgument(t, 1);
                      m_47 = ATgetArgument(t, 2);
                      n_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_47;
                  t = map_1_0(m_4, t);
                  LocalPopChoice(r_31);
                }
              else
                {
                  t = q_31;
                  {
                    ATerm t_31 = t;
                    int u_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_31);
                      }
                    else
                      {
                        t = t_31;
                        t = dynrule_targs_1_0(n_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm x_47 = NULL;
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_47 = ATgetArgument(t, 0);
          {
            ATerm g_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_31);
      t = x_47;
    }
  else
    {
      t = x_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_47;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = map_1_0(o_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm f_48 = NULL;
  ATerm i_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_48 = ATgetArgument(t, 0);
          {
            ATerm u_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_32);
      t = f_48;
    }
  else
    {
      t = i_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_48;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL,v_42 = NULL,z_42 = NULL,a_43 = NULL,i_43 = NULL,n_43 = NULL,p_43 = NULL,u_43 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      v_42 = ATgetArgument(t, 0);
      z_42 = ATgetArgument(t, 1);
      a_43 = ATgetArgument(t, 2);
      {
        ATerm y_43 = NULL,b_44 = NULL,f_44 = NULL,h_44 = NULL;
        t = a_43;
        if(match_cons(t, sym_Rule_3))
          {
            r_42 = ATgetArgument(t, 0);
            s_42 = ATgetArgument(t, 1);
            t_42 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = a_43;
        t = free_vars_3_0(c_4, d_4, tboundin_3_0, t);
        y_43 = t;
        {
          static ATerm i_4 (ATerm t)
          {
            t = y_43;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = r_42;
            t = mark_match_vars_0_0(t);
            if(((b_44 != NULL) && (b_44 != t)))
              _fail(t);
            else
              b_44 = t;
            t = t_42;
            t = mark_buv_0_0(t);
            if(((f_44 != NULL) && (f_44 != t)))
              _fail(t);
            else
              f_44 = t;
            t = s_42;
            t = mark_build_vars_0_0(t);
            if(((h_44 != NULL) && (h_44 != t)))
              _fail(t);
            else
              h_44 = t;
            return(t);
          }
          t = scope_2_0(h_4, i_4, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, v_42, z_42, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_44), not_null(h_44), not_null(f_44)));
      }
    }
  else
    {
      ATerm k_46 = NULL,m_46 = NULL,o_46 = NULL,q_46 = NULL,s_46 = NULL,t_46 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          v_42 = ATgetArgument(t, 0);
          z_42 = ATgetArgument(t, 1);
          a_43 = ATgetArgument(t, 2);
          i_43 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = i_43;
      if(match_cons(t, sym_Rule_3))
        {
          n_43 = ATgetArgument(t, 0);
          p_43 = ATgetArgument(t, 1);
          u_43 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = a_43;
      t = map_1_0(j_4, t);
      k_46 = t;
      t = i_43;
      t = free_vars_3_0(k_4, l_4, tboundin_3_0, t);
      t_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_46, k_46);
      t = diff_0_0(t);
      m_46 = t;
      {
        static ATerm q_4 (ATerm t)
        {
          t = k_46;
          t = map_1_0(IntroduceBound_0_0, t);
          t = m_46;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = n_43;
          t = mark_match_vars_0_0(t);
          if(((o_46 != NULL) && (o_46 != t)))
            _fail(t);
          else
            o_46 = t;
          t = u_43;
          t = mark_buv_0_0(t);
          if(((q_46 != NULL) && (q_46 != t)))
            _fail(t);
          else
            q_46 = t;
          t = p_43;
          t = mark_build_vars_0_0(t);
          if(((s_46 != NULL) && (s_46 != t)))
            _fail(t);
          else
            s_46 = t;
          return(t);
        }
        t = scope_2_0(p_4, q_4, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, v_42, z_42, a_43, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_46), not_null(s_46), not_null(q_46)));
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_48);
  k_48 = t;
  t = term_s_33;
  l_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_48), term_s_33);
  t = k_10(r_4, k_48, l_48, t);
  t = j_48;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm g_49 = NULL;
  ATerm t_33 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_49 = ATgetArgument(t, 0);
          {
            ATerm f_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_34);
      t = g_49;
    }
  else
    {
      t = t_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_49;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm c_10 (ATerm q_74, ATerm r_74, ATerm s_74, ATerm u_74, ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  t = s_74;
  t = map_1_0(s_4, t);
  s_48 = t;
  {
    static ATerm u_4 (ATerm t)
    {
      t = s_48;
      t = map_1_0(IntroduceBound_0_0, t);
      t = u_74;
      t = mark_buv_0_0(t);
      if(((t_48 != NULL) && (t_48 != t)))
        _fail(t);
      else
        t_48 = t;
      return(t);
    }
    t = scope_2_0(t_4, u_4, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, q_74, r_74, s_74, not_null(t_48));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm r_50 = NULL,t_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,z_50 = NULL;
  r_50 = t;
  if(match_cons(t, sym__2))
    {
      t_50 = ATgetArgument(t, 0);
      x_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_50;
  if(match_cons(t, sym_Undefined_0))
    {
      t = t_50;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_g_34;
        }
      else
        {
          t = term_g_34;
        }
    }
  else
    {
      ATerm h_34 = t;
      int j_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm k_34 = ATgetArgument(t, 0);
              z_50 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(j_34);
          t = t_50;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_g_34;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  v_50 = ATgetArgument(t, 0);
                  w_50 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm l_34 = t;
                int m_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, w_50, z_50);
                    {
                      ATerm n_34 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm z_25 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              z_25 = ATgetArgument(t, 0);
                              if((z_25 != ATgetArgument(t, 1)))
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
                          t = n_34;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, v_50, term_o_34);
                    LocalPopChoice(m_34);
                  }
                else
                  {
                    t = l_34;
                    t = z_50;
                    if((w_50 != t))
                      {
                        _fail(t);
                      }
                    t = t_50;
                  }
              }
            }
        }
      else
        {
          t = h_34;
          t = t_50;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_g_34;
        }
    }
  return(t);
}
static ATerm d_10 (ATerm b_73, ATerm c_73, ATerm a_73, ATerm t)
{
  ATerm o_51 = NULL,q_51 = NULL,r_51 = NULL;
  t = term_f_26;
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_26, b_73);
  t = l_11(r_51, b_73, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_51 = ATgetFirst((ATermList) t);
      {
        ATerm s_34 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_73, o_51);
  t = CompareEntries_0_0(t);
  q_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_73, (ATerm) ATinsert(CheckATermList(a_73), q_51));
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,l_52 = NULL,q_52 = NULL,r_52 = NULL;
  r_52 = t;
  if(match_cons(t, sym__2))
    {
      h_52 = ATgetArgument(t, 0);
      i_52 = ATgetArgument(t, 1);
      t = i_52;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_52 = ATgetFirst((ATermList) t);
          q_52 = (ATerm) ATgetNext((ATermList) t);
          t = l_52;
          {
            ATerm t_34 = t;
            int u_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm v_34 = ATgetArgument(t, 0);
                    ATerm w_34 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(u_34);
                t = h_52;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = r_52;
                  }
                else
                  {
                    ATerm x_34 = t;
                    int y_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = r_52;
                        t = d_10(h_52, l_52, q_52, t);
                        LocalPopChoice(y_34);
                      }
                    else
                      {
                        t = x_34;
                        t = r_52;
                      }
                  }
              }
            else
              {
                t = t_34;
                t = h_52;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = r_52;
                  }
                else
                  {
                    t = r_52;
                  }
              }
          }
        }
      else
        {
          t = h_52;
          if(match_cons(t, sym_Scopes_0))
            {
              t = r_52;
            }
          else
            {
              t = r_52;
            }
        }
    }
  else
    {
      t = r_52;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL;
  t = map_1_0(v_4, t);
  d_52 = t;
  t = term_f_26;
  t = table_destroy_0_0(t);
  t = term_f_26;
  e_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_26, d_52);
  t = e_10(e_52, d_52, t);
  t = d_52;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,p_54 = NULL;
  p_54 = t;
  {
    ATerm z_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm b_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_35);
        t = p_54;
      }
    else
      {
        t = z_34;
        {
          ATerm c_35 = t;
          int d_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm e_35 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(d_35);
              t = p_54;
            }
          else
            {
              t = c_35;
              {
                ATerm g_35 = t;
                int h_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm i_35 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_35);
                    t = p_54;
                  }
                else
                  {
                    t = g_35;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm j_35 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = p_54;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  k_54 = t;
  t = p_54;
  t = SRTS_one(mark_buv_0_0, t);
  l_54 = t;
  t = k_54;
  t = isect_MarkVar_0_0(t);
  t = l_54;
  return(t);
}
static ATerm e_10 (ATerm h_33, ATerm g_33, ATerm t)
{
  static ATerm w_4 (ATerm t)
  {
    ATerm t_54 = NULL,v_54 = NULL,z_54 = NULL;
    if(match_cons(t, sym__2))
      {
        t_54 = ATgetArgument(t, 0);
        v_54 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, h_33, t_54, v_54);
    t = lookup_table_0_1(h_33, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        z_54 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = p_11(t_54, v_54, z_54, t);
    t = (ATerm) ATmakeAppl(sym__3, h_33, t_54, v_54);
    return(t);
  }
  t = g_33;
  t = map_1_0(w_4, t);
  return(t);
}
static ATerm f_10 (ATerm q_36, ATerm t)
{
  t = SSL_hashtable_keys(q_36);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL;
  static ATerm b_5 (ATerm t)
  {
    ATerm f_55 = NULL,h_55 = NULL;
    f_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_55), f_55);
    t = l_11(not_null(d_55), f_55, t);
    h_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_55, h_55);
    return(t);
  }
  if(((d_55 != NULL) && (d_55 != t)))
    _fail(t);
  else
    d_55 = t;
  t = lookup_table_0_1(d_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(e_55, t);
  t = map_1_0(b_5, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_f_26;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm o_73, ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm c_5 (ATerm t)
    {
      static ATerm r_56 (ATerm y_55, ATerm t)
      {
        ATerm a_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL;
        t = y_55;
        if(match_cons(t, sym__2))
          {
            ATerm k_35 = ATgetArgument(t, 0);
            a_56 = k_35;
            if(match_cons(k_35, sym_Var_1))
              {
                d_56 = ATgetArgument(k_35, 0);
              }
            else
              _fail(t);
            {
              ATerm l_35 = ATgetArgument(t, 1);
              if(((ATgetType(l_35) == AT_LIST) && !(ATisEmpty(l_35))))
                {
                  ATerm m_35 = ATgetFirst((ATermList) l_35);
                  if(match_cons(m_35, sym_Defined_2))
                    {
                      e_56 = ATgetArgument(m_35, 0);
                      {
                        ATerm p_35 = ATgetArgument(m_35, 1);
                        if((ATgetSymbol((ATermAppl) p_35) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  f_56 = (ATerm) ATgetNext((ATermList) l_35);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_73;
        {
          static ATerm e_5 (ATerm t)
          {
            if((d_56 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(e_5, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, a_56, (ATerm) ATinsert(CheckATermList(f_56), (ATerm) ATmakeAppl(sym_Defined_2, e_56, term_o_34)));
        return(t);
      }
      ATerm h_56 = NULL,l_56 = NULL;
      l_56 = t;
      {
        ATerm q_35 = t;
        int t_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                h_56 = ATgetArgument(t, 0);
                {
                  ATerm u_35 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_35);
            t = h_56;
            if(match_cons(t, sym_Scopes_0))
              {
                t = l_56;
              }
            else
              {
                ATerm v_35 = t;
                int w_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = r_56(l_56, t);
                    LocalPopChoice(w_35);
                  }
                else
                  {
                    t = v_35;
                    t = l_56;
                  }
              }
          }
        else
          {
            t = q_35;
            {
              ATerm x_35 = t;
              int y_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_56(l_56, t);
                  LocalPopChoice(y_35);
                }
              else
                {
                  t = x_35;
                  t = l_56;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(c_5, t);
  }
  p_55 = t;
  t = term_f_26;
  t = table_destroy_0_0(t);
  t = term_f_26;
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_26, p_55);
  t = e_10(q_55, p_55, t);
  t = p_55;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm f_58 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_58);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_36);
    }
  else
    {
      t = z_35;
      {
        ATerm b_36 = t;
        int c_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_36);
          }
        else
          {
            t = b_36;
            {
              ATerm d_36 = t;
              int e_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_58 = ATgetArgument(t, 0);
                      i_58 = ATgetArgument(t, 1);
                      j_58 = ATgetArgument(t, 2);
                      k_58 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_58;
                  t = map_1_0(k_5, t);
                  LocalPopChoice(e_36);
                }
              else
                {
                  t = d_36;
                  {
                    ATerm f_36 = t;
                    int g_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(g_36);
                      }
                    else
                      {
                        t = f_36;
                        t = dynrule_targs_1_0(l_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm r_58 = NULL;
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_58 = ATgetArgument(t, 0);
          {
            ATerm u_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_36);
      t = r_58;
    }
  else
    {
      t = h_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_58;
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = map_1_0(o_5, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm x_58 = NULL;
  ATerm v_36 = t;
  int w_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_58 = ATgetArgument(t, 0);
          {
            ATerm x_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_36);
      t = x_58;
    }
  else
    {
      t = v_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_58;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,j_57 = NULL,k_57 = NULL,o_57 = NULL,q_57 = NULL,t_57 = NULL,u_57 = NULL,y_57 = NULL,a_58 = NULL,e_58 = NULL,m_7 = NULL,l_7 = NULL;
  e_58 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_57 = ATgetArgument(t, 0);
      y_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_58);
  t_57 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, u_57, y_57);
  l_7 = t;
  t = SSLsetAnnotations(l_7, t_57);
  a_58 = t;
  if(match_cons(t, sym_Let_2))
    {
      d_57 = ATgetArgument(t, 0);
      {
        ATerm y_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = d_57;
  t = free_vars_3_0(f_5, j_5, tboundin_3_0, t);
  y_56 = t;
  t = undefine_unbound_MarkVar_0_1(y_56, t);
  z_56 = t;
  t = a_58;
  if(match_cons(t, sym_Let_2))
    {
      f_57 = ATgetArgument(t, 0);
      j_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_58);
  e_57 = t;
  t = f_57;
  {
    static ATerm w_5 (ATerm t)
    {
      ATerm c_59 = NULL,j_59 = NULL;
      c_59 = t;
      t = term_f_26;
      t = table_destroy_0_0(t);
      t = term_f_26;
      j_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_f_26, z_56);
      t = e_10(j_59, z_56, t);
      t = c_59;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(w_5, t);
  }
  k_57 = t;
  t = term_f_26;
  t = table_destroy_0_0(t);
  t = term_f_26;
  q_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_26, z_56);
  t = e_10(q_57, z_56, t);
  t = j_57;
  t = mark_buv_0_0(t);
  o_57 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, k_57, o_57);
  m_7 = t;
  t = SSLsetAnnotations(m_7, e_57);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm z_36 = t;
  int a_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL,q_7 = NULL;
      o_59 = t;
      if(match_cons(t, sym_Var_1))
        {
          n_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_59);
      m_59 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, n_59);
      q_7 = t;
      t = SSLsetAnnotations(q_7, m_59);
      LocalPopChoice(a_37);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = z_36;
      {
        ATerm b_37 = t;
        int c_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,r_7 = NULL;
            s_59 = t;
            if(match_cons(t, sym_App_2))
              {
                q_59 = ATgetArgument(t, 0);
                r_59 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_59);
            p_59 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, q_59, r_59);
            r_7 = t;
            t = SSLsetAnnotations(r_7, p_59);
            LocalPopChoice(c_37);
            {
              ATerm w_59 = NULL,x_59 = NULL,b_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,s_7 = NULL;
              h_60 = t;
              if(match_cons(t, sym_App_2))
                {
                  x_59 = ATgetArgument(t, 0);
                  b_60 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_60);
              w_59 = t;
              t = x_59;
              t = mark_buv_0_0(t);
              f_60 = t;
              t = b_60;
              t = mark_build_vars_0_0(t);
              g_60 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, f_60, g_60);
              s_7 = t;
              t = SSLsetAnnotations(s_7, w_59);
            }
          }
        else
          {
            t = b_37;
            {
              ATerm d_37 = t;
              int e_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL,t_7 = NULL;
                  p_60 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      o_60 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_60);
                  n_60 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, o_60);
                  t_7 = t;
                  t = SSLsetAnnotations(t_7, n_60);
                  LocalPopChoice(e_37);
                  {
                    ATerm q_60 = NULL,r_60 = NULL,w_60 = NULL,a_61 = NULL,v_7 = NULL;
                    a_61 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        r_60 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(a_61);
                    q_60 = t;
                    t = r_60;
                    t = mark_buv_0_0(t);
                    w_60 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, w_60);
                    v_7 = t;
                    t = SSLsetAnnotations(v_7, q_60);
                  }
                }
              else
                {
                  t = d_37;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_10 (ATerm r_32, ATerm s_32, ATerm t_32, ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,h_61 = NULL;
  c_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_32, s_32);
  t = l_11(r_32, s_32, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_37 = ATgetFirst((ATermList) t);
      b_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_32, s_32, (ATerm) ATinsert(CheckATermList(b_61), t_32));
  t = lookup_table_0_1(r_32, t);
  h_61 = t;
  t = (ATerm) ATinsert(CheckATermList(b_61), t_32);
  d_61 = t;
  t = h_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(s_32, d_61, e_61, t);
  t = c_61;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL;
  k_61 = t;
  t = term_f_26;
  l_61 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_61);
  m_61 = t;
  t = term_i_37;
  n_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_26, (ATerm)ATmakeAppl(sym_Var_1, k_61), term_i_37);
  t = g_10(l_61, m_61, n_61, t);
  t = k_61;
  return(t);
}
static ATerm j_10 (ATerm p_32, ATerm q_32, ATerm t)
{
  ATerm q_61 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_32, q_32);
  t = l_11(p_32, q_32, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_61 = ATgetFirst((ATermList) t);
      {
        ATerm j_37 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_61;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm w_63 = NULL,y_63 = NULL;
  w_63 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,q_27 = NULL;
        t = term_f_26;
        q_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_26, w_63);
        t = j_10(q_27, w_63, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm m_37 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_37) != ATmakeSymbol("p_1", 0, ATtrue)))
              _fail(t);
            z_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, y_63);
        a_27 = t;
        t = (ATerm) ATinsert(ATempty, z_26);
        b_27 = t;
        t = SSLsetAnnotations(a_27, b_27);
        LocalPopChoice(l_37);
      }
    else
      {
        t = k_37;
        {
          ATerm n_37 = t;
          int o_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_28 = NULL,h_28 = NULL,i_28 = NULL,x_28 = NULL;
              t = term_f_26;
              x_28 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_f_26, w_63);
              t = j_10(x_28, w_63, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm p_37 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_37) != ATmakeSymbol("n_1", 0, ATtrue)))
                    _fail(t);
                  e_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, y_63);
              h_28 = t;
              t = (ATerm) ATinsert(ATempty, e_28);
              i_28 = t;
              t = SSLsetAnnotations(h_28, i_28);
              LocalPopChoice(o_37);
            }
          else
            {
              t = n_37;
              {
                ATerm g_29 = NULL,i_29 = NULL,k_29 = NULL,a_30 = NULL;
                t = term_f_26;
                a_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_26, w_63);
                t = j_10(a_30, w_63, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm q_37 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) q_37) != ATmakeSymbol("l_1", 0, ATtrue)))
                      _fail(t);
                    g_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, y_63);
                i_29 = t;
                t = (ATerm) ATinsert(ATempty, g_29);
                k_29 = t;
                t = SSLsetAnnotations(i_29, k_29);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL,o_64 = NULL,d_8 = NULL;
  ATerm r_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(s_37);
    }
  else
    {
      t = r_37;
    }
  o_64 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_64);
  j_64 = t;
  t = k_64;
  t = DeclareBound_0_0(t);
  l_64 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_64);
  d_8 = t;
  t = SSLsetAnnotations(d_8, j_64);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm t_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_64 = NULL,u_64 = NULL,x_64 = NULL,x_8 = NULL;
      x_64 = t;
      if(match_cons(t, sym_Var_1))
        {
          u_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_64);
      s_64 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, u_64);
      x_8 = t;
      t = SSLsetAnnotations(x_8, s_64);
      LocalPopChoice(a_38);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = t_37;
      {
        ATerm b_38 = t;
        int c_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,e_65 = NULL,j_9 = NULL;
            e_65 = t;
            if(match_cons(t, sym_App_2))
              {
                z_64 = ATgetArgument(t, 0);
                a_65 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_65);
            y_64 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, z_64, a_65);
            j_9 = t;
            t = SSLsetAnnotations(j_9, y_64);
            LocalPopChoice(c_38);
            {
              ATerm f_65 = NULL,h_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,t_10 = NULL;
              r_65 = t;
              if(match_cons(t, sym_App_2))
                {
                  h_65 = ATgetArgument(t, 0);
                  o_65 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_65);
              f_65 = t;
              t = h_65;
              t = mark_buv_0_0(t);
              p_65 = t;
              t = o_65;
              t = mark_build_vars_0_0(t);
              q_65 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, p_65, q_65);
              t_10 = t;
              t = SSLsetAnnotations(t_10, f_65);
            }
          }
        else
          {
            t = b_38;
            {
              ATerm f_38 = t;
              int g_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_65 = NULL,x_65 = NULL,a_66 = NULL,x_11 = NULL;
                  a_66 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      x_65 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_66);
                  u_65 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, x_65);
                  x_11 = t;
                  t = SSLsetAnnotations(x_11, u_65);
                  LocalPopChoice(g_38);
                  {
                    ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,y_11 = NULL;
                    j_66 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        h_66 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(j_66);
                    g_66 = t;
                    t = h_66;
                    t = mark_buv_0_0(t);
                    i_66 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, i_66);
                    y_11 = t;
                    t = SSLsetAnnotations(y_11, g_66);
                  }
                }
              else
                {
                  t = f_38;
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
  ATerm i_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_67 = NULL,w_67 = NULL;
      p_67 = t;
      if(match_cons(t, sym_Match_1))
        {
          w_67 = ATgetArgument(t, 0);
          {
            ATerm l_30 = NULL,t_30 = NULL,f_12 = NULL;
            t = SSLgetAnnotations(p_67);
            l_30 = t;
            t = w_67;
            t = mark_match_vars_0_0(t);
            t_30 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, t_30);
            f_12 = t;
            t = SSLsetAnnotations(f_12, l_30);
          }
        }
      else
        {
          ATerm b_31 = NULL,g_31 = NULL,g_12 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              w_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_67);
          b_31 = t;
          t = w_67;
          t = mark_build_vars_0_0(t);
          g_31 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, g_31);
          g_12 = t;
          t = SSLsetAnnotations(g_12, b_31);
        }
      LocalPopChoice(j_38);
    }
  else
    {
      t = i_38;
      {
        ATerm k_38 = t;
        int l_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(l_38);
          }
        else
          {
            t = k_38;
            {
              ATerm m_38 = t;
              int p_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(p_38);
                }
              else
                {
                  t = m_38;
                  {
                    ATerm r_38 = t;
                    int u_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(u_38);
                      }
                    else
                      {
                        t = r_38;
                        {
                          ATerm x_38 = t;
                          int y_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL,c_68 = NULL,e_68 = NULL;
                              x_67 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  y_67 = ATgetArgument(t, 0);
                                  z_67 = ATgetArgument(t, 1);
                                  c_68 = ATgetArgument(t, 2);
                                  e_68 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = x_67;
                              t = c_10(y_67, z_67, c_68, e_68, t);
                              LocalPopChoice(y_38);
                            }
                          else
                            {
                              t = x_38;
                              {
                                ATerm d_39 = t;
                                int e_39 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(e_39);
                                  }
                                else
                                  {
                                    t = d_39;
                                    {
                                      ATerm f_39 = t;
                                      int g_39 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL;
                                          q_68 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              r_68 = ATgetArgument(t, 0);
                                              t = r_68;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  n_68 = ATgetArgument(t, 0);
                                                  o_68 = ATgetArgument(t, 1);
                                                  p_68 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = q_68;
                                              t = b_10(n_68, o_68, p_68, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  r_68 = ATgetArgument(t, 0);
                                                  t = r_68;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      n_68 = ATgetArgument(t, 0);
                                                      o_68 = ATgetArgument(t, 1);
                                                      p_68 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = q_68;
                                                  t = a_10(n_68, o_68, p_68, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      r_68 = ATgetArgument(t, 0);
                                                      s_68 = ATgetArgument(t, 1);
                                                      t_68 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = q_68;
                                                  t = z_9(r_68, s_68, t_68, t);
                                                }
                                            }
                                          LocalPopChoice(g_39);
                                        }
                                      else
                                        {
                                          t = f_39;
                                          {
                                            ATerm h_39 = t;
                                            int i_39 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(i_39);
                                              }
                                            else
                                              {
                                                t = h_39;
                                                {
                                                  ATerm j_39 = t;
                                                  int k_39 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(k_39);
                                                    }
                                                  else
                                                    {
                                                      t = j_39;
                                                      {
                                                        ATerm l_39 = t;
                                                        int m_39 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm q_69 = NULL;
                                                            q_69 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm n_39 = ATgetArgument(t, 0);
                                                                ATerm p_39 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = q_69;
                                                            t = y_9(t);
                                                            LocalPopChoice(m_39);
                                                          }
                                                        else
                                                          {
                                                            t = l_39;
                                                            {
                                                              ATerm r_39 = t;
                                                              int s_39 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(s_39);
                                                                }
                                                              else
                                                                {
                                                                  t = r_39;
                                                                  {
                                                                    ATerm t_39 = t;
                                                                    int u_39 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(u_39);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_39;
                                                                        {
                                                                          ATerm v_39 = t;
                                                                          int w_39 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(w_39);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_39;
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
static ATerm k_10 (ATerm h_102 (ATerm), ATerm a_31, ATerm y_30, ATerm t)
{
  ATerm z_70 = NULL,b_71 = NULL,m_71 = NULL,x_71 = NULL,j_72 = NULL,q_72 = NULL,x_72 = NULL,f_73 = NULL;
  x_71 = t;
  t = h_102(t);
  z_70 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_70, a_31, y_30);
  t = m_11(z_70, a_31, y_30, t);
  {
    ATerm y_39 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_73 = NULL;
        t = term_c_40;
        g_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_70, term_c_40);
        t = l_11(z_70, g_73, t);
        LocalPopChoice(b_40);
      }
    else
      {
        t = y_39;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_71 = ATgetFirst((ATermList) t);
      m_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_70, term_c_40, (ATerm) ATinsert(CheckATermList(m_71), (ATerm) ATinsert(CheckATermList(b_71), a_31)));
  t = lookup_table_0_1(z_70, t);
  f_73 = t;
  t = term_c_40;
  j_72 = t;
  t = (ATerm) ATinsert(CheckATermList(m_71), (ATerm) ATinsert(CheckATermList(b_71), a_31));
  q_72 = t;
  t = f_73;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(j_72, q_72, x_72, t);
  t = x_71;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL,r_73 = NULL;
  j_73 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_73);
  k_73 = t;
  t = term_f_40;
  r_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_73), term_f_40);
  t = k_10(y_5, k_73, r_73, t);
  t = j_73;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm u_73 = NULL,v_73 = NULL,z_73 = NULL,a_74 = NULL,e_74 = NULL,j_12 = NULL;
  e_74 = t;
  if(match_cons(t, sym_Scope_2))
    {
      v_73 = ATgetArgument(t, 0);
      z_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_74);
  u_73 = t;
  t = z_73;
  {
    static ATerm a_6 (ATerm t)
    {
      ATerm f_74 = NULL;
      f_74 = t;
      t = v_73;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = f_74;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(z_5, a_6, t);
  }
  a_74 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, v_73, a_74);
  j_12 = t;
  t = SSLsetAnnotations(j_12, u_73);
  return(t);
}
ATerm tboundin_3_0 (ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm t)
{
  ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL;
  f_86 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_86 = ATgetArgument(t, 0);
      e_86 = ATgetArgument(t, 1);
      {
        ATerm s_31 = NULL,v_31 = NULL,w_31 = NULL,m_12 = NULL;
        t = SSLgetAnnotations(f_86);
        s_31 = t;
        t = g_86;
        t = l_121(t);
        v_31 = t;
        t = e_86;
        t = j_121(t);
        w_31 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, v_31, w_31);
        m_12 = t;
        t = SSLsetAnnotations(m_12, s_31);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          g_86 = ATgetArgument(t, 0);
          {
            ATerm v_32 = NULL,x_32 = NULL,z_32 = NULL,a_33 = NULL,e_33 = NULL,f_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,p_12 = NULL,n_12 = NULL;
            t = SSLgetAnnotations(f_86);
            v_32 = t;
            t = g_86;
            if(match_cons(t, sym_Rule_3))
              {
                z_32 = ATgetArgument(t, 0);
                a_33 = ATgetArgument(t, 1);
                e_33 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_86);
            x_32 = t;
            t = z_32;
            t = j_121(t);
            f_33 = t;
            t = a_33;
            t = j_121(t);
            i_33 = t;
            t = e_33;
            t = j_121(t);
            j_33 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, f_33, i_33, j_33);
            n_12 = t;
            t = SSLsetAnnotations(n_12, x_32);
            k_33 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, k_33);
            p_12 = t;
            t = SSLsetAnnotations(p_12, v_32);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              g_86 = ATgetArgument(t, 0);
              e_86 = ATgetArgument(t, 1);
              c_86 = ATgetArgument(t, 2);
              {
                ATerm i_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,u_12 = NULL;
                t = SSLgetAnnotations(f_86);
                i_34 = t;
                t = g_86;
                t = l_121(t);
                p_34 = t;
                t = e_86;
                t = l_121(t);
                q_34 = t;
                t = c_86;
                t = l_121(t);
                r_34 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, p_34, q_34, r_34);
                u_12 = t;
                t = SSLsetAnnotations(u_12, i_34);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  g_86 = ATgetArgument(t, 0);
                  e_86 = ATgetArgument(t, 1);
                  c_86 = ATgetArgument(t, 2);
                  d_86 = ATgetArgument(t, 3);
                  {
                    ATerm f_35 = NULL,n_35 = NULL,o_35 = NULL,r_35 = NULL,s_35 = NULL,z_12 = NULL;
                    t = SSLgetAnnotations(f_86);
                    f_35 = t;
                    t = g_86;
                    t = l_121(t);
                    n_35 = t;
                    t = e_86;
                    t = l_121(t);
                    o_35 = t;
                    t = c_86;
                    t = l_121(t);
                    r_35 = t;
                    t = d_86;
                    t = j_121(t);
                    s_35 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, n_35, o_35, r_35, s_35);
                    z_12 = t;
                    t = SSLsetAnnotations(z_12, f_35);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_86 = ATgetArgument(t, 0);
                      e_86 = ATgetArgument(t, 1);
                      c_86 = ATgetArgument(t, 2);
                      d_86 = ATgetArgument(t, 3);
                      {
                        ATerm f_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,z_37 = NULL,b_13 = NULL;
                        t = SSLgetAnnotations(f_86);
                        f_37 = t;
                        t = g_86;
                        t = l_121(t);
                        u_37 = t;
                        t = e_86;
                        t = l_121(t);
                        v_37 = t;
                        t = c_86;
                        t = l_121(t);
                        w_37 = t;
                        t = d_86;
                        t = j_121(t);
                        z_37 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, u_37, v_37, w_37, z_37);
                        b_13 = t;
                        t = SSLsetAnnotations(b_13, f_37);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          g_86 = ATgetArgument(t, 0);
                          e_86 = ATgetArgument(t, 1);
                          {
                            ATerm q_38 = NULL,v_38 = NULL,w_38 = NULL,m_13 = NULL;
                            t = SSLgetAnnotations(f_86);
                            q_38 = t;
                            t = g_86;
                            t = l_121(t);
                            v_38 = t;
                            t = e_86;
                            t = j_121(t);
                            w_38 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, v_38, w_38);
                            m_13 = t;
                            t = SSLsetAnnotations(m_13, q_38);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              g_86 = ATgetArgument(t, 0);
                              e_86 = ATgetArgument(t, 1);
                              {
                                ATerm q_39 = NULL,z_39 = NULL,a_40 = NULL,x_13 = NULL;
                                t = SSLgetAnnotations(f_86);
                                q_39 = t;
                                t = g_86;
                                t = l_121(t);
                                z_39 = t;
                                t = e_86;
                                t = j_121(t);
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
                                  g_86 = ATgetArgument(t, 0);
                                  e_86 = ATgetArgument(t, 1);
                                  {
                                    ATerm l_40 = NULL,u_40 = NULL,v_40 = NULL,e_14 = NULL;
                                    t = SSLgetAnnotations(f_86);
                                    l_40 = t;
                                    t = g_86;
                                    t = l_121(t);
                                    u_40 = t;
                                    t = e_86;
                                    t = j_121(t);
                                    v_40 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, u_40, v_40);
                                    e_14 = t;
                                    t = SSLsetAnnotations(e_14, l_40);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      g_86 = ATgetArgument(t, 0);
                                      {
                                        ATerm q_41 = NULL,s_41 = NULL,y_14 = NULL;
                                        t = SSLgetAnnotations(f_86);
                                        q_41 = t;
                                        t = g_86;
                                        t = j_121(t);
                                        s_41 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, s_41);
                                        y_14 = t;
                                        t = SSLsetAnnotations(y_14, q_41);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          g_86 = ATgetArgument(t, 0);
                                          {
                                            ATerm b_42 = NULL,d_42 = NULL,l_15 = NULL;
                                            t = SSLgetAnnotations(f_86);
                                            b_42 = t;
                                            t = g_86;
                                            t = j_121(t);
                                            d_42 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, d_42);
                                            l_15 = t;
                                            t = SSLsetAnnotations(l_15, b_42);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              g_86 = ATgetArgument(t, 0);
                                              {
                                                ATerm j_42 = NULL,l_42 = NULL,m_15 = NULL;
                                                t = SSLgetAnnotations(f_86);
                                                j_42 = t;
                                                t = g_86;
                                                t = j_121(t);
                                                l_42 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, l_42);
                                                m_15 = t;
                                                t = SSLsetAnnotations(m_15, j_42);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  g_86 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm w_42 = NULL,y_42 = NULL,o_15 = NULL;
                                                    t = SSLgetAnnotations(f_86);
                                                    w_42 = t;
                                                    t = g_86;
                                                    t = j_121(t);
                                                    y_42 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, y_42);
                                                    o_15 = t;
                                                    t = SSLsetAnnotations(o_15, w_42);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm l_43 = NULL,o_43 = NULL,t_15 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      g_86 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(f_86);
                                                  l_43 = t;
                                                  t = g_86;
                                                  t = j_121(t);
                                                  o_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, o_43);
                                                  t_15 = t;
                                                  t = SSLsetAnnotations(t_15, l_43);
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
ATerm dynrule_targs_1_0 (ATerm s_121 (ATerm), ATerm t)
{
  ATerm c_87 = NULL,d_87 = NULL,g_87 = NULL;
  ATerm g_40 = t;
  int h_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          c_87 = ATgetArgument(t, 0);
          {
            ATerm k_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_40);
      t = c_87;
      if(match_cons(t, sym_DynRuleId_1))
        {
          d_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_87;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm m_40 = ATgetArgument(t, 0);
          ATerm n_40 = ATgetArgument(t, 1);
          g_87 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_87;
    }
  else
    {
      t = g_40;
      {
        ATerm q_40 = t;
        int x_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                c_87 = ATgetArgument(t, 0);
                {
                  ATerm y_40 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(x_40);
            t = c_87;
            if(match_cons(t, sym_DynRuleId_1))
              {
                d_87 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = d_87;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm z_40 = ATgetArgument(t, 0);
                ATerm a_41 = ATgetArgument(t, 1);
                g_87 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = g_87;
          }
        else
          {
            t = q_40;
            if(match_cons(t, sym_AddDynRule_2))
              {
                c_87 = ATgetArgument(t, 0);
                {
                  ATerm b_41 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = c_87;
            if(match_cons(t, sym_DynRuleId_1))
              {
                d_87 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = d_87;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm c_41 = ATgetArgument(t, 0);
                ATerm d_41 = ATgetArgument(t, 1);
                g_87 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = g_87;
          }
      }
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm w_87 = NULL;
  ATerm e_41 = t;
  int f_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_87 = ATgetArgument(t, 0);
          {
            ATerm g_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_41);
      t = w_87;
    }
  else
    {
      t = e_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_87;
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm c_88 = NULL;
  ATerm i_41 = t;
  int j_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_88 = ATgetArgument(t, 0);
          {
            ATerm k_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_41);
      t = c_88;
    }
  else
    {
      t = i_41;
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
ATerm Bind8_0_0 (ATerm t)
{
  ATerm r_87 = NULL;
  ATerm l_41 = t;
  int n_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm o_41 = ATgetArgument(t, 0);
          ATerm p_41 = ATgetArgument(t, 1);
          r_87 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(n_41);
      t = r_87;
      t = map_1_0(b_6, t);
    }
  else
    {
      t = l_41;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm r_41 = ATgetArgument(t, 0);
          ATerm t_41 = ATgetArgument(t, 1);
          r_87 = ATgetArgument(t, 2);
          {
            ATerm u_41 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = r_87;
      t = map_1_0(c_6, t);
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm y_88 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_88);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm x_41 = t;
  int y_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_41);
    }
  else
    {
      t = x_41;
      {
        ATerm z_41 = t;
        int a_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_42);
          }
        else
          {
            t = z_41;
            {
              ATerm c_42 = t;
              int e_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_89 = ATgetArgument(t, 0);
                      b_89 = ATgetArgument(t, 1);
                      c_89 = ATgetArgument(t, 2);
                      d_89 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_89;
                  t = map_1_0(i_6, t);
                  LocalPopChoice(e_42);
                }
              else
                {
                  t = c_42;
                  {
                    ATerm f_42 = t;
                    int g_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(g_42);
                      }
                    else
                      {
                        t = f_42;
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
  ATerm k_89 = NULL;
  ATerm h_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_89 = ATgetArgument(t, 0);
          {
            ATerm k_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_42);
      t = k_89;
    }
  else
    {
      t = h_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_89;
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
  ATerm p_89 = NULL;
  ATerm m_42 = t;
  int n_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_89 = ATgetArgument(t, 0);
          {
            ATerm o_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_42);
      t = p_89;
    }
  else
    {
      t = m_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_89;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm t_89 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_89);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm p_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_42);
    }
  else
    {
      t = p_42;
      {
        ATerm u_42 = t;
        int x_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_42);
          }
        else
          {
            t = u_42;
            {
              ATerm b_43 = t;
              int g_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_89 = NULL,w_89 = NULL,x_89 = NULL,y_89 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_89 = ATgetArgument(t, 0);
                      w_89 = ATgetArgument(t, 1);
                      x_89 = ATgetArgument(t, 2);
                      y_89 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_89;
                  t = map_1_0(s_6, t);
                  LocalPopChoice(g_43);
                }
              else
                {
                  t = b_43;
                  {
                    ATerm h_43 = t;
                    int j_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(j_43);
                      }
                    else
                      {
                        t = h_43;
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
  ATerm f_90 = NULL;
  ATerm k_43 = t;
  int m_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_90 = ATgetArgument(t, 0);
          {
            ATerm q_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_43);
      t = f_90;
    }
  else
    {
      t = k_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_90;
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
  ATerm k_90 = NULL;
  ATerm r_43 = t;
  int s_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_90 = ATgetArgument(t, 0);
          {
            ATerm t_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_43);
      t = k_90;
    }
  else
    {
      t = r_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_90;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm o_90 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_90);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm v_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_43);
    }
  else
    {
      t = v_43;
      {
        ATerm x_43 = t;
        int z_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_43);
          }
        else
          {
            t = x_43;
            {
              ATerm a_44 = t;
              int c_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_90 = ATgetArgument(t, 0);
                      r_90 = ATgetArgument(t, 1);
                      s_90 = ATgetArgument(t, 2);
                      t_90 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_90;
                  t = map_1_0(c_7, t);
                  LocalPopChoice(c_44);
                }
              else
                {
                  t = a_44;
                  {
                    ATerm d_44 = t;
                    int g_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(g_44);
                      }
                    else
                      {
                        t = d_44;
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
  ATerm a_91 = NULL;
  ATerm j_44 = t;
  int k_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_91 = ATgetArgument(t, 0);
          {
            ATerm l_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_44);
      t = a_91;
    }
  else
    {
      t = j_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_91;
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
  ATerm f_91 = NULL;
  ATerm n_44 = t;
  int r_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_91 = ATgetArgument(t, 0);
          {
            ATerm s_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_44);
      t = f_91;
    }
  else
    {
      t = n_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_91;
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm j_91 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_91);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm u_44 = t;
  int v_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_44);
    }
  else
    {
      t = u_44;
      {
        ATerm w_44 = t;
        int x_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_44);
          }
        else
          {
            t = w_44;
            {
              ATerm y_44 = t;
              int z_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL,o_91 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_91 = ATgetArgument(t, 0);
                      m_91 = ATgetArgument(t, 1);
                      n_91 = ATgetArgument(t, 2);
                      o_91 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_91;
                  t = map_1_0(k_7, t);
                  LocalPopChoice(z_44);
                }
              else
                {
                  t = y_44;
                  {
                    ATerm a_45 = t;
                    int c_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(c_45);
                      }
                    else
                      {
                        t = a_45;
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
  ATerm v_91 = NULL;
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_91 = ATgetArgument(t, 0);
          {
            ATerm f_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_45);
      t = v_91;
    }
  else
    {
      t = d_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_91;
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
  ATerm a_92 = NULL;
  ATerm h_45 = t;
  int i_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_92 = ATgetArgument(t, 0);
          {
            ATerm j_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_45);
      t = a_92;
    }
  else
    {
      t = h_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_92;
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
  ATerm l_45 = t;
  int m_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_45);
    }
  else
    {
      t = l_45;
      {
        ATerm n_45 = t;
        int o_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_45);
          }
        else
          {
            t = n_45;
            {
              ATerm q_45 = t;
              int r_45 = stack_ptr;
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
                  LocalPopChoice(r_45);
                }
              else
                {
                  t = q_45;
                  {
                    ATerm s_45 = t;
                    int t_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_45);
                      }
                    else
                      {
                        t = s_45;
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
  ATerm w_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_92 = ATgetArgument(t, 0);
          {
            ATerm y_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_45);
      t = q_92;
    }
  else
    {
      t = w_45;
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
  ATerm z_45 = t;
  int d_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_92 = ATgetArgument(t, 0);
          {
            ATerm e_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_46);
      t = v_92;
    }
  else
    {
      t = z_45;
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
ATerm Bind4_0_0 (ATerm t)
{
  ATerm w_88 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      w_88 = ATgetArgument(t, 0);
      t = w_88;
      t = free_vars_3_0(d_6, e_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          w_88 = ATgetArgument(t, 0);
          t = w_88;
          t = free_vars_3_0(n_6, o_6, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              w_88 = ATgetArgument(t, 0);
              t = w_88;
              t = free_vars_3_0(a_7, b_7, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  w_88 = ATgetArgument(t, 0);
                  t = w_88;
                  t = free_vars_3_0(i_7, j_7, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      w_88 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = w_88;
                  t = free_vars_3_0(p_7, u_7, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm k_93 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_93);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm f_46 = t;
  int g_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_46);
    }
  else
    {
      t = f_46;
      {
        ATerm j_46 = t;
        int l_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_46);
          }
        else
          {
            t = j_46;
            {
              ATerm n_46 = t;
              int p_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_93 = ATgetArgument(t, 0);
                      n_93 = ATgetArgument(t, 1);
                      o_93 = ATgetArgument(t, 2);
                      p_93 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_93;
                  t = map_1_0(e_8, t);
                  LocalPopChoice(p_46);
                }
              else
                {
                  t = n_46;
                  {
                    ATerm r_46 = t;
                    int u_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_46);
                      }
                    else
                      {
                        t = r_46;
                        t = dynrule_targs_1_0(h_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm w_93 = NULL;
  ATerm v_46 = t;
  int a_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_93 = ATgetArgument(t, 0);
          {
            ATerm e_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_47);
      t = w_93;
    }
  else
    {
      t = v_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_93 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_93;
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = map_1_0(i_8, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm b_94 = NULL;
  ATerm f_47 = t;
  int h_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_94 = ATgetArgument(t, 0);
          {
            ATerm l_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_47);
      t = b_94;
    }
  else
    {
      t = f_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_94;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm d_93 = NULL,h_93 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      h_93 = ATgetArgument(t, 0);
      t = h_93;
      if(match_cons(t, sym_Rule_3))
        {
          d_93 = ATgetArgument(t, 0);
          {
            ATerm o_47 = ATgetArgument(t, 1);
          }
          {
            ATerm p_47 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = d_93;
      t = free_vars_3_0(b_8, c_8, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          h_93 = ATgetArgument(t, 0);
          {
            ATerm q_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_93;
    }
  return(t);
}
static ATerm n_10 (ATerm c_98 (ATerm), ATerm m_25, ATerm l_25, ATerm t)
{
  static ATerm u_94 (ATerm t)
  {
    ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL;
    p_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_94 = ATgetFirst((ATermList) t);
            r_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_47 = t;
          int t_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_94;
              {
                static ATerm j_8 (ATerm t)
                {
                  t = l_25;
                  return(t);
                }
                t = o_10(c_98, j_8, q_94, r_94, t);
              }
              t = u_94(t);
              LocalPopChoice(t_47);
            }
          else
            {
              t = r_47;
              {
                ATerm e_44 = NULL,m_44 = NULL,e_17 = NULL;
                t = SSLgetAnnotations(p_94);
                e_44 = t;
                t = r_94;
                t = u_94(t);
                m_44 = t;
                t = (ATerm) ATinsert(CheckATermList(m_44), q_94);
                e_17 = t;
                t = SSLsetAnnotations(e_17, e_44);
              }
            }
        }
      }
    return(t);
  }
  t = m_25;
  t = u_94(t);
  return(t);
}
ATerm foldr_3_0 (ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t)
{
  ATerm x_94 = NULL,y_94 = NULL,z_94 = NULL;
  x_94 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_94;
      t = x_100(t);
    }
  else
    {
      ATerm c_95 = NULL,d_95 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_94 = ATgetFirst((ATermList) t);
          z_94 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_94;
      t = z_100(t);
      c_95 = t;
      t = z_94;
      t = foldr_3_0(x_100, y_100, z_100, t);
      d_95 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_95, d_95);
      t = y_100(t);
    }
  return(t);
}
static ATerm o_10 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm q_25, ATerm p_25, ATerm t)
{
  t = g_98(t);
  {
    static ATerm l_8 (ATerm t)
    {
      ATerm g_95 = NULL;
      g_95 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_25, g_95);
      t = f_98(t);
      return(t);
    }
    t = fetch_1_0(l_8, t);
  }
  t = p_25;
  return(t);
}
static ATerm p_10 (ATerm x_97 (ATerm), ATerm k_25, ATerm j_25, ATerm t)
{
  static ATerm w_95 (ATerm t)
  {
    ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL;
    r_95 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_95;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_95 = ATgetFirst((ATermList) t);
            t_95 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_47 = t;
          int v_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_95;
              {
                static ATerm w_8 (ATerm t)
                {
                  t = j_25;
                  return(t);
                }
                t = o_10(x_97, w_8, s_95, t_95, t);
              }
              t = w_95(t);
              LocalPopChoice(v_47);
            }
          else
            {
              t = u_47;
              {
                ATerm b_45 = NULL,k_45 = NULL,j_17 = NULL;
                t = SSLgetAnnotations(r_95);
                b_45 = t;
                t = t_95;
                t = w_95(t);
                k_45 = t;
                t = (ATerm) ATinsert(CheckATermList(k_45), s_95);
                j_17 = t;
                t = SSLsetAnnotations(j_17, b_45);
              }
            }
        }
      }
    return(t);
  }
  t = k_25;
  t = w_95(t);
  return(t);
}
ATerm genzip_4_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm t)
{
  static ATerm e_96 (ATerm t)
  {
    ATerm w_47 = t;
    int y_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_113(t);
        LocalPopChoice(y_47);
      }
    else
      {
        t = w_47;
        {
          ATerm y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,q_17 = NULL;
          t = k_113(t);
          d_96 = t;
          if(match_cons(t, sym__2))
            {
              z_95 = ATgetArgument(t, 0);
              a_96 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_96);
          y_95 = t;
          t = z_95;
          t = m_113(t);
          b_96 = t;
          t = a_96;
          t = e_96(t);
          c_96 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_96, c_96);
          q_17 = t;
          t = SSLsetAnnotations(q_17, y_95);
          t = l_113(t);
        }
      }
    return(t);
  }
  t = e_96(t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_48 = ATgetArgument(t, 0);
      if(((ATgetType(a_48) != AT_LIST) || !(ATisEmpty(a_48))))
        _fail(t);
      {
        ATerm b_48 = ATgetArgument(t, 1);
        if(((ATgetType(b_48) != AT_LIST) || !(ATisEmpty(b_48))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm l_96 = NULL,m_96 = NULL,n_96 = NULL,o_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_48 = ATgetArgument(t, 0);
      if(((ATgetType(c_48) == AT_LIST) && !(ATisEmpty(c_48))))
        {
          l_96 = ATgetFirst((ATermList) c_48);
          m_96 = (ATerm) ATgetNext((ATermList) c_48);
        }
      else
        _fail(t);
      {
        ATerm d_48 = ATgetArgument(t, 1);
        if(((ATgetType(d_48) == AT_LIST) && !(ATisEmpty(d_48))))
          {
            n_96 = ATgetFirst((ATermList) d_48);
            o_96 = (ATerm) ATgetNext((ATermList) d_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_96, n_96), (ATerm) ATmakeAppl(sym__2, m_96, o_96));
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm p_96 = NULL,q_96 = NULL;
  if(match_cons(t, sym__2))
    {
      p_96 = ATgetArgument(t, 0);
      q_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_96), p_96);
  return(t);
}
static ATerm u_10 (ATerm k_712, ATerm p_712, ATerm e_72, ATerm t)
{
  ATerm g_96 = NULL,h_96 = NULL,i_96 = NULL,j_96 = NULL;
  t = SSL_explode_term(p_712);
  if(match_cons(t, sym__2))
    {
      g_96 = ATgetArgument(t, 0);
      i_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_712);
  if(match_cons(t, sym__2))
    {
      if((g_96 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      h_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_96, i_96);
  t = genzip_4_0(y_8, z_8, b_9, _id, t);
  j_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_96, e_72);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm t)
{
  static ATerm s_96 (ATerm t)
  {
    ATerm e_48 = t;
    int g_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_111(t);
        LocalPopChoice(g_48);
      }
    else
      {
        t = e_48;
        t = j_111(t);
        t = s_96(t);
      }
    return(t);
  }
  t = s_96(t);
  return(t);
}
ATerm for_3_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm t)
{
  t = l_111(t);
  t = while_not_2_0(m_111, n_111, t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm z_96 = NULL;
  z_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_96);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL,t_17 = NULL;
  d_97 = t;
  if(match_cons(t, sym__2))
    {
      b_97 = ATgetArgument(t, 0);
      c_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_97);
  a_97 = t;
  t = c_97;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_97, c_97);
  t_17 = t;
  t = SSLsetAnnotations(t_17, a_97);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm w_97 = NULL,z_97 = NULL,a_98 = NULL,b_98 = NULL,e_98 = NULL;
  w_97 = t;
  if(match_cons(t, sym__2))
    {
      z_97 = ATgetArgument(t, 0);
      a_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_98;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_98 = ATgetFirst((ATermList) t);
      e_98 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_48 = t;
        int i_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_98(z_97, a_98, w_97, t);
            LocalPopChoice(i_48);
          }
        else
          {
            t = h_48;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_97), b_98), e_98);
          }
      }
    }
  else
    {
      t = t_98(z_97, a_98, w_97, t);
    }
  return(t);
}
static ATerm t_98 (ATerm e_97, ATerm f_97, ATerm g_97, ATerm t)
{
  ATerm h_97 = NULL,k_97 = NULL,u_17 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL;
  t = SSLgetAnnotations(g_97);
  h_97 = t;
  t = f_97;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_97 = ATgetFirst((ATermList) t);
      q_97 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_97;
  if(match_cons(t, sym__2))
    {
      o_97 = ATgetArgument(t, 0);
      p_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_48 = t;
    int n_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_97;
        if((o_97 != t))
          {
            _fail(t);
          }
        t = q_97;
        LocalPopChoice(n_48);
      }
    else
      {
        t = m_48;
        t = f_97;
        t = u_10(o_97, p_97, q_97, t);
      }
  }
  k_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_97, k_97);
  u_17 = t;
  t = SSLsetAnnotations(u_17, h_97);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm s_98 = NULL;
  if(match_cons(t, sym__2))
    {
      s_98 = ATgetArgument(t, 0);
      if((s_98 != ATgetArgument(t, 1)))
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
  ATerm o_48 = t;
  int q_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(g_9, k_9, l_9, t);
      LocalPopChoice(q_48);
    }
  else
    {
      t = o_48;
      {
        ATerm k_98 = NULL,m_98 = NULL,p_98 = NULL;
        k_98 = t;
        if(match_cons(t, sym__2))
          {
            m_98 = ATgetArgument(t, 0);
            p_98 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_98;
        t = p_10(q_9, m_98, p_98, t);
      }
    }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL;
  if(match_cons(t, sym__2))
    {
      a_46 = ATgetArgument(t, 0);
      b_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(b_12, a_46, b_46, t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm c_46 = NULL;
  if(match_cons(t, sym__2))
    {
      c_46 = ATgetArgument(t, 0);
      if((c_46 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm w_46 = NULL,z_46 = NULL;
  if(match_cons(t, sym__2))
    {
      w_46 = ATgetArgument(t, 0);
      z_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(e_12, w_46, z_46, t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm k_47 = NULL;
  if(match_cons(t, sym__2))
    {
      k_47 = ATgetArgument(t, 0);
      if((k_47 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm y_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm l_99 (ATerm t)
  {
    ATerm r_48 = t;
    int u_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_124(t);
        LocalPopChoice(u_48);
      }
    else
      {
        t = r_48;
        {
          ATerm c_49 = t;
          int d_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_98 = NULL,w_98 = NULL,u_45 = NULL,v_45 = NULL;
              v_98 = t;
              t = x_124(t);
              w_98 = t;
              t = v_98;
              {
                static ATerm v_10 (ATerm t)
                {
                  ATerm a_99 = NULL;
                  t = l_99(t);
                  a_99 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_99, w_98);
                  t = diff_0_0(t);
                  return(t);
                }
                t = y_124(v_10, l_99, k_11, t);
              }
              v_45 = t;
              t = SSL_explode_term(v_45);
              if(match_cons(t, sym__2))
                {
                  ATerm e_49 = ATgetArgument(t, 0);
                  u_45 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_45;
              t = foldr_3_0(s_11, a_12, _id, t);
              LocalPopChoice(d_49);
            }
          else
            {
              t = c_49;
              {
                ATerm h_46 = NULL,i_46 = NULL;
                i_46 = t;
                t = SSL_explode_term(i_46);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_49 = ATgetArgument(t, 0);
                    h_46 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_46;
                t = foldr_3_0(c_12, d_12, l_99, t);
              }
            }
        }
      }
    return(t);
  }
  t = l_99(t);
  return(t);
}
ATerm topdown_1_0 (ATerm r_102 (ATerm), ATerm t)
{
  static ATerm h_12 (ATerm t)
  {
    t = topdown_1_0(r_102, t);
    return(t);
  }
  t = r_102(t);
  t = SRTS_all(h_12, t);
  return(t);
}
static ATerm w_10 (ATerm j_32, ATerm k_32, ATerm t)
{
  ATerm m_99 = NULL,n_99 = NULL;
  n_99 = t;
  {
    ATerm i_49 = t;
    int j_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_32, k_32);
        t = l_11(j_32, k_32, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_49 = ATgetFirst((ATermList) t);
            m_99 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_49);
        {
          ATerm o_99 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, j_32, k_32, m_99);
          t = lookup_table_0_1(j_32, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_99 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_11(k_32, m_99, o_99, t);
          t = (ATerm) ATmakeAppl(sym__3, j_32, k_32, m_99);
        }
      }
    else
      {
        t = i_49;
        {
          ATerm q_99 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, j_32, k_32);
          t = lookup_table_0_1(j_32, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_99 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_11(k_32, q_99, t);
          t = (ATerm) ATmakeAppl(sym__2, j_32, k_32);
        }
      }
  }
  t = n_99;
  return(t);
}
ATerm end_scope_1_0 (ATerm e_102 (ATerm), ATerm t)
{
  ATerm s_99 = NULL,t_99 = NULL,u_99 = NULL,v_99 = NULL,w_99 = NULL,x_99 = NULL,y_99 = NULL;
  v_99 = t;
  t = e_102(t);
  u_99 = t;
  {
    ATerm l_49 = t;
    int m_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_99 = NULL;
        t = term_c_40;
        z_99 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_99, term_c_40);
        t = l_11(u_99, z_99, t);
        LocalPopChoice(m_49);
      }
    else
      {
        t = l_49;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_99 = ATgetFirst((ATermList) t);
      s_99 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_99, term_c_40, s_99);
  t = lookup_table_0_1(u_99, t);
  y_99 = t;
  t = term_c_40;
  w_99 = t;
  t = y_99;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(w_99, s_99, x_99, t);
  t = t_99;
  {
    static ATerm i_12 (ATerm t)
    {
      ATerm a_100 = NULL;
      a_100 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_99, a_100);
      t = w_10(u_99, a_100, t);
      return(t);
    }
    t = map_1_0(i_12, t);
  }
  t = v_99;
  return(t);
}
ATerm restore_always_2_0 (ATerm k_116 (ATerm), ATerm l_116 (ATerm), ATerm t)
{
  ATerm n_49 = t;
  int o_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_116(t);
      t = l_116(t);
      LocalPopChoice(o_49);
    }
  else
    {
      t = n_49;
      t = l_116(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_102 (ATerm), ATerm t)
{
  ATerm c_100 = NULL,d_100 = NULL,e_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL,i_100 = NULL;
  d_100 = t;
  t = d_102(t);
  c_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_100, term_c_40);
  {
    ATerm p_49 = t;
    int q_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_100 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_49 = ATgetArgument(t, 0);
            ATerm s_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_40;
        m_100 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_100, term_c_40);
        t = l_11(c_100, m_100, t);
        LocalPopChoice(q_49);
      }
    else
      {
        t = p_49;
        t = (ATerm) ATempty;
      }
  }
  e_100 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_100, term_c_40, (ATerm) ATinsert(CheckATermList(e_100), (ATerm) ATempty));
  t = lookup_table_0_1(c_100, t);
  i_100 = t;
  t = term_c_40;
  f_100 = t;
  t = (ATerm) ATinsert(CheckATermList(e_100), (ATerm) ATempty);
  g_100 = t;
  t = i_100;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(f_100, g_100, h_100, t);
  t = d_100;
  return(t);
}
ATerm scope_2_0 (ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm t)
{
  static ATerm k_12 (ATerm t)
  {
    t = end_scope_1_0(f_102, t);
    return(t);
  }
  t = begin_scope_1_0(f_102, t);
  t = restore_always_2_0(g_102, k_12, t);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_k_18;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = scope_2_0(f_13, o_13, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm a_101 = NULL,b_101 = NULL,c_101 = NULL;
  t = topdown_1_0(s_13, t);
  c_101 = t;
  t = free_vars_3_0(u_13, y_13, tboundin_3_0, t);
  b_101 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, b_101, c_101);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm v_49 = ATgetArgument(t, 0);
      a_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_101;
  {
    ATerm w_49 = t;
    int x_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        LocalPopChoice(x_49);
      }
    else
      {
        t = w_49;
        {
          ATerm y_49 = t;
          int z_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              LocalPopChoice(z_49);
            }
          else
            {
              t = y_49;
              {
                ATerm o_102 = NULL,p_102 = NULL,q_102 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    o_102 = ATgetArgument(t, 0);
                    p_102 = ATgetArgument(t, 1);
                    q_102 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = a_101;
                t = x_9(o_102, p_102, q_102, t);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm j_101 = NULL,k_101 = NULL;
  k_101 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_101 = ATgetArgument(t, 0);
      {
        ATerm a_50 = t;
        int c_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_47 = NULL,z_47 = NULL,b_18 = NULL;
            t = SSLgetAnnotations(k_101);
            s_47 = t;
            t = j_101;
            if(match_cons(t, sym_ListVar_1))
              {
                z_47 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, z_47);
            b_18 = t;
            t = SSLsetAnnotations(b_18, s_47);
            LocalPopChoice(c_50);
          }
        else
          {
            t = a_50;
            t = k_101;
          }
      }
    }
  else
    {
      t = k_101;
    }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm n_101 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_101);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm d_50 = t;
  int f_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_50);
    }
  else
    {
      t = d_50;
      {
        ATerm g_50 = t;
        int h_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_50);
          }
        else
          {
            t = g_50;
            {
              ATerm i_50 = t;
              int j_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_101 = NULL,q_101 = NULL,r_101 = NULL,s_101 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_101 = ATgetArgument(t, 0);
                      q_101 = ATgetArgument(t, 1);
                      r_101 = ATgetArgument(t, 2);
                      s_101 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_101;
                  t = map_1_0(z_13, t);
                  LocalPopChoice(j_50);
                }
              else
                {
                  t = i_50;
                  {
                    ATerm k_50 = t;
                    int l_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_50);
                      }
                    else
                      {
                        t = k_50;
                        t = dynrule_targs_1_0(b_14, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm z_101 = NULL;
  ATerm m_50 = t;
  int n_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_101 = ATgetArgument(t, 0);
          {
            ATerm q_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_50);
      t = z_101;
    }
  else
    {
      t = m_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_101 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_101;
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = map_1_0(f_14, t);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm k_102 = NULL;
  ATerm s_50 = t;
  int u_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_102 = ATgetArgument(t, 0);
          {
            ATerm y_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_50);
      t = k_102;
    }
  else
    {
      t = s_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_102 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_102;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm u_100 = NULL;
  u_100 = t;
  t = scope_2_0(c_13, d_13, t);
  t = u_100;
  return(t);
}
ATerm filter_1_0 (ATerm j_115 (ATerm), ATerm t)
{
  ATerm h_103 = NULL,i_103 = NULL,j_103 = NULL;
  h_103 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_103;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_103 = ATgetFirst((ATermList) t);
          j_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm c_51 = t;
        int d_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_48 = NULL,x_48 = NULL,y_48 = NULL,e_18 = NULL;
            t = SSLgetAnnotations(h_103);
            p_48 = t;
            t = i_103;
            t = j_115(t);
            x_48 = t;
            t = j_103;
            t = filter_1_0(j_115, t);
            y_48 = t;
            t = (ATerm) ATinsert(CheckATermList(y_48), x_48);
            e_18 = t;
            t = SSLsetAnnotations(e_18, p_48);
            LocalPopChoice(d_51);
          }
        else
          {
            t = c_51;
            t = j_103;
            t = filter_1_0(j_115, t);
          }
      }
    }
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm z_103 = NULL,a_104 = NULL,b_104 = NULL,b_19 = NULL;
  b_104 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      a_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_104);
  z_103 = t;
  t = a_104;
  {
    ATerm e_51 = t;
    int f_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_104;
        LocalPopChoice(f_51);
      }
    else
      {
        t = e_51;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_104;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Overlays_1, a_104);
  b_19 = t;
  t = SSLsetAnnotations(b_19, z_103);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = Cons_2_0(a_15, c_15, t);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm d_104 = NULL,e_104 = NULL,f_104 = NULL,c_19 = NULL;
  f_104 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      e_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_104);
  d_104 = t;
  t = e_104;
  {
    ATerm g_51 = t;
    int h_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_104;
        LocalPopChoice(h_51);
      }
    else
      {
        t = g_51;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_104;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Strategies_1, e_104);
  c_19 = t;
  t = SSLsetAnnotations(c_19, d_104);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm o_103 = NULL,p_103 = NULL,q_103 = NULL,r_103 = NULL,s_103 = NULL,t_103 = NULL,u_103 = NULL,v_103 = NULL,w_103 = NULL,x_103 = NULL,y_103 = NULL,e_19 = NULL,d_19 = NULL,a_19 = NULL;
  y_103 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_103);
  o_103 = t;
  t = p_103;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_103 = ATgetFirst((ATermList) t);
      s_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_103);
  q_103 = t;
  t = r_103;
  if(match_cons(t, sym_Signature_1))
    {
      w_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_103);
  v_103 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, w_103);
  a_19 = t;
  t = SSLsetAnnotations(a_19, v_103);
  x_103 = t;
  t = s_103;
  t = Cons_2_0(g_14, i_14, t);
  t_103 = t;
  t = (ATerm) ATinsert(CheckATermList(t_103), x_103);
  d_19 = t;
  t = SSLsetAnnotations(d_19, q_103);
  u_103 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, u_103);
  e_19 = t;
  t = SSLsetAnnotations(e_19, o_103);
  return(t);
}
static ATerm y_10 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm h_104 = NULL;
  t = SSL_fputc(c_43, d_43);
  h_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_104);
  return(t);
}
static ATerm z_10 (ATerm z_48, ATerm a_49, ATerm t)
{
  ATerm i_104 = NULL;
  t = SSL_write_term_to_stream_text(z_48, a_49);
  i_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_104);
  return(t);
}
static ATerm b_11 (ATerm g_112 (ATerm), ATerm u_461, ATerm f_49, ATerm t)
{
  ATerm l_104 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_461, term_i_51);
  t = f_11(t);
  l_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_104, f_49);
  t = g_112(t);
  t = fclose_0_0(t);
  t = f_49;
  return(t);
}
static ATerm a_11 (ATerm v_48, ATerm w_48, ATerm t)
{
  ATerm m_104 = NULL;
  t = SSL_write_term_to_stream_baf(v_48, w_48);
  m_104 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_104);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm t_104 = NULL,u_104 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_51 = ATgetArgument(t, 0);
      if(match_cons(j_51, sym_Stream_1))
        {
          t_104 = ATgetArgument(j_51, 0);
        }
      else
        _fail(t);
      u_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(t_104, u_104, t);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm v_104 = NULL,w_104 = NULL,x_104 = NULL,y_104 = NULL,z_104 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_51 = ATgetArgument(t, 0);
      if(match_cons(k_51, sym_Stream_1))
        {
          y_104 = ATgetArgument(k_51, 0);
        }
      else
        _fail(t);
      z_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(y_104, z_104, t);
  v_104 = t;
  t = term_l_51;
  w_104 = t;
  t = v_104;
  if(match_cons(t, sym_Stream_1))
    {
      x_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_51, v_104);
  t = y_10(w_104, x_104, t);
  return(t);
}
ATerm output_1_0 (ATerm q_128 (ATerm), ATerm t)
{
  ATerm n_104 = NULL,o_104 = NULL;
  t = q_128(t);
  o_104 = t;
  {
    ATerm m_51 = t;
    int n_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_104 = NULL,q_104 = NULL;
        t = term_r_22;
        p_104 = t;
        t = term_p_51;
        q_104 = t;
        t = term_s_51;
        t = l_11(p_104, q_104, t);
        LocalPopChoice(n_51);
      }
    else
      {
        t = m_51;
        t = term_u_51;
      }
  }
  n_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_104, o_104);
  {
    ATerm v_51 = t;
    int w_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_104 = NULL,s_104 = NULL;
        t = term_r_22;
        r_104 = t;
        t = term_x_51;
        s_104 = t;
        t = term_y_51;
        t = l_11(r_104, s_104, t);
        t = (ATerm) ATmakeAppl(sym__2, n_104, o_104);
        LocalPopChoice(w_51);
        if(match_cons(t, sym__2))
          {
            ATerm a_52 = ATgetArgument(t, 0);
            ATerm b_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_11(e_15, n_104, o_104, t);
      }
    else
      {
        t = v_51;
        if(match_cons(t, sym__2))
          {
            ATerm c_52 = ATgetArgument(t, 0);
            ATerm f_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_11(n_15, n_104, o_104, t);
      }
  }
  return(t);
}
static ATerm n_105 (ATerm h_105, ATerm t)
{
  t = SSL_fclose(h_105);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_105 = NULL,l_105 = NULL;
  l_105 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_105 = ATgetArgument(t, 0);
      {
        ATerm j_52 = t;
        int k_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_105);
            LocalPopChoice(k_52);
          }
        else
          {
            t = j_52;
            t = n_105(l_105, t);
          }
      }
    }
  else
    {
      t = n_105(l_105, t);
    }
  return(t);
}
static ATerm c_11 (ATerm b_49, ATerm t)
{
  t = SSL_read_term_from_stream(b_49);
  return(t);
}
static ATerm d_11 (ATerm v_41, ATerm w_41, ATerm t)
{
  t = SSL_strcat(v_41, w_41);
  return(t);
}
static ATerm e_11 (ATerm e_43, ATerm f_43, ATerm t)
{
  ATerm o_105 = NULL;
  t = SSL_fopen(e_43, f_43);
  o_105 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_105);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_105 = NULL;
  t = SSL_stdin_stream();
  p_105 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_105);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_105 = NULL;
  t = SSL_stdout_stream();
  q_105 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_105);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_105 = NULL;
  t = SSL_stderr_stream();
  r_105 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_105);
  return(t);
}
static ATerm y_106 (ATerm x_105, ATerm t)
{
  ATerm y_105 = NULL;
  t = SSL_explode_term(x_105);
  if(match_cons(t, sym__2))
    {
      ATerm m_52 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_52) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_52 = ATgetArgument(t, 1);
        if(((ATgetType(n_52) == AT_LIST) && !(ATisEmpty(n_52))))
          {
            y_105 = ATgetFirst((ATermList) n_52);
            {
              ATerm o_52 = (ATerm) ATgetNext((ATermList) n_52);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_105;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_105;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_105;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_105;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_106 (ATerm b_106, ATerm c_106, ATerm d_106, ATerm t)
{
  ATerm e_106 = NULL,f_106 = NULL,g_106 = NULL,j_106 = NULL,t_19 = NULL;
  t = SSLgetAnnotations(d_106);
  g_106 = t;
  t = b_106;
  if(match_cons(t, sym_Path_1))
    {
      j_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_106, c_106);
  t_19 = t;
  t = SSLsetAnnotations(t_19, g_106);
  if(match_cons(t, sym__2))
    {
      e_106 = ATgetArgument(t, 0);
      f_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(e_106, f_106, t);
  return(t);
}
static ATerm a_107 (ATerm l_106, ATerm m_106, ATerm n_106, ATerm t)
{
  ATerm o_106 = NULL,p_106 = NULL,q_106 = NULL,t_106 = NULL,u_19 = NULL;
  t = SSLgetAnnotations(n_106);
  q_106 = t;
  t = SSL_is_string(l_106);
  t_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_106, m_106);
  u_19 = t;
  t = SSLsetAnnotations(u_19, q_106);
  if(match_cons(t, sym__2))
    {
      o_106 = ATgetArgument(t, 0);
      p_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(o_106, p_106, t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm v_106 = NULL,w_106 = NULL,x_106 = NULL;
  v_106 = t;
  if(match_cons(t, sym__2))
    {
      w_106 = ATgetArgument(t, 0);
      x_106 = ATgetArgument(t, 1);
      {
        ATerm p_52 = t;
        int s_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_106(v_106, t);
            LocalPopChoice(s_52);
          }
        else
          {
            t = p_52;
            {
              ATerm t_52 = t;
              int u_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_106(w_106, x_106, v_106, t);
                  LocalPopChoice(u_52);
                }
              else
                {
                  t = t_52;
                  t = a_107(w_106, x_106, v_106, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_106(v_106, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_107 = NULL,d_107 = NULL,e_107 = NULL,j_107 = NULL;
  j_107 = t;
  {
    ATerm w_52 = t;
    int x_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_107, term_a_53);
        t = f_11(t);
        LocalPopChoice(x_52);
      }
    else
      {
        t = w_52;
        {
          ATerm t_49 = NULL,u_49 = NULL;
          t = term_b_53;
          u_49 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_53, j_107);
          t = d_11(u_49, j_107, t);
          t_49 = t;
          t = SSL_perror(t_49);
          _fail(t);
        }
      }
  }
  d_107 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(e_107, t);
  c_107 = t;
  t = d_107;
  t = fclose_0_0(t);
  t = c_107;
  return(t);
}
ATerm input_1_0 (ATerm r_128 (ATerm), ATerm t)
{
  ATerm c_53 = t;
  int d_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_107 = NULL,n_107 = NULL;
      t = term_r_22;
      m_107 = t;
      t = term_e_53;
      n_107 = t;
      t = term_f_53;
      t = l_11(m_107, n_107, t);
      LocalPopChoice(d_53);
    }
  else
    {
      t = c_53;
      t = term_g_53;
    }
  t = ReadFromFile_0_0(t);
  t = r_128(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_107 = NULL,p_107 = NULL,q_107 = NULL,r_107 = NULL,s_107 = NULL;
  o_107 = t;
  t = term_h_53;
  t = whoami_0_0(t);
  p_107 = t;
  t = term_l_21;
  r_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_53), p_107), term_i_53);
  s_107 = t;
  t = SSL_printnl(r_107, s_107);
  t = term_l_53;
  q_107 = t;
  t = SSL_exit(q_107);
  t = o_107;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm u_107 = NULL;
  u_107 = t;
  if(match_string(t, "-k"))
    {
      t = u_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_107;
    }
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm v_107 = NULL,w_107 = NULL,x_107 = NULL;
  v_107 = t;
  t = SSL_string_to_int(v_107);
  w_107 = t;
  t = term_m_53;
  x_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_53, w_107);
  t = o_11(x_107, w_107, t);
  t = v_107;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  t = term_o_53;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_15, r_15, u_15, t);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm z_107 = NULL;
  z_107 = t;
  if(match_string(t, "-S"))
    {
      t = z_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_107;
    }
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm a_108 = NULL,b_108 = NULL;
  t = term_p_53;
  a_108 = t;
  t = term_q_53;
  b_108 = t;
  t = term_r_53;
  t = o_11(a_108, b_108, t);
  t = term_s_53;
  return(t);
}
static ATerm y_15 (ATerm t)
{
  t = term_t_53;
  return(t);
}
static ATerm z_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm c_108 = NULL,d_108 = NULL,e_108 = NULL;
  c_108 = t;
  t = SSL_string_to_int(c_108);
  d_108 = t;
  t = term_p_53;
  e_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_53, d_108);
  t = o_11(e_108, d_108, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_108);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = term_u_53;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm f_108 = NULL,h_108 = NULL;
  t = term_v_53;
  f_108 = t;
  t = term_h_53;
  h_108 = t;
  t = term_w_53;
  t = o_11(f_108, h_108, t);
  t = term_x_53;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  t = term_y_53;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_53 = t;
  int b_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_15, w_15, y_15, t);
      LocalPopChoice(b_54);
    }
  else
    {
      t = z_53;
      {
        ATerm c_54 = t;
        int d_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_15, a_16, b_16, t);
            LocalPopChoice(d_54);
          }
        else
          {
            t = c_54;
            t = Option_3_0(c_16, e_16, f_16, t);
          }
      }
    }
  return(t);
}
static ATerm o_11 (ATerm x_46, ATerm y_46, ATerm t)
{
  ATerm i_108 = NULL,j_108 = NULL;
  t = term_r_22;
  i_108 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_22, x_46, y_46);
  t = lookup_table_0_1(i_108, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(x_46, y_46, j_108, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_22, x_46, y_46);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm n_108 = NULL,o_108 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_108 = NULL,q_108 = NULL,r_108 = NULL;
      t = term_h_53;
      t = e_0(t);
      p_108 = t;
      t = term_e_54;
      q_108 = t;
      t = term_g_54;
      r_108 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_54, term_g_54, p_108);
      t = m_11(q_108, r_108, p_108, t);
      _fail(t);
    }
  else
    {
      ATerm u_108 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_108 = ATgetFirst((ATermList) t);
          o_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_108;
      t = c_0(t);
      t = term_h_53;
      t = d_0(t);
      u_108 = t;
      t = (ATerm) ATinsert(CheckATermList(o_108), u_108);
    }
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm w_108 = NULL;
  w_108 = t;
  if(match_string(t, "-o"))
    {
      t = w_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_108;
    }
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm x_108 = NULL,y_108 = NULL;
  x_108 = t;
  t = term_p_51;
  y_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_51, x_108);
  t = o_11(y_108, x_108, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_108);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  t = term_h_54;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_16, h_16, j_16, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm a_109 = NULL;
  a_109 = t;
  if(match_string(t, "-i"))
    {
      t = a_109;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_109;
    }
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm b_109 = NULL,c_109 = NULL;
  b_109 = t;
  t = term_e_53;
  c_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_53, b_109);
  t = o_11(c_109, b_109, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_109);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = term_i_54;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_16, l_16, m_16, t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  static ATerm x_109 (ATerm t)
  {
    ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL;
    w_109 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_109 = ATgetFirst((ATermList) t);
        v_109 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_50 = NULL,e_50 = NULL,x_19 = NULL;
          t = SSLgetAnnotations(w_109);
          b_50 = t;
          t = v_109;
          t = x_109(t);
          e_50 = t;
          t = (ATerm) ATinsert(CheckATermList(e_50), u_109);
          x_19 = t;
          t = SSLsetAnnotations(x_19, b_50);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_109;
        t = e_99(t);
      }
    return(t);
  }
  t = x_109(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_109 = NULL,f_109 = NULL,g_109 = NULL;
  e_109 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_109;
    }
  else
    {
      static ATerm n_16 (ATerm t)
      {
        t = not_null(g_109);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_109 = ATgetFirst((ATermList) t);
          if(((g_109 != NULL) && (g_109 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_109 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_109;
      t = at_end_1_0(n_16, t);
    }
  return(t);
}
static ATerm j_110 (ATerm b_110, ATerm t)
{
  ATerm c_110 = NULL;
  t = SSL_explode_term(b_110);
  if(match_cons(t, sym__2))
    {
      ATerm j_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_54) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_110;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_110 = NULL,f_110 = NULL,g_110 = NULL;
  g_110 = t;
  if(match_cons(t, sym__2))
    {
      e_110 = ATgetArgument(t, 0);
      f_110 = ATgetArgument(t, 1);
      {
        ATerm m_54 = t;
        int n_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_16 (ATerm t)
            {
              t = f_110;
              return(t);
            }
            t = e_110;
            t = at_end_1_0(o_16, t);
            LocalPopChoice(n_54);
          }
        else
          {
            t = m_54;
            t = j_110(g_110, t);
          }
      }
    }
  else
    {
      t = j_110(g_110, t);
    }
  return(t);
}
static ATerm x_10 (ATerm d_47, ATerm c_47, ATerm t)
{
  ATerm k_110 = NULL,l_110 = NULL,m_110 = NULL,n_110 = NULL;
  t = d_47;
  {
    ATerm o_54 = t;
    int q_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_110 = NULL;
        t = term_r_22;
        p_110 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_22, d_47);
        t = l_11(p_110, d_47, t);
        LocalPopChoice(q_54);
      }
    else
      {
        t = o_54;
        t = (ATerm) ATempty;
      }
  }
  l_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_47, l_110);
  t = conc_0_0(t);
  k_110 = t;
  t = term_r_22;
  m_110 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_22, d_47, k_110);
  t = lookup_table_0_1(m_110, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(d_47, k_110, n_110, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_22, d_47, k_110);
  return(t);
}
static ATerm m_11 (ATerm e_32, ATerm f_32, ATerm d_32, ATerm t)
{
  ATerm r_110 = NULL,s_110 = NULL,t_110 = NULL,u_110 = NULL,v_110 = NULL;
  r_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_32, f_32);
  {
    ATerm w_54 = t;
    int x_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_54 = ATgetArgument(t, 0);
            ATerm a_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_32, f_32);
        t = l_11(e_32, f_32, t);
        LocalPopChoice(x_54);
      }
    else
      {
        t = w_54;
        t = (ATerm) ATempty;
      }
  }
  s_110 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_32, f_32, (ATerm) ATinsert(CheckATermList(s_110), d_32));
  t = lookup_table_0_1(e_32, t);
  v_110 = t;
  t = (ATerm) ATinsert(CheckATermList(s_110), d_32);
  t_110 = t;
  t = v_110;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(f_32, t_110, u_110, t);
  t = r_110;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_111 = NULL,d_111 = NULL,e_111 = NULL,f_111 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_111 = NULL,h_111 = NULL,o_111 = NULL;
      t = term_h_53;
      t = n_0(t);
      g_111 = t;
      t = term_e_54;
      h_111 = t;
      t = term_g_54;
      o_111 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_54, term_g_54, g_111);
      t = m_11(h_111, o_111, g_111, t);
      _fail(t);
    }
  else
    {
      ATerm s_111 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_111 = ATgetFirst((ATermList) t);
          d_111 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_111;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_111 = ATgetFirst((ATermList) t);
          f_111 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_111;
      t = j_0(t);
      t = e_111;
      t = l_0(t);
      s_111 = t;
      t = (ATerm) ATinsert(CheckATermList(f_111), s_111);
    }
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm u_111 = NULL;
  u_111 = t;
  if(match_string(t, "--warning"))
    {
      t = u_111;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = u_111;
    }
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm v_111 = NULL,w_111 = NULL,x_111 = NULL;
  v_111 = t;
  t = term_i_55;
  w_111 = t;
  t = (ATerm) ATinsert(ATempty, v_111);
  x_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_55, (ATerm) ATinsert(ATempty, v_111));
  t = x_10(w_111, x_111, t);
  t = term_h_53;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = term_j_55;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm y_111 = NULL,z_111 = NULL,a_112 = NULL;
  y_111 = t;
  t = term_s_22;
  z_111 = t;
  t = term_q_53;
  a_112 = t;
  t = term_k_55;
  t = o_11(z_111, a_112, t);
  t = y_111;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = term_l_55;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm b_112 = NULL,c_112 = NULL,d_112 = NULL;
  b_112 = t;
  t = term_s_22;
  c_112 = t;
  t = term_l_53;
  d_112 = t;
  t = term_m_55;
  t = o_11(c_112, d_112, t);
  t = b_112;
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = term_s_22;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm n_55 = t;
  int o_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(p_16, q_16, r_16, t);
      LocalPopChoice(o_55);
    }
  else
    {
      t = n_55;
      {
        ATerm r_55 = t;
        int s_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(s_16, t_16, u_16, t);
            LocalPopChoice(s_55);
          }
        else
          {
            t = r_55;
            t = Option_3_0(v_16, w_16, x_16, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_112 = NULL,f_112 = NULL,h_112 = NULL,i_112 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_53;
  t = whoami_0_0(t);
  e_112 = t;
  t = term_l_21;
  h_112 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_55), e_112);
  i_112 = t;
  t = SSL_printnl(h_112, i_112);
  t = term_l_53;
  f_112 = t;
  t = SSL_exit(f_112);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm j_112 = NULL,k_112 = NULL;
  t = term_r_22;
  j_112 = t;
  t = term_u_55;
  k_112 = t;
  t = term_v_55;
  t = l_11(j_112, k_112, t);
  return(t);
}
static ATerm g_11 (ATerm m_29, ATerm n_29, ATerm t)
{
  ATerm w_55 = t;
  int x_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_29, n_29);
      LocalPopChoice(x_55);
    }
  else
    {
      t = w_55;
      t = SSL_addr(m_29, n_29);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm t)
{
  ATerm m_112 = NULL,n_112 = NULL,o_112 = NULL;
  m_112 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_112;
      t = v_100(t);
    }
  else
    {
      ATerm r_112 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_112 = ATgetFirst((ATermList) t);
          o_112 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_112;
      t = foldr_2_0(v_100, w_100, t);
      r_112 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_112, r_112);
      t = w_100(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_q_53;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL;
  if(match_cons(t, sym__2))
    {
      a_51 = ATgetArgument(t, 0);
      b_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(a_51, b_51, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_112 = NULL,o_50 = NULL,p_50 = NULL;
  t = times_0_0(t);
  p_50 = t;
  t = SSL_explode_term(p_50);
  if(match_cons(t, sym__2))
    {
      ATerm z_55 = ATgetArgument(t, 0);
      o_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_50;
  t = foldr_2_0(z_16, a_17, t);
  u_112 = t;
  t = SSL_TicksToSeconds(u_112);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_113 = NULL,g_113 = NULL,h_113 = NULL;
  f_113 = t;
  if(match_cons(t, sym__2))
    {
      g_113 = ATgetArgument(t, 0);
      h_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_56 = t;
    int c_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_113;
        if((g_113 != t))
          {
            _fail(t);
          }
        t = f_113;
        LocalPopChoice(c_56);
      }
    else
      {
        t = b_56;
        t = (ATerm) ATmakeAppl(sym__2, g_113, h_113);
        {
          ATerm g_56 = t;
          int i_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_113, h_113);
              LocalPopChoice(i_56);
            }
          else
            {
              t = g_56;
              t = SSL_gtr(g_113, h_113);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_113, h_113);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_108 (ATerm), ATerm t)
{
  ATerm q_113 = NULL;
  q_113 = t;
  {
    ATerm j_56 = t;
    int k_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_113 = NULL,t_113 = NULL,u_113 = NULL;
        t = term_r_22;
        t_113 = t;
        t = term_p_53;
        u_113 = t;
        t = term_m_56;
        t = l_11(t_113, u_113, t);
        s_113 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_113, term_l_53);
        t = geq_0_0(t);
        t = q_113;
        t = g_108(t);
        LocalPopChoice(k_56);
      }
    else
      {
        t = j_56;
        t = q_113;
      }
  }
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm w_113 = NULL,x_113 = NULL,z_113 = NULL,a_114 = NULL;
  t = run_time_0_0(t);
  w_113 = t;
  t = term_h_53;
  t = whoami_0_0(t);
  x_113 = t;
  t = term_l_21;
  z_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_56), w_113), term_n_56), x_113);
  a_114 = t;
  t = SSL_printnl(z_113, a_114);
  t = (ATerm) ATmakeAppl(sym__2, term_l_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_56), w_113), term_n_56), x_113));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_114 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_53;
  b_114 = t;
  t = SSL_exit(b_114);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm l_114 = NULL,m_114 = NULL;
  m_114 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_114;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_114 = ATgetArgument(t, 0);
          {
            ATerm t_51 = NULL,z_19 = NULL;
            t = SSLgetAnnotations(m_114);
            t_51 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_114);
            z_19 = t;
            t = SSLsetAnnotations(z_19, t_51);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_114;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_128 (ATerm), ATerm t)
{
  ATerm p_56 = t;
  int q_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_114 = NULL,f_114 = NULL;
      t = term_r_22;
      e_114 = t;
      t = term_s_56;
      f_114 = t;
      t = term_t_56;
      t = l_11(e_114, f_114, t);
      LocalPopChoice(q_56);
    }
  else
    {
      t = p_56;
      t = fetch_1_0(c_17, t);
    }
  t = h_128(t);
  return(t);
}
static ATerm p_11 (ATerm j_36, ATerm k_36, ATerm l_36, ATerm t)
{
  ATerm o_114 = NULL;
  t = SSL_hashtable_put(l_36, j_36, k_36);
  o_114 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_114);
  return(t);
}
ATerm lookup_table_0_1 (ATerm q_33, ATerm t)
{
  ATerm x_114 = NULL;
  t = table_hashtable_0_0(t);
  x_114 = t;
  {
    ATerm u_56 = t;
    int v_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_51 = NULL;
        t = x_114;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_11(q_33, z_51, t);
        LocalPopChoice(v_56);
      }
    else
      {
        t = u_56;
        {
          ATerm g_52 = NULL;
          t = q_33;
          t = table_create_0_0(t);
          t = x_114;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_11(q_33, g_52, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_36, ATerm s_36, ATerm t)
{
  ATerm a_115 = NULL;
  t = SSL_hashtable_create(r_36, s_36);
  a_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_115);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_115 = NULL,c_115 = NULL,d_115 = NULL,f_115 = NULL,g_115 = NULL;
  b_115 = t;
  t = term_w_56;
  f_115 = t;
  t = term_x_56;
  g_115 = t;
  t = b_115;
  t = new_hashtable_0_2(f_115, g_115, t);
  c_115 = t;
  t = b_115;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(b_115, c_115, d_115, t);
  t = b_115;
  return(t);
}
static ATerm i_11 (ATerm o_36, ATerm p_36, ATerm t)
{
  ATerm h_115 = NULL;
  t = SSL_hashtable_remove(p_36, o_36);
  h_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_115);
  return(t);
}
static ATerm j_11 (ATerm t_36, ATerm t)
{
  ATerm i_115 = NULL;
  t = SSL_hashtable_destroy(t_36);
  i_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_115);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm k_115 = NULL;
  t = SSL_table_hashtable();
  k_115 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_115);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm l_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL;
  l_115 = t;
  t = table_hashtable_0_0(t);
  m_115 = t;
  t = lookup_table_0_1(l_115, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_11(o_115, t);
  t = m_115;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_11(l_115, n_115, t);
  t = l_115;
  return(t);
}
ATerm map_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  static ATerm d_116 (ATerm t)
  {
    ATerm a_116 = NULL,b_116 = NULL,c_116 = NULL;
    a_116 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_116;
      }
    else
      {
        ATerm v_52 = NULL,y_52 = NULL,z_52 = NULL,g_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_116 = ATgetFirst((ATermList) t);
            c_116 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_116);
        v_52 = t;
        t = b_116;
        t = n_98(t);
        y_52 = t;
        t = c_116;
        t = d_116(t);
        z_52 = t;
        t = (ATerm) ATinsert(CheckATermList(z_52), y_52);
        g_20 = t;
        t = SSLsetAnnotations(g_20, v_52);
      }
    return(t);
  }
  t = d_116(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm g_116 = NULL,h_116 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_116 = ATgetFirst((ATermList) t);
      h_116 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_116 = NULL,o_116 = NULL;
        static ATerm d_17 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_116)), not_null(o_116));
          return(t);
        }
        t = h_116;
        t = i_0(t);
        if(((n_116 != NULL) && (n_116 != t)))
          _fail(t);
        else
          n_116 = t;
        t = g_116;
        t = g_0(t);
        if(((o_116 != NULL) && (o_116 != t)))
          _fail(t);
        else
          o_116 = t;
        t = h_116;
        t = reverse_acc_2_0(g_0, d_17, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_53;
      t = i_0(t);
    }
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm u_116 = NULL,v_116 = NULL,w_116 = NULL,a_21 = NULL;
  w_116 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_116);
  u_116 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_116);
  a_21 = t;
  t = SSLsetAnnotations(a_21, u_116);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm y_116 = NULL;
  y_116 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_116), term_a_57);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_116 = NULL,r_116 = NULL;
  ATerm b_57 = t;
  int c_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_116 = NULL,t_116 = NULL;
      t = term_r_22;
      s_116 = t;
      t = term_u_55;
      t_116 = t;
      t = term_v_55;
      t = l_11(s_116, t_116, t);
      LocalPopChoice(c_57);
    }
  else
    {
      t = b_57;
      t = fetch_1_0(f_17, t);
    }
  t = term_g_57;
  t = echo_0_0(t);
  t = term_e_54;
  q_116 = t;
  t = term_g_54;
  r_116 = t;
  t = term_h_57;
  t = l_11(q_116, r_116, t);
  t = reverse_acc_2_0(_id, g_17, t);
  t = map_1_0(i_17, t);
  return(t);
}
ATerm fetch_1_0 (ATerm x_98 (ATerm), ATerm t)
{
  static ATerm v_117 (ATerm t)
  {
    ATerm s_117 = NULL,t_117 = NULL,u_117 = NULL;
    s_117 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_117 = ATgetFirst((ATermList) t);
        u_117 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_57 = t;
      int l_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_53 = NULL,n_53 = NULL,d_21 = NULL;
          t = SSLgetAnnotations(s_117);
          k_53 = t;
          t = t_117;
          t = x_98(t);
          n_53 = t;
          t = (ATerm) ATinsert(CheckATermList(u_117), n_53);
          d_21 = t;
          t = SSLsetAnnotations(d_21, k_53);
          LocalPopChoice(l_57);
        }
      else
        {
          t = i_57;
          {
            ATerm a_54 = NULL,f_54 = NULL,h_21 = NULL;
            t = SSLgetAnnotations(s_117);
            a_54 = t;
            t = u_117;
            t = v_117(t);
            f_54 = t;
            t = (ATerm) ATinsert(CheckATermList(f_54), t_117);
            h_21 = t;
            t = SSLsetAnnotations(h_21, a_54);
          }
        }
    }
    return(t);
  }
  t = v_117(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_117 = NULL,a_118 = NULL,b_118 = NULL;
  z_117 = t;
  {
    ATerm m_57 = t;
    int n_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_117;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_57 = ATgetFirst((ATermList) t);
                ATerm r_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_117;
          }
        LocalPopChoice(n_57);
      }
    else
      {
        t = m_57;
        t = (ATerm) ATinsert(ATempty, z_117);
      }
  }
  a_118 = t;
  t = term_u_51;
  b_118 = t;
  t = SSL_printnl(b_118, a_118);
  t = z_117;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_118 = NULL,g_118 = NULL;
  t = term_r_22;
  f_118 = t;
  t = term_u_55;
  g_118 = t;
  t = term_v_55;
  t = l_11(f_118, g_118, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_11 (ATerm m_36, ATerm n_36, ATerm t)
{
  t = SSL_hashtable_get(n_36, m_36);
  return(t);
}
static ATerm l_11 (ATerm x_33, ATerm y_33, ATerm t)
{
  ATerm h_118 = NULL;
  t = lookup_table_0_1(x_33, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11(y_33, h_118, t);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm j_118 = NULL,k_118 = NULL;
  t = term_s_57;
  j_118 = t;
  t = term_h_53;
  k_118 = t;
  t = term_v_57;
  t = o_11(j_118, k_118, t);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  t = term_w_57;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm l_118 = NULL,m_118 = NULL,n_118 = NULL,o_118 = NULL;
  t = term_s_57;
  n_118 = t;
  t = term_h_53;
  o_118 = t;
  t = term_v_57;
  t = o_11(n_118, o_118, t);
  t = term_x_57;
  l_118 = t;
  t = term_h_53;
  m_118 = t;
  t = term_z_57;
  t = o_11(l_118, m_118, t);
  t = term_b_58;
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_c_58;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_58 = t;
  int g_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_17, l_17, m_17, t);
      LocalPopChoice(g_58);
    }
  else
    {
      t = d_58;
      t = Option_3_0(n_17, o_17, p_17, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t)
{
  ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL,x_118 = NULL,y_118 = NULL,z_118 = NULL,k_21 = NULL;
  z_118 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_118 = ATgetFirst((ATermList) t);
      w_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_118);
  u_118 = t;
  t = v_118;
  t = z_84(t);
  x_118 = t;
  t = w_118;
  t = a_85(t);
  y_118 = t;
  t = (ATerm) ATinsert(CheckATermList(y_118), x_118);
  k_21 = t;
  t = SSLsetAnnotations(k_21, u_118);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_130 (ATerm), ATerm t)
{
  ATerm e_119 = NULL,f_119 = NULL,g_119 = NULL,h_119 = NULL,j_119 = NULL,k_119 = NULL,m_21 = NULL;
  e_119 = t;
  {
    ATerm l_58 = t;
    int m_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_58;
        t = k_130(t);
        LocalPopChoice(m_58);
      }
    else
      {
        t = l_58;
      }
  }
  t = e_119;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_119 = ATgetFirst((ATermList) t);
      h_119 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_119);
  f_119 = t;
  t = term_u_55;
  k_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_55, g_119);
  t = o_11(k_119, g_119, t);
  t = h_119;
  {
    static ATerm u_119 (ATerm t)
    {
      ATerm o_58 = t;
      int p_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_58 = t;
          int s_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_119 = NULL;
              n_119 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_119;
              LocalPopChoice(s_58);
            }
          else
            {
              t = q_58;
              t = k_130(t);
              t = Cons_2_0(_id, u_119, t);
            }
          LocalPopChoice(p_58);
        }
      else
        {
          t = o_58;
          {
            ATerm q_119 = NULL,r_119 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_119 = ATgetFirst((ATermList) t);
                r_119 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_119), (ATerm) ATmakeAppl(sym_Undefined_1, q_119));
          }
        }
      return(t);
    }
    t = u_119(t);
  }
  j_119 = t;
  t = (ATerm) ATinsert(CheckATermList(j_119), (ATerm) ATmakeAppl(sym_Program_1, g_119));
  m_21 = t;
  t = SSLsetAnnotations(m_21, f_119);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm h_120 = NULL;
  h_120 = t;
  if(match_string(t, "--help"))
    {
      t = h_120;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_120;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_120;
        }
    }
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm i_120 = NULL,j_120 = NULL;
  t = term_s_56;
  i_120 = t;
  t = term_h_53;
  j_120 = t;
  t = term_t_58;
  t = o_11(i_120, j_120, t);
  t = term_u_58;
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = term_v_58;
  return(t);
}
static ATerm x_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_130 (ATerm), ATerm t)
{
  ATerm z_119 = NULL,a_120 = NULL,b_120 = NULL,c_120 = NULL,d_120 = NULL,e_120 = NULL,f_120 = NULL,g_120 = NULL;
  b_120 = t;
  t = term_e_54;
  c_120 = t;
  t = term_w_58;
  t = lookup_table_0_1(c_120, t);
  g_120 = t;
  t = term_g_54;
  d_120 = t;
  t = (ATerm) ATempty;
  e_120 = t;
  t = g_120;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(d_120, e_120, f_120, t);
  t = b_120;
  {
    static ATerm r_17 (ATerm t)
    {
      ATerm y_58 = t;
      int z_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_130(t);
          LocalPopChoice(z_58);
        }
      else
        {
          t = y_58;
          {
            ATerm a_59 = t;
            int b_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_17, v_17, w_17, t);
                LocalPopChoice(b_59);
              }
            else
              {
                t = a_59;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_17, t);
  }
  {
    ATerm d_59 = t;
    int e_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_120 = NULL;
        u_120 = t;
        {
          ATerm f_59 = t;
          int g_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_54 = NULL;
              t = u_120;
              {
                ATerm h_59 = t;
                int i_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_54 = NULL,u_54 = NULL;
                    t = term_r_22;
                    s_54 = t;
                    t = term_s_56;
                    u_54 = t;
                    t = term_t_56;
                    t = l_11(s_54, u_54, t);
                    LocalPopChoice(i_59);
                  }
                else
                  {
                    t = h_59;
                    t = fetch_1_0(x_17, t);
                  }
              }
              t = u_120;
              t = default_system_usage_0_0(t);
              t = term_q_53;
              r_54 = t;
              t = SSL_exit(r_54);
              LocalPopChoice(g_59);
            }
          else
            {
              t = f_59;
              {
                ATerm b_55 = NULL,c_55 = NULL,g_55 = NULL;
                t = term_r_22;
                c_55 = t;
                t = term_s_57;
                g_55 = t;
                t = term_k_59;
                t = l_11(c_55, g_55, t);
                t = u_120;
                t = default_system_about_0_0(t);
                t = term_q_53;
                b_55 = t;
                t = SSL_exit(b_55);
              }
            }
        }
        LocalPopChoice(e_59);
      }
    else
      {
        t = d_59;
        {
          ATerm l_59 = t;
          int t_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_120 = NULL,w_120 = NULL,x_120 = NULL;
              static ATerm z_17 (ATerm t)
              {
                ATerm y_120 = NULL,z_120 = NULL,a_121 = NULL,p_21 = NULL;
                a_121 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_120 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_121);
                y_120 = t;
                t = z_120;
                if(((z_119 != NULL) && (z_119 != t)))
                  _fail(t);
                else
                  z_119 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_120);
                p_21 = t;
                t = SSLsetAnnotations(p_21, y_120);
                return(t);
              }
              t = fetch_1_0(z_17, t);
              t = term_l_21;
              w_120 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_119)), term_u_59);
              x_120 = t;
              t = SSL_printnl(w_120, x_120);
              t = (ATerm) ATmakeAppl(sym__2, term_l_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_119)), term_u_59));
              t = default_system_usage_0_0(t);
              t = term_l_53;
              v_120 = t;
              t = SSL_exit(v_120);
              LocalPopChoice(t_59);
            }
          else
            {
              t = l_59;
            }
        }
      }
  }
  a_120 = t;
  t = term_e_54;
  t = table_destroy_0_0(t);
  t = a_120;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_128 (ATerm), ATerm k_128 (ATerm), ATerm l_128 (ATerm), ATerm m_128 (ATerm), ATerm t)
{
  ATerm f_121 = NULL,g_121 = NULL,h_121 = NULL,i_121 = NULL,m_121 = NULL;
  t = parse_options_1_0(j_128, t);
  f_121 = t;
  t = term_v_59;
  t = table_create_0_0(t);
  t = term_v_59;
  g_121 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_59, term_y_59, f_121);
  t = lookup_table_0_1(g_121, t);
  m_121 = t;
  t = term_y_59;
  h_121 = t;
  t = m_121;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(h_121, f_121, i_121, t);
  t = f_121;
  t = l_128(t);
  {
    ATerm z_59 = t;
    int a_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_128, t);
        LocalPopChoice(a_60);
      }
    else
      {
        t = z_59;
        {
          ATerm c_60 = t;
          int d_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_128(t);
              t = report_success_0_0(t);
              LocalPopChoice(d_60);
            }
          else
            {
              t = c_60;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm e_60 = t;
  int i_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = stratego_warnings_options_0_0(t);
      LocalPopChoice(i_60);
    }
  else
    {
      t = e_60;
      {
        ATerm j_60 = t;
        int k_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(k_60);
          }
        else
          {
            t = j_60;
            {
              ATerm l_60 = t;
              int m_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(m_60);
                }
              else
                {
                  t = l_60;
                  {
                    ATerm s_60 = t;
                    int t_60 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(d_18, f_18, h_18, t);
                        LocalPopChoice(t_60);
                      }
                    else
                      {
                        t = s_60;
                        {
                          ATerm u_60 = t;
                          int v_60 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(v_60);
                            }
                          else
                            {
                              t = u_60;
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
static ATerm c_18 (ATerm t)
{
  t = input_1_0(i_18, t);
  return(t);
}
static ATerm d_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_18 (ATerm t)
{
  ATerm o_121 = NULL,p_121 = NULL;
  t = term_x_51;
  o_121 = t;
  t = term_h_53;
  p_121 = t;
  t = term_x_60;
  t = o_11(o_121, p_121, t);
  t = term_y_60;
  return(t);
}
static ATerm h_18 (ATerm t)
{
  t = term_z_60;
  return(t);
}
static ATerm i_18 (ATerm t)
{
  t = output_1_0(j_18, t);
  return(t);
}
static ATerm j_18 (ATerm t)
{
  ATerm r_121 = NULL;
  r_121 = t;
  t = spec_use_def_0_0(t);
  t = r_121;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(a_18, default_usage_0_0, _id, c_18, t);
  return(t);
}
