#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_OpDecl_2;
Symbol sym_Sort_2;
Symbol sym_Constructors_1;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Anno_2;
Symbol sym_App_2;
Symbol sym_BuildDefault_1;
Symbol sym_Con_3;
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
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_Where_1;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
Symbol sym_Overlay_3;
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Anno_2;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Hashtable_1;
Symbol sym_Con_3;
Symbol sym_DynamicRules_1;
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
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
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
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
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
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
}
ATerm term_f_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_l_51;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_q_50;
ATerm term_l_50;
ATerm term_k_50;
ATerm term_j_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_l_49;
ATerm term_k_49;
ATerm term_j_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_j_47;
ATerm term_g_47;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_a_46;
ATerm term_x_45;
ATerm term_s_45;
ATerm term_h_45;
ATerm term_o_32;
ATerm term_l_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_d_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_u_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_t_25;
ATerm term_p_25;
ATerm term_m_24;
ATerm term_y_23;
ATerm term_s_23;
ATerm term_o_23;
ATerm term_k_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_v_22;
ATerm term_o_20;
ATerm term_l_20;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Sort_2, term_m_17, (ATerm) ATempty);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_ConstType_1, term_n_17);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_23);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_25);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_26);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_Var_1, term_s_31);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Var_1, term_w_31);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Anno_2, term_u_31, term_x_31);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Var_1, term_z_31);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Var_1, term_b_32);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_Anno_2, term_a_32, term_d_32);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_31);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Call_2, term_g_32, (ATerm) ATempty);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_BAM_3, term_h_32, term_u_31, term_a_32);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_31);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_Call_2, term_j_32, (ATerm) ATempty);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_BAM_3, term_l_32, term_x_31, term_d_32);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_31);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym__2, term_a_46, term_e_46);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(sym__2, term_a_46, term_j_46);
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(sym__2, term_a_46, term_p_47);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(sym__2, term_y_47, term_v_22);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_22);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(sym__2, term_d_48, term_o_20);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym__2, term_a_46, term_y_48);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(sym__2, term_a_46, term_y_47);
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(sym__2, term_a_46, term_o_49);
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(sym__2, term_p_48, term_q_48);
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(sym__2, term_f_50, term_o_20);
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(sym__2, term_i_50, term_o_20);
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(sym__2, term_o_49, term_o_20);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(sym__3, term_p_48, term_q_48, (ATerm) ATempty);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym__2, term_a_46, term_f_50);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(sym__2, term_j_46, term_o_20);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm h_0 (ATerm t);
ATerm DesugarDefaultVarDec_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm o_107 (ATerm), ATerm t);
static ATerm z_7 (ATerm q_28, ATerm t);
static ATerm a_8 (ATerm n_28, ATerm t);
ATerm HL_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm s_108 (ATerm), ATerm t);
static ATerm b_8 (ATerm g_26, ATerm h_26, ATerm i_26, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm ListVarScope_0_0 (ATerm t);
static ATerm d_8 (ATerm m_69, ATerm n_69, ATerm t);
static ATerm i_16 (ATerm o_15, ATerm t);
static ATerm j_16 (ATerm t_15, ATerm t);
static ATerm o_16 (ATerm v_15, ATerm t);
static ATerm p_16 (ATerm y_15, ATerm t);
static ATerm u_16 (ATerm c_16, ATerm t);
ATerm CongDefined_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm MkCongDef_0_0 (ATerm t);
ATerm filter_1_0 (ATerm s_121 (ATerm), ATerm t);
static ATerm i_8 (ATerm g_69, ATerm h_69, ATerm t);
ATerm end_scope_1_0 (ATerm v_126 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm u_126 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm w_126 (ATerm), ATerm x_126 (ATerm), ATerm t);
static ATerm j_8 (ATerm y_126 (ATerm), ATerm s_52, ATerm q_52, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm RegisterCongDef_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm k_8 (ATerm n_22, ATerm o_22, ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm DeclareVariables_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm RDtoSD_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm m_8 (ATerm l_22, ATerm m_22, ATerm t);
static ATerm e_4 (ATerm t);
static ATerm n_8 (ATerm p_22, ATerm q_22, ATerm t);
ATerm at_end_1_0 (ATerm r_114 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm v_47 (ATerm h_47, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm dynrule_cong_6_0 (ATerm p_139 (ATerm), ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm u_139 (ATerm), ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm tpaste_1_0 (ATerm e_139 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm f_139 (ATerm), ATerm g_139 (ATerm), ATerm h_139 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm o_139 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm r_8 (ATerm a_118 (ATerm), ATerm h_39, ATerm g_39, ATerm t);
ATerm foldr_3_0 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t);
static ATerm s_8 (ATerm d_118 (ATerm), ATerm e_118 (ATerm), ATerm l_39, ATerm k_39, ATerm t);
static ATerm t_8 (ATerm v_117 (ATerm), ATerm f_39, ATerm e_39, ATerm t);
static ATerm y_7 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm v_8 (ATerm c_732, ATerm h_732, ATerm f_76, ATerm t);
ATerm while_not_2_0 (ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm t);
ATerm for_3_0 (ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm s_85 (ATerm l_84, ATerm m_84, ATerm n_84, ATerm t);
static ATerm s_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm l_10 (ATerm t);
ATerm free_vars_3_0 (ATerm v_136 (ATerm), ATerm w_136 (ATerm), ATerm x_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm p_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm a_11 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm v_84 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm y_8 (ATerm q_135 (ATerm), ATerm r_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm m_74, ATerm l_74, ATerm k_74, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm z_8 (ATerm k_135 (ATerm), ATerm l_135 (ATerm (ATerm), ATerm), ATerm e_74, ATerm h_74, ATerm t);
ATerm env_alltd_1_0 (ATerm e_112 (ATerm), ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_6_0 (ATerm r_134 (ATerm), ATerm s_134 (ATerm (ATerm), ATerm), ATerm t_134 (ATerm), ATerm u_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_134 (ATerm (ATerm), ATerm), ATerm w_134 (ATerm), ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
ATerm tsubstitute_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm h_116 (ATerm), ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm h_9 (ATerm q_105 (ATerm), ATerm t_23, ATerm u_23, ATerm t);
ATerm Trm_to_Cong_0_0 (ATerm t);
ATerm trm_to_cong_0_0 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm o_8 (ATerm a_24, ATerm d_24, ATerm c_24, ATerm t);
static ATerm s_12 (ATerm t);
static ATerm i_9 (ATerm r_22, ATerm t_22, ATerm s_22, ATerm t);
static ATerm j_9 (ATerm i_48, ATerm j_48, ATerm t);
static ATerm k_9 (ATerm y_33, ATerm z_33, ATerm t);
static ATerm m_9 (ATerm r_113 (ATerm), ATerm y_238, ATerm e_34, ATerm t);
static ATerm l_9 (ATerm u_33, ATerm v_33, ATerm t);
static ATerm v_12 (ATerm t);
static ATerm x_12 (ATerm t);
ATerm output_1_0 (ATerm p_132 (ATerm), ATerm t);
static ATerm p_96 (ATerm j_96, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_9 (ATerm a_34, ATerm t);
static ATerm o_9 (ATerm b_47, ATerm c_47, ATerm t);
static ATerm p_9 (ATerm k_48, ATerm l_48, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_98 (ATerm z_96, ATerm t);
static ATerm b_98 (ATerm d_97, ATerm e_97, ATerm f_97, ATerm t);
static ATerm c_98 (ATerm n_97, ATerm o_97, ATerm p_97, ATerm t);
static ATerm q_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm q_132 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_9 (ATerm g_64, ATerm h_64, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm k_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_9 (ATerm b_69, ATerm c_69, ATerm a_69, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_9 (ATerm e_51, ATerm f_51, ATerm t);
ATerm foldr_2_0 (ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm q_129 (ATerm), ATerm t);
static ATerm z_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_15 (ATerm t);
ATerm need_help_1_0 (ATerm g_132 (ATerm), ATerm t);
static ATerm a_10 (ATerm g_73, ATerm h_73, ATerm i_73, ATerm t);
ATerm lookup_table_0_1 (ATerm n_70, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_73, ATerm p_73, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_9 (ATerm l_73, ATerm m_73, ATerm t);
static ATerm u_9 (ATerm q_73, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm a_114 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm r_15 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_114 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm b_10 (ATerm j_73, ATerm k_73, ATerm t);
static ATerm w_9 (ATerm u_70, ATerm v_70, ATerm t);
static ATerm u_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm k_16 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_92 (ATerm), ATerm z_92 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_134 (ATerm), ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
ATerm parse_options_1_0 (ATerm i_134 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_132 (ATerm), ATerm j_132 (ATerm), ATerm k_132 (ATerm), ATerm l_132 (ATerm), ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL;
  i_1 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_1 = ATgetArgument(t, 0);
      {
        ATerm d_12 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, h_1, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_17), term_o_17));
            LocalPopChoice(l_17);
          }
        else
          {
            t = d_12;
            t = i_1;
          }
      }
    }
  else
    {
      t = i_1;
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL;
  n_1 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_1 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, m_1, term_o_17);
    }
  else
    {
      t = n_1;
    }
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL;
  g_2 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_2 = ATgetArgument(t, 0);
      {
        ATerm p_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, f_2, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_17), term_o_17));
            LocalPopChoice(q_17);
          }
        else
          {
            t = p_17;
            t = g_2;
          }
      }
    }
  else
    {
      t = g_2;
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  l_2 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_2 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, k_2, term_o_17);
    }
  else
    {
      t = l_2;
    }
  return(t);
}
ATerm DesugarDefaultVarDec_0_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      y_0 = ATgetArgument(t, 0);
      z_0 = ATgetArgument(t, 1);
      a_1 = ATgetArgument(t, 2);
      {
        ATerm e_1 = NULL,g_1 = NULL;
        t = z_0;
        t = map_1_0(a_0, t);
        e_1 = t;
        t = a_1;
        t = map_1_0(b_0, t);
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym_ExtSDef_3, y_0, e_1, g_1);
      }
    }
  else
    {
      ATerm b_2 = NULL,e_2 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          y_0 = ATgetArgument(t, 0);
          z_0 = ATgetArgument(t, 1);
          a_1 = ATgetArgument(t, 2);
          b_1 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = z_0;
      t = map_1_0(f_0, t);
      b_2 = t;
      t = a_1;
      t = map_1_0(h_0, t);
      e_2 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, y_0, b_2, e_2, b_1);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  static ATerm q_0 (ATerm t)
  {
    t = topdown_1_0(o_107, t);
    return(t);
  }
  t = o_107(t);
  t = SRTS_all(q_0, t);
  return(t);
}
static ATerm z_7 (ATerm q_28, ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL;
  t = q_28;
  {
    static ATerm r_0 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm s_17 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) s_17) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm t_17 = ATgetArgument(t, 1);
            if(((ATgetType(t_17) == AT_LIST) && !(ATisEmpty(t_17))))
              {
                ATerm u_17 = ATgetFirst((ATermList) t_17);
                if(match_cons(u_17, sym_Var_1))
                  {
                    ATerm o_18 = ATgetArgument(u_17, 0);
                    if(match_cons(o_18, sym_ListVar_1))
                      {
                        if(((p_2 != NULL) && (p_2 != ATgetArgument(o_18, 0))))
                          _fail(ATgetArgument(o_18, 0));
                        else
                          p_2 = ATgetArgument(o_18, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm x_17 = (ATerm) ATgetNext((ATermList) t_17);
                  if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
                    {
                      ATerm p_18 = ATgetFirst((ATermList) x_17);
                      if(match_cons(p_18, sym_Op_2))
                        {
                          ATerm s_18 = ATgetArgument(p_18, 0);
                          if((ATgetSymbol((ATermAppl) s_18) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm t_18 = ATgetArgument(p_18, 1);
                            if(((ATgetType(t_18) != AT_LIST) || !(ATisEmpty(t_18))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm q_18 = (ATerm) ATgetNext((ATermList) x_17);
                        if(((ATgetType(q_18) != AT_LIST) || !(ATisEmpty(q_18))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, p_2);
      return(t);
    }
    t = oncetd_1_0(r_0, t);
  }
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, q_2);
  return(t);
}
static ATerm a_8 (ATerm n_28, ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL;
  t = n_28;
  {
    static ATerm s_0 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm u_18 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) u_18) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm x_18 = ATgetArgument(t, 1);
            if(((ATgetType(x_18) == AT_LIST) && !(ATisEmpty(x_18))))
              {
                ATerm y_18 = ATgetFirst((ATermList) x_18);
                if(match_cons(y_18, sym_Var_1))
                  {
                    ATerm a_19 = ATgetArgument(y_18, 0);
                    if(match_cons(a_19, sym_ListVar_1))
                      {
                        if(((u_2 != NULL) && (u_2 != ATgetArgument(a_19, 0))))
                          _fail(ATgetArgument(a_19, 0));
                        else
                          u_2 = ATgetArgument(a_19, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm z_18 = (ATerm) ATgetNext((ATermList) x_18);
                  if(((ATgetType(z_18) == AT_LIST) && !(ATisEmpty(z_18))))
                    {
                      ATerm b_19 = ATgetFirst((ATermList) z_18);
                      if(match_cons(b_19, sym_Op_2))
                        {
                          ATerm d_19 = ATgetArgument(b_19, 0);
                          if((ATgetSymbol((ATermAppl) d_19) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm e_19 = ATgetArgument(b_19, 1);
                            if(((ATgetType(e_19) != AT_LIST) || !(ATisEmpty(e_19))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm c_19 = (ATerm) ATgetNext((ATermList) z_18);
                        if(((ATgetType(c_19) != AT_LIST) || !(ATisEmpty(c_19))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, u_2);
      return(t);
    }
    t = oncetd_1_0(s_0, t);
  }
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, v_2);
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,f_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      f_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, f_3, g_3);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          f_3 = ATgetArgument(t, 0);
          t = f_3;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_3 = ATgetFirst((ATermList) t);
              c_3 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, b_3, (ATerm) ATmakeAppl(sym_LChoices_1, c_3));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_f_19;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              f_3 = ATgetArgument(t, 0);
              t = f_3;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_3 = ATgetFirst((ATermList) t);
                  c_3 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, b_3, (ATerm) ATmakeAppl(sym_Choices_1, c_3));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_f_19;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  f_3 = ATgetArgument(t, 0);
                  t = f_3;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      b_3 = ATgetFirst((ATermList) t);
                      c_3 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_3, (ATerm) ATmakeAppl(sym_Seqs_1, c_3));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_g_19;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      f_3 = ATgetArgument(t, 0);
                      g_3 = ATgetArgument(t, 1);
                      d_3 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, g_3, (ATerm) ATmakeAppl(sym_Op_2, term_h_19, (ATerm) ATinsert(ATinsert(ATempty, d_3), f_3)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          f_3 = ATgetArgument(t, 0);
                          g_3 = ATgetArgument(t, 1);
                          d_3 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, d_3)), f_3), (ATerm) ATmakeAppl(sym_Build_1, g_3)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              f_3 = ATgetArgument(t, 0);
                              g_3 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_3, (ATerm) ATmakeAppl(sym_Match_1, g_3));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  f_3 = ATgetArgument(t, 0);
                                  g_3 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_3), g_3);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      f_3 = ATgetArgument(t, 0);
                                      g_3 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_3), f_3);
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
ATerm repeat_2_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm t)
{
  static ATerm g_4 (ATerm t)
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_106(t);
        t = g_4(t);
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        t = p_106(t);
      }
    return(t);
  }
  t = g_4(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,l_5 = NULL,m_5 = NULL;
  m_5 = t;
  if(match_cons(t, sym_Con_3))
    {
      i_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
      l_5 = ATgetArgument(t, 2);
      {
        ATerm m_0 = NULL,m_4 = NULL;
        t = SSLgetAnnotations(m_5);
        m_0 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, i_5, j_5, l_5);
        m_4 = t;
        t = SSLsetAnnotations(m_4, m_0);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = m_5;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm k_19 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(u_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_19;
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,v_6 = NULL,w_6 = NULL;
  r_6 = t;
  if(match_cons(t, sym_Con_3))
    {
      v_6 = ATgetArgument(t, 0);
      w_6 = ATgetArgument(t, 1);
      q_6 = ATgetArgument(t, 2);
      {
        ATerm c_2 = NULL,o_4 = NULL;
        t = SSLgetAnnotations(r_6);
        c_2 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, v_6, w_6, q_6);
        o_4 = t;
        t = SSLsetAnnotations(o_4, c_2);
      }
    }
  else
    {
      ATerm a_4 = NULL,r_4 = NULL;
      if(match_cons(t, sym_App_2))
        {
          v_6 = ATgetArgument(t, 0);
          w_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_6);
      a_4 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, v_6, w_6);
      r_4 = t;
      t = SSLsetAnnotations(r_4, a_4);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm l_19 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(w_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_19;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm e_7 = NULL,g_7 = NULL,i_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      e_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7;
  if(match_cons(t, sym_StratRule_3))
    {
      g_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
      l_7 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_7), (ATerm) ATmakeAppl(sym_Where_1, l_7)), g_7));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          g_7 = ATgetArgument(t, 0);
          i_7 = ATgetArgument(t, 1);
          l_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_7;
      t = pureterm_0_0(t);
      t = i_7;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, i_7)), (ATerm) ATmakeAppl(sym_Where_1, l_7)), (ATerm) ATmakeAppl(sym_Match_1, g_7)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm s_108 (ATerm), ATerm t)
{
  static ATerm e_8 (ATerm t)
  {
    ATerm m_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_108(t);
        LocalPopChoice(o_19);
      }
    else
      {
        t = m_19;
        t = SRTS_one(e_8, t);
      }
    return(t);
  }
  t = e_8(t);
  return(t);
}
static ATerm b_8 (ATerm g_26, ATerm h_26, ATerm i_26, ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL,l_8 = NULL,w_8 = NULL,b_9 = NULL,c_9 = NULL;
  t = new_0_0(t);
  w_8 = t;
  t = g_26;
  {
    static ATerm x_0 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm p_19 = ATgetArgument(t, 0);
          if(match_cons(p_19, sym_Var_1))
            {
              if(((l_8 != NULL) && (l_8 != ATgetArgument(p_19, 0))))
                _fail(ATgetArgument(p_19, 0));
              else
                l_8 = ATgetArgument(p_19, 0);
            }
          else
            _fail(t);
          if(((g_8 != NULL) && (g_8 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            g_8 = ATgetArgument(t, 1);
          {
            ATerm s_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, l_8);
      return(t);
    }
    t = oncetd_1_0(x_0, t);
  }
  b_9 = t;
  t = h_26;
  {
    static ATerm c_1 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm t_19 = ATgetArgument(t, 0);
          if(match_cons(t_19, sym_Var_1))
            {
              if(((l_8 != NULL) && (l_8 != ATgetArgument(t_19, 0))))
                _fail(ATgetArgument(t_19, 0));
              else
                l_8 = ATgetArgument(t_19, 0);
            }
          else
            _fail(t);
          if(((h_8 != NULL) && (h_8 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_8 = ATgetArgument(t, 1);
          {
            ATerm u_19 = ATgetArgument(t, 2);
            if(match_cons(u_19, sym_CallT_3))
              {
                if(((f_8 != NULL) && (f_8 != ATgetArgument(u_19, 0))))
                  _fail(ATgetArgument(u_19, 0));
                else
                  f_8 = ATgetArgument(u_19, 0);
                {
                  ATerm v_19 = ATgetArgument(u_19, 1);
                  if(((ATgetType(v_19) != AT_LIST) || !(ATisEmpty(v_19))))
                    _fail(t);
                }
                {
                  ATerm z_19 = ATgetArgument(u_19, 2);
                  if(((ATgetType(z_19) != AT_LIST) || !(ATisEmpty(z_19))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, w_8);
      return(t);
    }
    t = oncetd_1_0(c_1, t);
  }
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_8), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, b_9, c_9, (ATerm) ATmakeAppl(sym_Seq_2, i_26, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(f_8), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_8), not_null(h_8), term_g_19))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_8)), (ATerm) ATmakeAppl(sym_Var_1, w_8))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm b_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_20 = t;
      int h_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,h_11 = NULL,p_11 = NULL;
          z_10 = t;
          if(match_cons(t, sym_SRule_1))
            {
              h_11 = ATgetArgument(t, 0);
              t = h_11;
              if(match_cons(t, sym_Rule_3))
                {
                  v_10 = ATgetArgument(t, 0);
                  x_10 = ATgetArgument(t, 1);
                  y_10 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = z_10;
              t = b_8(v_10, x_10, y_10, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm u_4 = NULL,z_4 = NULL,x_4 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  h_11 = ATgetArgument(t, 0);
                  p_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_10);
              u_4 = t;
              t = p_11;
              t = desugarRule_0_0(t);
              z_4 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, h_11, z_4);
              x_4 = t;
              t = SSLsetAnnotations(x_4, u_4);
            }
          LocalPopChoice(h_20);
        }
      else
        {
          t = g_20;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(d_20);
    }
  else
    {
      t = b_20;
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm a_14 = NULL,f_14 = NULL;
  f_14 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      a_14 = ATgetArgument(t, 0);
      t = a_14;
    }
  else
    {
      t = f_14;
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm m_14 = NULL,v_14 = NULL;
  v_14 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      m_14 = ATgetArgument(t, 0);
      t = m_14;
    }
  else
    {
      t = v_14;
    }
  return(t);
}
ATerm ListVarScope_0_0 (ATerm t)
{
  ATerm c_13 = NULL,h_13 = NULL,k_13 = NULL,r_13 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      k_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
      c_13 = ATgetArgument(t, 2);
      h_13 = ATgetArgument(t, 3);
      {
        ATerm z_13 = NULL;
        t = c_13;
        t = map_1_0(d_1, t);
        z_13 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, k_13, r_13, z_13, h_13);
      }
    }
  else
    {
      ATerm l_14 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          k_13 = ATgetArgument(t, 0);
          r_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_13;
      t = map_1_0(f_1, t);
      l_14 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, l_14, r_13);
    }
  return(t);
}
static ATerm d_8 (ATerm m_69, ATerm n_69, ATerm t)
{
  ATerm c_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_69, n_69);
  t = w_9(m_69, n_69, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_15 = ATgetFirst((ATermList) t);
      {
        ATerm i_20 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_15;
  return(t);
}
static ATerm i_16 (ATerm o_15, ATerm t)
{
  ATerm h_5 = NULL;
  t = term_l_20;
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, o_15);
  t = d_8(h_5, o_15, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_20) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_o_20;
  return(t);
}
static ATerm j_16 (ATerm t_15, ATerm t)
{
  ATerm p_5 = NULL;
  t = term_l_20;
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, t_15);
  t = d_8(p_5, t_15, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm u_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_20) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_o_20;
  return(t);
}
static ATerm o_16 (ATerm v_15, ATerm t)
{
  ATerm u_5 = NULL;
  t = term_l_20;
  u_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, v_15);
  t = d_8(u_5, v_15, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_20) != ATmakeSymbol("i_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_o_20;
  return(t);
}
static ATerm p_16 (ATerm y_15, ATerm t)
{
  ATerm g_6 = NULL;
  t = term_l_20;
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, y_15);
  t = d_8(g_6, y_15, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm a_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_21) != ATmakeSymbol("e_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_o_20;
  return(t);
}
static ATerm u_16 (ATerm c_16, ATerm t)
{
  ATerm k_6 = NULL;
  t = term_l_20;
  k_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, c_16);
  t = d_8(k_6, c_16, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm e_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_21) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_o_20;
  return(t);
}
ATerm CongDefined_0_0 (ATerm t)
{
  ATerm e_16 = NULL,h_16 = NULL;
  e_16 = t;
  if(match_cons(t, sym__2))
    {
      ATerm g_21 = ATgetArgument(t, 0);
      h_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_16;
  if(match_int(t, 0))
    {
      ATerm k_21 = t;
      int m_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_16(e_16, t);
          LocalPopChoice(m_21);
        }
      else
        {
          t = k_21;
          {
            ATerm n_21 = t;
            int o_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = j_16(e_16, t);
                LocalPopChoice(o_21);
              }
            else
              {
                t = n_21;
                {
                  ATerm p_21 = t;
                  int q_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = o_16(e_16, t);
                      LocalPopChoice(q_21);
                    }
                  else
                    {
                      t = p_21;
                      {
                        ATerm a_22 = t;
                        int b_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = p_16(e_16, t);
                            LocalPopChoice(b_22);
                          }
                        else
                          {
                            t = a_22;
                            t = u_16(e_16, t);
                          }
                      }
                    }
                }
              }
          }
        }
    }
  else
    {
      ATerm c_22 = t;
      int d_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_16(e_16, t);
          LocalPopChoice(d_22);
        }
      else
        {
          t = c_22;
          {
            ATerm e_22 = t;
            int g_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = j_16(e_16, t);
                LocalPopChoice(g_22);
              }
            else
              {
                t = e_22;
                {
                  ATerm h_22 = t;
                  int u_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = o_16(e_16, t);
                      LocalPopChoice(u_22);
                    }
                  else
                    {
                      t = h_22;
                      t = p_16(e_16, t);
                    }
                }
              }
          }
        }
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_v_22;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL;
  if(match_cons(t, sym__2))
    {
      s_7 = ATgetArgument(t, 0);
      t_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(s_7, t_7, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_x_22;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_l_20;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_22;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_7 = ATgetFirst((ATermList) t);
      v_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_7, v_7);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm w_7 = NULL,c_8 = NULL,p_8 = NULL,q_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_22 = ATgetArgument(t, 0);
      if(match_cons(z_22, sym__2))
        {
          w_7 = ATgetArgument(z_22, 0);
          c_8 = ATgetArgument(z_22, 1);
        }
      else
        _fail(t);
      {
        ATerm a_23 = ATgetArgument(t, 1);
        if(match_cons(a_23, sym__2))
          {
            p_8 = ATgetArgument(a_23, 0);
            q_8 = ATgetArgument(a_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_8), w_7), (ATerm) ATinsert(CheckATermList(q_8), c_8));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm u_8 = NULL;
  t = new_0_0(t);
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, u_8, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_17), term_o_17)), u_8);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm x_8 = NULL;
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_8), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm MkCongDef_0_0 (ATerm t)
{
  ATerm n_19 = NULL,q_19 = NULL,r_19 = NULL,w_19 = NULL,x_19 = NULL;
  q_19 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      r_19 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_19;
  if(match_cons(t, sym_FunType_2))
    {
      x_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
      {
        ATerm c_7 = NULL,h_7 = NULL,j_7 = NULL,k_7 = NULL,p_7 = NULL,q_7 = NULL;
        t = x_19;
        t = foldr_3_0(j_1, k_1, l_1, t);
        c_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_19, c_7);
        {
          ATerm d_23 = t;
          if((PushChoice() == 0))
            {
              t = CongDefined_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_23;
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, r_19, c_7);
        p_7 = t;
        t = term_o_23;
        q_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_19, c_7), term_o_23);
        t = j_8(o_1, p_7, q_7, t);
        t = x_19;
        t = genzip_4_0(p_1, q_1, r_1, s_1, t);
        if(match_cons(t, sym__2))
          {
            h_7 = ATgetArgument(t, 0);
            j_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_7;
        t = map_1_0(t_1, t);
        k_7 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, r_19, h_7, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, r_19, k_7));
      }
    }
  else
    {
      ATerm y_9 = NULL,c_10 = NULL;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm q_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, r_19, term_v_22);
      {
        ATerm r_23 = t;
        if((PushChoice() == 0))
          {
            t = CongDefined_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_23;
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, r_19, term_v_22);
      y_9 = t;
      t = term_y_23;
      c_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_19, term_v_22), term_y_23);
      t = j_8(u_1, y_9, c_10, t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, r_19, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, r_19, (ATerm) ATempty));
    }
  return(t);
}
ATerm filter_1_0 (ATerm s_121 (ATerm), ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_20;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_20 = ATgetFirst((ATermList) t);
          y_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm z_23 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_10 = NULL,s_10 = NULL,t_10 = NULL,g_5 = NULL;
            t = SSLgetAnnotations(w_20);
            k_10 = t;
            t = x_20;
            t = s_121(t);
            s_10 = t;
            t = y_20;
            t = filter_1_0(s_121, t);
            t_10 = t;
            t = (ATerm) ATinsert(CheckATermList(t_10), s_10);
            g_5 = t;
            t = SSLsetAnnotations(g_5, k_10);
            LocalPopChoice(f_24);
          }
        else
          {
            t = z_23;
            t = y_20;
            t = filter_1_0(s_121, t);
          }
      }
    }
  return(t);
}
static ATerm i_8 (ATerm g_69, ATerm h_69, ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  c_21 = t;
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_69, h_69);
        t = w_9(g_69, h_69, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_24 = ATgetFirst((ATermList) t);
            b_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(h_24);
        {
          ATerm h_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, g_69, h_69, b_21);
          t = lookup_table_0_1(g_69, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              h_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_10(h_69, b_21, h_21, t);
          t = (ATerm) ATmakeAppl(sym__3, g_69, h_69, b_21);
        }
      }
    else
      {
        t = g_24;
        {
          ATerm l_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, g_69, h_69);
          t = lookup_table_0_1(g_69, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_9(h_69, l_21, t);
          t = (ATerm) ATmakeAppl(sym__2, g_69, h_69);
        }
      }
  }
  t = c_21;
  return(t);
}
ATerm end_scope_1_0 (ATerm v_126 (ATerm), ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
  u_21 = t;
  t = v_126(t);
  t_21 = t;
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_21 = NULL;
        t = term_m_24;
        y_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_21, term_m_24);
        t = w_9(t_21, y_21, t);
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_21 = ATgetFirst((ATermList) t);
      r_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_21, term_m_24, r_21);
  t = lookup_table_0_1(t_21, t);
  x_21 = t;
  t = term_m_24;
  v_21 = t;
  t = x_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_10(v_21, r_21, w_21, t);
  t = s_21;
  {
    static ATerm v_1 (ATerm t)
    {
      ATerm z_21 = NULL;
      z_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_21, z_21);
      t = i_8(t_21, z_21, t);
      return(t);
    }
    t = map_1_0(v_1, t);
  }
  t = u_21;
  return(t);
}
ATerm restore_always_2_0 (ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm t)
{
  ATerm n_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_106(t);
      t = l_106(t);
      LocalPopChoice(p_24);
    }
  else
    {
      t = n_24;
      t = l_106(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm u_126 (ATerm), ATerm t)
{
  ATerm f_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,m_23 = NULL,n_23 = NULL,p_23 = NULL;
  i_22 = t;
  t = u_126(t);
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_22, term_m_24);
  {
    ATerm v_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_25 = ATgetArgument(t, 0);
            ATerm b_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_m_24;
        w_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_22, term_m_24);
        t = w_9(f_22, w_23, t);
        LocalPopChoice(x_24);
      }
    else
      {
        t = v_24;
        t = (ATerm) ATempty;
      }
  }
  j_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_22, term_m_24, (ATerm) ATinsert(CheckATermList(j_22), (ATerm) ATempty));
  t = lookup_table_0_1(f_22, t);
  p_23 = t;
  t = term_m_24;
  k_22 = t;
  t = (ATerm) ATinsert(CheckATermList(j_22), (ATerm) ATempty);
  m_23 = t;
  t = p_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_10(k_22, m_23, n_23, t);
  t = i_22;
  return(t);
}
ATerm scope_2_0 (ATerm w_126 (ATerm), ATerm x_126 (ATerm), ATerm t)
{
  static ATerm w_1 (ATerm t)
  {
    t = end_scope_1_0(w_126, t);
    return(t);
  }
  t = begin_scope_1_0(w_126, t);
  t = restore_always_2_0(x_126, w_1, t);
  return(t);
}
static ATerm j_8 (ATerm y_126 (ATerm), ATerm s_52, ATerm q_52, ATerm t)
{
  ATerm b_24 = NULL,e_24 = NULL,l_24 = NULL,o_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,u_24 = NULL;
  o_24 = t;
  t = y_126(t);
  b_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_24, s_52, q_52);
  t = x_9(b_24, s_52, q_52, t);
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_24 = NULL;
        t = term_m_24;
        w_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_24, term_m_24);
        t = w_9(b_24, w_24, t);
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_24 = ATgetFirst((ATermList) t);
      l_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_24, term_m_24, (ATerm) ATinsert(CheckATermList(l_24), (ATerm) ATinsert(CheckATermList(e_24), s_52)));
  t = lookup_table_0_1(b_24, t);
  u_24 = t;
  t = term_m_24;
  q_24 = t;
  t = (ATerm) ATinsert(CheckATermList(l_24), (ATerm) ATinsert(CheckATermList(e_24), s_52));
  r_24 = t;
  t = u_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_10(q_24, r_24, s_24, t);
  t = o_24;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_v_22;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm u_26 = NULL,x_26 = NULL;
  if(match_cons(t, sym__2))
    {
      u_26 = ATgetArgument(t, 0);
      x_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(u_26, x_26, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_x_22;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_l_20;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_v_22;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  if(match_cons(t, sym__2))
    {
      x_27 = ATgetArgument(t, 0);
      y_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(x_27, y_27, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_x_22;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_l_20;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_v_22;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL;
  if(match_cons(t, sym__2))
    {
      x_28 = ATgetArgument(t, 0);
      y_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(x_28, y_28, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_x_22;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm RegisterCongDef_0_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,w_25 = NULL,x_25 = NULL;
  q_25 = t;
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            r_25 = ATgetArgument(t, 0);
            w_25 = ATgetArgument(t, 1);
            x_25 = ATgetArgument(t, 2);
            {
              ATerm h_25 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_25);
        {
          ATerm f_26 = NULL,s_26 = NULL,t_26 = NULL;
          t = x_25;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = w_25;
          t = foldr_3_0(x_1, y_1, z_1, t);
          f_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_25, f_26);
          s_26 = t;
          t = term_t_25;
          t_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_25, f_26), term_t_25);
          t = j_8(a_2, s_26, t_26, t);
          t = q_25;
        }
      }
    else
      {
        t = e_25;
        {
          ATerm u_25 = t;
          int v_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  r_25 = ATgetArgument(t, 0);
                  w_25 = ATgetArgument(t, 1);
                  x_25 = ATgetArgument(t, 2);
                  {
                    ATerm y_25 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(v_25);
              {
                ATerm f_27 = NULL,u_27 = NULL,w_27 = NULL;
                t = x_25;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = w_25;
                t = foldr_3_0(d_2, h_2, i_2, t);
                f_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_25, f_27);
                u_27 = t;
                t = term_a_26;
                w_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_25, f_27), term_a_26);
                t = j_8(j_2, u_27, w_27, t);
                t = q_25;
              }
            }
          else
            {
              t = u_25;
              {
                ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
                if(match_cons(t, sym_ExtSDef_3))
                  {
                    r_25 = ATgetArgument(t, 0);
                    w_25 = ATgetArgument(t, 1);
                    x_25 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = x_25;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = w_25;
                t = foldr_3_0(m_2, n_2, o_2, t);
                u_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_25, u_28);
                v_28 = t;
                t = term_c_26;
                w_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_25, u_28), term_c_26);
                t = j_8(r_2, v_28, w_28, t);
                t = (ATerm) ATmakeAppl(sym_ExtSDef_3, r_25, w_25, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm d_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterCongDef_0_0(t);
      LocalPopChoice(j_26);
    }
  else
    {
      t = d_26;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_l_20;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = filter_1_0(x_2, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm h_29 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      h_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_29;
  t = filter_1_0(MkCongDef_0_0, t);
  return(t);
}
static ATerm k_8 (ATerm n_22, ATerm o_22, ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL;
  t = o_22;
  t = map_1_0(s_2, t);
  t = n_22;
  t = scope_2_0(t_2, w_2, t);
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_29, o_22);
  t = conc_0_0(t);
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, a_29)), (ATerm) ATmakeAppl(sym_Signature_1, n_22)));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm b_31 = NULL;
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_31 = ATgetArgument(t, 0);
          {
            ATerm p_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_26);
      t = b_31;
    }
  else
    {
      t = k_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_31;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm k_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_32);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      {
        ATerm v_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            {
              ATerm y_26 = t;
              int z_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_32 = NULL,n_32 = NULL,s_32 = NULL,t_32 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_32 = ATgetArgument(t, 0);
                      n_32 = ATgetArgument(t, 1);
                      s_32 = ATgetArgument(t, 2);
                      t_32 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_32;
                  t = map_1_0(e_3, t);
                  LocalPopChoice(z_26);
                }
              else
                {
                  t = y_26;
                  {
                    ATerm a_27 = t;
                    int b_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_27);
                      }
                    else
                      {
                        t = a_27;
                        t = dynrule_targs_1_0(h_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm b_33 = NULL;
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_33 = ATgetArgument(t, 0);
          {
            ATerm e_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_27);
      t = b_33;
    }
  else
    {
      t = c_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_33;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = map_1_0(i_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm h_33 = NULL;
  ATerm g_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_33 = ATgetArgument(t, 0);
          {
            ATerm j_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_27);
      t = h_33;
    }
  else
    {
      t = g_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_33;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm l_33 = NULL,o_33 = NULL;
  o_33 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      l_33 = ATgetArgument(t, 0);
      t = l_33;
    }
  else
    {
      t = o_33;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm l_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_34);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
      {
        ATerm o_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_27);
          }
        else
          {
            t = o_27;
            {
              ATerm s_27 = t;
              int t_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,x_34 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_34 = ATgetArgument(t, 0);
                      t_34 = ATgetArgument(t, 1);
                      u_34 = ATgetArgument(t, 2);
                      x_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_34;
                  t = map_1_0(m_3, t);
                  LocalPopChoice(t_27);
                }
              else
                {
                  t = s_27;
                  {
                    ATerm v_27 = t;
                    int z_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(z_27);
                      }
                    else
                      {
                        t = v_27;
                        t = dynrule_targs_1_0(n_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm n_35 = NULL;
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_35 = ATgetArgument(t, 0);
          {
            ATerm c_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_28);
      t = n_35;
    }
  else
    {
      t = a_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_35;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = map_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm z_36 = NULL;
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_36 = ATgetArgument(t, 0);
          {
            ATerm f_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_28);
      t = z_36;
    }
  else
    {
      t = d_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_36;
    }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm g_30 = NULL,i_30 = NULL,j_30 = NULL,m_30 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      i_30 = ATgetArgument(t, 0);
      j_30 = ATgetArgument(t, 1);
      m_30 = ATgetArgument(t, 2);
      g_30 = ATgetArgument(t, 3);
      {
        ATerm q_30 = NULL,v_30 = NULL,w_30 = NULL;
        t = m_30;
        t = map_1_0(y_2, t);
        q_30 = t;
        t = g_30;
        t = free_vars_3_0(z_2, a_3, tboundin_3_0, t);
        t = map_1_0(j_3, t);
        v_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_30, q_30);
        t = diff_0_0(t);
        w_30 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_30, j_30, m_30, (ATerm) ATmakeAppl(sym_Scope_2, w_30, g_30));
      }
    }
  else
    {
      ATerm k_34 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          i_30 = ATgetArgument(t, 0);
          j_30 = ATgetArgument(t, 1);
          m_30 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_30;
      t = free_vars_3_0(k_3, l_3, tboundin_3_0, t);
      k_34 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, i_30, j_30, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, k_34, m_30));
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm s_39 = NULL;
  ATerm g_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_39 = ATgetArgument(t, 0);
          {
            ATerm j_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_28);
      t = s_39;
    }
  else
    {
      t = g_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_39;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm d_40 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_40);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      {
        ATerm m_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_28);
          }
        else
          {
            t = m_28;
            {
              ATerm z_28 = t;
              int c_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_40 = NULL,g_40 = NULL,l_40 = NULL,o_40 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_40 = ATgetArgument(t, 0);
                      g_40 = ATgetArgument(t, 1);
                      l_40 = ATgetArgument(t, 2);
                      o_40 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_40;
                  t = map_1_0(s_3, t);
                  LocalPopChoice(c_29);
                }
              else
                {
                  t = z_28;
                  {
                    ATerm d_29 = t;
                    int e_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_29);
                      }
                    else
                      {
                        t = d_29;
                        t = dynrule_targs_1_0(t_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm c_41 = NULL;
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_41 = ATgetArgument(t, 0);
          {
            ATerm i_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_29);
      t = c_41;
    }
  else
    {
      t = f_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_41;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = map_1_0(u_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm j_41 = NULL;
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_41 = ATgetArgument(t, 0);
          {
            ATerm l_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_29);
      t = j_41;
    }
  else
    {
      t = j_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_41;
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm m_41 = NULL,q_41 = NULL;
  q_41 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      m_41 = ATgetArgument(t, 0);
      t = m_41;
    }
  else
    {
      t = q_41;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm d_42 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_42);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm m_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_29);
    }
  else
    {
      t = m_29;
      {
        ATerm p_29 = t;
        int s_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_29);
          }
        else
          {
            t = p_29;
            {
              ATerm t_29 = t;
              int u_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL,t_42 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_42 = ATgetArgument(t, 0);
                      i_42 = ATgetArgument(t, 1);
                      j_42 = ATgetArgument(t, 2);
                      t_42 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_42;
                  t = map_1_0(y_3, t);
                  LocalPopChoice(u_29);
                }
              else
                {
                  t = t_29;
                  {
                    ATerm v_29 = t;
                    int w_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_29);
                      }
                    else
                      {
                        t = v_29;
                        t = dynrule_targs_1_0(z_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm s_43 = NULL;
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_43 = ATgetArgument(t, 0);
          {
            ATerm a_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_29);
      t = s_43;
    }
  else
    {
      t = x_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_43;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = map_1_0(b_4, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm z_43 = NULL;
  ATerm b_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_43 = ATgetArgument(t, 0);
          {
            ATerm f_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_30);
      t = z_43;
    }
  else
    {
      t = b_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_43;
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm l_38 = NULL,q_38 = NULL,r_38 = NULL,w_38 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      q_38 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
      w_38 = ATgetArgument(t, 2);
      l_38 = ATgetArgument(t, 3);
      {
        ATerm a_39 = NULL,i_39 = NULL,j_39 = NULL;
        t = w_38;
        t = map_1_0(p_3, t);
        a_39 = t;
        t = l_38;
        t = free_vars_3_0(q_3, r_3, tboundin_3_0, t);
        t = map_1_0(v_3, t);
        i_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_39, a_39);
        t = diff_0_0(t);
        j_39 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, q_38, r_38, w_38, (ATerm) ATmakeAppl(sym_Scope_2, j_39, (ATerm) ATmakeAppl(sym_SRule_1, l_38)));
      }
    }
  else
    {
      ATerm c_42 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          q_38 = ATgetArgument(t, 0);
          r_38 = ATgetArgument(t, 1);
          w_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_38;
      t = free_vars_3_0(w_3, x_3, tboundin_3_0, t);
      c_42 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, q_38, r_38, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, c_42, (ATerm) ATmakeAppl(sym_SRule_1, w_38)));
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm h_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_30 = t;
      int n_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RDtoSD_0_0(t);
          LocalPopChoice(n_30);
        }
      else
        {
          t = l_30;
          t = DeclareVariables_0_0(t);
        }
      LocalPopChoice(k_30);
    }
  else
    {
      t = h_30;
    }
  t = topdown_1_0(d_4, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
  z_44 = t;
  if(match_cons(t, sym_Call_2))
    {
      x_44 = ATgetArgument(t, 0);
      y_44 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_CallT_3, x_44, y_44, (ATerm) ATempty);
    }
  else
    {
      t = z_44;
    }
  return(t);
}
static ATerm m_8 (ATerm l_22, ATerm m_22, ATerm t)
{
  ATerm o_44 = NULL;
  t = m_22;
  t = map_1_0(c_4, t);
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, o_44)), (ATerm) ATmakeAppl(sym_Signature_1, l_22)));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL;
  v_45 = t;
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            w_45 = ATgetArgument(t, 0);
            {
              ATerm r_30 = ATgetArgument(t, 1);
            }
            {
              ATerm s_30 = ATgetArgument(t, 2);
            }
            {
              ATerm t_30 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_30);
        t = w_45;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
          _fail(t);
        t = v_45;
      }
    else
      {
        t = o_30;
        {
          ATerm u_30 = t;
          int y_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  w_45 = ATgetArgument(t, 0);
                  {
                    ATerm z_30 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm a_31 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm c_31 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(y_30);
              t = w_45;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                _fail(t);
              t = v_45;
            }
          else
            {
              t = u_30;
              {
                ATerm f_31 = t;
                int g_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_ExtSDef_3))
                      {
                        w_45 = ATgetArgument(t, 0);
                        {
                          ATerm h_31 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm i_31 = ATgetArgument(t, 2);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(g_31);
                    t = w_45;
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                      _fail(t);
                    t = v_45;
                  }
                else
                  {
                    t = f_31;
                    if(match_cons(t, sym_ExtSDefInl_4))
                      {
                        w_45 = ATgetArgument(t, 0);
                        {
                          ATerm j_31 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm k_31 = ATgetArgument(t, 2);
                        }
                        {
                          ATerm m_31 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = w_45;
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                      _fail(t);
                    t = v_45;
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm n_8 (ATerm p_22, ATerm q_22, ATerm t)
{
  t = q_22;
  {
    ATerm o_31 = t;
    if((PushChoice() == 0))
      {
        t = fetch_1_0(e_4, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_31;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(CheckATermList(q_22), (ATerm) ATmakeAppl(sym_RDefT_4, term_p_31, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_r_31, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_17), term_o_17))), (ATerm) ATmakeAppl(sym_VarDec_2, term_q_31, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_17), term_o_17))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_y_31, term_f_32, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_o_32), term_i_32))))))), (ATerm) ATmakeAppl(sym_Signature_1, p_22)));
  return(t);
}
ATerm at_end_1_0 (ATerm r_114 (ATerm), ATerm t)
{
  static ATerm z_46 (ATerm t)
  {
    ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
    y_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_46 = ATgetFirst((ATermList) t);
        x_46 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_11 = NULL,k_11 = NULL,n_5 = NULL;
          t = SSLgetAnnotations(y_46);
          g_11 = t;
          t = x_46;
          t = z_46(t);
          k_11 = t;
          t = (ATerm) ATinsert(CheckATermList(k_11), w_46);
          n_5 = t;
          t = SSLsetAnnotations(n_5, g_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_46;
        t = r_114(t);
      }
    return(t);
  }
  t = z_46(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
  b_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_46;
    }
  else
    {
      static ATerm f_4 (ATerm t)
      {
        t = not_null(d_46);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_46 = ATgetFirst((ATermList) t);
          if(((d_46 != NULL) && (d_46 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_46;
      t = at_end_1_0(f_4, t);
    }
  return(t);
}
static ATerm v_47 (ATerm h_47, ATerm t)
{
  ATerm i_47 = NULL;
  t = SSL_explode_term(h_47);
  if(match_cons(t, sym__2))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_47;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
  o_47 = t;
  if(match_cons(t, sym__2))
    {
      m_47 = ATgetArgument(t, 0);
      n_47 = ATgetArgument(t, 1);
      {
        ATerm u_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_4 (ATerm t)
            {
              t = n_47;
              return(t);
            }
            t = m_47;
            t = at_end_1_0(h_4, t);
            LocalPopChoice(v_32);
          }
        else
          {
            t = u_32;
            t = v_47(o_47, t);
          }
      }
    }
  else
    {
      t = v_47(o_47, t);
    }
  return(t);
}
ATerm dynrule_cong_6_0 (ATerm p_139 (ATerm), ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm u_139 (ATerm), ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,a_54 = NULL;
  u_53 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      v_53 = ATgetArgument(t, 0);
      a_54 = ATgetArgument(t, 1);
      {
        ATerm u_11 = NULL,y_11 = NULL,c_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,v_5 = NULL,t_5 = NULL,s_5 = NULL;
        t = SSLgetAnnotations(u_53);
        u_11 = t;
        t = v_53;
        if(match_cons(t, sym_DynRuleId_1))
          {
            f_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_53);
        c_12 = t;
        t = f_12;
        if(match_cons(t, sym_RDecT_3))
          {
            i_12 = ATgetArgument(t, 0);
            j_12 = ATgetArgument(t, 1);
            k_12 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_12);
        h_12 = t;
        t = i_12;
        t = p_139(t);
        l_12 = t;
        t = j_12;
        t = q_139(t);
        m_12 = t;
        t = k_12;
        t = r_139(t);
        n_12 = t;
        t = (ATerm) ATmakeAppl(sym_RDecT_3, l_12, m_12, n_12);
        s_5 = t;
        t = SSLsetAnnotations(s_5, h_12);
        o_12 = t;
        t = (ATerm) ATmakeAppl(sym_DynRuleId_1, o_12);
        t_5 = t;
        t = SSLsetAnnotations(t_5, c_12);
        g_12 = t;
        t = a_54;
        t = s_139(t);
        y_11 = t;
        t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, g_12, y_11);
        v_5 = t;
        t = SSLsetAnnotations(v_5, u_11);
      }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          v_53 = ATgetArgument(t, 0);
          a_54 = ATgetArgument(t, 1);
          {
            ATerm w_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,j_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,b_14 = NULL,c_14 = NULL,z_5 = NULL,y_5 = NULL,x_5 = NULL,w_5 = NULL;
            t = SSLgetAnnotations(u_53);
            w_12 = t;
            t = v_53;
            if(match_cons(t, sym_DynRuleId_1))
              {
                m_13 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_53);
            l_13 = t;
            t = m_13;
            if(match_cons(t, sym_RDecT_3))
              {
                p_13 = ATgetArgument(t, 0);
                q_13 = ATgetArgument(t, 1);
                u_13 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_13);
            o_13 = t;
            t = p_13;
            t = p_139(t);
            v_13 = t;
            t = q_13;
            t = q_139(t);
            w_13 = t;
            t = u_13;
            t = r_139(t);
            b_14 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, v_13, w_13, b_14);
            w_5 = t;
            t = SSLsetAnnotations(w_5, o_13);
            c_14 = t;
            t = (ATerm) ATmakeAppl(sym_DynRuleId_1, c_14);
            x_5 = t;
            t = SSLsetAnnotations(x_5, l_13);
            n_13 = t;
            t = a_54;
            if(match_cons(t, sym_Rule_3))
              {
                a_13 = ATgetArgument(t, 0);
                b_13 = ATgetArgument(t, 1);
                d_13 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_54);
            z_12 = t;
            t = a_13;
            t = s_139(t);
            e_13 = t;
            t = b_13;
            t = t_139(t);
            f_13 = t;
            t = d_13;
            t = u_139(t);
            g_13 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, e_13, f_13, g_13);
            y_5 = t;
            t = SSLsetAnnotations(y_5, z_12);
            j_13 = t;
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, n_13, j_13);
            z_5 = t;
            t = SSLsetAnnotations(z_5, w_12);
          }
        }
      else
        {
          ATerm s_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,p_15 = NULL,q_15 = NULL,s_15 = NULL,x_15 = NULL,z_15 = NULL,a_16 = NULL,f_16 = NULL,d_6 = NULL,c_6 = NULL,b_6 = NULL,a_6 = NULL;
          if(match_cons(t, sym_AddDynRule_2))
            {
              v_53 = ATgetArgument(t, 0);
              a_54 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_53);
          s_14 = t;
          t = v_53;
          if(match_cons(t, sym_DynRuleId_1))
            {
              l_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_53);
          k_15 = t;
          t = l_15;
          if(match_cons(t, sym_RDecT_3))
            {
              p_15 = ATgetArgument(t, 0);
              q_15 = ATgetArgument(t, 1);
              s_15 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_15);
          n_15 = t;
          t = p_15;
          t = p_139(t);
          x_15 = t;
          t = q_15;
          t = q_139(t);
          z_15 = t;
          t = s_15;
          t = r_139(t);
          a_16 = t;
          t = (ATerm) ATmakeAppl(sym_RDecT_3, x_15, z_15, a_16);
          a_6 = t;
          t = SSLsetAnnotations(a_6, n_15);
          f_16 = t;
          t = (ATerm) ATmakeAppl(sym_DynRuleId_1, f_16);
          b_6 = t;
          t = SSLsetAnnotations(b_6, k_15);
          m_15 = t;
          t = a_54;
          if(match_cons(t, sym_Rule_3))
            {
              x_14 = ATgetArgument(t, 0);
              y_14 = ATgetArgument(t, 1);
              f_15 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_54);
          w_14 = t;
          t = x_14;
          t = s_139(t);
          g_15 = t;
          t = y_14;
          t = t_139(t);
          h_15 = t;
          t = f_15;
          t = u_139(t);
          i_15 = t;
          t = (ATerm) ATmakeAppl(sym_Rule_3, g_15, h_15, i_15);
          c_6 = t;
          t = SSLsetAnnotations(c_6, w_14);
          j_15 = t;
          t = (ATerm) ATmakeAppl(sym_AddDynRule_2, m_15, j_15);
          d_6 = t;
          t = SSLsetAnnotations(d_6, s_14);
        }
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_32 = ATgetArgument(t, 0);
      if(((ATgetType(w_32) != AT_LIST) || !(ATisEmpty(w_32))))
        _fail(t);
      {
        ATerm x_32 = ATgetArgument(t, 1);
        if(((ATgetType(x_32) != AT_LIST) || !(ATisEmpty(x_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,f_18 = NULL,g_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_32 = ATgetArgument(t, 0);
      if(((ATgetType(y_32) == AT_LIST) && !(ATisEmpty(y_32))))
        {
          z_17 = ATgetFirst((ATermList) y_32);
          a_18 = (ATerm) ATgetNext((ATermList) y_32);
        }
      else
        _fail(t);
      {
        ATerm z_32 = ATgetArgument(t, 1);
        if(((ATgetType(z_32) == AT_LIST) && !(ATisEmpty(z_32))))
          {
            f_18 = ATgetFirst((ATermList) z_32);
            g_18 = (ATerm) ATgetNext((ATermList) z_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_17, f_18), (ATerm) ATmakeAppl(sym__2, a_18, g_18));
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm h_18 = NULL,k_18 = NULL;
  if(match_cons(t, sym__2))
    {
      h_18 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_18), h_18);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm r_18 = NULL,v_18 = NULL,w_18 = NULL;
  if(match_cons(t, sym__2))
    {
      r_18 = ATgetArgument(t, 0);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_18;
  {
    ATerm a_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_33);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_18);
      }
    else
      {
        t = a_33;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm e_33 = ATgetArgument(t, 0);
            v_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, w_18, v_18);
      }
  }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_33 = ATgetArgument(t, 0);
      if(((ATgetType(f_33) != AT_LIST) || !(ATisEmpty(f_33))))
        _fail(t);
      {
        ATerm g_33 = ATgetArgument(t, 1);
        if(((ATgetType(g_33) != AT_LIST) || !(ATisEmpty(g_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm m_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_33 = ATgetArgument(t, 0);
      if(((ATgetType(i_33) == AT_LIST) && !(ATisEmpty(i_33))))
        {
          m_20 = ATgetFirst((ATermList) i_33);
          p_20 = (ATerm) ATgetNext((ATermList) i_33);
        }
      else
        _fail(t);
      {
        ATerm j_33 = ATgetArgument(t, 1);
        if(((ATgetType(j_33) == AT_LIST) && !(ATisEmpty(j_33))))
          {
            q_20 = ATgetFirst((ATermList) j_33);
            r_20 = (ATerm) ATgetNext((ATermList) j_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_20, q_20), (ATerm) ATmakeAppl(sym__2, p_20, r_20));
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm s_20 = NULL,d_21 = NULL;
  if(match_cons(t, sym__2))
    {
      s_20 = ATgetArgument(t, 0);
      d_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_21), s_20);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm f_21 = NULL,i_21 = NULL,j_21 = NULL;
  if(match_cons(t, sym__2))
    {
      f_21 = ATgetArgument(t, 0);
      j_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_21;
  {
    ATerm k_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm n_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_33);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_21);
      }
    else
      {
        t = k_33;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_33 = ATgetArgument(t, 0);
            i_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_21, i_21);
      }
  }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_33 = ATgetArgument(t, 0);
      if(((ATgetType(r_33) != AT_LIST) || !(ATisEmpty(r_33))))
        _fail(t);
      {
        ATerm s_33 = ATgetArgument(t, 1);
        if(((ATgetType(s_33) != AT_LIST) || !(ATisEmpty(s_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_33 = ATgetArgument(t, 0);
      if(((ATgetType(t_33) == AT_LIST) && !(ATisEmpty(t_33))))
        {
          e_23 = ATgetFirst((ATermList) t_33);
          f_23 = (ATerm) ATgetNext((ATermList) t_33);
        }
      else
        _fail(t);
      {
        ATerm w_33 = ATgetArgument(t, 1);
        if(((ATgetType(w_33) == AT_LIST) && !(ATisEmpty(w_33))))
          {
            g_23 = ATgetFirst((ATermList) w_33);
            h_23 = (ATerm) ATgetNext((ATermList) w_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_23, g_23), (ATerm) ATmakeAppl(sym__2, f_23, h_23));
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL;
  if(match_cons(t, sym__2))
    {
      i_23 = ATgetArgument(t, 0);
      j_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_23), i_23);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm l_23 = NULL,v_23 = NULL,x_23 = NULL;
  if(match_cons(t, sym__2))
    {
      l_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_23;
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_34);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_23);
      }
    else
      {
        t = b_34;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_34 = ATgetArgument(t, 0);
            v_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_23, v_23);
      }
  }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_34 = ATgetArgument(t, 0);
      if(((ATgetType(g_34) != AT_LIST) || !(ATisEmpty(g_34))))
        _fail(t);
      {
        ATerm h_34 = ATgetArgument(t, 1);
        if(((ATgetType(h_34) != AT_LIST) || !(ATisEmpty(h_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm m_63 = NULL,p_63 = NULL,q_63 = NULL,t_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_34 = ATgetArgument(t, 0);
      if(((ATgetType(i_34) == AT_LIST) && !(ATisEmpty(i_34))))
        {
          m_63 = ATgetFirst((ATermList) i_34);
          p_63 = (ATerm) ATgetNext((ATermList) i_34);
        }
      else
        _fail(t);
      {
        ATerm j_34 = ATgetArgument(t, 1);
        if(((ATgetType(j_34) == AT_LIST) && !(ATisEmpty(j_34))))
          {
            q_63 = ATgetFirst((ATermList) j_34);
            t_63 = (ATerm) ATgetNext((ATermList) j_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_63, q_63), (ATerm) ATmakeAppl(sym__2, p_63, t_63));
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL;
  if(match_cons(t, sym__2))
    {
      v_63 = ATgetArgument(t, 0);
      w_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_63), v_63);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm a_64 = NULL,c_64 = NULL,d_64 = NULL;
  if(match_cons(t, sym__2))
    {
      a_64 = ATgetArgument(t, 0);
      d_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_64;
  {
    ATerm n_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_34);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_64);
      }
    else
      {
        t = n_34;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_34 = ATgetArgument(t, 0);
            c_64 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, d_64, c_64);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm e_139 (ATerm), ATerm t)
{
  ATerm v_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_62 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL;
      v_62 = t;
      if(match_cons(t, sym_Scope_2))
        {
          c_63 = ATgetArgument(t, 0);
          d_63 = ATgetArgument(t, 1);
          {
            ATerm t_16 = NULL,x_16 = NULL,j_10 = NULL;
            t = SSLgetAnnotations(v_62);
            t_16 = t;
            t = c_63;
            t = e_139(t);
            x_16 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, x_16, d_63);
            j_10 = t;
            t = SSLsetAnnotations(j_10, t_16);
          }
        }
      else
        {
          if(match_cons(t, sym_LRule_1))
            {
              c_63 = ATgetArgument(t, 0);
              {
                ATerm i_17 = NULL,m_10 = NULL;
                t = SSLgetAnnotations(v_62);
                i_17 = t;
                t = (ATerm) ATmakeAppl(sym_LRule_1, c_63);
                m_10 = t;
                t = SSLsetAnnotations(m_10, i_17);
              }
            }
          else
            {
              if(match_cons(t, sym_RDecT_3))
                {
                  c_63 = ATgetArgument(t, 0);
                  d_63 = ATgetArgument(t, 1);
                  e_63 = ATgetArgument(t, 2);
                  {
                    ATerm r_17 = NULL,v_17 = NULL,w_17 = NULL,n_10 = NULL;
                    t = SSLgetAnnotations(v_62);
                    r_17 = t;
                    t = e_63;
                    t = e_139(t);
                    w_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_63, w_17);
                    t = genzip_4_0(i_4, j_4, k_4, l_4, t);
                    v_17 = t;
                    t = (ATerm) ATmakeAppl(sym_RDecT_3, c_63, d_63, v_17);
                    n_10 = t;
                    t = SSLsetAnnotations(n_10, r_17);
                  }
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_63 = ATgetArgument(t, 0);
                      d_63 = ATgetArgument(t, 1);
                      e_63 = ATgetArgument(t, 2);
                      f_63 = ATgetArgument(t, 3);
                      {
                        ATerm a_20 = NULL,j_20 = NULL,k_20 = NULL,o_10 = NULL;
                        t = SSLgetAnnotations(v_62);
                        a_20 = t;
                        t = e_63;
                        t = e_139(t);
                        k_20 = t;
                        t = (ATerm) ATmakeAppl(sym__2, e_63, k_20);
                        t = genzip_4_0(n_4, p_4, q_4, s_4, t);
                        j_20 = t;
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, c_63, d_63, j_20, f_63);
                        o_10 = t;
                        t = SSLsetAnnotations(o_10, a_20);
                      }
                    }
                  else
                    {
                      ATerm w_22 = NULL,b_23 = NULL,c_23 = NULL,q_10 = NULL;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          c_63 = ATgetArgument(t, 0);
                          d_63 = ATgetArgument(t, 1);
                          e_63 = ATgetArgument(t, 2);
                          f_63 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(v_62);
                      w_22 = t;
                      t = e_63;
                      t = e_139(t);
                      c_23 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_63, c_23);
                      t = genzip_4_0(t_4, v_4, w_4, y_4, t);
                      b_23 = t;
                      t = (ATerm) ATmakeAppl(sym_RDefT_4, c_63, d_63, b_23, f_63);
                      q_10 = t;
                      t = SSLsetAnnotations(q_10, w_22);
                    }
                }
            }
        }
      LocalPopChoice(w_34);
    }
  else
    {
      t = v_34;
      {
        static ATerm a_5 (ATerm t)
        {
          ATerm i_63 = NULL,k_63 = NULL;
          k_63 = t;
          t = e_139(t);
          i_63 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_63, i_63);
          t = genzip_4_0(b_5, c_5, d_5, e_5, t);
          return(t);
        }
        t = dynrule_cong_6_0(_id, _id, a_5, _id, _id, _id, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm f_139 (ATerm), ATerm g_139 (ATerm), ATerm h_139 (ATerm), ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL;
  v_72 = t;
  if(match_cons(t, sym_Scope_2))
    {
      w_72 = ATgetArgument(t, 0);
      u_72 = ATgetArgument(t, 1);
      {
        ATerm t_24 = NULL,y_24 = NULL,z_24 = NULL,a_17 = NULL;
        t = SSLgetAnnotations(v_72);
        t_24 = t;
        t = w_72;
        t = h_139(t);
        y_24 = t;
        t = u_72;
        t = f_139(t);
        z_24 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, y_24, z_24);
        a_17 = t;
        t = SSLsetAnnotations(a_17, t_24);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          w_72 = ATgetArgument(t, 0);
          {
            ATerm g_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,s_25 = NULL,c_17 = NULL,b_17 = NULL;
            t = SSLgetAnnotations(v_72);
            g_25 = t;
            t = w_72;
            if(match_cons(t, sym_Rule_3))
              {
                j_25 = ATgetArgument(t, 0);
                k_25 = ATgetArgument(t, 1);
                l_25 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_72);
            i_25 = t;
            t = j_25;
            t = f_139(t);
            m_25 = t;
            t = k_25;
            t = f_139(t);
            n_25 = t;
            t = l_25;
            t = f_139(t);
            o_25 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, m_25, n_25, o_25);
            b_17 = t;
            t = SSLsetAnnotations(b_17, i_25);
            s_25 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, s_25);
            c_17 = t;
            t = SSLsetAnnotations(c_17, g_25);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              w_72 = ATgetArgument(t, 0);
              u_72 = ATgetArgument(t, 1);
              s_72 = ATgetArgument(t, 2);
              {
                ATerm e_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,h_17 = NULL;
                t = SSLgetAnnotations(v_72);
                e_26 = t;
                t = w_72;
                t = h_139(t);
                m_26 = t;
                t = u_72;
                t = h_139(t);
                n_26 = t;
                t = s_72;
                t = h_139(t);
                o_26 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, m_26, n_26, o_26);
                h_17 = t;
                t = SSLsetAnnotations(h_17, e_26);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  w_72 = ATgetArgument(t, 0);
                  u_72 = ATgetArgument(t, 1);
                  s_72 = ATgetArgument(t, 2);
                  t_72 = ATgetArgument(t, 3);
                  {
                    ATerm h_27 = NULL,m_27 = NULL,n_27 = NULL,p_27 = NULL,q_27 = NULL,y_17 = NULL;
                    t = SSLgetAnnotations(v_72);
                    h_27 = t;
                    t = w_72;
                    t = h_139(t);
                    m_27 = t;
                    t = u_72;
                    t = h_139(t);
                    n_27 = t;
                    t = s_72;
                    t = h_139(t);
                    p_27 = t;
                    t = t_72;
                    t = f_139(t);
                    q_27 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, m_27, n_27, p_27, q_27);
                    y_17 = t;
                    t = SSLsetAnnotations(y_17, h_27);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_72 = ATgetArgument(t, 0);
                      u_72 = ATgetArgument(t, 1);
                      s_72 = ATgetArgument(t, 2);
                      t_72 = ATgetArgument(t, 3);
                      {
                        ATerm h_28 = NULL,o_28 = NULL,p_28 = NULL,r_28 = NULL,s_28 = NULL,b_18 = NULL;
                        t = SSLgetAnnotations(v_72);
                        h_28 = t;
                        t = w_72;
                        t = h_139(t);
                        o_28 = t;
                        t = u_72;
                        t = h_139(t);
                        p_28 = t;
                        t = s_72;
                        t = h_139(t);
                        r_28 = t;
                        t = t_72;
                        t = f_139(t);
                        s_28 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, o_28, p_28, r_28, s_28);
                        b_18 = t;
                        t = SSLsetAnnotations(b_18, h_28);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          w_72 = ATgetArgument(t, 0);
                          u_72 = ATgetArgument(t, 1);
                          {
                            ATerm n_29 = NULL,q_29 = NULL,r_29 = NULL,c_18 = NULL;
                            t = SSLgetAnnotations(v_72);
                            n_29 = t;
                            t = w_72;
                            t = h_139(t);
                            q_29 = t;
                            t = u_72;
                            t = f_139(t);
                            r_29 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, q_29, r_29);
                            c_18 = t;
                            t = SSLsetAnnotations(c_18, n_29);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              w_72 = ATgetArgument(t, 0);
                              u_72 = ATgetArgument(t, 1);
                              {
                                ATerm z_29 = NULL,c_30 = NULL,d_30 = NULL,d_18 = NULL;
                                t = SSLgetAnnotations(v_72);
                                z_29 = t;
                                t = w_72;
                                t = h_139(t);
                                c_30 = t;
                                t = u_72;
                                t = f_139(t);
                                d_30 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, c_30, d_30);
                                d_18 = t;
                                t = SSLsetAnnotations(d_18, z_29);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  w_72 = ATgetArgument(t, 0);
                                  u_72 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_30 = NULL,d_31 = NULL,e_31 = NULL,e_18 = NULL;
                                    t = SSLgetAnnotations(v_72);
                                    x_30 = t;
                                    t = w_72;
                                    t = h_139(t);
                                    d_31 = t;
                                    t = u_72;
                                    t = f_139(t);
                                    e_31 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, d_31, e_31);
                                    e_18 = t;
                                    t = SSLsetAnnotations(e_18, x_30);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      w_72 = ATgetArgument(t, 0);
                                      {
                                        ATerm l_31 = NULL,n_31 = NULL,i_18 = NULL;
                                        t = SSLgetAnnotations(v_72);
                                        l_31 = t;
                                        t = w_72;
                                        t = f_139(t);
                                        n_31 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, n_31);
                                        i_18 = t;
                                        t = SSLsetAnnotations(i_18, l_31);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          w_72 = ATgetArgument(t, 0);
                                          {
                                            ATerm t_31 = NULL,v_31 = NULL,j_18 = NULL;
                                            t = SSLgetAnnotations(v_72);
                                            t_31 = t;
                                            t = w_72;
                                            t = f_139(t);
                                            v_31 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, v_31);
                                            j_18 = t;
                                            t = SSLsetAnnotations(j_18, t_31);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              w_72 = ATgetArgument(t, 0);
                                              {
                                                ATerm c_32 = NULL,e_32 = NULL,l_18 = NULL;
                                                t = SSLgetAnnotations(v_72);
                                                c_32 = t;
                                                t = w_72;
                                                t = f_139(t);
                                                e_32 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, e_32);
                                                l_18 = t;
                                                t = SSLsetAnnotations(l_18, c_32);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  w_72 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm p_32 = NULL,r_32 = NULL,m_18 = NULL;
                                                    t = SSLgetAnnotations(v_72);
                                                    p_32 = t;
                                                    t = w_72;
                                                    t = f_139(t);
                                                    r_32 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, r_32);
                                                    m_18 = t;
                                                    t = SSLsetAnnotations(m_18, p_32);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm p_33 = NULL,x_33 = NULL,n_18 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      w_72 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(v_72);
                                                  p_33 = t;
                                                  t = w_72;
                                                  t = f_139(t);
                                                  x_33 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, x_33);
                                                  n_18 = t;
                                                  t = SSLsetAnnotations(n_18, p_33);
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
ATerm dynrule_targs_1_0 (ATerm o_139 (ATerm), ATerm t)
{
  ATerm i_75 = NULL,j_75 = NULL,m_75 = NULL;
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          i_75 = ATgetArgument(t, 0);
          {
            ATerm a_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_34);
      t = i_75;
      if(match_cons(t, sym_DynRuleId_1))
        {
          j_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_75;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm b_35 = ATgetArgument(t, 0);
          ATerm c_35 = ATgetArgument(t, 1);
          m_75 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_75;
    }
  else
    {
      t = y_34;
      {
        ATerm d_35 = t;
        int e_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                i_75 = ATgetArgument(t, 0);
                {
                  ATerm f_35 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(e_35);
            t = i_75;
            if(match_cons(t, sym_DynRuleId_1))
              {
                j_75 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = j_75;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm g_35 = ATgetArgument(t, 0);
                ATerm i_35 = ATgetArgument(t, 1);
                m_75 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = m_75;
          }
        else
          {
            t = d_35;
            if(match_cons(t, sym_AddDynRule_2))
              {
                i_75 = ATgetArgument(t, 0);
                {
                  ATerm j_35 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = i_75;
            if(match_cons(t, sym_DynRuleId_1))
              {
                j_75 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = j_75;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm k_35 = ATgetArgument(t, 0);
                ATerm m_35 = ATgetArgument(t, 1);
                m_75 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = m_75;
          }
      }
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm h_76 = NULL;
  ATerm o_35 = t;
  int p_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_76 = ATgetArgument(t, 0);
          {
            ATerm q_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_35);
      t = h_76;
    }
  else
    {
      t = o_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_76;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm o_76 = NULL;
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_76 = ATgetArgument(t, 0);
          {
            ATerm z_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_35);
      t = o_76;
    }
  else
    {
      t = u_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_76;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm x_75 = NULL;
  ATerm b_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm g_36 = ATgetArgument(t, 0);
          ATerm h_36 = ATgetArgument(t, 1);
          x_75 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(c_36);
      t = x_75;
      t = map_1_0(f_5, t);
    }
  else
    {
      t = b_36;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm k_36 = ATgetArgument(t, 0);
          ATerm m_36 = ATgetArgument(t, 1);
          x_75 = ATgetArgument(t, 2);
          {
            ATerm n_36 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = x_75;
      t = map_1_0(k_5, t);
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm k_77 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_77);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_36);
    }
  else
    {
      t = o_36;
      {
        ATerm q_36 = t;
        int s_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_36);
          }
        else
          {
            t = q_36;
            {
              ATerm t_36 = t;
              int u_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_77 = ATgetArgument(t, 0);
                      n_77 = ATgetArgument(t, 1);
                      o_77 = ATgetArgument(t, 2);
                      p_77 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_77;
                  t = map_1_0(r_5, t);
                  LocalPopChoice(u_36);
                }
              else
                {
                  t = t_36;
                  {
                    ATerm v_36 = t;
                    int x_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_36);
                      }
                    else
                      {
                        t = v_36;
                        t = dynrule_targs_1_0(e_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm w_77 = NULL;
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_77 = ATgetArgument(t, 0);
          {
            ATerm c_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_37);
      t = w_77;
    }
  else
    {
      t = a_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_77;
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = map_1_0(f_6, t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm b_78 = NULL;
  ATerm d_37 = t;
  int f_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_78 = ATgetArgument(t, 0);
          {
            ATerm g_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_37);
      t = b_78;
    }
  else
    {
      t = d_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_78;
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm f_78 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_78);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_37);
    }
  else
    {
      t = i_37;
      {
        ATerm k_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_37);
          }
        else
          {
            t = k_37;
            {
              ATerm m_37 = t;
              int n_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_78 = ATgetArgument(t, 0);
                      i_78 = ATgetArgument(t, 1);
                      j_78 = ATgetArgument(t, 2);
                      k_78 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_78;
                  t = map_1_0(j_6, t);
                  LocalPopChoice(n_37);
                }
              else
                {
                  t = m_37;
                  {
                    ATerm o_37 = t;
                    int p_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(p_37);
                      }
                    else
                      {
                        t = o_37;
                        t = dynrule_targs_1_0(l_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm r_78 = NULL;
  ATerm t_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_78 = ATgetArgument(t, 0);
          {
            ATerm v_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_37);
      t = r_78;
    }
  else
    {
      t = t_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_78;
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = map_1_0(m_6, t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm w_78 = NULL;
  ATerm w_37 = t;
  int x_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_78 = ATgetArgument(t, 0);
          {
            ATerm y_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_37);
      t = w_78;
    }
  else
    {
      t = w_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_78;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm a_79 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_79);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm z_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_38);
    }
  else
    {
      t = z_37;
      {
        ATerm d_38 = t;
        int g_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_38);
          }
        else
          {
            t = d_38;
            {
              ATerm k_38 = t;
              int m_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_79 = ATgetArgument(t, 0);
                      d_79 = ATgetArgument(t, 1);
                      e_79 = ATgetArgument(t, 2);
                      f_79 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_79;
                  t = map_1_0(p_6, t);
                  LocalPopChoice(m_38);
                }
              else
                {
                  t = k_38;
                  {
                    ATerm n_38 = t;
                    int o_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_38);
                      }
                    else
                      {
                        t = n_38;
                        t = dynrule_targs_1_0(s_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm m_79 = NULL;
  ATerm p_38 = t;
  int s_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_79 = ATgetArgument(t, 0);
          {
            ATerm t_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_38);
      t = m_79;
    }
  else
    {
      t = p_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_79;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = map_1_0(t_6, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm r_79 = NULL;
  ATerm u_38 = t;
  int v_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_79 = ATgetArgument(t, 0);
          {
            ATerm x_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_38);
      t = r_79;
    }
  else
    {
      t = u_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_79;
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm v_79 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_79);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm y_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_38);
    }
  else
    {
      t = y_38;
      {
        ATerm b_39 = t;
        int c_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_39);
          }
        else
          {
            t = b_39;
            {
              ATerm d_39 = t;
              int m_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_79 = ATgetArgument(t, 0);
                      y_79 = ATgetArgument(t, 1);
                      z_79 = ATgetArgument(t, 2);
                      a_80 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_79;
                  t = map_1_0(y_6, t);
                  LocalPopChoice(m_39);
                }
              else
                {
                  t = d_39;
                  {
                    ATerm n_39 = t;
                    int o_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_39);
                      }
                    else
                      {
                        t = n_39;
                        t = dynrule_targs_1_0(z_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm h_80 = NULL;
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_80 = ATgetArgument(t, 0);
          {
            ATerm t_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_39);
      t = h_80;
    }
  else
    {
      t = q_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_80;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = map_1_0(a_7, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm m_80 = NULL;
  ATerm u_39 = t;
  int v_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_80 = ATgetArgument(t, 0);
          {
            ATerm w_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_39);
      t = m_80;
    }
  else
    {
      t = u_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_80;
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm q_80 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_80);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_39);
    }
  else
    {
      t = y_39;
      {
        ATerm a_40 = t;
        int b_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_40);
          }
        else
          {
            t = a_40;
            {
              ATerm c_40 = t;
              int e_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_80 = ATgetArgument(t, 0);
                      t_80 = ATgetArgument(t, 1);
                      u_80 = ATgetArgument(t, 2);
                      v_80 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_80;
                  t = map_1_0(f_7, t);
                  LocalPopChoice(e_40);
                }
              else
                {
                  t = c_40;
                  {
                    ATerm i_40 = t;
                    int j_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(j_40);
                      }
                    else
                      {
                        t = i_40;
                        t = dynrule_targs_1_0(m_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm c_81 = NULL;
  ATerm k_40 = t;
  int m_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_81 = ATgetArgument(t, 0);
          {
            ATerm p_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_40);
      t = c_81;
    }
  else
    {
      t = k_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_81;
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = map_1_0(n_7, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm i_81 = NULL;
  ATerm q_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_81 = ATgetArgument(t, 0);
          {
            ATerm s_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_40);
      t = i_81;
    }
  else
    {
      t = q_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_81;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm i_77 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      i_77 = ATgetArgument(t, 0);
      t = i_77;
      t = free_vars_3_0(o_5, q_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          i_77 = ATgetArgument(t, 0);
          t = i_77;
          t = free_vars_3_0(h_6, i_6, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              i_77 = ATgetArgument(t, 0);
              t = i_77;
              t = free_vars_3_0(n_6, o_6, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  i_77 = ATgetArgument(t, 0);
                  t = i_77;
                  t = free_vars_3_0(u_6, x_6, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      i_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_77;
                  t = free_vars_3_0(b_7, d_7, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm r_8 (ATerm a_118 (ATerm), ATerm h_39, ATerm g_39, ATerm t)
{
  static ATerm g_82 (ATerm t)
  {
    ATerm b_82 = NULL,c_82 = NULL,d_82 = NULL;
    b_82 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_39;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_82 = ATgetFirst((ATermList) t);
            d_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_40 = t;
          int v_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_82;
              {
                static ATerm o_7 (ATerm t)
                {
                  t = g_39;
                  return(t);
                }
                t = s_8(a_118, o_7, c_82, d_82, t);
              }
              t = g_82(t);
              LocalPopChoice(v_40);
            }
          else
            {
              t = t_40;
              {
                ATerm m_34 = NULL,p_34 = NULL,y_19 = NULL;
                t = SSLgetAnnotations(b_82);
                m_34 = t;
                t = d_82;
                t = g_82(t);
                p_34 = t;
                t = (ATerm) ATinsert(CheckATermList(p_34), c_82);
                y_19 = t;
                t = SSLsetAnnotations(y_19, m_34);
              }
            }
        }
      }
    return(t);
  }
  t = h_39;
  t = g_82(t);
  return(t);
}
ATerm foldr_3_0 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL;
  j_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_82;
      t = q_120(t);
    }
  else
    {
      ATerm p_82 = NULL,q_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_82 = ATgetFirst((ATermList) t);
          l_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_82;
      t = s_120(t);
      p_82 = t;
      t = l_82;
      t = foldr_3_0(q_120, r_120, s_120, t);
      q_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_82, q_82);
      t = r_120(t);
    }
  return(t);
}
static ATerm s_8 (ATerm d_118 (ATerm), ATerm e_118 (ATerm), ATerm l_39, ATerm k_39, ATerm t)
{
  t = e_118(t);
  {
    static ATerm r_7 (ATerm t)
    {
      ATerm u_82 = NULL;
      u_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_39, u_82);
      t = d_118(t);
      return(t);
    }
    t = fetch_1_0(r_7, t);
  }
  t = k_39;
  return(t);
}
static ATerm t_8 (ATerm v_117 (ATerm), ATerm f_39, ATerm e_39, ATerm t)
{
  static ATerm k_83 (ATerm t)
  {
    ATerm f_83 = NULL,g_83 = NULL,h_83 = NULL;
    f_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_83;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_83 = ATgetFirst((ATermList) t);
            h_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_40 = t;
          int y_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_83;
              {
                static ATerm x_7 (ATerm t)
                {
                  t = e_39;
                  return(t);
                }
                t = s_8(v_117, x_7, g_83, h_83, t);
              }
              t = k_83(t);
              LocalPopChoice(y_40);
            }
          else
            {
              t = w_40;
              {
                ATerm h_35 = NULL,l_35 = NULL,c_20 = NULL;
                t = SSLgetAnnotations(f_83);
                h_35 = t;
                t = h_83;
                t = k_83(t);
                l_35 = t;
                t = (ATerm) ATinsert(CheckATermList(l_35), g_83);
                c_20 = t;
                t = SSLsetAnnotations(c_20, h_35);
              }
            }
        }
      }
    return(t);
  }
  t = f_39;
  t = k_83(t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_40 = ATgetArgument(t, 0);
      if(((ATgetType(z_40) != AT_LIST) || !(ATisEmpty(z_40))))
        _fail(t);
      {
        ATerm a_41 = ATgetArgument(t, 1);
        if(((ATgetType(a_41) != AT_LIST) || !(ATisEmpty(a_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_41 = ATgetArgument(t, 0);
      if(((ATgetType(b_41) == AT_LIST) && !(ATisEmpty(b_41))))
        {
          s_83 = ATgetFirst((ATermList) b_41);
          t_83 = (ATerm) ATgetNext((ATermList) b_41);
        }
      else
        _fail(t);
      {
        ATerm d_41 = ATgetArgument(t, 1);
        if(((ATgetType(d_41) == AT_LIST) && !(ATisEmpty(d_41))))
          {
            u_83 = ATgetFirst((ATermList) d_41);
            v_83 = (ATerm) ATgetNext((ATermList) d_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_83, u_83), (ATerm) ATmakeAppl(sym__2, t_83, v_83));
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm w_83 = NULL,x_83 = NULL;
  if(match_cons(t, sym__2))
    {
      w_83 = ATgetArgument(t, 0);
      x_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_83), w_83);
  return(t);
}
static ATerm v_8 (ATerm c_732, ATerm h_732, ATerm f_76, ATerm t)
{
  ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL;
  t = SSL_explode_term(h_732);
  if(match_cons(t, sym__2))
    {
      n_83 = ATgetArgument(t, 0);
      p_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(c_732);
  if(match_cons(t, sym__2))
    {
      if((n_83 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      o_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_83, p_83);
  t = genzip_4_0(y_7, a_9, d_9, _id, t);
  q_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_83, f_76);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm t)
{
  static ATerm z_83 (ATerm t)
  {
    ATerm e_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_107(t);
        LocalPopChoice(f_41);
      }
    else
      {
        t = e_41;
        t = g_107(t);
        t = z_83(t);
      }
    return(t);
  }
  t = z_83(t);
  return(t);
}
ATerm for_3_0 (ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm t)
{
  t = i_107(t);
  t = while_not_2_0(j_107, k_107, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm g_84 = NULL;
  g_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, g_84);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm h_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,e_20 = NULL;
  k_84 = t;
  if(match_cons(t, sym__2))
    {
      i_84 = ATgetArgument(t, 0);
      j_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_84);
  h_84 = t;
  t = j_84;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_84, j_84);
  e_20 = t;
  t = SSLsetAnnotations(e_20, h_84);
  return(t);
}
static ATerm g_9 (ATerm t)
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
        ATerm g_41 = t;
        int h_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_85(f_85, g_85, e_85, t);
            LocalPopChoice(h_41);
          }
        else
          {
            t = g_41;
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
static ATerm s_85 (ATerm l_84, ATerm m_84, ATerm n_84, ATerm t)
{
  ATerm o_84 = NULL,r_84 = NULL,f_20 = NULL,u_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL;
  t = SSLgetAnnotations(n_84);
  o_84 = t;
  t = m_84;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_84 = ATgetFirst((ATermList) t);
      y_84 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_84;
  if(match_cons(t, sym__2))
    {
      w_84 = ATgetArgument(t, 0);
      x_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_84;
        if((w_84 != t))
          {
            _fail(t);
          }
        t = y_84;
        LocalPopChoice(k_41);
      }
    else
      {
        t = i_41;
        t = m_84;
        t = v_8(w_84, x_84, y_84, t);
      }
  }
  r_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_84, r_84);
  f_20 = t;
  t = SSLsetAnnotations(f_20, o_84);
  return(t);
}
static ATerm s_9 (ATerm t)
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
  ATerm l_41 = t;
  int n_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_9, f_9, g_9, t);
      LocalPopChoice(n_41);
    }
  else
    {
      t = l_41;
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
        t = t_8(s_9, n_85, o_85, t);
      }
    }
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL;
  if(match_cons(t, sym__2))
    {
      x_35 = ATgetArgument(t, 0);
      y_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(g_10, x_35, y_35, t);
  return(t);
}
static ATerm g_10 (ATerm t)
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
static ATerm h_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL;
  if(match_cons(t, sym__2))
    {
      i_36 = ATgetArgument(t, 0);
      j_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(l_10, i_36, j_36, t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm l_36 = NULL;
  if(match_cons(t, sym__2))
    {
      l_36 = ATgetArgument(t, 0);
      if((l_36 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm v_136 (ATerm), ATerm w_136 (ATerm), ATerm x_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm g_86 (ATerm t)
  {
    ATerm o_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_136(t);
        LocalPopChoice(r_41);
      }
    else
      {
        t = o_41;
        {
          ATerm s_41 = t;
          int t_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_85 = NULL,v_85 = NULL,r_35 = NULL,s_35 = NULL;
              u_85 = t;
              t = w_136(t);
              v_85 = t;
              t = u_85;
              {
                static ATerm v_9 (ATerm t)
                {
                  ATerm x_85 = NULL;
                  t = g_86(t);
                  x_85 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_85, v_85);
                  t = diff_0_0(t);
                  return(t);
                }
                t = x_136(v_9, g_86, d_10, t);
              }
              s_35 = t;
              t = SSL_explode_term(s_35);
              if(match_cons(t, sym__2))
                {
                  ATerm v_41 = ATgetArgument(t, 0);
                  r_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_35;
              t = foldr_3_0(e_10, f_10, _id, t);
              LocalPopChoice(t_41);
            }
          else
            {
              t = s_41;
              {
                ATerm d_36 = NULL,e_36 = NULL;
                e_36 = t;
                t = SSL_explode_term(e_36);
                if(match_cons(t, sym__2))
                  {
                    ATerm w_41 = ATgetArgument(t, 0);
                    d_36 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_36;
                t = foldr_3_0(h_10, i_10, g_86, t);
              }
            }
        }
      }
    return(t);
  }
  t = g_86(t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm t_86 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_86);
  return(t);
}
static ATerm r_10 (ATerm t)
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
              ATerm b_42 = t;
              int e_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_86 = ATgetArgument(t, 0);
                      w_86 = ATgetArgument(t, 1);
                      x_86 = ATgetArgument(t, 2);
                      y_86 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_86;
                  t = map_1_0(u_10, t);
                  LocalPopChoice(e_42);
                }
              else
                {
                  t = b_42;
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
                        t = dynrule_targs_1_0(w_10, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm f_87 = NULL;
  ATerm k_42 = t;
  int l_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_87 = ATgetArgument(t, 0);
          {
            ATerm m_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_42);
      t = f_87;
    }
  else
    {
      t = k_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_87;
    }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = map_1_0(a_11, t);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm k_87 = NULL;
  ATerm o_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_87 = ATgetArgument(t, 0);
          {
            ATerm r_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_42);
      t = k_87;
    }
  else
    {
      t = o_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_87;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm m_86 = NULL,q_86 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      q_86 = ATgetArgument(t, 0);
      t = q_86;
      if(match_cons(t, sym_Rule_3))
        {
          m_86 = ATgetArgument(t, 0);
          {
            ATerm s_42 = ATgetArgument(t, 1);
          }
          {
            ATerm u_42 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = m_86;
      t = free_vars_3_0(p_10, r_10, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          q_86 = ATgetArgument(t, 0);
          {
            ATerm v_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = q_86;
    }
  return(t);
}
ATerm Var_1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL,t_20 = NULL;
  r_87 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_87);
  o_87 = t;
  t = p_87;
  t = v_84(t);
  q_87 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_87);
  t_20 = t;
  t = SSLsetAnnotations(t_20, o_87);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm q_88 = NULL,r_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL,v_88 = NULL,w_88 = NULL;
  s_88 = t;
  if(match_cons(t, sym__2))
    {
      t_88 = ATgetArgument(t, 0);
      u_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_88;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_88 = ATgetFirst((ATermList) t);
      w_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_88;
  if(match_cons(t, sym__2))
    {
      q_88 = ATgetArgument(t, 0);
      r_88 = ATgetArgument(t, 1);
      {
        ATerm w_42 = t;
        int x_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_88;
            if((t_88 != t))
              {
                _fail(t);
              }
            t = r_88;
            LocalPopChoice(x_42);
          }
        else
          {
            t = w_42;
            t = (ATerm) ATmakeAppl(sym__2, t_88, w_88);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, t_88, w_88);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm y_8 (ATerm q_135 (ATerm), ATerm r_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm m_74, ATerm l_74, ATerm k_74, ATerm t)
{
  static ATerm b_11 (ATerm t)
  {
    ATerm t_87 = NULL;
    t_87 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_87, k_74);
    t = q_135(t);
    return(t);
  }
  static ATerm c_11 (ATerm t)
  {
    ATerm u_87 = NULL;
    u_87 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_87, l_74);
    t = q_135(t);
    return(t);
  }
  t = m_74;
  t = r_135(b_11, c_11, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm d_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_43 = ATgetArgument(t, 0);
      if(((ATgetType(a_43) != AT_LIST) || !(ATisEmpty(a_43))))
        _fail(t);
      {
        ATerm c_43 = ATgetArgument(t, 1);
        if(((ATgetType(c_43) != AT_LIST) || !(ATisEmpty(c_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_43 = ATgetArgument(t, 0);
      if(((ATgetType(d_43) == AT_LIST) && !(ATisEmpty(d_43))))
        {
          d_88 = ATgetFirst((ATermList) d_43);
          e_88 = (ATerm) ATgetNext((ATermList) d_43);
        }
      else
        _fail(t);
      {
        ATerm e_43 = ATgetArgument(t, 1);
        if(((ATgetType(e_43) == AT_LIST) && !(ATisEmpty(e_43))))
          {
            f_88 = ATgetFirst((ATermList) e_43);
            g_88 = (ATerm) ATgetNext((ATermList) e_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_88, f_88), (ATerm) ATmakeAppl(sym__2, e_88, g_88));
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm h_88 = NULL,i_88 = NULL;
  if(match_cons(t, sym__2))
    {
      h_88 = ATgetArgument(t, 0);
      i_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_88), h_88);
  return(t);
}
static ATerm z_8 (ATerm k_135 (ATerm), ATerm l_135 (ATerm (ATerm), ATerm), ATerm e_74, ATerm h_74, ATerm t)
{
  ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL,c_88 = NULL;
  t = e_74;
  t = k_135(t);
  x_87 = t;
  t = map_1_0(new_0_0, t);
  y_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_87, y_87);
  t = genzip_4_0(d_11, e_11, f_11, _id, t);
  c_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_88, h_74);
  t = conc_0_0(t);
  z_87 = t;
  t = e_74;
  {
    static ATerm i_11 (ATerm t)
    {
      t = y_87;
      return(t);
    }
    t = l_135(i_11, t);
  }
  a_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_88, h_74, z_87);
  return(t);
}
ATerm env_alltd_1_0 (ATerm e_112 (ATerm), ATerm t)
{
  static ATerm s_89 (ATerm t)
  {
    ATerm f_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_112(t);
        LocalPopChoice(j_43);
      }
    else
      {
        t = f_43;
        {
          ATerm p_89 = NULL,q_89 = NULL,r_89 = NULL;
          static ATerm j_11 (ATerm t)
          {
            ATerm r_36 = NULL;
            r_36 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_36, not_null(r_89));
            t = s_89(t);
            return(t);
          }
          p_89 = t;
          if(match_cons(t, sym__2))
            {
              q_89 = ATgetArgument(t, 0);
              if(((r_89 != NULL) && (r_89 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                r_89 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_89;
          t = SRTS_all(j_11, t);
        }
      }
    return(t);
  }
  t = s_89(t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_43 = ATgetArgument(t, 0);
      if(((ATgetType(k_43) != AT_LIST) || !(ATisEmpty(k_43))))
        _fail(t);
      {
        ATerm l_43 = ATgetArgument(t, 1);
        if(((ATgetType(l_43) != AT_LIST) || !(ATisEmpty(l_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm e_90 = NULL,f_90 = NULL,g_90 = NULL,h_90 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_43 = ATgetArgument(t, 0);
      if(((ATgetType(o_43) == AT_LIST) && !(ATisEmpty(o_43))))
        {
          e_90 = ATgetFirst((ATermList) o_43);
          f_90 = (ATerm) ATgetNext((ATermList) o_43);
        }
      else
        _fail(t);
      {
        ATerm p_43 = ATgetArgument(t, 1);
        if(((ATgetType(p_43) == AT_LIST) && !(ATisEmpty(p_43))))
          {
            g_90 = ATgetFirst((ATermList) p_43);
            h_90 = (ATerm) ATgetNext((ATermList) p_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_90, g_90), (ATerm) ATmakeAppl(sym__2, f_90, h_90));
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm i_90 = NULL,j_90 = NULL;
  if(match_cons(t, sym__2))
    {
      i_90 = ATgetArgument(t, 0);
      j_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_90), i_90);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL,z_89 = NULL;
  w_89 = t;
  {
    ATerm q_43 = t;
    int r_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_43 = ATgetArgument(t, 0);
            ATerm u_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(r_43);
        t = w_89;
      }
    else
      {
        t = q_43;
        {
          ATerm d_90 = NULL;
          if(match_cons(t, sym__3))
            {
              x_89 = ATgetArgument(t, 0);
              y_89 = ATgetArgument(t, 1);
              z_89 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, x_89, y_89);
          t = genzip_4_0(l_11, m_11, n_11, _id, t);
          d_90 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_90, z_89);
        }
      }
  }
  return(t);
}
ATerm substitute_6_0 (ATerm r_134 (ATerm), ATerm s_134 (ATerm (ATerm), ATerm), ATerm t_134 (ATerm), ATerm u_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_134 (ATerm (ATerm), ATerm), ATerm w_134 (ATerm), ATerm t)
{
  ATerm o_90 = NULL,p_90 = NULL;
  static ATerm h_91 (ATerm t)
  {
    static ATerm o_11 (ATerm t)
    {
      static ATerm i_91 (ATerm q_90, ATerm t)
      {
        ATerm r_90 = NULL,w_36 = NULL;
        t = SSL_explode_term(q_90);
        if(match_cons(t, sym__2))
          {
            ATerm v_43 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_43) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_43 = ATgetArgument(t, 1);
              if(((ATgetType(w_43) == AT_LIST) && !(ATisEmpty(w_43))))
                {
                  r_90 = ATgetFirst((ATermList) w_43);
                  {
                    ATerm x_43 = (ATerm) ATgetNext((ATermList) w_43);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_90;
        t = r_134(t);
        w_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_36, not_null(p_90));
        t = lookup_0_0(t);
        t = w_134(t);
        return(t);
      }
      static ATerm j_91 (ATerm t_90, ATerm u_90, ATerm v_90, ATerm t)
      {
        ATerm w_90 = NULL,x_90 = NULL,y_90 = NULL;
        t = v_90;
        t = z_8(t_134, v_134, t_90, u_90, t);
        if(match_cons(t, sym__3))
          {
            w_90 = ATgetArgument(t, 0);
            x_90 = ATgetArgument(t, 1);
            y_90 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = y_8(h_91, u_134, w_90, x_90, y_90, t);
        return(t);
      }
      ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL;
      b_91 = t;
      if(match_cons(t, sym__2))
        {
          c_91 = ATgetArgument(t, 0);
          d_91 = ATgetArgument(t, 1);
          {
            ATerm a_44 = t;
            int b_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm q_11 (ATerm t)
                {
                  ATerm g_91 = NULL;
                  g_91 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_91, d_91);
                  t = lookup_0_0(t);
                  return(t);
                }
                t = c_91;
                t = s_134(q_11, t);
                LocalPopChoice(b_44);
              }
            else
              {
                t = a_44;
                {
                  ATerm c_44 = t;
                  int e_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = i_91(b_91, t);
                      LocalPopChoice(e_44);
                    }
                  else
                    {
                      t = c_44;
                      t = j_91(c_91, d_91, b_91, t);
                    }
                }
              }
          }
        }
      else
        {
          t = i_91(b_91, t);
        }
      return(t);
    }
    t = env_alltd_1_0(o_11, t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((p_90 != NULL) && (p_90 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_90 = ATgetArgument(t, 0);
      o_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_90, (ATerm) ATempty);
  t = h_91(t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm o_91 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_91;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm g_44 = t;
  int h_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_44);
    }
  else
    {
      t = g_44;
      {
        ATerm i_44 = t;
        int j_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_44);
          }
        else
          {
            t = i_44;
            {
              ATerm k_44 = t;
              int l_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_91 = ATgetArgument(t, 0);
                      r_91 = ATgetArgument(t, 1);
                      s_91 = ATgetArgument(t, 2);
                      t_91 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_91;
                  t = map_1_0(t_11, t);
                  LocalPopChoice(l_44);
                }
              else
                {
                  t = k_44;
                  {
                    ATerm m_44 = t;
                    int n_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_44);
                      }
                    else
                      {
                        t = m_44;
                        t = dynrule_targs_1_0(v_11, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm a_92 = NULL;
  ATerm p_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_92 = ATgetArgument(t, 0);
          {
            ATerm r_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_44);
      t = a_92;
    }
  else
    {
      t = p_44;
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
static ATerm v_11 (ATerm t)
{
  t = map_1_0(w_11, t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm f_92 = NULL;
  ATerm s_44 = t;
  int t_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_92 = ATgetArgument(t, 0);
          {
            ATerm u_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_44);
      t = f_92;
    }
  else
    {
      t = s_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_92;
    }
  return(t);
}
ATerm tsubstitute_0_0 (ATerm t)
{
  t = substitute_6_0(r_11, Var_1_0, s_11, tboundin_3_0, tpaste_1_0, _id, t);
  return(t);
}
ATerm genzip_4_0 (ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm h_116 (ATerm), ATerm t)
{
  static ATerm p_92 (ATerm t)
  {
    ATerm v_44 = t;
    int w_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_116(t);
        LocalPopChoice(w_44);
      }
    else
      {
        t = v_44;
        {
          ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL,v_20 = NULL;
          t = f_116(t);
          o_92 = t;
          if(match_cons(t, sym__2))
            {
              k_92 = ATgetArgument(t, 0);
              l_92 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_92);
          j_92 = t;
          t = k_92;
          t = h_116(t);
          m_92 = t;
          t = l_92;
          t = p_92(t);
          n_92 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_92, n_92);
          v_20 = t;
          t = SSLsetAnnotations(v_20, j_92);
          t = g_116(t);
        }
      }
    return(t);
  }
  t = p_92(t);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_45 = ATgetArgument(t, 0);
      if(((ATgetType(a_45) != AT_LIST) || !(ATisEmpty(a_45))))
        _fail(t);
      {
        ATerm b_45 = ATgetArgument(t, 1);
        if(((ATgetType(b_45) != AT_LIST) || !(ATisEmpty(b_45))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm x_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_45 = ATgetArgument(t, 0);
      if(((ATgetType(c_45) == AT_LIST) && !(ATisEmpty(c_45))))
        {
          x_92 = ATgetFirst((ATermList) c_45);
          a_93 = (ATerm) ATgetNext((ATermList) c_45);
        }
      else
        _fail(t);
      {
        ATerm d_45 = ATgetArgument(t, 1);
        if(((ATgetType(d_45) == AT_LIST) && !(ATisEmpty(d_45))))
          {
            b_93 = ATgetFirst((ATermList) d_45);
            c_93 = (ATerm) ATgetNext((ATermList) d_45);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_92, b_93), (ATerm) ATmakeAppl(sym__2, a_93, c_93));
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm d_93 = NULL,e_93 = NULL;
  if(match_cons(t, sym__2))
    {
      d_93 = ATgetArgument(t, 0);
      e_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_93), d_93);
  return(t);
}
static ATerm h_9 (ATerm q_105 (ATerm), ATerm t_23, ATerm u_23, ATerm t)
{
  ATerm r_92 = NULL,s_92 = NULL;
  t = q_105(t);
  {
    static ATerm x_11 (ATerm t)
    {
      ATerm u_92 = NULL,v_92 = NULL,w_92 = NULL;
      u_92 = t;
      if(match_cons(t, sym_Overlay_3))
        {
          if((t_23 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          v_92 = ATgetArgument(t, 1);
          w_92 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, v_92, u_23);
      t = genzip_4_0(z_11, a_12, b_12, _id, t);
      if(((r_92 != NULL) && (r_92 != t)))
        _fail(t);
      else
        r_92 = t;
      t = w_92;
      if(((s_92 != NULL) && (s_92 != t)))
        _fail(t);
      else
        s_92 = t;
      t = u_92;
      return(t);
    }
    t = fetch_1_0(x_11, t);
  }
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_92), not_null(s_92));
  t = tsubstitute_0_0(t);
  return(t);
}
ATerm Trm_to_Cong_0_0 (ATerm t)
{
  ATerm k_93 = NULL,m_93 = NULL;
  ATerm e_45 = t;
  int f_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_BuildDefault_1))
        {
          ATerm g_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(f_45);
      t = term_g_19;
    }
  else
    {
      t = e_45;
      if(match_cons(t, sym_Real_1))
        {
          m_93 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, m_93));
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              m_93 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, m_93));
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  m_93 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, m_93));
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      m_93 = ATgetArgument(t, 0);
                      k_93 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_45, (ATerm)ATinsert(ATinsert(ATempty, k_93), m_93), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          m_93 = ATgetArgument(t, 0);
                          k_93 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_93), k_93, (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_Var_1))
                            {
                              m_93 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_93), (ATerm)ATempty, (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm trm_to_cong_0_0 (ATerm t)
{
  ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL;
  i_94 = t;
  if(match_cons(t, sym_Op_2))
    {
      g_94 = ATgetArgument(t, 0);
      h_94 = ATgetArgument(t, 1);
      {
        ATerm i_45 = t;
        int j_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_37 = NULL,h_37 = NULL,t_35 = NULL;
            t = SSLgetAnnotations(i_94);
            e_37 = t;
            t = h_94;
            t = map_1_0(trm_to_cong_0_0, t);
            h_37 = t;
            t = (ATerm) ATmakeAppl(sym_Op_2, g_94, h_37);
            t_35 = t;
            t = SSLsetAnnotations(t_35, e_37);
            LocalPopChoice(j_45);
          }
        else
          {
            t = i_45;
            t = i_94;
          }
      }
    }
  else
    {
      t = i_94;
    }
  t = Trm_to_Cong_0_0(t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm q_94 = NULL;
  q_94 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_94, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_17), term_o_17));
  return(t);
}
static ATerm o_8 (ATerm a_24, ATerm d_24, ATerm c_24, ATerm t)
{
  ATerm n_94 = NULL,o_94 = NULL;
  t = d_24;
  t = map_1_0(e_12, t);
  n_94 = t;
  t = c_24;
  t = trm_to_cong_0_0(t);
  o_94 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, a_24, n_94, o_94);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      e_95 = ATgetArgument(t, 0);
      f_95 = ATgetArgument(t, 1);
      g_95 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_8(e_95, f_95, g_95, t);
  return(t);
}
static ATerm i_9 (ATerm r_22, ATerm t_22, ATerm s_22, ATerm t)
{
  ATerm u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL;
  t = t_22;
  {
    ATerm k_45 = t;
    int l_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_12 (ATerm t)
        {
          static ATerm q_12 (ATerm t)
          {
            ATerm z_94 = NULL,a_95 = NULL;
            static ATerm r_12 (ATerm t)
            {
              t = t_22;
              return(t);
            }
            if(match_cons(t, sym_Op_2))
              {
                z_94 = ATgetArgument(t, 0);
                a_95 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = h_9(r_12, z_94, a_95, t);
            return(t);
          }
          t = repeat_2_0(q_12, _id, t);
          return(t);
        }
        ATerm m_45 = t;
        if((PushChoice() == 0))
          {
            t = t_22;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_45;
          }
        t = t_22;
        t = topdown_1_0(p_12, t);
        LocalPopChoice(l_45);
      }
    else
      {
        t = k_45;
      }
  }
  u_94 = t;
  t = t_22;
  t = map_1_0(s_12, t);
  w_94 = t;
  t = s_22;
  {
    ATerm n_45 = t;
    int o_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_12 (ATerm t)
        {
          ATerm p_45 = t;
          int q_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_37 = NULL,s_37 = NULL;
              static ATerm u_12 (ATerm t)
              {
                t = u_94;
                return(t);
              }
              if(match_cons(t, sym_Op_2))
                {
                  r_37 = ATgetArgument(t, 0);
                  s_37 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_9(u_12, r_37, s_37, t);
              LocalPopChoice(q_45);
            }
          else
            {
              t = p_45;
            }
          return(t);
        }
        ATerm r_45 = t;
        if((PushChoice() == 0))
          {
            t = u_94;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_45;
          }
        t = s_22;
        t = topdown_1_0(t_12, t);
        LocalPopChoice(o_45);
      }
    else
      {
        t = n_45;
      }
  }
  x_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_94, x_94);
  t = conc_0_0(t);
  v_94 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, v_94)), (ATerm) ATmakeAppl(sym_Signature_1, r_22)));
  return(t);
}
static ATerm j_9 (ATerm i_48, ATerm j_48, ATerm t)
{
  ATerm l_95 = NULL;
  t = SSL_fputc(i_48, j_48);
  l_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_95);
  return(t);
}
static ATerm k_9 (ATerm y_33, ATerm z_33, ATerm t)
{
  ATerm m_95 = NULL;
  t = SSL_write_term_to_stream_text(y_33, z_33);
  m_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_95);
  return(t);
}
static ATerm m_9 (ATerm r_113 (ATerm), ATerm y_238, ATerm e_34, ATerm t)
{
  ATerm n_95 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_238, term_s_45);
  t = q_9(t);
  n_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_95, e_34);
  t = r_113(t);
  t = fclose_0_0(t);
  t = e_34;
  return(t);
}
static ATerm l_9 (ATerm u_33, ATerm v_33, ATerm t)
{
  ATerm o_95 = NULL;
  t = SSL_write_term_to_stream_baf(u_33, v_33);
  o_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_95);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm v_95 = NULL,w_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_45 = ATgetArgument(t, 0);
      if(match_cons(t_45, sym_Stream_1))
        {
          v_95 = ATgetArgument(t_45, 0);
        }
      else
        _fail(t);
      w_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_9(v_95, w_95, t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_45 = ATgetArgument(t, 0);
      if(match_cons(u_45, sym_Stream_1))
        {
          a_96 = ATgetArgument(u_45, 0);
        }
      else
        _fail(t);
      b_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9(a_96, b_96, t);
  x_95 = t;
  t = term_x_45;
  y_95 = t;
  t = x_95;
  if(match_cons(t, sym_Stream_1))
    {
      z_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_45, x_95);
  t = j_9(y_95, z_95, t);
  return(t);
}
ATerm output_1_0 (ATerm p_132 (ATerm), ATerm t)
{
  ATerm p_95 = NULL,q_95 = NULL;
  t = p_132(t);
  q_95 = t;
  {
    ATerm y_45 = t;
    int z_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_95 = NULL,s_95 = NULL;
        t = term_a_46;
        r_95 = t;
        t = term_e_46;
        s_95 = t;
        t = term_f_46;
        t = w_9(r_95, s_95, t);
        LocalPopChoice(z_45);
      }
    else
      {
        t = y_45;
        t = term_g_46;
      }
  }
  p_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_95, q_95);
  {
    ATerm h_46 = t;
    int i_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_95 = NULL,u_95 = NULL;
        t = term_a_46;
        t_95 = t;
        t = term_j_46;
        u_95 = t;
        t = term_k_46;
        t = w_9(t_95, u_95, t);
        t = (ATerm) ATmakeAppl(sym__2, p_95, q_95);
        LocalPopChoice(i_46);
        if(match_cons(t, sym__2))
          {
            ATerm l_46 = ATgetArgument(t, 0);
            ATerm m_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_9(v_12, p_95, q_95, t);
      }
    else
      {
        t = h_46;
        if(match_cons(t, sym__2))
          {
            ATerm n_46 = ATgetArgument(t, 0);
            ATerm o_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_9(x_12, p_95, q_95, t);
      }
  }
  return(t);
}
static ATerm p_96 (ATerm j_96, ATerm t)
{
  t = SSL_fclose(j_96);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_96 = NULL,n_96 = NULL;
  n_96 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_96 = ATgetArgument(t, 0);
      {
        ATerm p_46 = t;
        int q_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_96);
            LocalPopChoice(q_46);
          }
        else
          {
            t = p_46;
            t = p_96(n_96, t);
          }
      }
    }
  else
    {
      t = p_96(n_96, t);
    }
  return(t);
}
static ATerm n_9 (ATerm a_34, ATerm t)
{
  t = SSL_read_term_from_stream(a_34);
  return(t);
}
static ATerm o_9 (ATerm b_47, ATerm c_47, ATerm t)
{
  t = SSL_strcat(b_47, c_47);
  return(t);
}
static ATerm p_9 (ATerm k_48, ATerm l_48, ATerm t)
{
  ATerm q_96 = NULL;
  t = SSL_fopen(k_48, l_48);
  q_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_96);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_96 = NULL;
  t = SSL_stdin_stream();
  r_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_96);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_96 = NULL;
  t = SSL_stdout_stream();
  s_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_96);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_96 = NULL;
  t = SSL_stderr_stream();
  t_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_96);
  return(t);
}
static ATerm a_98 (ATerm z_96, ATerm t)
{
  ATerm a_97 = NULL;
  t = SSL_explode_term(z_96);
  if(match_cons(t, sym__2))
    {
      ATerm r_46 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_46) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_46 = ATgetArgument(t, 1);
        if(((ATgetType(s_46) == AT_LIST) && !(ATisEmpty(s_46))))
          {
            a_97 = ATgetFirst((ATermList) s_46);
            {
              ATerm t_46 = (ATerm) ATgetNext((ATermList) s_46);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_97;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_97;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_97;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_97;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_98 (ATerm d_97, ATerm e_97, ATerm f_97, ATerm t)
{
  ATerm g_97 = NULL,h_97 = NULL,i_97 = NULL,l_97 = NULL,w_35 = NULL;
  t = SSLgetAnnotations(f_97);
  i_97 = t;
  t = d_97;
  if(match_cons(t, sym_Path_1))
    {
      l_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_97, e_97);
  w_35 = t;
  t = SSLsetAnnotations(w_35, i_97);
  if(match_cons(t, sym__2))
    {
      g_97 = ATgetArgument(t, 0);
      h_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(g_97, h_97, t);
  return(t);
}
static ATerm c_98 (ATerm n_97, ATerm o_97, ATerm p_97, ATerm t)
{
  ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL,v_97 = NULL,f_36 = NULL;
  t = SSLgetAnnotations(p_97);
  s_97 = t;
  t = SSL_is_string(n_97);
  v_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_97, o_97);
  f_36 = t;
  t = SSLsetAnnotations(f_36, s_97);
  if(match_cons(t, sym__2))
    {
      q_97 = ATgetArgument(t, 0);
      r_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(q_97, r_97, t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm x_97 = NULL,y_97 = NULL,z_97 = NULL;
  x_97 = t;
  if(match_cons(t, sym__2))
    {
      y_97 = ATgetArgument(t, 0);
      z_97 = ATgetArgument(t, 1);
      {
        ATerm u_46 = t;
        int v_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_98(x_97, t);
            LocalPopChoice(v_46);
          }
        else
          {
            t = u_46;
            {
              ATerm a_47 = t;
              int d_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_98(y_97, z_97, x_97, t);
                  LocalPopChoice(d_47);
                }
              else
                {
                  t = a_47;
                  t = c_98(y_97, z_97, x_97, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_98(x_97, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_98 = NULL,f_98 = NULL,g_98 = NULL,l_98 = NULL;
  l_98 = t;
  {
    ATerm e_47 = t;
    int f_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_98, term_g_47);
        t = q_9(t);
        LocalPopChoice(f_47);
      }
    else
      {
        t = e_47;
        {
          ATerm b_38 = NULL,c_38 = NULL;
          t = term_j_47;
          c_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_47, l_98);
          t = o_9(c_38, l_98, t);
          b_38 = t;
          t = SSL_perror(b_38);
          _fail(t);
        }
      }
  }
  f_98 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_9(g_98, t);
  e_98 = t;
  t = f_98;
  t = fclose_0_0(t);
  t = e_98;
  return(t);
}
ATerm input_1_0 (ATerm q_132 (ATerm), ATerm t)
{
  ATerm k_47 = t;
  int l_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_98 = NULL,p_98 = NULL;
      t = term_a_46;
      o_98 = t;
      t = term_p_47;
      p_98 = t;
      t = term_q_47;
      t = w_9(o_98, p_98, t);
      LocalPopChoice(l_47);
    }
  else
    {
      t = k_47;
      t = term_r_47;
    }
  t = ReadFromFile_0_0(t);
  t = q_132(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL;
  q_98 = t;
  t = term_o_20;
  t = whoami_0_0(t);
  r_98 = t;
  t = term_s_47;
  t_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_47), r_98), term_t_47);
  u_98 = t;
  t = SSL_printnl(t_98, u_98);
  t = term_x_22;
  s_98 = t;
  t = SSL_exit(s_98);
  t = q_98;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm w_98 = NULL;
  w_98 = t;
  if(match_string(t, "-k"))
    {
      t = w_98;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_98;
    }
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm x_98 = NULL,y_98 = NULL,z_98 = NULL;
  x_98 = t;
  t = SSL_string_to_int(x_98);
  y_98 = t;
  t = term_w_47;
  z_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_47, y_98);
  t = z_9(z_98, y_98, t);
  t = x_98;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_x_47;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_12, i_13, s_13, t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm b_99 = NULL;
  b_99 = t;
  if(match_string(t, "-S"))
    {
      t = b_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_99;
    }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm c_99 = NULL,d_99 = NULL;
  t = term_y_47;
  c_99 = t;
  t = term_v_22;
  d_99 = t;
  t = term_z_47;
  t = z_9(c_99, d_99, t);
  t = term_a_48;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = term_b_48;
  return(t);
}
static ATerm d_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm e_99 = NULL,f_99 = NULL,g_99 = NULL;
  e_99 = t;
  t = SSL_string_to_int(e_99);
  f_99 = t;
  t = term_y_47;
  g_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_47, f_99);
  t = z_9(g_99, f_99, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_99);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = term_c_48;
  return(t);
}
static ATerm h_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm h_99 = NULL,i_99 = NULL;
  t = term_d_48;
  h_99 = t;
  t = term_o_20;
  i_99 = t;
  t = term_e_48;
  t = z_9(h_99, i_99, t);
  t = term_f_48;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = term_g_48;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_48 = t;
  int m_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_13, x_13, y_13, t);
      LocalPopChoice(m_48);
    }
  else
    {
      t = h_48;
      {
        ATerm n_48 = t;
        int o_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_14, e_14, g_14, t);
            LocalPopChoice(o_48);
          }
        else
          {
            t = n_48;
            t = Option_3_0(h_14, i_14, j_14, t);
          }
      }
    }
  return(t);
}
static ATerm z_9 (ATerm g_64, ATerm h_64, ATerm t)
{
  ATerm j_99 = NULL,k_99 = NULL;
  t = term_a_46;
  j_99 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_46, g_64, h_64);
  t = lookup_table_0_1(j_99, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_10(g_64, h_64, k_99, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_46, g_64, h_64);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_99 = NULL,p_99 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_99 = NULL,r_99 = NULL,s_99 = NULL;
      t = term_o_20;
      t = j_0(t);
      q_99 = t;
      t = term_p_48;
      r_99 = t;
      t = term_q_48;
      s_99 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_48, term_q_48, q_99);
      t = x_9(r_99, s_99, q_99, t);
      _fail(t);
    }
  else
    {
      ATerm v_99 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_99 = ATgetFirst((ATermList) t);
          p_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_99;
      t = d_0(t);
      t = term_o_20;
      t = g_0(t);
      v_99 = t;
      t = (ATerm) ATinsert(CheckATermList(p_99), v_99);
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm x_99 = NULL;
  x_99 = t;
  if(match_string(t, "-o"))
    {
      t = x_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_99;
    }
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm y_99 = NULL,z_99 = NULL;
  y_99 = t;
  t = term_e_46;
  z_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_46, y_99);
  t = z_9(z_99, y_99, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_99);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_r_48;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_14, n_14, o_14, t);
  return(t);
}
static ATerm x_9 (ATerm b_69, ATerm c_69, ATerm a_69, ATerm t)
{
  ATerm b_100 = NULL,c_100 = NULL,d_100 = NULL,e_100 = NULL,f_100 = NULL;
  b_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_69, c_69);
  {
    ATerm s_48 = t;
    int t_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_48 = ATgetArgument(t, 0);
            ATerm v_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_69, c_69);
        t = w_9(b_69, c_69, t);
        LocalPopChoice(t_48);
      }
    else
      {
        t = s_48;
        t = (ATerm) ATempty;
      }
  }
  c_100 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_69, c_69, (ATerm) ATinsert(CheckATermList(c_100), a_69));
  t = lookup_table_0_1(b_69, t);
  f_100 = t;
  t = (ATerm) ATinsert(CheckATermList(c_100), a_69);
  d_100 = t;
  t = f_100;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_10(c_69, d_100, e_100, t);
  t = b_100;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm m_100 = NULL,n_100 = NULL,o_100 = NULL,p_100 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL;
      t = term_o_20;
      t = v_0(t);
      q_100 = t;
      t = term_p_48;
      r_100 = t;
      t = term_q_48;
      s_100 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_48, term_q_48, q_100);
      t = x_9(r_100, s_100, q_100, t);
      _fail(t);
    }
  else
    {
      ATerm w_100 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_100 = ATgetFirst((ATermList) t);
          n_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_100;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_100 = ATgetFirst((ATermList) t);
          p_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_100;
      t = p_0(t);
      t = o_100;
      t = t_0(t);
      w_100 = t;
      t = (ATerm) ATinsert(CheckATermList(p_100), w_100);
    }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm y_100 = NULL;
  y_100 = t;
  if(match_string(t, "-i"))
    {
      t = y_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_100;
    }
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm z_100 = NULL,a_101 = NULL;
  z_100 = t;
  t = term_p_47;
  a_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_47, z_100);
  t = z_9(a_101, z_100, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_100);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = term_w_48;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_14, q_14, r_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_101 = NULL,c_101 = NULL,d_101 = NULL,e_101 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_20;
  t = whoami_0_0(t);
  b_101 = t;
  t = term_s_47;
  d_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_48), b_101);
  e_101 = t;
  t = SSL_printnl(d_101, e_101);
  t = term_x_22;
  c_101 = t;
  t = SSL_exit(c_101);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm f_101 = NULL,g_101 = NULL;
  t = term_a_46;
  f_101 = t;
  t = term_y_48;
  g_101 = t;
  t = term_z_48;
  t = w_9(f_101, g_101, t);
  return(t);
}
static ATerm r_9 (ATerm e_51, ATerm f_51, ATerm t)
{
  ATerm a_49 = t;
  int b_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_51, f_51);
      LocalPopChoice(b_49);
    }
  else
    {
      t = a_49;
      t = SSL_addr(e_51, f_51);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm t)
{
  ATerm i_101 = NULL,j_101 = NULL,k_101 = NULL;
  i_101 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_101;
      t = o_120(t);
    }
  else
    {
      ATerm n_101 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_101 = ATgetFirst((ATermList) t);
          k_101 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_101;
      t = foldr_2_0(o_120, p_120, t);
      n_101 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_101, n_101);
      t = p_120(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = term_v_22;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL;
  if(match_cons(t, sym__2))
    {
      i_38 = ATgetArgument(t, 0);
      j_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9(i_38, j_38, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_101 = NULL,e_38 = NULL,f_38 = NULL;
  t = times_0_0(t);
  f_38 = t;
  t = SSL_explode_term(f_38);
  if(match_cons(t, sym__2))
    {
      ATerm c_49 = ATgetArgument(t, 0);
      e_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_38;
  t = foldr_2_0(t_14, u_14, t);
  q_101 = t;
  t = SSL_TicksToSeconds(q_101);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_102 = NULL,c_102 = NULL,d_102 = NULL;
  b_102 = t;
  if(match_cons(t, sym__2))
    {
      c_102 = ATgetArgument(t, 0);
      d_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_49 = t;
    int e_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_102;
        if((c_102 != t))
          {
            _fail(t);
          }
        t = b_102;
        LocalPopChoice(e_49);
      }
    else
      {
        t = d_49;
        t = (ATerm) ATmakeAppl(sym__2, c_102, d_102);
        {
          ATerm f_49 = t;
          int g_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_102, d_102);
              LocalPopChoice(g_49);
            }
          else
            {
              t = f_49;
              t = SSL_gtr(c_102, d_102);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_102, d_102);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_129 (ATerm), ATerm t)
{
  ATerm h_102 = NULL;
  h_102 = t;
  {
    ATerm h_49 = t;
    int i_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_102 = NULL,k_102 = NULL,l_102 = NULL;
        t = term_a_46;
        k_102 = t;
        t = term_y_47;
        l_102 = t;
        t = term_j_49;
        t = w_9(k_102, l_102, t);
        j_102 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_102, term_x_22);
        t = geq_0_0(t);
        t = h_102;
        t = q_129(t);
        LocalPopChoice(i_49);
      }
    else
      {
        t = h_49;
        t = h_102;
      }
  }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm n_102 = NULL,o_102 = NULL,q_102 = NULL,r_102 = NULL;
  t = run_time_0_0(t);
  n_102 = t;
  t = term_o_20;
  t = whoami_0_0(t);
  o_102 = t;
  t = term_s_47;
  q_102 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_49), n_102), term_k_49), o_102);
  r_102 = t;
  t = SSL_printnl(q_102, r_102);
  t = (ATerm) ATmakeAppl(sym__2, term_s_47, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_49), n_102), term_k_49), o_102));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_102 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_22;
  s_102 = t;
  t = SSL_exit(s_102);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL;
  d_103 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_103;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_103 = ATgetArgument(t, 0);
          {
            ATerm p_39 = NULL,y_36 = NULL;
            t = SSLgetAnnotations(d_103);
            p_39 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_103);
            y_36 = t;
            t = SSLsetAnnotations(y_36, p_39);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_103;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_132 (ATerm), ATerm t)
{
  ATerm m_49 = t;
  int n_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_102 = NULL,w_102 = NULL;
      t = term_a_46;
      v_102 = t;
      t = term_o_49;
      w_102 = t;
      t = term_p_49;
      t = w_9(v_102, w_102, t);
      LocalPopChoice(n_49);
    }
  else
    {
      t = m_49;
      t = fetch_1_0(a_15, t);
    }
  t = g_132(t);
  return(t);
}
static ATerm a_10 (ATerm g_73, ATerm h_73, ATerm i_73, ATerm t)
{
  ATerm f_103 = NULL;
  t = SSL_hashtable_put(i_73, g_73, h_73);
  f_103 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_103);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_70, ATerm t)
{
  ATerm o_103 = NULL;
  t = table_hashtable_0_0(t);
  o_103 = t;
  {
    ATerm q_49 = t;
    int r_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_39 = NULL;
        t = o_103;
        if(match_cons(t, sym_Hashtable_1))
          {
            x_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_10(n_70, x_39, t);
        LocalPopChoice(r_49);
      }
    else
      {
        t = q_49;
        {
          ATerm h_40 = NULL;
          t = n_70;
          t = table_create_0_0(t);
          t = o_103;
          if(match_cons(t, sym_Hashtable_1))
            {
              h_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_10(n_70, h_40, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_73, ATerm p_73, ATerm t)
{
  ATerm r_103 = NULL;
  t = SSL_hashtable_create(o_73, p_73);
  r_103 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_103);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm s_103 = NULL,t_103 = NULL,u_103 = NULL,w_103 = NULL,x_103 = NULL;
  s_103 = t;
  t = term_s_49;
  w_103 = t;
  t = term_t_49;
  x_103 = t;
  t = s_103;
  t = new_hashtable_0_2(w_103, x_103, t);
  t_103 = t;
  t = s_103;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_10(s_103, t_103, u_103, t);
  t = s_103;
  return(t);
}
static ATerm t_9 (ATerm l_73, ATerm m_73, ATerm t)
{
  ATerm y_103 = NULL;
  t = SSL_hashtable_remove(m_73, l_73);
  y_103 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_103);
  return(t);
}
static ATerm u_9 (ATerm q_73, ATerm t)
{
  ATerm z_103 = NULL;
  t = SSL_hashtable_destroy(q_73);
  z_103 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_103);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm a_104 = NULL;
  t = SSL_table_hashtable();
  a_104 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_104);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm b_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL;
  b_104 = t;
  t = table_hashtable_0_0(t);
  c_104 = t;
  t = lookup_table_0_1(b_104, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_9(e_104, t);
  t = c_104;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_9(b_104, d_104, t);
  t = b_104;
  return(t);
}
ATerm map_1_0 (ATerm a_114 (ATerm), ATerm t)
{
  static ATerm t_104 (ATerm t)
  {
    ATerm q_104 = NULL,r_104 = NULL,s_104 = NULL;
    q_104 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_104;
      }
    else
      {
        ATerm n_40 = NULL,u_40 = NULL,x_40 = NULL,q_37 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_104 = ATgetFirst((ATermList) t);
            s_104 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_104);
        n_40 = t;
        t = r_104;
        t = a_114(t);
        u_40 = t;
        t = s_104;
        t = t_104(t);
        x_40 = t;
        t = (ATerm) ATinsert(CheckATermList(x_40), u_40);
        q_37 = t;
        t = SSLsetAnnotations(q_37, n_40);
      }
    return(t);
  }
  t = t_104(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm w_104 = NULL,x_104 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_104 = ATgetFirst((ATermList) t);
      x_104 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_105 = NULL,c_105 = NULL;
        static ATerm b_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_105)), not_null(c_105));
          return(t);
        }
        t = x_104;
        t = o_0(t);
        if(((b_105 != NULL) && (b_105 != t)))
          _fail(t);
        else
          b_105 = t;
        t = w_104;
        t = l_0(t);
        if(((c_105 != NULL) && (c_105 != t)))
          _fail(t);
        else
          c_105 = t;
        t = x_104;
        t = reverse_acc_2_0(l_0, b_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_20;
      t = o_0(t);
    }
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm i_105 = NULL,j_105 = NULL,k_105 = NULL,h_38 = NULL;
  k_105 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_105);
  i_105 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_105);
  h_38 = t;
  t = SSLsetAnnotations(h_38, i_105);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm m_105 = NULL;
  m_105 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_105), term_u_49);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_105 = NULL,f_105 = NULL;
  ATerm v_49 = t;
  int w_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_105 = NULL,h_105 = NULL;
      t = term_a_46;
      g_105 = t;
      t = term_y_48;
      h_105 = t;
      t = term_z_48;
      t = w_9(g_105, h_105, t);
      LocalPopChoice(w_49);
    }
  else
    {
      t = v_49;
      t = fetch_1_0(d_15, t);
    }
  t = term_x_49;
  t = echo_0_0(t);
  t = term_p_48;
  e_105 = t;
  t = term_q_48;
  f_105 = t;
  t = term_y_49;
  t = w_9(e_105, f_105, t);
  t = reverse_acc_2_0(_id, e_15, t);
  t = map_1_0(r_15, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_114 (ATerm), ATerm t)
{
  static ATerm s_106 (ATerm t)
  {
    ATerm m_106 = NULL,n_106 = NULL,r_106 = NULL;
    m_106 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_106 = ATgetFirst((ATermList) t);
        r_106 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_49 = t;
      int a_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_41 = NULL,u_41 = NULL,m_43 = NULL;
          t = SSLgetAnnotations(m_106);
          p_41 = t;
          t = n_106;
          t = k_114(t);
          u_41 = t;
          t = (ATerm) ATinsert(CheckATermList(r_106), u_41);
          m_43 = t;
          t = SSLsetAnnotations(m_43, p_41);
          LocalPopChoice(a_50);
        }
      else
        {
          t = z_49;
          {
            ATerm n_42 = NULL,q_42 = NULL,n_43 = NULL;
            t = SSLgetAnnotations(m_106);
            n_42 = t;
            t = r_106;
            t = s_106(t);
            q_42 = t;
            t = (ATerm) ATinsert(CheckATermList(q_42), n_106);
            n_43 = t;
            t = SSLsetAnnotations(n_43, n_42);
          }
        }
    }
    return(t);
  }
  t = s_106(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_106 = NULL,x_106 = NULL,y_106 = NULL;
  w_106 = t;
  {
    ATerm b_50 = t;
    int c_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_106;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_50 = ATgetFirst((ATermList) t);
                ATerm e_50 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_106;
          }
        LocalPopChoice(c_50);
      }
    else
      {
        t = b_50;
        t = (ATerm) ATinsert(ATempty, w_106);
      }
  }
  x_106 = t;
  t = term_g_46;
  y_106 = t;
  t = SSL_printnl(y_106, x_106);
  t = w_106;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_107 = NULL,d_107 = NULL;
  t = term_a_46;
  c_107 = t;
  t = term_y_48;
  d_107 = t;
  t = term_z_48;
  t = w_9(c_107, d_107, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm b_10 (ATerm j_73, ATerm k_73, ATerm t)
{
  t = SSL_hashtable_get(k_73, j_73);
  return(t);
}
static ATerm w_9 (ATerm u_70, ATerm v_70, ATerm t)
{
  ATerm e_107 = NULL;
  t = lookup_table_0_1(u_70, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_10(v_70, e_107, t);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm m_107 = NULL,n_107 = NULL;
  t = term_f_50;
  m_107 = t;
  t = term_o_20;
  n_107 = t;
  t = term_g_50;
  t = z_9(m_107, n_107, t);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = term_h_50;
  return(t);
}
static ATerm d_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm p_107 = NULL,q_107 = NULL,r_107 = NULL,s_107 = NULL;
  t = term_f_50;
  r_107 = t;
  t = term_o_20;
  s_107 = t;
  t = term_g_50;
  t = z_9(r_107, s_107, t);
  t = term_i_50;
  p_107 = t;
  t = term_o_20;
  q_107 = t;
  t = term_j_50;
  t = z_9(p_107, q_107, t);
  t = term_k_50;
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_l_50;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_50 = t;
  int n_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_15, w_15, b_16, t);
      LocalPopChoice(n_50);
    }
  else
    {
      t = m_50;
      t = Option_3_0(d_16, g_16, k_16, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_92 (ATerm), ATerm z_92 (ATerm), ATerm t)
{
  ATerm t_107 = NULL,u_107 = NULL,v_107 = NULL,w_107 = NULL,x_107 = NULL,y_107 = NULL,y_43 = NULL;
  y_107 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_107 = ATgetFirst((ATermList) t);
      v_107 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_107);
  t_107 = t;
  t = u_107;
  t = y_92(t);
  w_107 = t;
  t = v_107;
  t = z_92(t);
  x_107 = t;
  t = (ATerm) ATinsert(CheckATermList(x_107), w_107);
  y_43 = t;
  t = SSLsetAnnotations(y_43, t_107);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_134 (ATerm), ATerm t)
{
  ATerm d_108 = NULL,e_108 = NULL,f_108 = NULL,g_108 = NULL,i_108 = NULL,j_108 = NULL,d_44 = NULL;
  d_108 = t;
  {
    ATerm o_50 = t;
    int p_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_50;
        t = j_134(t);
        LocalPopChoice(p_50);
      }
    else
      {
        t = o_50;
      }
  }
  t = d_108;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_108 = ATgetFirst((ATermList) t);
      g_108 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_108);
  e_108 = t;
  t = term_y_48;
  j_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_48, f_108);
  t = z_9(j_108, f_108, t);
  t = g_108;
  {
    static ATerm v_108 (ATerm t)
    {
      ATerm r_50 = t;
      int s_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_50 = t;
          int u_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_108 = NULL;
              m_108 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_108;
              LocalPopChoice(u_50);
            }
          else
            {
              t = t_50;
              t = j_134(t);
              t = Cons_2_0(_id, v_108, t);
            }
          LocalPopChoice(s_50);
        }
      else
        {
          t = r_50;
          {
            ATerm p_108 = NULL,q_108 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_108 = ATgetFirst((ATermList) t);
                q_108 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_108), (ATerm) ATmakeAppl(sym_Undefined_1, p_108));
          }
        }
      return(t);
    }
    t = v_108(t);
  }
  i_108 = t;
  t = (ATerm) ATinsert(CheckATermList(i_108), (ATerm) ATmakeAppl(sym_Program_1, f_108));
  d_44 = t;
  t = SSLsetAnnotations(d_44, e_108);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm i_109 = NULL;
  i_109 = t;
  if(match_string(t, "--help"))
    {
      t = i_109;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_109;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_109;
        }
    }
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm j_109 = NULL,k_109 = NULL;
  t = term_o_49;
  j_109 = t;
  t = term_o_20;
  k_109 = t;
  t = term_v_50;
  t = z_9(j_109, k_109, t);
  t = term_w_50;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = term_x_50;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_134 (ATerm), ATerm t)
{
  ATerm a_109 = NULL,b_109 = NULL,c_109 = NULL,d_109 = NULL,e_109 = NULL,f_109 = NULL,g_109 = NULL,h_109 = NULL;
  c_109 = t;
  t = term_p_48;
  d_109 = t;
  t = term_y_50;
  t = lookup_table_0_1(d_109, t);
  h_109 = t;
  t = term_q_48;
  e_109 = t;
  t = (ATerm) ATempty;
  f_109 = t;
  t = h_109;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_10(e_109, f_109, g_109, t);
  t = c_109;
  {
    static ATerm l_16 (ATerm t)
    {
      ATerm z_50 = t;
      int a_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_134(t);
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
                t = Option_3_0(m_16, n_16, q_16, t);
                LocalPopChoice(c_51);
              }
            else
              {
                t = b_51;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_16, t);
  }
  {
    ATerm d_51 = t;
    int g_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_109 = NULL;
        v_109 = t;
        {
          ATerm h_51 = t;
          int i_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_42 = NULL;
              t = v_109;
              {
                ATerm j_51 = t;
                int k_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_42 = NULL,b_43 = NULL;
                    t = term_a_46;
                    z_42 = t;
                    t = term_o_49;
                    b_43 = t;
                    t = term_p_49;
                    t = w_9(z_42, b_43, t);
                    LocalPopChoice(k_51);
                  }
                else
                  {
                    t = j_51;
                    t = fetch_1_0(r_16, t);
                  }
              }
              t = v_109;
              t = default_system_usage_0_0(t);
              t = term_v_22;
              y_42 = t;
              t = SSL_exit(y_42);
              LocalPopChoice(i_51);
            }
          else
            {
              t = h_51;
              {
                ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
                t = term_a_46;
                h_43 = t;
                t = term_f_50;
                i_43 = t;
                t = term_l_51;
                t = w_9(h_43, i_43, t);
                t = v_109;
                t = default_system_about_0_0(t);
                t = term_v_22;
                g_43 = t;
                t = SSL_exit(g_43);
              }
            }
        }
        LocalPopChoice(g_51);
      }
    else
      {
        t = d_51;
        {
          ATerm m_51 = t;
          int n_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_109 = NULL,x_109 = NULL,y_109 = NULL;
              static ATerm s_16 (ATerm t)
              {
                ATerm z_109 = NULL,a_110 = NULL,b_110 = NULL,f_44 = NULL;
                b_110 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_110 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_110);
                z_109 = t;
                t = a_110;
                if(((a_109 != NULL) && (a_109 != t)))
                  _fail(t);
                else
                  a_109 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_110);
                f_44 = t;
                t = SSLsetAnnotations(f_44, z_109);
                return(t);
              }
              t = fetch_1_0(s_16, t);
              t = term_s_47;
              x_109 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_109)), term_o_51);
              y_109 = t;
              t = SSL_printnl(x_109, y_109);
              t = (ATerm) ATmakeAppl(sym__2, term_s_47, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_109)), term_o_51));
              t = default_system_usage_0_0(t);
              t = term_x_22;
              w_109 = t;
              t = SSL_exit(w_109);
              LocalPopChoice(n_51);
            }
          else
            {
              t = m_51;
            }
        }
      }
  }
  b_109 = t;
  t = term_p_48;
  t = table_destroy_0_0(t);
  t = b_109;
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_132 (ATerm), ATerm j_132 (ATerm), ATerm k_132 (ATerm), ATerm l_132 (ATerm), ATerm t)
{
  ATerm g_110 = NULL,h_110 = NULL,i_110 = NULL,j_110 = NULL,k_110 = NULL;
  t = parse_options_1_0(i_132, t);
  g_110 = t;
  t = term_p_51;
  t = table_create_0_0(t);
  t = term_p_51;
  h_110 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_51, term_q_51, g_110);
  t = lookup_table_0_1(h_110, t);
  k_110 = t;
  t = term_q_51;
  i_110 = t;
  t = k_110;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_10(i_110, g_110, j_110, t);
  t = g_110;
  t = k_132(t);
  {
    ATerm r_51 = t;
    int s_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_132, t);
        LocalPopChoice(s_51);
      }
    else
      {
        t = r_51;
        {
          ATerm t_51 = t;
          int u_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_132(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_51);
            }
          else
            {
              t = t_51;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm v_51 = t;
  int w_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(w_51);
    }
  else
    {
      t = v_51;
      {
        ATerm x_51 = t;
        int y_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(y_51);
          }
        else
          {
            t = x_51;
            {
              ATerm z_51 = t;
              int a_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(y_16, z_16, d_17, t);
                  LocalPopChoice(a_52);
                }
              else
                {
                  t = z_51;
                  {
                    ATerm b_52 = t;
                    int c_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(c_52);
                      }
                    else
                      {
                        t = b_52;
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
static ATerm w_16 (ATerm t)
{
  t = input_1_0(e_17, t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm d_111 = NULL,e_111 = NULL;
  t = term_j_46;
  d_111 = t;
  t = term_o_20;
  e_111 = t;
  t = term_d_52;
  t = z_9(d_111, e_111, t);
  t = term_e_52;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = term_f_52;
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = output_1_0(f_17, t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm g_111 = NULL,h_111 = NULL,i_111 = NULL,j_111 = NULL,k_111 = NULL,l_111 = NULL,m_111 = NULL,n_111 = NULL,o_111 = NULL,p_111 = NULL,q_111 = NULL,r_111 = NULL,s_111 = NULL,t_111 = NULL,u_111 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm g_52 = ATgetArgument(t, 0);
      if(((ATgetType(g_52) == AT_LIST) && !(ATisEmpty(g_52))))
        {
          ATerm h_52 = ATgetFirst((ATermList) g_52);
          if(match_cons(h_52, sym_Signature_1))
            {
              k_111 = ATgetArgument(h_52, 0);
            }
          else
            _fail(t);
          {
            ATerm i_52 = (ATerm) ATgetNext((ATermList) g_52);
            if(((ATgetType(i_52) == AT_LIST) && !(ATisEmpty(i_52))))
              {
                ATerm j_52 = ATgetFirst((ATermList) i_52);
                if(match_cons(j_52, sym_Overlays_1))
                  {
                    l_111 = ATgetArgument(j_52, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm k_52 = (ATerm) ATgetNext((ATermList) i_52);
                  if(((ATgetType(k_52) == AT_LIST) && !(ATisEmpty(k_52))))
                    {
                      ATerm l_52 = ATgetFirst((ATermList) k_52);
                      if(match_cons(l_52, sym_Strategies_1))
                        {
                          m_111 = ATgetArgument(l_52, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm m_52 = (ATerm) ATgetNext((ATermList) k_52);
                        if(((ATgetType(m_52) != AT_LIST) || !(ATisEmpty(m_52))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = i_9(k_111, l_111, m_111, t);
  u_111 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_111 = ATgetArgument(t, 0);
      t = n_111;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_111 = ATgetFirst((ATermList) t);
          q_111 = (ATerm) ATgetNext((ATermList) t);
          t = q_111;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_111 = ATgetFirst((ATermList) t);
              t_111 = (ATerm) ATgetNext((ATermList) t);
              t = t_111;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = r_111;
                  if(match_cons(t, sym_Strategies_1))
                    {
                      s_111 = ATgetArgument(t, 0);
                      t = o_111;
                      if(match_cons(t, sym_Signature_1))
                        {
                          p_111 = ATgetArgument(t, 0);
                          {
                            ATerm n_52 = t;
                            int o_52 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = u_111;
                                t = n_8(p_111, s_111, t);
                                LocalPopChoice(o_52);
                              }
                            else
                              {
                                t = n_52;
                                t = u_111;
                              }
                          }
                        }
                      else
                        {
                          t = u_111;
                        }
                    }
                  else
                    {
                      t = u_111;
                    }
                }
              else
                {
                  t = u_111;
                }
            }
          else
            {
              t = u_111;
            }
        }
      else
        {
          t = u_111;
        }
    }
  else
    {
      t = u_111;
    }
  if(match_cons(t, sym_Specification_1))
    {
      ATerm p_52 = ATgetArgument(t, 0);
      if(((ATgetType(p_52) == AT_LIST) && !(ATisEmpty(p_52))))
        {
          ATerm r_52 = ATgetFirst((ATermList) p_52);
          if(match_cons(r_52, sym_Signature_1))
            {
              i_111 = ATgetArgument(r_52, 0);
            }
          else
            _fail(t);
          {
            ATerm t_52 = (ATerm) ATgetNext((ATermList) p_52);
            if(((ATgetType(t_52) == AT_LIST) && !(ATisEmpty(t_52))))
              {
                ATerm u_52 = ATgetFirst((ATermList) t_52);
                if(match_cons(u_52, sym_Strategies_1))
                  {
                    j_111 = ATgetArgument(u_52, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm v_52 = (ATerm) ATgetNext((ATermList) t_52);
                  if(((ATgetType(v_52) != AT_LIST) || !(ATisEmpty(v_52))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = m_8(i_111, j_111, t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm w_52 = ATgetArgument(t, 0);
      if(((ATgetType(w_52) == AT_LIST) && !(ATisEmpty(w_52))))
        {
          ATerm x_52 = ATgetFirst((ATermList) w_52);
          if(match_cons(x_52, sym_Signature_1))
            {
              g_111 = ATgetArgument(x_52, 0);
            }
          else
            _fail(t);
          {
            ATerm y_52 = (ATerm) ATgetNext((ATermList) w_52);
            if(((ATgetType(y_52) == AT_LIST) && !(ATisEmpty(y_52))))
              {
                ATerm z_52 = ATgetFirst((ATermList) y_52);
                if(match_cons(z_52, sym_Strategies_1))
                  {
                    h_111 = ATgetArgument(z_52, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm a_53 = (ATerm) ATgetNext((ATermList) y_52);
                  if(((ATgetType(a_53) != AT_LIST) || !(ATisEmpty(a_53))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = k_8(g_111, h_111, t);
  t = topdown_1_0(g_17, t);
  t = topdown_1_0(k_17, t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm b_53 = t;
  int c_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_53 = t;
      int e_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0_0(t);
          LocalPopChoice(e_53);
        }
      else
        {
          t = d_53;
          t = desugarRule_0_0(t);
        }
      LocalPopChoice(c_53);
    }
  else
    {
      t = b_53;
    }
  t = repeat_2_0(j_17, _id, t);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm f_53 = t;
  int g_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_53 = t;
      int i_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = HL_0_0(t);
          LocalPopChoice(i_53);
        }
      else
        {
          t = h_53;
          {
            ATerm i_112 = NULL,j_112 = NULL;
            i_112 = t;
            if(match_cons(t, sym_Match_1))
              {
                j_112 = ATgetArgument(t, 0);
                t = i_112;
                t = a_8(j_112, t);
              }
            else
              {
                if(match_cons(t, sym_Build_1))
                  {
                    j_112 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = i_112;
                t = z_7(j_112, t);
              }
          }
        }
      LocalPopChoice(g_53);
    }
  else
    {
      t = f_53;
      {
        ATerm n_112 = NULL,o_112 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            n_112 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_112;
        if(match_cons(t, sym_ListVar_1))
          {
            o_112 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, o_112);
      }
    }
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm j_53 = t;
  int k_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DesugarDefaultVarDec_0_0(t);
      LocalPopChoice(k_53);
    }
  else
    {
      t = j_53;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(v_16, default_usage_0_0, _id, w_16, t);
  return(t);
}
