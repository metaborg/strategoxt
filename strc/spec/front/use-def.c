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
ATerm term_e_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_z_53;
ATerm term_x_53;
ATerm term_w_53;
ATerm term_t_53;
ATerm term_f_53;
ATerm term_e_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_q_52;
ATerm term_e_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_x_51;
ATerm term_w_51;
ATerm term_v_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_c_51;
ATerm term_b_51;
ATerm term_z_50;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_b_50;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_q_49;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_i_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_a_48;
ATerm term_v_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_d_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_z_45;
ATerm term_v_45;
ATerm term_s_45;
ATerm term_q_45;
ATerm term_p_45;
ATerm term_m_45;
ATerm term_d_45;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_z_28;
ATerm term_z_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_f_27;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_e_21;
ATerm term_s_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_a_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_m_19;
ATerm term_q_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("z_0", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("b_1", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("x_0", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("t_0", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATempty);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATempty);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_l_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("j_1", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Defined_2, term_f_27, term_h_27);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("l_1", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Defined_2, term_f_34, term_h_27);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("h_1", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym_Defined_2, term_s_36, term_u_36);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_p_45);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_v_45);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_d_47);
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(sym__2, term_p_47, term_q_47);
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_47);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym__2, term_c_48, term_h_47);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_q_47);
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_k_47);
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_d_50);
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_p_47);
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_v_50);
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(sym__2, term_u_48, term_v_48);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(sym__2, term_v_51, term_h_47);
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(sym__2, term_a_52, term_h_47);
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(sym__2, term_v_50, term_h_47);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym__3, term_u_48, term_v_48, (ATerm) ATempty);
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_v_51);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(sym__2, term_v_45, term_h_47);
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm f_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm x_9 (ATerm m_24, ATerm l_24, ATerm n_24, ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm rdef_ud_0_0 (ATerm t);
ATerm Context_0_0 (ATerm t);
ATerm Unbound_0_0 (ATerm t);
ATerm Warning_0_0 (ATerm t);
ATerm MaybeUnbound_0_0 (ATerm t);
ATerm use_vars_0_0 (ATerm t);
ATerm bind_vars_0_0 (ATerm t);
ATerm unbound_vars_0_0 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm sdef_ud_0_0 (ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm m_130 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm l_130 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm n_130 (ATerm), ATerm o_130 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm k_130 (ATerm), ATerm t);
static ATerm y_9 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm z_102 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm z_9 (ATerm w_74, ATerm x_74, ATerm y_74, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm a_10 (ATerm q_74, ATerm u_74, ATerm s_74, ATerm t);
static ATerm l_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm b_10 (ATerm k_74, ATerm o_74, ATerm m_74, ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm c_10 (ATerm i_73, ATerm j_73, ATerm k_73, ATerm m_73, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm d_10 (ATerm t_71, ATerm u_71, ATerm s_71, ATerm t);
static ATerm n_4 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm e_10 (ATerm f_33, ATerm e_33, ATerm t);
static ATerm f_10 (ATerm b_36, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm g_72, ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm g_10 (ATerm p_32, ATerm q_32, ATerm r_32, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm j_10 (ATerm n_32, ATerm o_32, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm k_10 (ATerm x_100 (ATerm), ATerm y_30, ATerm w_30, ATerm t);
static ATerm w_4 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm z_119 (ATerm), ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm w_5 (ATerm t);
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
ATerm Bind4_0_0 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm n_10 (ATerm s_96 (ATerm), ATerm k_25, ATerm j_25, ATerm t);
ATerm foldr_3_0 (ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm t);
static ATerm o_10 (ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm o_25, ATerm n_25, ATerm t);
static ATerm p_10 (ATerm n_96 (ATerm), ATerm i_25, ATerm h_25, ATerm t);
ATerm genzip_4_0 (ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm c_112 (ATerm), ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm u_10 (ATerm n_696, ATerm s_696, ATerm w_70, ATerm t);
ATerm while_not_2_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm t);
ATerm for_3_0 (ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm h_91 (ATerm b_90, ATerm c_90, ATerm d_90, ATerm t);
static ATerm k_7 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm free_vars_3_0 (ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm d_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm topdown_1_0 (ATerm h_101 (ATerm), ATerm t);
static ATerm w_10 (ATerm h_32, ATerm i_32, ATerm t);
ATerm end_scope_1_0 (ATerm u_100 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm a_115 (ATerm), ATerm b_115 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm t_100 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm def_use_def_0_0 (ATerm t);
ATerm filter_1_0 (ATerm z_113 (ATerm), ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm v_10 (ATerm t);
ATerm spec_use_def_0_0 (ATerm t);
static ATerm y_10 (ATerm n_42, ATerm o_42, ATerm t);
static ATerm z_10 (ATerm k_48, ATerm l_48, ATerm t);
static ATerm b_11 (ATerm w_110 (ATerm), ATerm e_456, ATerm q_48, ATerm t);
static ATerm a_11 (ATerm g_48, ATerm h_48, ATerm t);
static ATerm k_11 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm output_1_0 (ATerm v_126 (ATerm), ATerm t);
static ATerm m_97 (ATerm g_97, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_11 (ATerm m_48, ATerm t);
static ATerm d_11 (ATerm g_41, ATerm h_41, ATerm t);
static ATerm e_11 (ATerm p_42, ATerm q_42, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_99 (ATerm a_98, ATerm t);
static ATerm c_99 (ATerm e_98, ATerm f_98, ATerm g_98, ATerm t);
static ATerm d_99 (ATerm o_98, ATerm p_98, ATerm q_98, ATerm t);
static ATerm f_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm w_126 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm o_13 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_11 (ATerm i_46, ATerm j_46, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm s_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm y_13 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm f_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm u_97 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_102 (ATerm p_102, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm x_10 (ATerm o_46, ATerm n_46, ATerm t);
static ATerm m_11 (ATerm c_32, ATerm d_32, ATerm b_32, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm e_1 (ATerm), ATerm k_1 (ATerm), ATerm t);
static ATerm y_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_11 (ATerm k_29, ATerm l_29, ATerm t);
ATerm foldr_2_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm t_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_106 (ATerm), ATerm t);
static ATerm u_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_15 (ATerm t);
ATerm need_help_1_0 (ATerm m_126 (ATerm), ATerm t);
static ATerm p_11 (ATerm u_35, ATerm v_35, ATerm w_35, ATerm t);
ATerm lookup_table_0_1 (ATerm o_33, ATerm t);
ATerm new_hashtable_0_2 (ATerm c_36, ATerm d_36, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm i_11 (ATerm z_35, ATerm a_36, ATerm t);
static ATerm j_11 (ATerm e_36, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm d_97 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm n_97 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_11 (ATerm x_35, ATerm y_35, ATerm t);
static ATerm l_11 (ATerm v_33, ATerm w_33, ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm j_16 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_128 (ATerm), ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
ATerm parse_options_1_0 (ATerm o_128 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_126 (ATerm), ATerm p_126 (ATerm), ATerm q_126 (ATerm), ATerm r_126 (ATerm), ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_c_17;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_d_17;
  return(t);
}
static ATerm x_9 (ATerm m_24, ATerm l_24, ATerm n_24, ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,m_0 = NULL,q_0 = NULL,s_0 = NULL;
  a_0 = t;
  t = (ATerm) ATempty;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_17, m_24);
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_17, m_24));
  t = k_10(f_0, q_0, s_0, t);
  t = (ATerm) ATempty;
  b_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_17, m_24);
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_17, m_24));
  t = k_10(u_0, b_0, m_0, t);
  t = n_24;
  t = use_vars_0_0(t);
  t = a_0;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_c_17;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_d_17;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_c_17;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_d_17;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_c_17;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_d_17;
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
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_17, z_2);
            s_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_i_17, z_2));
            t = k_10(w_0, o_3, s_3, t);
            t = (ATerm) ATempty;
            m_3 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_17, z_2);
            n_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_k_17, z_2));
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
            ATerm l_17 = t;
            int m_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,t_3 = NULL;
                t = (ATerm) ATempty;
                r_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_17, z_2);
                t_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_17, z_2));
                t = k_10(a_1, r_3, t_3, t);
                t = (ATerm) ATempty;
                p_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_17, z_2);
                q_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_17, z_2));
                t = k_10(c_1, p_3, q_3, t);
                t = r_2;
                t = bind_vars_0_0(t);
                LocalPopChoice(m_17);
              }
            else
              {
                t = l_17;
                {
                  ATerm p_17 = t;
                  int r_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_2;
                      t = unbound_vars_0_0(t);
                      LocalPopChoice(r_17);
                    }
                  else
                    {
                      t = p_17;
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
        ATerm w_17 = t;
        int x_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
            t = (ATerm) ATempty;
            u_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_17, z_2);
            v_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_z_17, z_2));
            t = k_10(m_1, u_5, v_5, t);
            t = (ATerm) ATempty;
            s_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_18, z_2);
            t_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_a_18, z_2));
            t = k_10(n_1, s_5, t_5, t);
            t = c_3;
            t = bind_vars_0_0(t);
            LocalPopChoice(x_17);
          }
        else
          {
            t = w_17;
            {
              ATerm b_18 = t;
              int c_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_3;
                  t = unbound_vars_0_0(t);
                  LocalPopChoice(c_18);
                }
              else
                {
                  t = b_18;
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
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_7 = NULL,f_7 = NULL,h_7 = NULL;
        t = (ATerm) ATempty;
        f_7 = t;
        t = term_c_17;
        h_7 = t;
        t = term_f_18;
        t = j_10(h_7, f_7, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm h_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_18) != ATmakeSymbol("z_0", 0, ATtrue)))
              _fail(t);
            d_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_j_18), d_7), term_i_18);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        {
          ATerm k_18 = t;
          int m_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_7 = NULL,f_8 = NULL,g_8 = NULL;
              t = (ATerm) ATempty;
              f_8 = t;
              t = term_c_17;
              g_8 = t;
              t = term_f_18;
              t = j_10(g_8, f_8, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm n_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) n_18) != ATmakeSymbol("v_0", 0, ATtrue)))
                    _fail(t);
                  x_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_j_18), x_7), term_q_18);
              LocalPopChoice(m_18);
            }
          else
            {
              t = k_18;
              {
                ATerm r_18 = t;
                int s_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_8 = NULL,s_8 = NULL,t_8 = NULL;
                    t = (ATerm) ATempty;
                    s_8 = t;
                    t = term_c_17;
                    t_8 = t;
                    t = term_f_18;
                    t = j_10(t_8, s_8, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm t_18 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) t_18) != ATmakeSymbol("r_0", 0, ATtrue)))
                          _fail(t);
                        k_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_j_18), k_8), term_q_18);
                    LocalPopChoice(s_18);
                  }
                else
                  {
                    t = r_18;
                    {
                      ATerm c_19 = t;
                      int d_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_9 = NULL,h_9 = NULL,i_9 = NULL;
                          t = (ATerm) ATempty;
                          h_9 = t;
                          t = term_c_17;
                          i_9 = t;
                          t = term_f_18;
                          t = j_10(i_9, h_9, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm g_19 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) g_19) != ATmakeSymbol("l_0", 0, ATtrue)))
                                _fail(t);
                              f_9 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_j_18), f_9), term_q_18);
                          LocalPopChoice(d_19);
                        }
                      else
                        {
                          t = c_19;
                          {
                            ATerm h_19 = t;
                            int i_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_9 = NULL,s_9 = NULL,v_9 = NULL;
                                t = (ATerm) ATempty;
                                s_9 = t;
                                t = term_c_17;
                                v_9 = t;
                                t = term_f_18;
                                t = j_10(v_9, s_9, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm k_19 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) k_19) != ATmakeSymbol("h_0", 0, ATtrue)))
                                      _fail(t);
                                    p_9 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_j_18), p_9), term_m_19);
                                LocalPopChoice(i_19);
                              }
                            else
                              {
                                t = h_19;
                                {
                                  ATerm r_11 = NULL,u_11 = NULL,v_11 = NULL;
                                  t = (ATerm) ATempty;
                                  u_11 = t;
                                  t = term_c_17;
                                  v_11 = t;
                                  t = term_f_18;
                                  t = j_10(v_11, u_11, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm n_19 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) n_19) != ATmakeSymbol("c_0", 0, ATtrue)))
                                        _fail(t);
                                      r_11 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_5), term_j_18), r_11), term_m_19);
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
        ATerm o_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_5;
            m_5 = t;
            t = r_5;
            LocalPopChoice(q_19);
          }
        else
          {
            t = o_19;
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_19), m_5), term_s_19);
  t = Context_0_0(t);
  n_5 = t;
  t = term_w_19;
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
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_13 = NULL,g_13 = NULL,l_13 = NULL;
        t = (ATerm) ATempty;
        g_13 = t;
        t = term_d_17;
        l_13 = t;
        t = term_a_20;
        t = j_10(l_13, g_13, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm b_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_20) != ATmakeSymbol("b_1", 0, ATtrue)))
              _fail(t);
            e_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_e_20), e_13), term_d_20);
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        {
          ATerm f_20 = t;
          int g_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_13 = NULL,v_13 = NULL,w_13 = NULL;
              t = (ATerm) ATempty;
              v_13 = t;
              t = term_d_17;
              w_13 = t;
              t = term_a_20;
              t = j_10(w_13, v_13, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm h_20 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_20) != ATmakeSymbol("x_0", 0, ATtrue)))
                    _fail(t);
                  t_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_e_20), t_13), term_s_20);
              LocalPopChoice(g_20);
            }
          else
            {
              t = f_20;
              {
                ATerm t_20 = t;
                int v_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_14 = NULL,c_14 = NULL,d_14 = NULL;
                    t = (ATerm) ATempty;
                    c_14 = t;
                    t = term_d_17;
                    d_14 = t;
                    t = term_a_20;
                    t = j_10(d_14, c_14, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm w_20 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) w_20) != ATmakeSymbol("t_0", 0, ATtrue)))
                          _fail(t);
                        a_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_e_20), a_14), term_s_20);
                    LocalPopChoice(v_20);
                  }
                else
                  {
                    t = t_20;
                    {
                      ATerm y_20 = t;
                      int z_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_14 = NULL,j_14 = NULL,x_14 = NULL;
                          t = (ATerm) ATempty;
                          j_14 = t;
                          t = term_d_17;
                          x_14 = t;
                          t = term_a_20;
                          t = j_10(x_14, j_14, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm a_21 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) a_21) != ATmakeSymbol("p_0", 0, ATtrue)))
                                _fail(t);
                              h_14 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_e_20), h_14), term_s_20);
                          LocalPopChoice(z_20);
                        }
                      else
                        {
                          t = y_20;
                          {
                            ATerm b_21 = t;
                            int c_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_15 = NULL,f_15 = NULL,k_15 = NULL;
                                t = (ATerm) ATempty;
                                f_15 = t;
                                t = term_d_17;
                                k_15 = t;
                                t = term_a_20;
                                t = j_10(k_15, f_15, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm d_21 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) d_21) != ATmakeSymbol("j_0", 0, ATtrue)))
                                      _fail(t);
                                    d_15 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_e_20), d_15), term_e_21);
                                LocalPopChoice(c_21);
                              }
                            else
                              {
                                t = b_21;
                                {
                                  ATerm q_15 = NULL,s_15 = NULL,x_15 = NULL;
                                  t = (ATerm) ATempty;
                                  s_15 = t;
                                  t = term_d_17;
                                  x_15 = t;
                                  t = term_a_20;
                                  t = j_10(x_15, s_15, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm f_21 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) f_21) != ATmakeSymbol("e_0", 0, ATtrue)))
                                        _fail(t);
                                      q_15 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_7), term_e_20), q_15), term_e_21);
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
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_8;
            m_8 = t;
            t = o_8;
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
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
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_8 = NULL,r_8 = NULL,u_8 = NULL,v_8 = NULL;
        t = term_k_21;
        u_8 = t;
        t = term_l_21;
        v_8 = t;
        t = term_m_21;
        t = l_11(u_8, v_8, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_21), m_8), term_s_19);
        t = Warning_0_0(t);
        q_8 = t;
        t = term_w_19;
        r_8 = t;
        t = SSL_printnl(r_8, q_8);
        t = q_8;
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm a_9 = NULL,c_9 = NULL;
  ATerm o_21 = t;
  int p_21 = stack_ptr;
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
      LocalPopChoice(p_21);
      {
        ATerm m_9 = NULL;
        m_9 = t;
        t = a_9;
        {
          ATerm q_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_21 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) t_21) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm u_21 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(u_21) != AT_LIST) || !(ATisEmpty(u_21))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(r_21);
              _fail(t);
            }
          else
            {
              t = q_21;
              {
                ATerm v_21 = t;
                int w_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm y_21 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) y_21) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm z_21 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(z_21) != AT_LIST) || !(ATisEmpty(z_21))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_21);
                    t = (ATerm) ATmakeAppl(sym_Var_1, c_9);
                    t = MaybeUnbound_0_0(t);
                    _fail(t);
                  }
                else
                  {
                    t = v_21;
                    {
                      ATerm a_22 = t;
                      int b_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm c_22 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) c_22) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm d_22 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(d_22) != AT_LIST) || !(ATisEmpty(d_22))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(b_22);
                          t = (ATerm) ATmakeAppl(sym_Var_1, c_9);
                          t = Unbound_0_0(t);
                        }
                      else
                        {
                          t = a_22;
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
      t = o_21;
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
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
            LocalPopChoice(f_22);
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
            t = e_22;
            {
              ATerm j_22 = t;
              int k_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,g_1 = NULL;
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
                  g_1 = t;
                  t = SSLsetAnnotations(g_1, q_10);
                  LocalPopChoice(k_22);
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
                  t = j_22;
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
  ATerm l_22 = t;
  int n_22 = stack_ptr;
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
      LocalPopChoice(n_22);
      _fail(t);
    }
  else
    {
      t = l_22;
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
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
            LocalPopChoice(p_22);
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
            t = o_22;
            {
              ATerm q_22 = t;
              int r_22 = stack_ptr;
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
                  LocalPopChoice(r_22);
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
                  t = q_22;
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
  ATerm t_22 = t;
  int u_22 = stack_ptr;
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
      LocalPopChoice(u_22);
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
      t = t_22;
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
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
            LocalPopChoice(w_22);
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
            t = v_22;
            {
              ATerm y_22 = t;
              int z_22 = stack_ptr;
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
                  LocalPopChoice(z_22);
                  {
                    ATerm l_18 = NULL,o_18 = NULL,p_18 = NULL,u_18 = NULL;
                    l_18 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        o_18 = ATgetArgument(t, 0);
                        p_18 = ATgetArgument(t, 1);
                        u_18 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm a_23 = t;
                      int b_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_16 = NULL,i_16 = NULL,f_2 = NULL;
                          t = SSLgetAnnotations(l_18);
                          d_16 = t;
                          t = o_18;
                          t = bind_vars_0_0(t);
                          i_16 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, i_16, p_18, u_18);
                          f_2 = t;
                          t = SSLsetAnnotations(f_2, d_16);
                          LocalPopChoice(b_23);
                        }
                      else
                        {
                          t = a_23;
                          {
                            ATerm c_23 = t;
                            int d_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm y_16 = NULL,h_17 = NULL,g_2 = NULL;
                                t = SSLgetAnnotations(l_18);
                                y_16 = t;
                                t = u_18;
                                t = unbound_vars_0_0(t);
                                h_17 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, o_18, p_18, h_17);
                                g_2 = t;
                                t = SSLsetAnnotations(g_2, y_16);
                                LocalPopChoice(d_23);
                              }
                            else
                              {
                                t = c_23;
                                {
                                  ATerm y_17 = NULL,g_18 = NULL,h_2 = NULL;
                                  t = SSLgetAnnotations(l_18);
                                  y_17 = t;
                                  t = p_18;
                                  t = use_vars_0_0(t);
                                  g_18 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, o_18, g_18, u_18);
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
                  t = y_22;
                  {
                    ATerm e_23 = t;
                    int f_23 = stack_ptr;
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
                        LocalPopChoice(f_23);
                        {
                          ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
                          i_20 = t;
                          if(match_cons(t, sym_PrimT_3))
                            {
                              j_20 = ATgetArgument(t, 0);
                              k_20 = ATgetArgument(t, 1);
                              l_20 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          {
                            ATerm g_23 = t;
                            int h_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm f_19 = NULL,l_19 = NULL,j_2 = NULL;
                                t = SSLgetAnnotations(i_20);
                                f_19 = t;
                                t = k_20;
                                t = unbound_vars_0_0(t);
                                l_19 = t;
                                t = (ATerm) ATmakeAppl(sym_PrimT_3, j_20, l_19, l_20);
                                j_2 = t;
                                t = SSLsetAnnotations(j_2, f_19);
                                LocalPopChoice(h_23);
                              }
                            else
                              {
                                t = g_23;
                                {
                                  ATerm r_20 = NULL,x_20 = NULL,m_2 = NULL;
                                  t = SSLgetAnnotations(i_20);
                                  r_20 = t;
                                  t = l_20;
                                  t = use_vars_0_0(t);
                                  x_20 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, j_20, k_20, x_20);
                                  m_2 = t;
                                  t = SSLsetAnnotations(m_2, r_20);
                                }
                              }
                          }
                        }
                      }
                    else
                      {
                        t = e_23;
                        {
                          ATerm i_23 = t;
                          int k_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,n_2 = NULL;
                              q_20 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  n_20 = ATgetArgument(t, 0);
                                  o_20 = ATgetArgument(t, 1);
                                  p_20 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(q_20);
                              m_20 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, n_20, o_20, p_20);
                              n_2 = t;
                              t = SSLsetAnnotations(n_2, m_20);
                              LocalPopChoice(k_23);
                              {
                                ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,m_22 = NULL;
                                g_22 = t;
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    h_22 = ATgetArgument(t, 0);
                                    i_22 = ATgetArgument(t, 1);
                                    m_22 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm t_23 = t;
                                  int w_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm s_21 = NULL,x_21 = NULL,o_2 = NULL;
                                      t = SSLgetAnnotations(g_22);
                                      s_21 = t;
                                      t = i_22;
                                      t = unbound_vars_0_0(t);
                                      x_21 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, h_22, x_21, m_22);
                                      o_2 = t;
                                      t = SSLsetAnnotations(o_2, s_21);
                                      LocalPopChoice(w_23);
                                    }
                                  else
                                    {
                                      t = t_23;
                                      {
                                        ATerm s_22 = NULL,x_22 = NULL,p_2 = NULL;
                                        t = SSLgetAnnotations(g_22);
                                        s_22 = t;
                                        t = m_22;
                                        t = use_vars_0_0(t);
                                        x_22 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, h_22, i_22, x_22);
                                        p_2 = t;
                                        t = SSLsetAnnotations(p_2, s_22);
                                      }
                                    }
                                }
                              }
                            }
                          else
                            {
                              t = i_23;
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
static ATerm o_1 (ATerm t)
{
  t = term_c_17;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_d_17;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_c_17;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_d_17;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm i_24 = NULL,r_24 = NULL,a_25 = NULL,d_25 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      r_24 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
      d_25 = ATgetArgument(t, 2);
      i_24 = ATgetArgument(t, 3);
      {
        ATerm q_25 = NULL,v_25 = NULL,d_26 = NULL,f_26 = NULL;
        t = (ATerm) ATempty;
        d_26 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_24, r_24);
        f_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_a_24, r_24));
        t = k_10(o_1, d_26, f_26, t);
        t = (ATerm) ATempty;
        q_25 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_24, r_24);
        v_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_b_24, r_24));
        t = k_10(p_1, q_25, v_25, t);
        t = i_24;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, r_24, a_25, d_25, i_24);
      }
    }
  else
    {
      ATerm q_26 = NULL,r_26 = NULL,u_26 = NULL,v_26 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          r_24 = ATgetArgument(t, 0);
          a_25 = ATgetArgument(t, 1);
          d_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      u_26 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_24, r_24);
      v_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_c_24, r_24));
      t = k_10(v_1, u_26, v_26, t);
      t = (ATerm) ATempty;
      q_26 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_24, r_24);
      r_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_24, r_24));
      t = k_10(w_1, q_26, r_26, t);
      t = d_25;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, r_24, a_25, d_25);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm m_130 (ATerm), ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,x_4 = NULL;
  static ATerm x_1 (ATerm t)
  {
    ATerm b_27 = NULL,g_27 = NULL,j_27 = NULL,k_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,u_27 = NULL,v_27 = NULL,z_4 = NULL,y_4 = NULL;
    v_27 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        o_27 = ATgetArgument(t, 0);
        q_27 = ATgetArgument(t, 1);
        r_27 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_27);
    n_27 = t;
    t = o_27;
    t = m_130(t);
    s_27 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, s_27, q_27, r_27);
    y_4 = t;
    t = SSLsetAnnotations(y_4, n_27);
    u_27 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        g_27 = ATgetArgument(t, 0);
        j_27 = ATgetArgument(t, 1);
        k_27 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_27);
    b_27 = t;
    t = j_27;
    t = m_130(t);
    m_27 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, g_27, m_27, k_27);
    z_4 = t;
    t = SSLsetAnnotations(z_4, b_27);
    return(t);
  }
  static ATerm y_1 (ATerm t)
  {
    ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,a_5 = NULL;
    f_28 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        b_28 = ATgetArgument(t, 0);
        c_28 = ATgetArgument(t, 1);
        d_28 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_28);
    a_28 = t;
    t = d_28;
    t = m_130(t);
    e_28 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, b_28, c_28, e_28);
    a_5 = t;
    t = SSLsetAnnotations(a_5, a_28);
    return(t);
  }
  a_27 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      x_26 = ATgetArgument(t, 0);
      y_26 = ATgetArgument(t, 1);
      z_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_27);
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, x_26, y_26, z_26);
  x_4 = t;
  t = SSLsetAnnotations(x_4, w_26);
  t = abstract_choice_2_0(x_1, y_1, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm l_130 (ATerm), ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,g_5 = NULL;
  static ATerm z_1 (ATerm t)
  {
    ATerm n_28 = NULL,p_28 = NULL,u_28 = NULL,w_28 = NULL,y_28 = NULL,h_5 = NULL;
    y_28 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        p_28 = ATgetArgument(t, 0);
        u_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_28);
    n_28 = t;
    t = p_28;
    t = l_130(t);
    w_28 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, w_28, u_28);
    h_5 = t;
    t = SSLsetAnnotations(h_5, n_28);
    return(t);
  }
  static ATerm k_2 (ATerm t)
  {
    ATerm b_29 = NULL,c_29 = NULL,e_29 = NULL,g_29 = NULL,h_29 = NULL,i_5 = NULL;
    h_29 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        c_29 = ATgetArgument(t, 0);
        e_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_29);
    b_29 = t;
    t = e_29;
    t = l_130(t);
    g_29 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, c_29, g_29);
    i_5 = t;
    t = SSLsetAnnotations(i_5, b_29);
    return(t);
  }
  j_28 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      h_28 = ATgetArgument(t, 0);
      i_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_28);
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, h_28, i_28);
  g_5 = t;
  t = SSLsetAnnotations(g_5, g_28);
  t = abstract_choice_2_0(z_1, k_2, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm n_130 (ATerm), ATerm o_130 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,m_29 = NULL,n_29 = NULL,r_29 = NULL,t_29 = NULL;
  r_29 = t;
  t = save_MarkVar_0_0(t);
  i_29 = t;
  t = r_29;
  t = n_130(t);
  n_29 = t;
  t = save_MarkVar_0_0(t);
  j_29 = t;
  t = term_f_24;
  t = table_destroy_0_0(t);
  t = term_f_24;
  t_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_24, i_29);
  t = e_10(t_29, i_29, t);
  t = n_29;
  t = o_130(t);
  m_29 = t;
  t = j_29;
  t = isect_MarkVar_0_0(t);
  t = m_29;
  return(t);
}
ATerm mark_choice_1_0 (ATerm k_130 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,f_6 = NULL;
  static ATerm l_2 (ATerm t)
  {
    ATerm z_29 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,g_6 = NULL;
    e_30 = t;
    if(match_cons(t, sym_Choice_2))
      {
        b_30 = ATgetArgument(t, 0);
        c_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_30);
    z_29 = t;
    t = b_30;
    t = k_130(t);
    d_30 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, d_30, c_30);
    g_6 = t;
    t = SSLsetAnnotations(g_6, z_29);
    return(t);
  }
  static ATerm s_2 (ATerm t)
  {
    ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,h_6 = NULL;
    j_30 = t;
    if(match_cons(t, sym_Choice_2))
      {
        g_30 = ATgetArgument(t, 0);
        h_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_30);
    f_30 = t;
    t = h_30;
    t = k_130(t);
    i_30 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, g_30, i_30);
    h_6 = t;
    t = SSLsetAnnotations(h_6, f_30);
    return(t);
  }
  y_29 = t;
  if(match_cons(t, sym_Choice_2))
    {
      w_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_29);
  u_29 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, w_29, x_29);
  f_6 = t;
  t = SSLsetAnnotations(f_6, u_29);
  t = abstract_choice_2_0(l_2, s_2, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,t_31 = NULL,m_6 = NULL,l_6 = NULL;
  l_30 = t;
  t = save_MarkVar_0_0(t);
  k_30 = t;
  t = l_30;
  if(match_cons(t, sym_Rec_2))
    {
      q_31 = ATgetArgument(t, 0);
      r_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_30);
  p_31 = t;
  t = r_31;
  t = mark_buv_0_0(t);
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, q_31, t_31);
  l_6 = t;
  t = SSLsetAnnotations(l_6, p_31);
  t = k_30;
  t = isect_MarkVar_0_0(t);
  t = l_30;
  if(match_cons(t, sym_Rec_2))
    {
      c_31 = ATgetArgument(t, 0);
      d_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_30);
  b_31 = t;
  t = d_31;
  t = mark_buv_0_0(t);
  o_31 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, c_31, o_31);
  m_6 = t;
  t = SSLsetAnnotations(m_6, b_31);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,e_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,r_6 = NULL,q_6 = NULL,p_6 = NULL;
  l_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      b_33 = ATgetArgument(t, 0);
      i_33 = ATgetArgument(t, 1);
      j_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_33);
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, b_33, i_33, j_33);
  p_6 = t;
  t = SSLsetAnnotations(p_6, a_33);
  k_33 = t;
  t = save_MarkVar_0_0(t);
  u_31 = t;
  t = k_33;
  if(match_cons(t, sym_PrimT_3))
    {
      v_32 = ATgetArgument(t, 0);
      w_32 = ATgetArgument(t, 1);
      x_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_33);
  u_32 = t;
  t = x_32;
  t = map_1_0(t_2, t);
  y_32 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, v_32, w_32, y_32);
  q_6 = t;
  t = SSLsetAnnotations(q_6, u_32);
  z_32 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      w_31 = ATgetArgument(t, 0);
      e_32 = ATgetArgument(t, 1);
      k_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_32);
  v_31 = t;
  t = e_32;
  t = mark_buv_0_0(t);
  l_32 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, w_31, l_32, k_32);
  r_6 = t;
  t = SSLsetAnnotations(r_6, v_31);
  m_32 = t;
  t = u_31;
  t = isect_MarkVar_0_0(t);
  t = m_32;
  return(t);
}
ATerm alltd_1_0 (ATerm z_102 (ATerm), ATerm t)
{
  static ATerm m_33 (ATerm t)
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_102(t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = SRTS_all(m_33, t);
      }
    return(t);
  }
  t = m_33(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm f_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
  i_37 = t;
  if(match_cons(t, sym_CallT_3))
    {
      j_37 = ATgetArgument(t, 0);
      k_37 = ATgetArgument(t, 1);
      f_37 = ATgetArgument(t, 2);
      {
        ATerm j_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,u_23 = NULL,v_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,d_24 = NULL,x_6 = NULL,w_6 = NULL,v_6 = NULL;
        t = SSLgetAnnotations(i_37);
        z_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, j_37, k_37, f_37);
        v_6 = t;
        t = SSLsetAnnotations(v_6, z_23);
        d_24 = t;
        t = save_MarkVar_0_0(t);
        j_23 = t;
        t = d_24;
        if(match_cons(t, sym_CallT_3))
          {
            s_23 = ATgetArgument(t, 0);
            u_23 = ATgetArgument(t, 1);
            v_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_24);
        r_23 = t;
        t = v_23;
        t = map_1_0(u_2, t);
        x_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, s_23, u_23, x_23);
        w_6 = t;
        t = SSLsetAnnotations(w_6, r_23);
        y_23 = t;
        if(match_cons(t, sym_CallT_3))
          {
            m_23 = ATgetArgument(t, 0);
            n_23 = ATgetArgument(t, 1);
            o_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_23);
        l_23 = t;
        t = n_23;
        t = mark_buv_0_0(t);
        p_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, m_23, p_23, o_23);
        x_6 = t;
        t = SSLsetAnnotations(x_6, l_23);
        q_23 = t;
        t = j_23;
        t = isect_MarkVar_0_0(t);
        t = q_23;
      }
    }
  else
    {
      ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,c_25 = NULL,z_6 = NULL,y_6 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          j_37 = ATgetArgument(t, 0);
          k_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_37);
      y_24 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, j_37, k_37);
      y_6 = t;
      t = SSLsetAnnotations(y_6, y_24);
      c_25 = t;
      t = save_MarkVar_0_0(t);
      s_24 = t;
      t = c_25;
      if(match_cons(t, sym_Call_2))
        {
          u_24 = ATgetArgument(t, 0);
          v_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_25);
      t_24 = t;
      t = v_24;
      t = mark_buv_0_0(t);
      w_24 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, u_24, w_24);
      z_6 = t;
      t = SSLsetAnnotations(z_6, t_24);
      x_24 = t;
      t = s_24;
      t = isect_MarkVar_0_0(t);
      t = x_24;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_f_24;
  return(t);
}
static ATerm z_9 (ATerm w_74, ATerm x_74, ATerm y_74, ATerm t)
{
  ATerm o_37 = NULL;
  static ATerm f_3 (ATerm t)
  {
    t = x_74;
    t = map_1_0(IntroduceBound_0_0, t);
    t = y_74;
    t = mark_build_vars_0_0(t);
    if(((o_37 != NULL) && (o_37 != t)))
      _fail(t);
    else
      o_37 = t;
    return(t);
  }
  t = scope_2_0(v_2, f_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, w_74, x_74, not_null(o_37));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_f_24;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm y_37 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_37);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      {
        ATerm o_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_24);
          }
        else
          {
            t = o_24;
            {
              ATerm q_24 = t;
              int z_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,g_38 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_38 = ATgetArgument(t, 0);
                      d_38 = ATgetArgument(t, 1);
                      e_38 = ATgetArgument(t, 2);
                      g_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_38;
                  t = map_1_0(k_3, t);
                  LocalPopChoice(z_24);
                }
              else
                {
                  t = q_24;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm r_38 = NULL;
  ATerm b_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_38 = ATgetArgument(t, 0);
          {
            ATerm f_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_25);
      t = r_38;
    }
  else
    {
      t = b_25;
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
static ATerm a_10 (ATerm q_74, ATerm u_74, ATerm s_74, ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
  static ATerm h_3 (ATerm t)
  {
    t = q_74;
    t = free_vars_3_0(i_3, j_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = q_74;
    t = mark_match_vars_0_0(t);
    if(((v_37 != NULL) && (v_37 != t)))
      _fail(t);
    else
      v_37 = t;
    t = s_74;
    t = mark_buv_0_0(t);
    if(((w_37 != NULL) && (w_37 != t)))
      _fail(t);
    else
      w_37 = t;
    t = u_74;
    t = mark_build_vars_0_0(t);
    if(((x_37 != NULL) && (x_37 != t)))
      _fail(t);
    else
      x_37 = t;
    return(t);
  }
  t = scope_2_0(g_3, h_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_37), not_null(x_37), not_null(w_37)));
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_f_24;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm g_39 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_39);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm g_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_25);
    }
  else
    {
      t = g_25;
      {
        ATerm m_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_25);
          }
        else
          {
            t = m_25;
            {
              ATerm r_25 = t;
              int s_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,n_39 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_39 = ATgetArgument(t, 0);
                      j_39 = ATgetArgument(t, 1);
                      k_39 = ATgetArgument(t, 2);
                      n_39 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_39;
                  t = map_1_0(x_3, t);
                  LocalPopChoice(s_25);
                }
              else
                {
                  t = r_25;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm b_40 = NULL;
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_40 = ATgetArgument(t, 0);
          {
            ATerm w_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_25);
      t = b_40;
    }
  else
    {
      t = t_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_40;
    }
  return(t);
}
static ATerm b_10 (ATerm k_74, ATerm o_74, ATerm m_74, ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,f_39 = NULL;
  static ATerm u_3 (ATerm t)
  {
    t = k_74;
    t = free_vars_3_0(v_3, w_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = k_74;
    t = mark_match_vars_0_0(t);
    if(((z_38 != NULL) && (z_38 != t)))
      _fail(t);
    else
      z_38 = t;
    t = m_74;
    t = mark_buv_0_0(t);
    if(((a_39 != NULL) && (a_39 != t)))
      _fail(t);
    else
      a_39 = t;
    t = o_74;
    t = mark_build_vars_0_0(t);
    if(((f_39 != NULL) && (f_39 != t)))
      _fail(t);
    else
      f_39 = t;
    return(t);
  }
  t = scope_2_0(l_3, u_3, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_38), not_null(f_39), not_null(a_39)));
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm f_42 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_42);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            {
              ATerm c_26 = t;
              int e_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_42 = ATgetArgument(t, 0);
                      i_42 = ATgetArgument(t, 1);
                      j_42 = ATgetArgument(t, 2);
                      k_42 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_42;
                  t = map_1_0(a_4, t);
                  LocalPopChoice(e_26);
                }
              else
                {
                  t = c_26;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm d_43 = NULL;
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_43 = ATgetArgument(t, 0);
          {
            ATerm i_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_26);
      t = d_43;
    }
  else
    {
      t = g_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_43;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_f_24;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm y_44 = NULL;
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_44 = ATgetArgument(t, 0);
          {
            ATerm l_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_26);
      t = y_44;
    }
  else
    {
      t = j_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_44;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm b_45 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_45);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      {
        ATerm o_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_26);
          }
        else
          {
            t = o_26;
            {
              ATerm s_26 = t;
              int t_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_45 = ATgetArgument(t, 0);
                      i_45 = ATgetArgument(t, 1);
                      j_45 = ATgetArgument(t, 2);
                      k_45 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_45;
                  t = map_1_0(g_4, t);
                  LocalPopChoice(t_26);
                }
              else
                {
                  t = s_26;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm r_45 = NULL;
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_45 = ATgetArgument(t, 0);
          {
            ATerm e_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_27);
      t = r_45;
    }
  else
    {
      t = c_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_45;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,x_40 = NULL,z_40 = NULL,e_41 = NULL,i_41 = NULL,m_41 = NULL,p_41 = NULL,q_41 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      x_40 = ATgetArgument(t, 0);
      z_40 = ATgetArgument(t, 1);
      e_41 = ATgetArgument(t, 2);
      {
        ATerm u_41 = NULL,w_41 = NULL,y_41 = NULL,e_42 = NULL;
        t = e_41;
        if(match_cons(t, sym_Rule_3))
          {
            q_40 = ATgetArgument(t, 0);
            r_40 = ATgetArgument(t, 1);
            s_40 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = e_41;
        t = free_vars_3_0(y_3, z_3, tboundin_3_0, t);
        u_41 = t;
        {
          static ATerm c_4 (ATerm t)
          {
            t = u_41;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = q_40;
            t = mark_match_vars_0_0(t);
            if(((w_41 != NULL) && (w_41 != t)))
              _fail(t);
            else
              w_41 = t;
            t = s_40;
            t = mark_buv_0_0(t);
            if(((y_41 != NULL) && (y_41 != t)))
              _fail(t);
            else
              y_41 = t;
            t = r_40;
            t = mark_build_vars_0_0(t);
            if(((e_42 != NULL) && (e_42 != t)))
              _fail(t);
            else
              e_42 = t;
            return(t);
          }
          t = scope_2_0(b_4, c_4, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, x_40, z_40, (ATerm) ATmakeAppl(sym_Rule_3, not_null(w_41), not_null(e_42), not_null(y_41)));
      }
    }
  else
    {
      ATerm u_43 = NULL,v_43 = NULL,x_43 = NULL,e_44 = NULL,p_44 = NULL,t_44 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          x_40 = ATgetArgument(t, 0);
          z_40 = ATgetArgument(t, 1);
          e_41 = ATgetArgument(t, 2);
          i_41 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = i_41;
      if(match_cons(t, sym_Rule_3))
        {
          m_41 = ATgetArgument(t, 0);
          p_41 = ATgetArgument(t, 1);
          q_41 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = e_41;
      t = map_1_0(d_4, t);
      u_43 = t;
      t = i_41;
      t = free_vars_3_0(e_4, f_4, tboundin_3_0, t);
      t_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_44, u_43);
      t = diff_0_0(t);
      v_43 = t;
      {
        static ATerm i_4 (ATerm t)
        {
          t = u_43;
          t = map_1_0(IntroduceBound_0_0, t);
          t = v_43;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = m_41;
          t = mark_match_vars_0_0(t);
          if(((x_43 != NULL) && (x_43 != t)))
            _fail(t);
          else
            x_43 = t;
          t = q_41;
          t = mark_buv_0_0(t);
          if(((e_44 != NULL) && (e_44 != t)))
            _fail(t);
          else
            e_44 = t;
          t = p_41;
          t = mark_build_vars_0_0(t);
          if(((p_44 != NULL) && (p_44 != t)))
            _fail(t);
          else
            p_44 = t;
          return(t);
        }
        t = scope_2_0(h_4, i_4, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, x_40, z_40, e_41, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_43), not_null(p_44), not_null(e_44)));
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
  w_45 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_45);
  x_45 = t;
  t = term_i_27;
  y_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_45), term_i_27);
  t = k_10(j_4, x_45, y_45, t);
  t = w_45;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm l_46 = NULL;
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_46 = ATgetArgument(t, 0);
          {
            ATerm y_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_27);
      t = l_46;
    }
  else
    {
      t = w_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_46;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_f_24;
  return(t);
}
static ATerm c_10 (ATerm i_73, ATerm j_73, ATerm k_73, ATerm m_73, ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL;
  t = k_73;
  t = map_1_0(k_4, t);
  e_46 = t;
  {
    static ATerm m_4 (ATerm t)
    {
      t = e_46;
      t = map_1_0(IntroduceBound_0_0, t);
      t = m_73;
      t = mark_buv_0_0(t);
      if(((f_46 != NULL) && (f_46 != t)))
        _fail(t);
      else
        f_46 = t;
      return(t);
    }
    t = scope_2_0(l_4, m_4, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, i_73, j_73, k_73, not_null(f_46));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,f_48 = NULL;
  t_47 = t;
  if(match_cons(t, sym__2))
    {
      u_47 = ATgetArgument(t, 0);
      z_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_47;
  if(match_cons(t, sym_Undefined_0))
    {
      t = u_47;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_z_27;
        }
      else
        {
          t = term_z_27;
        }
    }
  else
    {
      ATerm l_28 = t;
      int m_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm o_28 = ATgetArgument(t, 0);
              f_48 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(m_28);
          t = u_47;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_z_27;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  x_47 = ATgetArgument(t, 0);
                  y_47 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm q_28 = t;
                int r_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, y_47, f_48);
                    {
                      ATerm x_28 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm b_26 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              b_26 = ATgetArgument(t, 0);
                              if((b_26 != ATgetArgument(t, 1)))
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
                          t = x_28;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, x_47, term_z_28);
                    LocalPopChoice(r_28);
                  }
                else
                  {
                    t = q_28;
                    t = f_48;
                    if((y_47 != t))
                      {
                        _fail(t);
                      }
                    t = u_47;
                  }
              }
            }
        }
      else
        {
          t = l_28;
          t = u_47;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_z_27;
        }
    }
  return(t);
}
static ATerm d_10 (ATerm t_71, ATerm u_71, ATerm s_71, ATerm t)
{
  ATerm o_48 = NULL,r_48 = NULL,s_48 = NULL;
  t = term_f_24;
  s_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_24, t_71);
  t = l_11(s_48, t_71, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_48 = ATgetFirst((ATermList) t);
      {
        ATerm a_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_71, o_48);
  t = CompareEntries_0_0(t);
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_71, (ATerm) ATinsert(CheckATermList(s_71), r_48));
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,v_49 = NULL,w_49 = NULL;
  w_49 = t;
  if(match_cons(t, sym__2))
    {
      i_49 = ATgetArgument(t, 0);
      j_49 = ATgetArgument(t, 1);
      t = j_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_49 = ATgetFirst((ATermList) t);
          v_49 = (ATerm) ATgetNext((ATermList) t);
          t = k_49;
          {
            ATerm d_29 = t;
            int o_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm p_29 = ATgetArgument(t, 0);
                    ATerm q_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(o_29);
                t = i_49;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = w_49;
                  }
                else
                  {
                    ATerm s_29 = t;
                    int v_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = w_49;
                        t = d_10(i_49, k_49, v_49, t);
                        LocalPopChoice(v_29);
                      }
                    else
                      {
                        t = s_29;
                        t = w_49;
                      }
                  }
              }
            else
              {
                t = d_29;
                t = i_49;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = w_49;
                  }
                else
                  {
                    t = w_49;
                  }
              }
          }
        }
      else
        {
          t = i_49;
          if(match_cons(t, sym_Scopes_0))
            {
              t = w_49;
            }
          else
            {
              t = w_49;
            }
        }
    }
  else
    {
      t = w_49;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL;
  t = map_1_0(n_4, t);
  g_49 = t;
  t = term_f_24;
  t = table_destroy_0_0(t);
  t = term_f_24;
  h_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_24, g_49);
  t = e_10(h_49, g_49, t);
  t = g_49;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm j_51 = NULL,l_51 = NULL,n_51 = NULL;
  n_51 = t;
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm q_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_30);
        t = n_51;
      }
    else
      {
        t = o_30;
        {
          ATerm r_30 = t;
          int t_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm u_30 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(t_30);
              t = n_51;
            }
          else
            {
              t = r_30;
              {
                ATerm v_30 = t;
                int z_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm e_31 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(z_30);
                    t = n_51;
                  }
                else
                  {
                    t = v_30;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm f_31 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = n_51;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  j_51 = t;
  t = n_51;
  t = SRTS_one(mark_buv_0_0, t);
  l_51 = t;
  t = j_51;
  t = isect_MarkVar_0_0(t);
  t = l_51;
  return(t);
}
static ATerm e_10 (ATerm f_33, ATerm e_33, ATerm t)
{
  static ATerm o_4 (ATerm t)
  {
    ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL;
    if(match_cons(t, sym__2))
      {
        r_51 = ATgetArgument(t, 0);
        s_51 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, f_33, r_51, s_51);
    t = lookup_table_0_1(f_33, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        t_51 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = p_11(r_51, s_51, t_51, t);
    t = (ATerm) ATmakeAppl(sym__3, f_33, r_51, s_51);
    return(t);
  }
  t = e_33;
  t = map_1_0(o_4, t);
  return(t);
}
static ATerm f_10 (ATerm b_36, ATerm t)
{
  t = SSL_hashtable_keys(b_36);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL;
  static ATerm p_4 (ATerm t)
  {
    ATerm d_52 = NULL,g_52 = NULL;
    d_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_51), d_52);
    t = l_11(not_null(y_51), d_52, t);
    g_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_52, g_52);
    return(t);
  }
  if(((y_51 != NULL) && (y_51 != t)))
    _fail(t);
  else
    y_51 = t;
  t = lookup_table_0_1(y_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_10(z_51, t);
  t = map_1_0(p_4, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_f_24;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm g_72, ATerm t)
{
  ATerm r_52 = NULL,v_52 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm q_4 (ATerm t)
    {
      static ATerm s_53 (ATerm w_52, ATerm t)
      {
        ATerm x_52 = NULL,z_52 = NULL,a_53 = NULL,d_53 = NULL;
        t = w_52;
        if(match_cons(t, sym__2))
          {
            ATerm g_31 = ATgetArgument(t, 0);
            x_52 = g_31;
            if(match_cons(g_31, sym_Var_1))
              {
                z_52 = ATgetArgument(g_31, 0);
              }
            else
              _fail(t);
            {
              ATerm h_31 = ATgetArgument(t, 1);
              if(((ATgetType(h_31) == AT_LIST) && !(ATisEmpty(h_31))))
                {
                  ATerm i_31 = ATgetFirst((ATermList) h_31);
                  if(match_cons(i_31, sym_Defined_2))
                    {
                      a_53 = ATgetArgument(i_31, 0);
                      {
                        ATerm k_31 = ATgetArgument(i_31, 1);
                        if((ATgetSymbol((ATermAppl) k_31) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  d_53 = (ATerm) ATgetNext((ATermList) h_31);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_72;
        {
          static ATerm r_4 (ATerm t)
          {
            if((z_52 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(r_4, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, x_52, (ATerm) ATinsert(CheckATermList(d_53), (ATerm) ATmakeAppl(sym_Defined_2, a_53, term_z_28)));
        return(t);
      }
      ATerm j_53 = NULL,n_53 = NULL;
      n_53 = t;
      {
        ATerm m_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                j_53 = ATgetArgument(t, 0);
                {
                  ATerm s_31 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(n_31);
            t = j_53;
            if(match_cons(t, sym_Scopes_0))
              {
                t = n_53;
              }
            else
              {
                ATerm x_31 = t;
                int y_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = s_53(n_53, t);
                    LocalPopChoice(y_31);
                  }
                else
                  {
                    t = x_31;
                    t = n_53;
                  }
              }
          }
        else
          {
            t = m_31;
            {
              ATerm z_31 = t;
              int f_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_53(n_53, t);
                  LocalPopChoice(f_32);
                }
              else
                {
                  t = z_31;
                  t = n_53;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(q_4, t);
  }
  r_52 = t;
  t = term_f_24;
  t = table_destroy_0_0(t);
  t = term_f_24;
  v_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_24, r_52);
  t = e_10(v_52, r_52, t);
  t = r_52;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm b_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_55);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm g_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_32);
    }
  else
    {
      t = g_32;
      {
        ATerm c_33 = t;
        int d_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_33);
          }
        else
          {
            t = c_33;
            {
              ATerm g_33 = t;
              int h_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL,j_55 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_55 = ATgetArgument(t, 0);
                      g_55 = ATgetArgument(t, 1);
                      h_55 = ATgetArgument(t, 2);
                      j_55 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_55;
                  t = map_1_0(u_4, t);
                  LocalPopChoice(h_33);
                }
              else
                {
                  t = g_33;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm d_56 = NULL;
  ATerm n_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_56 = ATgetArgument(t, 0);
          {
            ATerm q_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_33);
      t = d_56;
    }
  else
    {
      t = n_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_56;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm y_53 = NULL,a_54 = NULL,b_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,m_7 = NULL,l_7 = NULL;
  y_54 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_54 = ATgetArgument(t, 0);
      w_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_54);
  r_54 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, s_54, w_54);
  l_7 = t;
  t = SSLsetAnnotations(l_7, r_54);
  x_54 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_54 = ATgetArgument(t, 0);
      {
        ATerm s_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_54;
  t = free_vars_3_0(s_4, t_4, tboundin_3_0, t);
  y_53 = t;
  t = undefine_unbound_MarkVar_0_1(y_53, t);
  a_54 = t;
  t = x_54;
  if(match_cons(t, sym_Let_2))
    {
      i_54 = ATgetArgument(t, 0);
      j_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_54);
  h_54 = t;
  t = i_54;
  {
    static ATerm v_4 (ATerm t)
    {
      ATerm j_56 = NULL,k_56 = NULL;
      j_56 = t;
      t = term_f_24;
      t = table_destroy_0_0(t);
      t = term_f_24;
      k_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_f_24, a_54);
      t = e_10(k_56, a_54, t);
      t = j_56;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(v_4, t);
  }
  o_54 = t;
  t = term_f_24;
  t = table_destroy_0_0(t);
  t = term_f_24;
  q_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_24, a_54);
  t = e_10(q_54, a_54, t);
  t = j_54;
  t = mark_buv_0_0(t);
  p_54 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, o_54, p_54);
  m_7 = t;
  t = SSLsetAnnotations(m_7, h_54);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL,q_7 = NULL;
      q_56 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_56);
      o_56 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, p_56);
      q_7 = t;
      t = SSLsetAnnotations(q_7, o_56);
      LocalPopChoice(u_33);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = t_33;
      {
        ATerm a_34 = t;
        int b_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_56 = NULL,s_56 = NULL,w_56 = NULL,x_56 = NULL,r_7 = NULL;
            x_56 = t;
            if(match_cons(t, sym_App_2))
              {
                s_56 = ATgetArgument(t, 0);
                w_56 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_56);
            r_56 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, s_56, w_56);
            r_7 = t;
            t = SSLsetAnnotations(r_7, r_56);
            LocalPopChoice(b_34);
            {
              ATerm b_57 = NULL,c_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,s_7 = NULL;
              h_57 = t;
              if(match_cons(t, sym_App_2))
                {
                  c_57 = ATgetArgument(t, 0);
                  e_57 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_57);
              b_57 = t;
              t = c_57;
              t = mark_buv_0_0(t);
              f_57 = t;
              t = e_57;
              t = mark_build_vars_0_0(t);
              g_57 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, f_57, g_57);
              s_7 = t;
              t = SSLsetAnnotations(s_7, b_57);
            }
          }
        else
          {
            t = a_34;
            {
              ATerm c_34 = t;
              int d_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_57 = NULL,j_57 = NULL,u_57 = NULL,t_7 = NULL;
                  u_57 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      j_57 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_57);
                  i_57 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, j_57);
                  t_7 = t;
                  t = SSLsetAnnotations(t_7, i_57);
                  LocalPopChoice(d_34);
                  {
                    ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,v_7 = NULL;
                    a_58 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        y_57 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(a_58);
                    x_57 = t;
                    t = y_57;
                    t = mark_buv_0_0(t);
                    z_57 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, z_57);
                    v_7 = t;
                    t = SSLsetAnnotations(v_7, x_57);
                  }
                }
              else
                {
                  t = c_34;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_10 (ATerm p_32, ATerm q_32, ATerm r_32, ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,h_58 = NULL,i_58 = NULL;
  c_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_32, q_32);
  t = l_11(p_32, q_32, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_34 = ATgetFirst((ATermList) t);
      b_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_32, q_32, (ATerm) ATinsert(CheckATermList(b_58), r_32));
  t = lookup_table_0_1(p_32, t);
  i_58 = t;
  t = (ATerm) ATinsert(CheckATermList(b_58), r_32);
  d_58 = t;
  t = i_58;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(q_32, d_58, h_58, t);
  t = c_58;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm k_58 = NULL,m_58 = NULL,q_58 = NULL,r_58 = NULL;
  k_58 = t;
  t = term_f_24;
  m_58 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_58);
  q_58 = t;
  t = term_g_34;
  r_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_24, (ATerm)ATmakeAppl(sym_Var_1, k_58), term_g_34);
  t = g_10(m_58, q_58, r_58, t);
  t = k_58;
  return(t);
}
static ATerm j_10 (ATerm n_32, ATerm o_32, ATerm t)
{
  ATerm s_58 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_32, o_32);
  t = l_11(n_32, o_32, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_58 = ATgetFirst((ATermList) t);
      {
        ATerm h_34 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_58;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL;
  n_60 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_27 = NULL,p_27 = NULL,t_27 = NULL,k_28 = NULL;
        t = term_f_24;
        k_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_24, n_60);
        t = j_10(k_28, n_60, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm k_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_34) != ATmakeSymbol("l_1", 0, ATtrue)))
              _fail(t);
            l_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, o_60);
        p_27 = t;
        t = (ATerm) ATinsert(ATempty, l_27);
        t_27 = t;
        t = SSLsetAnnotations(p_27, t_27);
        LocalPopChoice(j_34);
      }
    else
      {
        t = i_34;
        {
          ATerm l_34 = t;
          int m_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_28 = NULL,t_28 = NULL,v_28 = NULL,f_29 = NULL;
              t = term_f_24;
              f_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_f_24, n_60);
              t = j_10(f_29, n_60, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm n_34 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) n_34) != ATmakeSymbol("j_1", 0, ATtrue)))
                    _fail(t);
                  s_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, o_60);
              t_28 = t;
              t = (ATerm) ATinsert(ATempty, s_28);
              v_28 = t;
              t = SSLsetAnnotations(t_28, v_28);
              LocalPopChoice(m_34);
            }
          else
            {
              t = l_34;
              {
                ATerm a_30 = NULL,m_30 = NULL,n_30 = NULL,s_30 = NULL;
                t = term_f_24;
                s_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_24, n_60);
                t = j_10(s_30, n_60, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm o_34 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) o_34) != ATmakeSymbol("h_1", 0, ATtrue)))
                      _fail(t);
                    a_30 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, o_60);
                m_30 = t;
                t = (ATerm) ATinsert(ATempty, a_30);
                n_30 = t;
                t = SSLsetAnnotations(m_30, n_30);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,z_60 = NULL,a_61 = NULL,d_8 = NULL;
  ATerm q_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(r_34);
    }
  else
    {
      t = q_34;
    }
  a_61 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_61);
  v_60 = t;
  t = w_60;
  t = DeclareBound_0_0(t);
  z_60 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_60);
  d_8 = t;
  t = SSLsetAnnotations(d_8, v_60);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_61 = NULL,r_61 = NULL,v_61 = NULL,x_8 = NULL;
      v_61 = t;
      if(match_cons(t, sym_Var_1))
        {
          r_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_61);
      q_61 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, r_61);
      x_8 = t;
      t = SSLsetAnnotations(x_8, q_61);
      LocalPopChoice(t_34);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = s_34;
      {
        ATerm v_34 = t;
        int x_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,j_9 = NULL;
            b_62 = t;
            if(match_cons(t, sym_App_2))
              {
                z_61 = ATgetArgument(t, 0);
                a_62 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_62);
            w_61 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, z_61, a_62);
            j_9 = t;
            t = SSLsetAnnotations(j_9, w_61);
            LocalPopChoice(x_34);
            {
              ATerm d_62 = NULL,e_62 = NULL,j_62 = NULL,k_62 = NULL,q_62 = NULL,r_62 = NULL,t_10 = NULL;
              r_62 = t;
              if(match_cons(t, sym_App_2))
                {
                  e_62 = ATgetArgument(t, 0);
                  j_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_62);
              d_62 = t;
              t = e_62;
              t = mark_buv_0_0(t);
              k_62 = t;
              t = j_62;
              t = mark_build_vars_0_0(t);
              q_62 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, k_62, q_62);
              t_10 = t;
              t = SSLsetAnnotations(t_10, d_62);
            }
          }
        else
          {
            t = v_34;
            {
              ATerm y_34 = t;
              int b_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_11 = NULL;
                  w_62 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      v_62 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_62);
                  u_62 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, v_62);
                  x_11 = t;
                  t = SSLsetAnnotations(x_11, u_62);
                  LocalPopChoice(b_35);
                  {
                    ATerm z_62 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,y_11 = NULL;
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
                    y_11 = t;
                    t = SSLsetAnnotations(y_11, z_62);
                  }
                }
              else
                {
                  t = y_34;
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
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_64 = NULL,v_64 = NULL;
      u_64 = t;
      if(match_cons(t, sym_Match_1))
        {
          v_64 = ATgetArgument(t, 0);
          {
            ATerm x_30 = NULL,a_31 = NULL,f_12 = NULL;
            t = SSLgetAnnotations(u_64);
            x_30 = t;
            t = v_64;
            t = mark_match_vars_0_0(t);
            a_31 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, a_31);
            f_12 = t;
            t = SSLsetAnnotations(f_12, x_30);
          }
        }
      else
        {
          ATerm j_31 = NULL,l_31 = NULL,g_12 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              v_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_64);
          j_31 = t;
          t = v_64;
          t = mark_build_vars_0_0(t);
          l_31 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, l_31);
          g_12 = t;
          t = SSLsetAnnotations(g_12, j_31);
        }
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
            t = mark_scope_0_0(t);
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
                  t = mark_let_0_0(t);
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
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(j_35);
                      }
                    else
                      {
                        t = i_35;
                        {
                          ATerm k_35 = t;
                          int l_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_64 = NULL,x_64 = NULL,a_65 = NULL,c_65 = NULL,h_65 = NULL;
                              w_64 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  x_64 = ATgetArgument(t, 0);
                                  a_65 = ATgetArgument(t, 1);
                                  c_65 = ATgetArgument(t, 2);
                                  h_65 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = w_64;
                              t = c_10(x_64, a_65, c_65, h_65, t);
                              LocalPopChoice(l_35);
                            }
                          else
                            {
                              t = k_35;
                              {
                                ATerm m_35 = t;
                                int n_35 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(n_35);
                                  }
                                else
                                  {
                                    t = m_35;
                                    {
                                      ATerm o_35 = t;
                                      int p_35 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,w_65 = NULL;
                                          p_65 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              q_65 = ATgetArgument(t, 0);
                                              t = q_65;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  m_65 = ATgetArgument(t, 0);
                                                  n_65 = ATgetArgument(t, 1);
                                                  o_65 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = p_65;
                                              t = b_10(m_65, n_65, o_65, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  q_65 = ATgetArgument(t, 0);
                                                  t = q_65;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      m_65 = ATgetArgument(t, 0);
                                                      n_65 = ATgetArgument(t, 1);
                                                      o_65 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = p_65;
                                                  t = a_10(m_65, n_65, o_65, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      q_65 = ATgetArgument(t, 0);
                                                      r_65 = ATgetArgument(t, 1);
                                                      w_65 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = p_65;
                                                  t = z_9(q_65, r_65, w_65, t);
                                                }
                                            }
                                          LocalPopChoice(p_35);
                                        }
                                      else
                                        {
                                          t = o_35;
                                          {
                                            ATerm q_35 = t;
                                            int r_35 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(r_35);
                                              }
                                            else
                                              {
                                                t = q_35;
                                                {
                                                  ATerm s_35 = t;
                                                  int t_35 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(t_35);
                                                    }
                                                  else
                                                    {
                                                      t = s_35;
                                                      {
                                                        ATerm f_36 = t;
                                                        int g_36 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm j_66 = NULL;
                                                            j_66 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm h_36 = ATgetArgument(t, 0);
                                                                ATerm i_36 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = j_66;
                                                            t = y_9(t);
                                                            LocalPopChoice(g_36);
                                                          }
                                                        else
                                                          {
                                                            t = f_36;
                                                            {
                                                              ATerm j_36 = t;
                                                              int k_36 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(k_36);
                                                                }
                                                              else
                                                                {
                                                                  t = j_36;
                                                                  {
                                                                    ATerm l_36 = t;
                                                                    int m_36 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(m_36);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_36;
                                                                        {
                                                                          ATerm n_36 = t;
                                                                          int o_36 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(o_36);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_36;
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
static ATerm k_10 (ATerm x_100 (ATerm), ATerm y_30, ATerm w_30, ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,d_67 = NULL,f_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL;
  d_67 = t;
  t = x_100(t);
  y_66 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_66, y_30, w_30);
  t = m_11(y_66, y_30, w_30, t);
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_67 = NULL;
        t = term_r_36;
        n_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_66, term_r_36);
        t = l_11(y_66, n_67, t);
        LocalPopChoice(q_36);
      }
    else
      {
        t = p_36;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_66 = ATgetFirst((ATermList) t);
      a_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_66, term_r_36, (ATerm) ATinsert(CheckATermList(a_67), (ATerm) ATinsert(CheckATermList(z_66), y_30)));
  t = lookup_table_0_1(y_66, t);
  m_67 = t;
  t = term_r_36;
  f_67 = t;
  t = (ATerm) ATinsert(CheckATermList(a_67), (ATerm) ATinsert(CheckATermList(z_66), y_30));
  k_67 = t;
  t = m_67;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(f_67, k_67, l_67, t);
  t = d_67;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL;
  o_67 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_67);
  p_67 = t;
  t = term_v_36;
  q_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_67), term_v_36);
  t = k_10(w_4, p_67, q_67, t);
  t = o_67;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,z_67 = NULL,j_12 = NULL;
  z_67 = t;
  if(match_cons(t, sym_Scope_2))
    {
      s_67 = ATgetArgument(t, 0);
      t_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_67);
  r_67 = t;
  t = t_67;
  {
    static ATerm c_5 (ATerm t)
    {
      ATerm e_68 = NULL;
      e_68 = t;
      t = s_67;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = e_68;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(b_5, c_5, t);
  }
  u_67 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, s_67, u_67);
  j_12 = t;
  t = SSLsetAnnotations(j_12, r_67);
  return(t);
}
ATerm tboundin_3_0 (ATerm z_119 (ATerm), ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm t)
{
  ATerm e_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL;
  h_79 = t;
  if(match_cons(t, sym_Scope_2))
    {
      i_79 = ATgetArgument(t, 0);
      e_79 = ATgetArgument(t, 1);
      {
        ATerm a_32 = NULL,j_32 = NULL,s_32 = NULL,m_12 = NULL;
        t = SSLgetAnnotations(h_79);
        a_32 = t;
        t = i_79;
        t = b_120(t);
        j_32 = t;
        t = e_79;
        t = z_119(t);
        s_32 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_32, s_32);
        m_12 = t;
        t = SSLsetAnnotations(m_12, a_32);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          i_79 = ATgetArgument(t, 0);
          e_79 = ATgetArgument(t, 1);
          f_79 = ATgetArgument(t, 2);
          {
            ATerm r_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,n_12 = NULL;
            t = SSLgetAnnotations(h_79);
            r_33 = t;
            t = i_79;
            t = b_120(t);
            x_33 = t;
            t = e_79;
            t = b_120(t);
            y_33 = t;
            t = f_79;
            t = b_120(t);
            z_33 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, x_33, y_33, z_33);
            n_12 = t;
            t = SSLsetAnnotations(n_12, r_33);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              i_79 = ATgetArgument(t, 0);
              e_79 = ATgetArgument(t, 1);
              f_79 = ATgetArgument(t, 2);
              g_79 = ATgetArgument(t, 3);
              {
                ATerm p_34 = NULL,u_34 = NULL,w_34 = NULL,z_34 = NULL,a_35 = NULL,p_12 = NULL;
                t = SSLgetAnnotations(h_79);
                p_34 = t;
                t = i_79;
                t = b_120(t);
                u_34 = t;
                t = e_79;
                t = b_120(t);
                w_34 = t;
                t = f_79;
                t = b_120(t);
                z_34 = t;
                t = g_79;
                t = z_119(t);
                a_35 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, u_34, w_34, z_34, a_35);
                p_12 = t;
                t = SSLsetAnnotations(p_12, p_34);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  i_79 = ATgetArgument(t, 0);
                  e_79 = ATgetArgument(t, 1);
                  f_79 = ATgetArgument(t, 2);
                  g_79 = ATgetArgument(t, 3);
                  {
                    ATerm t_36 = NULL,g_37 = NULL,h_37 = NULL,m_37 = NULL,p_37 = NULL,u_12 = NULL;
                    t = SSLgetAnnotations(h_79);
                    t_36 = t;
                    t = i_79;
                    t = b_120(t);
                    g_37 = t;
                    t = e_79;
                    t = b_120(t);
                    h_37 = t;
                    t = f_79;
                    t = b_120(t);
                    m_37 = t;
                    t = g_79;
                    t = z_119(t);
                    p_37 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, g_37, h_37, m_37, p_37);
                    u_12 = t;
                    t = SSLsetAnnotations(u_12, t_36);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      i_79 = ATgetArgument(t, 0);
                      {
                        ATerm i_38 = NULL,k_38 = NULL,z_12 = NULL;
                        t = SSLgetAnnotations(h_79);
                        i_38 = t;
                        t = i_79;
                        t = z_119(t);
                        k_38 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, k_38);
                        z_12 = t;
                        t = SSLsetAnnotations(z_12, i_38);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          i_79 = ATgetArgument(t, 0);
                          {
                            ATerm y_38 = NULL,c_39 = NULL,b_13 = NULL;
                            t = SSLgetAnnotations(h_79);
                            y_38 = t;
                            t = i_79;
                            t = z_119(t);
                            c_39 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, c_39);
                            b_13 = t;
                            t = SSLsetAnnotations(b_13, y_38);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              i_79 = ATgetArgument(t, 0);
                              {
                                ATerm t_39 = NULL,x_39 = NULL,m_13 = NULL;
                                t = SSLgetAnnotations(h_79);
                                t_39 = t;
                                t = i_79;
                                t = z_119(t);
                                x_39 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, x_39);
                                m_13 = t;
                                t = SSLsetAnnotations(m_13, t_39);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  i_79 = ATgetArgument(t, 0);
                                  {
                                    ATerm f_40 = NULL,i_40 = NULL,x_13 = NULL;
                                    t = SSLgetAnnotations(h_79);
                                    f_40 = t;
                                    t = i_79;
                                    t = z_119(t);
                                    i_40 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, i_40);
                                    x_13 = t;
                                    t = SSLsetAnnotations(x_13, f_40);
                                  }
                                }
                              else
                                {
                                  ATerm o_40 = NULL,t_40 = NULL,e_14 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      i_79 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(h_79);
                                  o_40 = t;
                                  t = i_79;
                                  t = z_119(t);
                                  t_40 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, t_40);
                                  e_14 = t;
                                  t = SSLsetAnnotations(e_14, o_40);
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
static ATerm e_5 (ATerm t)
{
  ATerm t_80 = NULL;
  ATerm w_36 = t;
  int x_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_80 = ATgetArgument(t, 0);
          {
            ATerm y_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_36);
      t = t_80;
    }
  else
    {
      t = w_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_80;
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm g_81 = NULL;
  ATerm z_36 = t;
  int a_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_81 = ATgetArgument(t, 0);
          {
            ATerm b_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_37);
      t = g_81;
    }
  else
    {
      t = z_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_81;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm m_80 = NULL;
  ATerm c_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm e_37 = ATgetArgument(t, 0);
          ATerm l_37 = ATgetArgument(t, 1);
          m_80 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(d_37);
      t = m_80;
      t = map_1_0(e_5, t);
    }
  else
    {
      t = c_37;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm n_37 = ATgetArgument(t, 0);
          ATerm q_37 = ATgetArgument(t, 1);
          m_80 = ATgetArgument(t, 2);
          {
            ATerm r_37 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = m_80;
      t = map_1_0(f_5, t);
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm q_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_82);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_37);
    }
  else
    {
      t = s_37;
      {
        ATerm u_37 = t;
        int z_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_37);
          }
        else
          {
            t = u_37;
            {
              ATerm a_38 = t;
              int b_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_82 = ATgetArgument(t, 0);
                      y_82 = ATgetArgument(t, 1);
                      z_82 = ATgetArgument(t, 2);
                      a_83 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_82;
                  t = map_1_0(l_5, t);
                  LocalPopChoice(b_38);
                }
              else
                {
                  t = a_38;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm k_83 = NULL;
  ATerm f_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_83 = ATgetArgument(t, 0);
          {
            ATerm j_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_38);
      t = k_83;
    }
  else
    {
      t = f_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_83;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm o_83 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_83);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm l_38 = t;
  int m_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(o_38);
          }
        else
          {
            t = n_38;
            {
              ATerm p_38 = t;
              int q_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_83 = ATgetArgument(t, 0);
                      t_83 = ATgetArgument(t, 1);
                      u_83 = ATgetArgument(t, 2);
                      v_83 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_83;
                  t = map_1_0(y_5, t);
                  LocalPopChoice(q_38);
                }
              else
                {
                  t = p_38;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm c_84 = NULL;
  ATerm s_38 = t;
  int t_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_84 = ATgetArgument(t, 0);
          {
            ATerm u_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_38);
      t = c_84;
    }
  else
    {
      t = s_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_84;
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm g_84 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_84);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm v_38 = t;
  int w_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_38);
    }
  else
    {
      t = v_38;
      {
        ATerm x_38 = t;
        int b_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_39);
          }
        else
          {
            t = x_38;
            {
              ATerm d_39 = t;
              int e_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_84 = ATgetArgument(t, 0);
                      j_84 = ATgetArgument(t, 1);
                      k_84 = ATgetArgument(t, 2);
                      l_84 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_84;
                  t = map_1_0(b_6, t);
                  LocalPopChoice(e_39);
                }
              else
                {
                  t = d_39;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm s_84 = NULL;
  ATerm h_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_84 = ATgetArgument(t, 0);
          {
            ATerm m_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_39);
      t = s_84;
    }
  else
    {
      t = h_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_84;
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm w_84 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_84);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
      {
        ATerm q_39 = t;
        int r_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_39);
          }
        else
          {
            t = q_39;
            {
              ATerm s_39 = t;
              int u_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_84 = ATgetArgument(t, 0);
                      z_84 = ATgetArgument(t, 1);
                      a_85 = ATgetArgument(t, 2);
                      b_85 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_85;
                  t = map_1_0(e_6, t);
                  LocalPopChoice(u_39);
                }
              else
                {
                  t = s_39;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm i_85 = NULL;
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_85 = ATgetArgument(t, 0);
          {
            ATerm y_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_39);
      t = i_85;
    }
  else
    {
      t = v_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_85;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm m_85 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_85);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm z_39 = t;
  int a_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_40);
    }
  else
    {
      t = z_39;
      {
        ATerm c_40 = t;
        int d_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_40);
          }
        else
          {
            t = c_40;
            {
              ATerm e_40 = t;
              int g_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_85 = ATgetArgument(t, 0);
                      p_85 = ATgetArgument(t, 1);
                      q_85 = ATgetArgument(t, 2);
                      r_85 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_85;
                  t = map_1_0(k_6, t);
                  LocalPopChoice(g_40);
                }
              else
                {
                  t = e_40;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm y_85 = NULL;
  ATerm h_40 = t;
  int j_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_85 = ATgetArgument(t, 0);
          {
            ATerm k_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_40);
      t = y_85;
    }
  else
    {
      t = h_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_85;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm i_82 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      i_82 = ATgetArgument(t, 0);
      t = i_82;
      t = free_vars_3_0(j_5, k_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          i_82 = ATgetArgument(t, 0);
          t = i_82;
          t = free_vars_3_0(o_5, w_5, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              i_82 = ATgetArgument(t, 0);
              t = i_82;
              t = free_vars_3_0(z_5, a_6, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  i_82 = ATgetArgument(t, 0);
                  t = i_82;
                  t = free_vars_3_0(c_6, d_6, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      i_82 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_82;
                  t = free_vars_3_0(i_6, j_6, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm m_86 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_86);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm l_40 = t;
  int m_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_40);
    }
  else
    {
      t = l_40;
      {
        ATerm n_40 = t;
        int p_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_40);
          }
        else
          {
            t = n_40;
            {
              ATerm u_40 = t;
              int v_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL,r_86 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_86 = ATgetArgument(t, 0);
                      p_86 = ATgetArgument(t, 1);
                      q_86 = ATgetArgument(t, 2);
                      r_86 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_86;
                  t = map_1_0(s_6, t);
                  LocalPopChoice(v_40);
                }
              else
                {
                  t = u_40;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm y_86 = NULL;
  ATerm w_40 = t;
  int y_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_86 = ATgetArgument(t, 0);
          {
            ATerm a_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_40);
      t = y_86;
    }
  else
    {
      t = w_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_86;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm f_86 = NULL,j_86 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      j_86 = ATgetArgument(t, 0);
      t = j_86;
      if(match_cons(t, sym_Rule_3))
        {
          f_86 = ATgetArgument(t, 0);
          {
            ATerm b_41 = ATgetArgument(t, 1);
          }
          {
            ATerm c_41 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = f_86;
      t = free_vars_3_0(n_6, o_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          j_86 = ATgetArgument(t, 0);
          {
            ATerm f_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_86;
    }
  return(t);
}
static ATerm n_10 (ATerm s_96 (ATerm), ATerm k_25, ATerm j_25, ATerm t)
{
  static ATerm r_87 (ATerm t)
  {
    ATerm m_87 = NULL,n_87 = NULL,o_87 = NULL;
    m_87 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_87 = ATgetFirst((ATermList) t);
            o_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_41 = t;
          int l_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_87;
              {
                static ATerm t_6 (ATerm t)
                {
                  t = j_25;
                  return(t);
                }
                t = o_10(s_96, t_6, n_87, o_87, t);
              }
              t = r_87(t);
              LocalPopChoice(l_41);
            }
          else
            {
              t = j_41;
              {
                ATerm d_41 = NULL,k_41 = NULL,h_16 = NULL;
                t = SSLgetAnnotations(m_87);
                d_41 = t;
                t = o_87;
                t = r_87(t);
                k_41 = t;
                t = (ATerm) ATinsert(CheckATermList(k_41), n_87);
                h_16 = t;
                t = SSLsetAnnotations(h_16, d_41);
              }
            }
        }
      }
    return(t);
  }
  t = k_25;
  t = r_87(t);
  return(t);
}
ATerm foldr_3_0 (ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm p_99 (ATerm), ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL;
  u_87 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_87;
      t = n_99(t);
    }
  else
    {
      ATerm z_87 = NULL,a_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_87 = ATgetFirst((ATermList) t);
          w_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_87;
      t = p_99(t);
      z_87 = t;
      t = w_87;
      t = foldr_3_0(n_99, o_99, p_99, t);
      a_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_87, a_88);
      t = o_99(t);
    }
  return(t);
}
static ATerm o_10 (ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm o_25, ATerm n_25, ATerm t)
{
  t = w_96(t);
  {
    static ATerm u_6 (ATerm t)
    {
      ATerm d_88 = NULL;
      d_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_25, d_88);
      t = v_96(t);
      return(t);
    }
    t = fetch_1_0(u_6, t);
  }
  t = n_25;
  return(t);
}
static ATerm p_10 (ATerm n_96 (ATerm), ATerm i_25, ATerm h_25, ATerm t)
{
  static ATerm t_88 (ATerm t)
  {
    ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL;
    o_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_88;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_88 = ATgetFirst((ATermList) t);
            q_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_41 = t;
          int o_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_88;
              {
                static ATerm a_7 (ATerm t)
                {
                  t = h_25;
                  return(t);
                }
                t = o_10(n_96, a_7, p_88, q_88, t);
              }
              t = t_88(t);
              LocalPopChoice(o_41);
            }
          else
            {
              t = n_41;
              {
                ATerm l_42 = NULL,s_42 = NULL,l_16 = NULL;
                t = SSLgetAnnotations(o_88);
                l_42 = t;
                t = q_88;
                t = t_88(t);
                s_42 = t;
                t = (ATerm) ATinsert(CheckATermList(s_42), p_88);
                l_16 = t;
                t = SSLsetAnnotations(l_16, l_42);
              }
            }
        }
      }
    return(t);
  }
  t = i_25;
  t = t_88(t);
  return(t);
}
ATerm genzip_4_0 (ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm c_112 (ATerm), ATerm t)
{
  static ATerm b_89 (ATerm t)
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_111(t);
        LocalPopChoice(s_41);
      }
    else
      {
        t = r_41;
        {
          ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,t_16 = NULL;
          t = a_112(t);
          a_89 = t;
          if(match_cons(t, sym__2))
            {
              w_88 = ATgetArgument(t, 0);
              x_88 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_89);
          v_88 = t;
          t = w_88;
          t = c_112(t);
          y_88 = t;
          t = x_88;
          t = b_89(t);
          z_88 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_88, z_88);
          t_16 = t;
          t = SSLsetAnnotations(t_16, v_88);
          t = b_112(t);
        }
      }
    return(t);
  }
  t = b_89(t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_41 = ATgetArgument(t, 0);
      if(((ATgetType(t_41) != AT_LIST) || !(ATisEmpty(t_41))))
        _fail(t);
      {
        ATerm v_41 = ATgetArgument(t, 1);
        if(((ATgetType(v_41) != AT_LIST) || !(ATisEmpty(v_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL,l_89 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_41 = ATgetArgument(t, 0);
      if(((ATgetType(x_41) == AT_LIST) && !(ATisEmpty(x_41))))
        {
          i_89 = ATgetFirst((ATermList) x_41);
          j_89 = (ATerm) ATgetNext((ATermList) x_41);
        }
      else
        _fail(t);
      {
        ATerm z_41 = ATgetArgument(t, 1);
        if(((ATgetType(z_41) == AT_LIST) && !(ATisEmpty(z_41))))
          {
            k_89 = ATgetFirst((ATermList) z_41);
            l_89 = (ATerm) ATgetNext((ATermList) z_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_89, k_89), (ATerm) ATmakeAppl(sym__2, j_89, l_89));
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm m_89 = NULL,n_89 = NULL;
  if(match_cons(t, sym__2))
    {
      m_89 = ATgetArgument(t, 0);
      n_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_89), m_89);
  return(t);
}
static ATerm u_10 (ATerm n_696, ATerm s_696, ATerm w_70, ATerm t)
{
  ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL,g_89 = NULL;
  t = SSL_explode_term(s_696);
  if(match_cons(t, sym__2))
    {
      d_89 = ATgetArgument(t, 0);
      f_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_696);
  if(match_cons(t, sym__2))
    {
      if((d_89 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      e_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_89, f_89);
  t = genzip_4_0(b_7, c_7, e_7, _id, t);
  g_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_89, w_70);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm t)
{
  static ATerm p_89 (ATerm t)
  {
    ATerm a_42 = t;
    int b_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_109(t);
        LocalPopChoice(b_42);
      }
    else
      {
        t = a_42;
        t = z_109(t);
        t = p_89(t);
      }
    return(t);
  }
  t = p_89(t);
  return(t);
}
ATerm for_3_0 (ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm t)
{
  t = b_110(t);
  t = while_not_2_0(c_110, d_110, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm w_89 = NULL;
  w_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, w_89);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm x_89 = NULL,y_89 = NULL,z_89 = NULL,a_90 = NULL,w_16 = NULL;
  a_90 = t;
  if(match_cons(t, sym__2))
    {
      y_89 = ATgetArgument(t, 0);
      z_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_90);
  x_89 = t;
  t = z_89;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_89, z_89);
  w_16 = t;
  t = SSLsetAnnotations(w_16, x_89);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL,w_90 = NULL,x_90 = NULL;
  t_90 = t;
  if(match_cons(t, sym__2))
    {
      u_90 = ATgetArgument(t, 0);
      v_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_90 = ATgetFirst((ATermList) t);
      x_90 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_42 = t;
        int d_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_91(u_90, v_90, t_90, t);
            LocalPopChoice(d_42);
          }
        else
          {
            t = c_42;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_90), w_90), x_90);
          }
      }
    }
  else
    {
      t = h_91(u_90, v_90, t_90, t);
    }
  return(t);
}
static ATerm h_91 (ATerm b_90, ATerm c_90, ATerm d_90, ATerm t)
{
  ATerm e_90 = NULL,h_90 = NULL,b_17 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL;
  t = SSLgetAnnotations(d_90);
  e_90 = t;
  t = c_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_90 = ATgetFirst((ATermList) t);
      n_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_90;
  if(match_cons(t, sym__2))
    {
      l_90 = ATgetArgument(t, 0);
      m_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_42 = t;
    int m_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_90;
        if((l_90 != t))
          {
            _fail(t);
          }
        t = n_90;
        LocalPopChoice(m_42);
      }
    else
      {
        t = g_42;
        t = c_90;
        t = u_10(l_90, m_90, n_90, t);
      }
  }
  h_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_90, h_90);
  b_17 = t;
  t = SSLsetAnnotations(b_17, e_90);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm g_91 = NULL;
  if(match_cons(t, sym__2))
    {
      g_91 = ATgetArgument(t, 0);
      if((g_91 != ATgetArgument(t, 1)))
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
  ATerm r_42 = t;
  int t_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(g_7, i_7, j_7, t);
      LocalPopChoice(t_42);
    }
  else
    {
      t = r_42;
      {
        ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL;
        b_91 = t;
        if(match_cons(t, sym__2))
          {
            c_91 = ATgetArgument(t, 0);
            d_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_91;
        t = p_10(k_7, c_91, d_91, t);
      }
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL;
  if(match_cons(t, sym__2))
    {
      n_43 = ATgetArgument(t, 0);
      o_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(y_7, n_43, o_43, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm p_43 = NULL;
  if(match_cons(t, sym__2))
    {
      p_43 = ATgetArgument(t, 0);
      if((p_43 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm c_44 = NULL,f_44 = NULL;
  if(match_cons(t, sym__2))
    {
      c_44 = ATgetArgument(t, 0);
      f_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(b_8, c_44, f_44, t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm g_44 = NULL;
  if(match_cons(t, sym__2))
    {
      g_44 = ATgetArgument(t, 0);
      if((g_44 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm d_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm v_91 (ATerm t)
  {
    ATerm u_42 = t;
    int v_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_123(t);
        LocalPopChoice(v_42);
      }
    else
      {
        t = u_42;
        {
          ATerm w_42 = t;
          int x_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_91 = NULL,k_91 = NULL,e_43 = NULL,f_43 = NULL;
              j_91 = t;
              t = c_123(t);
              k_91 = t;
              t = j_91;
              {
                static ATerm n_7 (ATerm t)
                {
                  ATerm m_91 = NULL;
                  t = v_91(t);
                  m_91 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_91, k_91);
                  t = diff_0_0(t);
                  return(t);
                }
                t = d_123(n_7, v_91, o_7, t);
              }
              f_43 = t;
              t = SSL_explode_term(f_43);
              if(match_cons(t, sym__2))
                {
                  ATerm y_42 = ATgetArgument(t, 0);
                  e_43 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_43;
              t = foldr_3_0(p_7, u_7, _id, t);
              LocalPopChoice(x_42);
            }
          else
            {
              t = w_42;
              {
                ATerm r_43 = NULL,y_43 = NULL;
                y_43 = t;
                t = SSL_explode_term(y_43);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_42 = ATgetArgument(t, 0);
                    r_43 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_43;
                t = foldr_3_0(z_7, a_8, v_91, t);
              }
            }
        }
      }
    return(t);
  }
  t = v_91(t);
  return(t);
}
ATerm topdown_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  static ATerm c_8 (ATerm t)
  {
    t = topdown_1_0(h_101, t);
    return(t);
  }
  t = h_101(t);
  t = SRTS_all(c_8, t);
  return(t);
}
static ATerm w_10 (ATerm h_32, ATerm i_32, ATerm t)
{
  ATerm w_91 = NULL,x_91 = NULL;
  x_91 = t;
  {
    ATerm a_43 = t;
    int b_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_32, i_32);
        t = l_11(h_32, i_32, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_43 = ATgetFirst((ATermList) t);
            w_91 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_43);
        {
          ATerm y_91 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, h_32, i_32, w_91);
          t = lookup_table_0_1(h_32, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              y_91 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_11(i_32, w_91, y_91, t);
          t = (ATerm) ATmakeAppl(sym__3, h_32, i_32, w_91);
        }
      }
    else
      {
        t = a_43;
        {
          ATerm a_92 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, h_32, i_32);
          t = lookup_table_0_1(h_32, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              a_92 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_11(i_32, a_92, t);
          t = (ATerm) ATmakeAppl(sym__2, h_32, i_32);
        }
      }
  }
  t = x_91;
  return(t);
}
ATerm end_scope_1_0 (ATerm u_100 (ATerm), ATerm t)
{
  ATerm c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL,i_92 = NULL;
  f_92 = t;
  t = u_100(t);
  e_92 = t;
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_92 = NULL;
        t = term_r_36;
        j_92 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_92, term_r_36);
        t = l_11(e_92, j_92, t);
        LocalPopChoice(h_43);
      }
    else
      {
        t = g_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_92 = ATgetFirst((ATermList) t);
      c_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_92, term_r_36, c_92);
  t = lookup_table_0_1(e_92, t);
  i_92 = t;
  t = term_r_36;
  g_92 = t;
  t = i_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(g_92, c_92, h_92, t);
  t = d_92;
  {
    static ATerm e_8 (ATerm t)
    {
      ATerm k_92 = NULL;
      k_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_92, k_92);
      t = w_10(e_92, k_92, t);
      return(t);
    }
    t = map_1_0(e_8, t);
  }
  t = f_92;
  return(t);
}
ATerm restore_always_2_0 (ATerm a_115 (ATerm), ATerm b_115 (ATerm), ATerm t)
{
  ATerm i_43 = t;
  int j_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_115(t);
      t = b_115(t);
      LocalPopChoice(j_43);
    }
  else
    {
      t = i_43;
      t = b_115(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL,s_92 = NULL;
  n_92 = t;
  t = t_100(t);
  m_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_92, term_r_36);
  {
    ATerm k_43 = t;
    int l_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_92 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_43 = ATgetArgument(t, 0);
            ATerm q_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_36;
        w_92 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_92, term_r_36);
        t = l_11(m_92, w_92, t);
        LocalPopChoice(l_43);
      }
    else
      {
        t = k_43;
        t = (ATerm) ATempty;
      }
  }
  o_92 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_92, term_r_36, (ATerm) ATinsert(CheckATermList(o_92), (ATerm) ATempty));
  t = lookup_table_0_1(m_92, t);
  s_92 = t;
  t = term_r_36;
  p_92 = t;
  t = (ATerm) ATinsert(CheckATermList(o_92), (ATerm) ATempty);
  q_92 = t;
  t = s_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(p_92, q_92, r_92, t);
  t = n_92;
  return(t);
}
ATerm scope_2_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm t)
{
  static ATerm h_8 (ATerm t)
  {
    t = end_scope_1_0(v_100, t);
    return(t);
  }
  t = begin_scope_1_0(v_100, t);
  t = restore_always_2_0(w_100, h_8, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_c_17;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = scope_2_0(l_8, w_8, t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_f_24;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm e_93 = NULL,f_93 = NULL,g_93 = NULL;
  t = topdown_1_0(y_8, t);
  g_93 = t;
  t = free_vars_3_0(z_8, b_9, tboundin_3_0, t);
  f_93 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, f_93, g_93);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm s_43 = ATgetArgument(t, 0);
      e_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_93;
  {
    ATerm t_43 = t;
    int w_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        LocalPopChoice(w_43);
      }
    else
      {
        t = t_43;
        {
          ATerm z_43 = t;
          int a_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              LocalPopChoice(a_44);
            }
          else
            {
              t = z_43;
              {
                ATerm h_94 = NULL,i_94 = NULL,j_94 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    h_94 = ATgetArgument(t, 0);
                    i_94 = ATgetArgument(t, 1);
                    j_94 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = e_93;
                t = x_9(h_94, i_94, j_94, t);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm n_93 = NULL,o_93 = NULL;
  o_93 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_93 = ATgetArgument(t, 0);
      {
        ATerm b_44 = t;
        int d_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_44 = NULL,m_44 = NULL,e_17 = NULL;
            t = SSLgetAnnotations(o_93);
            k_44 = t;
            t = n_93;
            if(match_cons(t, sym_ListVar_1))
              {
                m_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, m_44);
            e_17 = t;
            t = SSLsetAnnotations(e_17, k_44);
            LocalPopChoice(d_44);
          }
        else
          {
            t = b_44;
            t = o_93;
          }
      }
    }
  else
    {
      t = o_93;
    }
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm r_93 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_93);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm h_44 = t;
  int i_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_44);
    }
  else
    {
      t = h_44;
      {
        ATerm j_44 = t;
        int l_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_44);
          }
        else
          {
            t = j_44;
            {
              ATerm n_44 = t;
              int o_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_93 = ATgetArgument(t, 0);
                      u_93 = ATgetArgument(t, 1);
                      v_93 = ATgetArgument(t, 2);
                      w_93 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_93;
                  t = map_1_0(g_9, t);
                  LocalPopChoice(o_44);
                }
              else
                {
                  t = n_44;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm d_94 = NULL;
  ATerm q_44 = t;
  int r_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_94 = ATgetArgument(t, 0);
          {
            ATerm s_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_44);
      t = d_94;
    }
  else
    {
      t = q_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_94;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm d_93 = NULL;
  d_93 = t;
  t = scope_2_0(i_8, j_8, t);
  t = d_93;
  return(t);
}
ATerm filter_1_0 (ATerm z_113 (ATerm), ATerm t)
{
  ATerm z_94 = NULL,a_95 = NULL,b_95 = NULL;
  z_94 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_94;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_95 = ATgetFirst((ATermList) t);
          b_95 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm u_44 = t;
        int w_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_44 = NULL,f_45 = NULL,h_45 = NULL,j_17 = NULL;
            t = SSLgetAnnotations(z_94);
            v_44 = t;
            t = a_95;
            t = z_113(t);
            f_45 = t;
            t = b_95;
            t = filter_1_0(z_113, t);
            h_45 = t;
            t = (ATerm) ATinsert(CheckATermList(h_45), f_45);
            j_17 = t;
            t = SSLsetAnnotations(j_17, v_44);
            LocalPopChoice(w_44);
          }
        else
          {
            t = u_44;
            t = b_95;
            t = filter_1_0(z_113, t);
          }
      }
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL,s_17 = NULL;
  t_95 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      s_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_95);
  r_95 = t;
  t = s_95;
  {
    ATerm x_44 = t;
    int z_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_95;
        LocalPopChoice(z_44);
      }
    else
      {
        t = x_44;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_95;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Overlays_1, s_95);
  s_17 = t;
  t = SSLsetAnnotations(s_17, r_95);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = Cons_2_0(q_9, v_10, t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL,t_17 = NULL;
  x_95 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      w_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_95);
  v_95 = t;
  t = w_95;
  {
    ATerm a_45 = t;
    int c_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_95;
        LocalPopChoice(c_45);
      }
    else
      {
        t = a_45;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_95;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_95);
  t_17 = t;
  t = SSLsetAnnotations(t_17, v_95);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL,q_95 = NULL,v_17 = NULL,u_17 = NULL,q_17 = NULL;
  q_95 = t;
  if(match_cons(t, sym_Specification_1))
    {
      h_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_95);
  g_95 = t;
  t = h_95;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_95 = ATgetFirst((ATermList) t);
      k_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_95);
  i_95 = t;
  t = j_95;
  if(match_cons(t, sym_Signature_1))
    {
      o_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_95);
  n_95 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, o_95);
  q_17 = t;
  t = SSLsetAnnotations(q_17, n_95);
  p_95 = t;
  t = k_95;
  t = Cons_2_0(k_9, l_9, t);
  l_95 = t;
  t = (ATerm) ATinsert(CheckATermList(l_95), p_95);
  u_17 = t;
  t = SSLsetAnnotations(u_17, i_95);
  m_95 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_95);
  v_17 = t;
  t = SSLsetAnnotations(v_17, g_95);
  return(t);
}
static ATerm y_10 (ATerm n_42, ATerm o_42, ATerm t)
{
  ATerm z_95 = NULL;
  t = SSL_fputc(n_42, o_42);
  z_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_95);
  return(t);
}
static ATerm z_10 (ATerm k_48, ATerm l_48, ATerm t)
{
  ATerm a_96 = NULL;
  t = SSL_write_term_to_stream_text(k_48, l_48);
  a_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_96);
  return(t);
}
static ATerm b_11 (ATerm w_110 (ATerm), ATerm e_456, ATerm q_48, ATerm t)
{
  ATerm b_96 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_456, term_d_45);
  t = f_11(t);
  b_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_96, q_48);
  t = w_110(t);
  t = fclose_0_0(t);
  t = q_48;
  return(t);
}
static ATerm a_11 (ATerm g_48, ATerm h_48, ATerm t)
{
  ATerm c_96 = NULL;
  t = SSL_write_term_to_stream_baf(g_48, h_48);
  c_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_96);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm j_96 = NULL,k_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_45 = ATgetArgument(t, 0);
      if(match_cons(e_45, sym_Stream_1))
        {
          j_96 = ATgetArgument(e_45, 0);
        }
      else
        _fail(t);
      k_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(j_96, k_96, t);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm l_96 = NULL,m_96 = NULL,p_96 = NULL,q_96 = NULL,r_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_45 = ATgetArgument(t, 0);
      if(match_cons(l_45, sym_Stream_1))
        {
          q_96 = ATgetArgument(l_45, 0);
        }
      else
        _fail(t);
      r_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(q_96, r_96, t);
  l_96 = t;
  t = term_m_45;
  m_96 = t;
  t = l_96;
  if(match_cons(t, sym_Stream_1))
    {
      p_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_45, l_96);
  t = y_10(m_96, p_96, t);
  return(t);
}
ATerm output_1_0 (ATerm v_126 (ATerm), ATerm t)
{
  ATerm d_96 = NULL,e_96 = NULL;
  t = v_126(t);
  e_96 = t;
  {
    ATerm n_45 = t;
    int o_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_96 = NULL,g_96 = NULL;
        t = term_k_21;
        f_96 = t;
        t = term_p_45;
        g_96 = t;
        t = term_q_45;
        t = l_11(f_96, g_96, t);
        LocalPopChoice(o_45);
      }
    else
      {
        t = n_45;
        t = term_s_45;
      }
  }
  d_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_96, e_96);
  {
    ATerm t_45 = t;
    int u_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_96 = NULL,i_96 = NULL;
        t = term_k_21;
        h_96 = t;
        t = term_v_45;
        i_96 = t;
        t = term_z_45;
        t = l_11(h_96, i_96, t);
        t = (ATerm) ATmakeAppl(sym__2, d_96, e_96);
        LocalPopChoice(u_45);
        if(match_cons(t, sym__2))
          {
            ATerm a_46 = ATgetArgument(t, 0);
            ATerm b_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_11(k_11, d_96, e_96, t);
      }
    else
      {
        t = t_45;
        if(match_cons(t, sym__2))
          {
            ATerm c_46 = ATgetArgument(t, 0);
            ATerm d_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_11(s_11, d_96, e_96, t);
      }
  }
  return(t);
}
static ATerm m_97 (ATerm g_97, ATerm t)
{
  t = SSL_fclose(g_97);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_97 = NULL,k_97 = NULL;
  k_97 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_97 = ATgetArgument(t, 0);
      {
        ATerm g_46 = t;
        int h_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_97);
            LocalPopChoice(h_46);
          }
        else
          {
            t = g_46;
            t = m_97(k_97, t);
          }
      }
    }
  else
    {
      t = m_97(k_97, t);
    }
  return(t);
}
static ATerm c_11 (ATerm m_48, ATerm t)
{
  t = SSL_read_term_from_stream(m_48);
  return(t);
}
static ATerm d_11 (ATerm g_41, ATerm h_41, ATerm t)
{
  t = SSL_strcat(g_41, h_41);
  return(t);
}
static ATerm e_11 (ATerm p_42, ATerm q_42, ATerm t)
{
  ATerm p_97 = NULL;
  t = SSL_fopen(p_42, q_42);
  p_97 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_97);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_97 = NULL;
  t = SSL_stdin_stream();
  q_97 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_97);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_97 = NULL;
  t = SSL_stdout_stream();
  r_97 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_97);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_97 = NULL;
  t = SSL_stderr_stream();
  s_97 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_97);
  return(t);
}
static ATerm b_99 (ATerm a_98, ATerm t)
{
  ATerm b_98 = NULL;
  t = SSL_explode_term(a_98);
  if(match_cons(t, sym__2))
    {
      ATerm k_46 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_46) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_46 = ATgetArgument(t, 1);
        if(((ATgetType(m_46) == AT_LIST) && !(ATisEmpty(m_46))))
          {
            b_98 = ATgetFirst((ATermList) m_46);
            {
              ATerm p_46 = (ATerm) ATgetNext((ATermList) m_46);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_98;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_98;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_98;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_98;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_99 (ATerm e_98, ATerm f_98, ATerm g_98, ATerm t)
{
  ATerm h_98 = NULL,i_98 = NULL,j_98 = NULL,m_98 = NULL,a_19 = NULL;
  t = SSLgetAnnotations(g_98);
  j_98 = t;
  t = e_98;
  if(match_cons(t, sym_Path_1))
    {
      m_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_98, f_98);
  a_19 = t;
  t = SSLsetAnnotations(a_19, j_98);
  if(match_cons(t, sym__2))
    {
      h_98 = ATgetArgument(t, 0);
      i_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(h_98, i_98, t);
  return(t);
}
static ATerm d_99 (ATerm o_98, ATerm p_98, ATerm q_98, ATerm t)
{
  ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL,w_98 = NULL,b_19 = NULL;
  t = SSLgetAnnotations(q_98);
  t_98 = t;
  t = SSL_is_string(o_98);
  w_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_98, p_98);
  b_19 = t;
  t = SSLsetAnnotations(b_19, t_98);
  if(match_cons(t, sym__2))
    {
      r_98 = ATgetArgument(t, 0);
      s_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(r_98, s_98, t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL;
  y_98 = t;
  if(match_cons(t, sym__2))
    {
      z_98 = ATgetArgument(t, 0);
      a_99 = ATgetArgument(t, 1);
      {
        ATerm q_46 = t;
        int r_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_99(y_98, t);
            LocalPopChoice(r_46);
          }
        else
          {
            t = q_46;
            {
              ATerm s_46 = t;
              int t_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_99(z_98, a_99, y_98, t);
                  LocalPopChoice(t_46);
                }
              else
                {
                  t = s_46;
                  t = d_99(z_98, a_99, y_98, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_99(y_98, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_99 = NULL,g_99 = NULL,h_99 = NULL,r_99 = NULL;
  r_99 = t;
  {
    ATerm w_46 = t;
    int x_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_99, term_y_46);
        t = f_11(t);
        LocalPopChoice(x_46);
      }
    else
      {
        t = w_46;
        {
          ATerm u_46 = NULL,v_46 = NULL;
          t = term_z_46;
          v_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_46, r_99);
          t = d_11(v_46, r_99, t);
          u_46 = t;
          t = SSL_perror(u_46);
          _fail(t);
        }
      }
  }
  g_99 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(h_99, t);
  f_99 = t;
  t = g_99;
  t = fclose_0_0(t);
  t = f_99;
  return(t);
}
ATerm input_1_0 (ATerm w_126 (ATerm), ATerm t)
{
  ATerm b_47 = t;
  int c_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_99 = NULL,v_99 = NULL;
      t = term_k_21;
      u_99 = t;
      t = term_d_47;
      v_99 = t;
      t = term_f_47;
      t = l_11(u_99, v_99, t);
      LocalPopChoice(c_47);
    }
  else
    {
      t = b_47;
      t = term_g_47;
    }
  t = ReadFromFile_0_0(t);
  t = w_126(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_99 = NULL,x_99 = NULL,y_99 = NULL,z_99 = NULL,a_100 = NULL;
  w_99 = t;
  t = term_h_47;
  t = whoami_0_0(t);
  x_99 = t;
  t = term_w_19;
  z_99 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_47), x_99), term_i_47);
  a_100 = t;
  t = SSL_printnl(z_99, a_100);
  t = term_k_47;
  y_99 = t;
  t = SSL_exit(y_99);
  t = w_99;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm c_100 = NULL;
  c_100 = t;
  if(match_string(t, "-k"))
    {
      t = c_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_100;
    }
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm d_100 = NULL,e_100 = NULL,f_100 = NULL;
  d_100 = t;
  t = SSL_string_to_int(d_100);
  e_100 = t;
  t = term_l_47;
  f_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_47, e_100);
  t = o_11(f_100, e_100, t);
  t = d_100;
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_o_47;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_12, b_12, c_12, t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm h_100 = NULL;
  h_100 = t;
  if(match_string(t, "-S"))
    {
      t = h_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_100;
    }
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm i_100 = NULL,j_100 = NULL;
  t = term_p_47;
  i_100 = t;
  t = term_q_47;
  j_100 = t;
  t = term_r_47;
  t = o_11(i_100, j_100, t);
  t = term_s_47;
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_v_47;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm k_100 = NULL,l_100 = NULL,m_100 = NULL;
  k_100 = t;
  t = SSL_string_to_int(k_100);
  l_100 = t;
  t = term_p_47;
  m_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_47, l_100);
  t = o_11(m_100, l_100, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_100);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_a_48;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm n_100 = NULL,o_100 = NULL;
  t = term_c_48;
  n_100 = t;
  t = term_h_47;
  o_100 = t;
  t = term_d_48;
  t = o_11(n_100, o_100, t);
  t = term_e_48;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = term_i_48;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_48 = t;
  int n_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_12, e_12, h_12, t);
      LocalPopChoice(n_48);
    }
  else
    {
      t = j_48;
      {
        ATerm p_48 = t;
        int t_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_12, k_12, c_13, t);
            LocalPopChoice(t_48);
          }
        else
          {
            t = p_48;
            t = Option_3_0(d_13, f_13, o_13, t);
          }
      }
    }
  return(t);
}
static ATerm o_11 (ATerm i_46, ATerm j_46, ATerm t)
{
  ATerm p_100 = NULL,q_100 = NULL;
  t = term_k_21;
  p_100 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_21, i_46, j_46);
  t = lookup_table_0_1(p_100, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(i_46, j_46, q_100, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_21, i_46, j_46);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm a_101 = NULL,b_101 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL;
      t = term_h_47;
      t = i_0(t);
      c_101 = t;
      t = term_u_48;
      d_101 = t;
      t = term_v_48;
      e_101 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_48, term_v_48, c_101);
      t = m_11(d_101, e_101, c_101, t);
      _fail(t);
    }
  else
    {
      ATerm i_101 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_101 = ATgetFirst((ATermList) t);
          b_101 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_101;
      t = d_0(t);
      t = term_h_47;
      t = g_0(t);
      i_101 = t;
      t = (ATerm) ATinsert(CheckATermList(b_101), i_101);
    }
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm k_101 = NULL;
  k_101 = t;
  if(match_string(t, "-o"))
    {
      t = k_101;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_101;
    }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm l_101 = NULL,m_101 = NULL;
  l_101 = t;
  t = term_p_45;
  m_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_45, l_101);
  t = o_11(m_101, l_101, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_101);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = term_w_48;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_13, u_13, y_13, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm o_101 = NULL;
  o_101 = t;
  if(match_string(t, "-i"))
    {
      t = o_101;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_101;
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm p_101 = NULL,q_101 = NULL;
  p_101 = t;
  t = term_d_47;
  q_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_47, p_101);
  t = o_11(q_101, p_101, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_101);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_x_48;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_13, b_14, f_14, t);
  return(t);
}
ATerm at_end_1_0 (ATerm u_97 (ATerm), ATerm t)
{
  static ATerm l_102 (ATerm t)
  {
    ATerm i_102 = NULL,j_102 = NULL,k_102 = NULL;
    k_102 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_102 = ATgetFirst((ATermList) t);
        j_102 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_47 = NULL,e_47 = NULL,e_19 = NULL;
          t = SSLgetAnnotations(k_102);
          a_47 = t;
          t = j_102;
          t = l_102(t);
          e_47 = t;
          t = (ATerm) ATinsert(CheckATermList(e_47), i_102);
          e_19 = t;
          t = SSLsetAnnotations(e_19, a_47);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_102;
        t = u_97(t);
      }
    return(t);
  }
  t = l_102(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_101 = NULL,t_101 = NULL,u_101 = NULL;
  s_101 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_101;
    }
  else
    {
      static ATerm g_14 (ATerm t)
      {
        t = not_null(u_101);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_101 = ATgetFirst((ATermList) t);
          if(((u_101 != NULL) && (u_101 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_101 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_101;
      t = at_end_1_0(g_14, t);
    }
  return(t);
}
static ATerm x_102 (ATerm p_102, ATerm t)
{
  ATerm q_102 = NULL;
  t = SSL_explode_term(p_102);
  if(match_cons(t, sym__2))
    {
      ATerm y_48 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_48) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_102;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_102 = NULL,t_102 = NULL,u_102 = NULL;
  u_102 = t;
  if(match_cons(t, sym__2))
    {
      s_102 = ATgetArgument(t, 0);
      t_102 = ATgetArgument(t, 1);
      {
        ATerm z_48 = t;
        int b_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm i_14 (ATerm t)
            {
              t = t_102;
              return(t);
            }
            t = s_102;
            t = at_end_1_0(i_14, t);
            LocalPopChoice(b_49);
          }
        else
          {
            t = z_48;
            t = x_102(u_102, t);
          }
      }
    }
  else
    {
      t = x_102(u_102, t);
    }
  return(t);
}
static ATerm x_10 (ATerm o_46, ATerm n_46, ATerm t)
{
  ATerm y_102 = NULL,b_103 = NULL,c_103 = NULL,d_103 = NULL;
  t = o_46;
  {
    ATerm c_49 = t;
    int d_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_103 = NULL;
        t = term_k_21;
        f_103 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_21, o_46);
        t = l_11(f_103, o_46, t);
        LocalPopChoice(d_49);
      }
    else
      {
        t = c_49;
        t = (ATerm) ATempty;
      }
  }
  b_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_46, b_103);
  t = conc_0_0(t);
  y_102 = t;
  t = term_k_21;
  c_103 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_21, o_46, y_102);
  t = lookup_table_0_1(c_103, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(o_46, y_102, d_103, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_21, o_46, y_102);
  return(t);
}
static ATerm m_11 (ATerm c_32, ATerm d_32, ATerm b_32, ATerm t)
{
  ATerm h_103 = NULL,i_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL;
  h_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_32, d_32);
  {
    ATerm e_49 = t;
    int f_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_49 = ATgetArgument(t, 0);
            ATerm n_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_32, d_32);
        t = l_11(c_32, d_32, t);
        LocalPopChoice(f_49);
      }
    else
      {
        t = e_49;
        t = (ATerm) ATempty;
      }
  }
  i_103 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_32, d_32, (ATerm) ATinsert(CheckATermList(i_103), b_32));
  t = lookup_table_0_1(c_32, t);
  l_103 = t;
  t = (ATerm) ATinsert(CheckATermList(i_103), b_32);
  j_103 = t;
  t = l_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(d_32, j_103, k_103, t);
  t = h_103;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm e_1 (ATerm), ATerm k_1 (ATerm), ATerm t)
{
  ATerm s_103 = NULL,t_103 = NULL,u_103 = NULL,v_103 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_103 = NULL,x_103 = NULL,y_103 = NULL;
      t = term_h_47;
      t = k_1(t);
      w_103 = t;
      t = term_u_48;
      x_103 = t;
      t = term_v_48;
      y_103 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_48, term_v_48, w_103);
      t = m_11(x_103, y_103, w_103, t);
      _fail(t);
    }
  else
    {
      ATerm c_104 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_103 = ATgetFirst((ATermList) t);
          t_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_103;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_103 = ATgetFirst((ATermList) t);
          v_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_103;
      t = o_0(t);
      t = u_103;
      t = e_1(t);
      c_104 = t;
      t = (ATerm) ATinsert(CheckATermList(v_103), c_104);
    }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm e_104 = NULL;
  e_104 = t;
  if(match_string(t, "--warning"))
    {
      t = e_104;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = e_104;
    }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm f_104 = NULL,g_104 = NULL,h_104 = NULL;
  f_104 = t;
  t = term_o_49;
  g_104 = t;
  t = (ATerm) ATinsert(ATempty, f_104);
  h_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_49, (ATerm) ATinsert(ATempty, f_104));
  t = x_10(g_104, h_104, t);
  t = term_h_47;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  t = term_p_49;
  return(t);
}
static ATerm e_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm i_104 = NULL,j_104 = NULL,k_104 = NULL;
  i_104 = t;
  t = term_l_21;
  j_104 = t;
  t = term_q_47;
  k_104 = t;
  t = term_q_49;
  t = o_11(j_104, k_104, t);
  t = i_104;
  return(t);
}
static ATerm m_15 (ATerm t)
{
  t = term_s_49;
  return(t);
}
static ATerm n_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm l_104 = NULL,m_104 = NULL,n_104 = NULL;
  l_104 = t;
  t = term_l_21;
  m_104 = t;
  t = term_k_47;
  n_104 = t;
  t = term_t_49;
  t = o_11(m_104, n_104, t);
  t = l_104;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm u_49 = t;
  int x_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(y_14, a_15, c_15, t);
      LocalPopChoice(x_49);
    }
  else
    {
      t = u_49;
      {
        ATerm y_49 = t;
        int a_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(e_15, l_15, m_15, t);
            LocalPopChoice(a_50);
          }
        else
          {
            t = y_49;
            t = Option_3_0(n_15, o_15, p_15, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_47;
  t = whoami_0_0(t);
  o_104 = t;
  t = term_w_19;
  q_104 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_50), o_104);
  r_104 = t;
  t = SSL_printnl(q_104, r_104);
  t = term_k_47;
  p_104 = t;
  t = SSL_exit(p_104);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm s_104 = NULL,t_104 = NULL;
  t = term_k_21;
  s_104 = t;
  t = term_d_50;
  t_104 = t;
  t = term_e_50;
  t = l_11(s_104, t_104, t);
  return(t);
}
static ATerm g_11 (ATerm k_29, ATerm l_29, ATerm t)
{
  ATerm g_50 = t;
  int h_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_29, l_29);
      LocalPopChoice(h_50);
    }
  else
    {
      t = g_50;
      t = SSL_addr(k_29, l_29);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm t)
{
  ATerm v_104 = NULL,w_104 = NULL,x_104 = NULL;
  v_104 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_104;
      t = l_99(t);
    }
  else
    {
      ATerm a_105 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_104 = ATgetFirst((ATermList) t);
          x_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_104;
      t = foldr_2_0(l_99, m_99, t);
      a_105 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_104, a_105);
      t = m_99(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm r_15 (ATerm t)
{
  t = term_q_47;
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm w_47 = NULL,b_48 = NULL;
  if(match_cons(t, sym__2))
    {
      w_47 = ATgetArgument(t, 0);
      b_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(w_47, b_48, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_105 = NULL,m_47 = NULL,n_47 = NULL;
  t = times_0_0(t);
  n_47 = t;
  t = SSL_explode_term(n_47);
  if(match_cons(t, sym__2))
    {
      ATerm i_50 = ATgetArgument(t, 0);
      m_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_47;
  t = foldr_2_0(r_15, t_15, t);
  d_105 = t;
  t = SSL_TicksToSeconds(d_105);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_105 = NULL,p_105 = NULL,q_105 = NULL;
  o_105 = t;
  if(match_cons(t, sym__2))
    {
      p_105 = ATgetArgument(t, 0);
      q_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_50 = t;
    int k_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_105;
        if((p_105 != t))
          {
            _fail(t);
          }
        t = o_105;
        LocalPopChoice(k_50);
      }
    else
      {
        t = j_50;
        t = (ATerm) ATmakeAppl(sym__2, p_105, q_105);
        {
          ATerm l_50 = t;
          int m_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_105, q_105);
              LocalPopChoice(m_50);
            }
          else
            {
              t = l_50;
              t = SSL_gtr(p_105, q_105);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_105, q_105);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  ATerm u_105 = NULL;
  u_105 = t;
  {
    ATerm n_50 = t;
    int o_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_105 = NULL,x_105 = NULL,y_105 = NULL;
        t = term_k_21;
        x_105 = t;
        t = term_p_47;
        y_105 = t;
        t = term_p_50;
        t = l_11(x_105, y_105, t);
        w_105 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_105, term_k_47);
        t = geq_0_0(t);
        t = u_105;
        t = w_106(t);
        LocalPopChoice(o_50);
      }
    else
      {
        t = n_50;
        t = u_105;
      }
  }
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm a_106 = NULL,b_106 = NULL,d_106 = NULL,e_106 = NULL;
  t = run_time_0_0(t);
  a_106 = t;
  t = term_h_47;
  t = whoami_0_0(t);
  b_106 = t;
  t = term_w_19;
  d_106 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_50), a_106), term_q_50), b_106);
  e_106 = t;
  t = SSL_printnl(d_106, e_106);
  t = (ATerm) ATmakeAppl(sym__2, term_w_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_50), a_106), term_q_50), b_106));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_106 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_47;
  f_106 = t;
  t = SSL_exit(f_106);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm p_106 = NULL,q_106 = NULL;
  q_106 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_106;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_106 = ATgetArgument(t, 0);
          {
            ATerm a_49 = NULL,j_19 = NULL;
            t = SSLgetAnnotations(q_106);
            a_49 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_106);
            j_19 = t;
            t = SSLsetAnnotations(j_19, a_49);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_106;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_126 (ATerm), ATerm t)
{
  ATerm s_50 = t;
  int t_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_106 = NULL,j_106 = NULL;
      t = term_k_21;
      i_106 = t;
      t = term_v_50;
      j_106 = t;
      t = term_w_50;
      t = l_11(i_106, j_106, t);
      LocalPopChoice(t_50);
    }
  else
    {
      t = s_50;
      t = fetch_1_0(v_15, t);
    }
  t = m_126(t);
  return(t);
}
static ATerm p_11 (ATerm u_35, ATerm v_35, ATerm w_35, ATerm t)
{
  ATerm s_106 = NULL;
  t = SSL_hashtable_put(w_35, u_35, v_35);
  s_106 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_106);
  return(t);
}
ATerm lookup_table_0_1 (ATerm o_33, ATerm t)
{
  ATerm c_107 = NULL;
  t = table_hashtable_0_0(t);
  c_107 = t;
  {
    ATerm x_50 = t;
    int y_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_49 = NULL;
        t = c_107;
        if(match_cons(t, sym_Hashtable_1))
          {
            l_49 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_11(o_33, l_49, t);
        LocalPopChoice(y_50);
      }
    else
      {
        t = x_50;
        {
          ATerm r_49 = NULL;
          t = o_33;
          t = table_create_0_0(t);
          t = c_107;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_11(o_33, r_49, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm f_107 = NULL;
  t = SSL_hashtable_create(c_36, d_36);
  f_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_107);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm g_107 = NULL,h_107 = NULL,i_107 = NULL,k_107 = NULL,l_107 = NULL;
  g_107 = t;
  t = term_z_50;
  k_107 = t;
  t = term_b_51;
  l_107 = t;
  t = g_107;
  t = new_hashtable_0_2(k_107, l_107, t);
  h_107 = t;
  t = g_107;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(g_107, h_107, i_107, t);
  t = g_107;
  return(t);
}
static ATerm i_11 (ATerm z_35, ATerm a_36, ATerm t)
{
  ATerm m_107 = NULL;
  t = SSL_hashtable_remove(a_36, z_35);
  m_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_107);
  return(t);
}
static ATerm j_11 (ATerm e_36, ATerm t)
{
  ATerm n_107 = NULL;
  t = SSL_hashtable_destroy(e_36);
  n_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_107);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm o_107 = NULL;
  t = SSL_table_hashtable();
  o_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_107);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm p_107 = NULL,q_107 = NULL,r_107 = NULL,s_107 = NULL;
  p_107 = t;
  t = table_hashtable_0_0(t);
  q_107 = t;
  t = lookup_table_0_1(p_107, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_11(s_107, t);
  t = q_107;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_11(p_107, r_107, t);
  t = p_107;
  return(t);
}
ATerm map_1_0 (ATerm d_97 (ATerm), ATerm t)
{
  static ATerm h_108 (ATerm t)
  {
    ATerm e_108 = NULL,f_108 = NULL,g_108 = NULL;
    e_108 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_108;
      }
    else
      {
        ATerm z_49 = NULL,c_50 = NULL,f_50 = NULL,p_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_108 = ATgetFirst((ATermList) t);
            g_108 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_108);
        z_49 = t;
        t = f_108;
        t = d_97(t);
        c_50 = t;
        t = g_108;
        t = h_108(t);
        f_50 = t;
        t = (ATerm) ATinsert(CheckATermList(f_50), c_50);
        p_19 = t;
        t = SSLsetAnnotations(p_19, z_49);
      }
    return(t);
  }
  t = h_108(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm k_108 = NULL,l_108 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_108 = ATgetFirst((ATermList) t);
      l_108 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_108 = NULL,q_108 = NULL;
        static ATerm w_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_108)), not_null(q_108));
          return(t);
        }
        t = l_108;
        t = n_0(t);
        if(((p_108 != NULL) && (p_108 != t)))
          _fail(t);
        else
          p_108 = t;
        t = k_108;
        t = k_0(t);
        if(((q_108 != NULL) && (q_108 != t)))
          _fail(t);
        else
          q_108 = t;
        t = l_108;
        t = reverse_acc_2_0(k_0, w_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_47;
      t = n_0(t);
    }
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm w_108 = NULL,x_108 = NULL,y_108 = NULL,r_19 = NULL;
  y_108 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_108);
  w_108 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_108);
  r_19 = t;
  t = SSLsetAnnotations(r_19, w_108);
  return(t);
}
static ATerm z_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm a_109 = NULL;
  a_109 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_109), term_c_51);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_108 = NULL,t_108 = NULL;
  ATerm d_51 = t;
  int e_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_108 = NULL,v_108 = NULL;
      t = term_k_21;
      u_108 = t;
      t = term_d_50;
      v_108 = t;
      t = term_e_50;
      t = l_11(u_108, v_108, t);
      LocalPopChoice(e_51);
    }
  else
    {
      t = d_51;
      t = fetch_1_0(y_15, t);
    }
  t = term_f_51;
  t = echo_0_0(t);
  t = term_u_48;
  s_108 = t;
  t = term_v_48;
  t_108 = t;
  t = term_g_51;
  t = l_11(s_108, t_108, t);
  t = reverse_acc_2_0(_id, z_15, t);
  t = map_1_0(a_16, t);
  return(t);
}
ATerm fetch_1_0 (ATerm n_97 (ATerm), ATerm t)
{
  static ATerm x_109 (ATerm t)
  {
    ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL;
    u_109 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_109 = ATgetFirst((ATermList) t);
        w_109 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_51 = t;
      int i_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_50 = NULL,a_51 = NULL,t_19 = NULL;
          t = SSLgetAnnotations(u_109);
          u_50 = t;
          t = v_109;
          t = n_97(t);
          a_51 = t;
          t = (ATerm) ATinsert(CheckATermList(w_109), a_51);
          t_19 = t;
          t = SSLsetAnnotations(t_19, u_50);
          LocalPopChoice(i_51);
        }
      else
        {
          t = h_51;
          {
            ATerm k_51 = NULL,u_51 = NULL,u_19 = NULL;
            t = SSLgetAnnotations(u_109);
            k_51 = t;
            t = w_109;
            t = x_109(t);
            u_51 = t;
            t = (ATerm) ATinsert(CheckATermList(u_51), v_109);
            u_19 = t;
            t = SSLsetAnnotations(u_19, k_51);
          }
        }
    }
    return(t);
  }
  t = x_109(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_110 = NULL,i_110 = NULL,j_110 = NULL;
  h_110 = t;
  {
    ATerm m_51 = t;
    int o_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_110;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_51 = ATgetFirst((ATermList) t);
                ATerm q_51 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_110;
          }
        LocalPopChoice(o_51);
      }
    else
      {
        t = m_51;
        t = (ATerm) ATinsert(ATempty, h_110);
      }
  }
  i_110 = t;
  t = term_s_45;
  j_110 = t;
  t = SSL_printnl(j_110, i_110);
  t = h_110;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm n_110 = NULL,o_110 = NULL;
  t = term_k_21;
  n_110 = t;
  t = term_d_50;
  o_110 = t;
  t = term_e_50;
  t = l_11(n_110, o_110, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_11 (ATerm x_35, ATerm y_35, ATerm t)
{
  t = SSL_hashtable_get(y_35, x_35);
  return(t);
}
static ATerm l_11 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm p_110 = NULL;
  t = lookup_table_0_1(v_33, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_11(w_33, p_110, t);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm r_110 = NULL,s_110 = NULL;
  t = term_v_51;
  r_110 = t;
  t = term_h_47;
  s_110 = t;
  t = term_w_51;
  t = o_11(r_110, s_110, t);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = term_x_51;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm t_110 = NULL,u_110 = NULL,v_110 = NULL,x_110 = NULL;
  t = term_v_51;
  v_110 = t;
  t = term_h_47;
  x_110 = t;
  t = term_w_51;
  t = o_11(v_110, x_110, t);
  t = term_a_52;
  t_110 = t;
  t = term_h_47;
  u_110 = t;
  t = term_b_52;
  t = o_11(t_110, u_110, t);
  t = term_c_52;
  return(t);
}
static ATerm j_16 (ATerm t)
{
  t = term_e_52;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_52 = t;
  int k_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_16, c_16, e_16, t);
      LocalPopChoice(k_52);
    }
  else
    {
      t = j_52;
      t = Option_3_0(f_16, g_16, j_16, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm t)
{
  ATerm y_110 = NULL,z_110 = NULL,a_111 = NULL,b_111 = NULL,c_111 = NULL,d_111 = NULL,x_19 = NULL;
  d_111 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_110 = ATgetFirst((ATermList) t);
      a_111 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_111);
  y_110 = t;
  t = z_110;
  t = p_83(t);
  b_111 = t;
  t = a_111;
  t = q_83(t);
  c_111 = t;
  t = (ATerm) ATinsert(CheckATermList(c_111), b_111);
  x_19 = t;
  t = SSLsetAnnotations(x_19, y_110);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_128 (ATerm), ATerm t)
{
  ATerm i_111 = NULL,j_111 = NULL,k_111 = NULL,l_111 = NULL,n_111 = NULL,o_111 = NULL,c_20 = NULL;
  i_111 = t;
  {
    ATerm l_52 = t;
    int p_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_52;
        t = p_128(t);
        LocalPopChoice(p_52);
      }
    else
      {
        t = l_52;
      }
  }
  t = i_111;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_111 = ATgetFirst((ATermList) t);
      l_111 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_111);
  j_111 = t;
  t = term_d_50;
  o_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_50, k_111);
  t = o_11(o_111, k_111, t);
  t = l_111;
  {
    static ATerm y_111 (ATerm t)
    {
      ATerm s_52 = t;
      int t_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_52 = t;
          int y_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_111 = NULL;
              r_111 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_111;
              LocalPopChoice(y_52);
            }
          else
            {
              t = u_52;
              t = p_128(t);
              t = Cons_2_0(_id, y_111, t);
            }
          LocalPopChoice(t_52);
        }
      else
        {
          t = s_52;
          {
            ATerm u_111 = NULL,v_111 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_111 = ATgetFirst((ATermList) t);
                v_111 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_111), (ATerm) ATmakeAppl(sym_Undefined_1, u_111));
          }
        }
      return(t);
    }
    t = y_111(t);
  }
  n_111 = t;
  t = (ATerm) ATinsert(CheckATermList(n_111), (ATerm) ATmakeAppl(sym_Program_1, k_111));
  c_20 = t;
  t = SSLsetAnnotations(c_20, j_111);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm q_112 = NULL;
  q_112 = t;
  if(match_string(t, "--help"))
    {
      t = q_112;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_112;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_112;
        }
    }
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm r_112 = NULL,s_112 = NULL;
  t = term_v_50;
  r_112 = t;
  t = term_h_47;
  s_112 = t;
  t = term_b_53;
  t = o_11(r_112, s_112, t);
  t = term_c_53;
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_e_53;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_128 (ATerm), ATerm t)
{
  ATerm i_112 = NULL,j_112 = NULL,k_112 = NULL,l_112 = NULL,m_112 = NULL,n_112 = NULL,o_112 = NULL,p_112 = NULL;
  k_112 = t;
  t = term_u_48;
  l_112 = t;
  t = term_f_53;
  t = lookup_table_0_1(l_112, t);
  p_112 = t;
  t = term_v_48;
  m_112 = t;
  t = (ATerm) ATempty;
  n_112 = t;
  t = p_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(m_112, n_112, o_112, t);
  t = k_112;
  {
    static ATerm k_16 (ATerm t)
    {
      ATerm g_53 = t;
      int h_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_128(t);
          LocalPopChoice(h_53);
        }
      else
        {
          t = g_53;
          {
            ATerm i_53 = t;
            int k_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_16, n_16, o_16, t);
                LocalPopChoice(k_53);
              }
            else
              {
                t = i_53;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_16, t);
  }
  {
    ATerm l_53 = t;
    int m_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_113 = NULL;
        d_113 = t;
        {
          ATerm o_53 = t;
          int p_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_52 = NULL;
              t = d_113;
              {
                ATerm q_53 = t;
                int r_53 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_52 = NULL,i_52 = NULL;
                    t = term_k_21;
                    h_52 = t;
                    t = term_v_50;
                    i_52 = t;
                    t = term_w_50;
                    t = l_11(h_52, i_52, t);
                    LocalPopChoice(r_53);
                  }
                else
                  {
                    t = q_53;
                    t = fetch_1_0(p_16, t);
                  }
              }
              t = d_113;
              t = default_system_usage_0_0(t);
              t = term_q_47;
              f_52 = t;
              t = SSL_exit(f_52);
              LocalPopChoice(p_53);
            }
          else
            {
              t = o_53;
              {
                ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL;
                t = term_k_21;
                n_52 = t;
                t = term_v_51;
                o_52 = t;
                t = term_t_53;
                t = l_11(n_52, o_52, t);
                t = d_113;
                t = default_system_about_0_0(t);
                t = term_q_47;
                m_52 = t;
                t = SSL_exit(m_52);
              }
            }
        }
        LocalPopChoice(m_53);
      }
    else
      {
        t = l_53;
        {
          ATerm u_53 = t;
          int v_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL;
              static ATerm q_16 (ATerm t)
              {
                ATerm h_113 = NULL,i_113 = NULL,j_113 = NULL,u_20 = NULL;
                j_113 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_113 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_113);
                h_113 = t;
                t = i_113;
                if(((i_112 != NULL) && (i_112 != t)))
                  _fail(t);
                else
                  i_112 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_113);
                u_20 = t;
                t = SSLsetAnnotations(u_20, h_113);
                return(t);
              }
              t = fetch_1_0(q_16, t);
              t = term_w_19;
              f_113 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_112)), term_w_53);
              g_113 = t;
              t = SSL_printnl(f_113, g_113);
              t = (ATerm) ATmakeAppl(sym__2, term_w_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_112)), term_w_53));
              t = default_system_usage_0_0(t);
              t = term_k_47;
              e_113 = t;
              t = SSL_exit(e_113);
              LocalPopChoice(v_53);
            }
          else
            {
              t = u_53;
            }
        }
      }
  }
  j_112 = t;
  t = term_u_48;
  t = table_destroy_0_0(t);
  t = j_112;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_126 (ATerm), ATerm p_126 (ATerm), ATerm q_126 (ATerm), ATerm r_126 (ATerm), ATerm t)
{
  ATerm o_113 = NULL,p_113 = NULL,q_113 = NULL,r_113 = NULL,s_113 = NULL;
  t = parse_options_1_0(o_126, t);
  o_113 = t;
  t = term_x_53;
  t = table_create_0_0(t);
  t = term_x_53;
  p_113 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_53, term_z_53, o_113);
  t = lookup_table_0_1(p_113, t);
  s_113 = t;
  t = term_z_53;
  q_113 = t;
  t = s_113;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(q_113, o_113, r_113, t);
  t = o_113;
  t = q_126(t);
  {
    ATerm c_54 = t;
    int d_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_126, t);
        LocalPopChoice(d_54);
      }
    else
      {
        t = c_54;
        {
          ATerm e_54 = t;
          int f_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_126(t);
              t = report_success_0_0(t);
              LocalPopChoice(f_54);
            }
          else
            {
              t = e_54;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm g_54 = t;
  int k_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = stratego_warnings_options_0_0(t);
      LocalPopChoice(k_54);
    }
  else
    {
      t = g_54;
      {
        ATerm l_54 = t;
        int m_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(m_54);
          }
        else
          {
            t = l_54;
            {
              ATerm n_54 = t;
              int t_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(t_54);
                }
              else
                {
                  t = n_54;
                  {
                    ATerm u_54 = t;
                    int v_54 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(u_16, v_16, x_16, t);
                        LocalPopChoice(v_54);
                      }
                    else
                      {
                        t = u_54;
                        {
                          ATerm z_54 = t;
                          int a_55 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(a_55);
                            }
                          else
                            {
                              t = z_54;
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
static ATerm s_16 (ATerm t)
{
  t = input_1_0(z_16, t);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm u_113 = NULL,v_113 = NULL;
  t = term_v_45;
  u_113 = t;
  t = term_h_47;
  v_113 = t;
  t = term_c_55;
  t = o_11(u_113, v_113, t);
  t = term_d_55;
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = term_e_55;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = output_1_0(a_17, t);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm x_113 = NULL;
  x_113 = t;
  t = spec_use_def_0_0(t);
  t = x_113;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_16, default_usage_0_0, _id, s_16, t);
  return(t);
}
