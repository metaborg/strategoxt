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
Symbol sym_Overlay_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
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
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
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
ATerm term_q_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_u_51;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_u_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_z_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_o_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_e_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_w_46;
ATerm term_v_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_q_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_m_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_z_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_p_44;
ATerm term_m_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_d_44;
ATerm term_a_44;
ATerm term_v_36;
ATerm term_t_36;
ATerm term_r_36;
ATerm term_p_36;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_c_30;
ATerm term_d_29;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_f_28;
ATerm term_m_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_d_21;
ATerm term_s_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_c_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_r_19;
ATerm term_a_19;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_o_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_h_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym__2, term_h_17, (ATerm) ATempty);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATempty);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_k_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Defined_2, term_f_28, term_j_28);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Defined_2, term_g_34, term_j_28);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym_Defined_2, term_r_36, term_t_36);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_h_44);
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_m_44);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_z_45);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(sym__2, term_o_46, term_q_46);
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_46);
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(sym__2, term_w_46, term_f_46);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_q_46);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_j_46);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_l_48);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_o_46);
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_f_49);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(sym__2, term_f_47, term_g_47);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(sym__2, term_z_49, term_f_46);
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(sym__2, term_d_50, term_f_46);
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(sym__2, term_f_49, term_f_46);
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_z_49);
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(sym__2, term_m_44, term_f_46);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm r_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm j_9 (ATerm n_23, ATerm m_23, ATerm o_23, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
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
ATerm mark_guardedlchoice_1_0 (ATerm s_119 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm r_119 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm q_119 (ATerm), ATerm t);
static ATerm k_9 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm y_92 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm l_9 (ATerm z_65, ATerm a_66, ATerm b_66, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_9 (ATerm t_65, ATerm x_65, ATerm v_65, ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm n_9 (ATerm n_65, ATerm r_65, ATerm p_65, ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm o_9 (ATerm l_64, ATerm m_64, ATerm n_64, ATerm p_64, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm p_9 (ATerm w_62, ATerm x_62, ATerm v_62, ATerm t);
static ATerm r_4 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm q_9 (ATerm g_32, ATerm f_32, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm j_63 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm r_9 (ATerm q_31, ATerm r_31, ATerm s_31, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm u_9 (ATerm o_31, ATerm p_31, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm v_9 (ATerm x_90 (ATerm), ATerm z_29, ATerm x_29, ATerm t);
static ATerm g_5 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm z_9 (ATerm w_86 (ATerm), ATerm l_24, ATerm k_24, ATerm t);
ATerm foldr_3_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm t);
static ATerm a_10 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm p_24, ATerm o_24, ATerm t);
static ATerm b_10 (ATerm r_86 (ATerm), ATerm j_24, ATerm i_24, ATerm t);
ATerm genzip_4_0 (ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm g_10 (ATerm q_639, ATerm v_639, ATerm z_61, ATerm t);
ATerm while_not_2_0 (ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm t);
ATerm for_3_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm d_93 (ATerm v_91, ATerm w_91, ATerm x_91, ATerm t);
static ATerm y_7 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm free_vars_3_0 (ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm z_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm topdown_1_0 (ATerm g_91 (ATerm), ATerm t);
static ATerm i_10 (ATerm i_31, ATerm j_31, ATerm t);
ATerm end_scope_1_0 (ATerm u_90 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm t_90 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm v_90 (ATerm), ATerm w_90 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm k_11 (ATerm t);
ATerm def_use_def_0_0 (ATerm t);
ATerm filter_1_0 (ATerm y_103 (ATerm), ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm spec_use_def_0_0 (ATerm t);
static ATerm k_10 (ATerm j_39, ATerm k_39, ATerm t);
static ATerm l_10 (ATerm g_45, ATerm h_45, ATerm t);
static ATerm n_10 (ATerm v_100 (ATerm), ATerm w_423, ATerm m_45, ATerm t);
static ATerm m_10 (ATerm c_45, ATerm d_45, ATerm t);
static ATerm u_11 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm output_1_0 (ATerm b_116 (ATerm), ATerm t);
static ATerm c_99 (ATerm w_98, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_10 (ATerm i_45, ATerm t);
static ATerm p_10 (ATerm c_38, ATerm d_38, ATerm t);
static ATerm q_10 (ATerm l_39, ATerm m_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_100 (ATerm m_99, ATerm t);
static ATerm u_100 (ATerm q_99, ATerm r_99, ATerm s_99, ATerm t);
static ATerm w_100 (ATerm g_100, ATerm h_100, ATerm i_100, ATerm t);
static ATerm r_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm c_116 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm w_12 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm w_13 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_10 (ATerm e_43, ATerm f_43, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm g_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm k_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm v_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm y_87 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_104 (ATerm a_104, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_10 (ATerm k_43, ATerm j_43, ATerm t);
static ATerm w_10 (ATerm d_31, ATerm e_31, ATerm c_31, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_10 (ATerm l_28, ATerm m_28, ATerm t);
ATerm foldr_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm u_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_96 (ATerm), ATerm t);
static ATerm v_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_15 (ATerm t);
ATerm need_help_1_0 (ATerm s_115 (ATerm), ATerm t);
ATerm map_1_0 (ATerm h_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm z_15 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_87 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_10 (ATerm u_32, ATerm v_32, ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm m_16 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_117 (ATerm), ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
ATerm parse_options_1_0 (ATerm u_117 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm x_115 (ATerm), ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_h_17;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_i_17;
  return(t);
}
static ATerm j_9 (ATerm n_23, ATerm m_23, ATerm o_23, ATerm t)
{
  ATerm a_0 = NULL,p_0 = NULL,t_0 = NULL,v_0 = NULL,x_0 = NULL;
  a_0 = t;
  t = (ATerm) ATempty;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_17, n_23);
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_17, n_23));
  t = v_9(r_0, v_0, x_0, t);
  t = (ATerm) ATempty;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_17, n_23);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_m_17, n_23));
  t = v_9(z_0, p_0, t_0, t);
  t = o_23;
  t = use_vars_0_0(t);
  t = a_0;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_h_17;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_i_17;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_h_17;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_i_17;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_h_17;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_i_17;
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
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_17, z_2);
            s_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_17, z_2));
            t = v_9(b_1, o_3, s_3, t);
            t = (ATerm) ATempty;
            m_3 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_17, z_2);
            n_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_17, z_2));
            t = v_9(c_1, m_3, n_3, t);
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
            ATerm p_17 = t;
            int q_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,t_3 = NULL;
                t = (ATerm) ATempty;
                r_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_17, z_2);
                t_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_s_17, z_2));
                t = v_9(d_1, r_3, t_3, t);
                t = (ATerm) ATempty;
                p_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_17, z_2);
                q_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_17, z_2));
                t = v_9(e_1, p_3, q_3, t);
                t = r_2;
                t = bind_vars_0_0(t);
                LocalPopChoice(q_17);
              }
            else
              {
                t = p_17;
                {
                  ATerm u_17 = t;
                  int v_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_2;
                      t = unbound_vars_0_0(t);
                      LocalPopChoice(v_17);
                    }
                  else
                    {
                      t = u_17;
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
            ATerm n_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL;
            t = (ATerm) ATempty;
            r_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_18, z_2);
            s_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_a_18, z_2));
            t = v_9(m_1, r_5, s_5, t);
            t = (ATerm) ATempty;
            n_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_18, z_2);
            q_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_b_18, z_2));
            t = v_9(n_1, n_5, q_5, t);
            t = c_3;
            t = bind_vars_0_0(t);
            LocalPopChoice(x_17);
          }
        else
          {
            t = w_17;
            {
              ATerm c_18 = t;
              int e_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_3;
                  t = unbound_vars_0_0(t);
                  LocalPopChoice(e_18);
                }
              else
                {
                  t = c_18;
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
  ATerm e_5 = NULL;
  e_5 = t;
  {
    ATerm f_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_7 = NULL,d_7 = NULL,f_7 = NULL;
        t = (ATerm) ATempty;
        d_7 = t;
        t = term_h_17;
        f_7 = t;
        t = term_o_18;
        t = u_9(f_7, d_7, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm p_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_18) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            b_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_5), term_r_18), b_7), term_q_18);
        LocalPopChoice(n_18);
      }
    else
      {
        t = f_18;
        {
          ATerm s_18 = t;
          int w_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_7 = NULL,e_8 = NULL,g_8 = NULL;
              t = (ATerm) ATempty;
              e_8 = t;
              t = term_h_17;
              g_8 = t;
              t = term_o_18;
              t = u_9(g_8, e_8, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm y_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_18) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  v_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_5), term_r_18), v_7), term_a_19);
              LocalPopChoice(w_18);
            }
          else
            {
              t = s_18;
              {
                ATerm c_19 = t;
                int f_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_8 = NULL,r_8 = NULL,v_8 = NULL;
                    t = (ATerm) ATempty;
                    r_8 = t;
                    t = term_h_17;
                    v_8 = t;
                    t = term_o_18;
                    t = u_9(v_8, r_8, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm g_19 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) g_19) != ATmakeSymbol("q_0", 0, ATtrue)))
                          _fail(t);
                        m_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_5), term_r_18), m_8), term_a_19);
                    LocalPopChoice(f_19);
                  }
                else
                  {
                    t = c_19;
                    {
                      ATerm i_19 = t;
                      int j_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_9 = NULL,e_9 = NULL,h_9 = NULL;
                          t = (ATerm) ATempty;
                          e_9 = t;
                          t = term_h_17;
                          h_9 = t;
                          t = term_o_18;
                          t = u_9(h_9, e_9, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm l_19 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) l_19) != ATmakeSymbol("m_0", 0, ATtrue)))
                                _fail(t);
                              b_9 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_5), term_r_18), b_9), term_a_19);
                          LocalPopChoice(j_19);
                        }
                      else
                        {
                          t = i_19;
                          {
                            ATerm m_19 = t;
                            int n_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm z_10 = NULL,c_11 = NULL,d_11 = NULL;
                                t = (ATerm) ATempty;
                                c_11 = t;
                                t = term_h_17;
                                d_11 = t;
                                t = term_o_18;
                                t = u_9(d_11, c_11, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm p_19 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) p_19) != ATmakeSymbol("h_0", 0, ATtrue)))
                                      _fail(t);
                                    z_10 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_5), term_r_18), z_10), term_r_19);
                                LocalPopChoice(n_19);
                              }
                            else
                              {
                                t = m_19;
                                {
                                  ATerm j_11 = NULL,l_11 = NULL,m_11 = NULL;
                                  t = (ATerm) ATempty;
                                  l_11 = t;
                                  t = term_h_17;
                                  m_11 = t;
                                  t = term_o_18;
                                  t = u_9(m_11, l_11, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm t_19 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) t_19) != ATmakeSymbol("b_0", 0, ATtrue)))
                                        _fail(t);
                                      j_11 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_5), term_r_18), j_11), term_r_19);
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
  ATerm o_5 = NULL,p_5 = NULL,v_5 = NULL,x_5 = NULL,a_6 = NULL,d_6 = NULL;
  a_6 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6;
  if(match_cons(t, sym_ListVar_1))
    {
      x_5 = ATgetArgument(t, 0);
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_5;
            o_5 = t;
            t = a_6;
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            t = d_6;
            o_5 = t;
            t = a_6;
          }
      }
    }
  else
    {
      t = d_6;
      o_5 = t;
      t = a_6;
    }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_19), o_5), term_x_19);
  t = Context_0_0(t);
  p_5 = t;
  t = term_z_19;
  v_5 = t;
  t = SSL_printnl(v_5, p_5);
  t = p_5;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm x_7 = NULL;
  x_7 = t;
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_13 = NULL,h_13 = NULL,k_13 = NULL;
        t = (ATerm) ATempty;
        h_13 = t;
        t = term_i_17;
        k_13 = t;
        t = term_c_20;
        t = u_9(k_13, h_13, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm l_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_20) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            b_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_7), term_n_20), b_13), term_m_20);
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        {
          ATerm p_20 = t;
          int q_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_13 = NULL,q_13 = NULL,r_13 = NULL;
              t = (ATerm) ATempty;
              q_13 = t;
              t = term_i_17;
              r_13 = t;
              t = term_c_20;
              t = u_9(r_13, q_13, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm r_20 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) r_20) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  o_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_7), term_n_20), o_13), term_s_20);
              LocalPopChoice(q_20);
            }
          else
            {
              t = p_20;
              {
                ATerm t_20 = t;
                int v_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_13 = NULL,x_13 = NULL,f_14 = NULL;
                    t = (ATerm) ATempty;
                    x_13 = t;
                    t = term_i_17;
                    f_14 = t;
                    t = term_c_20;
                    t = u_9(f_14, x_13, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm w_20 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) w_20) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        v_13 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_7), term_n_20), v_13), term_s_20);
                    LocalPopChoice(v_20);
                  }
                else
                  {
                    t = t_20;
                    {
                      ATerm x_20 = t;
                      int y_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_14 = NULL,n_14 = NULL,s_14 = NULL;
                          t = (ATerm) ATempty;
                          n_14 = t;
                          t = term_i_17;
                          s_14 = t;
                          t = term_c_20;
                          t = u_9(s_14, n_14, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm z_20 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) z_20) != ATmakeSymbol("o_0", 0, ATtrue)))
                                _fail(t);
                              l_14 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_7), term_n_20), l_14), term_s_20);
                          LocalPopChoice(y_20);
                        }
                      else
                        {
                          t = x_20;
                          {
                            ATerm a_21 = t;
                            int b_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm y_14 = NULL,a_15 = NULL,f_15 = NULL;
                                t = (ATerm) ATempty;
                                a_15 = t;
                                t = term_i_17;
                                f_15 = t;
                                t = term_c_20;
                                t = u_9(f_15, a_15, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm c_21 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) c_21) != ATmakeSymbol("j_0", 0, ATtrue)))
                                      _fail(t);
                                    y_14 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_7), term_n_20), y_14), term_d_21);
                                LocalPopChoice(b_21);
                              }
                            else
                              {
                                t = a_21;
                                {
                                  ATerm j_15 = NULL,l_15 = NULL,m_15 = NULL;
                                  t = (ATerm) ATempty;
                                  l_15 = t;
                                  t = term_i_17;
                                  m_15 = t;
                                  t = term_c_20;
                                  t = u_9(m_15, l_15, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm e_21 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) e_21) != ATmakeSymbol("f_0", 0, ATtrue)))
                                        _fail(t);
                                      j_15 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_7), term_n_20), j_15), term_d_21);
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
  ATerm k_8 = NULL,l_8 = NULL,n_8 = NULL,p_8 = NULL;
  n_8 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8;
  if(match_cons(t, sym_ListVar_1))
    {
      l_8 = ATgetArgument(t, 0);
      {
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_8;
            k_8 = t;
            t = n_8;
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            t = p_8;
            k_8 = t;
            t = n_8;
          }
      }
    }
  else
    {
      t = p_8;
      k_8 = t;
      t = n_8;
    }
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL;
        t = term_j_21;
        t_8 = t;
        t = term_k_21;
        u_8 = t;
        t = term_l_21;
        t = v_10(t_8, u_8, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_21), k_8), term_x_19);
        t = Warning_0_0(t);
        q_8 = t;
        t = term_z_19;
        s_8 = t;
        t = SSL_printnl(s_8, q_8);
        t = q_8;
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm d_9 = NULL,f_9 = NULL;
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_9 = NULL,i_9 = NULL;
      g_9 = t;
      if(match_cons(t, sym_Var_1))
        {
          f_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      i_9 = t;
      t = SSLgetAnnotations(g_9);
      d_9 = t;
      t = i_9;
      LocalPopChoice(o_21);
      {
        ATerm s_9 = NULL;
        s_9 = t;
        t = d_9;
        {
          ATerm p_21 = t;
          int q_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm s_21 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) s_21) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm t_21 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(t_21) != AT_LIST) || !(ATisEmpty(t_21))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(q_21);
              _fail(t);
            }
          else
            {
              t = p_21;
              {
                ATerm u_21 = t;
                int w_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm x_21 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) x_21) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm y_21 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(y_21) != AT_LIST) || !(ATisEmpty(y_21))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_21);
                    t = (ATerm) ATmakeAppl(sym_Var_1, f_9);
                    t = MaybeUnbound_0_0(t);
                    _fail(t);
                  }
                else
                  {
                    t = u_21;
                    {
                      ATerm z_21 = t;
                      int a_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm b_22 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) b_22) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm c_22 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(c_22) != AT_LIST) || !(ATisEmpty(c_22))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(a_22);
                          t = (ATerm) ATmakeAppl(sym_Var_1, f_9);
                          t = Unbound_0_0(t);
                        }
                      else
                        {
                          t = z_21;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, f_9);
                          t = Unbound_0_0(t);
                        }
                    }
                  }
              }
            }
        }
        t = s_9;
      }
    }
  else
    {
      t = n_21;
      {
        ATerm d_22 = t;
        int e_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,f_1 = NULL;
            y_9 = t;
            if(match_cons(t, sym_App_2))
              {
                w_9 = ATgetArgument(t, 0);
                x_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(y_9);
            t_9 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, w_9, x_9);
            f_1 = t;
            t = SSLsetAnnotations(f_1, t_9);
            LocalPopChoice(e_22);
            {
              ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,t_10 = NULL,x_10 = NULL,b_11 = NULL,h_1 = NULL;
              b_11 = t;
              if(match_cons(t, sym_App_2))
                {
                  d_10 = ATgetArgument(t, 0);
                  e_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(b_11);
              c_10 = t;
              t = d_10;
              t = unbound_vars_0_0(t);
              t_10 = t;
              t = e_10;
              t = use_vars_0_0(t);
              x_10 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, t_10, x_10);
              h_1 = t;
              t = SSLsetAnnotations(h_1, c_10);
            }
          }
        else
          {
            t = d_22;
            {
              ATerm f_22 = t;
              int g_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_11 = NULL,h_11 = NULL,t_11 = NULL,j_1 = NULL;
                  t_11 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      h_11 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_11);
                  e_11 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, h_11);
                  j_1 = t;
                  t = SSLsetAnnotations(j_1, e_11);
                  LocalPopChoice(g_22);
                  {
                    ATerm w_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,l_1 = NULL;
                    a_12 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        y_11 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(a_12);
                    w_11 = t;
                    t = y_11;
                    t = unbound_vars_0_0(t);
                    z_11 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, z_11);
                    l_1 = t;
                    t = SSLsetAnnotations(l_1, w_11);
                  }
                }
              else
                {
                  t = f_22;
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
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_12 = NULL,d_12 = NULL,e_12 = NULL,q_1 = NULL;
      e_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_12);
      b_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_12);
      q_1 = t;
      t = SSLsetAnnotations(q_1, b_12);
      LocalPopChoice(j_22);
      _fail(t);
    }
  else
    {
      t = i_22;
      {
        ATerm k_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_12 = NULL,g_12 = NULL,i_12 = NULL,p_12 = NULL,r_1 = NULL;
            p_12 = t;
            if(match_cons(t, sym_App_2))
              {
                g_12 = ATgetArgument(t, 0);
                i_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_12);
            f_12 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, g_12, i_12);
            r_1 = t;
            t = SSLsetAnnotations(r_1, f_12);
            LocalPopChoice(m_22);
            {
              ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,v_12 = NULL,x_12 = NULL,y_12 = NULL,s_1 = NULL;
              y_12 = t;
              if(match_cons(t, sym_App_2))
                {
                  r_12 = ATgetArgument(t, 0);
                  s_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(y_12);
              q_12 = t;
              t = r_12;
              t = unbound_vars_0_0(t);
              v_12 = t;
              t = s_12;
              t = use_vars_0_0(t);
              x_12 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, v_12, x_12);
              s_1 = t;
              t = SSLsetAnnotations(s_1, q_12);
            }
          }
        else
          {
            t = k_22;
            {
              ATerm o_22 = t;
              int p_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_12 = NULL,d_13 = NULL,e_13 = NULL,t_1 = NULL;
                  e_13 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      d_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_13);
                  z_12 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, d_13);
                  t_1 = t;
                  t = SSLsetAnnotations(t_1, z_12);
                  LocalPopChoice(p_22);
                  {
                    ATerm f_13 = NULL,g_13 = NULL,i_13 = NULL,j_13 = NULL,u_1 = NULL;
                    j_13 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        g_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(j_13);
                    f_13 = t;
                    t = g_13;
                    t = unbound_vars_0_0(t);
                    i_13 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, i_13);
                    u_1 = t;
                    t = SSLsetAnnotations(u_1, f_13);
                  }
                }
              else
                {
                  t = o_22;
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
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL,a_2 = NULL;
      a_14 = t;
      if(match_cons(t, sym_Build_1))
        {
          z_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_14);
      y_13 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
      a_2 = t;
      t = SSLsetAnnotations(a_2, y_13);
      LocalPopChoice(r_22);
      {
        ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,b_2 = NULL;
        e_14 = t;
        if(match_cons(t, sym_Build_1))
          {
            c_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_14);
        b_14 = t;
        t = c_14;
        t = use_vars_0_0(t);
        d_14 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, d_14);
        b_2 = t;
        t = SSLsetAnnotations(b_2, b_14);
      }
    }
  else
    {
      t = q_22;
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_14 = NULL,j_14 = NULL,o_14 = NULL,c_2 = NULL;
            o_14 = t;
            if(match_cons(t, sym_Match_1))
              {
                j_14 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(o_14);
            h_14 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, j_14);
            c_2 = t;
            t = SSLsetAnnotations(c_2, h_14);
            LocalPopChoice(t_22);
            {
              ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,u_14 = NULL,d_2 = NULL;
              u_14 = t;
              if(match_cons(t, sym_Match_1))
                {
                  q_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(u_14);
              p_14 = t;
              t = q_14;
              t = bind_vars_0_0(t);
              r_14 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, r_14);
              d_2 = t;
              t = SSLsetAnnotations(d_2, p_14);
            }
          }
        else
          {
            t = s_22;
            {
              ATerm v_22 = t;
              int w_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_14 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,e_2 = NULL;
                  e_15 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      b_15 = ATgetArgument(t, 0);
                      c_15 = ATgetArgument(t, 1);
                      d_15 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_15);
                  w_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, b_15, c_15, d_15);
                  e_2 = t;
                  t = SSLsetAnnotations(e_2, w_14);
                  LocalPopChoice(w_22);
                  {
                    ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
                    g_18 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        h_18 = ATgetArgument(t, 0);
                        i_18 = ATgetArgument(t, 1);
                        j_18 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm y_22 = t;
                      int j_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm w_15 = NULL,a_16 = NULL,f_2 = NULL;
                          t = SSLgetAnnotations(g_18);
                          w_15 = t;
                          t = h_18;
                          t = bind_vars_0_0(t);
                          a_16 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, a_16, i_18, j_18);
                          f_2 = t;
                          t = SSLsetAnnotations(f_2, w_15);
                          LocalPopChoice(j_23);
                        }
                      else
                        {
                          t = y_22;
                          {
                            ATerm p_23 = t;
                            int s_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm t_16 = NULL,y_16 = NULL,g_2 = NULL;
                                t = SSLgetAnnotations(g_18);
                                t_16 = t;
                                t = j_18;
                                t = unbound_vars_0_0(t);
                                y_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, h_18, i_18, y_16);
                                g_2 = t;
                                t = SSLsetAnnotations(g_2, t_16);
                                LocalPopChoice(s_23);
                              }
                            else
                              {
                                t = p_23;
                                {
                                  ATerm r_17 = NULL,z_17 = NULL,h_2 = NULL;
                                  t = SSLgetAnnotations(g_18);
                                  r_17 = t;
                                  t = i_18;
                                  t = use_vars_0_0(t);
                                  z_17 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, h_18, z_17, j_18);
                                  h_2 = t;
                                  t = SSLsetAnnotations(h_2, r_17);
                                }
                              }
                          }
                        }
                    }
                  }
                }
              else
                {
                  t = v_22;
                  {
                    ATerm u_23 = t;
                    int v_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,t_18 = NULL,u_18 = NULL,i_2 = NULL;
                        u_18 = t;
                        if(match_cons(t, sym_PrimT_3))
                          {
                            l_18 = ATgetArgument(t, 0);
                            m_18 = ATgetArgument(t, 1);
                            t_18 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(u_18);
                        k_18 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, l_18, m_18, t_18);
                        i_2 = t;
                        t = SSLsetAnnotations(i_2, k_18);
                        LocalPopChoice(v_23);
                        {
                          ATerm w_19 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
                          w_19 = t;
                          if(match_cons(t, sym_PrimT_3))
                            {
                              d_20 = ATgetArgument(t, 0);
                              e_20 = ATgetArgument(t, 1);
                              f_20 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          {
                            ATerm w_23 = t;
                            int y_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm e_19 = NULL,k_19 = NULL,j_2 = NULL;
                                t = SSLgetAnnotations(w_19);
                                e_19 = t;
                                t = e_20;
                                t = unbound_vars_0_0(t);
                                k_19 = t;
                                t = (ATerm) ATmakeAppl(sym_PrimT_3, d_20, k_19, f_20);
                                j_2 = t;
                                t = SSLsetAnnotations(j_2, e_19);
                                LocalPopChoice(y_23);
                              }
                            else
                              {
                                t = w_23;
                                {
                                  ATerm o_20 = NULL,u_20 = NULL,m_2 = NULL;
                                  t = SSLgetAnnotations(w_19);
                                  o_20 = t;
                                  t = f_20;
                                  t = use_vars_0_0(t);
                                  u_20 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, d_20, e_20, u_20);
                                  m_2 = t;
                                  t = SSLsetAnnotations(m_2, o_20);
                                }
                              }
                          }
                        }
                      }
                    else
                      {
                        t = u_23;
                        {
                          ATerm z_23 = t;
                          int a_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,n_2 = NULL;
                              k_20 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  h_20 = ATgetArgument(t, 0);
                                  i_20 = ATgetArgument(t, 1);
                                  j_20 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(k_20);
                              g_20 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, h_20, i_20, j_20);
                              n_2 = t;
                              t = SSLsetAnnotations(n_2, g_20);
                              LocalPopChoice(a_24);
                              {
                                ATerm l_22 = NULL,u_22 = NULL,x_22 = NULL,g_23 = NULL;
                                l_22 = t;
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    u_22 = ATgetArgument(t, 0);
                                    x_22 = ATgetArgument(t, 1);
                                    g_23 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm b_24 = t;
                                  int c_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm r_21 = NULL,v_21 = NULL,o_2 = NULL;
                                      t = SSLgetAnnotations(l_22);
                                      r_21 = t;
                                      t = x_22;
                                      t = unbound_vars_0_0(t);
                                      v_21 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, u_22, v_21, g_23);
                                      o_2 = t;
                                      t = SSLsetAnnotations(o_2, r_21);
                                      LocalPopChoice(c_24);
                                    }
                                  else
                                    {
                                      t = b_24;
                                      {
                                        ATerm h_22 = NULL,n_22 = NULL,p_2 = NULL;
                                        t = SSLgetAnnotations(l_22);
                                        h_22 = t;
                                        t = g_23;
                                        t = use_vars_0_0(t);
                                        n_22 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, u_22, x_22, n_22);
                                        p_2 = t;
                                        t = SSLsetAnnotations(p_2, h_22);
                                      }
                                    }
                                }
                              }
                            }
                          else
                            {
                              t = z_23;
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
  t = term_h_17;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_i_17;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_h_17;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm h_24 = NULL,n_24 = NULL,r_24 = NULL,s_24 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      n_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
      s_24 = ATgetArgument(t, 2);
      h_24 = ATgetArgument(t, 3);
      {
        ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
        t = (ATerm) ATempty;
        l_25 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_24, n_24);
        m_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_24, n_24));
        t = v_9(o_1, l_25, m_25, t);
        t = (ATerm) ATempty;
        j_25 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_24, n_24);
        k_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_24, n_24));
        t = v_9(p_1, j_25, k_25, t);
        t = h_24;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, n_24, r_24, s_24, h_24);
      }
    }
  else
    {
      ATerm q_25 = NULL,v_25 = NULL,b_26 = NULL,c_26 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          n_24 = ATgetArgument(t, 0);
          r_24 = ATgetArgument(t, 1);
          s_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      b_26 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_24, n_24);
      c_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_24, n_24));
      t = v_9(v_1, b_26, c_26, t);
      t = (ATerm) ATempty;
      q_25 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_24, n_24);
      v_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_24, n_24));
      t = v_9(w_1, q_25, v_25, t);
      t = s_24;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, n_24, r_24, s_24);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm s_119 (ATerm), ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,y_4 = NULL;
  static ATerm x_1 (ATerm t)
  {
    ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,w_26 = NULL,c_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,l_27 = NULL,m_27 = NULL,a_5 = NULL,z_4 = NULL;
    m_27 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        g_27 = ATgetArgument(t, 0);
        h_27 = ATgetArgument(t, 1);
        i_27 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_27);
    f_27 = t;
    t = g_27;
    t = s_119(t);
    j_27 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, j_27, h_27, i_27);
    z_4 = t;
    t = SSLsetAnnotations(z_4, f_27);
    l_27 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        n_26 = ATgetArgument(t, 0);
        o_26 = ATgetArgument(t, 1);
        w_26 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_27);
    m_26 = t;
    t = o_26;
    t = s_119(t);
    c_27 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, n_26, c_27, w_26);
    a_5 = t;
    t = SSLsetAnnotations(a_5, m_26);
    return(t);
  }
  static ATerm y_1 (ATerm t)
  {
    ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,r_27 = NULL,w_27 = NULL,z_27 = NULL,b_5 = NULL;
    z_27 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        o_27 = ATgetArgument(t, 0);
        p_27 = ATgetArgument(t, 1);
        r_27 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_27);
    n_27 = t;
    t = r_27;
    t = s_119(t);
    w_27 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, o_27, p_27, w_27);
    b_5 = t;
    t = SSLsetAnnotations(b_5, n_27);
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
  y_4 = t;
  t = SSLsetAnnotations(y_4, h_26);
  t = abstract_choice_2_0(x_1, y_1, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm r_119 (ATerm), ATerm t)
{
  ATerm c_28 = NULL,e_28 = NULL,g_28 = NULL,h_28 = NULL,h_5 = NULL;
  static ATerm z_1 (ATerm t)
  {
    ATerm i_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,i_5 = NULL;
    s_28 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        p_28 = ATgetArgument(t, 0);
        q_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_28);
    i_28 = t;
    t = p_28;
    t = r_119(t);
    r_28 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, r_28, q_28);
    i_5 = t;
    t = SSLsetAnnotations(i_5, i_28);
    return(t);
  }
  static ATerm k_2 (ATerm t)
  {
    ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,j_5 = NULL;
    x_28 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        u_28 = ATgetArgument(t, 0);
        v_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_28);
    t_28 = t;
    t = v_28;
    t = r_119(t);
    w_28 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, u_28, w_28);
    j_5 = t;
    t = SSLsetAnnotations(j_5, t_28);
    return(t);
  }
  h_28 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      e_28 = ATgetArgument(t, 0);
      g_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_28);
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, e_28, g_28);
  h_5 = t;
  t = SSLsetAnnotations(h_5, c_28);
  t = abstract_choice_2_0(z_1, k_2, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm t)
{
  ATerm y_28 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
  i_29 = t;
  t = save_MarkVar_0_0(t);
  y_28 = t;
  t = i_29;
  t = t_119(t);
  h_29 = t;
  t = save_MarkVar_0_0(t);
  f_29 = t;
  t = term_m_24;
  k_29 = t;
  t = SSL_table_destroy(k_29);
  t = term_m_24;
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_24, y_28);
  t = q_9(j_29, y_28, t);
  t = h_29;
  t = u_119(t);
  g_29 = t;
  t = f_29;
  t = isect_MarkVar_0_0(t);
  t = g_29;
  return(t);
}
ATerm mark_choice_1_0 (ATerm q_119 (ATerm), ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,f_6 = NULL;
  static ATerm l_2 (ATerm t)
  {
    ATerm p_29 = NULL,q_29 = NULL,j_30 = NULL,l_30 = NULL,m_30 = NULL,g_6 = NULL;
    m_30 = t;
    if(match_cons(t, sym_Choice_2))
      {
        q_29 = ATgetArgument(t, 0);
        j_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_30);
    p_29 = t;
    t = q_29;
    t = q_119(t);
    l_30 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, l_30, j_30);
    g_6 = t;
    t = SSLsetAnnotations(g_6, p_29);
    return(t);
  }
  static ATerm s_2 (ATerm t)
  {
    ATerm n_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,v_30 = NULL,h_6 = NULL;
    v_30 = t;
    if(match_cons(t, sym_Choice_2))
      {
        q_30 = ATgetArgument(t, 0);
        r_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_30);
    n_30 = t;
    t = r_30;
    t = q_119(t);
    s_30 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, q_30, s_30);
    h_6 = t;
    t = SSLsetAnnotations(h_6, n_30);
    return(t);
  }
  o_29 = t;
  if(match_cons(t, sym_Choice_2))
    {
      m_29 = ATgetArgument(t, 0);
      n_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_29);
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, m_29, n_29);
  f_6 = t;
  t = SSLsetAnnotations(f_6, l_29);
  t = abstract_choice_2_0(l_2, s_2, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,z_30 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,v_31 = NULL,w_31 = NULL,y_31 = NULL,m_6 = NULL,l_6 = NULL;
  x_30 = t;
  t = save_MarkVar_0_0(t);
  w_30 = t;
  t = x_30;
  if(match_cons(t, sym_Rec_2))
    {
      v_31 = ATgetArgument(t, 0);
      w_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_30);
  n_31 = t;
  t = w_31;
  t = mark_buv_0_0(t);
  y_31 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, v_31, y_31);
  l_6 = t;
  t = SSLsetAnnotations(l_6, n_31);
  t = w_30;
  t = isect_MarkVar_0_0(t);
  t = x_30;
  if(match_cons(t, sym_Rec_2))
    {
      k_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_30);
  z_30 = t;
  t = l_31;
  t = mark_buv_0_0(t);
  m_31 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, k_31, m_31);
  m_6 = t;
  t = SSLsetAnnotations(m_6, z_30);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm a_32 = NULL,l_32 = NULL,m_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,r_6 = NULL,q_6 = NULL,p_6 = NULL;
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
  p_6 = t;
  t = SSLsetAnnotations(p_6, b_33);
  f_33 = t;
  t = save_MarkVar_0_0(t);
  a_32 = t;
  t = f_33;
  if(match_cons(t, sym_PrimT_3))
    {
      w_32 = ATgetArgument(t, 0);
      x_32 = ATgetArgument(t, 1);
      y_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_33);
  t_32 = t;
  t = y_32;
  t = map_1_0(t_2, t);
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, w_32, x_32, z_32);
  q_6 = t;
  t = SSLsetAnnotations(q_6, t_32);
  a_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      m_32 = ATgetArgument(t, 0);
      p_32 = ATgetArgument(t, 1);
      q_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_33);
  l_32 = t;
  t = p_32;
  t = mark_buv_0_0(t);
  r_32 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, m_32, r_32, q_32);
  r_6 = t;
  t = SSLsetAnnotations(r_6, l_32);
  s_32 = t;
  t = a_32;
  t = isect_MarkVar_0_0(t);
  t = s_32;
  return(t);
}
ATerm alltd_1_0 (ATerm y_92 (ATerm), ATerm t)
{
  static ATerm h_33 (ATerm t)
  {
    ATerm q_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_92(t);
        LocalPopChoice(t_24);
      }
    else
      {
        t = q_24;
        t = SRTS_all(h_33, t);
      }
    return(t);
  }
  t = h_33(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm d_36 = NULL,k_36 = NULL,m_36 = NULL,n_36 = NULL;
  k_36 = t;
  if(match_cons(t, sym_CallT_3))
    {
      m_36 = ATgetArgument(t, 0);
      n_36 = ATgetArgument(t, 1);
      d_36 = ATgetArgument(t, 2);
      {
        ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,h_23 = NULL,i_23 = NULL,k_23 = NULL,l_23 = NULL,q_23 = NULL,r_23 = NULL,t_23 = NULL,x_23 = NULL,x_6 = NULL,w_6 = NULL,v_6 = NULL;
        t = SSLgetAnnotations(k_36);
        t_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, m_36, n_36, d_36);
        v_6 = t;
        t = SSLsetAnnotations(v_6, t_23);
        x_23 = t;
        t = save_MarkVar_0_0(t);
        z_22 = t;
        t = x_23;
        if(match_cons(t, sym_CallT_3))
          {
            i_23 = ATgetArgument(t, 0);
            k_23 = ATgetArgument(t, 1);
            l_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_23);
        h_23 = t;
        t = l_23;
        t = map_1_0(u_2, t);
        q_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, i_23, k_23, q_23);
        w_6 = t;
        t = SSLsetAnnotations(w_6, h_23);
        r_23 = t;
        if(match_cons(t, sym_CallT_3))
          {
            b_23 = ATgetArgument(t, 0);
            c_23 = ATgetArgument(t, 1);
            d_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_23);
        a_23 = t;
        t = c_23;
        t = mark_buv_0_0(t);
        e_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, b_23, e_23, d_23);
        x_6 = t;
        t = SSLsetAnnotations(x_6, a_23);
        f_23 = t;
        t = z_22;
        t = isect_MarkVar_0_0(t);
        t = f_23;
      }
    }
  else
    {
      ATerm v_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,g_25 = NULL,e_7 = NULL,a_7 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          m_36 = ATgetArgument(t, 0);
          n_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_36);
      d_25 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, m_36, n_36);
      a_7 = t;
      t = SSLsetAnnotations(a_7, d_25);
      g_25 = t;
      t = save_MarkVar_0_0(t);
      v_24 = t;
      t = g_25;
      if(match_cons(t, sym_Call_2))
        {
          z_24 = ATgetArgument(t, 0);
          a_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_25);
      y_24 = t;
      t = a_25;
      t = mark_buv_0_0(t);
      b_25 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, z_24, b_25);
      e_7 = t;
      t = SSLsetAnnotations(e_7, y_24);
      c_25 = t;
      t = v_24;
      t = isect_MarkVar_0_0(t);
      t = c_25;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_m_24;
  return(t);
}
static ATerm l_9 (ATerm z_65, ATerm a_66, ATerm b_66, ATerm t)
{
  ATerm u_36 = NULL;
  static ATerm f_3 (ATerm t)
  {
    t = a_66;
    t = map_1_0(IntroduceBound_0_0, t);
    t = b_66;
    t = mark_build_vars_0_0(t);
    if(((u_36 != NULL) && (u_36 != t)))
      _fail(t);
    else
      u_36 = t;
    return(t);
  }
  t = scope_2_0(v_2, f_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, z_65, a_66, not_null(u_36));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_m_24;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm i_37 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_37);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm u_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_24);
    }
  else
    {
      t = u_24;
      {
        ATerm x_24 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_25);
          }
        else
          {
            t = x_24;
            {
              ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  m_37 = ATgetArgument(t, 0);
                  n_37 = ATgetArgument(t, 1);
                  o_37 = ATgetArgument(t, 2);
                  p_37 = ATgetArgument(t, 3);
                  t = o_37;
                  t = map_1_0(k_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_37 = ATgetArgument(t, 0);
                      n_37 = ATgetArgument(t, 1);
                      o_37 = ATgetArgument(t, 2);
                      p_37 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_37;
                  t = map_1_0(l_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm e_38 = NULL;
  ATerm f_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_38 = ATgetArgument(t, 0);
          {
            ATerm i_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_25);
      t = e_38;
    }
  else
    {
      t = f_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_38;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm s_38 = NULL;
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_38 = ATgetArgument(t, 0);
          {
            ATerm p_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_25);
      t = s_38;
    }
  else
    {
      t = n_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_38;
    }
  return(t);
}
static ATerm m_9 (ATerm t_65, ATerm x_65, ATerm v_65, ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  static ATerm h_3 (ATerm t)
  {
    t = t_65;
    t = free_vars_3_0(i_3, j_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = t_65;
    t = mark_match_vars_0_0(t);
    if(((f_37 != NULL) && (f_37 != t)))
      _fail(t);
    else
      f_37 = t;
    t = v_65;
    t = mark_buv_0_0(t);
    if(((g_37 != NULL) && (g_37 != t)))
      _fail(t);
    else
      g_37 = t;
    t = x_65;
    t = mark_build_vars_0_0(t);
    if(((h_37 != NULL) && (h_37 != t)))
      _fail(t);
    else
      h_37 = t;
    return(t);
  }
  t = scope_2_0(g_3, h_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_37), not_null(h_37), not_null(g_37)));
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_m_24;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm h_39 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_39);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            {
              ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,u_39 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_39 = ATgetArgument(t, 0);
                  q_39 = ATgetArgument(t, 1);
                  r_39 = ATgetArgument(t, 2);
                  u_39 = ATgetArgument(t, 3);
                  t = r_39;
                  t = map_1_0(y_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_39 = ATgetArgument(t, 0);
                      q_39 = ATgetArgument(t, 1);
                      r_39 = ATgetArgument(t, 2);
                      u_39 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_39;
                  t = map_1_0(z_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm g_40 = NULL;
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_40 = ATgetArgument(t, 0);
          {
            ATerm y_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_25);
      t = g_40;
    }
  else
    {
      t = w_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_40;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm r_40 = NULL;
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_40 = ATgetArgument(t, 0);
          {
            ATerm d_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_26);
      t = r_40;
    }
  else
    {
      t = z_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_40;
    }
  return(t);
}
static ATerm n_9 (ATerm n_65, ATerm r_65, ATerm p_65, ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,g_39 = NULL;
  static ATerm v_3 (ATerm t)
  {
    t = n_65;
    t = free_vars_3_0(w_3, x_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = n_65;
    t = mark_match_vars_0_0(t);
    if(((a_39 != NULL) && (a_39 != t)))
      _fail(t);
    else
      a_39 = t;
    t = p_65;
    t = mark_buv_0_0(t);
    if(((b_39 != NULL) && (b_39 != t)))
      _fail(t);
    else
      b_39 = t;
    t = r_65;
    t = mark_build_vars_0_0(t);
    if(((g_39 != NULL) && (g_39 != t)))
      _fail(t);
    else
      g_39 = t;
    return(t);
  }
  t = scope_2_0(u_3, v_3, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_39), not_null(g_39), not_null(b_39)));
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm t_42 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_42);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm e_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_26);
    }
  else
    {
      t = e_26;
      {
        ATerm p_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_26);
          }
        else
          {
            t = p_26;
            {
              ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  z_42 = ATgetArgument(t, 0);
                  a_43 = ATgetArgument(t, 1);
                  b_43 = ATgetArgument(t, 2);
                  c_43 = ATgetArgument(t, 3);
                  t = b_43;
                  t = map_1_0(c_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_42 = ATgetArgument(t, 0);
                      a_43 = ATgetArgument(t, 1);
                      b_43 = ATgetArgument(t, 2);
                      c_43 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_43;
                  t = map_1_0(d_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm t_43 = NULL;
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_43 = ATgetArgument(t, 0);
          {
            ATerm t_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_26);
      t = t_43;
    }
  else
    {
      t = r_26;
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
static ATerm d_4 (ATerm t)
{
  ATerm e_44 = NULL;
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_44 = ATgetArgument(t, 0);
          {
            ATerm x_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_26);
      t = e_44;
    }
  else
    {
      t = u_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_44;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_m_24;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm v_45 = NULL;
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_45 = ATgetArgument(t, 0);
          {
            ATerm a_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_26);
      t = v_45;
    }
  else
    {
      t = y_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_45;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm y_45 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_45);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm b_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_27);
    }
  else
    {
      t = b_27;
      {
        ATerm e_27 = t;
        int k_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_27);
          }
        else
          {
            t = e_27;
            {
              ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,g_46 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_46 = ATgetArgument(t, 0);
                  b_46 = ATgetArgument(t, 1);
                  c_46 = ATgetArgument(t, 2);
                  g_46 = ATgetArgument(t, 3);
                  t = c_46;
                  t = map_1_0(j_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_46 = ATgetArgument(t, 0);
                      b_46 = ATgetArgument(t, 1);
                      c_46 = ATgetArgument(t, 2);
                      g_46 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_46;
                  t = map_1_0(k_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm a_47 = NULL;
  ATerm q_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_47 = ATgetArgument(t, 0);
          {
            ATerm x_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_27);
      t = a_47;
    }
  else
    {
      t = q_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_47;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm l_47 = NULL;
  ATerm y_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_47 = ATgetArgument(t, 0);
          {
            ATerm d_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_28);
      t = l_47;
    }
  else
    {
      t = y_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_47;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,t_41 = NULL,u_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,f_42 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      t_41 = ATgetArgument(t, 0);
      u_41 = ATgetArgument(t, 1);
      x_41 = ATgetArgument(t, 2);
      {
        ATerm j_42 = NULL,n_42 = NULL,p_42 = NULL,s_42 = NULL;
        t = x_41;
        if(match_cons(t, sym_Rule_3))
          {
            p_41 = ATgetArgument(t, 0);
            q_41 = ATgetArgument(t, 1);
            r_41 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = x_41;
        t = free_vars_3_0(a_4, b_4, tboundin_3_0, t);
        j_42 = t;
        {
          static ATerm f_4 (ATerm t)
          {
            t = j_42;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = p_41;
            t = mark_match_vars_0_0(t);
            if(((n_42 != NULL) && (n_42 != t)))
              _fail(t);
            else
              n_42 = t;
            t = r_41;
            t = mark_buv_0_0(t);
            if(((p_42 != NULL) && (p_42 != t)))
              _fail(t);
            else
              p_42 = t;
            t = q_41;
            t = mark_build_vars_0_0(t);
            if(((s_42 != NULL) && (s_42 != t)))
              _fail(t);
            else
              s_42 = t;
            return(t);
          }
          t = scope_2_0(e_4, f_4, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, t_41, u_41, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_42), not_null(s_42), not_null(p_42)));
      }
    }
  else
    {
      ATerm n_44 = NULL,o_44 = NULL,v_44 = NULL,y_44 = NULL,k_45 = NULL,q_45 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          t_41 = ATgetArgument(t, 0);
          u_41 = ATgetArgument(t, 1);
          x_41 = ATgetArgument(t, 2);
          y_41 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = y_41;
      if(match_cons(t, sym_Rule_3))
        {
          z_41 = ATgetArgument(t, 0);
          a_42 = ATgetArgument(t, 1);
          f_42 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_41;
      t = map_1_0(g_4, t);
      n_44 = t;
      t = y_41;
      t = free_vars_3_0(h_4, i_4, tboundin_3_0, t);
      q_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_45, n_44);
      t = diff_0_0(t);
      o_44 = t;
      {
        static ATerm m_4 (ATerm t)
        {
          t = n_44;
          t = map_1_0(IntroduceBound_0_0, t);
          t = o_44;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = z_41;
          t = mark_match_vars_0_0(t);
          if(((v_44 != NULL) && (v_44 != t)))
            _fail(t);
          else
            v_44 = t;
          t = f_42;
          t = mark_buv_0_0(t);
          if(((y_44 != NULL) && (y_44 != t)))
            _fail(t);
          else
            y_44 = t;
          t = a_42;
          t = mark_build_vars_0_0(t);
          if(((k_45 != NULL) && (k_45 != t)))
            _fail(t);
          else
            k_45 = t;
          return(t);
        }
        t = scope_2_0(l_4, m_4, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, t_41, u_41, x_41, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_44), not_null(k_45), not_null(y_44)));
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL;
  q_47 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_47);
  r_47 = t;
  t = term_k_28;
  s_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, q_47), term_k_28);
  t = v_9(n_4, r_47, s_47, t);
  t = q_47;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm d_48 = NULL;
  ATerm n_28 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_48 = ATgetArgument(t, 0);
          {
            ATerm c_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_29);
      t = d_48;
    }
  else
    {
      t = n_28;
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
static ATerm p_4 (ATerm t)
{
  t = term_m_24;
  return(t);
}
static ATerm o_9 (ATerm l_64, ATerm m_64, ATerm n_64, ATerm p_64, ATerm t)
{
  ATerm u_47 = NULL,w_47 = NULL;
  t = n_64;
  t = map_1_0(o_4, t);
  u_47 = t;
  {
    static ATerm q_4 (ATerm t)
    {
      t = u_47;
      t = map_1_0(IntroduceBound_0_0, t);
      t = p_64;
      t = mark_buv_0_0(t);
      if(((w_47 != NULL) && (w_47 != t)))
        _fail(t);
      else
        w_47 = t;
      return(t);
    }
    t = scope_2_0(p_4, q_4, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, l_64, m_64, n_64, not_null(w_47));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,a_50 = NULL;
  q_49 = t;
  if(match_cons(t, sym__2))
    {
      r_49 = ATgetArgument(t, 0);
      u_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_49;
  if(match_cons(t, sym_Undefined_0))
    {
      t = r_49;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_d_29;
        }
      else
        {
          t = term_d_29;
        }
    }
  else
    {
      ATerm e_29 = t;
      int s_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm t_29 = ATgetArgument(t, 0);
              a_50 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(s_29);
          t = r_49;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_d_29;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  s_49 = ATgetArgument(t, 0);
                  t_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm u_29 = t;
                int v_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, t_49, a_50);
                    {
                      ATerm w_29 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm f_26 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              f_26 = ATgetArgument(t, 0);
                              if((f_26 != ATgetArgument(t, 1)))
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
                          t = w_29;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, s_49, term_c_30);
                    LocalPopChoice(v_29);
                  }
                else
                  {
                    t = u_29;
                    t = a_50;
                    if((t_49 != t))
                      {
                        _fail(t);
                      }
                    t = r_49;
                  }
              }
            }
        }
      else
        {
          t = e_29;
          t = r_49;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_d_29;
        }
    }
  return(t);
}
static ATerm p_9 (ATerm w_62, ATerm x_62, ATerm v_62, ATerm t)
{
  ATerm k_50 = NULL,m_50 = NULL,s_50 = NULL;
  t = term_m_24;
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_24, w_62);
  t = v_10(s_50, w_62, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_50 = ATgetFirst((ATermList) t);
      {
        ATerm d_30 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_62, k_50);
  t = CompareEntries_0_0(t);
  m_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_62, (ATerm) ATinsert(CheckATermList(v_62), m_50));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm g_51 = NULL,i_51 = NULL,j_51 = NULL,m_51 = NULL,o_51 = NULL;
  o_51 = t;
  if(match_cons(t, sym__2))
    {
      g_51 = ATgetArgument(t, 0);
      i_51 = ATgetArgument(t, 1);
      t = i_51;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_51 = ATgetFirst((ATermList) t);
          m_51 = (ATerm) ATgetNext((ATermList) t);
          t = j_51;
          {
            ATerm e_30 = t;
            int f_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm h_30 = ATgetArgument(t, 0);
                    ATerm i_30 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(f_30);
                t = g_51;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = o_51;
                  }
                else
                  {
                    ATerm k_30 = t;
                    int p_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = o_51;
                        t = p_9(g_51, j_51, m_51, t);
                        LocalPopChoice(p_30);
                      }
                    else
                      {
                        t = k_30;
                        t = o_51;
                      }
                  }
              }
            else
              {
                t = e_30;
                t = g_51;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = o_51;
                  }
                else
                  {
                    t = o_51;
                  }
              }
          }
        }
      else
        {
          t = g_51;
          if(match_cons(t, sym_Scopes_0))
            {
              t = o_51;
            }
          else
            {
              t = o_51;
            }
        }
    }
  else
    {
      t = o_51;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
  t = map_1_0(r_4, t);
  c_51 = t;
  t = term_m_24;
  e_51 = t;
  t = SSL_table_destroy(e_51);
  t = term_m_24;
  d_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_24, c_51);
  t = q_9(d_51, c_51, t);
  t = c_51;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,y_52 = NULL;
  y_52 = t;
  {
    ATerm u_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm a_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_30);
        t = y_52;
      }
    else
      {
        t = u_30;
        {
          ATerm b_31 = t;
          int f_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm h_31 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(f_31);
              t = y_52;
            }
          else
            {
              t = b_31;
              {
                ATerm u_31 = t;
                int x_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm z_31 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(x_31);
                    t = y_52;
                  }
                else
                  {
                    t = u_31;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm b_32 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = y_52;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  u_52 = t;
  t = y_52;
  t = SRTS_one(mark_buv_0_0, t);
  v_52 = t;
  t = u_52;
  t = isect_MarkVar_0_0(t);
  t = v_52;
  return(t);
}
static ATerm q_9 (ATerm g_32, ATerm f_32, ATerm t)
{
  static ATerm s_4 (ATerm t)
  {
    ATerm a_53 = NULL,b_53 = NULL;
    if(match_cons(t, sym__2))
      {
        a_53 = ATgetArgument(t, 0);
        b_53 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(g_32, a_53, b_53);
    t = (ATerm) ATmakeAppl(sym__3, g_32, a_53, b_53);
    return(t);
  }
  t = f_32;
  t = map_1_0(s_4, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_53 = NULL;
  static ATerm t_4 (ATerm t)
  {
    ATerm g_53 = NULL,h_53 = NULL;
    g_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_53), g_53);
    t = v_10(not_null(f_53), g_53, t);
    h_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_53, h_53);
    return(t);
  }
  if(((f_53 != NULL) && (f_53 != t)))
    _fail(t);
  else
    f_53 = t;
  t = SSL_table_keys(f_53);
  t = map_1_0(t_4, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_m_24;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm j_63 (ATerm), ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm u_4 (ATerm t)
    {
      static ATerm n_54 (ATerm q_53, ATerm t)
      {
        ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL;
        t = q_53;
        if(match_cons(t, sym__2))
          {
            ATerm c_32 = ATgetArgument(t, 0);
            t_53 = c_32;
            if(match_cons(c_32, sym_Var_1))
              {
                u_53 = ATgetArgument(c_32, 0);
              }
            else
              _fail(t);
            {
              ATerm d_32 = ATgetArgument(t, 1);
              if(((ATgetType(d_32) == AT_LIST) && !(ATisEmpty(d_32))))
                {
                  ATerm h_32 = ATgetFirst((ATermList) d_32);
                  if(match_cons(h_32, sym_Defined_2))
                    {
                      v_53 = ATgetArgument(h_32, 0);
                      {
                        ATerm i_32 = ATgetArgument(h_32, 1);
                        if((ATgetSymbol((ATermAppl) i_32) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  w_53 = (ATerm) ATgetNext((ATermList) d_32);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = j_63;
        {
          static ATerm v_4 (ATerm t)
          {
            if((u_53 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(v_4, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, t_53, (ATerm) ATinsert(CheckATermList(w_53), (ATerm) ATmakeAppl(sym_Defined_2, v_53, term_c_30)));
        return(t);
      }
      ATerm f_54 = NULL,h_54 = NULL;
      h_54 = t;
      {
        ATerm n_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                f_54 = ATgetArgument(t, 0);
                {
                  ATerm i_33 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_32);
            t = f_54;
            if(match_cons(t, sym_Scopes_0))
              {
                t = h_54;
              }
            else
              {
                ATerm j_33 = t;
                int k_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = n_54(h_54, t);
                    LocalPopChoice(k_33);
                  }
                else
                  {
                    t = j_33;
                    t = h_54;
                  }
              }
          }
        else
          {
            t = n_32;
            {
              ATerm l_33 = t;
              int m_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_54(h_54, t);
                  LocalPopChoice(m_33);
                }
              else
                {
                  t = l_33;
                  t = h_54;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(u_4, t);
  }
  n_53 = t;
  t = term_m_24;
  p_53 = t;
  t = SSL_table_destroy(p_53);
  t = term_m_24;
  o_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_24, n_53);
  t = q_9(o_53, n_53, t);
  t = n_53;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm g_56 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_56);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(q_33);
          }
        else
          {
            t = p_33;
            {
              ATerm o_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  o_56 = ATgetArgument(t, 0);
                  r_56 = ATgetArgument(t, 1);
                  s_56 = ATgetArgument(t, 2);
                  t_56 = ATgetArgument(t, 3);
                  t = s_56;
                  t = map_1_0(c_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_56 = ATgetArgument(t, 0);
                      r_56 = ATgetArgument(t, 1);
                      s_56 = ATgetArgument(t, 2);
                      t_56 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_56;
                  t = map_1_0(d_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm n_57 = NULL;
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_57 = ATgetArgument(t, 0);
          {
            ATerm t_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_33);
      t = n_57;
    }
  else
    {
      t = r_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_57;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm m_58 = NULL;
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_58 = ATgetArgument(t, 0);
          {
            ATerm w_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_33);
      t = m_58;
    }
  else
    {
      t = u_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_58;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm t_54 = NULL,e_55 = NULL,f_55 = NULL,h_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,t_55 = NULL,u_55 = NULL,x_55 = NULL,y_55 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,n_7 = NULL,l_7 = NULL;
  f_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_56 = ATgetArgument(t, 0);
      d_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_56);
  y_55 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, c_56, d_56);
  l_7 = t;
  t = SSLsetAnnotations(l_7, y_55);
  e_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_55 = ATgetArgument(t, 0);
      {
        ATerm x_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = f_55;
  t = free_vars_3_0(w_4, x_4, tboundin_3_0, t);
  t_54 = t;
  t = undefine_unbound_MarkVar_0_1(t_54, t);
  e_55 = t;
  t = e_56;
  if(match_cons(t, sym_Let_2))
    {
      n_55 = ATgetArgument(t, 0);
      o_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_56);
  h_55 = t;
  t = n_55;
  {
    static ATerm f_5 (ATerm t)
    {
      ATerm r_58 = NULL,s_58 = NULL,u_58 = NULL;
      r_58 = t;
      t = term_m_24;
      u_58 = t;
      t = SSL_table_destroy(u_58);
      t = term_m_24;
      s_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_m_24, e_55);
      t = q_9(s_58, e_55, t);
      t = r_58;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(f_5, t);
  }
  p_55 = t;
  t = term_m_24;
  x_55 = t;
  t = SSL_table_destroy(x_55);
  t = term_m_24;
  u_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_24, e_55);
  t = q_9(u_55, e_55, t);
  t = o_55;
  t = mark_buv_0_0(t);
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, p_55, t_55);
  n_7 = t;
  t = SSLsetAnnotations(n_7, h_55);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_58 = NULL,y_58 = NULL,z_58 = NULL,q_7 = NULL;
      z_58 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_58);
      v_58 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_58);
      q_7 = t;
      t = SSLsetAnnotations(q_7, v_58);
      LocalPopChoice(z_33);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = y_33;
      {
        ATerm a_34 = t;
        int b_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_59 = NULL,c_59 = NULL,d_59 = NULL,j_59 = NULL,r_7 = NULL;
            j_59 = t;
            if(match_cons(t, sym_App_2))
              {
                c_59 = ATgetArgument(t, 0);
                d_59 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_59);
            a_59 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, c_59, d_59);
            r_7 = t;
            t = SSLsetAnnotations(r_7, a_59);
            LocalPopChoice(b_34);
            {
              ATerm l_59 = NULL,n_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,t_7 = NULL;
              t_59 = t;
              if(match_cons(t, sym_App_2))
                {
                  n_59 = ATgetArgument(t, 0);
                  q_59 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_59);
              l_59 = t;
              t = n_59;
              t = mark_buv_0_0(t);
              r_59 = t;
              t = q_59;
              t = mark_build_vars_0_0(t);
              s_59 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, r_59, s_59);
              t_7 = t;
              t = SSLsetAnnotations(t_7, l_59);
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
                  ATerm u_59 = NULL,v_59 = NULL,y_59 = NULL,u_7 = NULL;
                  y_59 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      v_59 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_59);
                  u_59 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, v_59);
                  u_7 = t;
                  t = SSLsetAnnotations(u_7, u_59);
                  LocalPopChoice(d_34);
                  {
                    ATerm z_59 = NULL,a_60 = NULL,d_60 = NULL,j_60 = NULL,w_7 = NULL;
                    j_60 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        a_60 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(j_60);
                    z_59 = t;
                    t = a_60;
                    t = mark_buv_0_0(t);
                    d_60 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, d_60);
                    w_7 = t;
                    t = SSLsetAnnotations(w_7, z_59);
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
static ATerm r_9 (ATerm q_31, ATerm r_31, ATerm s_31, ATerm t)
{
  ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL;
  n_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_31, r_31);
  t = v_10(q_31, r_31, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_34 = ATgetFirst((ATermList) t);
      m_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_60), s_31);
  o_60 = t;
  t = SSL_table_put(q_31, r_31, o_60);
  t = n_60;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,u_60 = NULL;
  q_60 = t;
  t = term_m_24;
  r_60 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_60);
  s_60 = t;
  t = term_h_34;
  u_60 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_24, (ATerm)ATmakeAppl(sym_Var_1, q_60), term_h_34);
  t = r_9(r_60, s_60, u_60, t);
  t = q_60;
  return(t);
}
static ATerm u_9 (ATerm o_31, ATerm p_31, ATerm t)
{
  ATerm v_60 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_31, p_31);
  t = v_10(o_31, p_31, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_60 = ATgetFirst((ATermList) t);
      {
        ATerm i_34 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_60;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm b_63 = NULL,e_63 = NULL;
  b_63 = t;
  if(match_cons(t, sym_Var_1))
    {
      e_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,b_28 = NULL;
        t = term_m_24;
        b_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_24, b_63);
        t = u_9(b_28, b_63, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm p_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_34) != ATmakeSymbol("k_1", 0, ATtrue)))
              _fail(t);
            s_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, e_63);
        t_27 = t;
        t = (ATerm) ATinsert(ATempty, s_27);
        u_27 = t;
        t = SSLsetAnnotations(t_27, u_27);
        LocalPopChoice(o_34);
      }
    else
      {
        t = j_34;
        {
          ATerm q_34 = t;
          int r_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_28 = NULL,z_28 = NULL,a_29 = NULL,r_29 = NULL;
              t = term_m_24;
              r_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_m_24, b_63);
              t = u_9(r_29, b_63, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm s_34 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) s_34) != ATmakeSymbol("i_1", 0, ATtrue)))
                    _fail(t);
                  o_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, e_63);
              z_28 = t;
              t = (ATerm) ATinsert(ATempty, o_28);
              a_29 = t;
              t = SSLsetAnnotations(z_28, a_29);
              LocalPopChoice(r_34);
            }
          else
            {
              t = q_34;
              {
                ATerm y_29 = NULL,a_30 = NULL,b_30 = NULL,g_30 = NULL;
                t = term_m_24;
                g_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_24, b_63);
                t = u_9(g_30, b_63, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm t_34 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) t_34) != ATmakeSymbol("g_1", 0, ATtrue)))
                      _fail(t);
                    y_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, e_63);
                a_30 = t;
                t = (ATerm) ATinsert(ATempty, y_29);
                b_30 = t;
                t = SSLsetAnnotations(a_30, b_30);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm q_63 = NULL,u_63 = NULL,v_63 = NULL,z_63 = NULL,f_8 = NULL;
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(v_34);
    }
  else
    {
      t = u_34;
    }
  z_63 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_63);
  q_63 = t;
  t = u_63;
  t = DeclareBound_0_0(t);
  v_63 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_63);
  f_8 = t;
  t = SSLsetAnnotations(f_8, q_63);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL,w_8 = NULL;
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
      w_8 = t;
      t = SSLsetAnnotations(w_8, g_66);
      LocalPopChoice(x_34);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = w_34;
      {
        ATerm y_34 = t;
        int z_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL,x_66 = NULL,f_10 = NULL;
            x_66 = t;
            if(match_cons(t, sym_App_2))
              {
                k_66 = ATgetArgument(t, 0);
                l_66 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_66);
            j_66 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, k_66, l_66);
            f_10 = t;
            t = SSLsetAnnotations(f_10, j_66);
            LocalPopChoice(z_34);
            {
              ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL,f_11 = NULL;
              e_67 = t;
              if(match_cons(t, sym_App_2))
                {
                  z_66 = ATgetArgument(t, 0);
                  a_67 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_67);
              y_66 = t;
              t = z_66;
              t = mark_buv_0_0(t);
              c_67 = t;
              t = a_67;
              t = mark_build_vars_0_0(t);
              d_67 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, c_67, d_67);
              f_11 = t;
              t = SSLsetAnnotations(f_11, y_66);
            }
          }
        else
          {
            t = y_34;
            {
              ATerm a_35 = t;
              int b_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_67 = NULL,i_67 = NULL,m_67 = NULL,n_11 = NULL;
                  m_67 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      i_67 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_67);
                  h_67 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, i_67);
                  n_11 = t;
                  t = SSLsetAnnotations(n_11, h_67);
                  LocalPopChoice(b_35);
                  {
                    ATerm s_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,o_11 = NULL;
                    w_67 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        u_67 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(w_67);
                    s_67 = t;
                    t = u_67;
                    t = mark_buv_0_0(t);
                    v_67 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, v_67);
                    o_11 = t;
                    t = SSLsetAnnotations(o_11, s_67);
                  }
                }
              else
                {
                  t = a_35;
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
      ATerm p_69 = NULL,q_69 = NULL;
      p_69 = t;
      if(match_cons(t, sym_Match_1))
        {
          q_69 = ATgetArgument(t, 0);
          {
            ATerm o_30 = NULL,t_30 = NULL,v_11 = NULL;
            t = SSLgetAnnotations(p_69);
            o_30 = t;
            t = q_69;
            t = mark_match_vars_0_0(t);
            t_30 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, t_30);
            v_11 = t;
            t = SSLsetAnnotations(v_11, o_30);
          }
        }
      else
        {
          ATerm g_31 = NULL,t_31 = NULL,x_11 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              q_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_69);
          g_31 = t;
          t = q_69;
          t = mark_build_vars_0_0(t);
          t_31 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, t_31);
          x_11 = t;
          t = SSLsetAnnotations(x_11, g_31);
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
                              ATerm r_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL;
                              r_69 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  t_69 = ATgetArgument(t, 0);
                                  u_69 = ATgetArgument(t, 1);
                                  v_69 = ATgetArgument(t, 2);
                                  w_69 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = r_69;
                              t = o_9(t_69, u_69, v_69, w_69, t);
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
                                      int q_35 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL,i_70 = NULL,l_70 = NULL,m_70 = NULL,o_70 = NULL;
                                          i_70 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              l_70 = ATgetArgument(t, 0);
                                              t = l_70;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  d_70 = ATgetArgument(t, 0);
                                                  e_70 = ATgetArgument(t, 1);
                                                  f_70 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = i_70;
                                              t = n_9(d_70, e_70, f_70, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  l_70 = ATgetArgument(t, 0);
                                                  t = l_70;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      d_70 = ATgetArgument(t, 0);
                                                      e_70 = ATgetArgument(t, 1);
                                                      f_70 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = i_70;
                                                  t = m_9(d_70, e_70, f_70, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      l_70 = ATgetArgument(t, 0);
                                                      m_70 = ATgetArgument(t, 1);
                                                      o_70 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = i_70;
                                                  t = l_9(l_70, m_70, o_70, t);
                                                }
                                            }
                                          LocalPopChoice(q_35);
                                        }
                                      else
                                        {
                                          t = o_35;
                                          {
                                            ATerm r_35 = t;
                                            int s_35 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(s_35);
                                              }
                                            else
                                              {
                                                t = r_35;
                                                {
                                                  ATerm t_35 = t;
                                                  int u_35 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(u_35);
                                                    }
                                                  else
                                                    {
                                                      t = t_35;
                                                      {
                                                        ATerm v_35 = t;
                                                        int w_35 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm f_71 = NULL;
                                                            f_71 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm x_35 = ATgetArgument(t, 0);
                                                                ATerm c_36 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = f_71;
                                                            t = k_9(t);
                                                            LocalPopChoice(w_35);
                                                          }
                                                        else
                                                          {
                                                            t = v_35;
                                                            {
                                                              ATerm e_36 = t;
                                                              int f_36 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(f_36);
                                                                }
                                                              else
                                                                {
                                                                  t = e_36;
                                                                  {
                                                                    ATerm g_36 = t;
                                                                    int h_36 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(h_36);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_36;
                                                                        {
                                                                          ATerm i_36 = t;
                                                                          int j_36 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(j_36);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_36;
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
static ATerm v_9 (ATerm x_90 (ATerm), ATerm z_29, ATerm x_29, ATerm t)
{
  ATerm o_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,b_72 = NULL;
  x_71 = t;
  t = x_90(t);
  o_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_71, z_29, x_29);
  t = w_10(o_71, z_29, x_29, t);
  {
    ATerm l_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_72 = NULL;
        t = term_p_36;
        d_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_71, term_p_36);
        t = v_10(o_71, d_72, t);
        LocalPopChoice(o_36);
      }
    else
      {
        t = l_36;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_71 = ATgetFirst((ATermList) t);
      w_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_p_36;
  y_71 = t;
  t = (ATerm) ATinsert(CheckATermList(w_71), (ATerm) ATinsert(CheckATermList(v_71), z_29));
  b_72 = t;
  t = SSL_table_put(o_71, y_71, b_72);
  t = x_71;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,m_72 = NULL;
  i_72 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_72);
  j_72 = t;
  t = term_v_36;
  m_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, i_72), term_v_36);
  t = v_9(g_5, j_72, m_72, t);
  t = i_72;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,j_12 = NULL;
  s_72 = t;
  if(match_cons(t, sym_Scope_2))
    {
      p_72 = ATgetArgument(t, 0);
      q_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_72);
  o_72 = t;
  t = q_72;
  {
    static ATerm l_5 (ATerm t)
    {
      ATerm t_72 = NULL;
      t_72 = t;
      t = p_72;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = t_72;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(k_5, l_5, t);
  }
  r_72 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, p_72, r_72);
  j_12 = t;
  t = SSLsetAnnotations(j_12, o_72);
  return(t);
}
ATerm tboundin_3_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t)
{
  ATerm i_79 = NULL,k_79 = NULL,o_79 = NULL,q_79 = NULL,u_79 = NULL;
  q_79 = t;
  if(match_cons(t, sym_Scope_2))
    {
      u_79 = ATgetArgument(t, 0);
      i_79 = ATgetArgument(t, 1);
      {
        ATerm e_32 = NULL,j_32 = NULL,k_32 = NULL,l_12 = NULL;
        t = SSLgetAnnotations(q_79);
        e_32 = t;
        t = u_79;
        t = x_107(t);
        j_32 = t;
        t = i_79;
        t = v_107(t);
        k_32 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_32, k_32);
        l_12 = t;
        t = SSLsetAnnotations(l_12, e_32);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          u_79 = ATgetArgument(t, 0);
          i_79 = ATgetArgument(t, 1);
          k_79 = ATgetArgument(t, 2);
          o_79 = ATgetArgument(t, 3);
          {
            ATerm f_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,m_12 = NULL;
            t = SSLgetAnnotations(q_79);
            f_34 = t;
            t = u_79;
            t = x_107(t);
            k_34 = t;
            t = i_79;
            t = x_107(t);
            l_34 = t;
            t = k_79;
            t = x_107(t);
            m_34 = t;
            t = o_79;
            t = v_107(t);
            n_34 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_34, l_34, m_34, n_34);
            m_12 = t;
            t = SSLsetAnnotations(m_12, f_34);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              u_79 = ATgetArgument(t, 0);
              i_79 = ATgetArgument(t, 1);
              k_79 = ATgetArgument(t, 2);
              o_79 = ATgetArgument(t, 3);
              {
                ATerm p_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,n_12 = NULL;
                t = SSLgetAnnotations(q_79);
                p_35 = t;
                t = u_79;
                t = x_107(t);
                y_35 = t;
                t = i_79;
                t = x_107(t);
                z_35 = t;
                t = k_79;
                t = x_107(t);
                a_36 = t;
                t = o_79;
                t = v_107(t);
                b_36 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, y_35, z_35, a_36, b_36);
                n_12 = t;
                t = SSLsetAnnotations(n_12, p_35);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  u_79 = ATgetArgument(t, 0);
                  {
                    ATerm q_36 = NULL,s_36 = NULL,o_12 = NULL;
                    t = SSLgetAnnotations(q_79);
                    q_36 = t;
                    t = u_79;
                    t = v_107(t);
                    s_36 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, s_36);
                    o_12 = t;
                    t = SSLsetAnnotations(o_12, q_36);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      u_79 = ATgetArgument(t, 0);
                      {
                        ATerm a_37 = NULL,c_37 = NULL,t_12 = NULL;
                        t = SSLgetAnnotations(q_79);
                        a_37 = t;
                        t = u_79;
                        t = v_107(t);
                        c_37 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, c_37);
                        t_12 = t;
                        t = SSLsetAnnotations(t_12, a_37);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          u_79 = ATgetArgument(t, 0);
                          {
                            ATerm r_37 = NULL,t_37 = NULL,u_12 = NULL;
                            t = SSLgetAnnotations(q_79);
                            r_37 = t;
                            t = u_79;
                            t = v_107(t);
                            t_37 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, t_37);
                            u_12 = t;
                            t = SSLsetAnnotations(u_12, r_37);
                          }
                        }
                      else
                        {
                          ATerm o_38 = NULL,v_38 = NULL,l_13 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              u_79 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(q_79);
                          o_38 = t;
                          t = u_79;
                          t = v_107(t);
                          v_38 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, v_38);
                          l_13 = t;
                          t = SSLsetAnnotations(l_13, o_38);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm h_81 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_81);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm w_36 = t;
  int x_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_36);
    }
  else
    {
      t = w_36;
      {
        ATerm y_36 = t;
        int z_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_36);
          }
        else
          {
            t = y_36;
            {
              ATerm j_81 = NULL,k_81 = NULL,n_81 = NULL,p_81 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  j_81 = ATgetArgument(t, 0);
                  k_81 = ATgetArgument(t, 1);
                  n_81 = ATgetArgument(t, 2);
                  p_81 = ATgetArgument(t, 3);
                  t = n_81;
                  t = map_1_0(u_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_81 = ATgetArgument(t, 0);
                      k_81 = ATgetArgument(t, 1);
                      n_81 = ATgetArgument(t, 2);
                      p_81 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_81;
                  t = map_1_0(w_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm c_82 = NULL;
  ATerm b_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_82 = ATgetArgument(t, 0);
          {
            ATerm e_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_37);
      t = c_82;
    }
  else
    {
      t = b_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_82;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm y_82 = NULL;
  ATerm j_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_82 = ATgetArgument(t, 0);
          {
            ATerm l_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_37);
      t = y_82;
    }
  else
    {
      t = j_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_82;
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm c_83 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_83);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm q_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_37);
    }
  else
    {
      t = q_37;
      {
        ATerm u_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_37);
          }
        else
          {
            t = u_37;
            {
              ATerm k_83 = NULL,l_83 = NULL,r_83 = NULL,s_83 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_83 = ATgetArgument(t, 0);
                  l_83 = ATgetArgument(t, 1);
                  r_83 = ATgetArgument(t, 2);
                  s_83 = ATgetArgument(t, 3);
                  t = r_83;
                  t = map_1_0(b_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_83 = ATgetArgument(t, 0);
                      l_83 = ATgetArgument(t, 1);
                      r_83 = ATgetArgument(t, 2);
                      s_83 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_83;
                  t = map_1_0(c_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm c_84 = NULL;
  ATerm w_37 = t;
  int x_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_84 = ATgetArgument(t, 0);
          {
            ATerm y_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_37);
      t = c_84;
    }
  else
    {
      t = w_37;
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
static ATerm c_6 (ATerm t)
{
  ATerm l_84 = NULL;
  ATerm z_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_84 = ATgetArgument(t, 0);
          {
            ATerm b_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_38);
      t = l_84;
    }
  else
    {
      t = z_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_84;
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm p_84 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_84);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm f_38 = t;
  int g_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_38);
    }
  else
    {
      t = f_38;
      {
        ATerm h_38 = t;
        int i_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_38);
          }
        else
          {
            t = h_38;
            {
              ATerm r_84 = NULL,s_84 = NULL,t_84 = NULL,u_84 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  r_84 = ATgetArgument(t, 0);
                  s_84 = ATgetArgument(t, 1);
                  t_84 = ATgetArgument(t, 2);
                  u_84 = ATgetArgument(t, 3);
                  t = t_84;
                  t = map_1_0(j_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_84 = ATgetArgument(t, 0);
                      s_84 = ATgetArgument(t, 1);
                      t_84 = ATgetArgument(t, 2);
                      u_84 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_84;
                  t = map_1_0(k_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm b_85 = NULL;
  ATerm j_38 = t;
  int k_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_85 = ATgetArgument(t, 0);
          {
            ATerm l_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_38);
      t = b_85;
    }
  else
    {
      t = j_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_85;
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm k_85 = NULL;
  ATerm m_38 = t;
  int n_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_85 = ATgetArgument(t, 0);
          {
            ATerm p_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_38);
      t = k_85;
    }
  else
    {
      t = m_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_85;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm o_85 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_85);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm q_38 = t;
  int r_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_38);
    }
  else
    {
      t = q_38;
      {
        ATerm t_38 = t;
        int u_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_38);
          }
        else
          {
            t = t_38;
            {
              ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL,t_85 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_85 = ATgetArgument(t, 0);
                  r_85 = ATgetArgument(t, 1);
                  s_85 = ATgetArgument(t, 2);
                  t_85 = ATgetArgument(t, 3);
                  t = s_85;
                  t = map_1_0(s_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_85 = ATgetArgument(t, 0);
                      r_85 = ATgetArgument(t, 1);
                      s_85 = ATgetArgument(t, 2);
                      t_85 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_85;
                  t = map_1_0(t_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm a_86 = NULL;
  ATerm w_38 = t;
  int x_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_86 = ATgetArgument(t, 0);
          {
            ATerm y_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_38);
      t = a_86;
    }
  else
    {
      t = w_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_86;
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm j_86 = NULL;
  ATerm z_38 = t;
  int c_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_86 = ATgetArgument(t, 0);
          {
            ATerm d_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_39);
      t = j_86;
    }
  else
    {
      t = z_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_86;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm f_81 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      f_81 = ATgetArgument(t, 0);
      t = f_81;
      t = free_vars_3_0(m_5, t_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          f_81 = ATgetArgument(t, 0);
          t = f_81;
          t = free_vars_3_0(y_5, z_5, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              f_81 = ATgetArgument(t, 0);
              t = f_81;
              t = free_vars_3_0(e_6, i_6, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  f_81 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = f_81;
              t = free_vars_3_0(n_6, o_6, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm e_87 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_87);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm f_39 = t;
  int i_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_39);
    }
  else
    {
      t = f_39;
      {
        ATerm n_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_39);
          }
        else
          {
            t = n_39;
            {
              ATerm j_87 = NULL,k_87 = NULL,l_87 = NULL,m_87 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  j_87 = ATgetArgument(t, 0);
                  k_87 = ATgetArgument(t, 1);
                  l_87 = ATgetArgument(t, 2);
                  m_87 = ATgetArgument(t, 3);
                  t = l_87;
                  t = map_1_0(z_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_87 = ATgetArgument(t, 0);
                      k_87 = ATgetArgument(t, 1);
                      l_87 = ATgetArgument(t, 2);
                      m_87 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_87;
                  t = map_1_0(c_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm v_87 = NULL;
  ATerm t_39 = t;
  int v_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_87 = ATgetArgument(t, 0);
          {
            ATerm w_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_39);
      t = v_87;
    }
  else
    {
      t = t_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_87;
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm g_88 = NULL;
  ATerm x_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_88 = ATgetArgument(t, 0);
          {
            ATerm z_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_39);
      t = g_88;
    }
  else
    {
      t = x_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_88;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm t_86 = NULL,b_87 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      b_87 = ATgetArgument(t, 0);
      t = b_87;
      if(match_cons(t, sym_Rule_3))
        {
          t_86 = ATgetArgument(t, 0);
          {
            ATerm a_40 = ATgetArgument(t, 1);
          }
          {
            ATerm b_40 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = t_86;
      t = free_vars_3_0(u_6, y_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          b_87 = ATgetArgument(t, 0);
          {
            ATerm c_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_87;
    }
  return(t);
}
static ATerm z_9 (ATerm w_86 (ATerm), ATerm l_24, ATerm k_24, ATerm t)
{
  static ATerm z_88 (ATerm t)
  {
    ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL;
    u_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_88 = ATgetFirst((ATermList) t);
            w_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_40 = t;
          int e_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_88;
              {
                static ATerm g_7 (ATerm t)
                {
                  t = k_24;
                  return(t);
                }
                t = a_10(w_86, g_7, v_88, w_88, t);
              }
              t = z_88(t);
              LocalPopChoice(e_40);
            }
          else
            {
              t = d_40;
              {
                ATerm e_39 = NULL,o_39 = NULL,t_15 = NULL;
                t = SSLgetAnnotations(u_88);
                e_39 = t;
                t = w_88;
                t = z_88(t);
                o_39 = t;
                t = (ATerm) ATinsert(CheckATermList(o_39), v_88);
                t_15 = t;
                t = SSLsetAnnotations(t_15, e_39);
              }
            }
        }
      }
    return(t);
  }
  t = l_24;
  t = z_88(t);
  return(t);
}
ATerm foldr_3_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm t)
{
  ATerm c_89 = NULL,d_89 = NULL,e_89 = NULL;
  c_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_89;
      t = n_89(t);
    }
  else
    {
      ATerm h_89 = NULL,i_89 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_89 = ATgetFirst((ATermList) t);
          e_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_89;
      t = p_89(t);
      h_89 = t;
      t = e_89;
      t = foldr_3_0(n_89, o_89, p_89, t);
      i_89 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_89, i_89);
      t = o_89(t);
    }
  return(t);
}
static ATerm a_10 (ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm p_24, ATerm o_24, ATerm t)
{
  t = a_87(t);
  {
    static ATerm h_7 (ATerm t)
    {
      ATerm q_89 = NULL;
      q_89 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_24, q_89);
      t = z_86(t);
      return(t);
    }
    t = fetch_1_0(h_7, t);
  }
  t = o_24;
  return(t);
}
static ATerm b_10 (ATerm r_86 (ATerm), ATerm j_24, ATerm i_24, ATerm t)
{
  static ATerm g_90 (ATerm t)
  {
    ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL;
    b_90 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_90;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_90 = ATgetFirst((ATermList) t);
            d_90 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_40 = t;
          int h_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_90;
              {
                static ATerm i_7 (ATerm t)
                {
                  t = i_24;
                  return(t);
                }
                t = a_10(r_86, i_7, c_90, d_90, t);
              }
              t = g_90(t);
              LocalPopChoice(h_40);
            }
          else
            {
              t = f_40;
              {
                ATerm m_40 = NULL,t_40 = NULL,b_16 = NULL;
                t = SSLgetAnnotations(b_90);
                m_40 = t;
                t = d_90;
                t = g_90(t);
                t_40 = t;
                t = (ATerm) ATinsert(CheckATermList(t_40), c_90);
                b_16 = t;
                t = SSLsetAnnotations(b_16, m_40);
              }
            }
        }
      }
    return(t);
  }
  t = j_24;
  t = g_90(t);
  return(t);
}
ATerm genzip_4_0 (ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm t)
{
  static ATerm o_90 (ATerm t)
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_101(t);
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
        {
          ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL,e_16 = NULL;
          t = z_101(t);
          n_90 = t;
          if(match_cons(t, sym__2))
            {
              j_90 = ATgetArgument(t, 0);
              k_90 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_90);
          i_90 = t;
          t = j_90;
          t = b_102(t);
          l_90 = t;
          t = k_90;
          t = o_90(t);
          m_90 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_90, m_90);
          e_16 = t;
          t = SSLsetAnnotations(e_16, i_90);
          t = a_102(t);
        }
      }
    return(t);
  }
  t = o_90(t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_40 = ATgetArgument(t, 0);
      if(((ATgetType(k_40) != AT_LIST) || !(ATisEmpty(k_40))))
        _fail(t);
      {
        ATerm l_40 = ATgetArgument(t, 1);
        if(((ATgetType(l_40) != AT_LIST) || !(ATisEmpty(l_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_40 = ATgetArgument(t, 0);
      if(((ATgetType(n_40) == AT_LIST) && !(ATisEmpty(n_40))))
        {
          b_91 = ATgetFirst((ATermList) n_40);
          c_91 = (ATerm) ATgetNext((ATermList) n_40);
        }
      else
        _fail(t);
      {
        ATerm o_40 = ATgetArgument(t, 1);
        if(((ATgetType(o_40) == AT_LIST) && !(ATisEmpty(o_40))))
          {
            d_91 = ATgetFirst((ATermList) o_40);
            e_91 = (ATerm) ATgetNext((ATermList) o_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_91, d_91), (ATerm) ATmakeAppl(sym__2, c_91, e_91));
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm f_91 = NULL,h_91 = NULL;
  if(match_cons(t, sym__2))
    {
      f_91 = ATgetArgument(t, 0);
      h_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_91), f_91);
  return(t);
}
static ATerm g_10 (ATerm q_639, ATerm v_639, ATerm z_61, ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL,s_90 = NULL,y_90 = NULL;
  t = SSL_explode_term(v_639);
  if(match_cons(t, sym__2))
    {
      q_90 = ATgetArgument(t, 0);
      s_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_639);
  if(match_cons(t, sym__2))
    {
      if((q_90 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      r_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_90, s_90);
  t = genzip_4_0(j_7, k_7, m_7, _id, t);
  y_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_90, z_61);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm t)
{
  static ATerm j_91 (ATerm t)
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_99(t);
        LocalPopChoice(q_40);
      }
    else
      {
        t = p_40;
        t = y_99(t);
        t = j_91(t);
      }
    return(t);
  }
  t = j_91(t);
  return(t);
}
ATerm for_3_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t)
{
  t = a_100(t);
  t = while_not_2_0(b_100, c_100, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm q_91 = NULL;
  q_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, q_91);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm r_91 = NULL,s_91 = NULL,t_91 = NULL,u_91 = NULL,k_16 = NULL;
  u_91 = t;
  if(match_cons(t, sym__2))
    {
      s_91 = ATgetArgument(t, 0);
      t_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_91);
  r_91 = t;
  t = t_91;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_91, t_91);
  k_16 = t;
  t = SSLsetAnnotations(k_16, r_91);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL;
  n_92 = t;
  if(match_cons(t, sym__2))
    {
      o_92 = ATgetArgument(t, 0);
      p_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_92;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_92 = ATgetFirst((ATermList) t);
      r_92 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_40 = t;
        int u_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_93(o_92, p_92, n_92, t);
            LocalPopChoice(u_40);
          }
        else
          {
            t = s_40;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_92), q_92), r_92);
          }
      }
    }
  else
    {
      t = d_93(o_92, p_92, n_92, t);
    }
  return(t);
}
static ATerm d_93 (ATerm v_91, ATerm w_91, ATerm x_91, ATerm t)
{
  ATerm y_91 = NULL,b_92 = NULL,l_16 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL;
  t = SSLgetAnnotations(x_91);
  y_91 = t;
  t = w_91;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_92 = ATgetFirst((ATermList) t);
      h_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_92;
  if(match_cons(t, sym__2))
    {
      f_92 = ATgetArgument(t, 0);
      g_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_40 = t;
    int w_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_92;
        if((f_92 != t))
          {
            _fail(t);
          }
        t = h_92;
        LocalPopChoice(w_40);
      }
    else
      {
        t = v_40;
        t = w_91;
        t = g_10(f_92, g_92, h_92, t);
      }
  }
  b_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_91, b_92);
  l_16 = t;
  t = SSLsetAnnotations(l_16, y_91);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm c_93 = NULL;
  if(match_cons(t, sym__2))
    {
      c_93 = ATgetArgument(t, 0);
      if((c_93 != ATgetArgument(t, 1)))
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
  ATerm x_40 = t;
  int y_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(o_7, p_7, s_7, t);
      LocalPopChoice(y_40);
    }
  else
    {
      t = x_40;
      {
        ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL;
        v_92 = t;
        if(match_cons(t, sym__2))
          {
            w_92 = ATgetArgument(t, 0);
            x_92 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_92;
        t = b_10(y_7, w_92, x_92, t);
      }
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL;
  if(match_cons(t, sym__2))
    {
      f_41 = ATgetArgument(t, 0);
      g_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(d_8, f_41, g_41, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm h_41 = NULL;
  if(match_cons(t, sym__2))
    {
      h_41 = ATgetArgument(t, 0);
      if((h_41 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm o_41 = NULL,v_41 = NULL;
  if(match_cons(t, sym__2))
    {
      o_41 = ATgetArgument(t, 0);
      v_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_9(j_8, o_41, v_41, t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm w_41 = NULL;
  if(match_cons(t, sym__2))
    {
      w_41 = ATgetArgument(t, 0);
      if((w_41 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm z_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm r_93 (ATerm t)
  {
    ATerm z_40 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_110(t);
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
              ATerm f_93 = NULL,g_93 = NULL,a_41 = NULL,b_41 = NULL;
              f_93 = t;
              t = y_110(t);
              g_93 = t;
              t = f_93;
              {
                static ATerm z_7 (ATerm t)
                {
                  ATerm i_93 = NULL;
                  t = r_93(t);
                  i_93 = t;
                  t = (ATerm) ATmakeAppl(sym__2, i_93, g_93);
                  t = diff_0_0(t);
                  return(t);
                }
                t = z_110(z_7, r_93, a_8, t);
              }
              b_41 = t;
              t = SSL_explode_term(b_41);
              if(match_cons(t, sym__2))
                {
                  ATerm i_41 = ATgetArgument(t, 0);
                  a_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_41;
              t = foldr_3_0(b_8, c_8, _id, t);
              LocalPopChoice(e_41);
            }
          else
            {
              t = d_41;
              {
                ATerm j_41 = NULL,k_41 = NULL;
                k_41 = t;
                t = SSL_explode_term(k_41);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_41 = ATgetArgument(t, 0);
                    j_41 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_41;
                t = foldr_3_0(h_8, i_8, r_93, t);
              }
            }
        }
      }
    return(t);
  }
  t = r_93(t);
  return(t);
}
ATerm topdown_1_0 (ATerm g_91 (ATerm), ATerm t)
{
  static ATerm o_8 (ATerm t)
  {
    t = topdown_1_0(g_91, t);
    return(t);
  }
  t = g_91(t);
  t = SRTS_all(o_8, t);
  return(t);
}
static ATerm i_10 (ATerm i_31, ATerm j_31, ATerm t)
{
  ATerm s_93 = NULL,t_93 = NULL;
  t_93 = t;
  {
    ATerm m_41 = t;
    int n_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_31, j_31);
        t = v_10(i_31, j_31, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_41 = ATgetFirst((ATermList) t);
            s_93 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_41);
        t = SSL_table_put(i_31, j_31, s_93);
        t = (ATerm) ATmakeAppl(sym__3, i_31, j_31, s_93);
      }
    else
      {
        t = m_41;
        t = SSL_table_remove(i_31, j_31);
        t = (ATerm) ATmakeAppl(sym__2, i_31, j_31);
      }
  }
  t = t_93;
  return(t);
}
ATerm end_scope_1_0 (ATerm u_90 (ATerm), ATerm t)
{
  ATerm u_93 = NULL,v_93 = NULL,w_93 = NULL,x_93 = NULL,y_93 = NULL;
  x_93 = t;
  t = u_90(t);
  w_93 = t;
  {
    ATerm b_42 = t;
    int c_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_93 = NULL;
        t = term_p_36;
        z_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_93, term_p_36);
        t = v_10(w_93, z_93, t);
        LocalPopChoice(c_42);
      }
    else
      {
        t = b_42;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_93 = ATgetFirst((ATermList) t);
      u_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_p_36;
  y_93 = t;
  t = SSL_table_put(w_93, y_93, u_93);
  t = v_93;
  {
    static ATerm x_8 (ATerm t)
    {
      ATerm a_94 = NULL;
      a_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_93, a_94);
      t = i_10(w_93, a_94, t);
      return(t);
    }
    t = map_1_0(x_8, t);
  }
  t = x_93;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm t)
{
  ATerm e_42 = t;
  int g_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_104(t);
      t = a_105(t);
      LocalPopChoice(g_42);
    }
  else
    {
      t = e_42;
      t = a_105(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_90 (ATerm), ATerm t)
{
  ATerm c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL;
  d_94 = t;
  t = t_90(t);
  c_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_94, term_p_36);
  {
    ATerm h_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_94 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_42 = ATgetArgument(t, 0);
            ATerm m_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_p_36;
        k_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_94, term_p_36);
        t = v_10(c_94, k_94, t);
        LocalPopChoice(i_42);
      }
    else
      {
        t = h_42;
        t = (ATerm) ATempty;
      }
  }
  e_94 = t;
  t = term_p_36;
  f_94 = t;
  t = (ATerm) ATinsert(CheckATermList(e_94), (ATerm) ATempty);
  g_94 = t;
  t = SSL_table_put(c_94, f_94, g_94);
  t = d_94;
  return(t);
}
ATerm scope_2_0 (ATerm v_90 (ATerm), ATerm w_90 (ATerm), ATerm t)
{
  static ATerm y_8 (ATerm t)
  {
    t = end_scope_1_0(v_90, t);
    return(t);
  }
  t = begin_scope_1_0(v_90, t);
  t = restore_always_2_0(w_90, y_8, t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_h_17;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = scope_2_0(c_9, h_10, t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_m_24;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL;
  t = topdown_1_0(u_10, t);
  v_94 = t;
  t = free_vars_3_0(a_11, g_11, tboundin_3_0, t);
  u_94 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_94, v_94);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm o_42 = ATgetArgument(t, 0);
      t_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_94;
  {
    ATerm q_42 = t;
    int r_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        LocalPopChoice(r_42);
      }
    else
      {
        t = q_42;
        {
          ATerm u_42 = t;
          int v_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              LocalPopChoice(v_42);
            }
          else
            {
              t = u_42;
              {
                ATerm f_96 = NULL,g_96 = NULL,h_96 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    f_96 = ATgetArgument(t, 0);
                    g_96 = ATgetArgument(t, 1);
                    h_96 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = t_94;
                t = j_9(f_96, g_96, h_96, t);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm c_95 = NULL,d_95 = NULL;
  d_95 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_95 = ATgetArgument(t, 0);
      {
        ATerm w_42 = t;
        int x_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_42 = NULL,l_42 = NULL,s_16 = NULL;
            t = SSLgetAnnotations(d_95);
            d_42 = t;
            t = c_95;
            if(match_cons(t, sym_ListVar_1))
              {
                l_42 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, l_42);
            s_16 = t;
            t = SSLsetAnnotations(s_16, d_42);
            LocalPopChoice(x_42);
          }
        else
          {
            t = w_42;
            t = d_95;
          }
      }
    }
  else
    {
      t = d_95;
    }
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm g_95 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_95);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm y_42 = t;
  int d_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_43);
    }
  else
    {
      t = y_42;
      {
        ATerm g_43 = t;
        int i_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_43);
          }
        else
          {
            t = g_43;
            {
              ATerm i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_95 = ATgetArgument(t, 0);
                  j_95 = ATgetArgument(t, 1);
                  k_95 = ATgetArgument(t, 2);
                  l_95 = ATgetArgument(t, 3);
                  t = k_95;
                  t = map_1_0(i_11, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_95 = ATgetArgument(t, 0);
                      j_95 = ATgetArgument(t, 1);
                      k_95 = ATgetArgument(t, 2);
                      l_95 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_95;
                  t = map_1_0(k_11, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm s_95 = NULL;
  ATerm l_43 = t;
  int m_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_95 = ATgetArgument(t, 0);
          {
            ATerm n_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_43);
      t = s_95;
    }
  else
    {
      t = l_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_95 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_95;
    }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm b_96 = NULL;
  ATerm o_43 = t;
  int p_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_96 = ATgetArgument(t, 0);
          {
            ATerm s_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_43);
      t = b_96;
    }
  else
    {
      t = o_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_96;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm s_94 = NULL;
  s_94 = t;
  t = scope_2_0(z_8, a_9, t);
  t = s_94;
  return(t);
}
ATerm filter_1_0 (ATerm y_103 (ATerm), ATerm t)
{
  ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL;
  y_96 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_96;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_96 = ATgetFirst((ATermList) t);
          a_97 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm u_43 = t;
        int v_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_43 = NULL,q_43 = NULL,r_43 = NULL,z_16 = NULL;
            t = SSLgetAnnotations(y_96);
            h_43 = t;
            t = z_96;
            t = y_103(t);
            q_43 = t;
            t = a_97;
            t = filter_1_0(y_103, t);
            r_43 = t;
            t = (ATerm) ATinsert(CheckATermList(r_43), q_43);
            z_16 = t;
            t = SSLsetAnnotations(z_16, h_43);
            LocalPopChoice(v_43);
          }
        else
          {
            t = u_43;
            t = a_97;
            t = filter_1_0(y_103, t);
          }
      }
    }
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL,d_17 = NULL;
  s_97 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      r_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_97);
  q_97 = t;
  t = r_97;
  {
    ATerm w_43 = t;
    int x_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_97;
        LocalPopChoice(x_43);
      }
    else
      {
        t = w_43;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_97;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Overlays_1, r_97);
  d_17 = t;
  t = SSLsetAnnotations(d_17, q_97);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = Cons_2_0(r_11, s_11, t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm u_97 = NULL,v_97 = NULL,w_97 = NULL,e_17 = NULL;
  w_97 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_97);
  u_97 = t;
  t = v_97;
  {
    ATerm y_43 = t;
    int z_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_97;
        LocalPopChoice(z_43);
      }
    else
      {
        t = y_43;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_97;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Strategies_1, v_97);
  e_17 = t;
  t = SSLsetAnnotations(e_17, u_97);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL,k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,k_17 = NULL,j_17 = NULL,c_17 = NULL;
  p_97 = t;
  if(match_cons(t, sym_Specification_1))
    {
      g_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_97);
  f_97 = t;
  t = g_97;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_97 = ATgetFirst((ATermList) t);
      j_97 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_97);
  h_97 = t;
  t = i_97;
  if(match_cons(t, sym_Signature_1))
    {
      n_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_97);
  m_97 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, n_97);
  c_17 = t;
  t = SSLsetAnnotations(c_17, m_97);
  o_97 = t;
  t = j_97;
  t = Cons_2_0(p_11, q_11, t);
  k_97 = t;
  t = (ATerm) ATinsert(CheckATermList(k_97), o_97);
  j_17 = t;
  t = SSLsetAnnotations(j_17, h_97);
  l_97 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_97);
  k_17 = t;
  t = SSLsetAnnotations(k_17, f_97);
  return(t);
}
static ATerm k_10 (ATerm j_39, ATerm k_39, ATerm t)
{
  ATerm y_97 = NULL;
  t = SSL_fputc(j_39, k_39);
  y_97 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_97);
  return(t);
}
static ATerm l_10 (ATerm g_45, ATerm h_45, ATerm t)
{
  ATerm z_97 = NULL;
  t = SSL_write_term_to_stream_text(g_45, h_45);
  z_97 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_97);
  return(t);
}
static ATerm n_10 (ATerm v_100 (ATerm), ATerm w_423, ATerm m_45, ATerm t)
{
  ATerm a_98 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_423, term_a_44);
  t = r_10(t);
  a_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_98, m_45);
  t = v_100(t);
  t = fclose_0_0(t);
  t = m_45;
  return(t);
}
static ATerm m_10 (ATerm c_45, ATerm d_45, ATerm t)
{
  ATerm b_98 = NULL;
  t = SSL_write_term_to_stream_baf(c_45, d_45);
  b_98 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_98);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm i_98 = NULL,j_98 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_44 = ATgetArgument(t, 0);
      if(match_cons(b_44, sym_Stream_1))
        {
          i_98 = ATgetArgument(b_44, 0);
        }
      else
        _fail(t);
      j_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10(i_98, j_98, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm k_98 = NULL,l_98 = NULL,m_98 = NULL,n_98 = NULL,o_98 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_44 = ATgetArgument(t, 0);
      if(match_cons(c_44, sym_Stream_1))
        {
          n_98 = ATgetArgument(c_44, 0);
        }
      else
        _fail(t);
      o_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(n_98, o_98, t);
  k_98 = t;
  t = term_d_44;
  l_98 = t;
  t = k_98;
  if(match_cons(t, sym_Stream_1))
    {
      m_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_44, k_98);
  t = k_10(l_98, m_98, t);
  return(t);
}
ATerm output_1_0 (ATerm b_116 (ATerm), ATerm t)
{
  ATerm c_98 = NULL,d_98 = NULL;
  t = b_116(t);
  d_98 = t;
  {
    ATerm f_44 = t;
    int g_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_98 = NULL,f_98 = NULL;
        t = term_j_21;
        e_98 = t;
        t = term_h_44;
        f_98 = t;
        t = term_i_44;
        t = v_10(e_98, f_98, t);
        LocalPopChoice(g_44);
      }
    else
      {
        t = f_44;
        t = term_j_44;
      }
  }
  c_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_98, d_98);
  {
    ATerm k_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_98 = NULL,h_98 = NULL;
        t = term_j_21;
        g_98 = t;
        t = term_m_44;
        h_98 = t;
        t = term_p_44;
        t = v_10(g_98, h_98, t);
        t = (ATerm) ATmakeAppl(sym__2, c_98, d_98);
        LocalPopChoice(l_44);
        if(match_cons(t, sym__2))
          {
            ATerm q_44 = ATgetArgument(t, 0);
            ATerm r_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_10(u_11, c_98, d_98, t);
      }
    else
      {
        t = k_44;
        if(match_cons(t, sym__2))
          {
            ATerm s_44 = ATgetArgument(t, 0);
            ATerm t_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_10(c_12, c_98, d_98, t);
      }
  }
  return(t);
}
static ATerm c_99 (ATerm w_98, ATerm t)
{
  t = SSL_fclose(w_98);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_98 = NULL,a_99 = NULL;
  a_99 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_98 = ATgetArgument(t, 0);
      {
        ATerm u_44 = t;
        int w_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_98);
            LocalPopChoice(w_44);
          }
        else
          {
            t = u_44;
            t = c_99(a_99, t);
          }
      }
    }
  else
    {
      t = c_99(a_99, t);
    }
  return(t);
}
static ATerm o_10 (ATerm i_45, ATerm t)
{
  t = SSL_read_term_from_stream(i_45);
  return(t);
}
static ATerm p_10 (ATerm c_38, ATerm d_38, ATerm t)
{
  t = SSL_strcat(c_38, d_38);
  return(t);
}
static ATerm q_10 (ATerm l_39, ATerm m_39, ATerm t)
{
  ATerm d_99 = NULL;
  t = SSL_fopen(l_39, m_39);
  d_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_99);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_99 = NULL;
  t = SSL_stdin_stream();
  e_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_99);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_99 = NULL;
  t = SSL_stdout_stream();
  f_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_99);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_99 = NULL;
  t = SSL_stderr_stream();
  g_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_99);
  return(t);
}
static ATerm t_100 (ATerm m_99, ATerm t)
{
  ATerm n_99 = NULL;
  t = SSL_explode_term(m_99);
  if(match_cons(t, sym__2))
    {
      ATerm x_44 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_44) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_44 = ATgetArgument(t, 1);
        if(((ATgetType(z_44) == AT_LIST) && !(ATisEmpty(z_44))))
          {
            n_99 = ATgetFirst((ATermList) z_44);
            {
              ATerm e_45 = (ATerm) ATgetNext((ATermList) z_44);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_99;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_99;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_99;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_99;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_100 (ATerm q_99, ATerm r_99, ATerm s_99, ATerm t)
{
  ATerm t_99 = NULL,u_99 = NULL,v_99 = NULL,e_100 = NULL,y_17 = NULL;
  t = SSLgetAnnotations(s_99);
  v_99 = t;
  t = q_99;
  if(match_cons(t, sym_Path_1))
    {
      e_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_100, r_99);
  y_17 = t;
  t = SSLsetAnnotations(y_17, v_99);
  if(match_cons(t, sym__2))
    {
      t_99 = ATgetArgument(t, 0);
      u_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(t_99, u_99, t);
  return(t);
}
static ATerm w_100 (ATerm g_100, ATerm h_100, ATerm i_100, ATerm t)
{
  ATerm j_100 = NULL,k_100 = NULL,l_100 = NULL,o_100 = NULL,d_18 = NULL;
  t = SSLgetAnnotations(i_100);
  l_100 = t;
  t = SSL_is_string(g_100);
  o_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_100, h_100);
  d_18 = t;
  t = SSLsetAnnotations(d_18, l_100);
  if(match_cons(t, sym__2))
    {
      j_100 = ATgetArgument(t, 0);
      k_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10(j_100, k_100, t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL;
  q_100 = t;
  if(match_cons(t, sym__2))
    {
      r_100 = ATgetArgument(t, 0);
      s_100 = ATgetArgument(t, 1);
      {
        ATerm f_45 = t;
        int j_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_100(q_100, t);
            LocalPopChoice(j_45);
          }
        else
          {
            t = f_45;
            {
              ATerm l_45 = t;
              int n_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_100(r_100, s_100, q_100, t);
                  LocalPopChoice(n_45);
                }
              else
                {
                  t = l_45;
                  t = w_100(r_100, s_100, q_100, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_100(q_100, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_100 = NULL,z_100 = NULL,a_101 = NULL,f_101 = NULL;
  f_101 = t;
  {
    ATerm p_45 = t;
    int r_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_101, term_t_45);
        t = r_10(t);
        LocalPopChoice(r_45);
      }
    else
      {
        t = p_45;
        {
          ATerm a_45 = NULL,b_45 = NULL;
          t = term_u_45;
          b_45 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_45, f_101);
          t = p_10(b_45, f_101, t);
          a_45 = t;
          t = SSL_perror(a_45);
          _fail(t);
        }
      }
  }
  z_100 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_10(a_101, t);
  y_100 = t;
  t = z_100;
  t = fclose_0_0(t);
  t = y_100;
  return(t);
}
ATerm input_1_0 (ATerm c_116 (ATerm), ATerm t)
{
  ATerm w_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_101 = NULL,j_101 = NULL;
      t = term_j_21;
      i_101 = t;
      t = term_z_45;
      j_101 = t;
      t = term_d_46;
      t = v_10(i_101, j_101, t);
      LocalPopChoice(x_45);
    }
  else
    {
      t = w_45;
      t = term_e_46;
    }
  t = ReadFromFile_0_0(t);
  t = c_116(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_101 = NULL,l_101 = NULL,m_101 = NULL,n_101 = NULL,o_101 = NULL;
  k_101 = t;
  t = term_f_46;
  t = whoami_0_0(t);
  l_101 = t;
  t = term_z_19;
  n_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_46), l_101), term_h_46);
  o_101 = t;
  t = SSL_printnl(n_101, o_101);
  t = term_j_46;
  m_101 = t;
  t = SSL_exit(m_101);
  t = k_101;
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm q_101 = NULL;
  q_101 = t;
  if(match_string(t, "-k"))
    {
      t = q_101;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_101;
    }
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL;
  r_101 = t;
  t = SSL_string_to_int(r_101);
  s_101 = t;
  t = term_m_46;
  t_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_46, s_101);
  t = y_10(t_101, s_101, t);
  t = r_101;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_n_46;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_12, k_12, w_12, t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm v_101 = NULL;
  v_101 = t;
  if(match_string(t, "-S"))
    {
      t = v_101;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_101;
    }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm w_101 = NULL,x_101 = NULL;
  t = term_o_46;
  w_101 = t;
  t = term_q_46;
  x_101 = t;
  t = term_s_46;
  t = y_10(w_101, x_101, t);
  t = term_t_46;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = term_u_46;
  return(t);
}
static ATerm n_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm d_102 = NULL,e_102 = NULL,f_102 = NULL;
  d_102 = t;
  t = SSL_string_to_int(d_102);
  e_102 = t;
  t = term_o_46;
  f_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_46, e_102);
  t = y_10(f_102, e_102, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_102);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_v_46;
  return(t);
}
static ATerm t_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm g_102 = NULL,h_102 = NULL;
  t = term_w_46;
  g_102 = t;
  t = term_f_46;
  h_102 = t;
  t = term_x_46;
  t = y_10(g_102, h_102, t);
  t = term_y_46;
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = term_z_46;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_47 = t;
  int c_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_13, c_13, m_13, t);
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
            t = ArgOption_3_0(n_13, p_13, s_13, t);
            LocalPopChoice(e_47);
          }
        else
          {
            t = d_47;
            t = Option_3_0(t_13, u_13, w_13, t);
          }
      }
    }
  return(t);
}
static ATerm y_10 (ATerm e_43, ATerm f_43, ATerm t)
{
  ATerm i_102 = NULL;
  t = term_j_21;
  i_102 = t;
  t = SSL_table_put(i_102, e_43, f_43);
  t = (ATerm) ATmakeAppl(sym__3, term_j_21, e_43, f_43);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm l_102 = NULL,m_102 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_102 = NULL,o_102 = NULL,p_102 = NULL;
      t = term_f_46;
      t = e_0(t);
      n_102 = t;
      t = term_f_47;
      o_102 = t;
      t = term_g_47;
      p_102 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_47, term_g_47, n_102);
      t = w_10(o_102, p_102, n_102, t);
      _fail(t);
    }
  else
    {
      ATerm s_102 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_102 = ATgetFirst((ATermList) t);
          m_102 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_102;
      t = c_0(t);
      t = term_f_46;
      t = d_0(t);
      s_102 = t;
      t = (ATerm) ATinsert(CheckATermList(m_102), s_102);
    }
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm u_102 = NULL;
  u_102 = t;
  if(match_string(t, "-o"))
    {
      t = u_102;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_102;
    }
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm v_102 = NULL,w_102 = NULL;
  v_102 = t;
  t = term_h_44;
  w_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_44, v_102);
  t = y_10(w_102, v_102, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_102);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_h_47;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_14, i_14, k_14, t);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm y_102 = NULL;
  y_102 = t;
  if(match_string(t, "-i"))
    {
      t = y_102;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_102;
    }
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm z_102 = NULL,a_103 = NULL;
  z_102 = t;
  t = term_z_45;
  a_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_45, z_102);
  t = y_10(a_103, z_102, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_102);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = term_i_47;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_14, t_14, v_14, t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  static ATerm v_103 (ATerm t)
  {
    ATerm s_103 = NULL,t_103 = NULL,u_103 = NULL;
    u_103 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_103 = ATgetFirst((ATermList) t);
        t_103 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_45 = NULL,s_45 = NULL,v_18 = NULL;
          t = SSLgetAnnotations(u_103);
          o_45 = t;
          t = t_103;
          t = v_103(t);
          s_45 = t;
          t = (ATerm) ATinsert(CheckATermList(s_45), s_103);
          v_18 = t;
          t = SSLsetAnnotations(v_18, o_45);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_103;
        t = y_87(t);
      }
    return(t);
  }
  t = v_103(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL;
  c_103 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_103;
    }
  else
    {
      static ATerm x_14 (ATerm t)
      {
        t = not_null(e_103);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_103 = ATgetFirst((ATermList) t);
          if(((e_103 != NULL) && (e_103 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_103;
      t = at_end_1_0(x_14, t);
    }
  return(t);
}
static ATerm i_104 (ATerm a_104, ATerm t)
{
  ATerm b_104 = NULL;
  t = SSL_explode_term(a_104);
  if(match_cons(t, sym__2))
    {
      ATerm j_47 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_47) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_104;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_104 = NULL,e_104 = NULL,f_104 = NULL;
  f_104 = t;
  if(match_cons(t, sym__2))
    {
      d_104 = ATgetArgument(t, 0);
      e_104 = ATgetArgument(t, 1);
      {
        ATerm k_47 = t;
        int m_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm z_14 (ATerm t)
            {
              t = e_104;
              return(t);
            }
            t = d_104;
            t = at_end_1_0(z_14, t);
            LocalPopChoice(m_47);
          }
        else
          {
            t = k_47;
            t = i_104(f_104, t);
          }
      }
    }
  else
    {
      t = i_104(f_104, t);
    }
  return(t);
}
static ATerm j_10 (ATerm k_43, ATerm j_43, ATerm t)
{
  ATerm j_104 = NULL,k_104 = NULL,l_104 = NULL;
  t = k_43;
  {
    ATerm n_47 = t;
    int o_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_104 = NULL;
        t = term_j_21;
        m_104 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_21, k_43);
        t = v_10(m_104, k_43, t);
        LocalPopChoice(o_47);
      }
    else
      {
        t = n_47;
        t = (ATerm) ATempty;
      }
  }
  k_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_43, k_104);
  t = conc_0_0(t);
  j_104 = t;
  t = term_j_21;
  l_104 = t;
  t = SSL_table_put(l_104, k_43, j_104);
  t = (ATerm) ATmakeAppl(sym__3, term_j_21, k_43, j_104);
  return(t);
}
static ATerm w_10 (ATerm d_31, ATerm e_31, ATerm c_31, ATerm t)
{
  ATerm o_104 = NULL,p_104 = NULL,q_104 = NULL;
  o_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_31, e_31);
  {
    ATerm p_47 = t;
    int t_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_47 = ATgetArgument(t, 0);
            ATerm y_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_31, e_31);
        t = v_10(d_31, e_31, t);
        LocalPopChoice(t_47);
      }
    else
      {
        t = p_47;
        t = (ATerm) ATempty;
      }
  }
  p_104 = t;
  t = (ATerm) ATinsert(CheckATermList(p_104), c_31);
  q_104 = t;
  t = SSL_table_put(d_31, e_31, q_104);
  t = o_104;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm x_104 = NULL,y_104 = NULL,b_105 = NULL,c_105 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_105 = NULL,e_105 = NULL,f_105 = NULL;
      t = term_f_46;
      t = n_0(t);
      d_105 = t;
      t = term_f_47;
      e_105 = t;
      t = term_g_47;
      f_105 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_47, term_g_47, d_105);
      t = w_10(e_105, f_105, d_105, t);
      _fail(t);
    }
  else
    {
      ATerm o_105 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_104 = ATgetFirst((ATermList) t);
          y_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_104;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_105 = ATgetFirst((ATermList) t);
          c_105 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_104;
      t = k_0(t);
      t = b_105;
      t = l_0(t);
      o_105 = t;
      t = (ATerm) ATinsert(CheckATermList(c_105), o_105);
    }
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm q_105 = NULL;
  q_105 = t;
  if(match_string(t, "--warning"))
    {
      t = q_105;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = q_105;
    }
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm r_105 = NULL,s_105 = NULL,t_105 = NULL;
  r_105 = t;
  t = term_z_47;
  s_105 = t;
  t = (ATerm) ATinsert(ATempty, r_105);
  t_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_47, (ATerm) ATinsert(ATempty, r_105));
  t = j_10(s_105, t_105, t);
  t = term_f_46;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  t = term_a_48;
  return(t);
}
static ATerm k_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm u_105 = NULL,v_105 = NULL,w_105 = NULL;
  u_105 = t;
  t = term_k_21;
  v_105 = t;
  t = term_q_46;
  w_105 = t;
  t = term_b_48;
  t = y_10(v_105, w_105, t);
  t = u_105;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_c_48;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm x_105 = NULL,y_105 = NULL,z_105 = NULL;
  x_105 = t;
  t = term_k_21;
  y_105 = t;
  t = term_j_46;
  z_105 = t;
  t = term_e_48;
  t = y_10(y_105, z_105, t);
  t = x_105;
  return(t);
}
static ATerm r_15 (ATerm t)
{
  t = term_k_21;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm f_48 = t;
  int g_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(g_15, h_15, i_15, t);
      LocalPopChoice(g_48);
    }
  else
    {
      t = f_48;
      {
        ATerm h_48 = t;
        int i_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(k_15, n_15, o_15, t);
            LocalPopChoice(i_48);
          }
        else
          {
            t = h_48;
            t = Option_3_0(p_15, q_15, r_15, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_106 = NULL,b_106 = NULL,c_106 = NULL,d_106 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_46;
  t = whoami_0_0(t);
  a_106 = t;
  t = term_z_19;
  c_106 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_48), a_106);
  d_106 = t;
  t = SSL_printnl(c_106, d_106);
  t = term_j_46;
  b_106 = t;
  t = SSL_exit(b_106);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm e_106 = NULL,f_106 = NULL;
  t = term_j_21;
  e_106 = t;
  t = term_l_48;
  f_106 = t;
  t = term_o_48;
  t = v_10(e_106, f_106, t);
  return(t);
}
static ATerm s_10 (ATerm l_28, ATerm m_28, ATerm t)
{
  ATerm p_48 = t;
  int q_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_28, m_28);
      LocalPopChoice(q_48);
    }
  else
    {
      t = p_48;
      t = SSL_addr(l_28, m_28);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm t)
{
  ATerm h_106 = NULL,i_106 = NULL,j_106 = NULL;
  h_106 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_106;
      t = l_89(t);
    }
  else
    {
      ATerm m_106 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_106 = ATgetFirst((ATermList) t);
          j_106 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_106;
      t = foldr_2_0(l_89, m_89, t);
      m_106 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_106, m_106);
      t = m_89(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm p_46 = NULL,r_46 = NULL;
  if(match_cons(t, sym__2))
    {
      p_46 = ATgetArgument(t, 0);
      r_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_10(p_46, r_46, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_106 = NULL,k_46 = NULL,l_46 = NULL;
  t = times_0_0(t);
  l_46 = t;
  t = SSL_explode_term(l_46);
  if(match_cons(t, sym__2))
    {
      ATerm r_48 = ATgetArgument(t, 0);
      k_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_46;
  t = foldr_2_0(s_15, u_15, t);
  p_106 = t;
  t = SSL_TicksToSeconds(p_106);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_107 = NULL,b_107 = NULL,c_107 = NULL;
  a_107 = t;
  if(match_cons(t, sym__2))
    {
      b_107 = ATgetArgument(t, 0);
      c_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_48 = t;
    int t_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_107;
        if((b_107 != t))
          {
            _fail(t);
          }
        t = a_107;
        LocalPopChoice(t_48);
      }
    else
      {
        t = s_48;
        t = (ATerm) ATmakeAppl(sym__2, b_107, c_107);
        {
          ATerm u_48 = t;
          int v_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_107, c_107);
              LocalPopChoice(v_48);
            }
          else
            {
              t = u_48;
              t = SSL_gtr(b_107, c_107);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_107, c_107);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_96 (ATerm), ATerm t)
{
  ATerm g_107 = NULL;
  g_107 = t;
  {
    ATerm x_48 = t;
    int y_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_107 = NULL,j_107 = NULL,k_107 = NULL;
        t = term_j_21;
        j_107 = t;
        t = term_o_46;
        k_107 = t;
        t = term_z_48;
        t = v_10(j_107, k_107, t);
        i_107 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_107, term_j_46);
        t = geq_0_0(t);
        t = g_107;
        t = v_96(t);
        LocalPopChoice(y_48);
      }
    else
      {
        t = x_48;
        t = g_107;
      }
  }
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm m_107 = NULL,n_107 = NULL,p_107 = NULL,q_107 = NULL;
  t = run_time_0_0(t);
  m_107 = t;
  t = term_f_46;
  t = whoami_0_0(t);
  n_107 = t;
  t = term_z_19;
  p_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_49), m_107), term_a_49), n_107);
  q_107 = t;
  t = SSL_printnl(p_107, q_107);
  t = (ATerm) ATmakeAppl(sym__2, term_z_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_49), m_107), term_a_49), n_107));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_107 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_46;
  r_107 = t;
  t = SSL_exit(r_107);
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm e_108 = NULL,f_108 = NULL;
  f_108 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_108;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_108 = ATgetArgument(t, 0);
          {
            ATerm v_47 = NULL,x_18 = NULL;
            t = SSLgetAnnotations(f_108);
            v_47 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_108);
            x_18 = t;
            t = SSLsetAnnotations(x_18, v_47);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_108;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_115 (ATerm), ATerm t)
{
  ATerm d_49 = t;
  int e_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_107 = NULL,y_107 = NULL;
      t = term_j_21;
      u_107 = t;
      t = term_f_49;
      y_107 = t;
      t = term_g_49;
      t = v_10(u_107, y_107, t);
      LocalPopChoice(e_49);
    }
  else
    {
      t = d_49;
      t = fetch_1_0(x_15, t);
    }
  t = s_115(t);
  return(t);
}
ATerm map_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  static ATerm v_108 (ATerm t)
  {
    ATerm s_108 = NULL,t_108 = NULL,u_108 = NULL;
    s_108 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_108;
      }
    else
      {
        ATerm j_48 = NULL,m_48 = NULL,n_48 = NULL,z_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_108 = ATgetFirst((ATermList) t);
            u_108 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_108);
        j_48 = t;
        t = t_108;
        t = h_87(t);
        m_48 = t;
        t = u_108;
        t = v_108(t);
        n_48 = t;
        t = (ATerm) ATinsert(CheckATermList(n_48), m_48);
        z_18 = t;
        t = SSLsetAnnotations(z_18, j_48);
      }
    return(t);
  }
  t = v_108(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm y_108 = NULL,z_108 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_108 = ATgetFirst((ATermList) t);
      z_108 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_109 = NULL,e_109 = NULL;
        static ATerm y_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_109)), not_null(e_109));
          return(t);
        }
        t = z_108;
        t = i_0(t);
        if(((d_109 != NULL) && (d_109 != t)))
          _fail(t);
        else
          d_109 = t;
        t = y_108;
        t = g_0(t);
        if(((e_109 != NULL) && (e_109 != t)))
          _fail(t);
        else
          e_109 = t;
        t = z_108;
        t = reverse_acc_2_0(g_0, y_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_46;
      t = i_0(t);
    }
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm k_109 = NULL,l_109 = NULL,m_109 = NULL,b_19 = NULL;
  m_109 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_109);
  k_109 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_109);
  b_19 = t;
  t = SSLsetAnnotations(b_19, k_109);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm o_109 = NULL;
  o_109 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_109), term_h_49);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_109 = NULL,h_109 = NULL;
  ATerm i_49 = t;
  int j_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_109 = NULL,j_109 = NULL;
      t = term_j_21;
      i_109 = t;
      t = term_l_48;
      j_109 = t;
      t = term_o_48;
      t = v_10(i_109, j_109, t);
      LocalPopChoice(j_49);
    }
  else
    {
      t = i_49;
      t = fetch_1_0(z_15, t);
    }
  t = term_l_49;
  t = echo_0_0(t);
  t = term_f_47;
  g_109 = t;
  t = term_g_47;
  h_109 = t;
  t = term_m_49;
  t = v_10(g_109, h_109, t);
  t = reverse_acc_2_0(_id, c_16, t);
  t = map_1_0(d_16, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  static ATerm l_110 (ATerm t)
  {
    ATerm i_110 = NULL,j_110 = NULL,k_110 = NULL;
    i_110 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_110 = ATgetFirst((ATermList) t);
        k_110 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_49 = t;
      int o_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_48 = NULL,c_49 = NULL,d_19 = NULL;
          t = SSLgetAnnotations(i_110);
          w_48 = t;
          t = j_110;
          t = r_87(t);
          c_49 = t;
          t = (ATerm) ATinsert(CheckATermList(k_110), c_49);
          d_19 = t;
          t = SSLsetAnnotations(d_19, w_48);
          LocalPopChoice(o_49);
        }
      else
        {
          t = n_49;
          {
            ATerm k_49 = NULL,x_49 = NULL,h_19 = NULL;
            t = SSLgetAnnotations(i_110);
            k_49 = t;
            t = k_110;
            t = l_110(t);
            x_49 = t;
            t = (ATerm) ATinsert(CheckATermList(x_49), j_110);
            h_19 = t;
            t = SSLsetAnnotations(h_19, k_49);
          }
        }
    }
    return(t);
  }
  t = l_110(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_110 = NULL,q_110 = NULL,r_110 = NULL;
  p_110 = t;
  {
    ATerm p_49 = t;
    int v_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_110;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_49 = ATgetFirst((ATermList) t);
                ATerm y_49 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_110;
          }
        LocalPopChoice(v_49);
      }
    else
      {
        t = p_49;
        t = (ATerm) ATinsert(ATempty, p_110);
      }
  }
  q_110 = t;
  t = term_j_44;
  r_110 = t;
  t = SSL_printnl(r_110, q_110);
  t = p_110;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm v_110 = NULL,w_110 = NULL;
  t = term_j_21;
  v_110 = t;
  t = term_l_48;
  w_110 = t;
  t = term_o_48;
  t = v_10(v_110, w_110, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_10 (ATerm u_32, ATerm v_32, ATerm t)
{
  t = SSL_table_get(u_32, v_32);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm b_111 = NULL,c_111 = NULL;
  t = term_z_49;
  b_111 = t;
  t = term_f_46;
  c_111 = t;
  t = term_b_50;
  t = y_10(b_111, c_111, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  t = term_c_50;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm d_111 = NULL,e_111 = NULL,f_111 = NULL,g_111 = NULL;
  t = term_z_49;
  f_111 = t;
  t = term_f_46;
  g_111 = t;
  t = term_b_50;
  t = y_10(f_111, g_111, t);
  t = term_d_50;
  d_111 = t;
  t = term_f_46;
  e_111 = t;
  t = term_e_50;
  t = y_10(d_111, e_111, t);
  t = term_f_50;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = term_g_50;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_50 = t;
  int n_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_16, g_16, h_16, t);
      LocalPopChoice(n_50);
    }
  else
    {
      t = j_50;
      t = Option_3_0(i_16, j_16, m_16, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t)
{
  ATerm h_111 = NULL,i_111 = NULL,j_111 = NULL,k_111 = NULL,l_111 = NULL,m_111 = NULL,o_19 = NULL;
  m_111 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_111 = ATgetFirst((ATermList) t);
      j_111 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_111);
  h_111 = t;
  t = i_111;
  t = a_74(t);
  k_111 = t;
  t = j_111;
  t = b_74(t);
  l_111 = t;
  t = (ATerm) ATinsert(CheckATermList(l_111), k_111);
  o_19 = t;
  t = SSLsetAnnotations(o_19, h_111);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_117 (ATerm), ATerm t)
{
  ATerm r_111 = NULL,s_111 = NULL,t_111 = NULL,u_111 = NULL,w_111 = NULL,x_111 = NULL,q_19 = NULL;
  r_111 = t;
  {
    ATerm o_50 = t;
    int p_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_50;
        t = v_117(t);
        LocalPopChoice(p_50);
      }
    else
      {
        t = o_50;
      }
  }
  t = r_111;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_111 = ATgetFirst((ATermList) t);
      u_111 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_111);
  s_111 = t;
  t = term_l_48;
  x_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_48, t_111);
  t = y_10(x_111, t_111, t);
  t = u_111;
  {
    static ATerm h_112 (ATerm t)
    {
      ATerm v_50 = t;
      int w_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_50 = t;
          int y_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_112 = NULL;
              a_112 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_112;
              LocalPopChoice(y_50);
            }
          else
            {
              t = x_50;
              t = v_117(t);
              t = Cons_2_0(_id, h_112, t);
            }
          LocalPopChoice(w_50);
        }
      else
        {
          t = v_50;
          {
            ATerm d_112 = NULL,e_112 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_112 = ATgetFirst((ATermList) t);
                e_112 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_112), (ATerm) ATmakeAppl(sym_Undefined_1, d_112));
          }
        }
      return(t);
    }
    t = h_112(t);
  }
  w_111 = t;
  t = (ATerm) ATinsert(CheckATermList(w_111), (ATerm) ATmakeAppl(sym_Program_1, t_111));
  q_19 = t;
  t = SSLsetAnnotations(q_19, s_111);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm t_112 = NULL;
  t_112 = t;
  if(match_string(t, "--help"))
    {
      t = t_112;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_112;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_112;
        }
    }
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm u_112 = NULL,v_112 = NULL;
  t = term_f_49;
  u_112 = t;
  t = term_f_46;
  v_112 = t;
  t = term_z_50;
  t = y_10(u_112, v_112, t);
  t = term_a_51;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = term_b_51;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_117 (ATerm), ATerm t)
{
  ATerm m_112 = NULL,n_112 = NULL,o_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL,s_112 = NULL;
  o_112 = t;
  t = term_f_47;
  q_112 = t;
  t = term_g_47;
  r_112 = t;
  t = (ATerm) ATempty;
  s_112 = t;
  t = SSL_table_put(q_112, r_112, s_112);
  t = o_112;
  {
    static ATerm n_16 (ATerm t)
    {
      ATerm f_51 = t;
      int h_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_117(t);
          LocalPopChoice(h_51);
        }
      else
        {
          t = f_51;
          {
            ATerm k_51 = t;
            int l_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_16, p_16, q_16, t);
                LocalPopChoice(l_51);
              }
            else
              {
                t = k_51;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_16, t);
  }
  {
    ATerm n_51 = t;
    int p_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_113 = NULL;
        g_113 = t;
        {
          ATerm q_51 = t;
          int r_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_50 = NULL;
              t = g_113;
              {
                ATerm s_51 = t;
                int t_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_50 = NULL,l_50 = NULL;
                    t = term_j_21;
                    i_50 = t;
                    t = term_f_49;
                    l_50 = t;
                    t = term_g_49;
                    t = v_10(i_50, l_50, t);
                    LocalPopChoice(t_51);
                  }
                else
                  {
                    t = s_51;
                    t = fetch_1_0(r_16, t);
                  }
              }
              t = g_113;
              t = default_system_usage_0_0(t);
              t = term_q_46;
              h_50 = t;
              t = SSL_exit(h_50);
              LocalPopChoice(r_51);
            }
          else
            {
              t = q_51;
              {
                ATerm q_50 = NULL,r_50 = NULL,t_50 = NULL;
                t = term_j_21;
                r_50 = t;
                t = term_z_49;
                t_50 = t;
                t = term_u_51;
                t = v_10(r_50, t_50, t);
                t = g_113;
                t = default_system_about_0_0(t);
                t = term_q_46;
                q_50 = t;
                t = SSL_exit(q_50);
              }
            }
        }
        LocalPopChoice(p_51);
      }
    else
      {
        t = n_51;
        {
          ATerm v_51 = t;
          int w_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_113 = NULL,i_113 = NULL,j_113 = NULL;
              static ATerm u_16 (ATerm t)
              {
                ATerm k_113 = NULL,l_113 = NULL,m_113 = NULL,s_19 = NULL;
                m_113 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_113 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_113);
                k_113 = t;
                t = l_113;
                if(((m_112 != NULL) && (m_112 != t)))
                  _fail(t);
                else
                  m_112 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_113);
                s_19 = t;
                t = SSLsetAnnotations(s_19, k_113);
                return(t);
              }
              t = fetch_1_0(u_16, t);
              t = term_z_19;
              i_113 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_112)), term_x_51);
              j_113 = t;
              t = SSL_printnl(i_113, j_113);
              t = (ATerm) ATmakeAppl(sym__2, term_z_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_112)), term_x_51));
              t = default_system_usage_0_0(t);
              t = term_j_46;
              h_113 = t;
              t = SSL_exit(h_113);
              LocalPopChoice(w_51);
            }
          else
            {
              t = v_51;
            }
        }
      }
  }
  n_112 = t;
  t = term_f_47;
  p_112 = t;
  t = SSL_table_destroy(p_112);
  t = n_112;
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm x_115 (ATerm), ATerm t)
{
  ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL,u_113 = NULL;
  t = parse_options_1_0(u_115, t);
  r_113 = t;
  t = term_y_51;
  u_113 = t;
  t = SSL_table_create(u_113);
  t = term_y_51;
  s_113 = t;
  t = term_z_51;
  t_113 = t;
  t = SSL_table_put(s_113, t_113, r_113);
  t = r_113;
  t = w_115(t);
  {
    ATerm a_52 = t;
    int b_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_115, t);
        LocalPopChoice(b_52);
      }
    else
      {
        t = a_52;
        {
          ATerm c_52 = t;
          int d_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_115(t);
              t = report_success_0_0(t);
              LocalPopChoice(d_52);
            }
          else
            {
              t = c_52;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm e_52 = t;
  int f_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = stratego_warnings_options_0_0(t);
      LocalPopChoice(f_52);
    }
  else
    {
      t = e_52;
      {
        ATerm g_52 = t;
        int h_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(h_52);
          }
        else
          {
            t = g_52;
            {
              ATerm i_52 = t;
              int j_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(j_52);
                }
              else
                {
                  t = i_52;
                  {
                    ATerm k_52 = t;
                    int l_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(x_16, a_17, b_17, t);
                        LocalPopChoice(l_52);
                      }
                    else
                      {
                        t = k_52;
                        {
                          ATerm m_52 = t;
                          int n_52 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(n_52);
                            }
                          else
                            {
                              t = m_52;
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
static ATerm w_16 (ATerm t)
{
  t = input_1_0(f_17, t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm w_113 = NULL,x_113 = NULL;
  t = term_m_44;
  w_113 = t;
  t = term_f_46;
  x_113 = t;
  t = term_o_52;
  t = y_10(w_113, x_113, t);
  t = term_p_52;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = term_q_52;
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = output_1_0(g_17, t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm z_113 = NULL;
  z_113 = t;
  t = spec_use_def_0_0(t);
  t = z_113;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(v_16, default_usage_0_0, _id, w_16, t);
  return(t);
}
