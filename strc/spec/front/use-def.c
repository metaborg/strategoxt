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
ATerm term_k_63;
ATerm term_j_63;
ATerm term_i_63;
ATerm term_r_62;
ATerm term_o_62;
ATerm term_n_62;
ATerm term_k_62;
ATerm term_w_61;
ATerm term_v_61;
ATerm term_u_61;
ATerm term_s_61;
ATerm term_h_61;
ATerm term_c_61;
ATerm term_b_61;
ATerm term_a_61;
ATerm term_z_60;
ATerm term_y_60;
ATerm term_x_60;
ATerm term_w_60;
ATerm term_p_60;
ATerm term_o_60;
ATerm term_l_60;
ATerm term_k_60;
ATerm term_j_60;
ATerm term_g_60;
ATerm term_z_59;
ATerm term_q_59;
ATerm term_p_59;
ATerm term_o_59;
ATerm term_w_58;
ATerm term_v_58;
ATerm term_u_58;
ATerm term_l_58;
ATerm term_k_58;
ATerm term_j_58;
ATerm term_i_58;
ATerm term_h_58;
ATerm term_v_57;
ATerm term_u_57;
ATerm term_t_57;
ATerm term_s_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_g_57;
ATerm term_f_57;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_a_57;
ATerm term_z_56;
ATerm term_y_56;
ATerm term_x_56;
ATerm term_w_56;
ATerm term_v_56;
ATerm term_s_56;
ATerm term_r_56;
ATerm term_b_56;
ATerm term_a_56;
ATerm term_x_55;
ATerm term_w_55;
ATerm term_v_55;
ATerm term_s_55;
ATerm term_p_55;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_w_37;
ATerm term_a_37;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_l_36;
ATerm term_e_33;
ATerm term_y_32;
ATerm term_q_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_y_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_q_29;
ATerm term_i_29;
ATerm term_k_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_p_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_y_26;
ATerm term_o_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_b_25;
ATerm term_s_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_h_24;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("z_0", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("c_1", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("t_0", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym__2, term_h_24, (ATerm) ATempty);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__2, term_j_24, (ATerm) ATempty);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_s_29);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("o_1", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym_Defined_2, term_l_36, term_n_36);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("q_1", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(sym_Defined_2, term_w_40, term_n_36);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("m_1", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym_Defined_2, term_s_43, term_t_43);
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_v_55);
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_a_56);
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_v_56);
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_56));
  term_z_56 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(sym__2, term_e_57, term_f_57);
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_57);
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(sym__2, term_k_57, term_y_56);
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(sym__2, term_s_29, term_f_57);
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeAppl(sym__2, term_s_29, term_b_57);
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_v_58);
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_e_57);
  ATprotect(&(term_p_59));
  term_p_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_z_59);
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(sym__2, term_s_57, term_t_57);
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(sym__2, term_w_60, term_y_56);
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(sym__2, term_z_60, term_y_56);
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_61));
  term_s_61 = (ATerm) ATmakeAppl(sym__2, term_z_59, term_y_56);
  ATprotect(&(term_u_61));
  term_u_61 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(sym__3, term_s_57, term_t_57, (ATerm) ATempty);
  ATprotect(&(term_k_62));
  term_k_62 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_w_60);
  ATprotect(&(term_n_62));
  term_n_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_62));
  term_o_62 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(sym__2, term_a_56, term_y_56);
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm h_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm b_10 (ATerm y_24, ATerm x_24, ATerm z_24, ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm rdef_ud_0_0 (ATerm t);
ATerm Context_0_0 (ATerm t);
ATerm Unbound_0_0 (ATerm t);
ATerm Warning_0_0 (ATerm t);
ATerm MaybeUnbound_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm use_vars_0_0 (ATerm t);
ATerm or_2_0 (ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm bind_vars_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm unbound_vars_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm sdef_ud_0_0 (ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm r_136 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm q_136 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm s_136 (ATerm), ATerm t_136 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm p_136 (ATerm), ATerm t);
static ATerm c_10 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm v_107 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm d_10 (ATerm g_79, ATerm h_79, ATerm i_79, ATerm t);
static ATerm u_4 (ATerm t);
static ATerm e_10 (ATerm a_79, ATerm e_79, ATerm c_79, ATerm t);
static ATerm w_4 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm f_10 (ATerm u_78, ATerm y_78, ATerm w_78, ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm g_10 (ATerm s_77, ATerm t_77, ATerm u_77, ATerm w_77, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm h_10 (ATerm d_76, ATerm e_76, ATerm c_76, ATerm t);
static ATerm z_6 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm i_10 (ATerm r_33, ATerm q_33, ATerm t);
static ATerm j_10 (ATerm n_37, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm q_76, ATerm t);
static ATerm j_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm k_10 (ATerm b_33, ATerm c_33, ATerm d_33, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm n_10 (ATerm z_32, ATerm a_33, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm o_10 (ATerm t_105 (ATerm), ATerm k_31, ATerm i_31, ATerm t);
static ATerm h_8 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm t_125 (ATerm), ATerm u_125 (ATerm), ATerm v_125 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm c_126 (ATerm), ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm n_14 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm z_14 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm r_10 (ATerm o_101 (ATerm), ATerm w_25, ATerm v_25, ATerm t);
ATerm foldr_3_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm t);
static ATerm s_10 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm a_26, ATerm z_25, ATerm t);
static ATerm t_10 (ATerm j_101 (ATerm), ATerm u_25, ATerm t_25, ATerm t);
ATerm genzip_4_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm t);
static ATerm t_15 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm y_10 (ATerm z_744, ATerm e_745, ATerm g_75, ATerm t);
ATerm while_not_2_0 (ATerm v_114 (ATerm), ATerm w_114 (ATerm), ATerm t);
ATerm for_3_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm k_95 (ATerm e_94, ATerm f_94, ATerm g_94, ATerm t);
static ATerm p_16 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm c_17 (ATerm t);
ATerm free_vars_3_0 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm i_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm topdown_1_0 (ATerm d_106 (ATerm), ATerm t);
static ATerm a_11 (ATerm t_32, ATerm u_32, ATerm t);
ATerm end_scope_1_0 (ATerm q_105 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_105 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t);
static ATerm p_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm j_18 (ATerm t);
ATerm def_use_def_0_0 (ATerm t);
ATerm filter_1_0 (ATerm w_118 (ATerm), ATerm t);
static ATerm l_18 (ATerm t);
static ATerm n_18 (ATerm t);
static ATerm s_18 (ATerm t);
static ATerm v_18 (ATerm t);
ATerm spec_use_def_0_0 (ATerm t);
static ATerm c_11 (ATerm z_43, ATerm a_44, ATerm t);
static ATerm d_11 (ATerm w_49, ATerm x_49, ATerm t);
static ATerm f_11 (ATerm t_115 (ATerm), ATerm w_470, ATerm c_50, ATerm t);
static ATerm e_11 (ATerm s_49, ATerm t_49, ATerm t);
static ATerm w_18 (ATerm t);
static ATerm y_18 (ATerm t);
ATerm output_1_0 (ATerm a_133 (ATerm), ATerm t);
static ATerm v_101 (ATerm l_101, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_11 (ATerm y_49, ATerm t);
static ATerm h_11 (ATerm s_42, ATerm t_42, ATerm t);
static ATerm i_11 (ATerm b_44, ATerm c_44, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_103 (ATerm i_102, ATerm t);
static ATerm o_103 (ATerm o_102, ATerm p_102, ATerm s_102, ATerm t);
static ATerm p_103 (ATerm a_103, ATerm b_103, ATerm c_103, ATerm t);
static ATerm j_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm b_133 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm a_19 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm g_19 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_19 (ATerm t);
static ATerm l_19 (ATerm t);
static ATerm m_19 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm p_19 (ATerm t);
static ATerm q_19 (ATerm t);
static ATerm r_19 (ATerm t);
static ATerm s_19 (ATerm t);
static ATerm x_19 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_11 (ATerm u_47, ATerm v_47, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm y_19 (ATerm t);
static ATerm z_19 (ATerm t);
static ATerm b_20 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_20 (ATerm t);
static ATerm d_20 (ATerm t);
static ATerm k_20 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm q_102 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_107 (ATerm b_107, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm b_11 (ATerm a_48, ATerm z_47, ATerm t);
static ATerm q_11 (ATerm o_32, ATerm p_32, ATerm n_32, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm s_20 (ATerm t);
static ATerm t_20 (ATerm t);
static ATerm h_21 (ATerm t);
static ATerm i_21 (ATerm t);
static ATerm k_21 (ATerm t);
static ATerm n_21 (ATerm t);
static ATerm o_21 (ATerm t);
static ATerm p_21 (ATerm t);
static ATerm r_21 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_11 (ATerm w_29, ATerm x_29, ATerm t);
ATerm foldr_2_0 (ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_21 (ATerm t);
static ATerm u_21 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_111 (ATerm), ATerm t);
static ATerm y_21 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm g_22 (ATerm t);
ATerm need_help_1_0 (ATerm r_132 (ATerm), ATerm t);
static ATerm t_11 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t);
ATerm lookup_table_0_1 (ATerm a_34, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_37, ATerm p_37, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_11 (ATerm l_37, ATerm m_37, ATerm t);
static ATerm n_11 (ATerm q_37, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm z_101 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm i_22 (ATerm t);
static ATerm l_22 (ATerm t);
static ATerm m_22 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_102 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_11 (ATerm j_37, ATerm k_37, ATerm t);
static ATerm p_11 (ATerm h_34, ATerm i_34, ATerm t);
static ATerm r_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm w_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm a_23 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_134 (ATerm), ATerm t);
static ATerm d_23 (ATerm t);
static ATerm f_23 (ATerm t);
static ATerm q_23 (ATerm t);
static ATerm r_23 (ATerm t);
ATerm parse_options_1_0 (ATerm t_134 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm t);
static ATerm u_23 (ATerm t);
static ATerm v_23 (ATerm t);
static ATerm x_23 (ATerm t);
static ATerm y_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm b_24 (ATerm t);
static ATerm c_24 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_h_24;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_j_24;
  return(t);
}
static ATerm b_10 (ATerm y_24, ATerm x_24, ATerm z_24, ATerm t)
{
  ATerm a_0 = NULL,o_0 = NULL,r_0 = NULL,s_0 = NULL,u_0 = NULL;
  a_0 = t;
  t = (ATerm) ATempty;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_24, y_24);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_k_24, y_24));
  t = o_10(h_1, s_0, u_0, t);
  t = (ATerm) ATempty;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_24, y_24);
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_24, y_24));
  t = o_10(r_1, o_0, r_0, t);
  t = z_24;
  t = use_vars_0_0(t);
  t = a_0;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_h_24;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_j_24;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_h_24;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_j_24;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_h_24;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_j_24;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL,d_1 = NULL,f_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,n_1 = NULL,p_1 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      i_1 = ATgetArgument(t, 0);
      j_1 = ATgetArgument(t, 1);
      k_1 = ATgetArgument(t, 2);
      a_1 = ATgetArgument(t, 3);
      t = a_1;
      if(match_cons(t, sym_StratRule_3))
        {
          b_1 = ATgetArgument(t, 0);
          d_1 = ATgetArgument(t, 1);
          f_1 = ATgetArgument(t, 2);
          {
            ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL;
            t = (ATerm) ATempty;
            z_1 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_24, i_1);
            a_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_m_24, i_1));
            t = o_10(s_1, z_1, a_2, t);
            t = (ATerm) ATempty;
            x_1 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_24, i_1);
            y_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_24, i_1));
            t = o_10(t_1, x_1, y_1, t);
            t = (ATerm) ATmakeAppl(sym__3, b_1, d_1, f_1);
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, i_1, j_1, k_1, (ATerm) ATmakeAppl(sym_StratRule_3, b_1, d_1, f_1));
          }
        }
      else
        {
          ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,p_2 = NULL;
          if(match_cons(t, sym_Rule_3))
            {
              b_1 = ATgetArgument(t, 0);
              d_1 = ATgetArgument(t, 1);
              f_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          j_2 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_24, i_1);
          p_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_24, i_1));
          t = o_10(u_1, j_2, p_2, t);
          t = (ATerm) ATempty;
          h_2 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_24, i_1);
          i_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_24, i_1));
          t = o_10(v_1, h_2, i_2, t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, i_1, j_1, k_1, (ATerm) ATmakeAppl(sym_Rule_3, b_1, d_1, f_1));
          {
            static ATerm w_1 (ATerm t)
            {
              t = b_1;
              t = bind_vars_0_0(t);
              return(t);
            }
            static ATerm b_2 (ATerm t)
            {
              static ATerm c_2 (ATerm t)
              {
                t = f_1;
                t = unbound_vars_0_0(t);
                return(t);
              }
              static ATerm d_2 (ATerm t)
              {
                t = d_1;
                t = use_vars_0_0(t);
                return(t);
              }
              t = or_2_0(c_2, d_2, t);
              return(t);
            }
            t = or_2_0(w_1, b_2, t);
          }
          t = (ATerm) ATmakeAppl(sym_RDefT_4, i_1, j_1, k_1, (ATerm) ATmakeAppl(sym_Rule_3, b_1, d_1, f_1));
        }
    }
  else
    {
      ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          i_1 = ATgetArgument(t, 0);
          j_1 = ATgetArgument(t, 1);
          k_1 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_1;
      if(match_cons(t, sym_Rule_3))
        {
          l_1 = ATgetArgument(t, 0);
          n_1 = ATgetArgument(t, 1);
          p_1 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      b_3 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_24, i_1);
      c_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_24, i_1));
      t = o_10(e_2, b_3, c_3, t);
      t = (ATerm) ATempty;
      z_2 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_24, i_1);
      a_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_s_24, i_1));
      t = o_10(f_2, z_2, a_3, t);
      t = (ATerm) ATmakeAppl(sym_RDef_3, i_1, j_1, (ATerm) ATmakeAppl(sym_Rule_3, l_1, n_1, p_1));
      {
        static ATerm g_2 (ATerm t)
        {
          t = l_1;
          t = bind_vars_0_0(t);
          return(t);
        }
        static ATerm l_2 (ATerm t)
        {
          static ATerm m_2 (ATerm t)
          {
            t = p_1;
            t = unbound_vars_0_0(t);
            return(t);
          }
          static ATerm n_2 (ATerm t)
          {
            t = n_1;
            t = use_vars_0_0(t);
            return(t);
          }
          t = or_2_0(m_2, n_2, t);
          return(t);
        }
        t = or_2_0(g_2, l_2, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDef_3, i_1, j_1, (ATerm) ATmakeAppl(sym_Rule_3, l_1, n_1, p_1));
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm k_4 = NULL;
  k_4 = t;
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_3 = NULL,u_3 = NULL,w_3 = NULL;
        t = (ATerm) ATempty;
        u_3 = t;
        t = term_h_24;
        w_3 = t;
        t = term_b_25;
        t = n_10(w_3, u_3, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm c_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_25) != ATmakeSymbol("e_1", 0, ATtrue)))
              _fail(t);
            s_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_4), term_j_25), s_3), term_i_25);
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_4 = NULL,r_4 = NULL,t_4 = NULL;
              t = (ATerm) ATempty;
              r_4 = t;
              t = term_h_24;
              t_4 = t;
              t = term_b_25;
              t = n_10(t_4, r_4, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm n_25 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) n_25) != ATmakeSymbol("z_0", 0, ATtrue)))
                    _fail(t);
                  h_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_4), term_j_25), h_4), term_o_25);
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
              {
                ATerm q_25 = t;
                int s_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_5 = NULL,f_5 = NULL,g_5 = NULL;
                    t = (ATerm) ATempty;
                    f_5 = t;
                    t = term_h_24;
                    g_5 = t;
                    t = term_b_25;
                    t = n_10(g_5, f_5, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm y_25 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) y_25) != ATmakeSymbol("t_0", 0, ATtrue)))
                          _fail(t);
                        b_5 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_4), term_j_25), b_5), term_o_25);
                    LocalPopChoice(s_25);
                  }
                else
                  {
                    t = q_25;
                    {
                      ATerm b_26 = t;
                      int e_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_5 = NULL,w_5 = NULL,x_5 = NULL;
                          t = (ATerm) ATempty;
                          w_5 = t;
                          t = term_h_24;
                          x_5 = t;
                          t = term_b_25;
                          t = n_10(x_5, w_5, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm g_26 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) g_26) != ATmakeSymbol("n_0", 0, ATtrue)))
                                _fail(t);
                              r_5 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_4), term_j_25), r_5), term_o_25);
                          LocalPopChoice(e_26);
                        }
                      else
                        {
                          t = b_26;
                          {
                            ATerm h_26 = t;
                            int j_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm e_6 = NULL,h_6 = NULL,q_6 = NULL;
                                t = (ATerm) ATempty;
                                h_6 = t;
                                t = term_h_24;
                                q_6 = t;
                                t = term_b_25;
                                t = n_10(q_6, h_6, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm k_26 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) k_26) != ATmakeSymbol("i_0", 0, ATtrue)))
                                      _fail(t);
                                    e_6 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_4), term_j_25), e_6), term_y_26);
                                LocalPopChoice(j_26);
                              }
                            else
                              {
                                t = h_26;
                                {
                                  ATerm u_6 = NULL,w_6 = NULL,y_6 = NULL;
                                  t = (ATerm) ATempty;
                                  w_6 = t;
                                  t = term_h_24;
                                  y_6 = t;
                                  t = term_b_25;
                                  t = n_10(y_6, w_6, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm z_26 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) z_26) != ATmakeSymbol("c_0", 0, ATtrue)))
                                        _fail(t);
                                      u_6 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_4), term_j_25), u_6), term_y_26);
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
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,c_5 = NULL,d_5 = NULL;
  c_5 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5;
  if(match_cons(t, sym_ListVar_1))
    {
      a_5 = ATgetArgument(t, 0);
      {
        ATerm a_27 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_5;
            x_4 = t;
            t = c_5;
            LocalPopChoice(b_27);
          }
        else
          {
            t = a_27;
            t = d_5;
            x_4 = t;
            t = c_5;
          }
      }
    }
  else
    {
      t = d_5;
      x_4 = t;
      t = c_5;
    }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_27), x_4), term_d_27);
  t = Context_0_0(t);
  y_4 = t;
  t = term_f_27;
  z_4 = t;
  t = SSL_printnl(z_4, y_4);
  t = y_4;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm m_6 = NULL;
  m_6 = t;
  {
    ATerm h_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_8 = NULL,p_8 = NULL,w_8 = NULL;
        t = (ATerm) ATempty;
        p_8 = t;
        t = term_j_24;
        w_8 = t;
        t = term_p_27;
        t = n_10(w_8, p_8, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm q_27 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_27) != ATmakeSymbol("g_1", 0, ATtrue)))
              _fail(t);
            n_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_6), term_x_27), n_8), term_w_27);
        LocalPopChoice(l_27);
      }
    else
      {
        t = h_27;
        {
          ATerm y_27 = t;
          int z_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_9 = NULL,m_9 = NULL,n_9 = NULL;
              t = (ATerm) ATempty;
              m_9 = t;
              t = term_j_24;
              n_9 = t;
              t = term_p_27;
              t = n_10(n_9, m_9, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm c_28 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_28) != ATmakeSymbol("c_1", 0, ATtrue)))
                    _fail(t);
                  j_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_6), term_x_27), j_9), term_k_28);
              LocalPopChoice(z_27);
            }
          else
            {
              t = y_27;
              {
                ATerm l_28 = t;
                int o_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_9 = NULL,w_9 = NULL,x_9 = NULL;
                    t = (ATerm) ATempty;
                    w_9 = t;
                    t = term_j_24;
                    x_9 = t;
                    t = term_p_27;
                    t = n_10(x_9, w_9, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm t_28 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) t_28) != ATmakeSymbol("w_0", 0, ATtrue)))
                          _fail(t);
                        u_9 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_6), term_x_27), u_9), term_k_28);
                    LocalPopChoice(o_28);
                  }
                else
                  {
                    t = l_28;
                    {
                      ATerm w_28 = t;
                      int a_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_10 = NULL,w_11 = NULL,y_11 = NULL;
                          t = (ATerm) ATempty;
                          w_11 = t;
                          t = term_j_24;
                          y_11 = t;
                          t = term_p_27;
                          t = n_10(y_11, w_11, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm b_29 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) b_29) != ATmakeSymbol("q_0", 0, ATtrue)))
                                _fail(t);
                              l_10 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_6), term_x_27), l_10), term_k_28);
                          LocalPopChoice(a_29);
                        }
                      else
                        {
                          t = w_28;
                          {
                            ATerm c_29 = t;
                            int d_29 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm e_12 = NULL,g_12 = NULL,h_12 = NULL;
                                t = (ATerm) ATempty;
                                g_12 = t;
                                t = term_j_24;
                                h_12 = t;
                                t = term_p_27;
                                t = n_10(h_12, g_12, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm h_29 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) h_29) != ATmakeSymbol("k_0", 0, ATtrue)))
                                      _fail(t);
                                    e_12 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_6), term_x_27), e_12), term_i_29);
                                LocalPopChoice(d_29);
                              }
                            else
                              {
                                t = c_29;
                                {
                                  ATerm l_12 = NULL,o_12 = NULL,p_12 = NULL;
                                  t = (ATerm) ATempty;
                                  o_12 = t;
                                  t = term_j_24;
                                  p_12 = t;
                                  t = term_p_27;
                                  t = n_10(p_12, o_12, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm j_29 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) j_29) != ATmakeSymbol("e_0", 0, ATtrue)))
                                        _fail(t);
                                      l_12 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_6), term_x_27), l_12), term_i_29);
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
  ATerm n_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  q_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7;
  if(match_cons(t, sym_ListVar_1))
    {
      p_7 = ATgetArgument(t, 0);
      {
        ATerm k_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_7;
            n_7 = t;
            t = q_7;
            LocalPopChoice(l_29);
          }
        else
          {
            t = k_29;
            t = r_7;
            n_7 = t;
            t = q_7;
          }
      }
    }
  else
    {
      t = r_7;
      n_7 = t;
      t = q_7;
    }
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
        t = term_q_29;
        w_7 = t;
        t = term_s_29;
        x_7 = t;
        t = term_t_29;
        t = p_11(w_7, x_7, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_29), n_7), term_d_27);
        t = Warning_0_0(t);
        t_7 = t;
        t = term_f_27;
        v_7 = t;
        t = SSL_printnl(v_7, t_7);
        t = t_7;
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
      }
  }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,y_8 = NULL,v_0 = NULL;
  y_8 = t;
  if(match_cons(t, sym_App_2))
    {
      t_8 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_8);
  s_8 = t;
  t = t_8;
  t = unbound_vars_0_0(t);
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, v_8, u_8);
  v_0 = t;
  t = SSLsetAnnotations(v_0, s_8);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,x_0 = NULL;
  e_9 = t;
  if(match_cons(t, sym_App_2))
    {
      a_9 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_9);
  z_8 = t;
  t = c_9;
  t = use_vars_0_0(t);
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, a_9, d_9);
  x_0 = t;
  t = SSLsetAnnotations(x_0, z_8);
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL;
  ATerm z_29 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_8 = NULL,f_8 = NULL;
      e_8 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      f_8 = t;
      t = SSLgetAnnotations(e_8);
      c_8 = t;
      t = f_8;
      LocalPopChoice(b_30);
      {
        ATerm g_8 = NULL;
        g_8 = t;
        t = c_8;
        {
          ATerm c_30 = t;
          int d_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm f_30 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) f_30) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm g_30 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(g_30) != AT_LIST) || !(ATisEmpty(g_30))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(d_30);
              _fail(t);
            }
          else
            {
              t = c_30;
              {
                ATerm h_30 = t;
                int k_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm m_30 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) m_30) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm n_30 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(n_30) != AT_LIST) || !(ATisEmpty(n_30))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(k_30);
                    t = (ATerm) ATmakeAppl(sym_Var_1, d_8);
                    t = MaybeUnbound_0_0(t);
                    _fail(t);
                  }
                else
                  {
                    t = h_30;
                    {
                      ATerm o_30 = t;
                      int p_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm q_30 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) q_30) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm s_30 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(s_30) != AT_LIST) || !(ATisEmpty(s_30))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(p_30);
                          t = (ATerm) ATmakeAppl(sym_Var_1, d_8);
                          t = Unbound_0_0(t);
                        }
                      else
                        {
                          t = o_30;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, d_8);
                          t = Unbound_0_0(t);
                        }
                    }
                  }
              }
            }
        }
        t = g_8;
      }
    }
  else
    {
      t = z_29;
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_8 = NULL,l_8 = NULL,q_8 = NULL,r_8 = NULL,p_0 = NULL;
            r_8 = t;
            if(match_cons(t, sym_App_2))
              {
                l_8 = ATgetArgument(t, 0);
                q_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_8);
            j_8 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, l_8, q_8);
            p_0 = t;
            t = SSLsetAnnotations(p_0, j_8);
            LocalPopChoice(v_30);
            t = or_2_0(o_2, q_2, t);
          }
        else
          {
            t = u_30;
            {
              ATerm x_30 = t;
              int y_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,y_0 = NULL;
                  i_9 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      h_9 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_9);
                  g_9 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, h_9);
                  y_0 = t;
                  t = SSLsetAnnotations(y_0, g_9);
                  LocalPopChoice(y_30);
                  {
                    ATerm k_9 = NULL,p_9 = NULL,r_9 = NULL,s_9 = NULL,k_2 = NULL;
                    s_9 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        p_9 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(s_9);
                    k_9 = t;
                    t = p_9;
                    t = unbound_vars_0_0(t);
                    r_9 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, r_9);
                    k_2 = t;
                    t = SSLsetAnnotations(k_2, k_9);
                  }
                }
              else
                {
                  t = x_30;
                  t = SRTS_some(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm or_2_0 (ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm t)
{
  ATerm c_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_10 = NULL;
      m_10 = t;
      t = w_119(t);
      t = m_10;
      LocalPopChoice(e_31);
      {
        ATerm p_10 = NULL;
        p_10 = t;
        {
          ATerm g_31 = t;
          int h_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_10;
              t = x_119(t);
              t = p_10;
              LocalPopChoice(h_31);
            }
          else
            {
              t = g_31;
              t = p_10;
            }
        }
      }
    }
  else
    {
      t = c_31;
      {
        ATerm v_10 = NULL;
        v_10 = t;
        t = x_119(t);
        t = v_10;
      }
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm a_12 = NULL,d_12 = NULL,m_12 = NULL,s_12 = NULL,u_12 = NULL,y_2 = NULL;
  u_12 = t;
  if(match_cons(t, sym_App_2))
    {
      d_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_12);
  a_12 = t;
  t = d_12;
  t = unbound_vars_0_0(t);
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, s_12, m_12);
  y_2 = t;
  t = SSLsetAnnotations(y_2, a_12);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,z_12 = NULL,a_13 = NULL,d_3 = NULL;
  a_13 = t;
  if(match_cons(t, sym_App_2))
    {
      w_12 = ATgetArgument(t, 0);
      x_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_13);
  v_12 = t;
  t = x_12;
  t = use_vars_0_0(t);
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, w_12, z_12);
  d_3 = t;
  t = SSLsetAnnotations(d_3, v_12);
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm j_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_10 = NULL,x_10 = NULL,z_10 = NULL,w_2 = NULL;
      z_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          x_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_10);
      w_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, x_10);
      w_2 = t;
      t = SSLsetAnnotations(w_2, w_10);
      LocalPopChoice(l_31);
      _fail(t);
    }
  else
    {
      t = j_31;
      {
        ATerm m_31 = t;
        int q_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_11 = NULL,o_11 = NULL,r_11 = NULL,x_11 = NULL,x_2 = NULL;
            x_11 = t;
            if(match_cons(t, sym_App_2))
              {
                o_11 = ATgetArgument(t, 0);
                r_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_11);
            l_11 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, o_11, r_11);
            x_2 = t;
            t = SSLsetAnnotations(x_2, l_11);
            LocalPopChoice(q_31);
            t = or_2_0(r_2, s_2, t);
          }
        else
          {
            t = m_31;
            {
              ATerm x_31 = t;
              int y_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_3 = NULL;
                  d_13 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      c_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_13);
                  b_13 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, c_13);
                  e_3 = t;
                  t = SSLsetAnnotations(e_3, b_13);
                  LocalPopChoice(y_31);
                  {
                    ATerm e_13 = NULL,f_13 = NULL,j_13 = NULL,k_13 = NULL,f_3 = NULL;
                    k_13 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        f_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(k_13);
                    e_13 = t;
                    t = f_13;
                    t = unbound_vars_0_0(t);
                    j_13 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, j_13);
                    f_3 = t;
                    t = SSLsetAnnotations(f_3, e_13);
                  }
                }
              else
                {
                  t = x_31;
                  t = SRTS_some(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm w_14 = NULL,y_14 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,x_3 = NULL;
  g_15 = t;
  if(match_cons(t, sym_Rule_3))
    {
      y_14 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
      e_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_15);
  w_14 = t;
  t = y_14;
  t = bind_vars_0_0(t);
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym_Rule_3, f_15, d_15, e_15);
  x_3 = t;
  t = SSLsetAnnotations(x_3, w_14);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = or_2_0(v_2, g_3, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,y_3 = NULL;
  m_15 = t;
  if(match_cons(t, sym_Rule_3))
    {
      i_15 = ATgetArgument(t, 0);
      j_15 = ATgetArgument(t, 1);
      k_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_15);
  h_15 = t;
  t = k_15;
  t = unbound_vars_0_0(t);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym_Rule_3, i_15, j_15, l_15);
  y_3 = t;
  t = SSLsetAnnotations(y_3, h_15);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,z_3 = NULL;
  s_15 = t;
  if(match_cons(t, sym_Rule_3))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
      q_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_15);
  n_15 = t;
  t = p_15;
  t = use_vars_0_0(t);
  r_15 = t;
  t = (ATerm) ATmakeAppl(sym_Rule_3, o_15, r_15, q_15);
  z_3 = t;
  t = SSLsetAnnotations(z_3, n_15);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm f_16 = NULL,i_16 = NULL,o_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,d_4 = NULL;
  z_16 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      i_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
      x_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_16);
  f_16 = t;
  t = o_16;
  t = unbound_vars_0_0(t);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, i_16, y_16, x_16);
  d_4 = t;
  t = SSLsetAnnotations(d_4, f_16);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm a_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,j_17 = NULL,n_17 = NULL,e_4 = NULL;
  n_17 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      f_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
      h_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_17);
  a_17 = t;
  t = h_17;
  t = use_vars_0_0(t);
  j_17 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, f_17, g_17, j_17);
  e_4 = t;
  t = SSLsetAnnotations(e_4, a_17);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,f_18 = NULL,k_18 = NULL,m_18 = NULL,o_18 = NULL,g_4 = NULL;
  o_18 = t;
  if(match_cons(t, sym_CallT_3))
    {
      c_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
      k_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_18);
  b_18 = t;
  t = f_18;
  t = unbound_vars_0_0(t);
  m_18 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, c_18, m_18, k_18);
  g_4 = t;
  t = SSLsetAnnotations(g_4, b_18);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,t_18 = NULL,x_18 = NULL,z_18 = NULL,i_4 = NULL;
  z_18 = t;
  if(match_cons(t, sym_CallT_3))
    {
      q_18 = ATgetArgument(t, 0);
      r_18 = ATgetArgument(t, 1);
      t_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_18);
  p_18 = t;
  t = t_18;
  t = use_vars_0_0(t);
  x_18 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, q_18, r_18, x_18);
  i_4 = t;
  t = SSLsetAnnotations(i_4, p_18);
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_13 = NULL,r_13 = NULL,t_13 = NULL,o_3 = NULL;
      t_13 = t;
      if(match_cons(t, sym_Build_1))
        {
          r_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_13);
      m_13 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, r_13);
      o_3 = t;
      t = SSLsetAnnotations(o_3, m_13);
      LocalPopChoice(a_32);
      {
        ATerm u_13 = NULL,v_13 = NULL,z_13 = NULL,a_14 = NULL,p_3 = NULL;
        a_14 = t;
        if(match_cons(t, sym_Build_1))
          {
            v_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_14);
        u_13 = t;
        t = v_13;
        t = use_vars_0_0(t);
        z_13 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
        p_3 = t;
        t = SSLsetAnnotations(p_3, u_13);
      }
    }
  else
    {
      t = z_31;
      {
        ATerm c_32 = t;
        int e_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_14 = NULL,c_14 = NULL,e_14 = NULL,q_3 = NULL;
            e_14 = t;
            if(match_cons(t, sym_Match_1))
              {
                c_14 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_14);
            b_14 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, c_14);
            q_3 = t;
            t = SSLsetAnnotations(q_3, b_14);
            LocalPopChoice(e_32);
            {
              ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,r_3 = NULL;
              i_14 = t;
              if(match_cons(t, sym_Match_1))
                {
                  g_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_14);
              f_14 = t;
              t = g_14;
              t = bind_vars_0_0(t);
              h_14 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, h_14);
              r_3 = t;
              t = SSLsetAnnotations(r_3, f_14);
            }
          }
        else
          {
            t = c_32;
            {
              ATerm f_32 = t;
              int g_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_14 = NULL,p_14 = NULL,q_14 = NULL,s_14 = NULL,t_14 = NULL,v_3 = NULL;
                  t_14 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      p_14 = ATgetArgument(t, 0);
                      q_14 = ATgetArgument(t, 1);
                      s_14 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_14);
                  m_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, p_14, q_14, s_14);
                  v_3 = t;
                  t = SSLsetAnnotations(v_3, m_14);
                  LocalPopChoice(g_32);
                  t = or_2_0(t_2, u_2, t);
                }
              else
                {
                  t = f_32;
                  {
                    ATerm h_32 = t;
                    int i_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_15 = NULL,x_15 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,a_4 = NULL;
                        e_16 = t;
                        if(match_cons(t, sym_PrimT_3))
                          {
                            x_15 = ATgetArgument(t, 0);
                            c_16 = ATgetArgument(t, 1);
                            d_16 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(e_16);
                        v_15 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, x_15, c_16, d_16);
                        a_4 = t;
                        t = SSLsetAnnotations(a_4, v_15);
                        LocalPopChoice(i_32);
                        t = or_2_0(h_3, i_3, t);
                      }
                    else
                      {
                        t = h_32;
                        {
                          ATerm j_32 = t;
                          int k_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_17 = NULL,q_17 = NULL,t_17 = NULL,u_17 = NULL,w_17 = NULL,f_4 = NULL;
                              w_17 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  q_17 = ATgetArgument(t, 0);
                                  t_17 = ATgetArgument(t, 1);
                                  u_17 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(w_17);
                              o_17 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, q_17, t_17, u_17);
                              f_4 = t;
                              t = SSLsetAnnotations(f_4, o_17);
                              LocalPopChoice(k_32);
                              t = or_2_0(j_3, k_3, t);
                            }
                          else
                            {
                              t = j_32;
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
static ATerm l_3 (ATerm t)
{
  t = term_h_24;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_j_24;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_h_24;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_j_24;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm f_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      h_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
      j_19 = ATgetArgument(t, 2);
      f_19 = ATgetArgument(t, 3);
      {
        ATerm o_19 = NULL,u_19 = NULL,v_19 = NULL,a_20 = NULL;
        t = (ATerm) ATempty;
        v_19 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_32, h_19);
        a_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_32, h_19));
        t = o_10(l_3, v_19, a_20, t);
        t = (ATerm) ATempty;
        o_19 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_32, h_19);
        u_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_m_32, h_19));
        t = o_10(m_3, o_19, u_19, t);
        t = f_19;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, h_19, i_19, j_19, f_19);
      }
    }
  else
    {
      ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          h_19 = ATgetArgument(t, 0);
          i_19 = ATgetArgument(t, 1);
          j_19 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      g_20 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_32, h_19);
      h_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_32, h_19));
      t = o_10(n_3, g_20, h_20, t);
      t = (ATerm) ATempty;
      e_20 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_32, h_19);
      f_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_y_32, h_19));
      t = o_10(t_3, e_20, f_20, t);
      t = j_19;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, h_19, i_19, j_19);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm r_136 (ATerm), ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,p_20 = NULL,q_20 = NULL,v_20 = NULL,p_5 = NULL;
  static ATerm b_4 (ATerm t)
  {
    ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,m_21 = NULL,q_21 = NULL,s_5 = NULL,q_5 = NULL;
    q_21 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        c_21 = ATgetArgument(t, 0);
        d_21 = ATgetArgument(t, 1);
        e_21 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_21);
    b_21 = t;
    t = c_21;
    t = r_136(t);
    f_21 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, f_21, d_21, e_21);
    q_5 = t;
    t = SSLsetAnnotations(q_5, b_21);
    m_21 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        x_20 = ATgetArgument(t, 0);
        y_20 = ATgetArgument(t, 1);
        z_20 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_21);
    w_20 = t;
    t = y_20;
    t = r_136(t);
    a_21 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, x_20, a_21, z_20);
    s_5 = t;
    t = SSLsetAnnotations(s_5, w_20);
    return(t);
  }
  static ATerm c_4 (ATerm t)
  {
    ATerm v_21 = NULL,x_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,t_5 = NULL;
    c_22 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        x_21 = ATgetArgument(t, 0);
        z_21 = ATgetArgument(t, 1);
        a_22 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_22);
    v_21 = t;
    t = a_22;
    t = r_136(t);
    b_22 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, x_21, z_21, b_22);
    t_5 = t;
    t = SSLsetAnnotations(t_5, v_21);
    return(t);
  }
  v_20 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      j_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
      q_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_20);
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, j_20, p_20, q_20);
  p_5 = t;
  t = SSLsetAnnotations(p_5, i_20);
  t = abstract_choice_2_0(b_4, c_4, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm q_136 (ATerm), ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,j_22 = NULL,d_6 = NULL;
  static ATerm j_4 (ATerm t)
  {
    ATerm k_22 = NULL,n_22 = NULL,p_22 = NULL,q_22 = NULL,s_22 = NULL,g_6 = NULL;
    s_22 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        n_22 = ATgetArgument(t, 0);
        p_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_22);
    k_22 = t;
    t = n_22;
    t = q_136(t);
    q_22 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, q_22, p_22);
    g_6 = t;
    t = SSLsetAnnotations(g_6, k_22);
    return(t);
  }
  static ATerm l_4 (ATerm t)
  {
    ATerm y_22 = NULL,b_23 = NULL,i_23 = NULL,l_23 = NULL,t_23 = NULL,i_6 = NULL;
    t_23 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        b_23 = ATgetArgument(t, 0);
        i_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_23);
    y_22 = t;
    t = i_23;
    t = q_136(t);
    l_23 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, b_23, l_23);
    i_6 = t;
    t = SSLsetAnnotations(i_6, y_22);
    return(t);
  }
  j_22 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      e_22 = ATgetArgument(t, 0);
      f_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_22);
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, e_22, f_22);
  d_6 = t;
  t = SSLsetAnnotations(d_6, d_22);
  t = abstract_choice_2_0(j_4, l_4, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm s_136 (ATerm), ATerm t_136 (ATerm), ATerm t)
{
  ATerm w_23 = NULL,f_24 = NULL,i_24 = NULL,r_24 = NULL,u_24 = NULL,a_25 = NULL;
  u_24 = t;
  t = save_MarkVar_0_0(t);
  w_23 = t;
  t = u_24;
  t = s_136(t);
  r_24 = t;
  t = save_MarkVar_0_0(t);
  f_24 = t;
  t = term_e_33;
  t = table_destroy_0_0(t);
  t = term_e_33;
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_33, w_23);
  t = i_10(a_25, w_23, t);
  t = r_24;
  t = t_136(t);
  i_24 = t;
  t = f_24;
  t = isect_MarkVar_0_0(t);
  t = i_24;
  return(t);
}
ATerm mark_choice_1_0 (ATerm p_136 (ATerm), ATerm t)
{
  ATerm d_25 = NULL,m_25 = NULL,p_25 = NULL,r_25 = NULL,n_6 = NULL;
  static ATerm m_4 (ATerm t)
  {
    ATerm x_25 = NULL,c_26 = NULL,d_26 = NULL,i_26 = NULL,o_26 = NULL,o_6 = NULL;
    o_26 = t;
    if(match_cons(t, sym_Choice_2))
      {
        c_26 = ATgetArgument(t, 0);
        d_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_26);
    x_25 = t;
    t = c_26;
    t = p_136(t);
    i_26 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, i_26, d_26);
    o_6 = t;
    t = SSLsetAnnotations(o_6, x_25);
    return(t);
  }
  static ATerm n_4 (ATerm t)
  {
    ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,p_6 = NULL;
    t_26 = t;
    if(match_cons(t, sym_Choice_2))
      {
        q_26 = ATgetArgument(t, 0);
        r_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_26);
    p_26 = t;
    t = r_26;
    t = p_136(t);
    s_26 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, q_26, s_26);
    p_6 = t;
    t = SSLsetAnnotations(p_6, p_26);
    return(t);
  }
  r_25 = t;
  if(match_cons(t, sym_Choice_2))
    {
      m_25 = ATgetArgument(t, 0);
      p_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_25);
  d_25 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, m_25, p_25);
  n_6 = t;
  t = SSLsetAnnotations(n_6, d_25);
  t = abstract_choice_2_0(m_4, n_4, t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,c_27 = NULL,g_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,m_27 = NULL,n_27 = NULL,b_7 = NULL,a_7 = NULL;
  v_26 = t;
  t = save_MarkVar_0_0(t);
  u_26 = t;
  t = v_26;
  if(match_cons(t, sym_Rec_2))
    {
      k_27 = ATgetArgument(t, 0);
      m_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_26);
  j_27 = t;
  t = m_27;
  t = mark_buv_0_0(t);
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, k_27, n_27);
  a_7 = t;
  t = SSLsetAnnotations(a_7, j_27);
  t = u_26;
  t = isect_MarkVar_0_0(t);
  t = v_26;
  if(match_cons(t, sym_Rec_2))
    {
      c_27 = ATgetArgument(t, 0);
      g_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_26);
  w_26 = t;
  t = g_27;
  t = mark_buv_0_0(t);
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, c_27, i_27);
  b_7 = t;
  t = SSLsetAnnotations(b_7, w_26);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm s_27 = NULL,u_27 = NULL,v_27 = NULL,a_28 = NULL,b_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,n_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,x_28 = NULL,y_28 = NULL,g_7 = NULL,f_7 = NULL,e_7 = NULL;
  y_28 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      q_28 = ATgetArgument(t, 0);
      r_28 = ATgetArgument(t, 1);
      s_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_28);
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, q_28, r_28, s_28);
  e_7 = t;
  t = SSLsetAnnotations(e_7, p_28);
  x_28 = t;
  t = save_MarkVar_0_0(t);
  s_27 = t;
  t = x_28;
  if(match_cons(t, sym_PrimT_3))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
      i_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_28);
  f_28 = t;
  t = i_28;
  t = map_1_0(o_4, t);
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, g_28, h_28, j_28);
  f_7 = t;
  t = SSLsetAnnotations(f_7, f_28);
  n_28 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      v_27 = ATgetArgument(t, 0);
      a_28 = ATgetArgument(t, 1);
      b_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_28);
  u_27 = t;
  t = a_28;
  t = mark_buv_0_0(t);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, v_27, d_28, b_28);
  g_7 = t;
  t = SSLsetAnnotations(g_7, u_27);
  e_28 = t;
  t = s_27;
  t = isect_MarkVar_0_0(t);
  t = e_28;
  return(t);
}
ATerm alltd_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  static ATerm z_28 (ATerm t)
  {
    ATerm f_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_107(t);
        LocalPopChoice(k_33);
      }
    else
      {
        t = f_33;
        t = SRTS_all(z_28, t);
      }
    return(t);
  }
  t = z_28(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm r_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL;
  v_32 = t;
  if(match_cons(t, sym_CallT_3))
    {
      w_32 = ATgetArgument(t, 0);
      x_32 = ATgetArgument(t, 1);
      r_32 = ATgetArgument(t, 2);
      {
        ATerm h_13 = NULL,i_13 = NULL,l_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,s_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,d_14 = NULL,j_14 = NULL,k_14 = NULL,r_14 = NULL,m_7 = NULL,l_7 = NULL,k_7 = NULL;
        t = SSLgetAnnotations(v_32);
        k_14 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, w_32, x_32, r_32);
        k_7 = t;
        t = SSLsetAnnotations(k_7, k_14);
        r_14 = t;
        t = save_MarkVar_0_0(t);
        h_13 = t;
        t = r_14;
        if(match_cons(t, sym_CallT_3))
          {
            w_13 = ATgetArgument(t, 0);
            x_13 = ATgetArgument(t, 1);
            y_13 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_14);
        s_13 = t;
        t = y_13;
        t = map_1_0(p_4, t);
        d_14 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, w_13, x_13, d_14);
        l_7 = t;
        t = SSLsetAnnotations(l_7, s_13);
        j_14 = t;
        if(match_cons(t, sym_CallT_3))
          {
            l_13 = ATgetArgument(t, 0);
            n_13 = ATgetArgument(t, 1);
            o_13 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_14);
        i_13 = t;
        t = n_13;
        t = mark_buv_0_0(t);
        p_13 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, l_13, p_13, o_13);
        m_7 = t;
        t = SSLsetAnnotations(m_7, i_13);
        q_13 = t;
        t = h_13;
        t = isect_MarkVar_0_0(t);
        t = q_13;
      }
    }
  else
    {
      ATerm u_15 = NULL,w_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,g_16 = NULL,k_16 = NULL,s_7 = NULL,o_7 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          w_32 = ATgetArgument(t, 0);
          x_32 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_32);
      g_16 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, w_32, x_32);
      o_7 = t;
      t = SSLsetAnnotations(o_7, g_16);
      k_16 = t;
      t = save_MarkVar_0_0(t);
      u_15 = t;
      t = k_16;
      if(match_cons(t, sym_Call_2))
        {
          y_15 = ATgetArgument(t, 0);
          z_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_16);
      w_15 = t;
      t = z_15;
      t = mark_buv_0_0(t);
      a_16 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, y_15, a_16);
      s_7 = t;
      t = SSLsetAnnotations(s_7, w_15);
      b_16 = t;
      t = u_15;
      t = isect_MarkVar_0_0(t);
      t = b_16;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_e_33;
  return(t);
}
static ATerm d_10 (ATerm g_79, ATerm h_79, ATerm i_79, ATerm t)
{
  ATerm g_33 = NULL;
  static ATerm s_4 (ATerm t)
  {
    t = h_79;
    t = map_1_0(IntroduceBound_0_0, t);
    t = i_79;
    t = mark_build_vars_0_0(t);
    if(((g_33 != NULL) && (g_33 != t)))
      _fail(t);
    else
      g_33 = t;
    return(t);
  }
  t = scope_2_0(q_4, s_4, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, g_79, h_79, not_null(g_33));
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_e_33;
  return(t);
}
static ATerm e_10 (ATerm a_79, ATerm e_79, ATerm c_79, ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  static ATerm v_4 (ATerm t)
  {
    t = a_79;
    t = mark_match_vars_0_0(t);
    if(((h_33 != NULL) && (h_33 != t)))
      _fail(t);
    else
      h_33 = t;
    t = c_79;
    t = mark_buv_0_0(t);
    if(((i_33 != NULL) && (i_33 != t)))
      _fail(t);
    else
      i_33 = t;
    t = e_79;
    t = mark_build_vars_0_0(t);
    if(((j_33 != NULL) && (j_33 != t)))
      _fail(t);
    else
      j_33 = t;
    return(t);
  }
  t = scope_2_0(u_4, v_4, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_33), not_null(j_33), not_null(i_33)));
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_e_33;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm w_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_33);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm l_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_33);
    }
  else
    {
      t = l_33;
      {
        ATerm o_33 = t;
        int p_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_33);
          }
        else
          {
            t = o_33;
            {
              ATerm t_33 = t;
              int x_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_33 = NULL,z_33 = NULL,e_34 = NULL,l_34 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_33 = ATgetArgument(t, 0);
                      z_33 = ATgetArgument(t, 1);
                      e_34 = ATgetArgument(t, 2);
                      l_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_34;
                  t = map_1_0(j_5, t);
                  LocalPopChoice(x_33);
                }
              else
                {
                  t = t_33;
                  {
                    ATerm b_34 = t;
                    int d_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_34);
                      }
                    else
                      {
                        t = b_34;
                        t = dynrule_targs_1_0(k_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm j_35 = NULL;
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_35 = ATgetArgument(t, 0);
          {
            ATerm j_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_34);
      t = j_35;
    }
  else
    {
      t = f_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_35;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = map_1_0(l_5, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm t_35 = NULL;
  ATerm k_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_35 = ATgetArgument(t, 0);
          {
            ATerm n_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_34);
      t = t_35;
    }
  else
    {
      t = k_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_35;
    }
  return(t);
}
static ATerm f_10 (ATerm u_78, ATerm y_78, ATerm w_78, ATerm t)
{
  ATerm n_33 = NULL,u_33 = NULL,v_33 = NULL;
  static ATerm e_5 (ATerm t)
  {
    t = u_78;
    t = free_vars_3_0(h_5, i_5, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = u_78;
    t = mark_match_vars_0_0(t);
    if(((n_33 != NULL) && (n_33 != t)))
      _fail(t);
    else
      n_33 = t;
    t = w_78;
    t = mark_buv_0_0(t);
    if(((u_33 != NULL) && (u_33 != t)))
      _fail(t);
    else
      u_33 = t;
    t = y_78;
    t = mark_build_vars_0_0(t);
    if(((v_33 != NULL) && (v_33 != t)))
      _fail(t);
    else
      v_33 = t;
    return(t);
  }
  t = scope_2_0(w_4, e_5, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_33), not_null(v_33), not_null(u_33)));
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm n_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_38);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
      {
        ATerm q_34 = t;
        int s_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_34);
          }
        else
          {
            t = q_34;
            {
              ATerm t_34 = t;
              int v_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_38 = ATgetArgument(t, 0);
                      q_38 = ATgetArgument(t, 1);
                      r_38 = ATgetArgument(t, 2);
                      s_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_38;
                  t = map_1_0(o_5, t);
                  LocalPopChoice(v_34);
                }
              else
                {
                  t = t_34;
                  {
                    ATerm w_34 = t;
                    int x_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_34);
                      }
                    else
                      {
                        t = w_34;
                        t = dynrule_targs_1_0(u_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm i_39 = NULL;
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_39 = ATgetArgument(t, 0);
          {
            ATerm a_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_34);
      t = i_39;
    }
  else
    {
      t = y_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_39;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = map_1_0(v_5, t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm n_39 = NULL;
  ATerm d_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_39 = ATgetArgument(t, 0);
          {
            ATerm f_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_35);
      t = n_39;
    }
  else
    {
      t = d_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_39;
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_e_33;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm s_40 = NULL;
  ATerm h_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_40 = ATgetArgument(t, 0);
          {
            ATerm m_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_35);
      t = s_40;
    }
  else
    {
      t = h_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_40;
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm f_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_41);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm n_35 = t;
  int r_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_35);
    }
  else
    {
      t = n_35;
      {
        ATerm s_35 = t;
        int u_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_35);
          }
        else
          {
            t = s_35;
            {
              ATerm v_35 = t;
              int w_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_41 = ATgetArgument(t, 0);
                      i_41 = ATgetArgument(t, 1);
                      j_41 = ATgetArgument(t, 2);
                      k_41 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_41;
                  t = map_1_0(f_6, t);
                  LocalPopChoice(w_35);
                }
              else
                {
                  t = v_35;
                  {
                    ATerm b_36 = t;
                    int c_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(c_36);
                      }
                    else
                      {
                        t = b_36;
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
static ATerm f_6 (ATerm t)
{
  ATerm u_41 = NULL;
  ATerm e_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_41 = ATgetArgument(t, 0);
          {
            ATerm h_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_36);
      t = u_41;
    }
  else
    {
      t = e_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_41;
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
  ATerm i_42 = NULL;
  ATerm i_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_42 = ATgetArgument(t, 0);
          {
            ATerm k_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_36);
      t = i_42;
    }
  else
    {
      t = i_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_42;
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_e_33;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,b_37 = NULL,c_37 = NULL,s_37 = NULL,t_37 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      v_36 = ATgetArgument(t, 0);
      w_36 = ATgetArgument(t, 1);
      x_36 = ATgetArgument(t, 2);
      {
        ATerm x_37 = NULL,b_38 = NULL,d_38 = NULL,i_38 = NULL;
        t = x_36;
        if(match_cons(t, sym_Rule_3))
          {
            p_36 = ATgetArgument(t, 0);
            q_36 = ATgetArgument(t, 1);
            r_36 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = x_36;
        t = free_vars_3_0(m_5, n_5, tboundin_3_0, t);
        x_37 = t;
        {
          static ATerm z_5 (ATerm t)
          {
            t = x_37;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = p_36;
            t = mark_match_vars_0_0(t);
            if(((b_38 != NULL) && (b_38 != t)))
              _fail(t);
            else
              b_38 = t;
            t = r_36;
            t = mark_buv_0_0(t);
            if(((d_38 != NULL) && (d_38 != t)))
              _fail(t);
            else
              d_38 = t;
            t = q_36;
            t = mark_build_vars_0_0(t);
            if(((i_38 != NULL) && (i_38 != t)))
              _fail(t);
            else
              i_38 = t;
            return(t);
          }
          t = scope_2_0(y_5, z_5, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, v_36, w_36, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_38), not_null(i_38), not_null(d_38)));
      }
    }
  else
    {
      ATerm d_40 = NULL,e_40 = NULL,g_40 = NULL,i_40 = NULL,m_40 = NULL,n_40 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          v_36 = ATgetArgument(t, 0);
          w_36 = ATgetArgument(t, 1);
          x_36 = ATgetArgument(t, 2);
          b_37 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = b_37;
      if(match_cons(t, sym_Rule_3))
        {
          c_37 = ATgetArgument(t, 0);
          s_37 = ATgetArgument(t, 1);
          t_37 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_36;
      t = map_1_0(a_6, t);
      d_40 = t;
      t = b_37;
      t = free_vars_3_0(b_6, c_6, tboundin_3_0, t);
      n_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_40, d_40);
      t = diff_0_0(t);
      e_40 = t;
      {
        static ATerm r_6 (ATerm t)
        {
          t = d_40;
          t = map_1_0(IntroduceBound_0_0, t);
          t = e_40;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = c_37;
          t = mark_match_vars_0_0(t);
          if(((g_40 != NULL) && (g_40 != t)))
            _fail(t);
          else
            g_40 = t;
          t = t_37;
          t = mark_buv_0_0(t);
          if(((i_40 != NULL) && (i_40 != t)))
            _fail(t);
          else
            i_40 = t;
          t = s_37;
          t = mark_build_vars_0_0(t);
          if(((m_40 != NULL) && (m_40 != t)))
            _fail(t);
          else
            m_40 = t;
          return(t);
        }
        t = scope_2_0(l_6, r_6, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, v_36, w_36, x_36, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_40), not_null(m_40), not_null(i_40)));
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_e_33;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
  n_42 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_42);
  o_42 = t;
  t = term_o_36;
  p_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, n_42), term_o_36);
  t = o_10(s_6, o_42, p_42, t);
  t = n_42;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm d_43 = NULL;
  ATerm u_36 = t;
  int y_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_43 = ATgetArgument(t, 0);
          {
            ATerm z_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_36);
      t = d_43;
    }
  else
    {
      t = u_36;
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
static ATerm v_6 (ATerm t)
{
  t = term_e_33;
  return(t);
}
static ATerm g_10 (ATerm s_77, ATerm t_77, ATerm u_77, ATerm w_77, ATerm t)
{
  ATerm r_42 = NULL,u_42 = NULL;
  t = u_77;
  t = map_1_0(t_6, t);
  r_42 = t;
  {
    static ATerm x_6 (ATerm t)
    {
      t = r_42;
      t = map_1_0(IntroduceBound_0_0, t);
      t = w_77;
      t = mark_buv_0_0(t);
      if(((u_42 != NULL) && (u_42 != t)))
        _fail(t);
      else
        u_42 = t;
      return(t);
    }
    t = scope_2_0(v_6, x_6, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, s_77, t_77, u_77, not_null(u_42));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,v_44 = NULL;
  j_44 = t;
  if(match_cons(t, sym__2))
    {
      k_44 = ATgetArgument(t, 0);
      t_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_44;
  if(match_cons(t, sym_Undefined_0))
    {
      t = k_44;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_a_37;
        }
      else
        {
          t = term_a_37;
        }
    }
  else
    {
      ATerm d_37 = t;
      int e_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm f_37 = ATgetArgument(t, 0);
              v_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(e_37);
          t = k_44;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_a_37;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  r_44 = ATgetArgument(t, 0);
                  s_44 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm r_37 = t;
                int u_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, s_44, v_44);
                    {
                      ATerm v_37 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm b_17 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              b_17 = ATgetArgument(t, 0);
                              if((b_17 != ATgetArgument(t, 1)))
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
                          t = v_37;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, r_44, term_w_37);
                    LocalPopChoice(u_37);
                  }
                else
                  {
                    t = r_37;
                    t = v_44;
                    if((s_44 != t))
                      {
                        _fail(t);
                      }
                    t = k_44;
                  }
              }
            }
        }
      else
        {
          t = d_37;
          t = k_44;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_a_37;
        }
    }
  return(t);
}
static ATerm h_10 (ATerm d_76, ATerm e_76, ATerm c_76, ATerm t)
{
  ATerm e_45 = NULL,h_45 = NULL,r_45 = NULL;
  t = term_e_33;
  r_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_33, d_76);
  t = p_11(r_45, d_76, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_45 = ATgetFirst((ATermList) t);
      {
        ATerm y_37 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_76, e_45);
  t = CompareEntries_0_0(t);
  h_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_76, (ATerm) ATinsert(CheckATermList(c_76), h_45));
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm h_46 = NULL,j_46 = NULL,k_46 = NULL,n_46 = NULL,o_46 = NULL;
  o_46 = t;
  if(match_cons(t, sym__2))
    {
      h_46 = ATgetArgument(t, 0);
      j_46 = ATgetArgument(t, 1);
      t = j_46;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_46 = ATgetFirst((ATermList) t);
          n_46 = (ATerm) ATgetNext((ATermList) t);
          t = k_46;
          {
            ATerm z_37 = t;
            int a_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm c_38 = ATgetArgument(t, 0);
                    ATerm e_38 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(a_38);
                t = h_46;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = o_46;
                  }
                else
                  {
                    ATerm f_38 = t;
                    int g_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = o_46;
                        t = h_10(h_46, k_46, n_46, t);
                        LocalPopChoice(g_38);
                      }
                    else
                      {
                        t = f_38;
                        t = o_46;
                      }
                  }
              }
            else
              {
                t = z_37;
                t = h_46;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = o_46;
                  }
                else
                  {
                    t = o_46;
                  }
              }
          }
        }
      else
        {
          t = h_46;
          if(match_cons(t, sym_Scopes_0))
            {
              t = o_46;
            }
          else
            {
              t = o_46;
            }
        }
    }
  else
    {
      t = o_46;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm e_46 = NULL,g_46 = NULL;
  t = map_1_0(z_6, t);
  e_46 = t;
  t = term_e_33;
  t = table_destroy_0_0(t);
  t = term_e_33;
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_33, e_46);
  t = i_10(g_46, e_46, t);
  t = e_46;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,w_47 = NULL;
  w_47 = t;
  {
    ATerm h_38 = t;
    int l_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm m_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_38);
        t = w_47;
      }
    else
      {
        t = h_38;
        {
          ATerm o_38 = t;
          int t_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm u_38 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(t_38);
              t = w_47;
            }
          else
            {
              t = o_38;
              {
                ATerm v_38 = t;
                int w_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm x_38 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_38);
                    t = w_47;
                  }
                else
                  {
                    t = v_38;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm y_38 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = w_47;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  o_47 = t;
  t = w_47;
  t = SRTS_one(mark_buv_0_0, t);
  p_47 = t;
  t = o_47;
  t = isect_MarkVar_0_0(t);
  t = p_47;
  return(t);
}
static ATerm i_10 (ATerm r_33, ATerm q_33, ATerm t)
{
  static ATerm c_7 (ATerm t)
  {
    ATerm y_47 = NULL,b_48 = NULL,d_48 = NULL;
    if(match_cons(t, sym__2))
      {
        y_47 = ATgetArgument(t, 0);
        b_48 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, r_33, y_47, b_48);
    t = lookup_table_0_1(r_33, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        d_48 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = t_11(y_47, b_48, d_48, t);
    t = (ATerm) ATmakeAppl(sym__3, r_33, y_47, b_48);
    return(t);
  }
  t = q_33;
  t = map_1_0(c_7, t);
  return(t);
}
static ATerm j_10 (ATerm n_37, ATerm t)
{
  t = SSL_hashtable_keys(n_37);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL;
  static ATerm d_7 (ATerm t)
  {
    ATerm l_48 = NULL,m_48 = NULL;
    l_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_48), l_48);
    t = p_11(not_null(f_48), l_48, t);
    m_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
    return(t);
  }
  if(((f_48 != NULL) && (f_48 != t)))
    _fail(t);
  else
    f_48 = t;
  t = lookup_table_0_1(f_48, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_10(g_48, t);
  t = map_1_0(d_7, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_e_33;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm q_76, ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm h_7 (ATerm t)
    {
      static ATerm u_49 (ATerm z_48, ATerm t)
      {
        ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,f_49 = NULL;
        t = z_48;
        if(match_cons(t, sym__2))
          {
            ATerm a_39 = ATgetArgument(t, 0);
            a_49 = a_39;
            if(match_cons(a_39, sym_Var_1))
              {
                b_49 = ATgetArgument(a_39, 0);
              }
            else
              _fail(t);
            {
              ATerm b_39 = ATgetArgument(t, 1);
              if(((ATgetType(b_39) == AT_LIST) && !(ATisEmpty(b_39))))
                {
                  ATerm c_39 = ATgetFirst((ATermList) b_39);
                  if(match_cons(c_39, sym_Defined_2))
                    {
                      c_49 = ATgetArgument(c_39, 0);
                      {
                        ATerm d_39 = ATgetArgument(c_39, 1);
                        if((ATgetSymbol((ATermAppl) d_39) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  f_49 = (ATerm) ATgetNext((ATermList) b_39);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_76;
        {
          static ATerm i_7 (ATerm t)
          {
            if((b_49 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(i_7, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, a_49, (ATerm) ATinsert(CheckATermList(f_49), (ATerm) ATmakeAppl(sym_Defined_2, c_49, term_w_37)));
        return(t);
      }
      ATerm h_49 = NULL,o_49 = NULL;
      o_49 = t;
      {
        ATerm f_39 = t;
        int g_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                h_49 = ATgetArgument(t, 0);
                {
                  ATerm h_39 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(g_39);
            t = h_49;
            if(match_cons(t, sym_Scopes_0))
              {
                t = o_49;
              }
            else
              {
                ATerm j_39 = t;
                int k_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = u_49(o_49, t);
                    LocalPopChoice(k_39);
                  }
                else
                  {
                    t = j_39;
                    t = o_49;
                  }
              }
          }
        else
          {
            t = f_39;
            {
              ATerm l_39 = t;
              int m_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_49(o_49, t);
                  LocalPopChoice(m_39);
                }
              else
                {
                  t = l_39;
                  t = o_49;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(h_7, t);
  }
  x_48 = t;
  t = term_e_33;
  t = table_destroy_0_0(t);
  t = term_e_33;
  y_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_33, x_48);
  t = i_10(y_48, x_48, t);
  t = x_48;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm m_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_51);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm o_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_39);
    }
  else
    {
      t = o_39;
      {
        ATerm r_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_39);
          }
        else
          {
            t = r_39;
            {
              ATerm t_39 = t;
              int v_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_51 = NULL,w_51 = NULL,x_51 = NULL,a_52 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_51 = ATgetArgument(t, 0);
                      w_51 = ATgetArgument(t, 1);
                      x_51 = ATgetArgument(t, 2);
                      a_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_51;
                  t = map_1_0(y_7, t);
                  LocalPopChoice(v_39);
                }
              else
                {
                  t = t_39;
                  {
                    ATerm x_39 = t;
                    int y_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(y_39);
                      }
                    else
                      {
                        t = x_39;
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
  ATerm m_52 = NULL;
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_52 = ATgetArgument(t, 0);
          {
            ATerm f_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_40);
      t = m_52;
    }
  else
    {
      t = b_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_52;
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
  ATerm v_52 = NULL;
  ATerm h_40 = t;
  int j_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_52 = ATgetArgument(t, 0);
          {
            ATerm k_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_40);
      t = v_52;
    }
  else
    {
      t = h_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_52;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL,l_50 = NULL,m_50 = NULL,o_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,x_50 = NULL,j_51 = NULL,k_51 = NULL,o_9 = NULL,x_8 = NULL;
  k_51 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_50 = ATgetArgument(t, 0);
      x_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_51);
  t_50 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, u_50, x_50);
  x_8 = t;
  t = SSLsetAnnotations(x_8, t_50);
  j_51 = t;
  if(match_cons(t, sym_Let_2))
    {
      j_50 = ATgetArgument(t, 0);
      {
        ATerm l_40 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = j_50;
  t = free_vars_3_0(j_7, u_7, tboundin_3_0, t);
  h_50 = t;
  t = undefine_unbound_MarkVar_0_1(h_50, t);
  i_50 = t;
  t = j_51;
  if(match_cons(t, sym_Let_2))
    {
      m_50 = ATgetArgument(t, 0);
      o_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_51);
  l_50 = t;
  t = m_50;
  {
    static ATerm b_8 (ATerm t)
    {
      ATerm a_53 = NULL,b_53 = NULL;
      a_53 = t;
      t = term_e_33;
      t = table_destroy_0_0(t);
      t = term_e_33;
      b_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_e_33, i_50);
      t = i_10(b_53, i_50, t);
      t = a_53;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(b_8, t);
  }
  q_50 = t;
  t = term_e_33;
  t = table_destroy_0_0(t);
  t = term_e_33;
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_33, i_50);
  t = i_10(s_50, i_50, t);
  t = o_50;
  t = mark_buv_0_0(t);
  r_50 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, q_50, r_50);
  o_9 = t;
  t = SSLsetAnnotations(o_9, l_50);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm o_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_53 = NULL,d_53 = NULL,h_53 = NULL,i_12 = NULL;
      h_53 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_53);
      c_53 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_53);
      i_12 = t;
      t = SSLsetAnnotations(i_12, c_53);
      LocalPopChoice(p_40);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = o_40;
      {
        ATerm q_40 = t;
        int r_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_53 = NULL,n_53 = NULL,q_53 = NULL,r_53 = NULL,q_12 = NULL;
            r_53 = t;
            if(match_cons(t, sym_App_2))
              {
                n_53 = ATgetArgument(t, 0);
                q_53 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_53);
            j_53 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, n_53, q_53);
            q_12 = t;
            t = SSLsetAnnotations(q_12, j_53);
            LocalPopChoice(r_40);
            {
              ATerm u_53 = NULL,w_53 = NULL,z_53 = NULL,b_54 = NULL,f_54 = NULL,j_54 = NULL,k_17 = NULL;
              j_54 = t;
              if(match_cons(t, sym_App_2))
                {
                  w_53 = ATgetArgument(t, 0);
                  z_53 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_54);
              u_53 = t;
              t = w_53;
              t = mark_buv_0_0(t);
              b_54 = t;
              t = z_53;
              t = mark_build_vars_0_0(t);
              f_54 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, b_54, f_54);
              k_17 = t;
              t = SSLsetAnnotations(k_17, u_53);
            }
          }
        else
          {
            t = q_40;
            {
              ATerm t_40 = t;
              int u_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_54 = NULL,p_54 = NULL,q_54 = NULL,l_17 = NULL;
                  q_54 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      p_54 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_54);
                  n_54 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, p_54);
                  l_17 = t;
                  t = SSLsetAnnotations(l_17, n_54);
                  LocalPopChoice(u_40);
                  {
                    ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,m_17 = NULL;
                    u_54 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        s_54 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(u_54);
                    r_54 = t;
                    t = s_54;
                    t = mark_buv_0_0(t);
                    t_54 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, t_54);
                    m_17 = t;
                    t = SSLsetAnnotations(m_17, r_54);
                  }
                }
              else
                {
                  t = t_40;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_10 (ATerm b_33, ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL,b_55 = NULL,c_55 = NULL;
  y_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
  t = p_11(b_33, c_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_40 = ATgetFirst((ATermList) t);
      x_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_33, c_33, (ATerm) ATinsert(CheckATermList(x_54), d_33));
  t = lookup_table_0_1(b_33, t);
  c_55 = t;
  t = (ATerm) ATinsert(CheckATermList(x_54), d_33);
  z_54 = t;
  t = c_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(c_33, z_54, b_55, t);
  t = y_54;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL,k_55 = NULL;
  f_55 = t;
  t = term_e_33;
  g_55 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_55);
  h_55 = t;
  t = term_x_40;
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_33, (ATerm)ATmakeAppl(sym_Var_1, f_55), term_x_40);
  t = k_10(g_55, h_55, k_55, t);
  t = f_55;
  return(t);
}
static ATerm n_10 (ATerm z_32, ATerm a_33, ATerm t)
{
  ATerm l_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_32, a_33);
  t = p_11(z_32, a_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_55 = ATgetFirst((ATermList) t);
      {
        ATerm z_40 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_55;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL;
  c_58 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_41 = t;
    int b_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,u_18 = NULL;
        t = term_e_33;
        u_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_33, c_58);
        t = n_10(u_18, c_58, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm c_41 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_41) != ATmakeSymbol("q_1", 0, ATtrue)))
              _fail(t);
            g_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, d_58);
        h_18 = t;
        t = (ATerm) ATinsert(ATempty, g_18);
        i_18 = t;
        t = SSLsetAnnotations(h_18, i_18);
        LocalPopChoice(b_41);
      }
    else
      {
        t = a_41;
        {
          ATerm d_41 = t;
          int e_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,t_19 = NULL;
              t = term_e_33;
              t_19 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_e_33, c_58);
              t = n_10(t_19, c_58, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm g_41 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) g_41) != ATmakeSymbol("o_1", 0, ATtrue)))
                    _fail(t);
                  c_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, d_58);
              d_19 = t;
              t = (ATerm) ATinsert(ATempty, c_19);
              e_19 = t;
              t = SSLsetAnnotations(d_19, e_19);
              LocalPopChoice(e_41);
            }
          else
            {
              t = d_41;
              {
                ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,u_20 = NULL;
                t = term_e_33;
                u_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_33, c_58);
                t = n_10(u_20, c_58, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm l_41 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) l_41) != ATmakeSymbol("m_1", 0, ATtrue)))
                      _fail(t);
                    l_20 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, d_58);
                m_20 = t;
                t = (ATerm) ATinsert(ATempty, l_20);
                n_20 = t;
                t = SSLsetAnnotations(m_20, n_20);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,y_17 = NULL;
  ATerm m_41 = t;
  int n_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(n_41);
    }
  else
    {
      t = m_41;
    }
  s_58 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_58);
  p_58 = t;
  t = q_58;
  t = DeclareBound_0_0(t);
  r_58 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_58);
  y_17 = t;
  t = SSLsetAnnotations(y_17, p_58);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm o_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_59 = NULL,h_59 = NULL,i_59 = NULL,w_19 = NULL;
      i_59 = t;
      if(match_cons(t, sym_Var_1))
        {
          h_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_59);
      e_59 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, h_59);
      w_19 = t;
      t = SSLsetAnnotations(w_19, e_59);
      LocalPopChoice(p_41);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = o_41;
      {
        ATerm q_41 = t;
        int r_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,g_21 = NULL;
            m_59 = t;
            if(match_cons(t, sym_App_2))
              {
                k_59 = ATgetArgument(t, 0);
                l_59 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_59);
            j_59 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, k_59, l_59);
            g_21 = t;
            t = SSLsetAnnotations(g_21, j_59);
            LocalPopChoice(r_41);
            {
              ATerm n_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,w_59 = NULL,e_29 = NULL;
              w_59 = t;
              if(match_cons(t, sym_App_2))
                {
                  r_59 = ATgetArgument(t, 0);
                  s_59 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_59);
              n_59 = t;
              t = r_59;
              t = mark_buv_0_0(t);
              t_59 = t;
              t = s_59;
              t = mark_build_vars_0_0(t);
              u_59 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, t_59, u_59);
              e_29 = t;
              t = SSLsetAnnotations(e_29, n_59);
            }
          }
        else
          {
            t = q_41;
            {
              ATerm t_41 = t;
              int v_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_59 = NULL,a_60 = NULL,b_60 = NULL,f_29 = NULL;
                  b_60 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      a_60 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_60);
                  x_59 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, a_60);
                  f_29 = t;
                  t = SSLsetAnnotations(f_29, x_59);
                  LocalPopChoice(v_41);
                  {
                    ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_29 = NULL;
                    f_60 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        d_60 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(f_60);
                    c_60 = t;
                    t = d_60;
                    t = mark_buv_0_0(t);
                    e_60 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, e_60);
                    g_29 = t;
                    t = SSLsetAnnotations(g_29, c_60);
                  }
                }
              else
                {
                  t = t_41;
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
  ATerm w_41 = t;
  int x_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_61 = NULL,k_61 = NULL;
      j_61 = t;
      if(match_cons(t, sym_Match_1))
        {
          k_61 = ATgetArgument(t, 0);
          {
            ATerm j_21 = NULL,l_21 = NULL,u_29 = NULL;
            t = SSLgetAnnotations(j_61);
            j_21 = t;
            t = k_61;
            t = mark_match_vars_0_0(t);
            l_21 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, l_21);
            u_29 = t;
            t = SSLsetAnnotations(u_29, j_21);
          }
        }
      else
        {
          ATerm t_21 = NULL,w_21 = NULL,v_29 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              k_61 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_61);
          t_21 = t;
          t = k_61;
          t = mark_build_vars_0_0(t);
          w_21 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, w_21);
          v_29 = t;
          t = SSLsetAnnotations(v_29, t_21);
        }
      LocalPopChoice(x_41);
    }
  else
    {
      t = w_41;
      {
        ATerm y_41 = t;
        int z_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(z_41);
          }
        else
          {
            t = y_41;
            {
              ATerm b_42 = t;
              int c_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(c_42);
                }
              else
                {
                  t = b_42;
                  {
                    ATerm d_42 = t;
                    int e_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(e_42);
                      }
                    else
                      {
                        t = d_42;
                        {
                          ATerm f_42 = t;
                          int g_42 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_61 = NULL,m_61 = NULL,p_61 = NULL,q_61 = NULL,t_61 = NULL;
                              l_61 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  m_61 = ATgetArgument(t, 0);
                                  p_61 = ATgetArgument(t, 1);
                                  q_61 = ATgetArgument(t, 2);
                                  t_61 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = l_61;
                              t = g_10(m_61, p_61, q_61, t_61, t);
                              LocalPopChoice(g_42);
                            }
                          else
                            {
                              t = f_42;
                              {
                                ATerm j_42 = t;
                                int k_42 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(k_42);
                                  }
                                else
                                  {
                                    t = j_42;
                                    {
                                      ATerm l_42 = t;
                                      int m_42 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm d_62 = NULL,e_62 = NULL,j_62 = NULL,p_62 = NULL,q_62 = NULL,v_62 = NULL,w_62 = NULL;
                                          p_62 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              q_62 = ATgetArgument(t, 0);
                                              t = q_62;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  d_62 = ATgetArgument(t, 0);
                                                  e_62 = ATgetArgument(t, 1);
                                                  j_62 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = p_62;
                                              t = f_10(d_62, e_62, j_62, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  q_62 = ATgetArgument(t, 0);
                                                  t = q_62;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      d_62 = ATgetArgument(t, 0);
                                                      e_62 = ATgetArgument(t, 1);
                                                      j_62 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = p_62;
                                                  t = e_10(d_62, e_62, j_62, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      q_62 = ATgetArgument(t, 0);
                                                      v_62 = ATgetArgument(t, 1);
                                                      w_62 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = p_62;
                                                  t = d_10(q_62, v_62, w_62, t);
                                                }
                                            }
                                          LocalPopChoice(m_42);
                                        }
                                      else
                                        {
                                          t = l_42;
                                          {
                                            ATerm v_42 = t;
                                            int w_42 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(w_42);
                                              }
                                            else
                                              {
                                                t = v_42;
                                                {
                                                  ATerm y_42 = t;
                                                  int z_42 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(z_42);
                                                    }
                                                  else
                                                    {
                                                      t = y_42;
                                                      {
                                                        ATerm a_43 = t;
                                                        int b_43 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm r_63 = NULL;
                                                            r_63 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm c_43 = ATgetArgument(t, 0);
                                                                ATerm e_43 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = r_63;
                                                            t = c_10(t);
                                                            LocalPopChoice(b_43);
                                                          }
                                                        else
                                                          {
                                                            t = a_43;
                                                            {
                                                              ATerm f_43 = t;
                                                              int g_43 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(g_43);
                                                                }
                                                              else
                                                                {
                                                                  t = f_43;
                                                                  {
                                                                    ATerm h_43 = t;
                                                                    int j_43 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(j_43);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_43;
                                                                        {
                                                                          ATerm k_43 = t;
                                                                          int m_43 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(m_43);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_43;
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
static ATerm o_10 (ATerm t_105 (ATerm), ATerm k_31, ATerm i_31, ATerm t)
{
  ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,l_64 = NULL,n_64 = NULL;
  g_64 = t;
  t = t_105(t);
  d_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_64, k_31, i_31);
  t = q_11(d_64, k_31, i_31, t);
  {
    ATerm n_43 = t;
    int o_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_64 = NULL;
        t = term_r_43;
        o_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_64, term_r_43);
        t = p_11(d_64, o_64, t);
        LocalPopChoice(o_43);
      }
    else
      {
        t = n_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_64 = ATgetFirst((ATermList) t);
      f_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_64, term_r_43, (ATerm) ATinsert(CheckATermList(f_64), (ATerm) ATinsert(CheckATermList(e_64), k_31)));
  t = lookup_table_0_1(d_64, t);
  n_64 = t;
  t = term_r_43;
  h_64 = t;
  t = (ATerm) ATinsert(CheckATermList(f_64), (ATerm) ATinsert(CheckATermList(e_64), k_31));
  i_64 = t;
  t = n_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(h_64, i_64, l_64, t);
  t = g_64;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_e_33;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm p_64 = NULL,q_64 = NULL,u_64 = NULL;
  p_64 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_64);
  q_64 = t;
  t = term_u_43;
  u_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_64), term_u_43);
  t = o_10(h_8, q_64, u_64, t);
  t = p_64;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_e_33;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm v_64 = NULL,y_64 = NULL,b_65 = NULL,d_65 = NULL,f_65 = NULL,a_30 = NULL;
  f_65 = t;
  if(match_cons(t, sym_Scope_2))
    {
      y_64 = ATgetArgument(t, 0);
      b_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_65);
  v_64 = t;
  t = b_65;
  {
    static ATerm k_8 (ATerm t)
    {
      ATerm g_65 = NULL;
      g_65 = t;
      t = y_64;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = g_65;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(i_8, k_8, t);
  }
  d_65 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, y_64, d_65);
  a_30 = t;
  t = SSLsetAnnotations(a_30, v_64);
  return(t);
}
ATerm tboundin_3_0 (ATerm t_125 (ATerm), ATerm u_125 (ATerm), ATerm v_125 (ATerm), ATerm t)
{
  ATerm a_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
  f_80 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_80 = ATgetArgument(t, 0);
      e_80 = ATgetArgument(t, 1);
      {
        ATerm o_22 = NULL,u_22 = NULL,v_22 = NULL,e_30 = NULL;
        t = SSLgetAnnotations(f_80);
        o_22 = t;
        t = g_80;
        t = v_125(t);
        u_22 = t;
        t = e_80;
        t = t_125(t);
        v_22 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, u_22, v_22);
        e_30 = t;
        t = SSLsetAnnotations(e_30, o_22);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          g_80 = ATgetArgument(t, 0);
          {
            ATerm e_23 = NULL,g_23 = NULL,h_23 = NULL,j_23 = NULL,k_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,w_30 = NULL,j_30 = NULL;
            t = SSLgetAnnotations(f_80);
            e_23 = t;
            t = g_80;
            if(match_cons(t, sym_Rule_3))
              {
                h_23 = ATgetArgument(t, 0);
                j_23 = ATgetArgument(t, 1);
                k_23 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_80);
            g_23 = t;
            t = h_23;
            t = t_125(t);
            m_23 = t;
            t = j_23;
            t = t_125(t);
            n_23 = t;
            t = k_23;
            t = t_125(t);
            o_23 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, m_23, n_23, o_23);
            j_30 = t;
            t = SSLsetAnnotations(j_30, g_23);
            p_23 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, p_23);
            w_30 = t;
            t = SSLsetAnnotations(w_30, e_23);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              g_80 = ATgetArgument(t, 0);
              e_80 = ATgetArgument(t, 1);
              a_80 = ATgetArgument(t, 2);
              {
                ATerm z_23 = NULL,d_24 = NULL,e_24 = NULL,g_24 = NULL,z_30 = NULL;
                t = SSLgetAnnotations(f_80);
                z_23 = t;
                t = g_80;
                t = v_125(t);
                d_24 = t;
                t = e_80;
                t = v_125(t);
                e_24 = t;
                t = a_80;
                t = v_125(t);
                g_24 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, d_24, e_24, g_24);
                z_30 = t;
                t = SSLsetAnnotations(z_30, z_23);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  g_80 = ATgetArgument(t, 0);
                  e_80 = ATgetArgument(t, 1);
                  a_80 = ATgetArgument(t, 2);
                  d_80 = ATgetArgument(t, 3);
                  {
                    ATerm t_24 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,a_31 = NULL;
                    t = SSLgetAnnotations(f_80);
                    t_24 = t;
                    t = g_80;
                    t = v_125(t);
                    e_25 = t;
                    t = e_80;
                    t = v_125(t);
                    f_25 = t;
                    t = a_80;
                    t = v_125(t);
                    g_25 = t;
                    t = d_80;
                    t = t_125(t);
                    h_25 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, e_25, f_25, g_25, h_25);
                    a_31 = t;
                    t = SSLsetAnnotations(a_31, t_24);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_80 = ATgetArgument(t, 0);
                      e_80 = ATgetArgument(t, 1);
                      a_80 = ATgetArgument(t, 2);
                      d_80 = ATgetArgument(t, 3);
                      {
                        ATerm f_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,x_26 = NULL,b_31 = NULL;
                        t = SSLgetAnnotations(f_80);
                        f_26 = t;
                        t = g_80;
                        t = v_125(t);
                        l_26 = t;
                        t = e_80;
                        t = v_125(t);
                        m_26 = t;
                        t = a_80;
                        t = v_125(t);
                        n_26 = t;
                        t = d_80;
                        t = t_125(t);
                        x_26 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, l_26, m_26, n_26, x_26);
                        b_31 = t;
                        t = SSLsetAnnotations(b_31, f_26);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          g_80 = ATgetArgument(t, 0);
                          e_80 = ATgetArgument(t, 1);
                          {
                            ATerm o_27 = NULL,r_27 = NULL,t_27 = NULL,o_31 = NULL;
                            t = SSLgetAnnotations(f_80);
                            o_27 = t;
                            t = g_80;
                            t = v_125(t);
                            r_27 = t;
                            t = e_80;
                            t = t_125(t);
                            t_27 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, r_27, t_27);
                            o_31 = t;
                            t = SSLsetAnnotations(o_31, o_27);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              g_80 = ATgetArgument(t, 0);
                              e_80 = ATgetArgument(t, 1);
                              {
                                ATerm m_28 = NULL,u_28 = NULL,v_28 = NULL,p_31 = NULL;
                                t = SSLgetAnnotations(f_80);
                                m_28 = t;
                                t = g_80;
                                t = v_125(t);
                                u_28 = t;
                                t = e_80;
                                t = t_125(t);
                                v_28 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, u_28, v_28);
                                p_31 = t;
                                t = SSLsetAnnotations(p_31, m_28);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  g_80 = ATgetArgument(t, 0);
                                  e_80 = ATgetArgument(t, 1);
                                  {
                                    ATerm m_29 = NULL,p_29 = NULL,r_29 = NULL,r_31 = NULL;
                                    t = SSLgetAnnotations(f_80);
                                    m_29 = t;
                                    t = g_80;
                                    t = v_125(t);
                                    p_29 = t;
                                    t = e_80;
                                    t = t_125(t);
                                    r_29 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, p_29, r_29);
                                    r_31 = t;
                                    t = SSLsetAnnotations(r_31, m_29);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      g_80 = ATgetArgument(t, 0);
                                      {
                                        ATerm i_30 = NULL,l_30 = NULL,t_31 = NULL;
                                        t = SSLgetAnnotations(f_80);
                                        i_30 = t;
                                        t = g_80;
                                        t = t_125(t);
                                        l_30 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, l_30);
                                        t_31 = t;
                                        t = SSLsetAnnotations(t_31, i_30);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          g_80 = ATgetArgument(t, 0);
                                          {
                                            ATerm r_30 = NULL,t_30 = NULL,u_31 = NULL;
                                            t = SSLgetAnnotations(f_80);
                                            r_30 = t;
                                            t = g_80;
                                            t = t_125(t);
                                            t_30 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, t_30);
                                            u_31 = t;
                                            t = SSLsetAnnotations(u_31, r_30);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              g_80 = ATgetArgument(t, 0);
                                              {
                                                ATerm d_31 = NULL,f_31 = NULL,v_31 = NULL;
                                                t = SSLgetAnnotations(f_80);
                                                d_31 = t;
                                                t = g_80;
                                                t = t_125(t);
                                                f_31 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, f_31);
                                                v_31 = t;
                                                t = SSLsetAnnotations(v_31, d_31);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  g_80 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm n_31 = NULL,s_31 = NULL,w_31 = NULL;
                                                    t = SSLgetAnnotations(f_80);
                                                    n_31 = t;
                                                    t = g_80;
                                                    t = t_125(t);
                                                    s_31 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, s_31);
                                                    w_31 = t;
                                                    t = SSLsetAnnotations(w_31, n_31);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm d_32 = NULL,s_32 = NULL,b_32 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      g_80 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(f_80);
                                                  d_32 = t;
                                                  t = g_80;
                                                  t = t_125(t);
                                                  s_32 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, s_32);
                                                  b_32 = t;
                                                  t = SSLsetAnnotations(b_32, d_32);
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
ATerm dynrule_targs_1_0 (ATerm c_126 (ATerm), ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL,g_82 = NULL;
  ATerm w_43 = t;
  int x_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          c_82 = ATgetArgument(t, 0);
          {
            ATerm y_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_43);
      t = c_82;
      if(match_cons(t, sym_DynRuleId_1))
        {
          d_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_82;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm e_44 = ATgetArgument(t, 0);
          ATerm f_44 = ATgetArgument(t, 1);
          g_82 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_82;
    }
  else
    {
      t = w_43;
      {
        ATerm h_44 = t;
        int l_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                c_82 = ATgetArgument(t, 0);
                {
                  ATerm m_44 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(l_44);
            t = c_82;
            if(match_cons(t, sym_DynRuleId_1))
              {
                d_82 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = d_82;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm n_44 = ATgetArgument(t, 0);
                ATerm o_44 = ATgetArgument(t, 1);
                g_82 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = g_82;
          }
        else
          {
            t = h_44;
            if(match_cons(t, sym_AddDynRule_2))
              {
                c_82 = ATgetArgument(t, 0);
                {
                  ATerm p_44 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = c_82;
            if(match_cons(t, sym_DynRuleId_1))
              {
                d_82 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = d_82;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm q_44 = ATgetArgument(t, 0);
                ATerm u_44 = ATgetArgument(t, 1);
                g_82 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = g_82;
          }
      }
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm k_83 = NULL;
  ATerm w_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_83 = ATgetArgument(t, 0);
          {
            ATerm b_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_45);
      t = k_83;
    }
  else
    {
      t = w_44;
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
static ATerm o_8 (ATerm t)
{
  ATerm s_83 = NULL;
  ATerm c_45 = t;
  int d_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_83 = ATgetArgument(t, 0);
          {
            ATerm f_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_45);
      t = s_83;
    }
  else
    {
      t = c_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_83;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm a_83 = NULL;
  ATerm k_45 = t;
  int q_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm s_45 = ATgetArgument(t, 0);
          ATerm t_45 = ATgetArgument(t, 1);
          a_83 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(q_45);
      t = a_83;
      t = map_1_0(m_8, t);
    }
  else
    {
      t = k_45;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm u_45 = ATgetArgument(t, 0);
          ATerm v_45 = ATgetArgument(t, 1);
          a_83 = ATgetArgument(t, 2);
          {
            ATerm y_45 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = a_83;
      t = map_1_0(o_8, t);
    }
  return(t);
}
static ATerm b_9 (ATerm t)
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
static ATerm f_9 (ATerm t)
{
  ATerm z_45 = t;
  int b_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_46);
    }
  else
    {
      t = z_45;
      {
        ATerm d_46 = t;
        int i_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_46);
          }
        else
          {
            t = d_46;
            {
              ATerm l_46 = t;
              int m_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_85 = NULL,w_85 = NULL,x_85 = NULL,y_85 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_85 = ATgetArgument(t, 0);
                      w_85 = ATgetArgument(t, 1);
                      x_85 = ATgetArgument(t, 2);
                      y_85 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_85;
                  t = map_1_0(l_9, t);
                  LocalPopChoice(m_46);
                }
              else
                {
                  t = l_46;
                  {
                    ATerm p_46 = t;
                    int q_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(q_46);
                      }
                    else
                      {
                        t = p_46;
                        t = dynrule_targs_1_0(q_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm i_86 = NULL;
  ATerm s_46 = t;
  int t_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_86 = ATgetArgument(t, 0);
          {
            ATerm u_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_46);
      t = i_86;
    }
  else
    {
      t = s_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_86;
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = map_1_0(t_9, t);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm n_86 = NULL;
  ATerm v_46 = t;
  int w_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_86 = ATgetArgument(t, 0);
          {
            ATerm x_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_46);
      t = n_86;
    }
  else
    {
      t = v_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_86;
    }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm r_86 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_86);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm a_47 = t;
  int b_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_47);
    }
  else
    {
      t = a_47;
      {
        ATerm c_47 = t;
        int d_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_47);
          }
        else
          {
            t = c_47;
            {
              ATerm f_47 = t;
              int g_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_86 = ATgetArgument(t, 0);
                      u_86 = ATgetArgument(t, 1);
                      v_86 = ATgetArgument(t, 2);
                      w_86 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_86;
                  t = map_1_0(z_9, t);
                  LocalPopChoice(g_47);
                }
              else
                {
                  t = f_47;
                  {
                    ATerm h_47 = t;
                    int i_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(i_47);
                      }
                    else
                      {
                        t = h_47;
                        t = dynrule_targs_1_0(a_10, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm d_87 = NULL;
  ATerm k_47 = t;
  int l_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_87 = ATgetArgument(t, 0);
          {
            ATerm n_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_47);
      t = d_87;
    }
  else
    {
      t = k_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_87;
    }
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = map_1_0(q_10, t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm i_87 = NULL;
  ATerm q_47 = t;
  int r_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_87 = ATgetArgument(t, 0);
          {
            ATerm s_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_47);
      t = i_87;
    }
  else
    {
      t = q_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_87;
    }
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm m_87 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_87);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm t_47 = t;
  int x_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_47);
    }
  else
    {
      t = t_47;
      {
        ATerm c_48 = t;
        int e_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_48);
          }
        else
          {
            t = c_48;
            {
              ATerm h_48 = t;
              int i_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_87 = ATgetArgument(t, 0);
                      p_87 = ATgetArgument(t, 1);
                      q_87 = ATgetArgument(t, 2);
                      r_87 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_87;
                  t = map_1_0(z_11, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_48);
                      }
                    else
                      {
                        t = j_48;
                        t = dynrule_targs_1_0(b_12, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm y_87 = NULL;
  ATerm n_48 = t;
  int o_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_87 = ATgetArgument(t, 0);
          {
            ATerm p_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_48);
      t = y_87;
    }
  else
    {
      t = n_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_87;
    }
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = map_1_0(c_12, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm d_88 = NULL;
  ATerm q_48 = t;
  int r_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_88 = ATgetArgument(t, 0);
          {
            ATerm s_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_48);
      t = d_88;
    }
  else
    {
      t = q_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_88;
    }
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm h_88 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_88);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm t_48 = t;
  int u_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_48);
    }
  else
    {
      t = t_48;
      {
        ATerm v_48 = t;
        int w_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_48);
          }
        else
          {
            t = v_48;
            {
              ATerm d_49 = t;
              int e_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_88 = ATgetArgument(t, 0);
                      k_88 = ATgetArgument(t, 1);
                      l_88 = ATgetArgument(t, 2);
                      m_88 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_88;
                  t = map_1_0(k_12, t);
                  LocalPopChoice(e_49);
                }
              else
                {
                  t = d_49;
                  {
                    ATerm g_49 = t;
                    int i_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(i_49);
                      }
                    else
                      {
                        t = g_49;
                        t = dynrule_targs_1_0(n_12, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm v_88 = NULL;
  ATerm j_49 = t;
  int k_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_88 = ATgetArgument(t, 0);
          {
            ATerm l_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_49);
      t = v_88;
    }
  else
    {
      t = j_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_88;
    }
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = map_1_0(r_12, t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm a_89 = NULL;
  ATerm m_49 = t;
  int n_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_89 = ATgetArgument(t, 0);
          {
            ATerm p_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_49);
      t = a_89;
    }
  else
    {
      t = m_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_89;
    }
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm e_89 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_89);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm q_49 = t;
  int r_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_49);
    }
  else
    {
      t = q_49;
      {
        ATerm v_49 = t;
        int z_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_49);
          }
        else
          {
            t = v_49;
            {
              ATerm a_50 = t;
              int b_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_89 = ATgetArgument(t, 0);
                      h_89 = ATgetArgument(t, 1);
                      i_89 = ATgetArgument(t, 2);
                      j_89 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_89;
                  t = map_1_0(g_13, t);
                  LocalPopChoice(b_50);
                }
              else
                {
                  t = a_50;
                  {
                    ATerm d_50 = t;
                    int e_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_50);
                      }
                    else
                      {
                        t = d_50;
                        t = dynrule_targs_1_0(l_14, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm q_89 = NULL;
  ATerm f_50 = t;
  int g_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_89 = ATgetArgument(t, 0);
          {
            ATerm k_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_50);
      t = q_89;
    }
  else
    {
      t = f_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_89;
    }
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = map_1_0(n_14, t);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm v_89 = NULL;
  ATerm n_50 = t;
  int p_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_89 = ATgetArgument(t, 0);
          {
            ATerm v_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_50);
      t = v_89;
    }
  else
    {
      t = n_50;
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
ATerm Bind4_0_0 (ATerm t)
{
  ATerm g_85 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      g_85 = ATgetArgument(t, 0);
      t = g_85;
      t = free_vars_3_0(b_9, f_9, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          g_85 = ATgetArgument(t, 0);
          t = g_85;
          t = free_vars_3_0(v_9, y_9, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              g_85 = ATgetArgument(t, 0);
              t = g_85;
              t = free_vars_3_0(u_10, v_11, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  g_85 = ATgetArgument(t, 0);
                  t = g_85;
                  t = free_vars_3_0(f_12, j_12, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      g_85 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = g_85;
                  t = free_vars_3_0(t_12, y_12, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm k_90 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_90);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm w_50 = t;
  int y_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_50);
    }
  else
    {
      t = w_50;
      {
        ATerm z_50 = t;
        int a_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_51);
          }
        else
          {
            t = z_50;
            {
              ATerm b_51 = t;
              int c_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_90 = ATgetArgument(t, 0);
                      n_90 = ATgetArgument(t, 1);
                      o_90 = ATgetArgument(t, 2);
                      p_90 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_90;
                  t = map_1_0(v_14, t);
                  LocalPopChoice(c_51);
                }
              else
                {
                  t = b_51;
                  {
                    ATerm d_51 = t;
                    int e_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_51);
                      }
                    else
                      {
                        t = d_51;
                        t = dynrule_targs_1_0(x_14, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm w_90 = NULL;
  ATerm f_51 = t;
  int g_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_90 = ATgetArgument(t, 0);
          {
            ATerm h_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_51);
      t = w_90;
    }
  else
    {
      t = f_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_90;
    }
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = map_1_0(z_14, t);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm b_91 = NULL;
  ATerm i_51 = t;
  int l_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_91 = ATgetArgument(t, 0);
          {
            ATerm n_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_51);
      t = b_91;
    }
  else
    {
      t = i_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_91;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm d_90 = NULL,h_90 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      h_90 = ATgetArgument(t, 0);
      t = h_90;
      if(match_cons(t, sym_Rule_3))
        {
          d_90 = ATgetArgument(t, 0);
          {
            ATerm o_51 = ATgetArgument(t, 1);
          }
          {
            ATerm p_51 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = d_90;
      t = free_vars_3_0(o_14, u_14, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          h_90 = ATgetArgument(t, 0);
          {
            ATerm q_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_90;
    }
  return(t);
}
static ATerm r_10 (ATerm o_101 (ATerm), ATerm w_25, ATerm v_25, ATerm t)
{
  static ATerm u_91 (ATerm t)
  {
    ATerm p_91 = NULL,q_91 = NULL,r_91 = NULL;
    p_91 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_91 = ATgetFirst((ATermList) t);
            r_91 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_51 = t;
          int s_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_91;
              {
                static ATerm a_15 (ATerm t)
                {
                  t = v_25;
                  return(t);
                }
                t = s_10(o_101, a_15, q_91, r_91, t);
              }
              t = u_91(t);
              LocalPopChoice(s_51);
            }
          else
            {
              t = r_51;
              {
                ATerm s_33 = NULL,c_34 = NULL,q_35 = NULL;
                t = SSLgetAnnotations(p_91);
                s_33 = t;
                t = r_91;
                t = u_91(t);
                c_34 = t;
                t = (ATerm) ATinsert(CheckATermList(c_34), q_91);
                q_35 = t;
                t = SSLsetAnnotations(q_35, s_33);
              }
            }
        }
      }
    return(t);
  }
  t = w_25;
  t = u_91(t);
  return(t);
}
ATerm foldr_3_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm t)
{
  ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL;
  x_91 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_91;
      t = j_104(t);
    }
  else
    {
      ATerm c_92 = NULL,d_92 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_91 = ATgetFirst((ATermList) t);
          z_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_91;
      t = l_104(t);
      c_92 = t;
      t = z_91;
      t = foldr_3_0(j_104, k_104, l_104, t);
      d_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_92, d_92);
      t = k_104(t);
    }
  return(t);
}
static ATerm s_10 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm a_26, ATerm z_25, ATerm t)
{
  t = s_101(t);
  {
    static ATerm b_15 (ATerm t)
    {
      ATerm g_92 = NULL;
      g_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_26, g_92);
      t = r_101(t);
      return(t);
    }
    t = fetch_1_0(b_15, t);
  }
  t = z_25;
  return(t);
}
static ATerm t_10 (ATerm j_101 (ATerm), ATerm u_25, ATerm t_25, ATerm t)
{
  static ATerm w_92 (ATerm t)
  {
    ATerm r_92 = NULL,s_92 = NULL,t_92 = NULL;
    r_92 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_92;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_92 = ATgetFirst((ATermList) t);
            t_92 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_51 = t;
          int v_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_92;
              {
                static ATerm c_15 (ATerm t)
                {
                  t = t_25;
                  return(t);
                }
                t = s_10(j_101, c_15, s_92, t_92, t);
              }
              t = w_92(t);
              LocalPopChoice(v_51);
            }
          else
            {
              t = u_51;
              {
                ATerm r_34 = NULL,u_34 = NULL,x_35 = NULL;
                t = SSLgetAnnotations(r_92);
                r_34 = t;
                t = t_92;
                t = w_92(t);
                u_34 = t;
                t = (ATerm) ATinsert(CheckATermList(u_34), s_92);
                x_35 = t;
                t = SSLsetAnnotations(x_35, r_34);
              }
            }
        }
      }
    return(t);
  }
  t = u_25;
  t = w_92(t);
  return(t);
}
ATerm genzip_4_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm t)
{
  static ATerm e_93 (ATerm t)
  {
    ATerm y_51 = t;
    int z_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_116(t);
        LocalPopChoice(z_51);
      }
    else
      {
        t = y_51;
        {
          ATerm y_92 = NULL,z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL,w_39 = NULL;
          t = x_116(t);
          d_93 = t;
          if(match_cons(t, sym__2))
            {
              z_92 = ATgetArgument(t, 0);
              a_93 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_93);
          y_92 = t;
          t = z_92;
          t = z_116(t);
          b_93 = t;
          t = a_93;
          t = e_93(t);
          c_93 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_93, c_93);
          w_39 = t;
          t = SSLsetAnnotations(w_39, y_92);
          t = y_116(t);
        }
      }
    return(t);
  }
  t = e_93(t);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_52 = ATgetArgument(t, 0);
      if(((ATgetType(b_52) != AT_LIST) || !(ATisEmpty(b_52))))
        _fail(t);
      {
        ATerm c_52 = ATgetArgument(t, 1);
        if(((ATgetType(c_52) != AT_LIST) || !(ATisEmpty(c_52))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_52 = ATgetArgument(t, 0);
      if(((ATgetType(d_52) == AT_LIST) && !(ATisEmpty(d_52))))
        {
          l_93 = ATgetFirst((ATermList) d_52);
          m_93 = (ATerm) ATgetNext((ATermList) d_52);
        }
      else
        _fail(t);
      {
        ATerm e_52 = ATgetArgument(t, 1);
        if(((ATgetType(e_52) == AT_LIST) && !(ATisEmpty(e_52))))
          {
            n_93 = ATgetFirst((ATermList) e_52);
            o_93 = (ATerm) ATgetNext((ATermList) e_52);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_93, n_93), (ATerm) ATmakeAppl(sym__2, m_93, o_93));
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm p_93 = NULL,q_93 = NULL;
  if(match_cons(t, sym__2))
    {
      p_93 = ATgetArgument(t, 0);
      q_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_93), p_93);
  return(t);
}
static ATerm y_10 (ATerm z_744, ATerm e_745, ATerm g_75, ATerm t)
{
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL;
  t = SSL_explode_term(e_745);
  if(match_cons(t, sym__2))
    {
      g_93 = ATgetArgument(t, 0);
      i_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(z_744);
  if(match_cons(t, sym__2))
    {
      if((g_93 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      h_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_93, i_93);
  t = genzip_4_0(t_15, h_16, j_16, _id, t);
  j_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_93, g_75);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm v_114 (ATerm), ATerm w_114 (ATerm), ATerm t)
{
  static ATerm s_93 (ATerm t)
  {
    ATerm f_52 = t;
    int g_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_114(t);
        LocalPopChoice(g_52);
      }
    else
      {
        t = f_52;
        t = w_114(t);
        t = s_93(t);
      }
    return(t);
  }
  t = s_93(t);
  return(t);
}
ATerm for_3_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t)
{
  t = y_114(t);
  t = while_not_2_0(z_114, a_115, t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm z_93 = NULL;
  z_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_93);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL,p_43 = NULL;
  d_94 = t;
  if(match_cons(t, sym__2))
    {
      b_94 = ATgetArgument(t, 0);
      c_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_94);
  a_94 = t;
  t = c_94;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_94, c_94);
  p_43 = t;
  t = SSLsetAnnotations(p_43, a_94);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm w_94 = NULL,x_94 = NULL,y_94 = NULL,z_94 = NULL,a_95 = NULL;
  w_94 = t;
  if(match_cons(t, sym__2))
    {
      x_94 = ATgetArgument(t, 0);
      y_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_94 = ATgetFirst((ATermList) t);
      a_95 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_52 = t;
        int i_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_95(x_94, y_94, w_94, t);
            LocalPopChoice(i_52);
          }
        else
          {
            t = h_52;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_94), z_94), a_95);
          }
      }
    }
  else
    {
      t = k_95(x_94, y_94, w_94, t);
    }
  return(t);
}
static ATerm k_95 (ATerm e_94, ATerm f_94, ATerm g_94, ATerm t)
{
  ATerm h_94 = NULL,k_94 = NULL,q_43 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL;
  t = SSLgetAnnotations(g_94);
  h_94 = t;
  t = f_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_94 = ATgetFirst((ATermList) t);
      q_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_94;
  if(match_cons(t, sym__2))
    {
      o_94 = ATgetArgument(t, 0);
      p_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_52 = t;
    int k_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_94;
        if((o_94 != t))
          {
            _fail(t);
          }
        t = q_94;
        LocalPopChoice(k_52);
      }
    else
      {
        t = j_52;
        t = f_94;
        t = y_10(o_94, p_94, q_94, t);
      }
  }
  k_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_94, k_94);
  q_43 = t;
  t = SSLsetAnnotations(q_43, h_94);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm j_95 = NULL;
  if(match_cons(t, sym__2))
    {
      j_95 = ATgetArgument(t, 0);
      if((j_95 != ATgetArgument(t, 1)))
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
  ATerm l_52 = t;
  int n_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(l_16, m_16, n_16, t);
      LocalPopChoice(n_52);
    }
  else
    {
      t = l_52;
      {
        ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL;
        e_95 = t;
        if(match_cons(t, sym__2))
          {
            f_95 = ATgetArgument(t, 0);
            g_95 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_95;
        t = t_10(p_16, f_95, g_95, t);
      }
    }
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm g_35 = NULL,i_35 = NULL;
  if(match_cons(t, sym__2))
    {
      g_35 = ATgetArgument(t, 0);
      i_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(u_16, g_35, i_35, t);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm k_35 = NULL;
  if(match_cons(t, sym__2))
    {
      k_35 = ATgetArgument(t, 0);
      if((k_35 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL;
  if(match_cons(t, sym__2))
    {
      y_35 = ATgetArgument(t, 0);
      z_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(c_17, y_35, z_35, t);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm a_36 = NULL;
  if(match_cons(t, sym__2))
    {
      a_36 = ATgetArgument(t, 0);
      if((a_36 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm i_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm y_95 (ATerm t)
  {
    ATerm o_52 = t;
    int p_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_129(t);
        LocalPopChoice(p_52);
      }
    else
      {
        t = o_52;
        {
          ATerm q_52 = t;
          int r_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_95 = NULL,n_95 = NULL,b_35 = NULL,c_35 = NULL;
              m_95 = t;
              t = h_129(t);
              n_95 = t;
              t = m_95;
              {
                static ATerm q_16 (ATerm t)
                {
                  ATerm p_95 = NULL;
                  t = y_95(t);
                  p_95 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_95, n_95);
                  t = diff_0_0(t);
                  return(t);
                }
                t = i_129(q_16, y_95, r_16, t);
              }
              c_35 = t;
              t = SSL_explode_term(c_35);
              if(match_cons(t, sym__2))
                {
                  ATerm s_52 = ATgetArgument(t, 0);
                  b_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_35;
              t = foldr_3_0(s_16, t_16, _id, t);
              LocalPopChoice(r_52);
            }
          else
            {
              t = q_52;
              {
                ATerm o_35 = NULL,p_35 = NULL;
                p_35 = t;
                t = SSL_explode_term(p_35);
                if(match_cons(t, sym__2))
                  {
                    ATerm t_52 = ATgetArgument(t, 0);
                    o_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_35;
                t = foldr_3_0(v_16, w_16, y_95, t);
              }
            }
        }
      }
    return(t);
  }
  t = y_95(t);
  return(t);
}
ATerm topdown_1_0 (ATerm d_106 (ATerm), ATerm t)
{
  static ATerm d_17 (ATerm t)
  {
    t = topdown_1_0(d_106, t);
    return(t);
  }
  t = d_106(t);
  t = SRTS_all(d_17, t);
  return(t);
}
static ATerm a_11 (ATerm t_32, ATerm u_32, ATerm t)
{
  ATerm z_95 = NULL,a_96 = NULL;
  a_96 = t;
  {
    ATerm u_52 = t;
    int w_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
        t = p_11(t_32, u_32, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_52 = ATgetFirst((ATermList) t);
            z_95 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(w_52);
        {
          ATerm b_96 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, t_32, u_32, z_95);
          t = lookup_table_0_1(t_32, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              b_96 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_11(u_32, z_95, b_96, t);
          t = (ATerm) ATmakeAppl(sym__3, t_32, u_32, z_95);
        }
      }
    else
      {
        t = u_52;
        {
          ATerm d_96 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
          t = lookup_table_0_1(t_32, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_96 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_11(u_32, d_96, t);
          t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
        }
      }
  }
  t = a_96;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  ATerm f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL;
  i_96 = t;
  t = q_105(t);
  h_96 = t;
  {
    ATerm y_52 = t;
    int z_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_96 = NULL;
        t = term_r_43;
        j_96 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_96, term_r_43);
        t = p_11(h_96, j_96, t);
        LocalPopChoice(z_52);
      }
    else
      {
        t = y_52;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_96 = ATgetFirst((ATermList) t);
      f_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm e_53 = t;
    int f_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_96;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(f_96), g_96);
        LocalPopChoice(f_53);
        {
          ATerm k_96 = NULL,l_96 = NULL,m_96 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, h_96, term_r_43);
          t = lookup_table_0_1(h_96, t);
          m_96 = t;
          t = term_r_43;
          k_96 = t;
          t = m_96;
          if(match_cons(t, sym_Hashtable_1))
            {
              l_96 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_11(k_96, l_96, t);
          t = (ATerm) ATmakeAppl(sym__2, h_96, term_r_43);
        }
      }
    else
      {
        t = e_53;
        {
          ATerm n_96 = NULL,o_96 = NULL,p_96 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, h_96, term_r_43, f_96);
          t = lookup_table_0_1(h_96, t);
          p_96 = t;
          t = term_r_43;
          n_96 = t;
          t = p_96;
          if(match_cons(t, sym_Hashtable_1))
            {
              o_96 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_11(n_96, f_96, o_96, t);
          t = (ATerm) ATmakeAppl(sym__3, h_96, term_r_43, f_96);
        }
      }
  }
  t = g_96;
  {
    static ATerm e_17 (ATerm t)
    {
      ATerm q_96 = NULL;
      q_96 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_96, q_96);
      t = a_11(h_96, q_96, t);
      return(t);
    }
    t = map_1_0(e_17, t);
  }
  t = i_96;
  return(t);
}
ATerm restore_always_2_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm t)
{
  ATerm g_53 = t;
  int i_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_120(t);
      t = d_120(t);
      LocalPopChoice(i_53);
    }
  else
    {
      t = g_53;
      t = d_120(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_105 (ATerm), ATerm t)
{
  ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL;
  t_96 = t;
  t = p_105(t);
  s_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_96, term_r_43);
  {
    ATerm k_53 = t;
    int l_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_97 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_53 = ATgetArgument(t, 0);
            ATerm o_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_43;
        c_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_96, term_r_43);
        t = p_11(s_96, c_97, t);
        LocalPopChoice(l_53);
      }
    else
      {
        t = k_53;
        t = (ATerm) ATempty;
      }
  }
  u_96 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_96, term_r_43, (ATerm) ATinsert(CheckATermList(u_96), (ATerm) ATempty));
  t = lookup_table_0_1(s_96, t);
  y_96 = t;
  t = term_r_43;
  v_96 = t;
  t = (ATerm) ATinsert(CheckATermList(u_96), (ATerm) ATempty);
  w_96 = t;
  t = y_96;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(v_96, w_96, x_96, t);
  t = t_96;
  return(t);
}
ATerm scope_2_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t)
{
  static ATerm i_17 (ATerm t)
  {
    t = end_scope_1_0(r_105, t);
    return(t);
  }
  t = begin_scope_1_0(r_105, t);
  t = restore_always_2_0(s_105, i_17, t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_h_24;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = scope_2_0(s_17, v_17, t);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  t = term_e_33;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm l_97 = NULL,m_97 = NULL,n_97 = NULL;
  t = topdown_1_0(x_17, t);
  n_97 = t;
  t = free_vars_3_0(z_17, a_18, tboundin_3_0, t);
  m_97 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, m_97, n_97);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm p_53 = ATgetArgument(t, 0);
      l_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_97;
  {
    ATerm s_53 = t;
    int t_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        LocalPopChoice(t_53);
      }
    else
      {
        t = s_53;
        {
          ATerm v_53 = t;
          int x_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              LocalPopChoice(x_53);
            }
          else
            {
              t = v_53;
              {
                ATerm t_98 = NULL,u_98 = NULL,v_98 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    t_98 = ATgetArgument(t, 0);
                    u_98 = ATgetArgument(t, 1);
                    v_98 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = l_97;
                t = b_10(t_98, u_98, v_98, t);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm u_97 = NULL,v_97 = NULL;
  v_97 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_97 = ATgetArgument(t, 0);
      {
        ATerm y_53 = t;
        int a_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_36 = NULL,f_36 = NULL,v_43 = NULL;
            t = SSLgetAnnotations(v_97);
            d_36 = t;
            t = u_97;
            if(match_cons(t, sym_ListVar_1))
              {
                f_36 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, f_36);
            v_43 = t;
            t = SSLsetAnnotations(v_43, d_36);
            LocalPopChoice(a_54);
          }
        else
          {
            t = y_53;
            t = v_97;
          }
      }
    }
  else
    {
      t = v_97;
    }
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm y_97 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_97);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm c_54 = t;
  int d_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_54);
    }
  else
    {
      t = c_54;
      {
        ATerm e_54 = t;
        int g_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_54);
          }
        else
          {
            t = e_54;
            {
              ATerm h_54 = t;
              int i_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_98 = ATgetArgument(t, 0);
                      b_98 = ATgetArgument(t, 1);
                      c_98 = ATgetArgument(t, 2);
                      d_98 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_98;
                  t = map_1_0(d_18, t);
                  LocalPopChoice(i_54);
                }
              else
                {
                  t = h_54;
                  {
                    ATerm k_54 = t;
                    int l_54 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_54);
                      }
                    else
                      {
                        t = k_54;
                        t = dynrule_targs_1_0(e_18, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm k_98 = NULL;
  ATerm m_54 = t;
  int o_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_98 = ATgetArgument(t, 0);
          {
            ATerm v_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_54);
      t = k_98;
    }
  else
    {
      t = m_54;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_98;
    }
  return(t);
}
static ATerm e_18 (ATerm t)
{
  t = map_1_0(j_18, t);
  return(t);
}
static ATerm j_18 (ATerm t)
{
  ATerm p_98 = NULL;
  ATerm w_54 = t;
  int a_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_98 = ATgetArgument(t, 0);
          {
            ATerm d_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_55);
      t = p_98;
    }
  else
    {
      t = w_54;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_98;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm k_97 = NULL;
  k_97 = t;
  t = scope_2_0(p_17, r_17, t);
  t = k_97;
  return(t);
}
ATerm filter_1_0 (ATerm w_118 (ATerm), ATerm t)
{
  ATerm l_99 = NULL,m_99 = NULL,n_99 = NULL;
  l_99 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_99;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_99 = ATgetFirst((ATermList) t);
          n_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_55 = t;
        int i_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_36 = NULL,s_36 = NULL,t_36 = NULL,i_44 = NULL;
            t = SSLgetAnnotations(l_99);
            m_36 = t;
            t = m_99;
            t = w_118(t);
            s_36 = t;
            t = n_99;
            t = filter_1_0(w_118, t);
            t_36 = t;
            t = (ATerm) ATinsert(CheckATermList(t_36), s_36);
            i_44 = t;
            t = SSLsetAnnotations(i_44, m_36);
            LocalPopChoice(i_55);
          }
        else
          {
            t = e_55;
            t = n_99;
            t = filter_1_0(w_118, t);
          }
      }
    }
  return(t);
}
static ATerm l_18 (ATerm t)
{
  ATerm d_100 = NULL,e_100 = NULL,f_100 = NULL,m_45 = NULL;
  f_100 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      e_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_100);
  d_100 = t;
  t = e_100;
  {
    ATerm j_55 = t;
    int m_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_100;
        LocalPopChoice(m_55);
      }
    else
      {
        t = j_55;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_100;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Overlays_1, e_100);
  m_45 = t;
  t = SSLsetAnnotations(m_45, d_100);
  return(t);
}
static ATerm n_18 (ATerm t)
{
  t = Cons_2_0(s_18, v_18, t);
  return(t);
}
static ATerm s_18 (ATerm t)
{
  ATerm h_100 = NULL,i_100 = NULL,j_100 = NULL,n_45 = NULL;
  j_100 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      i_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_100);
  h_100 = t;
  t = i_100;
  {
    ATerm n_55 = t;
    int o_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_100;
        LocalPopChoice(o_55);
      }
    else
      {
        t = n_55;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_100;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Strategies_1, i_100);
  n_45 = t;
  t = SSLsetAnnotations(n_45, h_100);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm s_99 = NULL,t_99 = NULL,u_99 = NULL,v_99 = NULL,w_99 = NULL,x_99 = NULL,y_99 = NULL,z_99 = NULL,a_100 = NULL,b_100 = NULL,c_100 = NULL,p_45 = NULL,o_45 = NULL,l_45 = NULL;
  c_100 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_100);
  s_99 = t;
  t = t_99;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_99 = ATgetFirst((ATermList) t);
      w_99 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_99);
  u_99 = t;
  t = v_99;
  if(match_cons(t, sym_Signature_1))
    {
      a_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_99);
  z_99 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, a_100);
  l_45 = t;
  t = SSLsetAnnotations(l_45, z_99);
  b_100 = t;
  t = w_99;
  t = Cons_2_0(l_18, n_18, t);
  x_99 = t;
  t = (ATerm) ATinsert(CheckATermList(x_99), b_100);
  o_45 = t;
  t = SSLsetAnnotations(o_45, u_99);
  y_99 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_99);
  p_45 = t;
  t = SSLsetAnnotations(p_45, s_99);
  return(t);
}
static ATerm c_11 (ATerm z_43, ATerm a_44, ATerm t)
{
  ATerm l_100 = NULL;
  t = SSL_fputc(z_43, a_44);
  l_100 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_100);
  return(t);
}
static ATerm d_11 (ATerm w_49, ATerm x_49, ATerm t)
{
  ATerm m_100 = NULL;
  t = SSL_write_term_to_stream_text(w_49, x_49);
  m_100 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_100);
  return(t);
}
static ATerm f_11 (ATerm t_115 (ATerm), ATerm w_470, ATerm c_50, ATerm t)
{
  ATerm n_100 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_470, term_p_55);
  t = j_11(t);
  n_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_100, c_50);
  t = t_115(t);
  t = fclose_0_0(t);
  t = c_50;
  return(t);
}
static ATerm e_11 (ATerm s_49, ATerm t_49, ATerm t)
{
  ATerm o_100 = NULL;
  t = SSL_write_term_to_stream_baf(s_49, t_49);
  o_100 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_100);
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm v_100 = NULL,w_100 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_55 = ATgetArgument(t, 0);
      if(match_cons(q_55, sym_Stream_1))
        {
          v_100 = ATgetArgument(q_55, 0);
        }
      else
        _fail(t);
      w_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(v_100, w_100, t);
  return(t);
}
static ATerm y_18 (ATerm t)
{
  ATerm x_100 = NULL,y_100 = NULL,z_100 = NULL,a_101 = NULL,b_101 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_55 = ATgetArgument(t, 0);
      if(match_cons(r_55, sym_Stream_1))
        {
          a_101 = ATgetArgument(r_55, 0);
        }
      else
        _fail(t);
      b_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(a_101, b_101, t);
  x_100 = t;
  t = term_s_55;
  y_100 = t;
  t = x_100;
  if(match_cons(t, sym_Stream_1))
    {
      z_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_55, x_100);
  t = c_11(y_100, z_100, t);
  return(t);
}
ATerm output_1_0 (ATerm a_133 (ATerm), ATerm t)
{
  ATerm p_100 = NULL,q_100 = NULL;
  t = a_133(t);
  q_100 = t;
  {
    ATerm t_55 = t;
    int u_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_100 = NULL,s_100 = NULL;
        t = term_q_29;
        r_100 = t;
        t = term_v_55;
        s_100 = t;
        t = term_w_55;
        t = p_11(r_100, s_100, t);
        LocalPopChoice(u_55);
      }
    else
      {
        t = t_55;
        t = term_x_55;
      }
  }
  p_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_100, q_100);
  {
    ATerm y_55 = t;
    int z_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_100 = NULL,u_100 = NULL;
        t = term_q_29;
        t_100 = t;
        t = term_a_56;
        u_100 = t;
        t = term_b_56;
        t = p_11(t_100, u_100, t);
        t = (ATerm) ATmakeAppl(sym__2, p_100, q_100);
        LocalPopChoice(z_55);
        if(match_cons(t, sym__2))
          {
            ATerm c_56 = ATgetArgument(t, 0);
            ATerm d_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_11(w_18, p_100, q_100, t);
      }
    else
      {
        t = y_55;
        if(match_cons(t, sym__2))
          {
            ATerm e_56 = ATgetArgument(t, 0);
            ATerm f_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_11(y_18, p_100, q_100, t);
      }
  }
  return(t);
}
static ATerm v_101 (ATerm l_101, ATerm t)
{
  t = SSL_fclose(l_101);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_101 = NULL,t_101 = NULL;
  t_101 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_101 = ATgetArgument(t, 0);
      {
        ATerm g_56 = t;
        int h_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_101);
            LocalPopChoice(h_56);
          }
        else
          {
            t = g_56;
            t = v_101(t_101, t);
          }
      }
    }
  else
    {
      t = v_101(t_101, t);
    }
  return(t);
}
static ATerm g_11 (ATerm y_49, ATerm t)
{
  t = SSL_read_term_from_stream(y_49);
  return(t);
}
static ATerm h_11 (ATerm s_42, ATerm t_42, ATerm t)
{
  t = SSL_strcat(s_42, t_42);
  return(t);
}
static ATerm i_11 (ATerm b_44, ATerm c_44, ATerm t)
{
  ATerm w_101 = NULL;
  t = SSL_fopen(b_44, c_44);
  w_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_101);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_101 = NULL;
  t = SSL_stdin_stream();
  y_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_101);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_102 = NULL;
  t = SSL_stdout_stream();
  b_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_102);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_102 = NULL;
  t = SSL_stderr_stream();
  c_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_102);
  return(t);
}
static ATerm n_103 (ATerm i_102, ATerm t)
{
  ATerm l_102 = NULL;
  t = SSL_explode_term(i_102);
  if(match_cons(t, sym__2))
    {
      ATerm i_56 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_56) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_56 = ATgetArgument(t, 1);
        if(((ATgetType(j_56) == AT_LIST) && !(ATisEmpty(j_56))))
          {
            l_102 = ATgetFirst((ATermList) j_56);
            {
              ATerm k_56 = (ATerm) ATgetNext((ATermList) j_56);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_102;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_102;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_102;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_102;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_103 (ATerm o_102, ATerm p_102, ATerm s_102, ATerm t)
{
  ATerm t_102 = NULL,u_102 = NULL,v_102 = NULL,y_102 = NULL,w_45 = NULL;
  t = SSLgetAnnotations(s_102);
  v_102 = t;
  t = o_102;
  if(match_cons(t, sym_Path_1))
    {
      y_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_102, p_102);
  w_45 = t;
  t = SSLsetAnnotations(w_45, v_102);
  if(match_cons(t, sym__2))
    {
      t_102 = ATgetArgument(t, 0);
      u_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(t_102, u_102, t);
  return(t);
}
static ATerm p_103 (ATerm a_103, ATerm b_103, ATerm c_103, ATerm t)
{
  ATerm d_103 = NULL,e_103 = NULL,f_103 = NULL,i_103 = NULL,x_45 = NULL;
  t = SSLgetAnnotations(c_103);
  f_103 = t;
  t = SSL_is_string(a_103);
  i_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_103, b_103);
  x_45 = t;
  t = SSLsetAnnotations(x_45, f_103);
  if(match_cons(t, sym__2))
    {
      d_103 = ATgetArgument(t, 0);
      e_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(d_103, e_103, t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm k_103 = NULL,l_103 = NULL,m_103 = NULL;
  k_103 = t;
  if(match_cons(t, sym__2))
    {
      l_103 = ATgetArgument(t, 0);
      m_103 = ATgetArgument(t, 1);
      {
        ATerm l_56 = t;
        int m_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_103(k_103, t);
            LocalPopChoice(m_56);
          }
        else
          {
            t = l_56;
            {
              ATerm n_56 = t;
              int o_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_103(l_103, m_103, k_103, t);
                  LocalPopChoice(o_56);
                }
              else
                {
                  t = n_56;
                  t = p_103(l_103, m_103, k_103, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_103(k_103, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_103 = NULL,s_103 = NULL,t_103 = NULL,y_103 = NULL;
  y_103 = t;
  {
    ATerm p_56 = t;
    int q_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_103, term_r_56);
        t = j_11(t);
        LocalPopChoice(q_56);
      }
    else
      {
        t = p_56;
        {
          ATerm j_38 = NULL,k_38 = NULL;
          t = term_s_56;
          k_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_56, y_103);
          t = h_11(k_38, y_103, t);
          j_38 = t;
          t = SSL_perror(j_38);
          _fail(t);
        }
      }
  }
  s_103 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_11(t_103, t);
  r_103 = t;
  t = s_103;
  t = fclose_0_0(t);
  t = r_103;
  return(t);
}
ATerm input_1_0 (ATerm b_133 (ATerm), ATerm t)
{
  ATerm t_56 = t;
  int u_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_104 = NULL,c_104 = NULL;
      t = term_q_29;
      b_104 = t;
      t = term_v_56;
      c_104 = t;
      t = term_w_56;
      t = p_11(b_104, c_104, t);
      LocalPopChoice(u_56);
    }
  else
    {
      t = t_56;
      t = term_x_56;
    }
  t = ReadFromFile_0_0(t);
  t = b_133(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_104 = NULL,e_104 = NULL,f_104 = NULL,g_104 = NULL,m_104 = NULL;
  d_104 = t;
  t = term_y_56;
  t = whoami_0_0(t);
  e_104 = t;
  t = term_f_27;
  g_104 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_57), e_104), term_z_56);
  m_104 = t;
  t = SSL_printnl(g_104, m_104);
  t = term_b_57;
  f_104 = t;
  t = SSL_exit(f_104);
  t = d_104;
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm o_104 = NULL;
  o_104 = t;
  if(match_string(t, "-k"))
    {
      t = o_104;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_104;
    }
  return(t);
}
static ATerm b_19 (ATerm t)
{
  ATerm p_104 = NULL,q_104 = NULL,r_104 = NULL;
  p_104 = t;
  t = SSL_string_to_int(p_104);
  q_104 = t;
  t = term_c_57;
  r_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_57, q_104);
  t = s_11(r_104, q_104, t);
  t = p_104;
  return(t);
}
static ATerm g_19 (ATerm t)
{
  t = term_d_57;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_19, b_19, g_19, t);
  return(t);
}
static ATerm k_19 (ATerm t)
{
  ATerm t_104 = NULL;
  t_104 = t;
  if(match_string(t, "-S"))
    {
      t = t_104;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_104;
    }
  return(t);
}
static ATerm l_19 (ATerm t)
{
  ATerm u_104 = NULL,v_104 = NULL;
  t = term_e_57;
  u_104 = t;
  t = term_f_57;
  v_104 = t;
  t = term_g_57;
  t = s_11(u_104, v_104, t);
  t = term_h_57;
  return(t);
}
static ATerm m_19 (ATerm t)
{
  t = term_i_57;
  return(t);
}
static ATerm n_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_19 (ATerm t)
{
  ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL;
  w_104 = t;
  t = SSL_string_to_int(w_104);
  x_104 = t;
  t = term_e_57;
  y_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_57, x_104);
  t = s_11(y_104, x_104, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_104);
  return(t);
}
static ATerm q_19 (ATerm t)
{
  t = term_j_57;
  return(t);
}
static ATerm r_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_19 (ATerm t)
{
  ATerm z_104 = NULL,a_105 = NULL;
  t = term_k_57;
  z_104 = t;
  t = term_y_56;
  a_105 = t;
  t = term_l_57;
  t = s_11(z_104, a_105, t);
  t = term_m_57;
  return(t);
}
static ATerm x_19 (ATerm t)
{
  t = term_n_57;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_57 = t;
  int p_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_19, l_19, m_19, t);
      LocalPopChoice(p_57);
    }
  else
    {
      t = o_57;
      {
        ATerm q_57 = t;
        int r_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_19, p_19, q_19, t);
            LocalPopChoice(r_57);
          }
        else
          {
            t = q_57;
            t = Option_3_0(r_19, s_19, x_19, t);
          }
      }
    }
  return(t);
}
static ATerm s_11 (ATerm u_47, ATerm v_47, ATerm t)
{
  ATerm b_105 = NULL,c_105 = NULL;
  t = term_q_29;
  b_105 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_29, u_47, v_47);
  t = lookup_table_0_1(b_105, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(u_47, v_47, c_105, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_29, u_47, v_47);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm g_105 = NULL,h_105 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_105 = NULL,j_105 = NULL,k_105 = NULL;
      t = term_y_56;
      t = f_0(t);
      i_105 = t;
      t = term_s_57;
      j_105 = t;
      t = term_t_57;
      k_105 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_57, term_t_57, i_105);
      t = q_11(j_105, k_105, i_105, t);
      _fail(t);
    }
  else
    {
      ATerm n_105 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_105 = ATgetFirst((ATermList) t);
          h_105 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_105;
      t = b_0(t);
      t = term_y_56;
      t = d_0(t);
      n_105 = t;
      t = (ATerm) ATinsert(CheckATermList(h_105), n_105);
    }
  return(t);
}
static ATerm y_19 (ATerm t)
{
  ATerm u_105 = NULL;
  u_105 = t;
  if(match_string(t, "-o"))
    {
      t = u_105;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_105;
    }
  return(t);
}
static ATerm z_19 (ATerm t)
{
  ATerm w_105 = NULL,x_105 = NULL;
  w_105 = t;
  t = term_v_55;
  x_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_55, w_105);
  t = s_11(x_105, w_105, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_105);
  return(t);
}
static ATerm b_20 (ATerm t)
{
  t = term_u_57;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_19, z_19, b_20, t);
  return(t);
}
static ATerm c_20 (ATerm t)
{
  ATerm z_105 = NULL;
  z_105 = t;
  if(match_string(t, "-i"))
    {
      t = z_105;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_105;
    }
  return(t);
}
static ATerm d_20 (ATerm t)
{
  ATerm a_106 = NULL,b_106 = NULL;
  a_106 = t;
  t = term_v_56;
  b_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_56, a_106);
  t = s_11(b_106, a_106, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_106);
  return(t);
}
static ATerm k_20 (ATerm t)
{
  t = term_v_57;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_20, d_20, k_20, t);
  return(t);
}
ATerm at_end_1_0 (ATerm q_102 (ATerm), ATerm t)
{
  static ATerm x_106 (ATerm t)
  {
    ATerm u_106 = NULL,v_106 = NULL,w_106 = NULL;
    w_106 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_106 = ATgetFirst((ATermList) t);
        v_106 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_38 = NULL,e_39 = NULL,a_46 = NULL;
          t = SSLgetAnnotations(w_106);
          z_38 = t;
          t = v_106;
          t = x_106(t);
          e_39 = t;
          t = (ATerm) ATinsert(CheckATermList(e_39), u_106);
          a_46 = t;
          t = SSLsetAnnotations(a_46, z_38);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_106;
        t = q_102(t);
      }
    return(t);
  }
  t = x_106(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_106 = NULL,f_106 = NULL,g_106 = NULL;
  e_106 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_106;
    }
  else
    {
      static ATerm o_20 (ATerm t)
      {
        t = not_null(g_106);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_106 = ATgetFirst((ATermList) t);
          if(((g_106 != NULL) && (g_106 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_106 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_106;
      t = at_end_1_0(o_20, t);
    }
  return(t);
}
static ATerm j_107 (ATerm b_107, ATerm t)
{
  ATerm c_107 = NULL;
  t = SSL_explode_term(b_107);
  if(match_cons(t, sym__2))
    {
      ATerm w_57 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_57) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_107;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL;
  g_107 = t;
  if(match_cons(t, sym__2))
    {
      e_107 = ATgetArgument(t, 0);
      f_107 = ATgetArgument(t, 1);
      {
        ATerm x_57 = t;
        int y_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_20 (ATerm t)
            {
              t = f_107;
              return(t);
            }
            t = e_107;
            t = at_end_1_0(r_20, t);
            LocalPopChoice(y_57);
          }
        else
          {
            t = x_57;
            t = j_107(g_107, t);
          }
      }
    }
  else
    {
      t = j_107(g_107, t);
    }
  return(t);
}
static ATerm b_11 (ATerm a_48, ATerm z_47, ATerm t)
{
  ATerm k_107 = NULL,l_107 = NULL,m_107 = NULL,n_107 = NULL;
  t = a_48;
  {
    ATerm z_57 = t;
    int a_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_107 = NULL;
        t = term_q_29;
        p_107 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_29, a_48);
        t = p_11(p_107, a_48, t);
        LocalPopChoice(a_58);
      }
    else
      {
        t = z_57;
        t = (ATerm) ATempty;
      }
  }
  l_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_47, l_107);
  t = conc_0_0(t);
  k_107 = t;
  t = term_q_29;
  m_107 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_29, a_48, k_107);
  t = lookup_table_0_1(m_107, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(a_48, k_107, n_107, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_29, a_48, k_107);
  return(t);
}
static ATerm q_11 (ATerm o_32, ATerm p_32, ATerm n_32, ATerm t)
{
  ATerm r_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL,x_107 = NULL;
  r_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_32, p_32);
  {
    ATerm b_58 = t;
    int e_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_58 = ATgetArgument(t, 0);
            ATerm g_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_32, p_32);
        t = p_11(o_32, p_32, t);
        LocalPopChoice(e_58);
      }
    else
      {
        t = b_58;
        t = (ATerm) ATempty;
      }
  }
  s_107 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_32, p_32, (ATerm) ATinsert(CheckATermList(s_107), n_32));
  t = lookup_table_0_1(o_32, t);
  x_107 = t;
  t = (ATerm) ATinsert(CheckATermList(s_107), n_32);
  t_107 = t;
  t = x_107;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(p_32, t_107, u_107, t);
  t = r_107;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm e_108 = NULL,f_108 = NULL,g_108 = NULL,h_108 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_108 = NULL,j_108 = NULL,k_108 = NULL;
      t = term_y_56;
      t = m_0(t);
      i_108 = t;
      t = term_s_57;
      j_108 = t;
      t = term_t_57;
      k_108 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_57, term_t_57, i_108);
      t = q_11(j_108, k_108, i_108, t);
      _fail(t);
    }
  else
    {
      ATerm o_108 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_108 = ATgetFirst((ATermList) t);
          f_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_108;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_108 = ATgetFirst((ATermList) t);
          h_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_108;
      t = j_0(t);
      t = g_108;
      t = l_0(t);
      o_108 = t;
      t = (ATerm) ATinsert(CheckATermList(h_108), o_108);
    }
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm q_108 = NULL;
  q_108 = t;
  if(match_string(t, "--warning"))
    {
      t = q_108;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = q_108;
    }
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm r_108 = NULL,s_108 = NULL,t_108 = NULL;
  r_108 = t;
  t = term_h_58;
  s_108 = t;
  t = (ATerm) ATinsert(ATempty, r_108);
  t_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_58, (ATerm) ATinsert(ATempty, r_108));
  t = b_11(s_108, t_108, t);
  t = term_y_56;
  return(t);
}
static ATerm h_21 (ATerm t)
{
  t = term_i_58;
  return(t);
}
static ATerm i_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_21 (ATerm t)
{
  ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL;
  u_108 = t;
  t = term_s_29;
  v_108 = t;
  t = term_f_57;
  w_108 = t;
  t = term_j_58;
  t = s_11(v_108, w_108, t);
  t = u_108;
  return(t);
}
static ATerm n_21 (ATerm t)
{
  t = term_k_58;
  return(t);
}
static ATerm o_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_21 (ATerm t)
{
  ATerm x_108 = NULL,y_108 = NULL,z_108 = NULL;
  x_108 = t;
  t = term_s_29;
  y_108 = t;
  t = term_b_57;
  z_108 = t;
  t = term_l_58;
  t = s_11(y_108, z_108, t);
  t = x_108;
  return(t);
}
static ATerm r_21 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm m_58 = t;
  int n_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(s_20, t_20, h_21, t);
      LocalPopChoice(n_58);
    }
  else
    {
      t = m_58;
      {
        ATerm o_58 = t;
        int t_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(i_21, k_21, n_21, t);
            LocalPopChoice(t_58);
          }
        else
          {
            t = o_58;
            t = Option_3_0(o_21, p_21, r_21, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_109 = NULL,b_109 = NULL,c_109 = NULL,d_109 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_56;
  t = whoami_0_0(t);
  a_109 = t;
  t = term_f_27;
  c_109 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_58), a_109);
  d_109 = t;
  t = SSL_printnl(c_109, d_109);
  t = term_b_57;
  b_109 = t;
  t = SSL_exit(b_109);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm e_109 = NULL,f_109 = NULL;
  t = term_q_29;
  e_109 = t;
  t = term_v_58;
  f_109 = t;
  t = term_w_58;
  t = p_11(e_109, f_109, t);
  return(t);
}
static ATerm k_11 (ATerm w_29, ATerm x_29, ATerm t)
{
  ATerm x_58 = t;
  int y_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_29, x_29);
      LocalPopChoice(y_58);
    }
  else
    {
      t = x_58;
      t = SSL_addr(w_29, x_29);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm t)
{
  ATerm h_109 = NULL,i_109 = NULL,j_109 = NULL;
  h_109 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_109;
      t = h_104(t);
    }
  else
    {
      ATerm m_109 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_109 = ATgetFirst((ATermList) t);
          j_109 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_109;
      t = foldr_2_0(h_104, i_104, t);
      m_109 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_109, m_109);
      t = i_104(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm s_21 (ATerm t)
{
  t = term_f_57;
  return(t);
}
static ATerm u_21 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL;
  if(match_cons(t, sym__2))
    {
      z_39 = ATgetArgument(t, 0);
      a_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(z_39, a_40, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_109 = NULL,p_39 = NULL,u_39 = NULL;
  t = times_0_0(t);
  u_39 = t;
  t = SSL_explode_term(u_39);
  if(match_cons(t, sym__2))
    {
      ATerm z_58 = ATgetArgument(t, 0);
      p_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_39;
  t = foldr_2_0(s_21, u_21, t);
  p_109 = t;
  t = SSL_TicksToSeconds(p_109);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_110 = NULL,b_110 = NULL,c_110 = NULL;
  a_110 = t;
  if(match_cons(t, sym__2))
    {
      b_110 = ATgetArgument(t, 0);
      c_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_59 = t;
    int b_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_110;
        if((b_110 != t))
          {
            _fail(t);
          }
        t = a_110;
        LocalPopChoice(b_59);
      }
    else
      {
        t = a_59;
        t = (ATerm) ATmakeAppl(sym__2, b_110, c_110);
        {
          ATerm c_59 = t;
          int d_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_110, c_110);
              LocalPopChoice(d_59);
            }
          else
            {
              t = c_59;
              t = SSL_gtr(b_110, c_110);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_110, c_110);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_111 (ATerm), ATerm t)
{
  ATerm g_110 = NULL;
  g_110 = t;
  {
    ATerm f_59 = t;
    int g_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_110 = NULL,j_110 = NULL,k_110 = NULL;
        t = term_q_29;
        j_110 = t;
        t = term_e_57;
        k_110 = t;
        t = term_o_59;
        t = p_11(j_110, k_110, t);
        i_110 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_110, term_b_57);
        t = geq_0_0(t);
        t = g_110;
        t = t_111(t);
        LocalPopChoice(g_59);
      }
    else
      {
        t = f_59;
        t = g_110;
      }
  }
  return(t);
}
static ATerm y_21 (ATerm t)
{
  ATerm m_110 = NULL,n_110 = NULL,p_110 = NULL,q_110 = NULL;
  t = run_time_0_0(t);
  m_110 = t;
  t = term_y_56;
  t = whoami_0_0(t);
  n_110 = t;
  t = term_f_27;
  p_110 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_59), m_110), term_p_59), n_110);
  q_110 = t;
  t = SSL_printnl(p_110, q_110);
  t = (ATerm) ATmakeAppl(sym__2, term_f_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_59), m_110), term_p_59), n_110));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_21, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_110 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_57;
  r_110 = t;
  t = SSL_exit(r_110);
  return(t);
}
static ATerm g_22 (ATerm t)
{
  ATerm b_111 = NULL,c_111 = NULL;
  c_111 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_111;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_111 = ATgetArgument(t, 0);
          {
            ATerm y_40 = NULL,c_46 = NULL;
            t = SSLgetAnnotations(c_111);
            y_40 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_111);
            c_46 = t;
            t = SSLsetAnnotations(c_46, y_40);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_111;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_132 (ATerm), ATerm t)
{
  ATerm v_59 = t;
  int y_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_110 = NULL,v_110 = NULL;
      t = term_q_29;
      u_110 = t;
      t = term_z_59;
      v_110 = t;
      t = term_g_60;
      t = p_11(u_110, v_110, t);
      LocalPopChoice(y_59);
    }
  else
    {
      t = v_59;
      t = fetch_1_0(g_22, t);
    }
  t = r_132(t);
  return(t);
}
static ATerm t_11 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm e_111 = NULL;
  t = SSL_hashtable_put(i_37, g_37, h_37);
  e_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_111);
  return(t);
}
ATerm lookup_table_0_1 (ATerm a_34, ATerm t)
{
  ATerm n_111 = NULL;
  t = table_hashtable_0_0(t);
  n_111 = t;
  {
    ATerm h_60 = t;
    int i_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_41 = NULL;
        t = n_111;
        if(match_cons(t, sym_Hashtable_1))
          {
            s_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_11(a_34, s_41, t);
        LocalPopChoice(i_60);
      }
    else
      {
        t = h_60;
        {
          ATerm a_42 = NULL;
          t = a_34;
          t = table_create_0_0(t);
          t = n_111;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_42 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_11(a_34, a_42, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_37, ATerm p_37, ATerm t)
{
  ATerm q_111 = NULL;
  t = SSL_hashtable_create(o_37, p_37);
  q_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_111);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_111 = NULL,s_111 = NULL,u_111 = NULL,w_111 = NULL,x_111 = NULL;
  r_111 = t;
  t = term_j_60;
  w_111 = t;
  t = term_k_60;
  x_111 = t;
  t = r_111;
  t = new_hashtable_0_2(w_111, x_111, t);
  s_111 = t;
  t = r_111;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(r_111, s_111, u_111, t);
  t = r_111;
  return(t);
}
static ATerm m_11 (ATerm l_37, ATerm m_37, ATerm t)
{
  ATerm y_111 = NULL;
  t = SSL_hashtable_remove(m_37, l_37);
  y_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_111);
  return(t);
}
static ATerm n_11 (ATerm q_37, ATerm t)
{
  ATerm z_111 = NULL;
  t = SSL_hashtable_destroy(q_37);
  z_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_111);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm a_112 = NULL;
  t = SSL_table_hashtable();
  a_112 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_112);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm b_112 = NULL,c_112 = NULL,d_112 = NULL,e_112 = NULL;
  b_112 = t;
  t = table_hashtable_0_0(t);
  c_112 = t;
  t = lookup_table_0_1(b_112, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(e_112, t);
  t = c_112;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_11(b_112, d_112, t);
  t = b_112;
  return(t);
}
ATerm map_1_0 (ATerm z_101 (ATerm), ATerm t)
{
  static ATerm t_112 (ATerm t)
  {
    ATerm q_112 = NULL,r_112 = NULL,s_112 = NULL;
    q_112 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_112;
      }
    else
      {
        ATerm h_42 = NULL,q_42 = NULL,x_42 = NULL,f_46 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_112 = ATgetFirst((ATermList) t);
            s_112 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_112);
        h_42 = t;
        t = r_112;
        t = z_101(t);
        q_42 = t;
        t = s_112;
        t = t_112(t);
        x_42 = t;
        t = (ATerm) ATinsert(CheckATermList(x_42), q_42);
        f_46 = t;
        t = SSLsetAnnotations(f_46, h_42);
      }
    return(t);
  }
  t = t_112(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm w_112 = NULL,x_112 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_112 = ATgetFirst((ATermList) t);
      x_112 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_113 = NULL,c_113 = NULL;
        static ATerm h_22 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_113)), not_null(c_113));
          return(t);
        }
        t = x_112;
        t = h_0(t);
        if(((b_113 != NULL) && (b_113 != t)))
          _fail(t);
        else
          b_113 = t;
        t = w_112;
        t = g_0(t);
        if(((c_113 != NULL) && (c_113 != t)))
          _fail(t);
        else
          c_113 = t;
        t = x_112;
        t = reverse_acc_2_0(g_0, h_22, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_56;
      t = h_0(t);
    }
  return(t);
}
static ATerm i_22 (ATerm t)
{
  ATerm i_113 = NULL,j_113 = NULL,k_113 = NULL,r_46 = NULL;
  k_113 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_113);
  i_113 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_113);
  r_46 = t;
  t = SSLsetAnnotations(r_46, i_113);
  return(t);
}
static ATerm l_22 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_22 (ATerm t)
{
  ATerm m_113 = NULL;
  m_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_113), term_l_60);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_113 = NULL,f_113 = NULL;
  ATerm m_60 = t;
  int n_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_113 = NULL,h_113 = NULL;
      t = term_q_29;
      g_113 = t;
      t = term_v_58;
      h_113 = t;
      t = term_w_58;
      t = p_11(g_113, h_113, t);
      LocalPopChoice(n_60);
    }
  else
    {
      t = m_60;
      t = fetch_1_0(i_22, t);
    }
  t = term_o_60;
  t = echo_0_0(t);
  t = term_s_57;
  e_113 = t;
  t = term_t_57;
  f_113 = t;
  t = term_p_60;
  t = p_11(e_113, f_113, t);
  t = reverse_acc_2_0(_id, l_22, t);
  t = map_1_0(m_22, t);
  return(t);
}
ATerm fetch_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  static ATerm j_114 (ATerm t)
  {
    ATerm g_114 = NULL,h_114 = NULL,i_114 = NULL;
    g_114 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_114 = ATgetFirst((ATermList) t);
        i_114 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_60 = t;
      int r_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_43 = NULL,l_43 = NULL,y_46 = NULL;
          t = SSLgetAnnotations(g_114);
          i_43 = t;
          t = h_114;
          t = j_102(t);
          l_43 = t;
          t = (ATerm) ATinsert(CheckATermList(i_114), l_43);
          y_46 = t;
          t = SSLsetAnnotations(y_46, i_43);
          LocalPopChoice(r_60);
        }
      else
        {
          t = q_60;
          {
            ATerm d_44 = NULL,g_44 = NULL,z_46 = NULL;
            t = SSLgetAnnotations(g_114);
            d_44 = t;
            t = i_114;
            t = j_114(t);
            g_44 = t;
            t = (ATerm) ATinsert(CheckATermList(g_44), h_114);
            z_46 = t;
            t = SSLsetAnnotations(z_46, d_44);
          }
        }
    }
    return(t);
  }
  t = j_114(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_114 = NULL,o_114 = NULL,p_114 = NULL;
  n_114 = t;
  {
    ATerm s_60 = t;
    int t_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_114;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_60 = ATgetFirst((ATermList) t);
                ATerm v_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_114;
          }
        LocalPopChoice(t_60);
      }
    else
      {
        t = s_60;
        t = (ATerm) ATinsert(ATempty, n_114);
      }
  }
  o_114 = t;
  t = term_x_55;
  p_114 = t;
  t = SSL_printnl(p_114, o_114);
  t = n_114;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm t_114 = NULL,u_114 = NULL;
  t = term_q_29;
  t_114 = t;
  t = term_v_58;
  u_114 = t;
  t = term_w_58;
  t = p_11(t_114, u_114, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_11 (ATerm j_37, ATerm k_37, ATerm t)
{
  t = SSL_hashtable_get(k_37, j_37);
  return(t);
}
static ATerm p_11 (ATerm h_34, ATerm i_34, ATerm t)
{
  ATerm b_115 = NULL;
  t = lookup_table_0_1(h_34, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(i_34, b_115, t);
  return(t);
}
static ATerm r_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_22 (ATerm t)
{
  ATerm d_115 = NULL,e_115 = NULL;
  t = term_w_60;
  d_115 = t;
  t = term_y_56;
  e_115 = t;
  t = term_x_60;
  t = s_11(d_115, e_115, t);
  return(t);
}
static ATerm w_22 (ATerm t)
{
  t = term_y_60;
  return(t);
}
static ATerm x_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_22 (ATerm t)
{
  ATerm f_115 = NULL,g_115 = NULL,h_115 = NULL,i_115 = NULL;
  t = term_w_60;
  h_115 = t;
  t = term_y_56;
  i_115 = t;
  t = term_x_60;
  t = s_11(h_115, i_115, t);
  t = term_z_60;
  f_115 = t;
  t = term_y_56;
  g_115 = t;
  t = term_a_61;
  t = s_11(f_115, g_115, t);
  t = term_b_61;
  return(t);
}
static ATerm a_23 (ATerm t)
{
  t = term_c_61;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_61 = t;
  int e_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_22, t_22, w_22, t);
      LocalPopChoice(e_61);
    }
  else
    {
      t = d_61;
      t = Option_3_0(x_22, z_22, a_23, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t)
{
  ATerm j_115 = NULL,k_115 = NULL,l_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL,e_47 = NULL;
  o_115 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_115 = ATgetFirst((ATermList) t);
      l_115 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_115);
  j_115 = t;
  t = k_115;
  t = n_88(t);
  m_115 = t;
  t = l_115;
  t = o_88(t);
  n_115 = t;
  t = (ATerm) ATinsert(CheckATermList(n_115), m_115);
  e_47 = t;
  t = SSLsetAnnotations(e_47, j_115);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_134 (ATerm), ATerm t)
{
  ATerm u_115 = NULL,v_115 = NULL,w_115 = NULL,x_115 = NULL,z_115 = NULL,a_116 = NULL,j_47 = NULL;
  u_115 = t;
  {
    ATerm f_61 = t;
    int g_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_61;
        t = u_134(t);
        LocalPopChoice(g_61);
      }
    else
      {
        t = f_61;
      }
  }
  t = u_115;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_115 = ATgetFirst((ATermList) t);
      x_115 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_115);
  v_115 = t;
  t = term_v_58;
  a_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_58, w_115);
  t = s_11(a_116, w_115, t);
  t = x_115;
  {
    static ATerm k_116 (ATerm t)
    {
      ATerm i_61 = t;
      int n_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_61 = t;
          int r_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_116 = NULL;
              d_116 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_116;
              LocalPopChoice(r_61);
            }
          else
            {
              t = o_61;
              t = u_134(t);
              t = Cons_2_0(_id, k_116, t);
            }
          LocalPopChoice(n_61);
        }
      else
        {
          t = i_61;
          {
            ATerm g_116 = NULL,h_116 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_116 = ATgetFirst((ATermList) t);
                h_116 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_116), (ATerm) ATmakeAppl(sym_Undefined_1, g_116));
          }
        }
      return(t);
    }
    t = k_116(t);
  }
  z_115 = t;
  t = (ATerm) ATinsert(CheckATermList(z_115), (ATerm) ATmakeAppl(sym_Program_1, w_115));
  j_47 = t;
  t = SSLsetAnnotations(j_47, v_115);
  return(t);
}
static ATerm d_23 (ATerm t)
{
  ATerm c_117 = NULL;
  c_117 = t;
  if(match_string(t, "--help"))
    {
      t = c_117;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_117;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_117;
        }
    }
  return(t);
}
static ATerm f_23 (ATerm t)
{
  ATerm d_117 = NULL,e_117 = NULL;
  t = term_z_59;
  d_117 = t;
  t = term_y_56;
  e_117 = t;
  t = term_s_61;
  t = s_11(d_117, e_117, t);
  t = term_u_61;
  return(t);
}
static ATerm q_23 (ATerm t)
{
  t = term_v_61;
  return(t);
}
static ATerm r_23 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_134 (ATerm), ATerm t)
{
  ATerm p_116 = NULL,q_116 = NULL,r_116 = NULL,s_116 = NULL,t_116 = NULL,u_116 = NULL,v_116 = NULL,b_117 = NULL;
  r_116 = t;
  t = term_s_57;
  s_116 = t;
  t = term_w_61;
  t = lookup_table_0_1(s_116, t);
  b_117 = t;
  t = term_t_57;
  t_116 = t;
  t = (ATerm) ATempty;
  u_116 = t;
  t = b_117;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(t_116, u_116, v_116, t);
  t = r_116;
  {
    static ATerm c_23 (ATerm t)
    {
      ATerm x_61 = t;
      int y_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_134(t);
          LocalPopChoice(y_61);
        }
      else
        {
          t = x_61;
          {
            ATerm z_61 = t;
            int a_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_23, f_23, q_23, t);
                LocalPopChoice(a_62);
              }
            else
              {
                t = z_61;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_23, t);
  }
  {
    ATerm b_62 = t;
    int c_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_117 = NULL;
        p_117 = t;
        {
          ATerm f_62 = t;
          int g_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_44 = NULL;
              t = p_117;
              {
                ATerm h_62 = t;
                int i_62 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_44 = NULL,z_44 = NULL;
                    t = term_q_29;
                    y_44 = t;
                    t = term_z_59;
                    z_44 = t;
                    t = term_g_60;
                    t = p_11(y_44, z_44, t);
                    LocalPopChoice(i_62);
                  }
                else
                  {
                    t = h_62;
                    t = fetch_1_0(r_23, t);
                  }
              }
              t = p_117;
              t = default_system_usage_0_0(t);
              t = term_f_57;
              x_44 = t;
              t = SSL_exit(x_44);
              LocalPopChoice(g_62);
            }
          else
            {
              t = f_62;
              {
                ATerm g_45 = NULL,i_45 = NULL,j_45 = NULL;
                t = term_q_29;
                i_45 = t;
                t = term_w_60;
                j_45 = t;
                t = term_k_62;
                t = p_11(i_45, j_45, t);
                t = p_117;
                t = default_system_about_0_0(t);
                t = term_f_57;
                g_45 = t;
                t = SSL_exit(g_45);
              }
            }
        }
        LocalPopChoice(c_62);
      }
    else
      {
        t = b_62;
        {
          ATerm l_62 = t;
          int m_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_117 = NULL,r_117 = NULL,s_117 = NULL;
              static ATerm s_23 (ATerm t)
              {
                ATerm t_117 = NULL,u_117 = NULL,v_117 = NULL,m_47 = NULL;
                v_117 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_117 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_117);
                t_117 = t;
                t = u_117;
                if(((p_116 != NULL) && (p_116 != t)))
                  _fail(t);
                else
                  p_116 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_117);
                m_47 = t;
                t = SSLsetAnnotations(m_47, t_117);
                return(t);
              }
              t = fetch_1_0(s_23, t);
              t = term_f_27;
              r_117 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_116)), term_n_62);
              s_117 = t;
              t = SSL_printnl(r_117, s_117);
              t = (ATerm) ATmakeAppl(sym__2, term_f_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_116)), term_n_62));
              t = default_system_usage_0_0(t);
              t = term_b_57;
              q_117 = t;
              t = SSL_exit(q_117);
              LocalPopChoice(m_62);
            }
          else
            {
              t = l_62;
            }
        }
      }
  }
  q_116 = t;
  t = term_s_57;
  t = table_destroy_0_0(t);
  t = q_116;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm t)
{
  ATerm a_118 = NULL,b_118 = NULL,c_118 = NULL,d_118 = NULL,e_118 = NULL;
  t = parse_options_1_0(t_132, t);
  a_118 = t;
  t = term_o_62;
  t = table_create_0_0(t);
  t = term_o_62;
  b_118 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_62, term_r_62, a_118);
  t = lookup_table_0_1(b_118, t);
  e_118 = t;
  t = term_r_62;
  c_118 = t;
  t = e_118;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(c_118, a_118, d_118, t);
  t = a_118;
  t = v_132(t);
  {
    ATerm s_62 = t;
    int t_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_132, t);
        LocalPopChoice(t_62);
      }
    else
      {
        t = s_62;
        {
          ATerm u_62 = t;
          int x_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_132(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_62);
            }
          else
            {
              t = u_62;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm u_23 (ATerm t)
{
  ATerm y_62 = t;
  int z_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = stratego_warnings_options_0_0(t);
      LocalPopChoice(z_62);
    }
  else
    {
      t = y_62;
      {
        ATerm a_63 = t;
        int b_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(b_63);
          }
        else
          {
            t = a_63;
            {
              ATerm c_63 = t;
              int d_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(d_63);
                }
              else
                {
                  t = c_63;
                  {
                    ATerm e_63 = t;
                    int f_63 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(x_23, y_23, a_24, t);
                        LocalPopChoice(f_63);
                      }
                    else
                      {
                        t = e_63;
                        {
                          ATerm g_63 = t;
                          int h_63 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(h_63);
                            }
                          else
                            {
                              t = g_63;
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
static ATerm v_23 (ATerm t)
{
  t = input_1_0(b_24, t);
  return(t);
}
static ATerm x_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_23 (ATerm t)
{
  ATerm g_118 = NULL,h_118 = NULL;
  t = term_a_56;
  g_118 = t;
  t = term_y_56;
  h_118 = t;
  t = term_i_63;
  t = s_11(g_118, h_118, t);
  t = term_j_63;
  return(t);
}
static ATerm a_24 (ATerm t)
{
  t = term_k_63;
  return(t);
}
static ATerm b_24 (ATerm t)
{
  t = output_1_0(c_24, t);
  return(t);
}
static ATerm c_24 (ATerm t)
{
  ATerm j_118 = NULL;
  j_118 = t;
  t = spec_use_def_0_0(t);
  t = j_118;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(u_23, default_usage_0_0, _id, v_23, t);
  return(t);
}
