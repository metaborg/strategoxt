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
}
ATerm term_t_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_y_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_d_38;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_c_37;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_r_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_o_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_d_34;
ATerm term_a_34;
ATerm term_h_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_a_33;
ATerm term_x_32;
ATerm term_g_32;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_o_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_19;
ATerm term_m_18;
ATerm term_i_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_n_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Sort_2, term_h_16, (ATerm) ATempty);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_ConstType_1, term_i_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CongDefined", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_17);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_20);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Var_1, term_j_25);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Var_1, term_o_25);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Anno_2, term_k_25, term_r_25);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_Var_1, term_v_25);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Var_1, term_y_25);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Anno_2, term_w_25, term_z_25);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_25);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Call_2, term_c_26, (ATerm) ATempty);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_BAM_3, term_d_26, term_k_25, term_w_25);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_25);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Call_2, term_f_26, (ATerm) ATempty);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_BAM_3, term_g_26, term_r_25, term_z_25);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_25);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym__2, term_s_34, term_r_17);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_17);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym__2, term_a_35, term_r_16);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_l_35);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym__2, term_r_37, term_r_16);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(sym__2, term_v_37, term_r_16);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym__2, term_m_36, term_r_16);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(sym__2, term_h_33, term_r_16);
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm h_7 (ATerm l_27, ATerm t);
static ATerm i_7 (ATerm i_27, ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm h_91 (ATerm), ATerm t);
static ATerm l_7 (ATerm b_25, ATerm c_25, ATerm d_25, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm ListVarScope_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm DesugarListMatching_0_0 (ATerm t);
static ATerm n_7 (ATerm h_60, ATerm i_60, ATerm t);
static ATerm z_13 (ATerm c_13, ATerm t);
static ATerm a_14 (ATerm e_13, ATerm t);
static ATerm b_14 (ATerm g_13, ATerm t);
static ATerm c_14 (ATerm i_13, ATerm t);
static ATerm e_14 (ATerm u_13, ATerm t);
ATerm CongDefined_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm MkCongDef_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_103 (ATerm), ATerm t);
static ATerm s_7 (ATerm b_60, ATerm c_60, ATerm t);
ATerm end_scope_1_0 (ATerm i_108 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm h_108 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm j_108 (ATerm), ATerm k_108 (ATerm), ATerm t);
static ATerm t_7 (ATerm l_108 (ATerm), ATerm j_49, ATerm h_49, ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm RegisterCongDef_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm u_7 (ATerm j_21, ATerm k_21, ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm DeclareVariables_0_0 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm RDtoSD_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm w_7 (ATerm h_21, ATerm i_21, ATerm t);
static ATerm x_3 (ATerm t);
static ATerm x_7 (ATerm l_21, ATerm m_21, ATerm t);
ATerm at_end_1_0 (ATerm f_97 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_42 (ATerm w_41, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm tpaste_1_0 (ATerm z_119 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm c_120 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm tvars_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm d_8 (ATerm i_100 (ATerm), ATerm g_37, ATerm f_37, ATerm t);
ATerm foldr_3_0 (ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm t);
static ATerm e_8 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm k_37, ATerm j_37, ATerm t);
static ATerm f_8 (ATerm d_100 (ATerm), ATerm e_37, ATerm d_37, ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm h_8 (ATerm f_645, ATerm k_645, ATerm i_64, ATerm t);
ATerm while_not_2_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm t);
ATerm for_3_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm z_59 (ATerm x_57, ATerm y_57, ATerm b_58, ATerm t);
static ATerm d_6 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm free_vars_3_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm z_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm Var_1_0 (ATerm s_68 (ATerm), ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm k_8 (ATerm s_116 (ATerm), ATerm t_116 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_62, ATerm o_62, ATerm n_62, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm l_8 (ATerm m_116 (ATerm), ATerm n_116 (ATerm (ATerm), ATerm), ATerm h_62, ATerm k_62, ATerm t);
ATerm env_alltd_1_0 (ATerm t_94 (ATerm), ATerm t);
static ATerm q_7 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_6_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm (ATerm), ATerm), ATerm v_115 (ATerm), ATerm w_115 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_115 (ATerm (ATerm), ATerm), ATerm y_115 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm t);
static ATerm m_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm t_8 (ATerm e_88 (ATerm), ATerm p_22, ATerm q_22, ATerm t);
ATerm topdown_1_0 (ATerm d_90 (ATerm), ATerm t);
ATerm Trm_to_Cong_0_0 (ATerm t);
ATerm trm_to_cong_0_0 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm y_7 (ATerm x_22, ATerm z_22, ATerm y_22, ATerm t);
ATerm repeat_1_0 (ATerm f_89 (ATerm), ATerm t);
static ATerm g_10 (ATerm t);
static ATerm u_8 (ATerm n_21, ATerm p_21, ATerm o_21, ATerm t);
static ATerm v_8 (ATerm v_50, ATerm w_50, ATerm t);
static ATerm w_8 (ATerm i_32, ATerm j_32, ATerm t);
static ATerm y_8 (ATerm g_96 (ATerm), ATerm p_217, ATerm m_32, ATerm t);
static ATerm x_8 (ATerm e_32, ATerm f_32, ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
ATerm output_1_0 (ATerm s_113 (ATerm), ATerm t);
static ATerm s_75 (ATerm m_75, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_8 (ATerm k_32, ATerm t);
static ATerm a_9 (ATerm x_50, ATerm y_50, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_77 (ATerm e_76, ATerm t);
static ATerm g_77 (ATerm i_76, ATerm j_76, ATerm k_76, ATerm t);
static ATerm h_77 (ATerm s_76, ATerm t_76, ATerm u_76, ATerm t);
static ATerm b_9 (ATerm t);
static ATerm q_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm t_113 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm j_9 (ATerm y_54, ATerm z_54, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm h_9 (ATerm w_59, ATerm x_59, ATerm v_59, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm l_11 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm c_9 (ATerm v_47, ATerm w_47, ATerm t);
ATerm foldr_2_0 (ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_110 (ATerm), ATerm t);
static ATerm r_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm need_help_1_0 (ATerm j_113 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm u_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm z_11 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_96 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm f_9 (ATerm c_45, ATerm d_45, ATerm t);
ATerm debug_1_0 (ATerm e_96 (ATerm), ATerm t);
ATerm map_1_0 (ATerm p_96 (ATerm), ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm g_9 (ATerm n_61, ATerm o_61, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_75 (ATerm), ATerm v_75 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_115 (ATerm), ATerm t);
static ATerm k_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
ATerm parse_options_1_0 (ATerm l_115 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t);
static ATerm q_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm j_13 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm h_7 (ATerm l_27, ATerm t)
{
  ATerm a_0 = NULL,o_0 = NULL;
  t = l_27;
  {
    static ATerm r_0 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm w_6 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) w_6) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm m_13 = ATgetArgument(t, 1);
            if(((ATgetType(m_13) == AT_LIST) && !(ATisEmpty(m_13))))
              {
                ATerm n_13 = ATgetFirst((ATermList) m_13);
                if(match_cons(n_13, sym_Var_1))
                  {
                    ATerm p_13 = ATgetArgument(n_13, 0);
                    if(match_cons(p_13, sym_ListVar_1))
                      {
                        if(((a_0 != NULL) && (a_0 != ATgetArgument(p_13, 0))))
                          _fail(ATgetArgument(p_13, 0));
                        else
                          a_0 = ATgetArgument(p_13, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm o_13 = (ATerm) ATgetNext((ATermList) m_13);
                  if(((ATgetType(o_13) == AT_LIST) && !(ATisEmpty(o_13))))
                    {
                      ATerm q_13 = ATgetFirst((ATermList) o_13);
                      if(match_cons(q_13, sym_Op_2))
                        {
                          ATerm s_13 = ATgetArgument(q_13, 0);
                          if((ATgetSymbol((ATermAppl) s_13) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm t_13 = ATgetArgument(q_13, 1);
                            if(((ATgetType(t_13) != AT_LIST) || !(ATisEmpty(t_13))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm r_13 = (ATerm) ATgetNext((ATermList) o_13);
                        if(((ATgetType(r_13) != AT_LIST) || !(ATisEmpty(r_13))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, a_0);
      return(t);
    }
    t = oncetd_1_0(r_0, t);
  }
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, o_0);
  return(t);
}
static ATerm i_7 (ATerm i_27, ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL;
  t = i_27;
  {
    static ATerm s_0 (ATerm t)
    {
      if(match_cons(t, sym_Op_2))
        {
          ATerm v_13 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) v_13) != ATmakeSymbol("Cons", 0, ATtrue)))
            _fail(t);
          {
            ATerm x_13 = ATgetArgument(t, 1);
            if(((ATgetType(x_13) == AT_LIST) && !(ATisEmpty(x_13))))
              {
                ATerm d_14 = ATgetFirst((ATermList) x_13);
                if(match_cons(d_14, sym_Var_1))
                  {
                    ATerm g_14 = ATgetArgument(d_14, 0);
                    if(match_cons(g_14, sym_ListVar_1))
                      {
                        if(((p_0 != NULL) && (p_0 != ATgetArgument(g_14, 0))))
                          _fail(ATgetArgument(g_14, 0));
                        else
                          p_0 = ATgetArgument(g_14, 0);
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                {
                  ATerm f_14 = (ATerm) ATgetNext((ATermList) x_13);
                  if(((ATgetType(f_14) == AT_LIST) && !(ATisEmpty(f_14))))
                    {
                      ATerm h_14 = ATgetFirst((ATermList) f_14);
                      if(match_cons(h_14, sym_Op_2))
                        {
                          ATerm j_14 = ATgetArgument(h_14, 0);
                          if((ATgetSymbol((ATermAppl) j_14) != ATmakeSymbol("Nil", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm m_14 = ATgetArgument(h_14, 1);
                            if(((ATgetType(m_14) != AT_LIST) || !(ATisEmpty(m_14))))
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      {
                        ATerm i_14 = (ATerm) ATgetNext((ATermList) f_14);
                        if(((ATgetType(i_14) != AT_LIST) || !(ATisEmpty(i_14))))
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
      t = (ATerm) ATmakeAppl(sym_Var_1, p_0);
      return(t);
    }
    t = oncetd_1_0(s_0, t);
  }
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, q_0);
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL,z_0 = NULL,a_1 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      z_0 = ATgetArgument(t, 0);
      a_1 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, z_0, a_1);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          z_0 = ATgetArgument(t, 0);
          t = z_0;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_0 = ATgetFirst((ATermList) t);
              w_0 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, v_0, (ATerm) ATmakeAppl(sym_LChoices_1, w_0));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_n_14;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              z_0 = ATgetArgument(t, 0);
              t = z_0;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_0 = ATgetFirst((ATermList) t);
                  w_0 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, v_0, (ATerm) ATmakeAppl(sym_Choices_1, w_0));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_n_14;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  z_0 = ATgetArgument(t, 0);
                  t = z_0;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_0 = ATgetFirst((ATermList) t);
                      w_0 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_0, (ATerm) ATmakeAppl(sym_Seqs_1, w_0));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_o_14;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      z_0 = ATgetArgument(t, 0);
                      a_1 = ATgetArgument(t, 1);
                      x_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, a_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_14, (ATerm) ATinsert(ATinsert(ATempty, x_0), z_0)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          z_0 = ATgetArgument(t, 0);
                          a_1 = ATgetArgument(t, 1);
                          x_0 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, x_0)), z_0), (ATerm) ATmakeAppl(sym_Build_1, a_1)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              z_0 = ATgetArgument(t, 0);
                              a_1 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_0, (ATerm) ATmakeAppl(sym_Match_1, a_1));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  z_0 = ATgetArgument(t, 0);
                                  a_1 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_0), a_1);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      z_0 = ATgetArgument(t, 0);
                                      a_1 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_1), z_0);
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
static ATerm t_0 (ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
  w_2 = t;
  if(match_cons(t, sym_Con_3))
    {
      t_2 = ATgetArgument(t, 0);
      u_2 = ATgetArgument(t, 1);
      v_2 = ATgetArgument(t, 2);
      {
        ATerm i_1 = NULL,f_2 = NULL;
        t = SSLgetAnnotations(w_2);
        i_1 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, t_2, u_2, v_2);
        f_2 = t;
        t = SSLsetAnnotations(f_2, i_1);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = w_2;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm r_14 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(t_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_14;
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm v_3 = NULL,y_3 = NULL,z_3 = NULL,b_4 = NULL;
  y_3 = t;
  if(match_cons(t, sym_Con_3))
    {
      z_3 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
      v_3 = ATgetArgument(t, 2);
      {
        ATerm p_2 = NULL,h_2 = NULL;
        t = SSLgetAnnotations(y_3);
        p_2 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, z_3, b_4, v_3);
        h_2 = t;
        t = SSLsetAnnotations(h_2, p_2);
      }
    }
  else
    {
      ATerm e_4 = NULL,i_2 = NULL;
      if(match_cons(t, sym_App_2))
        {
          z_3 = ATgetArgument(t, 0);
          b_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_3);
      e_4 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, z_3, b_4);
      i_2 = t;
      t = SSLsetAnnotations(i_2, e_4);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm s_14 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(u_0, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_14;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm m_4 = NULL,r_4 = NULL,u_4 = NULL,w_4 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      m_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_4;
  if(match_cons(t, sym_StratRule_3))
    {
      r_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
      w_4 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_4), (ATerm) ATmakeAppl(sym_Where_1, w_4)), r_4));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          r_4 = ATgetArgument(t, 0);
          u_4 = ATgetArgument(t, 1);
          w_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_4;
      t = pureterm_0_0(t);
      t = u_4;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, u_4)), (ATerm) ATmakeAppl(sym_Where_1, w_4)), (ATerm) ATmakeAppl(sym_Match_1, r_4)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm h_91 (ATerm), ATerm t)
{
  static ATerm f_5 (ATerm t)
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_91(t);
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = SRTS_one(f_5, t);
      }
    return(t);
  }
  t = f_5(t);
  return(t);
}
static ATerm l_7 (ATerm b_25, ATerm c_25, ATerm d_25, ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL,j_5 = NULL,k_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
  t = new_0_0(t);
  m_5 = t;
  t = b_25;
  {
    static ATerm y_0 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm z_14 = ATgetArgument(t, 0);
          if(match_cons(z_14, sym_Var_1))
            {
              if(((k_5 != NULL) && (k_5 != ATgetArgument(z_14, 0))))
                _fail(ATgetArgument(z_14, 0));
              else
                k_5 = ATgetArgument(z_14, 0);
            }
          else
            _fail(t);
          if(((h_5 != NULL) && (h_5 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_5 = ATgetArgument(t, 1);
          {
            ATerm d_15 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, k_5);
      return(t);
    }
    t = oncetd_1_0(y_0, t);
  }
  n_5 = t;
  t = c_25;
  {
    static ATerm b_1 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm i_15 = ATgetArgument(t, 0);
          if(match_cons(i_15, sym_Var_1))
            {
              if(((k_5 != NULL) && (k_5 != ATgetArgument(i_15, 0))))
                _fail(ATgetArgument(i_15, 0));
              else
                k_5 = ATgetArgument(i_15, 0);
            }
          else
            _fail(t);
          if(((j_5 != NULL) && (j_5 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_5 = ATgetArgument(t, 1);
          {
            ATerm k_15 = ATgetArgument(t, 2);
            if(match_cons(k_15, sym_CallT_3))
              {
                if(((g_5 != NULL) && (g_5 != ATgetArgument(k_15, 0))))
                  _fail(ATgetArgument(k_15, 0));
                else
                  g_5 = ATgetArgument(k_15, 0);
                {
                  ATerm n_15 = ATgetArgument(k_15, 1);
                  if(((ATgetType(n_15) != AT_LIST) || !(ATisEmpty(n_15))))
                    _fail(t);
                }
                {
                  ATerm o_15 = ATgetArgument(k_15, 2);
                  if(((ATgetType(o_15) != AT_LIST) || !(ATisEmpty(o_15))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, m_5);
      return(t);
    }
    t = oncetd_1_0(b_1, t);
  }
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_5), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, n_5, o_5, (ATerm) ATmakeAppl(sym_Seq_2, d_25, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(g_5), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_5), not_null(j_5), term_o_14))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_5)), (ATerm) ATmakeAppl(sym_Var_1, m_5))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_15 = t;
      int s_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_6 = NULL,j_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL;
          m_6 = t;
          if(match_cons(t, sym_SRule_1))
            {
              n_6 = ATgetArgument(t, 0);
              t = n_6;
              if(match_cons(t, sym_Rule_3))
                {
                  i_6 = ATgetArgument(t, 0);
                  j_6 = ATgetArgument(t, 1);
                  l_6 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = m_6;
              t = l_7(i_6, j_6, l_6, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm q_4 = NULL,v_4 = NULL,o_2 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  n_6 = ATgetArgument(t, 0);
                  o_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_6);
              q_4 = t;
              t = o_6;
              t = desugarRule_0_0(t);
              v_4 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, n_6, v_4);
              o_2 = t;
              t = SSLsetAnnotations(o_2, q_4);
            }
          LocalPopChoice(s_15);
        }
      else
        {
          t = r_15;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm i_9 = NULL,n_9 = NULL;
  n_9 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      i_9 = ATgetArgument(t, 0);
      t = i_9;
    }
  else
    {
      t = n_9;
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm l_10 = NULL,n_10 = NULL;
  n_10 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      l_10 = ATgetArgument(t, 0);
      t = l_10;
    }
  else
    {
      t = n_10;
    }
  return(t);
}
ATerm ListVarScope_0_0 (ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,r_7 = NULL,b_8 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      r_7 = ATgetArgument(t, 0);
      b_8 = ATgetArgument(t, 1);
      o_7 = ATgetArgument(t, 2);
      p_7 = ATgetArgument(t, 3);
      {
        ATerm e_9 = NULL;
        t = o_7;
        t = map_1_0(c_1, t);
        e_9 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, r_7, b_8, e_9, p_7);
      }
    }
  else
    {
      ATerm k_10 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          r_7 = ATgetArgument(t, 0);
          b_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_7;
      t = map_1_0(d_1, t);
      k_10 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, k_10, b_8);
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_15 = t;
      int w_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0_0(t);
          LocalPopChoice(w_15);
        }
      else
        {
          t = v_15;
          t = desugarRule_0_0(t);
        }
      LocalPopChoice(u_15);
    }
  else
    {
      t = t_15;
    }
  t = repeat_1_0(f_1, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm y_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_16 = t;
      int e_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_11 = NULL;
          if(match_cons(t, sym_DefaultVarDec_1))
            {
              f_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          {
            ATerm f_16 = t;
            int g_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym_VarDec_2, f_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_16), term_j_16));
                LocalPopChoice(g_16);
              }
            else
              {
                t = f_16;
                t = (ATerm) ATmakeAppl(sym_VarDec_2, f_11, term_j_16);
              }
          }
          LocalPopChoice(e_16);
        }
      else
        {
          t = c_16;
          {
            ATerm k_16 = t;
            int l_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0_0(t);
                LocalPopChoice(l_16);
              }
            else
              {
                t = k_16;
                {
                  ATerm o_11 = NULL,q_11 = NULL;
                  o_11 = t;
                  if(match_cons(t, sym_Match_1))
                    {
                      q_11 = ATgetArgument(t, 0);
                      t = o_11;
                      t = i_7(q_11, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Build_1))
                        {
                          q_11 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = o_11;
                      t = h_7(q_11, t);
                    }
                }
              }
          }
        }
      LocalPopChoice(a_16);
    }
  else
    {
      t = y_15;
      {
        ATerm v_11 = NULL,w_11 = NULL;
        if(match_cons(t, sym_Var_1))
          {
            v_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_11;
        if(match_cons(t, sym_ListVar_1))
          {
            w_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, w_11);
      }
    }
  return(t);
}
ATerm DesugarListMatching_0_0 (ATerm t)
{
  t = topdown_1_0(e_1, t);
  return(t);
}
static ATerm n_7 (ATerm h_60, ATerm i_60, ATerm t)
{
  ATerm y_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_60, i_60);
  t = g_9(h_60, i_60, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_11 = ATgetFirst((ATermList) t);
      {
        ATerm o_16 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_11;
  return(t);
}
static ATerm z_13 (ATerm c_13, ATerm t)
{
  ATerm q_5 = NULL;
  t = term_p_16;
  q_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_16, c_13);
  t = n_7(q_5, c_13, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm q_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_16) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_r_16;
  return(t);
}
static ATerm a_14 (ATerm e_13, ATerm t)
{
  ATerm t_5 = NULL;
  t = term_p_16;
  t_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_16, e_13);
  t = n_7(t_5, e_13, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm s_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_16) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_r_16;
  return(t);
}
static ATerm b_14 (ATerm g_13, ATerm t)
{
  ATerm w_5 = NULL;
  t = term_p_16;
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_16, g_13);
  t = n_7(w_5, g_13, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm t_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_16) != ATmakeSymbol("h_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_r_16;
  return(t);
}
static ATerm c_14 (ATerm i_13, ATerm t)
{
  ATerm h_6 = NULL;
  t = term_p_16;
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_16, i_13);
  t = n_7(h_6, i_13, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_16) != ATmakeSymbol("f_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_r_16;
  return(t);
}
static ATerm e_14 (ATerm u_13, ATerm t)
{
  ATerm t_6 = NULL;
  t = term_p_16;
  t_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_16, u_13);
  t = n_7(t_6, u_13, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm v_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_16) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = term_r_16;
  return(t);
}
ATerm CongDefined_0_0 (ATerm t)
{
  ATerm w_13 = NULL,y_13 = NULL;
  w_13 = t;
  if(match_cons(t, sym__2))
    {
      ATerm w_16 = ATgetArgument(t, 0);
      y_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_13;
  if(match_int(t, 0))
    {
      ATerm x_16 = t;
      int y_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_13(w_13, t);
          LocalPopChoice(y_16);
        }
      else
        {
          t = x_16;
          {
            ATerm z_16 = t;
            int a_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_14(w_13, t);
                LocalPopChoice(a_17);
              }
            else
              {
                t = z_16;
                {
                  ATerm g_17 = t;
                  int h_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = b_14(w_13, t);
                      LocalPopChoice(h_17);
                    }
                  else
                    {
                      t = g_17;
                      {
                        ATerm i_17 = t;
                        int j_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = c_14(w_13, t);
                            LocalPopChoice(j_17);
                          }
                        else
                          {
                            t = i_17;
                            t = e_14(w_13, t);
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
      ATerm k_17 = t;
      int m_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_13(w_13, t);
          LocalPopChoice(m_17);
        }
      else
        {
          t = k_17;
          {
            ATerm n_17 = t;
            int o_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_14(w_13, t);
                LocalPopChoice(o_17);
              }
            else
              {
                t = n_17;
                {
                  ATerm p_17 = t;
                  int q_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = b_14(w_13, t);
                      LocalPopChoice(q_17);
                    }
                  else
                    {
                      t = p_17;
                      t = c_14(w_13, t);
                    }
                }
              }
          }
        }
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_r_17;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm a_8 = NULL,c_8 = NULL;
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9(a_8, c_8, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_p_16;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_t_17;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm g_8 = NULL,n_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_8 = ATgetFirst((ATermList) t);
      n_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_8, n_8);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_17 = ATgetArgument(t, 0);
      if(match_cons(u_17, sym__2))
        {
          o_8 = ATgetArgument(u_17, 0);
          p_8 = ATgetArgument(u_17, 1);
        }
      else
        _fail(t);
      {
        ATerm v_17 = ATgetArgument(t, 1);
        if(match_cons(v_17, sym__2))
          {
            q_8 = ATgetArgument(v_17, 0);
            r_8 = ATgetArgument(v_17, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_8), o_8), (ATerm) ATinsert(CheckATermList(r_8), p_8));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm s_8 = NULL;
  t = new_0_0(t);
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, s_8, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_16), term_j_16)), s_8);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm k_9 = NULL;
  k_9 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_9), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm MkCongDef_0_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  c_17 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      d_17 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_17;
  if(match_cons(t, sym_FunType_2))
    {
      f_17 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
      {
        ATerm f_7 = NULL,j_7 = NULL,k_7 = NULL,m_7 = NULL,v_7 = NULL,z_7 = NULL;
        t = f_17;
        t = foldr_3_0(g_1, h_1, j_1, t);
        f_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_17, f_7);
        {
          ATerm w_17 = t;
          if((PushChoice() == 0))
            {
              t = CongDefined_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_17;
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_17, f_7);
        v_7 = t;
        t = term_y_17;
        z_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_17, f_7), term_y_17);
        t = t_7(k_1, v_7, z_7, t);
        t = f_17;
        t = genzip_4_0(l_1, m_1, n_1, o_1, t);
        if(match_cons(t, sym__2))
          {
            j_7 = ATgetArgument(t, 0);
            k_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_7;
        t = map_1_0(p_1, t);
        m_7 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, d_17, j_7, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, d_17, m_7));
      }
    }
  else
    {
      ATerm w_9 = NULL,y_9 = NULL;
      if(match_cons(t, sym_ConstType_1))
        {
          ATerm g_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, d_17, term_r_17);
      {
        ATerm h_18 = t;
        if((PushChoice() == 0))
          {
            t = CongDefined_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_18;
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, d_17, term_r_17);
      w_9 = t;
      t = term_m_18;
      y_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_17, term_r_17), term_m_18);
      t = t_7(q_1, w_9, y_9, t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, d_17, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, d_17, (ATerm) ATempty));
    }
  return(t);
}
ATerm filter_1_0 (ATerm l_103 (ATerm), ATerm t)
{
  ATerm z_17 = NULL,c_18 = NULL,f_18 = NULL;
  z_17 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_17;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_18 = ATgetFirst((ATermList) t);
          f_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm n_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_10 = NULL,i_10 = NULL,j_10 = NULL,s_2 = NULL;
            t = SSLgetAnnotations(z_17);
            f_10 = t;
            t = c_18;
            t = l_103(t);
            i_10 = t;
            t = f_18;
            t = filter_1_0(l_103, t);
            j_10 = t;
            t = (ATerm) ATinsert(CheckATermList(j_10), i_10);
            s_2 = t;
            t = SSLsetAnnotations(s_2, f_10);
            LocalPopChoice(o_18);
          }
        else
          {
            t = n_18;
            t = f_18;
            t = filter_1_0(l_103, t);
          }
      }
    }
  return(t);
}
static ATerm s_7 (ATerm b_60, ATerm c_60, ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL;
  k_18 = t;
  {
    ATerm p_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_60, c_60);
        t = g_9(b_60, c_60, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_19 = ATgetFirst((ATermList) t);
            j_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(w_18);
        t = SSL_table_put(b_60, c_60, j_18);
        t = (ATerm) ATmakeAppl(sym__3, b_60, c_60, j_18);
      }
    else
      {
        t = p_18;
        t = SSL_table_remove(b_60, c_60);
        t = (ATerm) ATmakeAppl(sym__2, b_60, c_60);
      }
  }
  t = k_18;
  return(t);
}
ATerm end_scope_1_0 (ATerm i_108 (ATerm), ATerm t)
{
  ATerm l_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
  s_18 = t;
  t = i_108(t);
  r_18 = t;
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_18 = NULL;
        t = term_d_19;
        u_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_18, term_d_19);
        t = g_9(r_18, u_18, t);
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_18 = ATgetFirst((ATermList) t);
      l_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_d_19;
  t_18 = t;
  t = SSL_table_put(r_18, t_18, l_18);
  t = q_18;
  {
    static ATerm r_1 (ATerm t)
    {
      ATerm v_18 = NULL;
      v_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_18, v_18);
      t = s_7(r_18, v_18, t);
      return(t);
    }
    t = map_1_0(r_1, t);
  }
  t = s_18;
  return(t);
}
ATerm restore_always_2_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm t)
{
  ATerm e_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_88(t);
      t = z_88(t);
      LocalPopChoice(i_19);
    }
  else
    {
      t = e_19;
      t = z_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm h_108 (ATerm), ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,g_19 = NULL,h_19 = NULL;
  y_18 = t;
  t = h_108(t);
  x_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_18, term_d_19);
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_19 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_19 = ATgetArgument(t, 0);
            ATerm r_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_d_19;
        l_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_18, term_d_19);
        t = g_9(x_18, l_19, t);
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        t = (ATerm) ATempty;
      }
  }
  z_18 = t;
  t = term_d_19;
  g_19 = t;
  t = (ATerm) ATinsert(CheckATermList(z_18), (ATerm) ATempty);
  h_19 = t;
  t = SSL_table_put(x_18, g_19, h_19);
  t = y_18;
  return(t);
}
ATerm scope_2_0 (ATerm j_108 (ATerm), ATerm k_108 (ATerm), ATerm t)
{
  static ATerm s_1 (ATerm t)
  {
    t = end_scope_1_0(j_108, t);
    return(t);
  }
  t = begin_scope_1_0(j_108, t);
  t = restore_always_2_0(k_108, s_1, t);
  return(t);
}
static ATerm t_7 (ATerm l_108 (ATerm), ATerm j_49, ATerm h_49, ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,v_19 = NULL,w_19 = NULL;
  p_19 = t;
  t = l_108(t);
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_19, j_49, h_49);
  t = h_9(m_19, j_49, h_49, t);
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_19 = NULL;
        t = term_d_19;
        y_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_19, term_d_19);
        t = g_9(m_19, y_19, t);
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_19 = ATgetFirst((ATermList) t);
      o_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_d_19;
  v_19 = t;
  t = (ATerm) ATinsert(CheckATermList(o_19), (ATerm) ATinsert(CheckATermList(n_19), j_49));
  w_19 = t;
  t = SSL_table_put(m_19, v_19, w_19);
  t = p_19;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_r_17;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  if(match_cons(t, sym__2))
    {
      y_20 = ATgetArgument(t, 0);
      z_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9(y_20, z_20, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_p_16;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_r_17;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL;
  if(match_cons(t, sym__2))
    {
      j_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9(j_22, k_22, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_p_16;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_r_17;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm g_23 = NULL,m_23 = NULL;
  if(match_cons(t, sym__2))
    {
      g_23 = ATgetArgument(t, 0);
      m_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9(g_23, m_23, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_s_17;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm RegisterCongDef_0_0 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
  i_20 = t;
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            j_20 = ATgetArgument(t, 0);
            k_20 = ATgetArgument(t, 1);
            l_20 = ATgetArgument(t, 2);
            {
              ATerm d_20 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_20);
        {
          ATerm o_20 = NULL,w_20 = NULL,x_20 = NULL;
          t = l_20;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = k_20;
          t = foldr_3_0(t_1, u_1, v_1, t);
          o_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_20, o_20);
          w_20 = t;
          t = term_f_20;
          x_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_20, o_20), term_f_20);
          t = t_7(w_1, w_20, x_20, t);
          t = i_20;
        }
      }
    else
      {
        t = b_20;
        {
          ATerm g_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  j_20 = ATgetArgument(t, 0);
                  k_20 = ATgetArgument(t, 1);
                  l_20 = ATgetArgument(t, 2);
                  {
                    ATerm m_20 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(h_20);
              {
                ATerm c_21 = NULL,e_21 = NULL,f_21 = NULL;
                t = l_20;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_20;
                t = foldr_3_0(x_1, y_1, z_1, t);
                c_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_20, c_21);
                e_21 = t;
                t = term_p_20;
                f_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_20, c_21), term_p_20);
                t = t_7(a_2, e_21, f_21, t);
                t = i_20;
              }
            }
          else
            {
              t = g_20;
              {
                ATerm t_22 = NULL,w_22 = NULL,d_23 = NULL;
                if(match_cons(t, sym_ExtSDef_3))
                  {
                    j_20 = ATgetArgument(t, 0);
                    k_20 = ATgetArgument(t, 1);
                    l_20 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = l_20;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_20;
                t = foldr_3_0(b_2, c_2, d_2, t);
                t_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_20, t_22);
                w_22 = t;
                t = term_r_20;
                d_23 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_20, t_22), term_r_20);
                t = t_7(e_2, w_22, d_23, t);
                t = (ATerm) ATmakeAppl(sym_ExtSDef_3, j_20, k_20, (ATerm) ATempty);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm t_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RegisterCongDef_0_0(t);
      LocalPopChoice(v_20);
    }
  else
    {
      t = t_20;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_p_16;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = filter_1_0(l_2, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm f_24 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      f_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_24;
  t = filter_1_0(MkCongDef_0_0, t);
  return(t);
}
static ATerm u_7 (ATerm j_21, ATerm k_21, ATerm t)
{
  ATerm q_23 = NULL,y_23 = NULL;
  t = k_21;
  t = map_1_0(g_2, t);
  t = j_21;
  t = scope_2_0(j_2, k_2, t);
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_23, k_21);
  t = conc_0_0(t);
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, q_23)), (ATerm) ATmakeAppl(sym_Signature_1, j_21)));
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm t_26 = NULL;
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_26 = ATgetArgument(t, 0);
          {
            ATerm d_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_21);
      t = t_26;
    }
  else
    {
      t = a_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_26;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm w_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_26);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm g_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_21);
    }
  else
    {
      t = g_21;
      {
        ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL,u_27 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_27 = ATgetArgument(t, 0);
            t = o_27;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                o_27 = ATgetArgument(t, 0);
                p_27 = ATgetArgument(t, 1);
                q_27 = ATgetArgument(t, 2);
                u_27 = ATgetArgument(t, 3);
                t = q_27;
                t = map_1_0(r_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    o_27 = ATgetArgument(t, 0);
                    p_27 = ATgetArgument(t, 1);
                    q_27 = ATgetArgument(t, 2);
                    u_27 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_27;
                t = map_1_0(x_2, t);
              }
          }
      }
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm f_28 = NULL;
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_28 = ATgetArgument(t, 0);
          {
            ATerm t_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_21);
      t = f_28;
    }
  else
    {
      t = r_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_28;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm u_28 = NULL;
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_28 = ATgetArgument(t, 0);
          {
            ATerm y_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_21);
      t = u_28;
    }
  else
    {
      t = v_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_28;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL;
  a_29 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      z_28 = ATgetArgument(t, 0);
      t = z_28;
    }
  else
    {
      t = a_29;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm o_29 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_29);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      {
        ATerm w_29 = NULL,k_30 = NULL,t_30 = NULL,u_30 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_29 = ATgetArgument(t, 0);
            t = w_29;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                w_29 = ATgetArgument(t, 0);
                k_30 = ATgetArgument(t, 1);
                t_30 = ATgetArgument(t, 2);
                u_30 = ATgetArgument(t, 3);
                t = t_30;
                t = map_1_0(b_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    w_29 = ATgetArgument(t, 0);
                    k_30 = ATgetArgument(t, 1);
                    t_30 = ATgetArgument(t, 2);
                    u_30 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = t_30;
                t = map_1_0(d_3, t);
              }
          }
      }
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm f_31 = NULL;
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_31 = ATgetArgument(t, 0);
          {
            ATerm d_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_22);
      t = f_31;
    }
  else
    {
      t = b_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_31;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm w_31 = NULL;
  ATerm e_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_31 = ATgetArgument(t, 0);
          {
            ATerm h_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_22);
      t = w_31;
    }
  else
    {
      t = e_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_31;
    }
  return(t);
}
ATerm DeclareVariables_0_0 (ATerm t)
{
  ATerm n_25 = NULL,p_25 = NULL,q_25 = NULL,x_25 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      p_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
      x_25 = ATgetArgument(t, 2);
      n_25 = ATgetArgument(t, 3);
      {
        ATerm b_26 = NULL,j_26 = NULL,k_26 = NULL;
        t = x_25;
        t = map_1_0(m_2, t);
        b_26 = t;
        t = n_25;
        t = free_vars_3_0(n_2, q_2, tboundin_3_0, t);
        t = map_1_0(y_2, t);
        j_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_26, b_26);
        t = diff_0_0(t);
        k_26 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, p_25, q_25, x_25, (ATerm) ATmakeAppl(sym_Scope_2, k_26, n_25));
      }
    }
  else
    {
      ATerm n_29 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          p_25 = ATgetArgument(t, 0);
          q_25 = ATgetArgument(t, 1);
          x_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_25;
      t = free_vars_3_0(z_2, a_3, tboundin_3_0, t);
      n_29 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, p_25, q_25, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, n_29, x_25));
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm i_34 = NULL;
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_34 = ATgetArgument(t, 0);
          {
            ATerm n_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_22);
      t = i_34;
    }
  else
    {
      t = l_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_34;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm n_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_34);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm o_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_22);
    }
  else
    {
      t = o_22;
      {
        ATerm p_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            p_34 = ATgetArgument(t, 0);
            t = p_34;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                p_34 = ATgetArgument(t, 0);
                u_34 = ATgetArgument(t, 1);
                v_34 = ATgetArgument(t, 2);
                w_34 = ATgetArgument(t, 3);
                t = v_34;
                t = map_1_0(k_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    p_34 = ATgetArgument(t, 0);
                    u_34 = ATgetArgument(t, 1);
                    v_34 = ATgetArgument(t, 2);
                    w_34 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = v_34;
                t = map_1_0(l_3, t);
              }
          }
      }
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm g_35 = NULL;
  ATerm s_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_35 = ATgetArgument(t, 0);
          {
            ATerm b_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_23);
      t = g_35;
    }
  else
    {
      t = s_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_35;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm s_35 = NULL;
  ATerm c_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_35 = ATgetArgument(t, 0);
          {
            ATerm l_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_23);
      t = s_35;
    }
  else
    {
      t = c_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_35;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm c_36 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_36);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      {
        ATerm i_36 = NULL,k_36 = NULL,o_36 = NULL,r_36 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_36 = ATgetArgument(t, 0);
            t = i_36;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_36 = ATgetArgument(t, 0);
                k_36 = ATgetArgument(t, 1);
                o_36 = ATgetArgument(t, 2);
                r_36 = ATgetArgument(t, 3);
                t = o_36;
                t = map_1_0(s_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_36 = ATgetArgument(t, 0);
                    k_36 = ATgetArgument(t, 1);
                    o_36 = ATgetArgument(t, 2);
                    r_36 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = o_36;
                t = map_1_0(t_3, t);
              }
          }
      }
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm u_37 = NULL;
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_37 = ATgetArgument(t, 0);
          {
            ATerm v_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_23);
      t = u_37;
    }
  else
    {
      t = t_23;
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
static ATerm t_3 (ATerm t)
{
  ATerm o_38 = NULL;
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_38 = ATgetArgument(t, 0);
          {
            ATerm a_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_23);
      t = o_38;
    }
  else
    {
      t = w_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_38;
    }
  return(t);
}
ATerm RDtoSD_0_0 (ATerm t)
{
  ATerm i_33 = NULL,q_33 = NULL,s_33 = NULL,t_33 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      q_33 = ATgetArgument(t, 0);
      s_33 = ATgetArgument(t, 1);
      t_33 = ATgetArgument(t, 2);
      i_33 = ATgetArgument(t, 3);
      {
        ATerm z_33 = NULL,e_34 = NULL,f_34 = NULL;
        t = t_33;
        t = map_1_0(f_3, t);
        z_33 = t;
        t = i_33;
        t = free_vars_3_0(i_3, j_3, tboundin_3_0, t);
        f_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_34, z_33);
        t = diff_0_0(t);
        e_34 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, q_33, s_33, t_33, (ATerm) ATmakeAppl(sym_Scope_2, e_34, (ATerm) ATmakeAppl(sym_SRule_1, i_33)));
      }
    }
  else
    {
      ATerm b_36 = NULL;
      if(match_cons(t, sym_RDef_3))
        {
          q_33 = ATgetArgument(t, 0);
          s_33 = ATgetArgument(t, 1);
          t_33 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_33;
      t = free_vars_3_0(q_3, r_3, tboundin_3_0, t);
      b_36 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, q_33, s_33, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, b_36, (ATerm) ATmakeAppl(sym_SRule_1, t_33)));
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_24 = t;
      int e_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RDtoSD_0_0(t);
          LocalPopChoice(e_24);
        }
      else
        {
          t = d_24;
          t = DeclareVariables_0_0(t);
        }
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
    }
  t = topdown_1_0(w_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  g_39 = t;
  if(match_cons(t, sym_Call_2))
    {
      e_39 = ATgetArgument(t, 0);
      f_39 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_CallT_3, e_39, f_39, (ATerm) ATempty);
    }
  else
    {
      t = g_39;
    }
  return(t);
}
static ATerm w_7 (ATerm h_21, ATerm i_21, ATerm t)
{
  ATerm z_38 = NULL;
  t = i_21;
  t = map_1_0(u_3, t);
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, z_38)), (ATerm) ATmakeAppl(sym_Signature_1, h_21)));
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL;
  u_39 = t;
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            v_39 = ATgetArgument(t, 0);
            {
              ATerm j_24 = ATgetArgument(t, 1);
            }
            {
              ATerm k_24 = ATgetArgument(t, 2);
            }
            {
              ATerm l_24 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_24);
        t = v_39;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
          _fail(t);
        t = u_39;
      }
    else
      {
        t = g_24;
        {
          ATerm m_24 = t;
          int n_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  v_39 = ATgetArgument(t, 0);
                  {
                    ATerm o_24 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm q_24 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm r_24 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(n_24);
              t = v_39;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                _fail(t);
              t = u_39;
            }
          else
            {
              t = m_24;
              {
                ATerm t_24 = t;
                int u_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_ExtSDef_3))
                      {
                        v_39 = ATgetArgument(t, 0);
                        {
                          ATerm v_24 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm w_24 = ATgetArgument(t, 2);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(u_24);
                    t = v_39;
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                      _fail(t);
                    t = u_39;
                  }
                else
                  {
                    t = t_24;
                    if(match_cons(t, sym_ExtSDefInl_4))
                      {
                        v_39 = ATgetArgument(t, 0);
                        {
                          ATerm x_24 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm y_24 = ATgetArgument(t, 2);
                        }
                        {
                          ATerm z_24 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = v_39;
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                      _fail(t);
                    t = u_39;
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm x_7 (ATerm l_21, ATerm m_21, ATerm t)
{
  t = m_21;
  {
    ATerm f_25 = t;
    if((PushChoice() == 0))
      {
        t = fetch_1_0(x_3, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_25;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(CheckATermList(m_21), (ATerm) ATmakeAppl(sym_RDefT_4, term_g_25, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_i_25, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_16), term_j_16))), (ATerm) ATmakeAppl(sym_VarDec_2, term_h_25, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_16), term_j_16))), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, term_s_25, term_a_26, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_h_26), term_e_26))))))), (ATerm) ATmakeAppl(sym_Signature_1, l_21)));
  return(t);
}
ATerm at_end_1_0 (ATerm f_97 (ATerm), ATerm t)
{
  static ATerm q_41 (ATerm t)
  {
    ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
    p_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_41 = ATgetFirst((ATermList) t);
        o_41 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_10 = NULL,a_11 = NULL,c_3 = NULL;
          t = SSLgetAnnotations(p_41);
          x_10 = t;
          t = o_41;
          t = q_41(t);
          a_11 = t;
          t = (ATerm) ATinsert(CheckATermList(a_11), n_41);
          c_3 = t;
          t = SSLsetAnnotations(c_3, x_10);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_41;
        t = f_97(t);
      }
    return(t);
  }
  t = q_41(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
  g_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_40;
    }
  else
    {
      static ATerm a_4 (ATerm t)
      {
        t = not_null(i_40);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_40 = ATgetFirst((ATermList) t);
          if(((i_40 != NULL) && (i_40 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_40;
      t = at_end_1_0(a_4, t);
    }
  return(t);
}
static ATerm k_42 (ATerm w_41, ATerm t)
{
  ATerm x_41 = NULL;
  t = SSL_explode_term(w_41);
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_41;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
  f_42 = t;
  if(match_cons(t, sym__2))
    {
      d_42 = ATgetArgument(t, 0);
      e_42 = ATgetArgument(t, 1);
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_4 (ATerm t)
            {
              t = e_42;
              return(t);
            }
            t = d_42;
            t = at_end_1_0(d_4, t);
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            t = k_42(f_42, t);
          }
      }
    }
  else
    {
      t = k_42(f_42, t);
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_26 = ATgetArgument(t, 0);
      if(((ATgetType(n_26) != AT_LIST) || !(ATisEmpty(n_26))))
        _fail(t);
      {
        ATerm o_26 = ATgetArgument(t, 1);
        if(((ATgetType(o_26) != AT_LIST) || !(ATisEmpty(o_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_26 = ATgetArgument(t, 0);
      if(((ATgetType(p_26) == AT_LIST) && !(ATisEmpty(p_26))))
        {
          u_12 = ATgetFirst((ATermList) p_26);
          v_12 = (ATerm) ATgetNext((ATermList) p_26);
        }
      else
        _fail(t);
      {
        ATerm r_26 = ATgetArgument(t, 1);
        if(((ATgetType(r_26) == AT_LIST) && !(ATisEmpty(r_26))))
          {
            w_12 = ATgetFirst((ATermList) r_26);
            x_12 = (ATerm) ATgetNext((ATermList) r_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_12, w_12), (ATerm) ATmakeAppl(sym__2, v_12, x_12));
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym__2))
    {
      y_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_12), y_12);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm b_13 = NULL,k_13 = NULL,l_13 = NULL;
  if(match_cons(t, sym__2))
    {
      b_13 = ATgetArgument(t, 0);
      l_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13;
  {
    ATerm s_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_26);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_13);
      }
    else
      {
        t = s_26;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_26 = ATgetArgument(t, 0);
            k_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, l_13, k_13);
      }
  }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_26 = ATgetArgument(t, 0);
      if(((ATgetType(y_26) != AT_LIST) || !(ATisEmpty(y_26))))
        _fail(t);
      {
        ATerm z_26 = ATgetArgument(t, 1);
        if(((ATgetType(z_26) != AT_LIST) || !(ATisEmpty(z_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,e_15 = NULL,f_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_27 = ATgetArgument(t, 0);
      if(((ATgetType(a_27) == AT_LIST) && !(ATisEmpty(a_27))))
        {
          b_15 = ATgetFirst((ATermList) a_27);
          c_15 = (ATerm) ATgetNext((ATermList) a_27);
        }
      else
        _fail(t);
      {
        ATerm b_27 = ATgetArgument(t, 1);
        if(((ATgetType(b_27) == AT_LIST) && !(ATisEmpty(b_27))))
          {
            e_15 = ATgetFirst((ATermList) b_27);
            f_15 = (ATerm) ATgetNext((ATermList) b_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_15, e_15), (ATerm) ATmakeAppl(sym__2, c_15, f_15));
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL;
  if(match_cons(t, sym__2))
    {
      g_15 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_15), g_15);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm j_15 = NULL,l_15 = NULL,m_15 = NULL;
  if(match_cons(t, sym__2))
    {
      j_15 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_15;
  {
    ATerm c_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm f_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_27);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_15);
      }
    else
      {
        t = c_27;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_27 = ATgetArgument(t, 0);
            l_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_15, l_15);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm z_119 (ATerm), ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL;
  h_46 = t;
  if(match_cons(t, sym_Scope_2))
    {
      i_46 = ATgetArgument(t, 0);
      j_46 = ATgetArgument(t, 1);
      {
        ATerm p_11 = NULL,a_12 = NULL,e_3 = NULL;
        t = SSLgetAnnotations(h_46);
        p_11 = t;
        t = i_46;
        t = z_119(t);
        a_12 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_12, j_46);
        e_3 = t;
        t = SSLsetAnnotations(e_3, p_11);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          i_46 = ATgetArgument(t, 0);
          j_46 = ATgetArgument(t, 1);
          k_46 = ATgetArgument(t, 2);
          l_46 = ATgetArgument(t, 3);
          {
            ATerm l_12 = NULL,r_12 = NULL,s_12 = NULL,g_3 = NULL;
            t = SSLgetAnnotations(h_46);
            l_12 = t;
            t = k_46;
            t = z_119(t);
            s_12 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_46, s_12);
            t = genzip_4_0(f_4, g_4, h_4, i_4, t);
            r_12 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, i_46, j_46, r_12, l_46);
            g_3 = t;
            t = SSLsetAnnotations(g_3, l_12);
          }
        }
      else
        {
          ATerm l_14 = NULL,t_14 = NULL,u_14 = NULL,h_3 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              i_46 = ATgetArgument(t, 0);
              j_46 = ATgetArgument(t, 1);
              k_46 = ATgetArgument(t, 2);
              l_46 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_46);
          l_14 = t;
          t = k_46;
          t = z_119(t);
          u_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_46, u_14);
          t = genzip_4_0(j_4, k_4, l_4, n_4, t);
          t_14 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, i_46, j_46, t_14, l_46);
          h_3 = t;
          t = SSLsetAnnotations(h_3, l_14);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm c_120 (ATerm), ATerm t)
{
  ATerm o_49 = NULL,q_49 = NULL,t_49 = NULL,u_49 = NULL,y_49 = NULL;
  u_49 = t;
  if(match_cons(t, sym_Scope_2))
    {
      y_49 = ATgetArgument(t, 0);
      o_49 = ATgetArgument(t, 1);
      {
        ATerm d_16 = NULL,m_16 = NULL,n_16 = NULL,m_3 = NULL;
        t = SSLgetAnnotations(u_49);
        d_16 = t;
        t = y_49;
        t = c_120(t);
        m_16 = t;
        t = o_49;
        t = a_120(t);
        n_16 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, m_16, n_16);
        m_3 = t;
        t = SSLsetAnnotations(m_3, d_16);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          y_49 = ATgetArgument(t, 0);
          o_49 = ATgetArgument(t, 1);
          q_49 = ATgetArgument(t, 2);
          t_49 = ATgetArgument(t, 3);
          {
            ATerm l_17 = NULL,a_18 = NULL,b_18 = NULL,d_18 = NULL,e_18 = NULL,n_3 = NULL;
            t = SSLgetAnnotations(u_49);
            l_17 = t;
            t = y_49;
            t = c_120(t);
            a_18 = t;
            t = o_49;
            t = c_120(t);
            b_18 = t;
            t = q_49;
            t = c_120(t);
            d_18 = t;
            t = t_49;
            t = a_120(t);
            e_18 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, a_18, b_18, d_18, e_18);
            n_3 = t;
            t = SSLsetAnnotations(n_3, l_17);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              y_49 = ATgetArgument(t, 0);
              o_49 = ATgetArgument(t, 1);
              q_49 = ATgetArgument(t, 2);
              t_49 = ATgetArgument(t, 3);
              {
                ATerm f_19 = NULL,u_19 = NULL,x_19 = NULL,z_19 = NULL,a_20 = NULL,o_3 = NULL;
                t = SSLgetAnnotations(u_49);
                f_19 = t;
                t = y_49;
                t = c_120(t);
                u_19 = t;
                t = o_49;
                t = c_120(t);
                x_19 = t;
                t = q_49;
                t = c_120(t);
                z_19 = t;
                t = t_49;
                t = a_120(t);
                a_20 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, u_19, x_19, z_19, a_20);
                o_3 = t;
                t = SSLsetAnnotations(o_3, f_19);
              }
            }
          else
            {
              ATerm s_20 = NULL,u_20 = NULL,p_3 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  y_49 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(u_49);
              s_20 = t;
              t = y_49;
              t = a_120(t);
              u_20 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, u_20);
              p_3 = t;
              t = SSLsetAnnotations(p_3, s_20);
            }
        }
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm h_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_50);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      {
        ATerm m_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_27);
          }
        else
          {
            t = m_27;
            {
              ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  j_50 = ATgetArgument(t, 0);
                  k_50 = ATgetArgument(t, 1);
                  l_50 = ATgetArgument(t, 2);
                  m_50 = ATgetArgument(t, 3);
                  t = l_50;
                  t = map_1_0(s_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_50 = ATgetArgument(t, 0);
                      k_50 = ATgetArgument(t, 1);
                      l_50 = ATgetArgument(t, 2);
                      m_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_50;
                  t = map_1_0(t_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm t_50 = NULL;
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_50 = ATgetArgument(t, 0);
          {
            ATerm v_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_27);
      t = t_50;
    }
  else
    {
      t = r_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_50;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm i_51 = NULL;
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_51 = ATgetArgument(t, 0);
          {
            ATerm y_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_27);
      t = i_51;
    }
  else
    {
      t = w_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_51;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm g_50 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      g_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_50;
  t = free_vars_3_0(o_4, p_4, tboundin_3_0, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm o_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_51);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      {
        ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            q_51 = ATgetArgument(t, 0);
            t = q_51;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                q_51 = ATgetArgument(t, 0);
                r_51 = ATgetArgument(t, 1);
                s_51 = ATgetArgument(t, 2);
                t_51 = ATgetArgument(t, 3);
                t = s_51;
                t = map_1_0(z_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    q_51 = ATgetArgument(t, 0);
                    r_51 = ATgetArgument(t, 1);
                    s_51 = ATgetArgument(t, 2);
                    t_51 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = s_51;
                t = map_1_0(a_5, t);
              }
          }
      }
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm b_52 = NULL;
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_52 = ATgetArgument(t, 0);
          {
            ATerm e_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_28);
      t = b_52;
    }
  else
    {
      t = b_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_52;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm k_52 = NULL;
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_52 = ATgetArgument(t, 0);
          {
            ATerm i_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_28);
      t = k_52;
    }
  else
    {
      t = g_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_52;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(x_4, y_4, tboundin_3_0, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm z_52 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_52);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
      {
        ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_53 = ATgetArgument(t, 0);
            t = b_53;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_53 = ATgetArgument(t, 0);
                c_53 = ATgetArgument(t, 1);
                d_53 = ATgetArgument(t, 2);
                e_53 = ATgetArgument(t, 3);
                t = d_53;
                t = map_1_0(d_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    b_53 = ATgetArgument(t, 0);
                    c_53 = ATgetArgument(t, 1);
                    d_53 = ATgetArgument(t, 2);
                    e_53 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = d_53;
                t = map_1_0(e_5, t);
              }
          }
      }
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm m_53 = NULL;
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_53 = ATgetArgument(t, 0);
          {
            ATerm n_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_28);
      t = m_53;
    }
  else
    {
      t = l_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_53;
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm v_53 = NULL;
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_53 = ATgetArgument(t, 0);
          {
            ATerm q_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_28);
      t = v_53;
    }
  else
    {
      t = o_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_53;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm s_52 = NULL,w_52 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      w_52 = ATgetArgument(t, 0);
      t = w_52;
      if(match_cons(t, sym_Rule_3))
        {
          s_52 = ATgetArgument(t, 0);
          {
            ATerm r_28 = ATgetArgument(t, 1);
          }
          {
            ATerm s_28 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = s_52;
      t = free_vars_3_0(b_5, c_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          w_52 = ATgetArgument(t, 0);
          {
            ATerm t_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = w_52;
    }
  return(t);
}
static ATerm d_8 (ATerm i_100 (ATerm), ATerm g_37, ATerm f_37, ATerm t)
{
  static ATerm o_54 (ATerm t)
  {
    ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL;
    j_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_37;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_54 = ATgetFirst((ATermList) t);
            l_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_28 = t;
          int x_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_54;
              {
                static ATerm i_5 (ATerm t)
                {
                  t = f_37;
                  return(t);
                }
                t = e_8(i_100, i_5, k_54, l_54, t);
              }
              t = o_54(t);
              LocalPopChoice(x_28);
            }
          else
            {
              t = v_28;
              {
                ATerm u_21 = NULL,x_21 = NULL,c_4 = NULL;
                t = SSLgetAnnotations(j_54);
                u_21 = t;
                t = l_54;
                t = o_54(t);
                x_21 = t;
                t = (ATerm) ATinsert(CheckATermList(x_21), k_54);
                c_4 = t;
                t = SSLsetAnnotations(c_4, u_21);
              }
            }
        }
      }
    return(t);
  }
  t = g_37;
  t = o_54(t);
  return(t);
}
ATerm foldr_3_0 (ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL;
  v_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_54;
      t = j_102(t);
    }
  else
    {
      ATerm c_55 = NULL,d_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_54 = ATgetFirst((ATermList) t);
          x_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_54;
      t = l_102(t);
      c_55 = t;
      t = x_54;
      t = foldr_3_0(j_102, k_102, l_102, t);
      d_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_55, d_55);
      t = k_102(t);
    }
  return(t);
}
static ATerm e_8 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm k_37, ATerm j_37, ATerm t)
{
  t = m_100(t);
  {
    static ATerm l_5 (ATerm t)
    {
      ATerm n_55 = NULL;
      n_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_37, n_55);
      t = l_100(t);
      return(t);
    }
    t = fetch_1_0(l_5, t);
  }
  t = j_37;
  return(t);
}
static ATerm f_8 (ATerm d_100 (ATerm), ATerm e_37, ATerm d_37, ATerm t)
{
  static ATerm g_56 (ATerm t)
  {
    ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL;
    a_56 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_56;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_56 = ATgetFirst((ATermList) t);
            c_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_28 = t;
          int b_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_56;
              {
                static ATerm p_5 (ATerm t)
                {
                  t = d_37;
                  return(t);
                }
                t = e_8(d_100, p_5, b_56, c_56, t);
              }
              t = g_56(t);
              LocalPopChoice(b_29);
            }
          else
            {
              t = y_28;
              {
                ATerm f_22 = NULL,i_22 = NULL,r_5 = NULL;
                t = SSLgetAnnotations(a_56);
                f_22 = t;
                t = c_56;
                t = g_56(t);
                i_22 = t;
                t = (ATerm) ATinsert(CheckATermList(i_22), b_56);
                r_5 = t;
                t = SSLsetAnnotations(r_5, f_22);
              }
            }
        }
      }
    return(t);
  }
  t = e_37;
  t = g_56(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_29 = ATgetArgument(t, 0);
      if(((ATgetType(c_29) != AT_LIST) || !(ATisEmpty(c_29))))
        _fail(t);
      {
        ATerm d_29 = ATgetArgument(t, 1);
        if(((ATgetType(d_29) != AT_LIST) || !(ATisEmpty(d_29))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_29 = ATgetArgument(t, 0);
      if(((ATgetType(e_29) == AT_LIST) && !(ATisEmpty(e_29))))
        {
          u_56 = ATgetFirst((ATermList) e_29);
          v_56 = (ATerm) ATgetNext((ATermList) e_29);
        }
      else
        _fail(t);
      {
        ATerm h_29 = ATgetArgument(t, 1);
        if(((ATgetType(h_29) == AT_LIST) && !(ATisEmpty(h_29))))
          {
            w_56 = ATgetFirst((ATermList) h_29);
            x_56 = (ATerm) ATgetNext((ATermList) h_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_56, w_56), (ATerm) ATmakeAppl(sym__2, v_56, x_56));
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm y_56 = NULL,d_57 = NULL;
  if(match_cons(t, sym__2))
    {
      y_56 = ATgetArgument(t, 0);
      d_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_57), y_56);
  return(t);
}
static ATerm h_8 (ATerm f_645, ATerm k_645, ATerm i_64, ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL;
  t = SSL_explode_term(k_645);
  if(match_cons(t, sym__2))
    {
      n_56 = ATgetArgument(t, 0);
      p_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_645);
  if(match_cons(t, sym__2))
    {
      if((n_56 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      o_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_56, p_56);
  t = genzip_4_0(s_5, u_5, v_5, _id, t);
  q_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_56, i_64);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm t)
{
  static ATerm f_57 (ATerm t)
  {
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_89(t);
        LocalPopChoice(j_29);
      }
    else
      {
        t = i_29;
        t = v_89(t);
        t = f_57(t);
      }
    return(t);
  }
  t = f_57(t);
  return(t);
}
ATerm for_3_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm t)
{
  t = x_89(t);
  t = while_not_2_0(y_89, z_89, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm o_57 = NULL;
  o_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_57);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_5 = NULL;
  w_57 = t;
  if(match_cons(t, sym__2))
    {
      u_57 = ATgetArgument(t, 0);
      v_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_57);
  t_57 = t;
  t = v_57;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_57, v_57);
  x_5 = t;
  t = SSLsetAnnotations(x_5, t_57);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL;
  x_58 = t;
  if(match_cons(t, sym__2))
    {
      y_58 = ATgetArgument(t, 0);
      z_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_58;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_59 = ATgetFirst((ATermList) t);
      b_59 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_59(y_58, z_58, x_58, t);
            LocalPopChoice(l_29);
          }
        else
          {
            t = k_29;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_58), a_59), b_59);
          }
      }
    }
  else
    {
      t = z_59(y_58, z_58, x_58, t);
    }
  return(t);
}
static ATerm z_59 (ATerm x_57, ATerm y_57, ATerm b_58, ATerm t)
{
  ATerm c_58 = NULL,j_58 = NULL,y_5 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,r_58 = NULL;
  t = SSLgetAnnotations(b_58);
  c_58 = t;
  t = y_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_58 = ATgetFirst((ATermList) t);
      r_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_58;
  if(match_cons(t, sym__2))
    {
      n_58 = ATgetArgument(t, 0);
      o_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_58;
        if((n_58 != t))
          {
            _fail(t);
          }
        t = r_58;
        LocalPopChoice(p_29);
      }
    else
      {
        t = m_29;
        t = y_57;
        t = h_8(n_58, o_58, r_58, t);
      }
  }
  j_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_57, j_58);
  y_5 = t;
  t = SSLsetAnnotations(y_5, c_58);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm y_59 = NULL;
  if(match_cons(t, sym__2))
    {
      y_59 = ATgetArgument(t, 0);
      if((y_59 != ATgetArgument(t, 1)))
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
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(z_5, a_6, c_6, t);
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
      {
        ATerm m_59 = NULL,q_59 = NULL,r_59 = NULL;
        m_59 = t;
        if(match_cons(t, sym__2))
          {
            q_59 = ATgetArgument(t, 0);
            r_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_59;
        t = f_8(d_6, q_59, r_59, t);
      }
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL;
  if(match_cons(t, sym__2))
    {
      e_23 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_8(r_6, e_23, f_23, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm h_23 = NULL;
  if(match_cons(t, sym__2))
    {
      h_23 = ATgetArgument(t, 0);
      if((h_23 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm p_23 = NULL,r_23 = NULL;
  if(match_cons(t, sym__2))
    {
      p_23 = ATgetArgument(t, 0);
      r_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_8(v_6, p_23, r_23, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm s_23 = NULL;
  if(match_cons(t, sym__2))
    {
      s_23 = ATgetArgument(t, 0);
      if((s_23 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm z_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm u_60 (ATerm t)
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_117(t);
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_60 = NULL,j_60 = NULL,u_22 = NULL,v_22 = NULL;
              g_60 = t;
              t = y_117(t);
              j_60 = t;
              t = g_60;
              {
                static ATerm f_6 (ATerm t)
                {
                  ATerm l_60 = NULL;
                  t = u_60(t);
                  l_60 = t;
                  t = (ATerm) ATmakeAppl(sym__2, l_60, j_60);
                  t = diff_0_0(t);
                  return(t);
                }
                t = z_117(f_6, u_60, k_6, t);
              }
              v_22 = t;
              t = SSL_explode_term(v_22);
              if(match_cons(t, sym__2))
                {
                  ATerm x_29 = ATgetArgument(t, 0);
                  u_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_22;
              t = foldr_3_0(p_6, q_6, _id, t);
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              {
                ATerm j_23 = NULL,k_23 = NULL;
                k_23 = t;
                t = SSL_explode_term(k_23);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_29 = ATgetArgument(t, 0);
                    j_23 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_23;
                t = foldr_3_0(s_6, u_6, u_60, t);
              }
            }
        }
      }
    return(t);
  }
  t = u_60(t);
  return(t);
}
ATerm Var_1_0 (ATerm s_68 (ATerm), ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,b_6 = NULL;
  y_60 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_60);
  v_60 = t;
  t = w_60;
  t = s_68(t);
  x_60 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_60);
  b_6 = t;
  t = SSLsetAnnotations(b_6, v_60);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm d_63 = NULL,h_63 = NULL,j_63 = NULL,m_63 = NULL,o_63 = NULL,s_63 = NULL,t_63 = NULL;
  j_63 = t;
  if(match_cons(t, sym__2))
    {
      m_63 = ATgetArgument(t, 0);
      o_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_63 = ATgetFirst((ATermList) t);
      t_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_63;
  if(match_cons(t, sym__2))
    {
      d_63 = ATgetArgument(t, 0);
      h_63 = ATgetArgument(t, 1);
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_63;
            if((m_63 != t))
              {
                _fail(t);
              }
            t = h_63;
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            t = (ATerm) ATmakeAppl(sym__2, m_63, t_63);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, m_63, t_63);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm k_8 (ATerm s_116 (ATerm), ATerm t_116 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_62, ATerm o_62, ATerm n_62, ATerm t)
{
  static ATerm z_6 (ATerm t)
  {
    ATerm c_61 = NULL;
    c_61 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_61, n_62);
    t = s_116(t);
    return(t);
  }
  static ATerm a_7 (ATerm t)
  {
    ATerm d_61 = NULL;
    d_61 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_61, o_62);
    t = s_116(t);
    return(t);
  }
  t = p_62;
  t = t_116(z_6, a_7, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_30 = ATgetArgument(t, 0);
      if(((ATgetType(b_30) != AT_LIST) || !(ATisEmpty(b_30))))
        _fail(t);
      {
        ATerm c_30 = ATgetArgument(t, 1);
        if(((ATgetType(c_30) != AT_LIST) || !(ATisEmpty(c_30))))
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
  ATerm p_61 = NULL,q_61 = NULL,v_61 = NULL,b_62 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_30 = ATgetArgument(t, 0);
      if(((ATgetType(e_30) == AT_LIST) && !(ATisEmpty(e_30))))
        {
          p_61 = ATgetFirst((ATermList) e_30);
          q_61 = (ATerm) ATgetNext((ATermList) e_30);
        }
      else
        _fail(t);
      {
        ATerm f_30 = ATgetArgument(t, 1);
        if(((ATgetType(f_30) == AT_LIST) && !(ATisEmpty(f_30))))
          {
            v_61 = ATgetFirst((ATermList) f_30);
            b_62 = (ATerm) ATgetNext((ATermList) f_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_61, v_61), (ATerm) ATmakeAppl(sym__2, q_61, b_62));
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm c_62 = NULL,s_62 = NULL;
  if(match_cons(t, sym__2))
    {
      c_62 = ATgetArgument(t, 0);
      s_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_62), c_62);
  return(t);
}
static ATerm l_8 (ATerm m_116 (ATerm), ATerm n_116 (ATerm (ATerm), ATerm), ATerm h_62, ATerm k_62, ATerm t)
{
  ATerm g_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,m_61 = NULL;
  t = h_62;
  t = m_116(t);
  g_61 = t;
  t = map_1_0(new_0_0, t);
  i_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_61, i_61);
  t = genzip_4_0(b_7, c_7, d_7, _id, t);
  m_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_61, k_62);
  t = conc_0_0(t);
  j_61 = t;
  t = h_62;
  {
    static ATerm e_7 (ATerm t)
    {
      t = i_61;
      return(t);
    }
    t = n_116(e_7, t);
  }
  k_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_61, k_62, j_61);
  return(t);
}
ATerm env_alltd_1_0 (ATerm t_94 (ATerm), ATerm t)
{
  static ATerm b_65 (ATerm t)
  {
    ATerm g_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_94(t);
        LocalPopChoice(i_30);
      }
    else
      {
        t = g_30;
        {
          ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL;
          static ATerm g_7 (ATerm t)
          {
            ATerm z_23 = NULL;
            z_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_23, not_null(a_65));
            t = b_65(t);
            return(t);
          }
          y_64 = t;
          if(match_cons(t, sym__2))
            {
              z_64 = ATgetArgument(t, 0);
              if(((a_65 != NULL) && (a_65 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                a_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_64;
          t = SRTS_all(g_7, t);
        }
      }
    return(t);
  }
  t = b_65(t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_30 = ATgetArgument(t, 0);
      if(((ATgetType(j_30) != AT_LIST) || !(ATisEmpty(j_30))))
        _fail(t);
      {
        ATerm l_30 = ATgetArgument(t, 1);
        if(((ATgetType(l_30) != AT_LIST) || !(ATisEmpty(l_30))))
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
  ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_30 = ATgetArgument(t, 0);
      if(((ATgetType(m_30) == AT_LIST) && !(ATisEmpty(m_30))))
        {
          x_65 = ATgetFirst((ATermList) m_30);
          y_65 = (ATerm) ATgetNext((ATermList) m_30);
        }
      else
        _fail(t);
      {
        ATerm n_30 = ATgetArgument(t, 1);
        if(((ATgetType(n_30) == AT_LIST) && !(ATisEmpty(n_30))))
          {
            z_65 = ATgetFirst((ATermList) n_30);
            a_66 = (ATerm) ATgetNext((ATermList) n_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_65, z_65), (ATerm) ATmakeAppl(sym__2, y_65, a_66));
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL;
  if(match_cons(t, sym__2))
    {
      b_66 = ATgetArgument(t, 0);
      c_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_66), b_66);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm h_65 = NULL,j_65 = NULL,k_65 = NULL,n_65 = NULL;
  h_65 = t;
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_30 = ATgetArgument(t, 0);
            ATerm r_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(p_30);
        t = h_65;
      }
    else
      {
        t = o_30;
        {
          ATerm w_65 = NULL;
          if(match_cons(t, sym__3))
            {
              j_65 = ATgetArgument(t, 0);
              k_65 = ATgetArgument(t, 1);
              n_65 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, j_65, k_65);
          t = genzip_4_0(q_7, i_8, j_8, _id, t);
          w_65 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_65, n_65);
        }
      }
  }
  return(t);
}
ATerm substitute_6_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm (ATerm), ATerm), ATerm v_115 (ATerm), ATerm w_115 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_115 (ATerm (ATerm), ATerm), ATerm y_115 (ATerm), ATerm t)
{
  ATerm j_66 = NULL,k_66 = NULL;
  static ATerm h_67 (ATerm t)
  {
    static ATerm m_8 (ATerm t)
    {
      static ATerm i_67 (ATerm l_66, ATerm t)
      {
        ATerm m_66 = NULL,i_24 = NULL;
        t = SSL_explode_term(l_66);
        if(match_cons(t, sym__2))
          {
            ATerm s_30 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_30) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_30 = ATgetArgument(t, 1);
              if(((ATgetType(v_30) == AT_LIST) && !(ATisEmpty(v_30))))
                {
                  m_66 = ATgetFirst((ATermList) v_30);
                  {
                    ATerm w_30 = (ATerm) ATgetNext((ATermList) v_30);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_66;
        t = t_115(t);
        i_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_24, not_null(k_66));
        t = lookup_0_0(t);
        t = y_115(t);
        return(t);
      }
      static ATerm j_67 (ATerm o_66, ATerm p_66, ATerm q_66, ATerm t)
      {
        ATerm r_66 = NULL,s_66 = NULL,v_66 = NULL;
        t = q_66;
        t = l_8(v_115, x_115, o_66, p_66, t);
        if(match_cons(t, sym__3))
          {
            r_66 = ATgetArgument(t, 0);
            s_66 = ATgetArgument(t, 1);
            v_66 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = k_8(h_67, w_115, r_66, s_66, v_66, t);
        return(t);
      }
      ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
      a_67 = t;
      if(match_cons(t, sym__2))
        {
          b_67 = ATgetArgument(t, 0);
          c_67 = ATgetArgument(t, 1);
          {
            ATerm x_30 = t;
            int y_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm d_9 (ATerm t)
                {
                  ATerm g_67 = NULL;
                  g_67 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_67, c_67);
                  t = lookup_0_0(t);
                  return(t);
                }
                t = b_67;
                t = u_115(d_9, t);
                LocalPopChoice(y_30);
              }
            else
              {
                t = x_30;
                {
                  ATerm z_30 = t;
                  int a_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = i_67(a_67, t);
                      LocalPopChoice(a_31);
                    }
                  else
                    {
                      t = z_30;
                      t = j_67(b_67, c_67, a_67, t);
                    }
                }
              }
          }
        }
      else
        {
          t = i_67(a_67, t);
        }
      return(t);
    }
    t = env_alltd_1_0(m_8, t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((k_66 != NULL) && (k_66 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_66 = ATgetArgument(t, 0);
      j_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_66, (ATerm) ATempty);
  t = h_67(t);
  return(t);
}
ATerm genzip_4_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm t)
{
  static ATerm s_67 (ATerm t)
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_98(t);
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        {
          ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,r_67 = NULL,e_6 = NULL;
          t = t_98(t);
          r_67 = t;
          if(match_cons(t, sym__2))
            {
              l_67 = ATgetArgument(t, 0);
              m_67 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_67);
          k_67 = t;
          t = l_67;
          t = v_98(t);
          n_67 = t;
          t = m_67;
          t = s_67(t);
          o_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_67, o_67);
          e_6 = t;
          t = SSLsetAnnotations(e_6, k_67);
          t = u_98(t);
        }
      }
    return(t);
  }
  t = s_67(t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_31 = ATgetArgument(t, 0);
      if(((ATgetType(d_31) != AT_LIST) || !(ATisEmpty(d_31))))
        _fail(t);
      {
        ATerm e_31 = ATgetArgument(t, 1);
        if(((ATgetType(e_31) != AT_LIST) || !(ATisEmpty(e_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_31 = ATgetArgument(t, 0);
      if(((ATgetType(g_31) == AT_LIST) && !(ATisEmpty(g_31))))
        {
          i_68 = ATgetFirst((ATermList) g_31);
          j_68 = (ATerm) ATgetNext((ATermList) g_31);
        }
      else
        _fail(t);
      {
        ATerm h_31 = ATgetArgument(t, 1);
        if(((ATgetType(h_31) == AT_LIST) && !(ATisEmpty(h_31))))
          {
            k_68 = ATgetFirst((ATermList) h_31);
            l_68 = (ATerm) ATgetNext((ATermList) h_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_68, k_68), (ATerm) ATmakeAppl(sym__2, j_68, l_68));
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm m_68 = NULL,n_68 = NULL;
  if(match_cons(t, sym__2))
    {
      m_68 = ATgetArgument(t, 0);
      n_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_68), m_68);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm r_68 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_68;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      {
        ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL,y_68 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            u_68 = ATgetArgument(t, 0);
            t = u_68;
            t = free_vars_3_0(s_9, t_9, tboundin_3_0, t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                u_68 = ATgetArgument(t, 0);
                v_68 = ATgetArgument(t, 1);
                w_68 = ATgetArgument(t, 2);
                y_68 = ATgetArgument(t, 3);
                t = w_68;
                t = map_1_0(x_9, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    u_68 = ATgetArgument(t, 0);
                    v_68 = ATgetArgument(t, 1);
                    w_68 = ATgetArgument(t, 2);
                    y_68 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = w_68;
                t = map_1_0(z_9, t);
              }
          }
      }
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm a_69 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_69);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
      {
        ATerm m_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_31);
          }
        else
          {
            t = m_31;
            {
              ATerm c_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  c_69 = ATgetArgument(t, 0);
                  e_69 = ATgetArgument(t, 1);
                  f_69 = ATgetArgument(t, 2);
                  g_69 = ATgetArgument(t, 3);
                  t = f_69;
                  t = map_1_0(u_9, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_69 = ATgetArgument(t, 0);
                      e_69 = ATgetArgument(t, 1);
                      f_69 = ATgetArgument(t, 2);
                      g_69 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_69;
                  t = map_1_0(v_9, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm s_69 = NULL;
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_69 = ATgetArgument(t, 0);
          {
            ATerm q_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_31);
      t = s_69;
    }
  else
    {
      t = o_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_69;
    }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm f_70 = NULL;
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_70 = ATgetArgument(t, 0);
          {
            ATerm t_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_31);
      t = f_70;
    }
  else
    {
      t = r_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_70;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm r_70 = NULL;
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_70 = ATgetArgument(t, 0);
          {
            ATerm x_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_31);
      t = r_70;
    }
  else
    {
      t = u_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_70;
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm b_71 = NULL;
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_71 = ATgetArgument(t, 0);
          {
            ATerm a_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_31);
      t = b_71;
    }
  else
    {
      t = y_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_71 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_71;
    }
  return(t);
}
static ATerm t_8 (ATerm e_88 (ATerm), ATerm p_22, ATerm q_22, ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL;
  t = e_88(t);
  {
    static ATerm l_9 (ATerm t)
    {
      ATerm e_68 = NULL,f_68 = NULL,h_68 = NULL;
      e_68 = t;
      if(match_cons(t, sym_Overlay_3))
        {
          if((p_22 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          f_68 = ATgetArgument(t, 1);
          h_68 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, f_68, q_22);
      t = genzip_4_0(m_9, o_9, p_9, _id, t);
      if(((b_68 != NULL) && (b_68 != t)))
        _fail(t);
      else
        b_68 = t;
      t = h_68;
      if(((c_68 != NULL) && (c_68 != t)))
        _fail(t);
      else
        c_68 = t;
      t = e_68;
      return(t);
    }
    t = fetch_1_0(l_9, t);
  }
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_68), not_null(c_68));
  t = substitute_6_0(q_9, Var_1_0, r_9, tboundin_3_0, tpaste_1_0, _id, t);
  return(t);
}
ATerm topdown_1_0 (ATerm d_90 (ATerm), ATerm t)
{
  static ATerm a_10 (ATerm t)
  {
    t = topdown_1_0(d_90, t);
    return(t);
  }
  t = d_90(t);
  t = SRTS_all(a_10, t);
  return(t);
}
ATerm Trm_to_Cong_0_0 (ATerm t)
{
  ATerm j_71 = NULL,p_71 = NULL;
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_BuildDefault_1))
        {
          ATerm d_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(c_32);
      t = term_o_14;
    }
  else
    {
      t = b_32;
      if(match_cons(t, sym_Real_1))
        {
          p_71 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, p_71));
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              p_71 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, p_71));
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  p_71 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, p_71));
                }
              else
                {
                  if(match_cons(t, sym_Anno_2))
                    {
                      p_71 = ATgetArgument(t, 0);
                      j_71 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_32, (ATerm)ATinsert(ATinsert(ATempty, j_71), p_71), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          p_71 = ATgetArgument(t, 0);
                          j_71 = ATgetArgument(t, 1);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_71), j_71, (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_Var_1))
                            {
                              p_71 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_71), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL;
  c_73 = t;
  if(match_cons(t, sym_Op_2))
    {
      a_73 = ATgetArgument(t, 0);
      b_73 = ATgetArgument(t, 1);
      {
        ATerm h_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_24 = NULL,s_24 = NULL,g_6 = NULL;
            t = SSLgetAnnotations(c_73);
            p_24 = t;
            t = b_73;
            t = map_1_0(trm_to_cong_0_0, t);
            s_24 = t;
            t = (ATerm) ATmakeAppl(sym_Op_2, a_73, s_24);
            g_6 = t;
            t = SSLsetAnnotations(g_6, p_24);
            LocalPopChoice(l_32);
          }
        else
          {
            t = h_32;
            t = c_73;
          }
      }
    }
  else
    {
      t = c_73;
    }
  t = Trm_to_Cong_0_0(t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm k_73 = NULL;
  k_73 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_73, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_16), term_j_16));
  return(t);
}
static ATerm y_7 (ATerm x_22, ATerm z_22, ATerm y_22, ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL;
  t = z_22;
  t = map_1_0(b_10, t);
  h_73 = t;
  t = y_22;
  t = trm_to_cong_0_0(t);
  i_73 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, x_22, h_73, i_73);
  return(t);
}
ATerm repeat_1_0 (ATerm f_89 (ATerm), ATerm t)
{
  static ATerm o_73 (ATerm t)
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_89(t);
        t = o_73(t);
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
      }
    return(t);
  }
  t = o_73(t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      a_74 = ATgetArgument(t, 0);
      b_74 = ATgetArgument(t, 1);
      c_74 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_7(a_74, b_74, c_74, t);
  return(t);
}
static ATerm u_8 (ATerm n_21, ATerm p_21, ATerm o_21, ATerm t)
{
  ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL;
  t = p_21;
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm c_10 (ATerm t)
        {
          static ATerm d_10 (ATerm t)
          {
            ATerm w_73 = NULL,x_73 = NULL;
            static ATerm e_10 (ATerm t)
            {
              t = p_21;
              return(t);
            }
            if(match_cons(t, sym_Op_2))
              {
                w_73 = ATgetArgument(t, 0);
                x_73 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_8(e_10, w_73, x_73, t);
            return(t);
          }
          t = repeat_1_0(d_10, t);
          return(t);
        }
        ATerm r_32 = t;
        if((PushChoice() == 0))
          {
            t = p_21;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_32;
          }
        t = p_21;
        t = topdown_1_0(c_10, t);
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
      }
  }
  r_73 = t;
  t = p_21;
  t = map_1_0(g_10, t);
  t_73 = t;
  t = o_21;
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_10 (ATerm t)
        {
          ATerm u_32 = t;
          int v_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_25 = NULL,e_25 = NULL;
              static ATerm m_10 (ATerm t)
              {
                t = r_73;
                return(t);
              }
              if(match_cons(t, sym_Op_2))
                {
                  a_25 = ATgetArgument(t, 0);
                  e_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_8(m_10, a_25, e_25, t);
              LocalPopChoice(v_32);
            }
          else
            {
              t = u_32;
            }
          return(t);
        }
        ATerm w_32 = t;
        if((PushChoice() == 0))
          {
            t = r_73;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_32;
          }
        t = o_21;
        t = topdown_1_0(h_10, t);
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
      }
  }
  u_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_73, u_73);
  t = conc_0_0(t);
  s_73 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, s_73)), (ATerm) ATmakeAppl(sym_Signature_1, n_21)));
  return(t);
}
static ATerm v_8 (ATerm v_50, ATerm w_50, ATerm t)
{
  ATerm h_74 = NULL;
  t = SSL_fputc(v_50, w_50);
  h_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_74);
  return(t);
}
static ATerm w_8 (ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm i_74 = NULL;
  t = SSL_write_term_to_stream_text(i_32, j_32);
  i_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_74);
  return(t);
}
static ATerm y_8 (ATerm g_96 (ATerm), ATerm p_217, ATerm m_32, ATerm t)
{
  ATerm j_74 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_217, term_x_32);
  t = b_9(t);
  j_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_74, m_32);
  t = g_96(t);
  t = fclose_0_0(t);
  t = m_32;
  return(t);
}
static ATerm x_8 (ATerm e_32, ATerm f_32, ATerm t)
{
  ATerm k_74 = NULL;
  t = SSL_write_term_to_stream_baf(e_32, f_32);
  k_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_74);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm s_74 = NULL,u_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_32 = ATgetArgument(t, 0);
      if(match_cons(y_32, sym_Stream_1))
        {
          s_74 = ATgetArgument(y_32, 0);
        }
      else
        _fail(t);
      u_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_8(s_74, u_74, t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL,d_75 = NULL,e_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_32 = ATgetArgument(t, 0);
      if(match_cons(z_32, sym_Stream_1))
        {
          d_75 = ATgetArgument(z_32, 0);
        }
      else
        _fail(t);
      e_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_8(d_75, e_75, t);
  v_74 = t;
  t = term_a_33;
  w_74 = t;
  t = v_74;
  if(match_cons(t, sym_Stream_1))
    {
      x_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_33, v_74);
  t = v_8(w_74, x_74, t);
  return(t);
}
ATerm output_1_0 (ATerm s_113 (ATerm), ATerm t)
{
  ATerm l_74 = NULL,o_74 = NULL;
  t = s_113(t);
  o_74 = t;
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_33;
        t = get_config_0_0(t);
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
        t = term_e_33;
      }
  }
  l_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_74, o_74);
  {
    ATerm f_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_33;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, l_74, o_74);
        LocalPopChoice(g_33);
        if(match_cons(t, sym__2))
          {
            ATerm j_33 = ATgetArgument(t, 0);
            ATerm k_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_8(o_10, l_74, o_74, t);
      }
    else
      {
        t = f_33;
        if(match_cons(t, sym__2))
          {
            ATerm l_33 = ATgetArgument(t, 0);
            ATerm m_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_8(p_10, l_74, o_74, t);
      }
  }
  return(t);
}
static ATerm s_75 (ATerm m_75, ATerm t)
{
  t = SSL_fclose(m_75);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_75 = NULL,q_75 = NULL;
  q_75 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_75 = ATgetArgument(t, 0);
      {
        ATerm n_33 = t;
        int o_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_75);
            LocalPopChoice(o_33);
          }
        else
          {
            t = n_33;
            t = s_75(q_75, t);
          }
      }
    }
  else
    {
      t = s_75(q_75, t);
    }
  return(t);
}
static ATerm z_8 (ATerm k_32, ATerm t)
{
  t = SSL_read_term_from_stream(k_32);
  return(t);
}
static ATerm a_9 (ATerm x_50, ATerm y_50, ATerm t)
{
  ATerm t_75 = NULL;
  t = SSL_fopen(x_50, y_50);
  t_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_75);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_75 = NULL;
  t = SSL_stdin_stream();
  w_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_75);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_75 = NULL;
  t = SSL_stdout_stream();
  x_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_75);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_75 = NULL;
  t = SSL_stderr_stream();
  y_75 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_75);
  return(t);
}
static ATerm f_77 (ATerm e_76, ATerm t)
{
  ATerm f_76 = NULL;
  t = SSL_explode_term(e_76);
  if(match_cons(t, sym__2))
    {
      ATerm p_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_33 = ATgetArgument(t, 1);
        if(((ATgetType(r_33) == AT_LIST) && !(ATisEmpty(r_33))))
          {
            f_76 = ATgetFirst((ATermList) r_33);
            {
              ATerm u_33 = (ATerm) ATgetNext((ATermList) r_33);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_76;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_76;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_76;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_76;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_77 (ATerm i_76, ATerm j_76, ATerm k_76, ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL,q_76 = NULL,x_6 = NULL;
  t = SSLgetAnnotations(k_76);
  n_76 = t;
  t = i_76;
  if(match_cons(t, sym_Path_1))
    {
      q_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_76, j_76);
  x_6 = t;
  t = SSLsetAnnotations(x_6, n_76);
  if(match_cons(t, sym__2))
    {
      l_76 = ATgetArgument(t, 0);
      m_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_9(l_76, m_76, t);
  return(t);
}
static ATerm h_77 (ATerm s_76, ATerm t_76, ATerm u_76, ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL,a_77 = NULL,y_6 = NULL;
  t = SSLgetAnnotations(u_76);
  x_76 = t;
  t = SSL_is_string(s_76);
  a_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_77, t_76);
  y_6 = t;
  t = SSLsetAnnotations(y_6, x_76);
  if(match_cons(t, sym__2))
    {
      v_76 = ATgetArgument(t, 0);
      w_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_9(v_76, w_76, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
  c_77 = t;
  if(match_cons(t, sym__2))
    {
      d_77 = ATgetArgument(t, 0);
      e_77 = ATgetArgument(t, 1);
      {
        ATerm v_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_77(c_77, t);
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
                  t = g_77(d_77, e_77, c_77, t);
                  LocalPopChoice(y_33);
                }
              else
                {
                  t = x_33;
                  t = h_77(d_77, e_77, c_77, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_77(c_77, t);
    }
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL;
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_77 = NULL;
      l_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_77, term_d_34);
      t = b_9(t);
      LocalPopChoice(c_34);
    }
  else
    {
      t = b_34;
      t = debug_1_0(q_10, t);
      _fail(t);
    }
  j_77 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(k_77, t);
  i_77 = t;
  t = j_77;
  t = fclose_0_0(t);
  t = i_77;
  return(t);
}
ATerm input_1_0 (ATerm t_113 (ATerm), ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_34;
      t = get_config_0_0(t);
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      t = term_k_34;
    }
  t = ReadFromFile_0_0(t);
  t = t_113(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL;
  n_77 = t;
  t = term_r_16;
  t = whoami_0_0(t);
  o_77 = t;
  t = term_l_34;
  q_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_34), o_77), term_m_34);
  r_77 = t;
  t = SSL_printnl(q_77, r_77);
  t = term_s_17;
  p_77 = t;
  t = SSL_exit(p_77);
  t = n_77;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm t_77 = NULL;
  t_77 = t;
  if(match_string(t, "-k"))
    {
      t = t_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_77;
    }
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL;
  u_77 = t;
  t = SSL_string_to_int(u_77);
  v_77 = t;
  t = term_q_34;
  w_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_34, v_77);
  t = j_9(w_77, v_77, t);
  t = u_77;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_10, s_10, t_10, t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm y_77 = NULL;
  y_77 = t;
  if(match_string(t, "-S"))
    {
      t = y_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_77;
    }
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL;
  t = term_s_34;
  z_77 = t;
  t = term_r_17;
  a_78 = t;
  t = term_t_34;
  t = j_9(z_77, a_78, t);
  t = term_x_34;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_y_34;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL;
  b_78 = t;
  t = SSL_string_to_int(b_78);
  c_78 = t;
  t = term_s_34;
  d_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_34, c_78);
  t = j_9(d_78, c_78, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_78);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_z_34;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm e_78 = NULL,f_78 = NULL;
  t = term_a_35;
  e_78 = t;
  t = term_r_16;
  f_78 = t;
  t = term_b_35;
  t = j_9(e_78, f_78, t);
  t = term_c_35;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_d_35;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_35 = t;
  int f_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_10, v_10, w_10, t);
      LocalPopChoice(f_35);
    }
  else
    {
      t = e_35;
      {
        ATerm h_35 = t;
        int i_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_10, z_10, b_11, t);
            LocalPopChoice(i_35);
          }
        else
          {
            t = h_35;
            t = Option_3_0(c_11, d_11, e_11, t);
          }
      }
    }
  return(t);
}
static ATerm j_9 (ATerm y_54, ATerm z_54, ATerm t)
{
  ATerm g_78 = NULL;
  t = term_j_35;
  g_78 = t;
  t = SSL_table_put(g_78, y_54, z_54);
  t = (ATerm) ATmakeAppl(sym__3, term_j_35, y_54, z_54);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL;
      t = term_r_16;
      t = e_0(t);
      l_78 = t;
      t = term_k_35;
      m_78 = t;
      t = term_l_35;
      n_78 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_35, term_l_35, l_78);
      t = h_9(m_78, n_78, l_78, t);
      _fail(t);
    }
  else
    {
      ATerm q_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_78 = ATgetFirst((ATermList) t);
          k_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_78;
      t = c_0(t);
      t = term_r_16;
      t = d_0(t);
      q_78 = t;
      t = (ATerm) ATinsert(CheckATermList(k_78), q_78);
    }
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm s_78 = NULL;
  s_78 = t;
  if(match_string(t, "-o"))
    {
      t = s_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_78;
    }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm t_78 = NULL,u_78 = NULL;
  t_78 = t;
  t = term_d_33;
  u_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_33, t_78);
  t = j_9(u_78, t_78, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_78);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_m_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_11, h_11, i_11, t);
  return(t);
}
static ATerm h_9 (ATerm w_59, ATerm x_59, ATerm v_59, ATerm t)
{
  ATerm w_78 = NULL,x_78 = NULL,y_78 = NULL;
  w_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_59, x_59);
  {
    ATerm n_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_35 = ATgetArgument(t, 0);
            ATerm q_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_59, x_59);
        t = g_9(w_59, x_59, t);
        LocalPopChoice(o_35);
      }
    else
      {
        t = n_35;
        t = (ATerm) ATempty;
      }
  }
  x_78 = t;
  t = (ATerm) ATinsert(CheckATermList(x_78), v_59);
  y_78 = t;
  t = SSL_table_put(w_59, x_59, y_78);
  t = w_78;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL;
      t = term_r_16;
      t = n_0(t);
      j_79 = t;
      t = term_k_35;
      k_79 = t;
      t = term_l_35;
      l_79 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_35, term_l_35, j_79);
      t = h_9(k_79, l_79, j_79, t);
      _fail(t);
    }
  else
    {
      ATerm p_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_79 = ATgetFirst((ATermList) t);
          g_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_79;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_79 = ATgetFirst((ATermList) t);
          i_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_79;
      t = k_0(t);
      t = h_79;
      t = l_0(t);
      p_79 = t;
      t = (ATerm) ATinsert(CheckATermList(i_79), p_79);
    }
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm r_79 = NULL;
  r_79 = t;
  if(match_string(t, "-i"))
    {
      t = r_79;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_79;
    }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm s_79 = NULL,t_79 = NULL;
  s_79 = t;
  t = term_j_34;
  t_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_34, s_79);
  t = j_9(t_79, s_79, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_79);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_11, k_11, l_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_16;
  t = whoami_0_0(t);
  u_79 = t;
  t = term_l_34;
  w_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_35), u_79);
  x_79 = t;
  t = SSL_printnl(w_79, x_79);
  t = term_s_17;
  v_79 = t;
  t = SSL_exit(v_79);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_35;
  t = get_config_0_0(t);
  return(t);
}
static ATerm c_9 (ATerm v_47, ATerm w_47, ATerm t)
{
  ATerm v_35 = t;
  int w_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_47, w_47);
      LocalPopChoice(w_35);
    }
  else
    {
      t = v_35;
      t = SSL_addr(v_47, w_47);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm t)
{
  ATerm z_79 = NULL,a_80 = NULL,b_80 = NULL;
  z_79 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_79;
      t = h_102(t);
    }
  else
    {
      ATerm e_80 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_80 = ATgetFirst((ATermList) t);
          b_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_80;
      t = foldr_2_0(h_102, i_102, t);
      e_80 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_80, e_80);
      t = i_102(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_r_17;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL;
  if(match_cons(t, sym__2))
    {
      t_25 = ATgetArgument(t, 0);
      u_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9(t_25, u_25, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_80 = NULL,l_25 = NULL,m_25 = NULL;
  t = times_0_0(t);
  m_25 = t;
  t = SSL_explode_term(m_25);
  if(match_cons(t, sym__2))
    {
      ATerm x_35 = ATgetArgument(t, 0);
      l_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_25;
  t = foldr_2_0(m_11, n_11, t);
  h_80 = t;
  t = SSL_TicksToSeconds(h_80);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL;
  s_80 = t;
  if(match_cons(t, sym__2))
    {
      t_80 = ATgetArgument(t, 0);
      u_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_80;
        if((t_80 != t))
          {
            _fail(t);
          }
        t = s_80;
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        t = (ATerm) ATmakeAppl(sym__2, t_80, u_80);
        {
          ATerm a_36 = t;
          int d_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_80, u_80);
              LocalPopChoice(d_36);
            }
          else
            {
              t = a_36;
              t = SSL_gtr(t_80, u_80);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_80, u_80);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_110 (ATerm), ATerm t)
{
  ATerm y_80 = NULL;
  y_80 = t;
  {
    ATerm e_36 = t;
    int f_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_81 = NULL;
        t = term_s_34;
        t = get_config_0_0(t);
        a_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_81, term_s_17);
        t = geq_0_0(t);
        t = y_80;
        t = t_110(t);
        LocalPopChoice(f_36);
      }
    else
      {
        t = e_36;
        t = y_80;
      }
  }
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm c_81 = NULL,d_81 = NULL,f_81 = NULL,g_81 = NULL;
  t = run_time_0_0(t);
  c_81 = t;
  t = term_r_16;
  t = whoami_0_0(t);
  d_81 = t;
  t = term_l_34;
  f_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_36), c_81), term_g_36), d_81);
  g_81 = t;
  t = SSL_printnl(f_81, g_81);
  t = (ATerm) ATmakeAppl(sym__2, term_l_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_36), c_81), term_g_36), d_81));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_81 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_17;
  h_81 = t;
  t = SSL_exit(h_81);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm p_81 = NULL,q_81 = NULL;
  q_81 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_81;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_81 = ATgetArgument(t, 0);
          {
            ATerm q_26 = NULL,k_14 = NULL;
            t = SSLgetAnnotations(q_81);
            q_26 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_81);
            k_14 = t;
            t = SSLsetAnnotations(k_14, q_26);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_81;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_113 (ATerm), ATerm t)
{
  ATerm j_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_36;
      t = get_config_0_0(t);
      LocalPopChoice(l_36);
    }
  else
    {
      t = j_36;
      t = fetch_1_0(s_11, t);
    }
  t = j_113(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_81 = NULL,u_81 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_81 = ATgetFirst((ATermList) t);
      u_81 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_81 = NULL,z_81 = NULL;
        static ATerm t_11 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_81)), not_null(z_81));
          return(t);
        }
        t = u_81;
        t = i_0(t);
        if(((y_81 != NULL) && (y_81 != t)))
          _fail(t);
        else
          y_81 = t;
        t = t_81;
        t = g_0(t);
        if(((z_81 != NULL) && (z_81 != t)))
          _fail(t);
        else
          z_81 = t;
        t = u_81;
        t = reverse_acc_2_0(g_0, t_11, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_16;
      t = i_0(t);
    }
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL,p_14 = NULL;
  f_82 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_82);
  d_82 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_82);
  p_14 = t;
  t = SSLsetAnnotations(p_14, d_82);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm h_82 = NULL;
  h_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_82), term_n_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_82 = NULL,c_82 = NULL;
  ATerm p_36 = t;
  int q_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_35;
      t = get_config_0_0(t);
      LocalPopChoice(q_36);
    }
  else
    {
      t = p_36;
      t = fetch_1_0(u_11, t);
    }
  t = term_s_36;
  t = echo_0_0(t);
  t = term_k_35;
  b_82 = t;
  t = term_l_35;
  c_82 = t;
  t = term_t_36;
  t = g_9(b_82, c_82, t);
  t = reverse_acc_2_0(_id, x_11, t);
  t = map_1_0(z_11, t);
  return(t);
}
ATerm fetch_1_0 (ATerm z_96 (ATerm), ATerm t)
{
  static ATerm e_83 (ATerm t)
  {
    ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL;
    b_83 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_83 = ATgetFirst((ATermList) t);
        d_83 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_36 = t;
      int v_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_27 = NULL,g_27 = NULL,v_14 = NULL;
          t = SSLgetAnnotations(b_83);
          d_27 = t;
          t = c_83;
          t = z_96(t);
          g_27 = t;
          t = (ATerm) ATinsert(CheckATermList(d_83), g_27);
          v_14 = t;
          t = SSLsetAnnotations(v_14, d_27);
          LocalPopChoice(v_36);
        }
      else
        {
          t = u_36;
          {
            ATerm t_27 = NULL,d_28 = NULL,w_14 = NULL;
            t = SSLgetAnnotations(b_83);
            t_27 = t;
            t = d_83;
            t = e_83(t);
            d_28 = t;
            t = (ATerm) ATinsert(CheckATermList(d_28), c_83);
            w_14 = t;
            t = SSLsetAnnotations(w_14, t_27);
          }
        }
    }
    return(t);
  }
  t = e_83(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL;
  i_83 = t;
  {
    ATerm w_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_83;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_36 = ATgetFirst((ATermList) t);
                ATerm z_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_83;
          }
        LocalPopChoice(x_36);
      }
    else
      {
        t = w_36;
        t = (ATerm) ATinsert(ATempty, i_83);
      }
  }
  j_83 = t;
  t = term_e_33;
  k_83 = t;
  t = SSL_printnl(k_83, j_83);
  t = i_83;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_35;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm f_9 (ATerm c_45, ATerm d_45, ATerm t)
{
  t = SSL_strcat(c_45, d_45);
  return(t);
}
ATerm debug_1_0 (ATerm e_96 (ATerm), ATerm t)
{
  ATerm o_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL;
  o_83 = t;
  t = e_96(t);
  p_83 = t;
  t = term_l_34;
  q_83 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_83), p_83);
  r_83 = t;
  t = SSL_printnl(q_83, r_83);
  t = o_83;
  return(t);
}
ATerm map_1_0 (ATerm p_96 (ATerm), ATerm t)
{
  static ATerm g_84 (ATerm t)
  {
    ATerm d_84 = NULL,e_84 = NULL,f_84 = NULL;
    d_84 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_84;
      }
    else
      {
        ATerm w_28 = NULL,f_29 = NULL,g_29 = NULL,a_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_84 = ATgetFirst((ATermList) t);
            f_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_84);
        w_28 = t;
        t = e_84;
        t = p_96(t);
        f_29 = t;
        t = f_84;
        t = g_84(t);
        g_29 = t;
        t = (ATerm) ATinsert(CheckATermList(g_29), f_29);
        a_15 = t;
        t = SSLsetAnnotations(a_15, w_28);
      }
    return(t);
  }
  t = g_84(t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(b_37);
    }
  else
    {
      t = a_37;
    }
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_c_37;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_84 = NULL;
      o_84 = t;
      t = SSL_is_string(o_84);
      LocalPopChoice(i_37);
    }
  else
    {
      t = h_37;
      {
        ATerm l_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(b_12, t);
            LocalPopChoice(m_37);
          }
        else
          {
            t = l_37;
            {
              ATerm u_84 = NULL,v_84 = NULL,w_84 = NULL;
              u_84 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_84 = ATgetArgument(t, 0);
                  t = v_84;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_84 = ATgetArgument(t, 0);
                      t = v_84;
                      {
                        ATerm n_37 = t;
                        int o_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(o_37);
                          }
                        else
                          {
                            t = n_37;
                            t = debug_1_0(c_12, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_85 = NULL,b_85 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_84 = ATgetArgument(t, 0);
                          w_84 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_84;
                      t = eval_config_0_0(t);
                      a_85 = t;
                      t = w_84;
                      t = eval_config_0_0(t);
                      b_85 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_85, b_85);
                      t = f_9(a_85, b_85, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_9 (ATerm n_61, ATerm o_61, ATerm t)
{
  t = SSL_table_get(n_61, o_61);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm f_85 = NULL,g_85 = NULL;
  f_85 = t;
  t = term_j_35;
  g_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_35, f_85);
  t = g_9(g_85, f_85, t);
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_85 = NULL,i_85 = NULL;
        t = eval_config_0_0(t);
        h_85 = t;
        t = term_j_35;
        i_85 = t;
        t = SSL_table_put(i_85, f_85, h_85);
        t = h_85;
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
      }
  }
  return(t);
}
static ATerm d_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm l_85 = NULL,m_85 = NULL;
  t = term_r_37;
  l_85 = t;
  t = term_r_16;
  m_85 = t;
  t = term_s_37;
  t = j_9(l_85, m_85, t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_t_37;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL,q_85 = NULL;
  t = term_r_37;
  p_85 = t;
  t = term_r_16;
  q_85 = t;
  t = term_s_37;
  t = j_9(p_85, q_85, t);
  t = term_v_37;
  n_85 = t;
  t = term_r_16;
  o_85 = t;
  t = term_w_37;
  t = j_9(n_85, o_85, t);
  t = term_x_37;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_y_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_12, e_12, f_12, t);
      LocalPopChoice(a_38);
    }
  else
    {
      t = z_37;
      t = Option_3_0(g_12, h_12, i_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_75 (ATerm), ATerm v_75 (ATerm), ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL,x_15 = NULL;
  w_85 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_85 = ATgetFirst((ATermList) t);
      t_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_85);
  r_85 = t;
  t = s_85;
  t = u_75(t);
  u_85 = t;
  t = t_85;
  t = v_75(t);
  v_85 = t;
  t = (ATerm) ATinsert(CheckATermList(v_85), u_85);
  x_15 = t;
  t = SSLsetAnnotations(x_15, r_85);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_115 (ATerm), ATerm t)
{
  ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL,e_86 = NULL,g_86 = NULL,h_86 = NULL,z_15 = NULL;
  b_86 = t;
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_38;
        t = m_115(t);
        LocalPopChoice(c_38);
      }
    else
      {
        t = b_38;
      }
  }
  t = b_86;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_86 = ATgetFirst((ATermList) t);
      e_86 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_86);
  c_86 = t;
  t = term_u_35;
  h_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_35, d_86);
  t = j_9(h_86, d_86, t);
  t = e_86;
  {
    static ATerm r_86 (ATerm t)
    {
      ATerm e_38 = t;
      int f_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_38 = t;
          int h_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_86 = NULL;
              k_86 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_86;
              LocalPopChoice(h_38);
            }
          else
            {
              t = g_38;
              t = m_115(t);
              t = Cons_2_0(_id, r_86, t);
            }
          LocalPopChoice(f_38);
        }
      else
        {
          t = e_38;
          {
            ATerm n_86 = NULL,o_86 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_86 = ATgetFirst((ATermList) t);
                o_86 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_86), (ATerm) ATmakeAppl(sym_Undefined_1, n_86));
          }
        }
      return(t);
    }
    t = r_86(t);
  }
  g_86 = t;
  t = (ATerm) ATinsert(CheckATermList(g_86), (ATerm) ATmakeAppl(sym_Program_1, d_86));
  z_15 = t;
  t = SSLsetAnnotations(z_15, c_86);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm d_87 = NULL;
  d_87 = t;
  if(match_string(t, "--help"))
    {
      t = d_87;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_87;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_87;
        }
    }
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm e_87 = NULL,f_87 = NULL;
  t = term_m_36;
  e_87 = t;
  t = term_r_16;
  f_87 = t;
  t = term_i_38;
  t = j_9(e_87, f_87, t);
  t = term_j_38;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_k_38;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_115 (ATerm), ATerm t)
{
  ATerm w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL;
  y_86 = t;
  t = term_k_35;
  a_87 = t;
  t = term_l_35;
  b_87 = t;
  t = (ATerm) ATempty;
  c_87 = t;
  t = SSL_table_put(a_87, b_87, c_87);
  t = y_86;
  {
    static ATerm j_12 (ATerm t)
    {
      ATerm l_38 = t;
      int m_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_115(t);
          LocalPopChoice(m_38);
        }
      else
        {
          t = l_38;
          {
            ATerm n_38 = t;
            int p_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_12, m_12, n_12, t);
                LocalPopChoice(p_38);
              }
            else
              {
                t = n_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_12, t);
  }
  {
    ATerm q_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_87 = NULL;
        m_87 = t;
        {
          ATerm s_38 = t;
          int t_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_30 = NULL;
              t = m_87;
              {
                ATerm u_38 = t;
                int v_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_36;
                    t = get_config_0_0(t);
                    LocalPopChoice(v_38);
                  }
                else
                  {
                    t = u_38;
                    t = fetch_1_0(o_12, t);
                  }
              }
              t = m_87;
              t = default_system_usage_0_0(t);
              t = term_r_17;
              d_30 = t;
              t = SSL_exit(d_30);
              LocalPopChoice(t_38);
            }
          else
            {
              t = s_38;
              {
                ATerm h_30 = NULL;
                t = term_r_37;
                t = get_config_0_0(t);
                t = m_87;
                t = default_system_about_0_0(t);
                t = term_r_17;
                h_30 = t;
                t = SSL_exit(h_30);
              }
            }
        }
        LocalPopChoice(r_38);
      }
    else
      {
        t = q_38;
        {
          ATerm w_38 = t;
          int x_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL;
              static ATerm p_12 (ATerm t)
              {
                ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL,b_16 = NULL;
                s_87 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_87 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_87);
                q_87 = t;
                t = r_87;
                if(((w_86 != NULL) && (w_86 != t)))
                  _fail(t);
                else
                  w_86 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_87);
                b_16 = t;
                t = SSLsetAnnotations(b_16, q_87);
                return(t);
              }
              t = fetch_1_0(p_12, t);
              t = term_l_34;
              o_87 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_86)), term_y_38);
              p_87 = t;
              t = SSL_printnl(o_87, p_87);
              t = (ATerm) ATmakeAppl(sym__2, term_l_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_86)), term_y_38));
              t = default_system_usage_0_0(t);
              t = term_s_17;
              n_87 = t;
              t = SSL_exit(n_87);
              LocalPopChoice(x_38);
            }
          else
            {
              t = w_38;
            }
        }
      }
  }
  x_86 = t;
  t = term_k_35;
  z_86 = t;
  t = SSL_table_destroy(z_86);
  t = x_86;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t)
{
  ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL;
  t = parse_options_1_0(l_113, t);
  x_87 = t;
  t = term_a_39;
  a_88 = t;
  t = SSL_table_create(a_88);
  t = term_a_39;
  y_87 = t;
  t = term_b_39;
  z_87 = t;
  t = SSL_table_put(y_87, z_87, x_87);
  t = x_87;
  t = n_113(t);
  {
    ATerm c_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_113, t);
        LocalPopChoice(d_39);
      }
    else
      {
        t = c_39;
        {
          ATerm h_39 = t;
          int i_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_113(t);
              t = report_success_0_0(t);
              LocalPopChoice(i_39);
            }
          else
            {
              t = h_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm j_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            LocalPopChoice(m_39);
          }
        else
          {
            t = l_39;
            {
              ATerm n_39 = t;
              int o_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(a_13, d_13, f_13, t);
                  LocalPopChoice(o_39);
                }
              else
                {
                  t = n_39;
                  {
                    ATerm p_39 = t;
                    int q_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(q_39);
                      }
                    else
                      {
                        t = p_39;
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
static ATerm t_12 (ATerm t)
{
  t = input_1_0(h_13, t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm r_88 = NULL,s_88 = NULL;
  t = term_h_33;
  r_88 = t;
  t = term_r_16;
  s_88 = t;
  t = term_r_39;
  t = j_9(r_88, s_88, t);
  t = term_s_39;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_t_39;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = output_1_0(j_13, t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL,l_89 = NULL,m_89 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      ATerm w_39 = ATgetArgument(t, 0);
      if(((ATgetType(w_39) == AT_LIST) && !(ATisEmpty(w_39))))
        {
          ATerm x_39 = ATgetFirst((ATermList) w_39);
          if(match_cons(x_39, sym_Signature_1))
            {
              a_89 = ATgetArgument(x_39, 0);
            }
          else
            _fail(t);
          {
            ATerm y_39 = (ATerm) ATgetNext((ATermList) w_39);
            if(((ATgetType(y_39) == AT_LIST) && !(ATisEmpty(y_39))))
              {
                ATerm z_39 = ATgetFirst((ATermList) y_39);
                if(match_cons(z_39, sym_Overlays_1))
                  {
                    b_89 = ATgetArgument(z_39, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm a_40 = (ATerm) ATgetNext((ATermList) y_39);
                  if(((ATgetType(a_40) == AT_LIST) && !(ATisEmpty(a_40))))
                    {
                      ATerm b_40 = ATgetFirst((ATermList) a_40);
                      if(match_cons(b_40, sym_Strategies_1))
                        {
                          c_89 = ATgetArgument(b_40, 0);
                        }
                      else
                        _fail(t);
                      {
                        ATerm c_40 = (ATerm) ATgetNext((ATermList) a_40);
                        if(((ATgetType(c_40) != AT_LIST) || !(ATisEmpty(c_40))))
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
  t = u_8(a_89, b_89, c_89, t);
  m_89 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_89 = ATgetArgument(t, 0);
      t = d_89;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_89 = ATgetFirst((ATermList) t);
          i_89 = (ATerm) ATgetNext((ATermList) t);
          t = i_89;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_89 = ATgetFirst((ATermList) t);
              l_89 = (ATerm) ATgetNext((ATermList) t);
              t = l_89;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = j_89;
                  if(match_cons(t, sym_Strategies_1))
                    {
                      k_89 = ATgetArgument(t, 0);
                      t = e_89;
                      if(match_cons(t, sym_Signature_1))
                        {
                          h_89 = ATgetArgument(t, 0);
                          {
                            ATerm d_40 = t;
                            int e_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_89;
                                t = x_7(h_89, k_89, t);
                                LocalPopChoice(e_40);
                              }
                            else
                              {
                                t = d_40;
                                t = m_89;
                              }
                          }
                        }
                      else
                        {
                          t = m_89;
                        }
                    }
                  else
                    {
                      t = m_89;
                    }
                }
              else
                {
                  t = m_89;
                }
            }
          else
            {
              t = m_89;
            }
        }
      else
        {
          t = m_89;
        }
    }
  else
    {
      t = m_89;
    }
  if(match_cons(t, sym_Specification_1))
    {
      ATerm f_40 = ATgetArgument(t, 0);
      if(((ATgetType(f_40) == AT_LIST) && !(ATisEmpty(f_40))))
        {
          ATerm j_40 = ATgetFirst((ATermList) f_40);
          if(match_cons(j_40, sym_Signature_1))
            {
              w_88 = ATgetArgument(j_40, 0);
            }
          else
            _fail(t);
          {
            ATerm k_40 = (ATerm) ATgetNext((ATermList) f_40);
            if(((ATgetType(k_40) == AT_LIST) && !(ATisEmpty(k_40))))
              {
                ATerm l_40 = ATgetFirst((ATermList) k_40);
                if(match_cons(l_40, sym_Strategies_1))
                  {
                    x_88 = ATgetArgument(l_40, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm m_40 = (ATerm) ATgetNext((ATermList) k_40);
                  if(((ATgetType(m_40) != AT_LIST) || !(ATisEmpty(m_40))))
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
  t = w_7(w_88, x_88, t);
  if(match_cons(t, sym_Specification_1))
    {
      ATerm n_40 = ATgetArgument(t, 0);
      if(((ATgetType(n_40) == AT_LIST) && !(ATisEmpty(n_40))))
        {
          ATerm o_40 = ATgetFirst((ATermList) n_40);
          if(match_cons(o_40, sym_Signature_1))
            {
              u_88 = ATgetArgument(o_40, 0);
            }
          else
            _fail(t);
          {
            ATerm p_40 = (ATerm) ATgetNext((ATermList) n_40);
            if(((ATgetType(p_40) == AT_LIST) && !(ATisEmpty(p_40))))
              {
                ATerm q_40 = ATgetFirst((ATermList) p_40);
                if(match_cons(q_40, sym_Strategies_1))
                  {
                    v_88 = ATgetArgument(q_40, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm r_40 = (ATerm) ATgetNext((ATermList) p_40);
                  if(((ATgetType(r_40) != AT_LIST) || !(ATisEmpty(r_40))))
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
  t = u_7(u_88, v_88, t);
  t = DesugarListMatching_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(q_12, default_usage_0_0, _id, t_12, t);
  return(t);
}
