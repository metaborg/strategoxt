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
Symbol sym_Overlay_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
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
Symbol sym_Con_3;
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
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
}
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_s_40;
ATerm term_p_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_v_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_u_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_t_34;
ATerm term_h_34;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_n_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_x_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_q_25;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_z_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_a_18;
ATerm term_v_16;
ATerm term_t_16;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Sort_2, term_z_13, (ATerm) ATempty);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_a_14);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_20);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Var_1, term_x_25);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Var_1, term_e_26);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Anno_2, term_b_26, term_f_26);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_Var_1, term_h_26);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Var_1, term_j_26);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Anno_2, term_i_26, term_k_26);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_25);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Call_2, term_n_26, (ATerm) ATempty);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_BAM_3, term_w_26, term_b_26, term_i_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_25);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Call_2, term_y_26, (ATerm) ATempty);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_BAM_3, term_a_27, term_f_26, term_k_26);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_25);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_b_35);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_g_35);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_f_36);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym__2, term_r_36, term_a_18);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_18);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym__2, term_x_36, term_v_16);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_t_37);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_r_36);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_q_38);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym__2, term_j_37, term_k_37);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym__2, term_j_39, term_v_16);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym__2, term_m_39, term_v_16);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym__2, term_q_38, term_v_16);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_j_39);
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym__2, term_g_35, term_v_16);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm DesugarDefaultVarDec_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm u_96 (ATerm), ATerm t);
static ATerm m_7 (ATerm p_27, ATerm t);
static ATerm n_7 (ATerm m_27, ATerm t);
ATerm HL_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm y_97 (ATerm), ATerm t);
static ATerm o_7 (ATerm f_25, ATerm g_25, ATerm h_25, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm ListVarScope_0_0 (ATerm t);
static ATerm q_7 (ATerm g_62, ATerm h_62, ATerm t);
static ATerm d_16 (ATerm v_14, ATerm t);
static ATerm l_16 (ATerm x_14, ATerm t);
static ATerm m_16 (ATerm a_15, ATerm t);
static ATerm n_16 (ATerm h_15, ATerm t);
static ATerm o_16 (ATerm k_15, ATerm t);
ATerm CongDefined_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm MkCongDef_0_0 (ATerm t);
ATerm filter_1_0 (ATerm q_110 (ATerm), ATerm t);
static ATerm v_7 (ATerm a_62, ATerm b_62, ATerm t);
ATerm end_scope_1_0 (ATerm t_115 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm s_115 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t);
static ATerm w_7 (ATerm w_115 (ATerm), ATerm r_51, ATerm p_51, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm RegisterCongDef_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm x_7 (ATerm n_21, ATerm o_21, ATerm t);
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
ATerm DeclareVariables_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm RDtoSD_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_7 (ATerm l_21, ATerm m_21, ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_8 (ATerm p_21, ATerm q_21, ATerm t);
ATerm at_end_1_0 (ATerm x_103 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm v_44 (ATerm c_44, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm tpaste_1_0 (ATerm q_127 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t_127 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm f_8 (ATerm g_107 (ATerm), ATerm g_38, ATerm f_38, ATerm t);
ATerm foldr_3_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm t);
static ATerm g_8 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm k_38, ATerm j_38, ATerm t);
static ATerm h_8 (ATerm b_107 (ATerm), ATerm e_38, ATerm d_38, ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm j_8 (ATerm v_668, ATerm a_669, ATerm s_66, ATerm t);
ATerm while_not_2_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm t);
ATerm for_3_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t);
static ATerm e_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm x_66 (ATerm q_64, ATerm w_64, ATerm c_65, ATerm t);
static ATerm k_6 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm free_vars_3_0 (ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm j_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm g_75 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm m_8 (ATerm c_124 (ATerm), ATerm d_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_64, ATerm y_64, ATerm x_64, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm n_8 (ATerm w_123 (ATerm), ATerm x_123 (ATerm (ATerm), ATerm), ATerm r_64, ATerm u_64, ATerm t);
ATerm env_alltd_1_0 (ATerm k_101 (ATerm), ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_6_0 (ATerm d_123 (ATerm), ATerm e_123 (ATerm (ATerm), ATerm), ATerm f_123 (ATerm), ATerm g_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_123 (ATerm (ATerm), ATerm), ATerm i_123 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t);
static ATerm w_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm v_8 (ATerm w_94 (ATerm), ATerm t_22, ATerm u_22, ATerm t);
ATerm Trm_to_Cong_0_0 (ATerm t);
ATerm trm_to_cong_0_0 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm b_8 (ATerm b_23, ATerm d_23, ATerm c_23, ATerm t);
static ATerm p_10 (ATerm t);
static ATerm w_8 (ATerm r_21, ATerm t_21, ATerm s_21, ATerm t);
static ATerm x_8 (ATerm h_47, ATerm i_47, ATerm t);
static ATerm y_8 (ATerm x_32, ATerm y_32, ATerm t);
static ATerm a_9 (ATerm x_102 (ATerm), ATerm r_227, ATerm d_33, ATerm t);
static ATerm z_8 (ATerm t_32, ATerm u_32, ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm output_1_0 (ATerm c_121 (ATerm), ATerm t);
static ATerm m_80 (ATerm g_80, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_9 (ATerm z_32, ATerm t);
static ATerm c_9 (ATerm a_46, ATerm b_46, ATerm t);
static ATerm d_9 (ATerm j_47, ATerm k_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_81 (ATerm w_80, ATerm t);
static ATerm y_81 (ATerm a_81, ATerm b_81, ATerm c_81, ATerm t);
static ATerm z_81 (ATerm k_81, ATerm l_81, ATerm m_81, ATerm t);
static ATerm e_9 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm d_121 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm l_9 (ATerm a_57, ATerm b_57, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm p_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_9 (ATerm v_61, ATerm w_61, ATerm u_61, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm f_9 (ATerm d_50, ATerm e_50, ATerm t);
ATerm foldr_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm d_118 (ATerm), ATerm t);
static ATerm a_12 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_12 (ATerm t);
ATerm need_help_1_0 (ATerm t_120 (ATerm), ATerm t);
ATerm map_1_0 (ATerm g_103 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_103 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_9 (ATerm m_63, ATerm n_63, ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm w_122 (ATerm), ATerm t);
static ATerm s_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
ATerm parse_options_1_0 (ATerm v_122 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm t);
static ATerm d_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL;
  h_1 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_1 = ATgetArgument(t, 0);
      {
        ATerm q_11 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, g_1, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_14), term_b_14));
            LocalPopChoice(y_13);
          }
        else
          {
            t = q_11;
            t = h_1;
          }
      }
    }
  else
    {
      t = h_1;
    }
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL;
  m_1 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_1 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, l_1, term_b_14);
    }
  else
    {
      t = m_1;
    }
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL;
  f_2 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_2 = ATgetArgument(t, 0);
      {
        ATerm c_14 = t;
        int d_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, e_2, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_14), term_b_14));
            LocalPopChoice(d_14);
          }
        else
          {
            t = c_14;
            t = f_2;
          }
      }
    }
  else
    {
      t = f_2;
    }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL;
  k_2 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_2 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, j_2, term_b_14);
    }
  else
    {
      t = k_2;
    }
  return(t);
}
ATerm DesugarDefaultVarDec_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
  if(match_cons(t, sym_ExtSDef_3))
    {
      x_0 = ATgetArgument(t, 0);
      y_0 = ATgetArgument(t, 1);
      z_0 = ATgetArgument(t, 2);
      {
        ATerm d_1 = NULL,f_1 = NULL;
        t = y_0;
        t = map_1_0(a_0, t);
        d_1 = t;
        t = z_0;
        t = map_1_0(o_0, t);
        f_1 = t;
        t = (ATerm) ATmakeAppl(sym_ExtSDef_3, x_0, d_1, f_1);
      }
    }
  else
    {
      ATerm a_2 = NULL,d_2 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          x_0 = ATgetArgument(t, 0);
          y_0 = ATgetArgument(t, 1);
          z_0 = ATgetArgument(t, 2);
          a_1 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = y_0;
      t = map_1_0(p_0, t);
      a_2 = t;
      t = z_0;
      t = map_1_0(q_0, t);
      d_2 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, x_0, a_2, d_2, a_1);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  static ATerm s_0 (ATerm t)
  {
    t = topdown_1_0(u_96, t);
    return(t);
  }
  t = u_96(t);
  t = SRTS_all(s_0, t);
  return(t);
}
static ATerm m_7 (ATerm p_27, ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL;
  t = p_27;
  {
    static ATerm t_0 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm e_14 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) e_14) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm f_14 = ATgetArgument(t, 1);
            if(((ATgetType(f_14) == AT_LIST) && !(ATisEmpty(f_14))))
              {
                ATerm g_14 = ATgetFirst((ATermList) f_14);
                if(match_cons(g_14, sym_Var_1))
                  {
                    ATerm i_14 = ATgetArgument(g_14, 0);
                    if(match_cons(i_14, sym_ListVar_1))
                      {
                        if(((o_2 != NULL) && (o_2 != ATgetArgument(i_14, 0))))
                          _fail(ATgetArgument(i_14, 0));
                        else
                          o_2 = ATgetArgument(i_14, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm h_14 = (ATerm) ATgetNext((ATermList) f_14);
                  if(((ATgetType(h_14) == AT_LIST) && !(ATisEmpty(h_14))))
                    {
                      ATerm l_14 = ATgetFirst((ATermList) h_14);
                      if(match_cons(l_14, sym_Op_2))
                        {
                          ATerm n_14 = ATgetArgument(l_14, 0);
                          if((ATgetSymbol((ATermAppl) n_14) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm o_14 = ATgetArgument(l_14, 1);
                            if(((ATgetType(o_14) != AT_LIST) || !(ATisEmpty(o_14))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm m_14 = (ATerm) ATgetNext((ATermList) h_14);
                        if(((ATgetType(m_14) != AT_LIST) || !(ATisEmpty(m_14))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, o_2);
      return(t);
    }
    t = oncetd_1_0(t_0, t);
  }
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, p_2);
  return(t);
}
static ATerm n_7 (ATerm m_27, ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL;
  t = m_27;
  {
    static ATerm u_0 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm q_14 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) q_14) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm r_14 = ATgetArgument(t, 1);
            if(((ATgetType(r_14) == AT_LIST) && !(ATisEmpty(r_14))))
              {
                ATerm s_14 = ATgetFirst((ATermList) r_14);
                if(match_cons(s_14, sym_Var_1))
                  {
                    ATerm w_14 = ATgetArgument(s_14, 0);
                    if(match_cons(w_14, sym_ListVar_1))
                      {
                        if(((q_2 != NULL) && (q_2 != ATgetArgument(w_14, 0))))
                          _fail(ATgetArgument(w_14, 0));
                        else
                          q_2 = ATgetArgument(w_14, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm t_14 = (ATerm) ATgetNext((ATermList) r_14);
                  if(((ATgetType(t_14) == AT_LIST) && !(ATisEmpty(t_14))))
                    {
                      ATerm y_14 = ATgetFirst((ATermList) t_14);
                      if(match_cons(y_14, sym_Op_2))
                        {
                          ATerm d_15 = ATgetArgument(y_14, 0);
                          if((ATgetSymbol((ATermAppl) d_15) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm j_15 = ATgetArgument(y_14, 1);
                            if(((ATgetType(j_15) != AT_LIST) || !(ATisEmpty(j_15))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm b_15 = (ATerm) ATgetNext((ATermList) t_14);
                        if(((ATgetType(b_15) != AT_LIST) || !(ATisEmpty(b_15))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, q_2);
      return(t);
    }
    t = oncetd_1_0(u_0, t);
  }
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, r_2);
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
              t = term_l_15;
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
                  t = term_l_15;
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
                      t = term_o_15;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      f_3 = ATgetArgument(t, 0);
                      g_3 = ATgetArgument(t, 1);
                      d_3 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, g_3, (ATerm) ATmakeAppl(sym_Op_2, term_p_15, (ATerm) ATinsert(ATinsert(ATempty, d_3), f_3)));
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
ATerm repeat_2_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm t)
{
  static ATerm f_4 (ATerm t)
  {
    ATerm s_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_95(t);
        t = f_4(t);
        LocalPopChoice(v_15);
      }
    else
      {
        t = s_15;
        t = v_95(t);
      }
    return(t);
  }
  t = f_4(t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL,k_5 = NULL,l_5 = NULL;
  l_5 = t;
  if(match_cons(t, sym_Con_3))
    {
      h_5 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
      k_5 = ATgetArgument(t, 2);
      {
        ATerm r_0 = NULL,l_4 = NULL;
        t = SSLgetAnnotations(l_5);
        r_0 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, h_5, i_5, k_5);
        l_4 = t;
        t = SSLsetAnnotations(l_4, r_0);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = l_5;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm w_15 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(v_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_15;
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,t_6 = NULL;
  q_6 = t;
  if(match_cons(t, sym_Con_3))
    {
      r_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
      p_6 = ATgetArgument(t, 2);
      {
        ATerm s_2 = NULL,n_4 = NULL;
        t = SSLgetAnnotations(q_6);
        s_2 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, r_6, t_6, p_6);
        n_4 = t;
        t = SSLsetAnnotations(n_4, s_2);
      }
    }
  else
    {
      ATerm c_4 = NULL,q_4 = NULL;
      if(match_cons(t, sym_App_2))
        {
          r_6 = ATgetArgument(t, 0);
          t_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_6);
      c_4 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, r_6, t_6);
      q_4 = t;
      t = SSLsetAnnotations(q_4, c_4);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm x_15 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(w_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_15;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,g_7 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      c_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_7;
  if(match_cons(t, sym_StratRule_3))
    {
      d_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
      g_7 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_7), (ATerm) ATmakeAppl(sym_Where_1, g_7)), d_7));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          d_7 = ATgetArgument(t, 0);
          e_7 = ATgetArgument(t, 1);
          g_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = d_7;
      t = pureterm_0_0(t);
      t = e_7;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, e_7)), (ATerm) ATmakeAppl(sym_Where_1, g_7)), (ATerm) ATmakeAppl(sym_Match_1, d_7)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm y_97 (ATerm), ATerm t)
{
  static ATerm c_8 (ATerm t)
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_97(t);
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        t = SRTS_one(c_8, t);
      }
    return(t);
  }
  t = c_8(t);
  return(t);
}
static ATerm o_7 (ATerm f_25, ATerm g_25, ATerm h_25, ATerm t)
{
  ATerm k_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
  t = new_0_0(t);
  m_9 = t;
  t = f_25;
  {
    static ATerm b_1 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm a_16 = ATgetArgument(t, 0);
          if(match_cons(a_16, sym_Var_1))
            {
              if(((r_8 != NULL) && (r_8 != ATgetArgument(a_16, 0))))
                _fail(ATgetArgument(a_16, 0));
              else
                r_8 = ATgetArgument(a_16, 0);
            }
          else
            _fail(t);
          if(((p_8 != NULL) && (p_8 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_8 = ATgetArgument(t, 1);
          {
            ATerm b_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, r_8);
      return(t);
    }
    t = oncetd_1_0(b_1, t);
  }
  n_9 = t;
  t = g_25;
  {
    static ATerm c_1 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm c_16 = ATgetArgument(t, 0);
          if(match_cons(c_16, sym_Var_1))
            {
              if(((r_8 != NULL) && (r_8 != ATgetArgument(c_16, 0))))
                _fail(ATgetArgument(c_16, 0));
              else
                r_8 = ATgetArgument(c_16, 0);
            }
          else
            _fail(t);
          if(((q_8 != NULL) && (q_8 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            q_8 = ATgetArgument(t, 1);
          {
            ATerm e_16 = ATgetArgument(t, 2);
            if(match_cons(e_16, sym_CallT_3))
              {
                if(((k_8 != NULL) && (k_8 != ATgetArgument(e_16, 0))))
                  _fail(ATgetArgument(e_16, 0));
                else
                  k_8 = ATgetArgument(e_16, 0);
                {
                  ATerm f_16 = ATgetArgument(e_16, 1);
                  if(((ATgetType(f_16) != AT_LIST) || !(ATisEmpty(f_16))))
                    _fail(t);
                }
                {
                  ATerm g_16 = ATgetArgument(e_16, 2);
                  if(((ATgetType(g_16) != AT_LIST) || !(ATisEmpty(g_16))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, m_9);
      return(t);
    }
    t = oncetd_1_0(c_1, t);
  }
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_9), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, n_9, o_9, (ATerm) ATmakeAppl(sym_Seq_2, h_25, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(k_8), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_8), not_null(q_8), term_o_15))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_8)), (ATerm) ATmakeAppl(sym_Var_1, m_9))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_16 = t;
      int r_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_10 = NULL,q_10 = NULL,b_11 = NULL,c_11 = NULL,e_11 = NULL,g_11 = NULL;
          c_11 = t;
          if(match_cons(t, sym_SRule_1))
            {
              e_11 = ATgetArgument(t, 0);
              t = e_11;
              if(match_cons(t, sym_Rule_3))
                {
                  o_10 = ATgetArgument(t, 0);
                  q_10 = ATgetArgument(t, 1);
                  b_11 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = c_11;
              t = o_7(o_10, q_10, b_11, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm u_4 = NULL,z_4 = NULL,w_4 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  e_11 = ATgetArgument(t, 0);
                  g_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(c_11);
              u_4 = t;
              t = g_11;
              t = desugarRule_0_0(t);
              z_4 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, e_11, z_4);
              w_4 = t;
              t = SSLsetAnnotations(w_4, u_4);
            }
          LocalPopChoice(r_16);
        }
      else
        {
          t = q_16;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL;
  j_13 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      i_13 = ATgetArgument(t, 0);
      t = i_13;
    }
  else
    {
      t = j_13;
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL;
  v_13 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      u_13 = ATgetArgument(t, 0);
      t = u_13;
    }
  else
    {
      t = v_13;
    }
  return(t);
}
ATerm ListVarScope_0_0 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,e_12 = NULL,l_12 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      e_12 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
      b_12 = ATgetArgument(t, 2);
      c_12 = ATgetArgument(t, 3);
      {
        ATerm h_13 = NULL;
        t = b_12;
        t = map_1_0(e_1, t);
        h_13 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, e_12, l_12, h_13, c_12);
      }
    }
  else
    {
      ATerm t_13 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          e_12 = ATgetArgument(t, 0);
          l_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_12;
      t = map_1_0(i_1, t);
      t_13 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, t_13, l_12);
    }
  return(t);
}
static ATerm q_7 (ATerm g_62, ATerm h_62, ATerm t)
{
  ATerm j_14 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_62, h_62);
  t = i_9(g_62, h_62, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_14 = ATgetFirst((ATermList) t);
      {
        ATerm s_16 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_14;
  return(t);
}
static ATerm d_16 (ATerm v_14, ATerm t)
{
  ATerm j_5 = NULL;
  t = term_t_16;
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_16, v_14);
  t = q_7(j_5, v_14, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_16) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_v_16;
  return(t);
}
static ATerm l_16 (ATerm x_14, ATerm t)
{
  ATerm p_5 = NULL;
  t = term_t_16;
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_16, x_14);
  t = q_7(p_5, x_14, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm w_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_16) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_v_16;
  return(t);
}
static ATerm m_16 (ATerm a_15, ATerm t)
{
  ATerm w_5 = NULL;
  t = term_t_16;
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_16, a_15);
  t = q_7(w_5, a_15, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm x_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_16) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_v_16;
  return(t);
}
static ATerm n_16 (ATerm h_15, ATerm t)
{
  ATerm f_6 = NULL;
  t = term_t_16;
  f_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_16, h_15);
  t = q_7(f_6, h_15, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm y_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_16) != ATmakeSymbol("f_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_v_16;
  return(t);
}
static ATerm o_16 (ATerm k_15, ATerm t)
{
  ATerm o_6 = NULL;
  t = term_t_16;
  o_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_16, k_15);
  t = q_7(o_6, k_15, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm a_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_17) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_v_16;
  return(t);
}
ATerm CongDefined_0_0 (ATerm t)
{
  ATerm m_15 = NULL,r_15 = NULL;
  m_15 = t;
  if(match_cons(t, sym__2))
    {
      ATerm b_17 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_15;
  if(match_int(t, 0))
    {
      ATerm c_17 = t;
      int d_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_16(m_15, t);
          LocalPopChoice(d_17);
        }
      else
        {
          t = c_17;
          {
            ATerm i_17 = t;
            int k_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = l_16(m_15, t);
                LocalPopChoice(k_17);
              }
            else
              {
                t = i_17;
                {
                  ATerm n_17 = t;
                  int o_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = m_16(m_15, t);
                      LocalPopChoice(o_17);
                    }
                  else
                    {
                      t = n_17;
                      {
                        ATerm q_17 = t;
                        int s_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = n_16(m_15, t);
                            LocalPopChoice(s_17);
                          }
                        else
                          {
                            t = q_17;
                            t = o_16(m_15, t);
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
      ATerm t_17 = t;
      int u_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_16(m_15, t);
          LocalPopChoice(u_17);
        }
      else
        {
          t = t_17;
          {
            ATerm v_17 = t;
            int w_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = l_16(m_15, t);
                LocalPopChoice(w_17);
              }
            else
              {
                t = v_17;
                {
                  ATerm x_17 = t;
                  int y_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = m_16(m_15, t);
                      LocalPopChoice(y_17);
                    }
                  else
                    {
                      t = x_17;
                      t = n_16(m_15, t);
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
  t = term_a_18;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm i_8 = NULL,l_8 = NULL;
  if(match_cons(t, sym__2))
    {
      i_8 = ATgetArgument(t, 0);
      l_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(i_8, l_8, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_d_18;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_t_16;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_18;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm o_8 = NULL,s_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_8 = ATgetFirst((ATermList) t);
      s_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_8, s_8);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,g_9 = NULL,h_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_18 = ATgetArgument(t, 0);
      if(match_cons(g_18, sym__2))
        {
          t_8 = ATgetArgument(g_18, 0);
          u_8 = ATgetArgument(g_18, 1);
        }
      else
        _fail(t);
      {
        ATerm i_18 = ATgetArgument(t, 1);
        if(match_cons(i_18, sym__2))
          {
            g_9 = ATgetArgument(i_18, 0);
            h_9 = ATgetArgument(i_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_9), t_8), (ATerm) ATinsert(CheckATermList(h_9), u_8));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm k_9 = NULL;
  t = new_0_0(t);
  k_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, k_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_14), term_b_14)), k_9);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm p_9 = NULL;
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_9), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_t_16;
  return(t);
}
ATerm MkCongDef_0_0 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,k_19 = NULL;
  b_19 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      c_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_19;
  if(match_cons(t, sym_FunType_2))
    {
      k_19 = ATgetArgument(t, 0);
      a_19 = ATgetArgument(t, 1);
      {
        ATerm h_7 = NULL,j_7 = NULL,k_7 = NULL,r_7 = NULL,d_8 = NULL,e_8 = NULL;
        t = k_19;
        t = foldr_3_0(j_1, k_1, n_1, t);
        h_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_19, h_7);
        {
          ATerm j_18 = t;
          if((PushChoice() == 0))
            {
              t = CongDefined_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_18;
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_19, h_7);
        d_8 = t;
        t = term_l_18;
        e_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_19, h_7), term_l_18);
        t = w_7(o_1, d_8, e_8, t);
        t = k_19;
        t = genzip_4_0(p_1, q_1, r_1, s_1, t);
        if(match_cons(t, sym__2))
          {
            j_7 = ATgetArgument(t, 0);
            k_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_7;
        t = map_1_0(t_1, t);
        r_7 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, c_19, j_7, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, c_19, r_7));
      }
    }
  else
    {
      ATerm x_9 = NULL,z_9 = NULL;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm m_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, c_19, term_a_18);
      {
        ATerm p_18 = t;
        if((PushChoice() == 0))
          {
            t = CongDefined_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_18;
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, c_19, term_a_18);
      x_9 = t;
      t = term_r_18;
      z_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_19, term_a_18), term_r_18);
      t = w_7(u_1, x_9, z_9, t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, c_19, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, c_19, (ATerm) ATempty));
    }
  return(t);
}
ATerm filter_1_0 (ATerm q_110 (ATerm), ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  h_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_20;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_20 = ATgetFirst((ATermList) t);
          j_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_10 = NULL,r_10 = NULL,s_10 = NULL,f_5 = NULL;
            t = SSLgetAnnotations(h_20);
            m_10 = t;
            t = i_20;
            t = q_110(t);
            r_10 = t;
            t = j_20;
            t = filter_1_0(q_110, t);
            s_10 = t;
            t = (ATerm) ATinsert(CheckATermList(s_10), r_10);
            f_5 = t;
            t = SSLsetAnnotations(f_5, m_10);
            LocalPopChoice(t_18);
          }
        else
          {
            t = s_18;
            t = j_20;
            t = filter_1_0(q_110, t);
          }
      }
    }
  return(t);
}
static ATerm v_7 (ATerm a_62, ATerm b_62, ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  n_20 = t;
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_62, b_62);
        t = i_9(a_62, b_62, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_18 = ATgetFirst((ATermList) t);
            m_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_18);
        t = SSL_table_put(a_62, b_62, m_20);
        t = (ATerm) ATmakeAppl(sym__3, a_62, b_62, m_20);
      }
    else
      {
        t = u_18;
        t = SSL_table_remove(a_62, b_62);
        t = (ATerm) ATmakeAppl(sym__2, a_62, b_62);
      }
  }
  t = n_20;
  return(t);
}
ATerm end_scope_1_0 (ATerm t_115 (ATerm), ATerm t)
{
  ATerm o_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL;
  x_20 = t;
  t = t_115(t);
  w_20 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_20 = NULL;
        t = term_z_18;
        z_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_20, term_z_18);
        t = i_9(w_20, z_20, t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_20 = ATgetFirst((ATermList) t);
      o_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_z_18;
  y_20 = t;
  t = SSL_table_put(w_20, y_20, o_20);
  t = v_20;
  {
    static ATerm v_1 (ATerm t)
    {
      ATerm a_21 = NULL;
      a_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_20, a_21);
      t = v_7(w_20, a_21, t);
      return(t);
    }
    t = map_1_0(v_1, t);
  }
  t = x_20;
  return(t);
}
ATerm restore_always_2_0 (ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_95(t);
      t = r_95(t);
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      t = r_95(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_115 (ATerm), ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,i_21 = NULL,j_21 = NULL;
  d_21 = t;
  t = s_115(t);
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_21, term_z_18);
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_22 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_19 = ATgetArgument(t, 0);
            ATerm o_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_z_18;
        s_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_21, term_z_18);
        t = i_9(c_21, s_22, t);
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = (ATerm) ATempty;
      }
  }
  e_21 = t;
  t = term_z_18;
  i_21 = t;
  t = (ATerm) ATinsert(CheckATermList(e_21), (ATerm) ATempty);
  j_21 = t;
  t = SSL_table_put(c_21, i_21, j_21);
  t = d_21;
  return(t);
}
ATerm scope_2_0 (ATerm u_115 (ATerm), ATerm v_115 (ATerm), ATerm t)
{
  static ATerm w_1 (ATerm t)
  {
    t = end_scope_1_0(u_115, t);
    return(t);
  }
  t = begin_scope_1_0(u_115, t);
  t = restore_always_2_0(v_115, w_1, t);
  return(t);
}
static ATerm w_7 (ATerm w_115 (ATerm), ATerm r_51, ATerm p_51, ATerm t)
{
  ATerm x_22 = NULL,a_23 = NULL,h_23 = NULL,k_23 = NULL,o_23 = NULL,q_23 = NULL;
  k_23 = t;
  t = w_115(t);
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_22, r_51, p_51);
  t = j_9(x_22, r_51, p_51, t);
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_23 = NULL;
        t = term_z_18;
        r_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_22, term_z_18);
        t = i_9(x_22, r_23, t);
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_23 = ATgetFirst((ATermList) t);
      h_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_z_18;
  o_23 = t;
  t = (ATerm) ATinsert(CheckATermList(h_23), (ATerm) ATinsert(CheckATermList(a_23), r_51));
  q_23 = t;
  t = SSL_table_put(x_22, o_23, q_23);
  t = k_23;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_a_18;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(s_25, t_25, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_d_18;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_t_16;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_a_18;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm a_26 = NULL,d_26 = NULL;
  if(match_cons(t, sym__2))
    {
      a_26 = ATgetArgument(t, 0);
      d_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(a_26, d_26, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_d_18;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_t_16;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_a_18;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  if(match_cons(t, sym__2))
    {
      r_26 = ATgetArgument(t, 0);
      s_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(r_26, s_26, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_d_18;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_t_16;
  return(t);
}
ATerm RegisterCongDef_0_0 (ATerm t)
{
  ATerm h_24 = NULL,k_24 = NULL,p_24 = NULL,q_24 = NULL;
  h_24 = t;
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            k_24 = ATgetArgument(t, 0);
            p_24 = ATgetArgument(t, 1);
            q_24 = ATgetArgument(t, 2);
            {
              ATerm t_19 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_19);
        {
          ATerm b_25 = NULL,e_25 = NULL,r_25 = NULL;
          t = q_24;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_24;
          t = foldr_3_0(x_1, y_1, z_1, t);
          b_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_24, b_25);
          e_25 = t;
          t = term_v_19;
          r_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_24, b_25), term_v_19);
          t = w_7(b_2, e_25, r_25, t);
          t = h_24;
        }
      }
    else
      {
        t = r_19;
        {
          ATerm w_19 = t;
          int x_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  k_24 = ATgetArgument(t, 0);
                  p_24 = ATgetArgument(t, 1);
                  q_24 = ATgetArgument(t, 2);
                  {
                    ATerm z_19 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(x_19);
              {
                ATerm w_25 = NULL,y_25 = NULL,z_25 = NULL;
                t = q_24;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_24;
                t = foldr_3_0(c_2, g_2, h_2, t);
                w_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_24, w_25);
                y_25 = t;
                t = term_b_20;
                z_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_24, w_25), term_b_20);
                t = w_7(i_2, y_25, z_25, t);
                t = h_24;
              }
            }
          else
            {
              t = w_19;
              {
                ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
                if(match_cons(t, sym_ExtSDef_3))
                  {
                    k_24 = ATgetArgument(t, 0);
                    p_24 = ATgetArgument(t, 1);
                    q_24 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = q_24;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_24;
                t = foldr_3_0(l_2, m_2, n_2, t);
                o_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_24, o_26);
                p_26 = t;
                t = term_e_20;
                q_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_24, o_26), term_e_20);
                t = w_7(t_2, p_26, q_26, t);
                t = (ATerm) ATmakeAppl(sym_ExtSDef_3, k_24, p_24, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterCongDef_0_0(t);
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_t_16;
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
  ATerm z_26 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      z_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_26;
  t = filter_1_0(MkCongDef_0_0, t);
  return(t);
}
static ATerm x_7 (ATerm n_21, ATerm o_21, ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL;
  t = o_21;
  t = map_1_0(u_2, t);
  t = n_21;
  t = scope_2_0(v_2, w_2, t);
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_26, o_21);
  t = conc_0_0(t);
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, u_26)), (ATerm) ATmakeAppl(sym_Signature_1, n_21)));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm g_29 = NULL;
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_29 = ATgetArgument(t, 0);
          {
            ATerm p_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_20);
      t = g_29;
    }
  else
    {
      t = k_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_29;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm k_29 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_29);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      {
        ATerm t_20 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_21);
          }
        else
          {
            t = t_20;
            {
              ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_29 = ATgetArgument(t, 0);
                  r_29 = ATgetArgument(t, 1);
                  s_29 = ATgetArgument(t, 2);
                  t_29 = ATgetArgument(t, 3);
                  t = s_29;
                  t = map_1_0(e_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_29 = ATgetArgument(t, 0);
                      r_29 = ATgetArgument(t, 1);
                      s_29 = ATgetArgument(t, 2);
                      t_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_29;
                  t = map_1_0(h_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm z_30 = NULL;
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_30 = ATgetArgument(t, 0);
          {
            ATerm h_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_21);
      t = z_30;
    }
  else
    {
      t = f_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_30;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm x_31 = NULL;
  ATerm k_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_31 = ATgetArgument(t, 0);
          {
            ATerm x_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_21);
      t = x_31;
    }
  else
    {
      t = k_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_31;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  g_32 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      f_32 = ATgetArgument(t, 0);
      t = f_32;
    }
  else
    {
      t = g_32;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm f_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_33);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm y_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_21);
    }
  else
    {
      t = y_21;
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            {
              ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL,y_33 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  r_33 = ATgetArgument(t, 0);
                  s_33 = ATgetArgument(t, 1);
                  t_33 = ATgetArgument(t, 2);
                  y_33 = ATgetArgument(t, 3);
                  t = t_33;
                  t = map_1_0(l_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_33 = ATgetArgument(t, 0);
                      s_33 = ATgetArgument(t, 1);
                      t_33 = ATgetArgument(t, 2);
                      y_33 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_33;
                  t = map_1_0(m_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm l_34 = NULL;
  ATerm d_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_34 = ATgetArgument(t, 0);
          {
            ATerm g_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_22);
      t = l_34;
    }
  else
    {
      t = d_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_34;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm a_35 = NULL;
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_35 = ATgetArgument(t, 0);
          {
            ATerm j_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_22);
      t = a_35;
    }
  else
    {
      t = h_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_35;
    }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm j_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      l_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
      n_28 = ATgetArgument(t, 2);
      j_28 = ATgetArgument(t, 3);
      {
        ATerm t_28 = NULL,v_28 = NULL,x_28 = NULL;
        t = n_28;
        t = map_1_0(y_2, t);
        t_28 = t;
        t = j_28;
        t = free_vars_3_0(z_2, a_3, tboundin_3_0, t);
        t = map_1_0(i_3, t);
        v_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_28, t_28);
        t = diff_0_0(t);
        x_28 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, l_28, m_28, n_28, (ATerm) ATmakeAppl(sym_Scope_2, x_28, j_28));
      }
    }
  else
    {
      ATerm e_33 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          l_28 = ATgetArgument(t, 0);
          m_28 = ATgetArgument(t, 1);
          n_28 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_28;
      t = free_vars_3_0(j_3, k_3, tboundin_3_0, t);
      e_33 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, l_28, m_28, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, e_33, n_28));
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm o_36 = NULL;
  ATerm k_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_36 = ATgetArgument(t, 0);
          {
            ATerm n_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_22);
      t = o_36;
    }
  else
    {
      t = k_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_36;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm w_36 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_36);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm o_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_22);
    }
  else
    {
      t = o_22;
      {
        ATerm r_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_22);
          }
        else
          {
            t = r_22;
            {
              ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  z_36 = ATgetArgument(t, 0);
                  a_37 = ATgetArgument(t, 1);
                  b_37 = ATgetArgument(t, 2);
                  c_37 = ATgetArgument(t, 3);
                  t = b_37;
                  t = map_1_0(q_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_36 = ATgetArgument(t, 0);
                      a_37 = ATgetArgument(t, 1);
                      b_37 = ATgetArgument(t, 2);
                      c_37 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_37;
                  t = map_1_0(r_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm o_37 = NULL;
  ATerm w_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_37 = ATgetArgument(t, 0);
          {
            ATerm z_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_22);
      t = o_37;
    }
  else
    {
      t = w_22;
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
static ATerm r_3 (ATerm t)
{
  ATerm h_38 = NULL;
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_38 = ATgetArgument(t, 0);
          {
            ATerm g_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_23);
      t = h_38;
    }
  else
    {
      t = e_23;
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
static ATerm s_3 (ATerm t)
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
static ATerm t_3 (ATerm t)
{
  ATerm j_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_23);
    }
  else
    {
      t = j_23;
      {
        ATerm n_23 = t;
        int p_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_23);
          }
        else
          {
            t = n_23;
            {
              ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  w_38 = ATgetArgument(t, 0);
                  x_38 = ATgetArgument(t, 1);
                  y_38 = ATgetArgument(t, 2);
                  z_38 = ATgetArgument(t, 3);
                  t = y_38;
                  t = map_1_0(u_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_38 = ATgetArgument(t, 0);
                      x_38 = ATgetArgument(t, 1);
                      y_38 = ATgetArgument(t, 2);
                      z_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_38;
                  t = map_1_0(v_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm o_39 = NULL;
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_39 = ATgetArgument(t, 0);
          {
            ATerm w_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_23);
      t = o_39;
    }
  else
    {
      t = s_23;
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
static ATerm v_3 (ATerm t)
{
  ATerm d_40 = NULL;
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_40 = ATgetArgument(t, 0);
          {
            ATerm c_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_23);
      t = d_40;
    }
  else
    {
      t = x_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_40;
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm s_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      u_35 = ATgetArgument(t, 0);
      v_35 = ATgetArgument(t, 1);
      w_35 = ATgetArgument(t, 2);
      s_35 = ATgetArgument(t, 3);
      {
        ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
        t = w_35;
        t = map_1_0(n_3, t);
        h_36 = t;
        t = s_35;
        t = free_vars_3_0(o_3, p_3, tboundin_3_0, t);
        j_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_36, h_36);
        t = diff_0_0(t);
        i_36 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, u_35, v_35, w_35, (ATerm) ATmakeAppl(sym_Scope_2, i_36, (ATerm) ATmakeAppl(sym_SRule_1, s_35)));
      }
    }
  else
    {
      ATerm s_38 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          u_35 = ATgetArgument(t, 0);
          v_35 = ATgetArgument(t, 1);
          w_35 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_35;
      t = free_vars_3_0(s_3, t_3, tboundin_3_0, t);
      s_38 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, u_35, v_35, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, s_38, (ATerm) ATmakeAppl(sym_SRule_1, w_35)));
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_24 = t;
      int j_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RDtoSD_0_0(t);
          LocalPopChoice(j_24);
        }
      else
        {
          t = i_24;
          t = DeclareVariables_0_0(t);
        }
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
    }
  t = topdown_1_0(x_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
  v_40 = t;
  if(match_cons(t, sym_Call_2))
    {
      t_40 = ATgetArgument(t, 0);
      u_40 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_CallT_3, t_40, u_40, (ATerm) ATempty);
    }
  else
    {
      t = v_40;
    }
  return(t);
}
static ATerm z_7 (ATerm l_21, ATerm m_21, ATerm t)
{
  ATerm l_40 = NULL;
  t = m_21;
  t = map_1_0(w_3, t);
  l_40 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, l_40)), (ATerm) ATmakeAppl(sym_Signature_1, l_21)));
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL;
  t_41 = t;
  {
    ATerm o_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            u_41 = ATgetArgument(t, 0);
            {
              ATerm s_24 = ATgetArgument(t, 1);
            }
            {
              ATerm t_24 = ATgetArgument(t, 2);
            }
            {
              ATerm u_24 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(r_24);
        t = u_41;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
          _fail(t);
        t = t_41;
      }
    else
      {
        t = o_24;
        {
          ATerm v_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  u_41 = ATgetArgument(t, 0);
                  {
                    ATerm y_24 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm z_24 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm a_25 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(w_24);
              t = u_41;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                _fail(t);
              t = t_41;
            }
          else
            {
              t = v_24;
              {
                ATerm c_25 = t;
                int d_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_ExtSDef_3))
                      {
                        u_41 = ATgetArgument(t, 0);
                        {
                          ATerm j_25 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm k_25 = ATgetArgument(t, 2);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(d_25);
                    t = u_41;
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                      _fail(t);
                    t = t_41;
                  }
                else
                  {
                    t = c_25;
                    if(match_cons(t, sym_ExtSDefInl_4))
                      {
                        u_41 = ATgetArgument(t, 0);
                        {
                          ATerm l_25 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm m_25 = ATgetArgument(t, 2);
                        }
                        {
                          ATerm n_25 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = u_41;
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                      _fail(t);
                    t = t_41;
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm a_8 (ATerm p_21, ATerm q_21, ATerm t)
{
  t = q_21;
  {
    ATerm o_25 = t;
    if((PushChoice() == 0))
      {
        t = fetch_1_0(y_3, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_25;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(CheckATermList(q_21), (ATerm) ATmakeAppl(sym_RDefT_4, term_q_25, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_v_25, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_14), term_b_14))), (ATerm) ATmakeAppl(sym_VarDec_2, term_u_25, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_14), term_b_14))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_g_26, term_l_26, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_b_27), term_x_26))))))), (ATerm) ATmakeAppl(sym_Signature_1, p_21)));
  return(t);
}
ATerm at_end_1_0 (ATerm x_103 (ATerm), ATerm t)
{
  static ATerm l_43 (ATerm t)
  {
    ATerm e_43 = NULL,h_43 = NULL,k_43 = NULL;
    k_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_43 = ATgetFirst((ATermList) t);
        h_43 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_11 = NULL,h_11 = NULL,n_5 = NULL;
          t = SSLgetAnnotations(k_43);
          a_11 = t;
          t = h_43;
          t = l_43(t);
          h_11 = t;
          t = (ATerm) ATinsert(CheckATermList(h_11), e_43);
          n_5 = t;
          t = SSLsetAnnotations(n_5, a_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_43;
        t = x_103(t);
      }
    return(t);
  }
  t = l_43(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
  b_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_42;
    }
  else
    {
      static ATerm z_3 (ATerm t)
      {
        t = not_null(d_42);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_42 = ATgetFirst((ATermList) t);
          if(((d_42 != NULL) && (d_42 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_42;
      t = at_end_1_0(z_3, t);
    }
  return(t);
}
static ATerm v_44 (ATerm c_44, ATerm t)
{
  ATerm d_44 = NULL;
  t = SSL_explode_term(c_44);
  if(match_cons(t, sym__2))
    {
      ATerm c_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_44;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_44 = NULL,m_44 = NULL,n_44 = NULL;
  n_44 = t;
  if(match_cons(t, sym__2))
    {
      f_44 = ATgetArgument(t, 0);
      m_44 = ATgetArgument(t, 1);
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_4 (ATerm t)
            {
              t = m_44;
              return(t);
            }
            t = f_44;
            t = at_end_1_0(a_4, t);
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            t = v_44(n_44, t);
          }
      }
    }
  else
    {
      t = v_44(n_44, t);
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      if(((ATgetType(f_27) != AT_LIST) || !(ATisEmpty(f_27))))
        _fail(t);
      {
        ATerm g_27 = ATgetArgument(t, 1);
        if(((ATgetType(g_27) != AT_LIST) || !(ATisEmpty(g_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if(((ATgetType(h_27) == AT_LIST) && !(ATisEmpty(h_27))))
        {
          w_12 = ATgetFirst((ATermList) h_27);
          x_12 = (ATerm) ATgetNext((ATermList) h_27);
        }
      else
        _fail(t);
      {
        ATerm k_27 = ATgetArgument(t, 1);
        if(((ATgetType(k_27) == AT_LIST) && !(ATisEmpty(k_27))))
          {
            y_12 = ATgetFirst((ATermList) k_27);
            z_12 = (ATerm) ATgetNext((ATermList) k_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_12, y_12), (ATerm) ATmakeAppl(sym__2, x_12, z_12));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL;
  if(match_cons(t, sym__2))
    {
      e_13 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_13), e_13);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm l_13 = NULL,n_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      l_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_13;
  {
    ATerm o_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_27);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_13);
      }
    else
      {
        t = o_27;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_27 = ATgetArgument(t, 0);
            n_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_13, n_13);
      }
  }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      if(((ATgetType(v_27) != AT_LIST) || !(ATisEmpty(v_27))))
        _fail(t);
      {
        ATerm w_27 = ATgetArgument(t, 1);
        if(((ATgetType(w_27) != AT_LIST) || !(ATisEmpty(w_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm c_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_27 = ATgetArgument(t, 0);
      if(((ATgetType(x_27) == AT_LIST) && !(ATisEmpty(x_27))))
        {
          c_15 = ATgetFirst((ATermList) x_27);
          e_15 = (ATerm) ATgetNext((ATermList) x_27);
        }
      else
        _fail(t);
      {
        ATerm y_27 = ATgetArgument(t, 1);
        if(((ATgetType(y_27) == AT_LIST) && !(ATisEmpty(y_27))))
          {
            f_15 = ATgetFirst((ATermList) y_27);
            g_15 = (ATerm) ATgetNext((ATermList) y_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_15, f_15), (ATerm) ATmakeAppl(sym__2, e_15, g_15));
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm i_15 = NULL,n_15 = NULL;
  if(match_cons(t, sym__2))
    {
      i_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_15), i_15);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm q_15 = NULL,t_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym__2))
    {
      q_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_15;
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm b_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_28);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_15);
      }
    else
      {
        t = z_27;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm c_28 = ATgetArgument(t, 0);
            t_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_15, t_15);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm q_127 (ATerm), ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL;
  a_49 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_49 = ATgetArgument(t, 0);
      c_49 = ATgetArgument(t, 1);
      {
        ATerm w_11 = NULL,z_11 = NULL,r_5 = NULL;
        t = SSLgetAnnotations(a_49);
        w_11 = t;
        t = b_49;
        t = q_127(t);
        z_11 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, z_11, c_49);
        r_5 = t;
        t = SSLsetAnnotations(r_5, w_11);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          b_49 = ATgetArgument(t, 0);
          c_49 = ATgetArgument(t, 1);
          d_49 = ATgetArgument(t, 2);
          e_49 = ATgetArgument(t, 3);
          {
            ATerm o_12 = NULL,t_12 = NULL,u_12 = NULL,s_5 = NULL;
            t = SSLgetAnnotations(a_49);
            o_12 = t;
            t = d_49;
            t = q_127(t);
            u_12 = t;
            t = (ATerm) ATmakeAppl(sym__2, d_49, u_12);
            t = genzip_4_0(b_4, d_4, e_4, g_4, t);
            t_12 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, b_49, c_49, t_12, e_49);
            s_5 = t;
            t = SSLsetAnnotations(s_5, o_12);
          }
        }
      else
        {
          ATerm p_14 = NULL,u_14 = NULL,z_14 = NULL,u_5 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              b_49 = ATgetArgument(t, 0);
              c_49 = ATgetArgument(t, 1);
              d_49 = ATgetArgument(t, 2);
              e_49 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_49);
          p_14 = t;
          t = d_49;
          t = q_127(t);
          z_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_49, z_14);
          t = genzip_4_0(h_4, i_4, j_4, k_4, t);
          u_14 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, b_49, c_49, u_14, e_49);
          u_5 = t;
          t = SSLsetAnnotations(u_5, p_14);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t_127 (ATerm), ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL;
  l_53 = t;
  if(match_cons(t, sym_Scope_2))
    {
      m_53 = ATgetArgument(t, 0);
      i_53 = ATgetArgument(t, 1);
      {
        ATerm h_16 = NULL,k_16 = NULL,p_16 = NULL,z_5 = NULL;
        t = SSLgetAnnotations(l_53);
        h_16 = t;
        t = m_53;
        t = t_127(t);
        k_16 = t;
        t = i_53;
        t = r_127(t);
        p_16 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, k_16, p_16);
        z_5 = t;
        t = SSLsetAnnotations(z_5, h_16);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          m_53 = ATgetArgument(t, 0);
          i_53 = ATgetArgument(t, 1);
          j_53 = ATgetArgument(t, 2);
          k_53 = ATgetArgument(t, 3);
          {
            ATerm z_16 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,a_6 = NULL;
            t = SSLgetAnnotations(l_53);
            z_16 = t;
            t = m_53;
            t = t_127(t);
            e_17 = t;
            t = i_53;
            t = t_127(t);
            f_17 = t;
            t = j_53;
            t = t_127(t);
            g_17 = t;
            t = k_53;
            t = r_127(t);
            h_17 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, e_17, f_17, g_17, h_17);
            a_6 = t;
            t = SSLsetAnnotations(a_6, z_16);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              m_53 = ATgetArgument(t, 0);
              i_53 = ATgetArgument(t, 1);
              j_53 = ATgetArgument(t, 2);
              k_53 = ATgetArgument(t, 3);
              {
                ATerm n_18 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,b_6 = NULL;
                t = SSLgetAnnotations(l_53);
                n_18 = t;
                t = m_53;
                t = t_127(t);
                e_19 = t;
                t = i_53;
                t = t_127(t);
                f_19 = t;
                t = j_53;
                t = t_127(t);
                g_19 = t;
                t = k_53;
                t = r_127(t);
                h_19 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, e_19, f_19, g_19, h_19);
                b_6 = t;
                t = SSLsetAnnotations(b_6, n_18);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  m_53 = ATgetArgument(t, 0);
                  {
                    ATerm y_19 = NULL,c_20 = NULL,c_6 = NULL;
                    t = SSLgetAnnotations(l_53);
                    y_19 = t;
                    t = m_53;
                    t = r_127(t);
                    c_20 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, c_20);
                    c_6 = t;
                    t = SSLsetAnnotations(c_6, y_19);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      m_53 = ATgetArgument(t, 0);
                      {
                        ATerm s_20 = NULL,u_20 = NULL,d_6 = NULL;
                        t = SSLgetAnnotations(l_53);
                        s_20 = t;
                        t = m_53;
                        t = r_127(t);
                        u_20 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, u_20);
                        d_6 = t;
                        t = SSLsetAnnotations(d_6, s_20);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          m_53 = ATgetArgument(t, 0);
                          {
                            ATerm u_21 = NULL,w_21 = NULL,g_6 = NULL;
                            t = SSLgetAnnotations(l_53);
                            u_21 = t;
                            t = m_53;
                            t = r_127(t);
                            w_21 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, w_21);
                            g_6 = t;
                            t = SSLsetAnnotations(g_6, u_21);
                          }
                        }
                      else
                        {
                          ATerm c_22 = NULL,e_22 = NULL,h_6 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              m_53 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(l_53);
                          c_22 = t;
                          t = m_53;
                          t = r_127(t);
                          e_22 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, e_22);
                          h_6 = t;
                          t = SSLsetAnnotations(h_6, c_22);
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
  ATerm k_54 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_54);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm d_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_28);
    }
  else
    {
      t = d_28;
      {
        ATerm g_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_28);
          }
        else
          {
            t = g_28;
            {
              ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  m_54 = ATgetArgument(t, 0);
                  n_54 = ATgetArgument(t, 1);
                  o_54 = ATgetArgument(t, 2);
                  p_54 = ATgetArgument(t, 3);
                  t = o_54;
                  t = map_1_0(p_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_54 = ATgetArgument(t, 0);
                      n_54 = ATgetArgument(t, 1);
                      o_54 = ATgetArgument(t, 2);
                      p_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_54;
                  t = map_1_0(r_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm w_54 = NULL;
  ATerm i_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_54 = ATgetArgument(t, 0);
          {
            ATerm o_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_28);
      t = w_54;
    }
  else
    {
      t = i_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_54;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm f_55 = NULL;
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_55 = ATgetArgument(t, 0);
          {
            ATerm r_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_28);
      t = f_55;
    }
  else
    {
      t = p_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_55;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm j_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_55);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm s_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_28);
    }
  else
    {
      t = s_28;
      {
        ATerm w_28 = t;
        int z_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_28);
          }
        else
          {
            t = w_28;
            {
              ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL,s_55 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  l_55 = ATgetArgument(t, 0);
                  m_55 = ATgetArgument(t, 1);
                  n_55 = ATgetArgument(t, 2);
                  s_55 = ATgetArgument(t, 3);
                  t = n_55;
                  t = map_1_0(v_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_55 = ATgetArgument(t, 0);
                      m_55 = ATgetArgument(t, 1);
                      n_55 = ATgetArgument(t, 2);
                      s_55 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_55;
                  t = map_1_0(x_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm z_55 = NULL;
  ATerm a_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_55 = ATgetArgument(t, 0);
          {
            ATerm e_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_29);
      t = z_55;
    }
  else
    {
      t = a_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_55;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm k_56 = NULL;
  ATerm f_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_56 = ATgetArgument(t, 0);
          {
            ATerm i_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_29);
      t = k_56;
    }
  else
    {
      t = f_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_56;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm t_56 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_56);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm j_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_29);
    }
  else
    {
      t = j_29;
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
            {
              ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  v_56 = ATgetArgument(t, 0);
                  w_56 = ATgetArgument(t, 1);
                  x_56 = ATgetArgument(t, 2);
                  y_56 = ATgetArgument(t, 3);
                  t = x_56;
                  t = map_1_0(b_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_56 = ATgetArgument(t, 0);
                      w_56 = ATgetArgument(t, 1);
                      x_56 = ATgetArgument(t, 2);
                      y_56 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_56;
                  t = map_1_0(c_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm n_57 = NULL;
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_57 = ATgetArgument(t, 0);
          {
            ATerm u_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_29);
      t = n_57;
    }
  else
    {
      t = o_29;
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
static ATerm c_5 (ATerm t)
{
  ATerm y_57 = NULL;
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_57 = ATgetArgument(t, 0);
          {
            ATerm x_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_29);
      t = y_57;
    }
  else
    {
      t = v_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_57;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm c_58 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_58);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        ATerm b_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_30);
          }
        else
          {
            t = b_30;
            {
              ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_58 = ATgetArgument(t, 0);
                  f_58 = ATgetArgument(t, 1);
                  g_58 = ATgetArgument(t, 2);
                  h_58 = ATgetArgument(t, 3);
                  t = g_58;
                  t = map_1_0(g_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_58 = ATgetArgument(t, 0);
                      f_58 = ATgetArgument(t, 1);
                      g_58 = ATgetArgument(t, 2);
                      h_58 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_58;
                  t = map_1_0(m_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm t_58 = NULL;
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_58 = ATgetArgument(t, 0);
          {
            ATerm g_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_30);
      t = t_58;
    }
  else
    {
      t = e_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_58;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm e_59 = NULL;
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_59 = ATgetArgument(t, 0);
          {
            ATerm j_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_30);
      t = e_59;
    }
  else
    {
      t = h_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_59;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm i_54 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      i_54 = ATgetArgument(t, 0);
      t = i_54;
      t = free_vars_3_0(m_4, o_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          i_54 = ATgetArgument(t, 0);
          t = i_54;
          t = free_vars_3_0(s_4, t_4, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              i_54 = ATgetArgument(t, 0);
              t = i_54;
              t = free_vars_3_0(y_4, a_5, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  i_54 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = i_54;
              t = free_vars_3_0(d_5, e_5, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm f_8 (ATerm g_107 (ATerm), ATerm g_38, ATerm f_38, ATerm t)
{
  static ATerm c_60 (ATerm t)
  {
    ATerm v_59 = NULL,y_59 = NULL,z_59 = NULL;
    v_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_38;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_59 = ATgetFirst((ATermList) t);
            z_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_30 = t;
          int m_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_59;
              {
                static ATerm o_5 (ATerm t)
                {
                  t = f_38;
                  return(t);
                }
                t = g_8(g_107, o_5, y_59, z_59, t);
              }
              t = c_60(t);
              LocalPopChoice(m_30);
            }
          else
            {
              t = k_30;
              {
                ATerm l_22 = NULL,p_22 = NULL,v_6 = NULL;
                t = SSLgetAnnotations(v_59);
                l_22 = t;
                t = z_59;
                t = c_60(t);
                p_22 = t;
                t = (ATerm) ATinsert(CheckATermList(p_22), y_59);
                v_6 = t;
                t = SSLsetAnnotations(v_6, l_22);
              }
            }
        }
      }
    return(t);
  }
  t = g_38;
  t = c_60(t);
  return(t);
}
ATerm foldr_3_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,o_60 = NULL;
  k_60 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_60;
      t = o_109(t);
    }
  else
    {
      ATerm r_60 = NULL,v_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_60 = ATgetFirst((ATermList) t);
          o_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_60;
      t = q_109(t);
      r_60 = t;
      t = o_60;
      t = foldr_3_0(o_109, p_109, q_109, t);
      v_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_60, v_60);
      t = p_109(t);
    }
  return(t);
}
static ATerm g_8 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm k_38, ATerm j_38, ATerm t)
{
  t = k_107(t);
  {
    static ATerm q_5 (ATerm t)
    {
      ATerm b_61 = NULL;
      b_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_38, b_61);
      t = j_107(t);
      return(t);
    }
    t = fetch_1_0(q_5, t);
  }
  t = j_38;
  return(t);
}
static ATerm h_8 (ATerm b_107 (ATerm), ATerm e_38, ATerm d_38, ATerm t)
{
  static ATerm u_62 (ATerm t)
  {
    ATerm l_62 = NULL,m_62 = NULL,o_62 = NULL;
    l_62 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_62;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_62 = ATgetFirst((ATermList) t);
            o_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_30 = t;
          int p_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_62;
              {
                static ATerm t_5 (ATerm t)
                {
                  t = d_38;
                  return(t);
                }
                t = g_8(b_107, t_5, m_62, o_62, t);
              }
              t = u_62(t);
              LocalPopChoice(p_30);
            }
          else
            {
              t = n_30;
              {
                ATerm i_23 = NULL,m_23 = NULL,a_10 = NULL;
                t = SSLgetAnnotations(l_62);
                i_23 = t;
                t = o_62;
                t = u_62(t);
                m_23 = t;
                t = (ATerm) ATinsert(CheckATermList(m_23), m_62);
                a_10 = t;
                t = SSLsetAnnotations(a_10, i_23);
              }
            }
        }
      }
    return(t);
  }
  t = e_38;
  t = u_62(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_30 = ATgetArgument(t, 0);
      if(((ATgetType(q_30) != AT_LIST) || !(ATisEmpty(q_30))))
        _fail(t);
      {
        ATerm r_30 = ATgetArgument(t, 1);
        if(((ATgetType(r_30) != AT_LIST) || !(ATisEmpty(r_30))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm e_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_30 = ATgetArgument(t, 0);
      if(((ATgetType(s_30) == AT_LIST) && !(ATisEmpty(s_30))))
        {
          e_63 = ATgetFirst((ATermList) s_30);
          g_63 = (ATerm) ATgetNext((ATermList) s_30);
        }
      else
        _fail(t);
      {
        ATerm t_30 = ATgetArgument(t, 1);
        if(((ATgetType(t_30) == AT_LIST) && !(ATisEmpty(t_30))))
          {
            h_63 = ATgetFirst((ATermList) t_30);
            i_63 = (ATerm) ATgetNext((ATermList) t_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_63, h_63), (ATerm) ATmakeAppl(sym__2, g_63, i_63));
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL;
  if(match_cons(t, sym__2))
    {
      j_63 = ATgetArgument(t, 0);
      k_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_63), j_63);
  return(t);
}
static ATerm j_8 (ATerm v_668, ATerm a_669, ATerm s_66, ATerm t)
{
  ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL,c_63 = NULL;
  t = SSL_explode_term(a_669);
  if(match_cons(t, sym__2))
    {
      x_62 = ATgetArgument(t, 0);
      z_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_668);
  if(match_cons(t, sym__2))
    {
      if((x_62 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      y_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_62, z_62);
  t = genzip_4_0(v_5, x_5, y_5, _id, t);
  c_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_63, s_66);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm t)
{
  static ATerm o_63 (ATerm t)
  {
    ATerm u_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_96(t);
        LocalPopChoice(y_30);
      }
    else
      {
        t = u_30;
        t = m_96(t);
        t = o_63(t);
      }
    return(t);
  }
  t = o_63(t);
  return(t);
}
ATerm for_3_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t)
{
  t = o_96(t);
  t = while_not_2_0(p_96, q_96, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm y_63 = NULL;
  y_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_63);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL,l_64 = NULL,m_64 = NULL,e_10 = NULL;
  m_64 = t;
  if(match_cons(t, sym__2))
    {
      f_64 = ATgetArgument(t, 0);
      l_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_64);
  e_64 = t;
  t = l_64;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_64, l_64);
  e_10 = t;
  t = SSLsetAnnotations(e_10, e_64);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm a_66 = NULL,c_66 = NULL,d_66 = NULL,g_66 = NULL,h_66 = NULL;
  a_66 = t;
  if(match_cons(t, sym__2))
    {
      c_66 = ATgetArgument(t, 0);
      d_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_66 = ATgetFirst((ATermList) t);
      h_66 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_31 = t;
        int b_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_66(c_66, d_66, a_66, t);
            LocalPopChoice(b_31);
          }
        else
          {
            t = a_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_66), g_66), h_66);
          }
      }
    }
  else
    {
      t = x_66(c_66, d_66, a_66, t);
    }
  return(t);
}
static ATerm x_66 (ATerm q_64, ATerm w_64, ATerm c_65, ATerm t)
{
  ATerm d_65 = NULL,i_65 = NULL,f_10 = NULL,l_65 = NULL,m_65 = NULL,p_65 = NULL,q_65 = NULL;
  t = SSLgetAnnotations(c_65);
  d_65 = t;
  t = w_64;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_65 = ATgetFirst((ATermList) t);
      q_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_65;
  if(match_cons(t, sym__2))
    {
      m_65 = ATgetArgument(t, 0);
      p_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_65;
        if((m_65 != t))
          {
            _fail(t);
          }
        t = q_65;
        LocalPopChoice(g_31);
      }
    else
      {
        t = c_31;
        t = w_64;
        t = j_8(m_65, p_65, q_65, t);
      }
  }
  i_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_64, i_65);
  f_10 = t;
  t = SSLsetAnnotations(f_10, d_65);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm w_66 = NULL;
  if(match_cons(t, sym__2))
    {
      w_66 = ATgetArgument(t, 0);
      if((w_66 != ATgetArgument(t, 1)))
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
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_6, i_6, j_6, t);
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
      {
        ATerm l_66 = NULL,n_66 = NULL,o_66 = NULL;
        l_66 = t;
        if(match_cons(t, sym__2))
          {
            n_66 = ATgetArgument(t, 0);
            o_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_66;
        t = h_8(k_6, n_66, o_66, t);
      }
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL;
  if(match_cons(t, sym__2))
    {
      z_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(u_6, z_23, a_24, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm b_24 = NULL;
  if(match_cons(t, sym__2))
    {
      b_24 = ATgetArgument(t, 0);
      if((b_24 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  if(match_cons(t, sym__2))
    {
      l_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(y_6, l_24, m_24, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm n_24 = NULL;
  if(match_cons(t, sym__2))
    {
      n_24 = ATgetArgument(t, 0);
      if((n_24 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm h_125 (ATerm), ATerm i_125 (ATerm), ATerm j_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm p_67 (ATerm t)
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_125(t);
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        {
          ATerm l_31 = t;
          int m_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_66 = NULL,a_67 = NULL,u_23 = NULL,v_23 = NULL;
              z_66 = t;
              t = i_125(t);
              a_67 = t;
              t = z_66;
              {
                static ATerm l_6 (ATerm t)
                {
                  ATerm e_67 = NULL;
                  t = p_67(t);
                  e_67 = t;
                  t = (ATerm) ATmakeAppl(sym__2, e_67, a_67);
                  t = diff_0_0(t);
                  return(t);
                }
                t = j_125(l_6, p_67, m_6, t);
              }
              v_23 = t;
              t = SSL_explode_term(v_23);
              if(match_cons(t, sym__2))
                {
                  ATerm n_31 = ATgetArgument(t, 0);
                  u_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_23;
              t = foldr_3_0(n_6, s_6, _id, t);
              LocalPopChoice(m_31);
            }
          else
            {
              t = l_31;
              {
                ATerm d_24 = NULL,e_24 = NULL;
                e_24 = t;
                t = SSL_explode_term(e_24);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_31 = ATgetArgument(t, 0);
                    d_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_24;
                t = foldr_3_0(w_6, x_6, p_67, t);
              }
            }
        }
      }
    return(t);
  }
  t = p_67(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm d_68 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_68);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      {
        ATerm r_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_31);
          }
        else
          {
            t = r_31;
            {
              ATerm f_68 = NULL,i_68 = NULL,j_68 = NULL,q_68 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_68 = ATgetArgument(t, 0);
                  i_68 = ATgetArgument(t, 1);
                  j_68 = ATgetArgument(t, 2);
                  q_68 = ATgetArgument(t, 3);
                  t = j_68;
                  t = map_1_0(b_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_68 = ATgetArgument(t, 0);
                      i_68 = ATgetArgument(t, 1);
                      j_68 = ATgetArgument(t, 2);
                      q_68 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_68;
                  t = map_1_0(f_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm y_68 = NULL;
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_68 = ATgetArgument(t, 0);
          {
            ATerm v_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_31);
      t = y_68;
    }
  else
    {
      t = t_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_68;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm k_69 = NULL;
  ATerm w_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_69 = ATgetArgument(t, 0);
          {
            ATerm z_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_31);
      t = k_69;
    }
  else
    {
      t = w_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_69;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm v_67 = NULL,a_68 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      a_68 = ATgetArgument(t, 0);
      t = a_68;
      if(match_cons(t, sym_Rule_3))
        {
          v_67 = ATgetArgument(t, 0);
          {
            ATerm a_32 = ATgetArgument(t, 1);
          }
          {
            ATerm b_32 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = v_67;
      t = free_vars_3_0(z_6, a_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          a_68 = ATgetArgument(t, 0);
          {
            ATerm c_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_68;
    }
  return(t);
}
ATerm Var_1_0 (ATerm g_75 (ATerm), ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,j_10 = NULL;
  s_69 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_69);
  p_69 = t;
  t = q_69;
  t = g_75(t);
  r_69 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_69);
  j_10 = t;
  t = SSLsetAnnotations(j_10, p_69);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,r_71 = NULL,s_71 = NULL,u_71 = NULL;
  m_71 = t;
  if(match_cons(t, sym__2))
    {
      n_71 = ATgetArgument(t, 0);
      r_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_71 = ATgetFirst((ATermList) t);
      u_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_71;
  if(match_cons(t, sym__2))
    {
      k_71 = ATgetArgument(t, 0);
      l_71 = ATgetArgument(t, 1);
      {
        ATerm d_32 = t;
        int e_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_71;
            if((n_71 != t))
              {
                _fail(t);
              }
            t = l_71;
            LocalPopChoice(e_32);
          }
        else
          {
            t = d_32;
            t = (ATerm) ATmakeAppl(sym__2, n_71, u_71);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, n_71, u_71);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm m_8 (ATerm c_124 (ATerm), ATerm d_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_64, ATerm y_64, ATerm x_64, ATerm t)
{
  static ATerm i_7 (ATerm t)
  {
    ATerm u_69 = NULL;
    u_69 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_69, x_64);
    t = c_124(t);
    return(t);
  }
  static ATerm l_7 (ATerm t)
  {
    ATerm v_69 = NULL;
    v_69 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_69, y_64);
    t = c_124(t);
    return(t);
  }
  t = z_64;
  t = d_124(i_7, l_7, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm p_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_32 = ATgetArgument(t, 0);
      if(((ATgetType(h_32) != AT_LIST) || !(ATisEmpty(h_32))))
        _fail(t);
      {
        ATerm i_32 = ATgetArgument(t, 1);
        if(((ATgetType(i_32) != AT_LIST) || !(ATisEmpty(i_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL,t_70 = NULL,v_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_32 = ATgetArgument(t, 0);
      if(((ATgetType(j_32) == AT_LIST) && !(ATisEmpty(j_32))))
        {
          p_70 = ATgetFirst((ATermList) j_32);
          q_70 = (ATerm) ATgetNext((ATermList) j_32);
        }
      else
        _fail(t);
      {
        ATerm k_32 = ATgetArgument(t, 1);
        if(((ATgetType(k_32) == AT_LIST) && !(ATisEmpty(k_32))))
          {
            t_70 = ATgetFirst((ATermList) k_32);
            v_70 = (ATerm) ATgetNext((ATermList) k_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_70, t_70), (ATerm) ATmakeAppl(sym__2, q_70, v_70));
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm w_70 = NULL,a_71 = NULL;
  if(match_cons(t, sym__2))
    {
      w_70 = ATgetArgument(t, 0);
      a_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_71), w_70);
  return(t);
}
static ATerm n_8 (ATerm w_123 (ATerm), ATerm x_123 (ATerm (ATerm), ATerm), ATerm r_64, ATerm u_64, ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,m_70 = NULL;
  t = r_64;
  t = w_123(t);
  c_70 = t;
  t = map_1_0(new_0_0, t);
  d_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_70, d_70);
  t = genzip_4_0(p_7, s_7, t_7, _id, t);
  m_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_70, u_64);
  t = conc_0_0(t);
  e_70 = t;
  t = r_64;
  {
    static ATerm u_7 (ATerm t)
    {
      t = d_70;
      return(t);
    }
    t = x_123(u_7, t);
  }
  f_70 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_70, u_64, e_70);
  return(t);
}
ATerm env_alltd_1_0 (ATerm k_101 (ATerm), ATerm t)
{
  static ATerm y_72 (ATerm t)
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_101(t);
        LocalPopChoice(m_32);
      }
    else
      {
        t = l_32;
        {
          ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL;
          static ATerm y_7 (ATerm t)
          {
            ATerm x_24 = NULL;
            x_24 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_24, not_null(x_72));
            t = y_72(t);
            return(t);
          }
          v_72 = t;
          if(match_cons(t, sym__2))
            {
              w_72 = ATgetArgument(t, 0);
              if(((x_72 != NULL) && (x_72 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                x_72 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_72;
          t = SRTS_all(y_7, t);
        }
      }
    return(t);
  }
  t = y_72(t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_32 = ATgetArgument(t, 0);
      if(((ATgetType(n_32) != AT_LIST) || !(ATisEmpty(n_32))))
        _fail(t);
      {
        ATerm o_32 = ATgetArgument(t, 1);
        if(((ATgetType(o_32) != AT_LIST) || !(ATisEmpty(o_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_32 = ATgetArgument(t, 0);
      if(((ATgetType(p_32) == AT_LIST) && !(ATisEmpty(p_32))))
        {
          k_73 = ATgetFirst((ATermList) p_32);
          l_73 = (ATerm) ATgetNext((ATermList) p_32);
        }
      else
        _fail(t);
      {
        ATerm q_32 = ATgetArgument(t, 1);
        if(((ATgetType(q_32) == AT_LIST) && !(ATisEmpty(q_32))))
          {
            m_73 = ATgetFirst((ATermList) q_32);
            n_73 = (ATerm) ATgetNext((ATermList) q_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_73, m_73), (ATerm) ATmakeAppl(sym__2, l_73, n_73));
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL;
  if(match_cons(t, sym__2))
    {
      o_73 = ATgetArgument(t, 0);
      p_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_73), o_73);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL;
  c_73 = t;
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_32 = ATgetArgument(t, 0);
            ATerm w_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(s_32);
        t = c_73;
      }
    else
      {
        t = r_32;
        {
          ATerm j_73 = NULL;
          if(match_cons(t, sym__3))
            {
              d_73 = ATgetArgument(t, 0);
              e_73 = ATgetArgument(t, 1);
              f_73 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, d_73, e_73);
          t = genzip_4_0(q_9, r_9, s_9, _id, t);
          j_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_73, f_73);
        }
      }
  }
  return(t);
}
ATerm substitute_6_0 (ATerm d_123 (ATerm), ATerm e_123 (ATerm (ATerm), ATerm), ATerm f_123 (ATerm), ATerm g_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_123 (ATerm (ATerm), ATerm), ATerm i_123 (ATerm), ATerm t)
{
  ATerm u_73 = NULL,v_73 = NULL;
  static ATerm y_74 (ATerm t)
  {
    static ATerm t_9 (ATerm t)
    {
      static ATerm z_74 (ATerm w_73, ATerm t)
      {
        ATerm x_73 = NULL,i_25 = NULL;
        t = SSL_explode_term(w_73);
        if(match_cons(t, sym__2))
          {
            ATerm a_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_33) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_33 = ATgetArgument(t, 1);
              if(((ATgetType(b_33) == AT_LIST) && !(ATisEmpty(b_33))))
                {
                  x_73 = ATgetFirst((ATermList) b_33);
                  {
                    ATerm c_33 = (ATerm) ATgetNext((ATermList) b_33);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_73;
        t = d_123(t);
        i_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_25, not_null(v_73));
        t = lookup_0_0(t);
        t = i_123(t);
        return(t);
      }
      static ATerm d_75 (ATerm z_73, ATerm a_74, ATerm b_74, ATerm t)
      {
        ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL;
        t = b_74;
        t = n_8(f_123, h_123, z_73, a_74, t);
        if(match_cons(t, sym__3))
          {
            c_74 = ATgetArgument(t, 0);
            d_74 = ATgetArgument(t, 1);
            e_74 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = m_8(y_74, g_123, c_74, d_74, e_74, t);
        return(t);
      }
      ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL;
      h_74 = t;
      if(match_cons(t, sym__2))
        {
          i_74 = ATgetArgument(t, 0);
          j_74 = ATgetArgument(t, 1);
          {
            ATerm g_33 = t;
            int h_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm u_9 (ATerm t)
                {
                  ATerm r_74 = NULL;
                  r_74 = t;
                  t = (ATerm) ATmakeAppl(sym__2, r_74, j_74);
                  t = lookup_0_0(t);
                  return(t);
                }
                t = i_74;
                t = e_123(u_9, t);
                LocalPopChoice(h_33);
              }
            else
              {
                t = g_33;
                {
                  ATerm i_33 = t;
                  int j_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = z_74(h_74, t);
                      LocalPopChoice(j_33);
                    }
                  else
                    {
                      t = i_33;
                      t = d_75(i_74, j_74, h_74, t);
                    }
                }
              }
          }
        }
      else
        {
          t = z_74(h_74, t);
        }
      return(t);
    }
    t = env_alltd_1_0(t_9, t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((v_73 != NULL) && (v_73 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_73 = ATgetArgument(t, 0);
      u_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_73, (ATerm) ATempty);
  t = y_74(t);
  return(t);
}
ATerm genzip_4_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t)
{
  static ATerm l_75 (ATerm t)
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_105(t);
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
        {
          ATerm e_75 = NULL,f_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,k_14 = NULL;
          t = l_105(t);
          k_75 = t;
          if(match_cons(t, sym__2))
            {
              f_75 = ATgetArgument(t, 0);
              h_75 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_75);
          e_75 = t;
          t = f_75;
          t = n_105(t);
          i_75 = t;
          t = h_75;
          t = l_75(t);
          j_75 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_75, j_75);
          k_14 = t;
          t = SSLsetAnnotations(k_14, e_75);
          t = m_105(t);
        }
      }
    return(t);
  }
  t = l_75(t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_33 = ATgetArgument(t, 0);
      if(((ATgetType(m_33) != AT_LIST) || !(ATisEmpty(m_33))))
        _fail(t);
      {
        ATerm n_33 = ATgetArgument(t, 1);
        if(((ATgetType(n_33) != AT_LIST) || !(ATisEmpty(n_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_33 = ATgetArgument(t, 0);
      if(((ATgetType(o_33) == AT_LIST) && !(ATisEmpty(o_33))))
        {
          x_75 = ATgetFirst((ATermList) o_33);
          y_75 = (ATerm) ATgetNext((ATermList) o_33);
        }
      else
        _fail(t);
      {
        ATerm p_33 = ATgetArgument(t, 1);
        if(((ATgetType(p_33) == AT_LIST) && !(ATisEmpty(p_33))))
          {
            z_75 = ATgetFirst((ATermList) p_33);
            a_76 = (ATerm) ATgetNext((ATermList) p_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_75, z_75), (ATerm) ATmakeAppl(sym__2, y_75, a_76));
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm b_76 = NULL,c_76 = NULL;
  if(match_cons(t, sym__2))
    {
      b_76 = ATgetArgument(t, 0);
      c_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_76), b_76);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm e_76 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_76;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm q_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_33);
    }
  else
    {
      t = q_33;
      {
        ATerm v_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_33);
          }
        else
          {
            t = v_33;
            {
              ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_76 = ATgetArgument(t, 0);
                  h_76 = ATgetArgument(t, 1);
                  i_76 = ATgetArgument(t, 2);
                  j_76 = ATgetArgument(t, 3);
                  t = i_76;
                  t = map_1_0(g_10, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_76 = ATgetArgument(t, 0);
                      h_76 = ATgetArgument(t, 1);
                      i_76 = ATgetArgument(t, 2);
                      j_76 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_76;
                  t = map_1_0(h_10, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm q_76 = NULL;
  ATerm x_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_76 = ATgetArgument(t, 0);
          {
            ATerm a_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_33);
      t = q_76;
    }
  else
    {
      t = x_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_76;
    }
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm z_76 = NULL;
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_76 = ATgetArgument(t, 0);
          {
            ATerm d_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_34);
      t = z_76;
    }
  else
    {
      t = b_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_76;
    }
  return(t);
}
static ATerm v_8 (ATerm w_94 (ATerm), ATerm t_22, ATerm u_22, ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL;
  t = w_94(t);
  {
    static ATerm v_9 (ATerm t)
    {
      ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL;
      u_75 = t;
      if(match_cons(t, sym_Overlay_3))
        {
          if((t_22 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          v_75 = ATgetArgument(t, 1);
          w_75 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, v_75, u_22);
      t = genzip_4_0(w_9, y_9, b_10, _id, t);
      if(((r_75 != NULL) && (r_75 != t)))
        _fail(t);
      else
        r_75 = t;
      t = w_75;
      if(((s_75 != NULL) && (s_75 != t)))
        _fail(t);
      else
        s_75 = t;
      t = u_75;
      return(t);
    }
    t = fetch_1_0(v_9, t);
  }
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_75), not_null(s_75));
  t = substitute_6_0(c_10, Var_1_0, d_10, tboundin_3_0, tpaste_1_0, _id, t);
  return(t);
}
ATerm Trm_to_Cong_0_0 (ATerm t)
{
  ATerm h_77 = NULL,j_77 = NULL;
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_BuildDefault_1))
        {
          ATerm g_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(f_34);
      t = term_o_15;
    }
  else
    {
      t = e_34;
      if(match_cons(t, sym_Real_1))
        {
          j_77 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, j_77));
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              j_77 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, j_77));
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  j_77 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, j_77));
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      j_77 = ATgetArgument(t, 0);
                      h_77 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_34, (ATerm)ATinsert(ATinsert(ATempty, h_77), j_77), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          j_77 = ATgetArgument(t, 0);
                          h_77 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_77), h_77, (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_Var_1))
                            {
                              j_77 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_77), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL;
  f_78 = t;
  if(match_cons(t, sym_Op_2))
    {
      d_78 = ATgetArgument(t, 0);
      e_78 = ATgetArgument(t, 1);
      {
        ATerm i_34 = t;
        int j_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_25 = NULL,c_26 = NULL,j_17 = NULL;
            t = SSLgetAnnotations(f_78);
            p_25 = t;
            t = e_78;
            t = map_1_0(trm_to_cong_0_0, t);
            c_26 = t;
            t = (ATerm) ATmakeAppl(sym_Op_2, d_78, c_26);
            j_17 = t;
            t = SSLsetAnnotations(j_17, p_25);
            LocalPopChoice(j_34);
          }
        else
          {
            t = i_34;
            t = f_78;
          }
      }
    }
  else
    {
      t = f_78;
    }
  t = Trm_to_Cong_0_0(t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm n_78 = NULL;
  n_78 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_78, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_14), term_b_14));
  return(t);
}
static ATerm b_8 (ATerm b_23, ATerm d_23, ATerm c_23, ATerm t)
{
  ATerm k_78 = NULL,l_78 = NULL;
  t = d_23;
  t = map_1_0(i_10, t);
  k_78 = t;
  t = c_23;
  t = trm_to_cong_0_0(t);
  l_78 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, b_23, k_78, l_78);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      b_79 = ATgetArgument(t, 0);
      c_79 = ATgetArgument(t, 1);
      d_79 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_8(b_79, c_79, d_79, t);
  return(t);
}
static ATerm w_8 (ATerm r_21, ATerm t_21, ATerm s_21, ATerm t)
{
  ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL;
  t = t_21;
  {
    ATerm k_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_10 (ATerm t)
        {
          static ATerm l_10 (ATerm t)
          {
            ATerm w_78 = NULL,x_78 = NULL;
            static ATerm n_10 (ATerm t)
            {
              t = t_21;
              return(t);
            }
            if(match_cons(t, sym_Op_2))
              {
                w_78 = ATgetArgument(t, 0);
                x_78 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_8(n_10, w_78, x_78, t);
            return(t);
          }
          t = repeat_2_0(l_10, _id, t);
          return(t);
        }
        ATerm n_34 = t;
        if((PushChoice() == 0))
          {
            t = t_21;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_34;
          }
        t = t_21;
        t = topdown_1_0(k_10, t);
        LocalPopChoice(m_34);
      }
    else
      {
        t = k_34;
      }
  }
  r_78 = t;
  t = t_21;
  t = map_1_0(p_10, t);
  t_78 = t;
  t = s_21;
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_10 (ATerm t)
        {
          ATerm q_34 = t;
          int r_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_26 = NULL,t_26 = NULL;
              static ATerm u_10 (ATerm t)
              {
                t = r_78;
                return(t);
              }
              if(match_cons(t, sym_Op_2))
                {
                  m_26 = ATgetArgument(t, 0);
                  t_26 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_8(u_10, m_26, t_26, t);
              LocalPopChoice(r_34);
            }
          else
            {
              t = q_34;
            }
          return(t);
        }
        ATerm s_34 = t;
        if((PushChoice() == 0))
          {
            t = r_78;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_34;
          }
        t = s_21;
        t = topdown_1_0(t_10, t);
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
      }
  }
  u_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_78, u_78);
  t = conc_0_0(t);
  s_78 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, s_78)), (ATerm) ATmakeAppl(sym_Signature_1, r_21)));
  return(t);
}
static ATerm x_8 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm i_79 = NULL;
  t = SSL_fputc(h_47, i_47);
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_79);
  return(t);
}
static ATerm y_8 (ATerm x_32, ATerm y_32, ATerm t)
{
  ATerm j_79 = NULL;
  t = SSL_write_term_to_stream_text(x_32, y_32);
  j_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_79);
  return(t);
}
static ATerm a_9 (ATerm x_102 (ATerm), ATerm r_227, ATerm d_33, ATerm t)
{
  ATerm k_79 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_227, term_t_34);
  t = e_9(t);
  k_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_79, d_33);
  t = x_102(t);
  t = fclose_0_0(t);
  t = d_33;
  return(t);
}
static ATerm z_8 (ATerm t_32, ATerm u_32, ATerm t)
{
  ATerm l_79 = NULL;
  t = SSL_write_term_to_stream_baf(t_32, u_32);
  l_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_79);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm s_79 = NULL,t_79 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_34 = ATgetArgument(t, 0);
      if(match_cons(u_34, sym_Stream_1))
        {
          s_79 = ATgetArgument(u_34, 0);
        }
      else
        _fail(t);
      t_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_8(s_79, t_79, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_34 = ATgetArgument(t, 0);
      if(match_cons(v_34, sym_Stream_1))
        {
          x_79 = ATgetArgument(v_34, 0);
        }
      else
        _fail(t);
      y_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_8(x_79, y_79, t);
  u_79 = t;
  t = term_w_34;
  v_79 = t;
  t = u_79;
  if(match_cons(t, sym_Stream_1))
    {
      w_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_34, u_79);
  t = x_8(v_79, w_79, t);
  return(t);
}
ATerm output_1_0 (ATerm c_121 (ATerm), ATerm t)
{
  ATerm m_79 = NULL,n_79 = NULL;
  t = c_121(t);
  n_79 = t;
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_79 = NULL,p_79 = NULL;
        t = term_z_34;
        o_79 = t;
        t = term_b_35;
        p_79 = t;
        t = term_c_35;
        t = i_9(o_79, p_79, t);
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
        t = term_d_35;
      }
  }
  m_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_79, n_79);
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_79 = NULL,r_79 = NULL;
        t = term_z_34;
        q_79 = t;
        t = term_g_35;
        r_79 = t;
        t = term_h_35;
        t = i_9(q_79, r_79, t);
        t = (ATerm) ATmakeAppl(sym__2, m_79, n_79);
        LocalPopChoice(f_35);
        if(match_cons(t, sym__2))
          {
            ATerm i_35 = ATgetArgument(t, 0);
            ATerm j_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_9(v_10, m_79, n_79, t);
      }
    else
      {
        t = e_35;
        if(match_cons(t, sym__2))
          {
            ATerm k_35 = ATgetArgument(t, 0);
            ATerm l_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_9(w_10, m_79, n_79, t);
      }
  }
  return(t);
}
static ATerm m_80 (ATerm g_80, ATerm t)
{
  t = SSL_fclose(g_80);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_80 = NULL,k_80 = NULL;
  k_80 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_80 = ATgetArgument(t, 0);
      {
        ATerm m_35 = t;
        int n_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_80);
            LocalPopChoice(n_35);
          }
        else
          {
            t = m_35;
            t = m_80(k_80, t);
          }
      }
    }
  else
    {
      t = m_80(k_80, t);
    }
  return(t);
}
static ATerm b_9 (ATerm z_32, ATerm t)
{
  t = SSL_read_term_from_stream(z_32);
  return(t);
}
static ATerm c_9 (ATerm a_46, ATerm b_46, ATerm t)
{
  t = SSL_strcat(a_46, b_46);
  return(t);
}
static ATerm d_9 (ATerm j_47, ATerm k_47, ATerm t)
{
  ATerm n_80 = NULL;
  t = SSL_fopen(j_47, k_47);
  n_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_80);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_80 = NULL;
  t = SSL_stdin_stream();
  o_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_80);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_80 = NULL;
  t = SSL_stdout_stream();
  p_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_80);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_80 = NULL;
  t = SSL_stderr_stream();
  q_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_80);
  return(t);
}
static ATerm x_81 (ATerm w_80, ATerm t)
{
  ATerm x_80 = NULL;
  t = SSL_explode_term(w_80);
  if(match_cons(t, sym__2))
    {
      ATerm o_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_35 = ATgetArgument(t, 1);
        if(((ATgetType(p_35) == AT_LIST) && !(ATisEmpty(p_35))))
          {
            x_80 = ATgetFirst((ATermList) p_35);
            {
              ATerm q_35 = (ATerm) ATgetNext((ATermList) p_35);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_80;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_80;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_80;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_80;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_81 (ATerm a_81, ATerm b_81, ATerm c_81, ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL,i_81 = NULL,l_17 = NULL;
  t = SSLgetAnnotations(c_81);
  f_81 = t;
  t = a_81;
  if(match_cons(t, sym_Path_1))
    {
      i_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_81, b_81);
  l_17 = t;
  t = SSLsetAnnotations(l_17, f_81);
  if(match_cons(t, sym__2))
    {
      d_81 = ATgetArgument(t, 0);
      e_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9(d_81, e_81, t);
  return(t);
}
static ATerm z_81 (ATerm k_81, ATerm l_81, ATerm m_81, ATerm t)
{
  ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL,s_81 = NULL,m_17 = NULL;
  t = SSLgetAnnotations(m_81);
  p_81 = t;
  t = SSL_is_string(k_81);
  s_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_81, l_81);
  m_17 = t;
  t = SSLsetAnnotations(m_17, p_81);
  if(match_cons(t, sym__2))
    {
      n_81 = ATgetArgument(t, 0);
      o_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9(n_81, o_81, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL;
  u_81 = t;
  if(match_cons(t, sym__2))
    {
      v_81 = ATgetArgument(t, 0);
      w_81 = ATgetArgument(t, 1);
      {
        ATerm r_35 = t;
        int t_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_81(u_81, t);
            LocalPopChoice(t_35);
          }
        else
          {
            t = r_35;
            {
              ATerm x_35 = t;
              int y_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_81(v_81, w_81, u_81, t);
                  LocalPopChoice(y_35);
                }
              else
                {
                  t = x_35;
                  t = z_81(v_81, w_81, u_81, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_81(u_81, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_82 = NULL,c_82 = NULL,d_82 = NULL,i_82 = NULL;
  i_82 = t;
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_82, term_b_36);
        t = e_9(t);
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        {
          ATerm i_27 = NULL,j_27 = NULL;
          t = term_c_36;
          j_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_36, i_82);
          t = c_9(j_27, i_82, t);
          i_27 = t;
          t = SSL_perror(i_27);
          _fail(t);
        }
      }
  }
  c_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_9(d_82, t);
  b_82 = t;
  t = c_82;
  t = fclose_0_0(t);
  t = b_82;
  return(t);
}
ATerm input_1_0 (ATerm d_121 (ATerm), ATerm t)
{
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_82 = NULL,o_82 = NULL;
      t = term_z_34;
      n_82 = t;
      t = term_f_36;
      o_82 = t;
      t = term_g_36;
      t = i_9(n_82, o_82, t);
      LocalPopChoice(e_36);
    }
  else
    {
      t = d_36;
      t = term_k_36;
    }
  t = ReadFromFile_0_0(t);
  t = d_121(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL;
  p_82 = t;
  t = term_v_16;
  t = whoami_0_0(t);
  q_82 = t;
  t = term_l_36;
  s_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_36), q_82), term_m_36);
  t_82 = t;
  t = SSL_printnl(s_82, t_82);
  t = term_d_18;
  r_82 = t;
  t = SSL_exit(r_82);
  t = p_82;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm v_82 = NULL;
  v_82 = t;
  if(match_string(t, "-k"))
    {
      t = v_82;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_82;
    }
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL;
  w_82 = t;
  t = SSL_string_to_int(w_82);
  x_82 = t;
  t = term_p_36;
  y_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_36, x_82);
  t = l_9(y_82, x_82, t);
  t = w_82;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_10, y_10, z_10, t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm a_83 = NULL;
  a_83 = t;
  if(match_string(t, "-S"))
    {
      t = a_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_83;
    }
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm b_83 = NULL,c_83 = NULL;
  t = term_r_36;
  b_83 = t;
  t = term_a_18;
  c_83 = t;
  t = term_s_36;
  t = l_9(b_83, c_83, t);
  t = term_t_36;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_u_36;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm d_83 = NULL,e_83 = NULL,f_83 = NULL;
  d_83 = t;
  t = SSL_string_to_int(d_83);
  e_83 = t;
  t = term_r_36;
  f_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_36, e_83);
  t = l_9(f_83, e_83, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_83);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_v_36;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm g_83 = NULL,h_83 = NULL;
  t = term_x_36;
  g_83 = t;
  t = term_v_16;
  h_83 = t;
  t = term_y_36;
  t = l_9(g_83, h_83, t);
  t = term_d_37;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = term_e_37;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_11, f_11, i_11, t);
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
      {
        ATerm h_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_11, k_11, l_11, t);
            LocalPopChoice(i_37);
          }
        else
          {
            t = h_37;
            t = Option_3_0(m_11, n_11, o_11, t);
          }
      }
    }
  return(t);
}
static ATerm l_9 (ATerm a_57, ATerm b_57, ATerm t)
{
  ATerm i_83 = NULL;
  t = term_z_34;
  i_83 = t;
  t = SSL_table_put(i_83, a_57, b_57);
  t = (ATerm) ATmakeAppl(sym__3, term_z_34, a_57, b_57);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL;
      t = term_v_16;
      t = e_0(t);
      n_83 = t;
      t = term_j_37;
      o_83 = t;
      t = term_k_37;
      p_83 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_37, term_k_37, n_83);
      t = j_9(o_83, p_83, n_83, t);
      _fail(t);
    }
  else
    {
      ATerm s_83 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_83 = ATgetFirst((ATermList) t);
          m_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_83;
      t = c_0(t);
      t = term_v_16;
      t = d_0(t);
      s_83 = t;
      t = (ATerm) ATinsert(CheckATermList(m_83), s_83);
    }
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm u_83 = NULL;
  u_83 = t;
  if(match_string(t, "-o"))
    {
      t = u_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_83;
    }
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm v_83 = NULL,w_83 = NULL;
  v_83 = t;
  t = term_b_35;
  w_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_35, v_83);
  t = l_9(w_83, v_83, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_83);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_l_37;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_11, r_11, s_11, t);
  return(t);
}
static ATerm j_9 (ATerm v_61, ATerm w_61, ATerm u_61, ATerm t)
{
  ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL;
  y_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_61, w_61);
  {
    ATerm m_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_37 = ATgetArgument(t, 0);
            ATerm q_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_61, w_61);
        t = i_9(v_61, w_61, t);
        LocalPopChoice(n_37);
      }
    else
      {
        t = m_37;
        t = (ATerm) ATempty;
      }
  }
  z_83 = t;
  t = (ATerm) ATinsert(CheckATermList(z_83), u_61);
  a_84 = t;
  t = SSL_table_put(v_61, w_61, a_84);
  t = y_83;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm h_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL;
      t = term_v_16;
      t = n_0(t);
      l_84 = t;
      t = term_j_37;
      m_84 = t;
      t = term_k_37;
      n_84 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_37, term_k_37, l_84);
      t = j_9(m_84, n_84, l_84, t);
      _fail(t);
    }
  else
    {
      ATerm r_84 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_84 = ATgetFirst((ATermList) t);
          i_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_84;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_84 = ATgetFirst((ATermList) t);
          k_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_84;
      t = k_0(t);
      t = j_84;
      t = l_0(t);
      r_84 = t;
      t = (ATerm) ATinsert(CheckATermList(k_84), r_84);
    }
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm t_84 = NULL;
  t_84 = t;
  if(match_string(t, "-i"))
    {
      t = t_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_84;
    }
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm u_84 = NULL,v_84 = NULL;
  u_84 = t;
  t = term_f_36;
  v_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_36, u_84);
  t = l_9(v_84, u_84, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_84);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_r_37;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_11, u_11, v_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_16;
  t = whoami_0_0(t);
  w_84 = t;
  t = term_l_36;
  y_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_37), w_84);
  z_84 = t;
  t = SSL_printnl(y_84, z_84);
  t = term_d_18;
  x_84 = t;
  t = SSL_exit(x_84);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_85 = NULL,b_85 = NULL;
  t = term_z_34;
  a_85 = t;
  t = term_t_37;
  b_85 = t;
  t = term_u_37;
  t = i_9(a_85, b_85, t);
  return(t);
}
static ATerm f_9 (ATerm d_50, ATerm e_50, ATerm t)
{
  ATerm v_37 = t;
  int w_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_50, e_50);
      LocalPopChoice(w_37);
    }
  else
    {
      t = v_37;
      t = SSL_addr(d_50, e_50);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL;
  d_85 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_85;
      t = m_109(t);
    }
  else
    {
      ATerm i_85 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_85 = ATgetFirst((ATermList) t);
          f_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_85;
      t = foldr_2_0(m_109, n_109, t);
      i_85 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_85, i_85);
      t = n_109(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_a_18;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL;
  if(match_cons(t, sym__2))
    {
      r_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_9(r_27, s_27, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_85 = NULL,l_27 = NULL,n_27 = NULL;
  t = times_0_0(t);
  n_27 = t;
  t = SSL_explode_term(n_27);
  if(match_cons(t, sym__2))
    {
      ATerm x_37 = ATgetArgument(t, 0);
      l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_27;
  t = foldr_2_0(x_11, y_11, t);
  l_85 = t;
  t = SSL_TicksToSeconds(l_85);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL;
  w_85 = t;
  if(match_cons(t, sym__2))
    {
      x_85 = ATgetArgument(t, 0);
      y_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_85;
        if((x_85 != t))
          {
            _fail(t);
          }
        t = w_85;
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        t = (ATerm) ATmakeAppl(sym__2, x_85, y_85);
        {
          ATerm a_38 = t;
          int b_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_85, y_85);
              LocalPopChoice(b_38);
            }
          else
            {
              t = a_38;
              t = SSL_gtr(x_85, y_85);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_85, y_85);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_118 (ATerm), ATerm t)
{
  ATerm c_86 = NULL;
  c_86 = t;
  {
    ATerm c_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_86 = NULL,f_86 = NULL,g_86 = NULL;
        t = term_z_34;
        f_86 = t;
        t = term_r_36;
        g_86 = t;
        t = term_l_38;
        t = i_9(f_86, g_86, t);
        e_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_86, term_d_18);
        t = geq_0_0(t);
        t = c_86;
        t = d_118(t);
        LocalPopChoice(i_38);
      }
    else
      {
        t = c_38;
        t = c_86;
      }
  }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm i_86 = NULL,j_86 = NULL,l_86 = NULL,m_86 = NULL;
  t = run_time_0_0(t);
  i_86 = t;
  t = term_v_16;
  t = whoami_0_0(t);
  j_86 = t;
  t = term_l_36;
  l_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_38), i_86), term_m_38), j_86);
  m_86 = t;
  t = SSL_printnl(l_86, m_86);
  t = (ATerm) ATmakeAppl(sym__2, term_l_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_38), i_86), term_m_38), j_86));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_86 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_18;
  n_86 = t;
  t = SSL_exit(n_86);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm x_86 = NULL,y_86 = NULL;
  y_86 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_86;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_86 = ATgetArgument(t, 0);
          {
            ATerm e_28 = NULL,p_17 = NULL;
            t = SSLgetAnnotations(y_86);
            e_28 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_86);
            p_17 = t;
            t = SSLsetAnnotations(p_17, e_28);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_86;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_120 (ATerm), ATerm t)
{
  ATerm o_38 = t;
  int p_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_86 = NULL,r_86 = NULL;
      t = term_z_34;
      q_86 = t;
      t = term_q_38;
      r_86 = t;
      t = term_r_38;
      t = i_9(q_86, r_86, t);
      LocalPopChoice(p_38);
    }
  else
    {
      t = o_38;
      t = fetch_1_0(d_12, t);
    }
  t = t_120(t);
  return(t);
}
ATerm map_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  static ATerm o_87 (ATerm t)
  {
    ATerm l_87 = NULL,m_87 = NULL,n_87 = NULL;
    l_87 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_87;
      }
    else
      {
        ATerm y_28 = NULL,b_29 = NULL,d_29 = NULL,r_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_87 = ATgetFirst((ATermList) t);
            n_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_87);
        y_28 = t;
        t = m_87;
        t = g_103(t);
        b_29 = t;
        t = n_87;
        t = o_87(t);
        d_29 = t;
        t = (ATerm) ATinsert(CheckATermList(d_29), b_29);
        r_17 = t;
        t = SSLsetAnnotations(r_17, y_28);
      }
    return(t);
  }
  t = o_87(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_87 = ATgetFirst((ATermList) t);
      s_87 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_87 = NULL,x_87 = NULL;
        static ATerm f_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_87)), not_null(x_87));
          return(t);
        }
        t = s_87;
        t = i_0(t);
        if(((w_87 != NULL) && (w_87 != t)))
          _fail(t);
        else
          w_87 = t;
        t = r_87;
        t = g_0(t);
        if(((x_87 != NULL) && (x_87 != t)))
          _fail(t);
        else
          x_87 = t;
        t = s_87;
        t = reverse_acc_2_0(g_0, f_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_16;
      t = i_0(t);
    }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL,z_17 = NULL;
  f_88 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_88);
  d_88 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_88);
  z_17 = t;
  t = SSLsetAnnotations(z_17, d_88);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm h_88 = NULL;
  h_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_88), term_u_38);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_87 = NULL,a_88 = NULL;
  ATerm v_38 = t;
  int a_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_88 = NULL,c_88 = NULL;
      t = term_z_34;
      b_88 = t;
      t = term_t_37;
      c_88 = t;
      t = term_u_37;
      t = i_9(b_88, c_88, t);
      LocalPopChoice(a_39);
    }
  else
    {
      t = v_38;
      t = fetch_1_0(g_12, t);
    }
  t = term_b_39;
  t = echo_0_0(t);
  t = term_j_37;
  z_87 = t;
  t = term_k_37;
  a_88 = t;
  t = term_c_39;
  t = i_9(z_87, a_88, t);
  t = reverse_acc_2_0(_id, h_12, t);
  t = map_1_0(i_12, t);
  return(t);
}
ATerm fetch_1_0 (ATerm q_103 (ATerm), ATerm t)
{
  static ATerm e_89 (ATerm t)
  {
    ATerm b_89 = NULL,c_89 = NULL,d_89 = NULL;
    b_89 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_89 = ATgetFirst((ATermList) t);
        d_89 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_39 = t;
      int e_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_29 = NULL,d_30 = NULL,b_18 = NULL;
          t = SSLgetAnnotations(b_89);
          y_29 = t;
          t = c_89;
          t = q_103(t);
          d_30 = t;
          t = (ATerm) ATinsert(CheckATermList(d_89), d_30);
          b_18 = t;
          t = SSLsetAnnotations(b_18, y_29);
          LocalPopChoice(e_39);
        }
      else
        {
          t = d_39;
          {
            ATerm l_30 = NULL,o_30 = NULL,c_18 = NULL;
            t = SSLgetAnnotations(b_89);
            l_30 = t;
            t = d_89;
            t = e_89(t);
            o_30 = t;
            t = (ATerm) ATinsert(CheckATermList(o_30), c_89);
            c_18 = t;
            t = SSLsetAnnotations(c_18, l_30);
          }
        }
    }
    return(t);
  }
  t = e_89(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL;
  i_89 = t;
  {
    ATerm f_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_89;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_39 = ATgetFirst((ATermList) t);
                ATerm i_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_89;
          }
        LocalPopChoice(g_39);
      }
    else
      {
        t = f_39;
        t = (ATerm) ATinsert(ATempty, i_89);
      }
  }
  j_89 = t;
  t = term_d_35;
  k_89 = t;
  t = SSL_printnl(k_89, j_89);
  t = i_89;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm o_89 = NULL,p_89 = NULL;
  t = term_z_34;
  o_89 = t;
  t = term_t_37;
  p_89 = t;
  t = term_u_37;
  t = i_9(o_89, p_89, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_9 (ATerm m_63, ATerm n_63, ATerm t)
{
  t = SSL_table_get(m_63, n_63);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm q_89 = NULL,r_89 = NULL;
  t = term_j_39;
  q_89 = t;
  t = term_v_16;
  r_89 = t;
  t = term_k_39;
  t = l_9(q_89, r_89, t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_l_39;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL;
  t = term_j_39;
  u_89 = t;
  t = term_v_16;
  v_89 = t;
  t = term_k_39;
  t = l_9(u_89, v_89, t);
  t = term_m_39;
  s_89 = t;
  t = term_v_16;
  t_89 = t;
  t = term_n_39;
  t = l_9(s_89, t_89, t);
  t = term_p_39;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_q_39;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_39 = t;
  int s_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_12, k_12, m_12, t);
      LocalPopChoice(s_39);
    }
  else
    {
      t = r_39;
      t = Option_3_0(n_12, p_12, q_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm t)
{
  ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL,z_89 = NULL,a_90 = NULL,b_90 = NULL,f_18 = NULL;
  b_90 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_89 = ATgetFirst((ATermList) t);
      y_89 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_90);
  w_89 = t;
  t = x_89;
  t = k_82(t);
  z_89 = t;
  t = y_89;
  t = l_82(t);
  a_90 = t;
  t = (ATerm) ATinsert(CheckATermList(a_90), z_89);
  f_18 = t;
  t = SSLsetAnnotations(f_18, w_89);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_122 (ATerm), ATerm t)
{
  ATerm g_90 = NULL,h_90 = NULL,i_90 = NULL,j_90 = NULL,l_90 = NULL,m_90 = NULL,h_18 = NULL;
  g_90 = t;
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_39;
        t = w_122(t);
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
      }
  }
  t = g_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_90 = ATgetFirst((ATermList) t);
      j_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_90);
  h_90 = t;
  t = term_t_37;
  m_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_37, i_90);
  t = l_9(m_90, i_90, t);
  t = j_90;
  {
    static ATerm w_90 (ATerm t)
    {
      ATerm w_39 = t;
      int x_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_39 = t;
          int z_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_90 = NULL;
              p_90 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_90;
              LocalPopChoice(z_39);
            }
          else
            {
              t = y_39;
              t = w_122(t);
              t = Cons_2_0(_id, w_90, t);
            }
          LocalPopChoice(x_39);
        }
      else
        {
          t = w_39;
          {
            ATerm s_90 = NULL,t_90 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_90 = ATgetFirst((ATermList) t);
                t_90 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_90), (ATerm) ATmakeAppl(sym_Undefined_1, s_90));
          }
        }
      return(t);
    }
    t = w_90(t);
  }
  l_90 = t;
  t = (ATerm) ATinsert(CheckATermList(l_90), (ATerm) ATmakeAppl(sym_Program_1, i_90));
  h_18 = t;
  t = SSLsetAnnotations(h_18, h_90);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm i_91 = NULL;
  i_91 = t;
  if(match_string(t, "--help"))
    {
      t = i_91;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_91;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_91;
        }
    }
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm j_91 = NULL,k_91 = NULL;
  t = term_q_38;
  j_91 = t;
  t = term_v_16;
  k_91 = t;
  t = term_a_40;
  t = l_9(j_91, k_91, t);
  t = term_b_40;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_c_40;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_122 (ATerm), ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL,g_91 = NULL,h_91 = NULL;
  d_91 = t;
  t = term_j_37;
  f_91 = t;
  t = term_k_37;
  g_91 = t;
  t = (ATerm) ATempty;
  h_91 = t;
  t = SSL_table_put(f_91, g_91, h_91);
  t = d_91;
  {
    static ATerm r_12 (ATerm t)
    {
      ATerm e_40 = t;
      int f_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_122(t);
          LocalPopChoice(f_40);
        }
      else
        {
          t = e_40;
          {
            ATerm g_40 = t;
            int h_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_12, v_12, a_13, t);
                LocalPopChoice(h_40);
              }
            else
              {
                t = g_40;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_12, t);
  }
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_91 = NULL;
        v_91 = t;
        {
          ATerm k_40 = t;
          int m_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_30 = NULL;
              t = v_91;
              {
                ATerm n_40 = t;
                int o_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_30 = NULL,x_30 = NULL;
                    t = term_z_34;
                    w_30 = t;
                    t = term_q_38;
                    x_30 = t;
                    t = term_r_38;
                    t = i_9(w_30, x_30, t);
                    LocalPopChoice(o_40);
                  }
                else
                  {
                    t = n_40;
                    t = fetch_1_0(b_13, t);
                  }
              }
              t = v_91;
              t = default_system_usage_0_0(t);
              t = term_a_18;
              v_30 = t;
              t = SSL_exit(v_30);
              LocalPopChoice(m_40);
            }
          else
            {
              t = k_40;
              {
                ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
                t = term_z_34;
                e_31 = t;
                t = term_j_39;
                f_31 = t;
                t = term_p_40;
                t = i_9(e_31, f_31, t);
                t = v_91;
                t = default_system_about_0_0(t);
                t = term_a_18;
                d_31 = t;
                t = SSL_exit(d_31);
              }
            }
        }
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
        {
          ATerm q_40 = t;
          int r_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_91 = NULL,x_91 = NULL,y_91 = NULL;
              static ATerm c_13 (ATerm t)
              {
                ATerm z_91 = NULL,a_92 = NULL,b_92 = NULL,o_18 = NULL;
                b_92 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_92 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_92);
                z_91 = t;
                t = a_92;
                if(((b_91 != NULL) && (b_91 != t)))
                  _fail(t);
                else
                  b_91 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_92);
                o_18 = t;
                t = SSLsetAnnotations(o_18, z_91);
                return(t);
              }
              t = fetch_1_0(c_13, t);
              t = term_l_36;
              x_91 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_91)), term_s_40);
              y_91 = t;
              t = SSL_printnl(x_91, y_91);
              t = (ATerm) ATmakeAppl(sym__2, term_l_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_91)), term_s_40));
              t = default_system_usage_0_0(t);
              t = term_d_18;
              w_91 = t;
              t = SSL_exit(w_91);
              LocalPopChoice(r_40);
            }
          else
            {
              t = q_40;
            }
        }
      }
  }
  c_91 = t;
  t = term_j_37;
  e_91 = t;
  t = SSL_table_destroy(e_91);
  t = c_91;
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm t)
{
  ATerm g_92 = NULL,h_92 = NULL,i_92 = NULL,j_92 = NULL;
  t = parse_options_1_0(v_120, t);
  g_92 = t;
  t = term_w_40;
  j_92 = t;
  t = SSL_table_create(j_92);
  t = term_w_40;
  h_92 = t;
  t = term_x_40;
  i_92 = t;
  t = SSL_table_put(h_92, i_92, g_92);
  t = g_92;
  t = x_120(t);
  {
    ATerm y_40 = t;
    int z_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_120, t);
        LocalPopChoice(z_40);
      }
    else
      {
        t = y_40;
        {
          ATerm a_41 = t;
          int b_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_120(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_41);
            }
          else
            {
              t = a_41;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm c_41 = t;
  int d_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(d_41);
    }
  else
    {
      t = c_41;
      {
        ATerm e_41 = t;
        int f_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(f_41);
          }
        else
          {
            t = e_41;
            {
              ATerm g_41 = t;
              int h_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(k_13, m_13, p_13, t);
                  LocalPopChoice(h_41);
                }
              else
                {
                  t = g_41;
                  {
                    ATerm i_41 = t;
                    int j_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(j_41);
                      }
                    else
                      {
                        t = i_41;
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
static ATerm g_13 (ATerm t)
{
  t = input_1_0(q_13, t);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm c_93 = NULL,d_93 = NULL;
  t = term_g_35;
  c_93 = t;
  t = term_v_16;
  d_93 = t;
  t = term_k_41;
  t = l_9(c_93, d_93, t);
  t = term_l_41;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = term_m_41;
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = output_1_0(r_13, t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm n_41 = ATgetArgument(t, 0);
      if(((ATgetType(n_41) == AT_LIST) && !(ATisEmpty(n_41))))
        {
          ATerm o_41 = ATgetFirst((ATermList) n_41);
          if(match_cons(o_41, sym_Signature_1))
            {
              j_93 = ATgetArgument(o_41, 0);
            }
          else
            _fail(t);
          {
            ATerm p_41 = (ATerm) ATgetNext((ATermList) n_41);
            if(((ATgetType(p_41) == AT_LIST) && !(ATisEmpty(p_41))))
              {
                ATerm q_41 = ATgetFirst((ATermList) p_41);
                if(match_cons(q_41, sym_Overlays_1))
                  {
                    k_93 = ATgetArgument(q_41, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm r_41 = (ATerm) ATgetNext((ATermList) p_41);
                  if(((ATgetType(r_41) == AT_LIST) && !(ATisEmpty(r_41))))
                    {
                      ATerm s_41 = ATgetFirst((ATermList) r_41);
                      if(match_cons(s_41, sym_Strategies_1))
                        {
                          l_93 = ATgetArgument(s_41, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm v_41 = (ATerm) ATgetNext((ATermList) r_41);
                        if(((ATgetType(v_41) != AT_LIST) || !(ATisEmpty(v_41))))
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
  t = w_8(j_93, k_93, l_93, t);
  t_93 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_93 = ATgetArgument(t, 0);
      t = m_93;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_93 = ATgetFirst((ATermList) t);
          p_93 = (ATerm) ATgetNext((ATermList) t);
          t = p_93;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_93 = ATgetFirst((ATermList) t);
              s_93 = (ATerm) ATgetNext((ATermList) t);
              t = s_93;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = q_93;
                  if(match_cons(t, sym_Strategies_1))
                    {
                      r_93 = ATgetArgument(t, 0);
                      t = n_93;
                      if(match_cons(t, sym_Signature_1))
                        {
                          o_93 = ATgetArgument(t, 0);
                          {
                            ATerm w_41 = t;
                            int x_41 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = t_93;
                                t = a_8(o_93, r_93, t);
                                LocalPopChoice(x_41);
                              }
                            else
                              {
                                t = w_41;
                                t = t_93;
                              }
                          }
                        }
                      else
                        {
                          t = t_93;
                        }
                    }
                  else
                    {
                      t = t_93;
                    }
                }
              else
                {
                  t = t_93;
                }
            }
          else
            {
              t = t_93;
            }
        }
      else
        {
          t = t_93;
        }
    }
  else
    {
      t = t_93;
    }
  if(match_cons(t, sym_Specification_1))
    {
      ATerm y_41 = ATgetArgument(t, 0);
      if(((ATgetType(y_41) == AT_LIST) && !(ATisEmpty(y_41))))
        {
          ATerm z_41 = ATgetFirst((ATermList) y_41);
          if(match_cons(z_41, sym_Signature_1))
            {
              h_93 = ATgetArgument(z_41, 0);
            }
          else
            _fail(t);
          {
            ATerm a_42 = (ATerm) ATgetNext((ATermList) y_41);
            if(((ATgetType(a_42) == AT_LIST) && !(ATisEmpty(a_42))))
              {
                ATerm e_42 = ATgetFirst((ATermList) a_42);
                if(match_cons(e_42, sym_Strategies_1))
                  {
                    i_93 = ATgetArgument(e_42, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm f_42 = (ATerm) ATgetNext((ATermList) a_42);
                  if(((ATgetType(f_42) != AT_LIST) || !(ATisEmpty(f_42))))
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
  t = z_7(h_93, i_93, t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm g_42 = ATgetArgument(t, 0);
      if(((ATgetType(g_42) == AT_LIST) && !(ATisEmpty(g_42))))
        {
          ATerm h_42 = ATgetFirst((ATermList) g_42);
          if(match_cons(h_42, sym_Signature_1))
            {
              f_93 = ATgetArgument(h_42, 0);
            }
          else
            _fail(t);
          {
            ATerm i_42 = (ATerm) ATgetNext((ATermList) g_42);
            if(((ATgetType(i_42) == AT_LIST) && !(ATisEmpty(i_42))))
              {
                ATerm j_42 = ATgetFirst((ATermList) i_42);
                if(match_cons(j_42, sym_Strategies_1))
                  {
                    g_93 = ATgetArgument(j_42, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm k_42 = (ATerm) ATgetNext((ATermList) i_42);
                  if(((ATgetType(k_42) != AT_LIST) || !(ATisEmpty(k_42))))
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
  t = x_7(f_93, g_93, t);
  t = topdown_1_0(s_13, t);
  t = topdown_1_0(x_13, t);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm l_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_42 = t;
      int o_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0_0(t);
          LocalPopChoice(o_42);
        }
      else
        {
          t = n_42;
          t = desugarRule_0_0(t);
        }
      LocalPopChoice(m_42);
    }
  else
    {
      t = l_42;
    }
  t = repeat_2_0(w_13, _id, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm p_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_42 = t;
      int s_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = HL_0_0(t);
          LocalPopChoice(s_42);
        }
      else
        {
          t = r_42;
          {
            ATerm f_94 = NULL,g_94 = NULL;
            f_94 = t;
            if(match_cons(t, sym_Match_1))
              {
                g_94 = ATgetArgument(t, 0);
                t = f_94;
                t = n_7(g_94, t);
              }
            else
              {
                if(match_cons(t, sym_Build_1))
                  {
                    g_94 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = f_94;
                t = m_7(g_94, t);
              }
          }
        }
      LocalPopChoice(q_42);
    }
  else
    {
      t = p_42;
      {
        ATerm k_94 = NULL,l_94 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            k_94 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_94;
        if(match_cons(t, sym_ListVar_1))
          {
            l_94 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, l_94);
      }
    }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm t_42 = t;
  int u_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DesugarDefaultVarDec_0_0(t);
      LocalPopChoice(u_42);
    }
  else
    {
      t = t_42;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(d_13, default_usage_0_0, _id, g_13, t);
  return(t);
}
